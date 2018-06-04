<?php

/**
 * Function to generate the SAI label administration form
 */
function ef_sai_label_admin_form($form, &$form_state) {
	global $language;

	$site_languages = language_list();
	$lang = $language->language;

	$vocabulary = taxonomy_vocabulary_machine_name_load('ef_activities');
	$terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));

	foreach ($terms as $tid => $term) {
		foreach ($site_languages as $prefix => $lang_obj) {
			$form['tid-' . $tid . '-' . $prefix] = array(
				'#type' => 'textfield', 
				'#title' => t('SAI label default value for ' . $term->name . ' (' . $lang_obj->name . ')'), 
				'#default_value' => $term->field_ef_sai_label[$prefix][0]['value'], 
				'#size' => 60, 
				'#maxlength' => 255, 
				'#required' => $prefix == 'en' ? TRUE : FALSE,
			);
		}
	}	

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Configuration'),
  );

	return $form;
}

/**
 * Submit function for the SAI label administration form
 */
function ef_sai_label_admin_form_submit($form, &$form_state) {
	$new = FALSE;
	foreach ($form_state['values'] as $key => $sai_label) {
		$elements = explode('-', $key);
		if ($elements[0] == 'tid') {
			$tid = $elements[1];
			$lang = $elements[2];
			$term = taxonomy_term_load($tid);
			$stored = $term->field_ef_sai_label[$lang][0]['value'];
			if ($sai_label != $stored) {
				$term->field_ef_sai_label[$lang][0]['value'] = $sai_label;
				taxonomy_term_save($term);
				$new = TRUE;
			}
		}
	}
	if ($new) {
		drupal_set_message('SAI label: new default values have been stored');
	}
	else {
		drupal_set_message('No values have changed');
	}
}