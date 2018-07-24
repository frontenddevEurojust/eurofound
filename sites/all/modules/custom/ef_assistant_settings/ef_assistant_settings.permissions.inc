<?php


// --- Assistant permissions
function ef_assistant_settings_webform_results_access($node, $account){

	if(isset($node->field_webform_type['und'][0]['tid']) && $node->field_webform_type['und'][0]['tid'] == get_tid()
		&& in_array('Assistant', $account->roles)){

		return TRUE;
	}

}

// --- webform submission access
function ef_assistant_settings_webform_submission_access($node, $submission, $op, $account){

	if(isset($node->field_webform_type['und'][0]['tid']) && $node->field_webform_type['und'][0]['tid'] == get_tid()
		&& in_array('Assistant', $account->roles)){

		switch ($op) {

		    case 'view':
		        return TRUE;
		        break;
			case 'edit':
		        return TRUE;
		        break;
		    case 'delete':
		      	return FALSE;
		      	break;
		    case 'list':
		      	return TRUE;
		      	break;

		}
	}

}

// --- Access for all webform nodes of type 'Reimbursement of meeting expenses' (tid == get_tid())
function ef_assistant_settings_node_access($node, $op, $account){

	if(isset($node->field_webform_type['und'][0]['tid']) == get_tid() && in_array('Assistant', $account->roles)){
		return NODE_ACCESS_ALLOW;
	}

}


// --- get tid
function get_tid(){

	$vocabulary_name = 'webform type';
	$name = 'Reimbursement of Meeting Expenses';

	$query = "SELECT tid
				from taxonomy_term_data
				inner join taxonomy_vocabulary
				on taxonomy_vocabulary.vid = taxonomy_term_data.vid
				where taxonomy_vocabulary.name like :vocabulary_name
				and taxonomy_term_data.name like :name";

	$results = db_query($query, array(':vocabulary_name' => '%' . $vocabulary_name . '%', ':name' => '%' . $name . '%'))->fetchAll();


	return($results[0]->tid);

}
