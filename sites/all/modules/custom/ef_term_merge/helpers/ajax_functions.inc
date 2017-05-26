<?php

/*
* @description: Populate select items. Function dependant on form created in ef_term_merge_form() from ef_term_merge.admin.inc
*/
function _ajax_terms_by_taxonomy($form, &$form_state) 
{

	$vid = $form_state['values']['vocabularies'];
	$terms = taxonomy_get_tree($vid);
	$options = array();

	foreach ($terms as $key => $value) {

		$options[$value->tid] = $value->name . ' (tid:' . $value->tid .')';
	}
	// Update select with new options so that it's populated
	$form['container']['to-select']['terms-list-to-merge']['#options'] = $options;
	// Save #options so that we don't need to load terms each time
	$_SESSION['ef_term_merge']['to-select']['#options'] = $options;

	// Empty selected #options as we change the vocabulary
	$form['container']['terms-selected-to-merge'] = array();

	$form['merge-into']['terms-list-to-merge-into']['#options'] = array(0 => 'Choose one term') + $options;

	if(isset($_SESSION['ef_term_merge']['selected']))
		unset($_SESSION['ef_term_merge']['selected']);

	return array(
	    '#type' => 'ajax',
	    '#commands' => array(
			ajax_command_replace( "#terms-list-to-merge-wrapper", render($form['container']['to-select']['terms-list-to-merge']) ),
			ajax_command_replace( "#terms-selected-to-merge-wrapper", render($form['container']['selected']['terms-selected-to-merge']) ),
			ajax_command_replace( "#terms-list-to-merge-into-wrapper", render($form['merge-into']['terms-list-to-merge-into']) ),
		),
  	);

}

/*
* @description: add new item/s in #options array. Function dependant on form created in ef_term_merge_form() from ef_term_merge.admin.inc
*/
function _ajax_add_selected($form,&$form_state) 
{
	// Update select with new options so that it's populated
	$form['merge-into']['terms-list-to-merge-into']['#options'] = array(0 => 'Choose one term') + $_SESSION['ef_term_merge']['to-select']['#options'];


	if(!isset($_SESSION['ef_term_merge']['selected']['#options']))
	{
		$_SESSION['ef_term_merge']['selected']['#options'] = array();
	}
	if( isset($form_state['input']['terms-list-to-merge']) )
	{
		
		foreach ($form_state['input']['terms-list-to-merge'] as $selected_tid) 
		{
			// If the selected tid does not exist append it
			if(!$_SESSION['ef_term_merge']['selected']['#options'][$selected_tid])
			{
				$_SESSION['ef_term_merge']['selected']['#options'][$selected_tid] = $_SESSION['ef_term_merge']['to-select']['#options'][$selected_tid];
			}
			// Remove from merge into options selected values
			unset($_SESSION['ef_term_merge']['to-select']['#options'][$selected_tid]);
		}
	
		$form['container']['selected']['terms-selected-to-merge']['#options'] = $_SESSION['ef_term_merge']['selected']['#options'];
		$form['merge-into']['terms-list-to-merge-into']['#options'] = array(0 => 'Choose one term') + $_SESSION['ef_term_merge']['to-select']['#options'];
		$form['container']['to-select']['terms-list-to-merge']['#options'] = $_SESSION['ef_term_merge']['to-select']['#options'];
	
	}
	

	return array(
	    '#type' => 'ajax',
	    '#commands' => array(
			ajax_command_replace( "#terms-selected-to-merge-wrapper", render($form['container']['selected']['terms-selected-to-merge']) ),
			ajax_command_replace( "#terms-list-to-merge-into-wrapper", render($form['merge-into']['terms-list-to-merge-into']) ),
			ajax_command_replace( "#terms-list-to-merge-wrapper", render($form['container']['to-select']['terms-list-to-merge']) ),
		),
  	);

}

/*
* @description: remove item/s in #options array. Function dependant on form created in ef_term_merge_form() from ef_term_merge.admin.inc
*/
function _ajax_remove_selected($form,&$form_state)
{

	if(isset($form_state['values']['terms-selected-to-merge']))
	{

		foreach ($form_state['values']['terms-selected-to-merge'] as $tid) 
		{
			unset($_SESSION['ef_term_merge']['selected']['#options'][$tid]);
			
			$term = taxonomy_term_load($tid);
			$_SESSION['ef_term_merge']['to-select']['#options'][$tid] = $term->name . ' (tid:' . $tid .')';
			usort($_SESSION['ef_term_merge']['to-select']['#options'], 'strnatcasecmp');
		}

		$form['container']['selected']['terms-selected-to-merge']['#options'] = $_SESSION['ef_term_merge']['selected']['#options'];
		$form['merge-into']['terms-list-to-merge-into']['#options'] = array(0 => 'Choose one term') + $_SESSION['ef_term_merge']['to-select']['#options'];
		$form['container']['to-select']['terms-list-to-merge']['#options'] = $_SESSION['ef_term_merge']['to-select']['#options'];
	}	

	
	return array(
	    '#type' => 'ajax',
	    '#commands' => array(
			ajax_command_replace( "#terms-selected-to-merge-wrapper", render($form['container']['selected']['terms-selected-to-merge']) ),
			ajax_command_replace( "#terms-list-to-merge-into-wrapper", render($form['merge-into']['terms-list-to-merge-into']) ),
			ajax_command_replace( "#terms-list-to-merge-wrapper", render($form['container']['to-select']['terms-list-to-merge']) ),
	    ),
  	);

}