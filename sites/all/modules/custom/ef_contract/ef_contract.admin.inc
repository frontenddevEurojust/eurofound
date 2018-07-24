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

function ef_contract_contracting_period_form($form, &$form_state) {
 	$curr_date = new DateTime();
 	$new_nec_date = new DateTime("03/01/2018");

	($curr_date > $new_nec_date) ? $new_nec = TRUE : $new_nec = FALSE;

	$contracting_periods = array('2014-2018', '2018-2022');

	$form['ef_contract_enabled_contracting_period'] = array(
    '#type' => 'radios',
    '#title' => t('Contracting period'),
    '#default_value' => $new_nec ? 1 : variable_get('ef_contract_enabled_contracting_period', 0),
    '#options' => $contracting_periods,
    '#description' => t('This setting allows to change the contract framework until 03 March 2018, then it will be set to new NEC framework automatically.'),
    '#disabled' => $new_nec,
	);

	return system_settings_form($form);
}

/**
 * Submit function for the form, saves or deletes emails.
 */
function ef_contract_general_admin_form_submit($form, &$form_state) {
	ef_contract_save_affected_cts($form_state['values']);

  drupal_set_message(t('The new configuration has been saved'));
}