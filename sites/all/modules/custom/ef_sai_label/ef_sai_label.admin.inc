<?php

/**
 * Function to generate the SAI label administration form
 */
function ef_sai_label_admin_form($form, &$form_state) {
	global $language;
	//Languages are needed, get them all
	$site_languages = language_list();
	//User language too
	$lang = $language->language;
	//Get all terms from EF Activities vocabulary
	$vocabulary = taxonomy_vocabulary_machine_name_load('ef_activities');
	$terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
	//For each term
	foreach ($terms as $tid => $term) {
		//For each site language
		foreach ($site_languages as $prefix => $lang_obj) {
			//We create a textfield showing the current default values
			$form['tid-' . $tid . '-' . $prefix] = array(
				'#type' => 'textfield', 
				//We add the language
				'#title' => t('SAI label default value for ' . $term->name . ' (' . $lang_obj->name . ')'), 
				//Value from the taxonomy term
				'#default_value' => $term->field_ef_sai_label[$prefix][0]['value'], 
				'#size' => 60, 
				'#maxlength' => 255, 
				//A value is required for the english version, the starting
				//values will be added during installation
				'#required' => $prefix == 'en' ? TRUE : FALSE,
			);
		}
	}	

	//Nice to have a submit button
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
	//We will only save new terms, define a var to check this
	$new = FALSE;
	//For each submitted value...
	foreach ($form_state['values'] as $key => $sai_label) {
		//Key contains tid + language separated by hyphens
		$elements = explode('-', $key);
		//There are drupal form values, those should be skipped
		if ($elements[0] == 'tid') {
			//Get the tid and language
			$tid = $elements[1];
			$lang = $elements[2];
			//Load the term
			$term = taxonomy_term_load($tid);
			//Get the stored value
			$stored = $term->field_ef_sai_label[$lang][0]['value'];
			//If the stored value is different from the submitted one...
			if ($sai_label != $stored) {
				//Update the term adding the new value
				$term->field_ef_sai_label[$lang][0]['value'] = $sai_label;
				//And then save it, maybe this could have a better performance
				//calling back this function once per term and not once per new value
				taxonomy_term_save($term);
				//As we have stored a new value we update the var checking
				//there are new values
				$new = TRUE;
			}
		}
	}
	//We show a different message depending on what we have stored (or not)
	if ($new) {
		drupal_set_message('SAI label: new default values have been stored');
	}
	else {
		drupal_set_message('No values have changed');
	}
}