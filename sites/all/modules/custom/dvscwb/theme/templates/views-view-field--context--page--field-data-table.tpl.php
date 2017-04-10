<?php //////////////////////////////////////////////////////////////////////////////// ?>
<?php $assetsPath = drupal_get_path('module', 'dvscwb') . "/theme"; include "$assetsPath/img/loading-animation.svg"; ?> 
<?php //////////////////////////////////////////////////////////////////////////////// ?> 
<?php

/**
 *
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
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 *
 */

	//kprint_r($_GET);
	//kprint_r($row->field_field_data_table[0]["raw"]["tabledata"]);

	$tableData = $row->field_field_data_table[0]["raw"]["tabledata"];
	array_walk_recursive($tableData, 'trim');
	$csvData=$tableData; 
	
	$tableDataHeader = $tableData[0];
	
	foreach($tableData[0] as $key=>$value){
		if($value=="Value"){
			$valueColumnId=$key;
			$tableData[0][$key]="Level of wage bargaining";
			$tableData[0][count($tableData[0])]="Degree of coordination";
		}
	}
	
	foreach($tableData as $key=>$value){
		if($key != 0) {
			foreach($value as $index=>$data){
				if($index == $valueColumnId){
					$pieces = explode(" ", $data);
					$levelValue = $pieces[0];
					unset($pieces[0]);
					$newValue = implode(" ", $pieces);
					$tableData[$key][$index] = $levelValue;
					$tableData[$key][count($tableData[0])] = ucfirst($newValue);
				}
			}
		}
	}

	//kprint_r($view);
	//die();

	$oneItemFlag = count($view->result) == 1;

	if($oneItemFlag){

		$visualizationID = getUniqueContextMapVisualisationIdentifier($view);
		$visualizationLocation = getContextMapLocationDataSource($visualizationID);

		$visualizationIDExists = file_exists($visualizationLocation); //looks as if it is not working
							
		writeArrayTableToCSV($visualizationLocation, $csvData);

		//------ write visualization options to csv

		//$visualizationOptions = getVisualizationOptionsTemplateArray();
		//array_push($visualizationOptions, array("axis.title.y", $drupalTaxonomyVariableUnitName));
		//$visualizationOptionsLocation = getTimeSeriesLocationDataSource($visualizationID . getParametersSeparator() . "options");
		//writeArrayTableToCSV($visualizationOptionsLocation, $visualizationOptions);

?>

	<section class="cwb_visualization">		
		<img id="visualization" width="100%" src="/DVS/render/?plot=cwbContextMap&queryString=<?php print $visualizationID;?>&media=png&width=740" />
	</section>
	<section class="svg_cwb_visualization">		
		<div id="svgContainer" class="hidden"></div>
	</section>
	
	<section id="exportSection">
	  <h3>Export</h3>
	  <div class="exportOptions">      
	    <a href="/DVS/render/?plot=cwbContextMap&queryString=<?php print $visualizationID;?>&media=png&width=740" id="pngExport" class="exportAction proxyAble" target="_blank" >Figure (PNG)</a>	    
	    <a href="/DVS/render/?plot=cwbContextMap&queryString=<?php print $visualizationID;?>&media=svg&width=740" id="svgExport" class="exportAction proxyAble" target="_blank">SVG</a>
	    <a href="javascript:" id="csvExport" class="exportAction proxyAble" download="cwb_exported_data.xls" target="_blank">Data</a>
	    <a href="/DVS/render/?plot=cwbContextMap&queryString=<?php print $visualizationID;?>&media=eps&width=740" id="epsExport" class="exportAction proxyAble" target="_blank">EPS</a>
	    <a href="/DVS/render/?plot=cwbContextMap&queryString=<?php print $visualizationID;?>&media=pdf&width=740" id="pdfExport" class="exportAction proxyAble" target="_blank">PDF</a>
	  </div>
	</section>
	
	<a target="_blank" class="dataSource metaData" href="http://www.uva-aias.net/207"><?php echo t("Based on Visser, ICTWSS 4.0, partly modified and extended by EIRO, Eurofound");?></a>
	
	<?php
		$sanitizedTableData = removeColumnsFromArray($tableData, array('Year'));
		print convertArrayTableToHtmlTable($sanitizedTableData);//$output; 
	?>

<?php
}

?>
