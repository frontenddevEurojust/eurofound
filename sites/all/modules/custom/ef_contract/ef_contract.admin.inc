<?php

function ef_contract_states_and_roles_form($form, &$form_state) {

	$roles = array(
		'Author',
		'Quality Manager',
		'Editor',
		'External Editor',
	);

	$form['ef_contract']['s2'] = array(
		'#markup' => '<h2>S2 Workflow settings</h2>',
		'#weight' => 0,
	);

	

	return $form;
	
}