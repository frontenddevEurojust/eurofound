<?php

include_once('helpers/auxiliar_functions.inc');
include_once('helpers/ajax_functions.inc');
include_once('helpers/db_functions.inc');
include_once('helpers/excel_functions.inc');

/*
* FORM builder function
*/
function ef_term_merge_form($form,$form_state){
	
	if ( $_SESSION['ef_term_merge']['confirm'] && $form_state['clicked_button']['#value'] != 'Cancel' ) 
	{

	    $question = t( "Are you sure you want to Merge Terms?" );
	    $path = 'admin/config/ef-term-merge';
	    $description = t( "This action cannot be undone. A log file will be available if 'Confirm' is pressed." );
	    $yes = t( "Confirm" );
	    $no = t( "Cancel" );

	    return confirm_form( $form, $question, $path, $description, $yes, $no );

  	}
  	else 
  	{
  		$_SESSION['ef_term_merge']['confirm'] = 0;
  		
		$form['vocabularies'] = array(
			'#type' => 'select',
			'#title' => t('Vocabularies'),
			'#options' => array(0 => 'Choose one vocabulary') + _retrieve_list_vocabularies(),
			'#multiple' => FALSE,
			'#description' => t('Select one taxonomy'),
			'#ajax' => array(
			    'callback' => '_ajax_terms_by_taxonomy',
	      		'wrapper' => array(
	      						'terms-list-to-merge',
	      						'terms-list-to-merge-into'
	      					),
	      		'method' => 'replace',
	      		'effect' => 'fade',
	      	)
		);

		if(isset($_SESSION['ef_term_merge']['download']))
		{

  			($_SESSION['ef_term_merge']['download']);
  			$form['download_link'] = array(
  				'#markup' => '<a href="/sites/default/files/ef_term_merge/' . $_SESSION['ef_term_merge']['download'] . '">Download report</a>',
  			);

  		}
		/* MAIN CONTAINER */
		// Main container for mid selects
		$form['container'] = array(
			'#type' => 'container',
			'#attributes' => array(
	      		'class' => array('hidden')
	    	),
		);


		// Container for selecting options
		$form['container']['to-select'] = array(
			'#type' => 'container',
		);

		$form['container']['to-select']['terms-list-to-merge'] = array(
			'#type' => 'select',
			'#title' => t('Terms to be merged'),
			'#options' => array(),
			'#size' => 15,
			'#multiple' => TRUE,
			'#validated' => TRUE,
			'#prefix' => '<div id="terms-list-to-merge-wrapper">',
			'#suffix' => '</div>',
		);


		// Container for buttons
		$form['container']['buttons'] = array(
			'#type' => 'container',
		);

		$form['container']['buttons']['add'] = array(
	    	'#type' => 'submit',
	    	'#value' => 'Add',
	    	'#ajax' => array(
	      		'callback' => '_ajax_add_selected',
	      		'wrapper' => 'terms-selected-to-merge-wrapper',
	      		'method' => 'replace',
	      		'effect' => 'fade',
	    	),
	  	);
		$form['container']['buttons']['remove'] = array(
	    	'#type' => 'submit',
	    	'#value' => 'Remove',
	    	'#ajax' => array(
	    		'callback' => '_ajax_remove_selected',
	    		'wrapper' => 'terms-list-to-merge-wrapper',
	    		'method' => 'replace',
	      		'effect' => 'fade',
	    	),
	  	);


		// Container for selected
	  	$form['container']['selected'] = array(
	  		'#type' => 'container',
	  	);

	  	$form['container']['selected']['terms-selected-to-merge'] = array(
			'#type' => 'select',
			'#title' => t('Terms selected'),
			'#options' => array(),
			'#size' => 15,
			'#multiple' => TRUE,
			'#validated' => TRUE,
			'#prefix' => '<div id="terms-selected-to-merge-wrapper">',
			'#suffix' => '</div>',
		);
	  	/* TO MAIN CONTAINER END */

		// Container term to be merged into
		$form['merge-into'] = array(
			'#type' => 'container',
			'#attributes' => array(
	      		'class' => array('hidden')
	    	),
	    );

		$form['merge-into']['terms-list-to-merge-into'] = array(
			'#type' => 'select',
			'#title' => t('Term to merge into'),
			'#options' => array(),
			'#multiple' => FALSE,
			'#prefix' => '<div id="terms-list-to-merge-into-wrapper">',
			'#suffix' => '</div>',
			'#validated' => TRUE,
			'#attributes' => array(
	      		'class' => array('chosen-widget')
	    	),
		);
		$form['merge-into']['submit'] = array(
			'#type' => 'submit',
			'#value' => t('Merge terms'),
			'#submit' => array('_execute_merge_terms'),
			'#validate' => array('_validate_form')
		);

		// JS and CSS attachments
		
		$form['#attached']['js'] = array(
	    	drupal_get_path('module', 'ef_term_merge') . '/ef_term_merge.js'
	  	);


	  	$form['#attached']['css'] = array(
	    	drupal_get_path('module', 'ef_term_merge') . '/ef_term_merge.css'
	  	);
	}

	return $form;
}

