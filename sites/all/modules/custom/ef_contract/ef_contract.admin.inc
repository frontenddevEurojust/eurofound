<?php

function ef_contract_general_admin_form($form, &$form_state) {
	$cts = node_type_get_types();
	$enabled = ef_contract_get_affected_cts();

	$form['ef_contract_affected_cts'] = array(
    '#type' => 'fieldset',
    '#title' => 'Affected Content types',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
	
	foreach ($cts as $key => $ct) {
		$form['ef_contract_affected_cts'][$key] = array(
			'#type' => 'checkbox',
			'#default_value' => in_array($ct->type, $enabled) ? 1 : 0,
			'#title' => $ct->name . ' (' . $ct->type . ')',
		);
	}	

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Configuration'),
  );

	return $form;
}

function ef_contract_assignments_form($form, &$form_state) {
/*
	$form['ef_contract_' . $key] = array(
		'#type' => 'textfield',
		'#title' => 'Texto' ,
	);
*/
	return system_settings_form($form);
}

/**
 * Submit function for the form, saves or deletes emails.
 */
function ef_contract_general_admin_form_submit($form, &$form_state) {
	ef_contract_save_affected_cts($form_state['values']);

  drupal_set_message(t('The new configuration has been saved'));
}

