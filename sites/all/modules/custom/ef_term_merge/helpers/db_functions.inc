<?php

/*
* @description: Return field cardinality based on field machine name.
* @params: $table: table name
*          $find_value: value to use as strict condition (is equal to)
*/
function _delete_term_in_base_taxonomic_table($table, $find_value)
{
	db_delete($table)->condition('tid', $find_value,'=')->execute();
}

/*
* @description: Update field_data_field and field_revision_field tables based on user input. Optional: Returns list of nodes affected.
* @params: $field_name: field machine name.
*          $find_value: value to use as strict condition(is equal to)
*          $replace_value: value used as replacement.
*/
function _affected_field_data($field_name, $find_value, $replace_value) 
{

	// Revisions are used as they cover field_data cases
	$query = db_select('field_revision_' . $field_name,'a');
	$query->addField('a','entity_id','node_id');
	$query->condition('a.' . $field_name . '_tid',$find_value,'=');
	$query->distinct();

	$nodes = $query->execute();
	
	if(count($nodes > 0)) 
	{
		_update_taxonomic_field_table('data', $field_name, $replace_value, $find_value);
		_update_taxonomic_field_table('revision', $field_name, $replace_value, $find_value);
	}
	
	$result = _return_formatted_array($nodes,'node_id');

	return $result;

}
/*
* Update the table for a taxonomic field. Conditions are optional 
*
* @params: $table: field table name
*          $field_name: field machine name
*          $replace_value: value used as replacement
*          $find_value: value used for where condition
*/

function _update_taxonomic_field_table($table, $field_name, $replace_value, $find_value)
{

	$update = db_update('field_' . $table .'_' . $field_name)->fields(array($field_name . '_tid'  => $replace_value));

	if($find_value)
		$update->condition($field_name . '_tid', $find_value , '=');

	$update->execute();

}
/*
* @description: Return field cardinality based on field machine name.
* @params: $field_name: field machine name.
*/
function _retrieve_field_cardinality($field_name) 
{

	$field_info_query = db_select('field_config', 'a')->fields('a',array('cardinality'))->condition('a.field_name', $field_name, '=')->execute();

	return $field_info_query->fetchObject()->cardinality;

}



/*
* @description: Retrieve a $column for a specific $table for $field_name
* @params: $table: 'data' or 'revision' string
*		   $field_name: field name
*          $tid_value: taxonomic id to filter by in the query
*          $column: column to retrieve by
*          $distinct: boolean to indicate if a distinct query should be performed
*/
function table_affected_nodes($table, $field_name, $tid_value, $column, $distinct) 
{

		$query = db_select('field_' . $table . '_' . $field_name, 'a')->fields('a',array($column))
					->condition('a.' . $field_name . '_tid', $tid_value,'=');

		if($distinct)
			$query->distinct();

		$query = $query->execute();
		$result = _return_formatted_array($query,$column);
		
		return $result;

}

/*
* Return data for a set of $nodes (array). Used later for populating the excel file 
*/
function return_nodes_data($nodes)
{
	$result = array();

	if(count($nodes))
	{
		
		$node_string = implode(",", $nodes);

		$query = "SELECT a.nid, a.title, b.name
			FROM node a
			INNER JOIN node_type b ON a.`type` = b.`type`
			WHERE a.nid IN (" . $node_string . ")";

		$result = db_query($query)->fetchAll();
	}
	

	return $result;
}

/*
* @description: Update and Delete specified table rows based on input taxonomid id ($merge_into)
* @param: $table: 'data' or 'revision' string
*		   $field_name: field name
*          $tid_select: taxonomic id to filter by in the query
*          $column: column to retrieve by
*          $x_with_merge_into: subset of nodes or revisions to exclude
*/
function delete_and_update($table, $field_name, $merge_into, $tid_select, $x_with_merge_into, $column)
{
	$update = db_update('field_' . $table .'_' . $field_name)->fields(array($field_name . '_tid'  => $merge_into))->condition($field_name . '_tid', $tid_select , '=');

	if(count($x_with_merge_into))
	{
		$update->condition($column, $x_with_merge_into ,'NOT IN');

		  // For updating nodes with both values we delete
		$delete = db_delete('field_'. $table . '_' . $field_name)->condition($field_name . '_tid', $tid_select, '=')
		  ->condition($column , $x_with_merge_into ,'IN')
		  ->execute();
	}

	$update->execute();
}

/*
*
*	Updates 'taxonomy_index' table with provided values
*	
*	@param string $field_name
*	@param integer $tid
*	@param integer $merge_into
*	@return array;
*/

function _update_taxonomy_index($tid, $merge_into)
{

	$query = db_select('taxonomy_index','a')->fields('a', array('nid'))->condition('a.tid', $merge_into,'=');
	$query = $query->execute();
	
	$nodes = _return_formatted_array($query,'nid');

	
	$update = db_update('taxonomy_index')
				->fields(array('tid'  => $merge_into))
				->condition('tid', $tid, '=');
	
	
	if(count($nodes))
	{
		
		$update->condition('nid', $nodes ,'NOT IN');

		$delete = db_delete('taxonomy_index')->condition('tid', $tid, '=')
		  ->condition('nid' , $nodes, 'IN')
		  ->execute();	
	
	}

				
	$update->execute();


	return $nodes;
			
}

function _delete_term_in_url_alias($tid)
{
	$delete = db_delete('url_alias')->condition('source', 'taxonomy/term/' . $tid, '=')->execute();	
}