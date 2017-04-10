<?php
/*********************************************************
* Eworx S.A. - 2013, 2014
* @Author kp@eworx.gr, som@eworx.gr
* CWB time series view table field override template
*
* @Depends on Eworx DVS module
* @Description Manipulates the table field data,
* provides the manipulated data to DVS
* calls for the visualization using an img element or
* an svg element based on the client's capabilities
**********************************************************/

if(!isSet($_GET["variables"]) && !isSet($_GET["variables"][0]))
	return;

if(!is_numeric($_GET["variables"][0]))
	return;

/**
 * original comment
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $outputHtmlTable: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */


//------ Dataset unique filename identifier

	$variables = $_GET["variables"];

//------ Variables filtering

	$validVariableIDs = $variables;
	$drupalTaxonomyVariableUnitName = "";


	foreach ($validVariableIDs as &$value) {
		$value = taxonomy_term_load($value);
		if($drupalTaxonomyVariableUnitName == ""){ // find variable unit common between all variables
			$drupalTaxonomyVariableUnitName = $value->field_unit['und'][0]['tid'];
			$drupalTaxonomyVariableUnitName = taxonomy_term_load($drupalTaxonomyVariableUnitName );
			$drupalTaxonomyVariableUnitName = $drupalTaxonomyVariableUnitName->name;
		}
		$value = $value->field_tabular_column_name['und'][0]['value'];
	}

	array_push(
		$validVariableIDs, /*"SeriesID",*/ "Year" /*,		"Comment", "PeriodOfValidity", "DurationOfAgreement" */
	);


//------ Table filtering

	$tableData = $row->field_field_time_series_data[0]['raw']['tabledata'];
	$tableDataHeader = $tableData[0];

	// find the ColumnIndexes to retain
	$retainColumnIndexes = array();
	$columnIndex = -1;
	foreach ($tableDataHeader as &$value) {
		$columnIndex++;
		if(in_array($value, $validVariableIDs))
			array_push($retainColumnIndexes, $columnIndex);
	}

//------ loop through the data and retain the desired row columns.

	$newTableData = array();

	foreach ($tableData as &$value) {
		$newRow = array();
		$row = $value;

		foreach ($retainColumnIndexes as &$value){
			$resultValue = trim($row[$value]);
			array_push($newRow, $resultValue);
		}

		array_push($newTableData, $newRow);
	}

//------ create the html table
	
	$outputHtmlTable = convertArrayTableToHtmlTable($newTableData);

//------ write data to csv if necessary /// bridge to DVS

////////////////////////////////////////////////////////

$oneItemFlag = $view -> total_rows == 1;

?>

<?php
if($oneItemFlag){

	$visualizationID = getUniqueTimeSeriesIdentifier($view, $variables);
	$visualizationLocation = getTimeSeriesLocationDataSource($visualizationID);

	$visualizationIDExists = file_exists($visualizationLocation); //looks as if it is not working
	
	//$newTableData=reIndexArray(emptyNonNumericalRowsForColumns($newTableData, array("CAPNP","CAPRP","CAPNI","CAPRI","LCNP","LCRP","LPNP","LPRP","CPENP","CPERP","LCNI", "LCRI", "LPNI", "LPRI")));
	writeArrayTableToCSV($visualizationLocation, $newTableData);

	//------ write visualization options to csv

	$visualizationOptions = getVisualizationOptionsTemplateArray();
	array_push($visualizationOptions, array("axis.title.y", $drupalTaxonomyVariableUnitName));
	$visualizationOptionsLocation = getTimeSeriesLocationDataSource($visualizationID . getParametersSeparator() . "options");
	writeArrayTableToCSV($visualizationOptionsLocation, $visualizationOptions);

?>

<?php //////////////////////////////////////////////////////////////////////////////// ?>
<?php $assetsPath = drupal_get_path('module', 'dvscwb') . "/theme"; include "$assetsPath/img/loading-animation.svg"; ?> 
<?php //////////////////////////////////////////////////////////////////////////////// ?>

	<section class="cwb_visualization">
		<img id="visualization" width="100%" src="/DVS/render/?plot=cwbTimeSeries&queryString=<?php print $visualizationID;?>&media=png&width=740" />
	</section>
	<section class="svg_cwb_visualization">		
		<div id="svgContainer" class="hidden"></div>
	</section>		

	<p>Three sets of information are available for each country: Quantitative data on collective bargaining outcomes and other pay-related data can be found under ‘Time series’. Qualitative information collected by Eurofound on pay and bargaining developments can be found under ‘Time line’. More country-specific information on pay bargaining can be found under ‘On wage bargaining’.</p>
	
	<section id="exportSection">
		<h3>Export</h3>
		<div class="exportOptions">      
			<a href="/DVS/render/?plot=cwbTimeSeries&queryString=<?php print $visualizationID;?>&media=png&width=740" id="pngExport" class="exportAction proxyAble" target="_blank">Figure (PNG)</a>
			<a href="/DVS/render/?plot=cwbTimeSeries&queryString=<?php print $visualizationID;?>&media=svg&width=740" id="svgExport" class="exportAction proxyAble" target="_blank">SVG</a>
			<a href="javascript:" id="csvExport" class="exportAction proxyAble" download="cwb_exported_data.xls" target="_blank">Data</a>
			<a href="/DVS/render/?plot=cwbTimeSeries&queryString=<?php print $visualizationID;?>&media=eps&width=740" id="epsExport" class="exportAction proxyAble" target="_blank">EPS</a>
			<a href="/DVS/render/?plot=cwbTimeSeries&queryString=<?php print $visualizationID;?>&media=pdf&width=740" id="pdfExport" class="exportAction proxyAble" target="_blank">PDF</a>
		</div>
	</section>  

	<?php print $outputHtmlTable; ?>


<?php

}else{
	$newTableDataToColumnsToRows = convertArrayTableColumnsToRows($newTableData);
	$headers = $newTableData[0];

	for($headerIndex = 0; $headerIndex < count($headers); $headerIndex++){
		$headerMinMax = calculate_min_max($newTableDataToColumnsToRows[$headerIndex]);

	?>

	<span class = "timeSeriesMetaData <?php print $headers[$headerIndex];?> ">
		<span class="strong"><?php print $headers[$headerIndex];?></span>
		<span>from <?php print $headerMinMax[0];?> to <?php print $headerMinMax[1];?></span>
	</span>

<?php
	}
?>

<?php
}
