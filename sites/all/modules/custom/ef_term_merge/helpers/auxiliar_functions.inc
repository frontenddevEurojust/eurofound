<?php
/*
* @description: Return an ordered array populated with vocabulary_id/vocabulary_name key/value pairs for all taxonomies available.
*/
function _retrieve_list_vocabularies()
{

	$vocabularies = taxonomy_get_vocabularies();
	$vocabularies_options;

	foreach ($vocabularies as $key => $value) {
		$vocabularies_options[$key] = $value->name;
	}

	natsort($vocabularies_options);

	return $vocabularies_options;
}

/*
* @description: Clear cache from nodes stored in array
* @params: $array: array containing node identifiers
*/
function _clear_node_list_cache($array)
{

	foreach ($array as $a => $nid) {
		entity_get_controller('node')->resetCache(array($nid));
	}
	
	return;
}

/*
* @description: Receive a database result object and return a well formatted array
* @params: $db_result: executed database statement to iterate over
*          $field: field to be retrieved from results
*/
function _return_formatted_array($db_result, $field) 
{

	$array = array();

	foreach ($db_result as $key => $value) 
	{
			$array[] = $value->{$field};
	}
	

	return $array;
}

/*
* @description: File download function.
*/
function _file_download($file_uri)
{


	if (file_exists($file_uri)) 
	{

	drupal_add_http_header('Content-Description', 'File Transfer');
	drupal_add_http_header('Content-Type', 'application/octet-stream');
	drupal_add_http_header('Content-Disposition', 'attachment');
	drupal_add_http_header('Content-Transfer-Encoding', 'binary');
	drupal_add_http_header('Expires', '0');
	drupal_add_http_header('Cache-Control', 'must-revalidate');
	drupal_add_http_header('Pragma', 'public');
	drupal_add_http_header('Content-Length', filesize($file_uri));
	ob_clean();
	flush();
	ob_end_flush(); //recommended in case of memory issues
	@readfile($file_uri);
	//unlink($file_uri);

	}
	else 
	{
		drupal_set_message('The file does not exist');
	}
}

function _reset_session_variables(){
    unset($_SESSION['ef_term_merge']);
}

/*
* @description: Term merge core process.
* @params: $vocabulary: vocabulary id
*          $terms_selected: array formed by term ids to be merged
*          $merge_into: term id to use as replacement
*          $content_type_field_structure: defines vocabulary, field and content type relationship. 
*/
function update_database_tables($vocabulary, $terms_selected, $merge_into, $content_type_field_structure)
{
	$index = 0;

	$objPHPExcel = initialize_excel_file();
	//Create the writer
	$objWriter = PHPExcel_IOFactory::createWriter($objPHPExcel, "Excel2007");
	// Array of nodes to be passed to logger function
	$nodes_affected = array();
	
	foreach ($terms_selected as $tid => $name) 
	{

		$term_from = taxonomy_term_load($tid);
		
		$term_to = taxonomy_term_load($merge_into);

		$objPHPExcel = select_sheet($objPHPExcel, $index);
		
		foreach ($content_type_field_structure[$vocabulary] as $k => $field_name) 
		{

			// Check field cardinality as we need to distinguish the approach used depending whether it's multivalue or not
			if(_retrieve_field_cardinality($field_name) != 1) 
			{
				// Multivalue. Node's with $merge_into term get removed $tid value. If there is no $merge_into, $tid is replaced by $merge_into.
				// Nodes to be passed for cache clearing process
				$revision_affected_nodes = table_affected_nodes('revision', $field_name, $tid,'entity_id', TRUE);

				// Check field_data_field table
				$nodes_with_merge_into = table_affected_nodes('data', $field_name, $merge_into,'entity_id', FALSE);
				delete_and_update('data', $field_name, $merge_into, $tid, $nodes_with_merge_into,'entity_id');

				// Check field_revision_field table
				$revisions_with_merge_into = table_affected_nodes('revision', $field_name, $merge_into,'revision_id', FALSE);
				
				delete_and_update('revision', $field_name, $merge_into, $tid, $revision_with_merge_into,'revision_id');


				$nodes_affected = array_merge($nodes_affected, $revision_affected_nodes);
			}
			else 
			{
				// Not Multivalue. $merge_into replaces $tid.
				// Check field_data_field table and field_revision_table
				$nodes_altered = _affected_field_data($field_name, $tid, $merge_into);

				$nodes_affected = array_merge($nodes_affected, $nodes_altered);

			}

			$taxonomy_index_nodes = _update_taxonomy_index($tid, $merge_into);

			$nodes_affected = array_merge($nodes_affected, $taxonomy_index_nodes);

			// Only unique values should be logged
			$nodes_updated = array_unique($nodes_affected, SORT_REGULAR);

			// Retrieve nodes data to populate the excel
			$nodes_data = return_nodes_data($nodes_updated);

			$filename = _log_into_excel($objPHPExcel, $nodes_data, $field_name, $term_from, $term_to, $objWriter);
			$index++;
		}

		// Clear taxonomic tables
		_delete_term_in_base_taxonomic_table('taxonomy_term_data', $tid);
		_delete_term_in_base_taxonomic_table('taxonomy_term_hierarchy', $tid);

		_clear_node_list_cache($nodes_updated);
	}

  return $filename;

}




