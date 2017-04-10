<?php

/* Taxonomy edition */
function validate_taxonomy_management($form, &$form_state){

	$phase = $form_state['input']['select_phase'];
	$new_name = $form_state['input']['add_new_term'];
	$edit_name = $form_state['input']['edit_term'];
	$edit_tid = $form_state['input']['edit_tid'];

	// WRONG
	if ($phase == '' && $new_name == '' && $edit_name == '' && $edit_tid == ''){
		drupal_set_message(t('New type name is required'), 'error', FALSE);
	} else {

		// Validate NEW ITEM 
		if ($edit_name == '' && $edit_tid == '') {
			if($phase != '' && $new_name == '') {
				drupal_set_message(t('New type name is required'), 'error', FALSE);
			} elseif ($phase == '' && $new_name != '') {
				drupal_set_message(t('Phase is required'), 'error', FALSE);
			}
		}
		// Validate EDIT MODE
		elseif ($phase == '' && $new_name == '') {
			if($edit_name != '' && $edit_tid == '') {
				drupal_set_message(t('Sorry, it is not possible to update this term'), 'error', FALSE);
			} elseif ($edit_name == '' && $edit_tid != '') {
				drupal_set_message(t('Type name is required'), 'error', FALSE);
			}
		}

	}
 

}
function submit_taxonomy_management($form, &$form_state){

	$phase = $form_state['input']['select_phase'];
	$new_name = $form_state['input']['add_new_term'];
	$edit_name = $form_state['input']['edit_term'];
	$edit_tid = $form_state['input']['edit_tid'];

	$vocabulary_machine_name = 'erm_support_instrument_types';
	$type_vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_machine_name);	

	// Add a new term
	if ($phase != '' && $new_name != '') {

		$term = new stdClass();
		$term->name = $new_name;
		$term->vid = $type_vocabulary->vid;
		$term->parent = $phase;
		$term->vocabulary_machine_name = $vocabulary_machine_name;
		$term->name_field['und'][0]['value'] = $new_name;
		$term->name_field['und'][0]['safe_value'] = trim($new_name);

		$settings['new_name'] = variable_get('ef_erm_support_instrument', $new_name);
		$phase_name = taxonomy_term_load($phase);
		$settings['phase'] = variable_get('ef_erm_support_instrument', $phase_name->name);
    drupal_add_js(array('ef_erm_support_instrument' => $settings), 'setting');		

		taxonomy_term_save($term);
	}

	// Edit a taxonomy term
	if ($edit_name != '' && $edit_tid != '') {
		
		$term = taxonomy_term_load($edit_tid);
		$term->name = $edit_name;

		$settings['updated_tid'] = variable_get('ef_erm_support_instrument', $edit_tid);
    drupal_add_js(array('ef_erm_support_instrument' => $settings), 'setting');		

		taxonomy_term_save($term);
	}

	$form_state['rebuild'] = TRUE;
}
function taxonomy_management_ajax_callback($form, &$form_state){
	return $form['field_type_erm_si'];
}

/* User session variables */
function support_instrument_user_session_variable_saving_function($form, &$form_state){

	// User variable declaration 
	if ( !isset($_SESSION['support_instrument_admin_filters']) ) {
		$_SESSION['support_instrument_admin_filters'] = array();
	}
	
	$support_instrument_admin_filters = &$_SESSION['support_instrument_admin_filters'];	
	
	// Filters
	$nid = $form_state['values']['nid'];
	$native_name = $form_state['values']['field_native_name_erm_si_value'];
	$english_name = $form_state['values']['field_english_name_erm_si_value'];
	$countries = array();
	foreach ($form_state['values']['field_country_erm_si_tid_selective'] as $key => $this_country) {
		$countries[] = $key;
	}
	$country = $countries;
	$types = array();
	foreach ($form_state['values']['field_type_erm_si_tid_selective'] as $key => $this_state) {
		$types[] = $key;
	}
	$type = $types;
	$status = $form_state['values']['status'];
	$states = array();
	foreach ($form_state['values']['state'] as $key => $this_state) {
		$states[] = $key;
	}
	$state = $states;
	$updated_min = urlencode($form_state['values']['changed']['min']);
	$updated_max = urlencode($form_state['values']['changed']['max']);

	// Session variable Store
	$support_instrument_admin_filters['nid'] = $nid;
	$support_instrument_admin_filters['native_name'] = $native_name;
	$support_instrument_admin_filters['english_name'] = $english_name;
	$support_instrument_admin_filters['country'] = $country;
	$support_instrument_admin_filters['type'] = $type;
	$support_instrument_admin_filters['status'] = $status;
	$support_instrument_admin_filters['state'] = $state;
	$support_instrument_admin_filters['updated_min'] = $updated_min;
	$support_instrument_admin_filters['updated_max'] = $updated_max;

}