/*
* FORM validation function
*/
function _validate_form($form, &$form_state)
{
	// Retrieve variables to be validated
	$terms_selected_options = $_SESSION['ef_term_merge']['selected']['#options'];
	$merge_into = $form_state['values']['terms-list-to-merge-into'];

	if(count($terms_selected_options) == 0 || $merge_into == 0)
	{

		$error_elements = array($form['container']['selected']['terms-selected-to-merge'], $form['merge-into']['terms-list-to-merge-into']);
					
		foreach ($error_elements as $element) 
		{
				form_set_error($element);
		}

		// Reset vocabulary select
		$form_state['input']['vocabularies'] = 0;
		
		$form_state['rebuild'] = TRUE;
		drupal_set_message('At least one term needs to be selected from "Terms to be merged" and another one from "Term to merge into"','error');
	}
}

/*
* FORM submit function
*/
function _execute_merge_terms($form,&$form_state)
{

	// Cancel button use case
	if( $form_state['clicked_button']['#value'] == 'Cancel')
	{
		$_SESSION['ef_term_merge']['confirm'] = 0;
		$form_state['rebuild'] = TRUE;
	}
	
	// Merge terms button use case
	if ( $_SESSION['ef_term_merge']['confirm'] == 0  && $form_state['clicked_button']['#value'] == 'Merge terms') 
	{

	    $_SESSION['ef_term_merge']['confirm'] = 1;
	    // $form_state is stored to have all data available during the process.
	    $_SESSION['ef_term_merge']['state'] = $form_state;
	    $form_state['rebuild'] = TRUE;

  	}
  	else 
  	{
  		// Confirm button use case. Processing starts
  		if($form_state['clicked_button']['#value'] == 'Confirm')
  		{
	  		$_SESSION['ef_term_merge']['confirm'] = 0;
	  		$form_state = $_SESSION['ef_term_merge']['state'];
	  		
	  		

			// Reusing variable defined in ef_content_inventory. Defines vocabulary, field and content type relationship.
			$data_structure = variable_get('ef_content_inventory_taxonomic_fields_by_content_type');

			// Retrieve variables from $form_state and $_SESSION
			$vocabulary =  $form_state['values']['vocabularies'];
			$terms_selected_options = $_SESSION['ef_term_merge']['selected']['#options'];
			$merge_into = $form_state['values']['terms-list-to-merge-into'];

			_reset_session_variables();

			$filename = update_database_tables($vocabulary, $terms_selected_options, $merge_into, $data_structure);
	
			// Reset vocabulary select
			$form_state['input']['vocabularies'] = 0;
      		
      		$form_state['rebuild'] = TRUE;
			$_SESSION['ef_term_merge']['download'] = $filename;
			
			drupal_set_message('Terms have been merged successfully.');
		}
	}
}

