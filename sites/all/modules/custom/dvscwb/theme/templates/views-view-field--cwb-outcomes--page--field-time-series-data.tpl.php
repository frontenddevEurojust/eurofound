<?php
/*********************************************************
* Eworx S.A. - 2013
* @Author kp@eworx.gr, som@eworx.gr
* CWB time series view table field override template
*
* @Depends on Eworx DVS module
* @Description Manipulates the table field data,
* provides the manipulates data to DVS
* calls for the visualization using an img element or
* an svg element based on the client's capabilities
**********************************************************/



  if(!isSet($_GET["year"]) || !is_numeric($_GET["year"]))
		return;

  if(!isSet($_GET["field_variables_tid"]) || !is_numeric($_GET["field_variables_tid"]))
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

	$variables = array($_GET["field_variables_tid"]); // only one variable // CAPNP
	$year = $_GET["year"];

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

	$tableData = $row->_field_data['field_series_id_node_nid']['entity']->field_time_series_data['und'][0]['tabledata'];


	$tableDataHeader = $tableData[0];

	// find the ColumnIndexes to retain
	$retainColumnIndexes = array();
	$columnIndex = -1;

	foreach ($tableDataHeader as &$value) {
		$columnIndex++;
		if(in_array($value, $validVariableIDs))
			array_push($retainColumnIndexes, $columnIndex);
	}


$country = $row->field_field_country[0]['rendered']['#markup'];
//------ loop through the data and retain the desired row columns.

	$newTableData = array();
	$filteredHeader = array();
	$rowIndex = -1;
	
	foreach ($tableData as &$value) {
		$rowIndex++;
		$newRow = array();
		$row = $value;

		if($rowIndex == 0)
			array_push($newRow, "Country");

		$columnIndex = -1;

		foreach ($retainColumnIndexes as &$value){
			if($row[1] == $year || $rowIndex == 0){
				$columnIndex++;
				if($rowIndex > 0 && $columnIndex == 0)					
					array_push($newRow, $country);
					
				array_push($newRow, $row[$value]);
			}
		}

		if(count($newRow)>0 && $rowIndex>0)
			array_push($newTableData, $newRow);

		if($rowIndex == 0)
			$filteredHeader = $newRow;
	}

//------ create the html table

	if(!isSet($view->tableData)){
		$view->tableData = array($filteredHeader, $newTableData[0]);
	}else{
		if(isset($newTableData[0]) && trim($newTableData[0][2]) != "")
		  array_push($view->tableData, $newTableData[0]);
	}



?> 