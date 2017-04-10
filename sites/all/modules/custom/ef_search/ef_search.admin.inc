<?php

/**
 * Module's configuration form.
 */
function ef_search_admin_form($form, &$form_state) {
  $form['ef_search_autocomplete'] = array(
    '#title' => 'Search autocomplete',
    '#type' => 'fieldset',
  );
  $form['ef_search_autocomplete']['ef_search_bundles'] = array(
    '#title' => 'Node types to search through',
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('ef_search_bundles', array()),
  );
  $form['ef_search_autocomplete']['ef_search_ac_categ_limit'] = array(
    '#title' => 'Search AC categories',
    '#description' => 'Limit of categories to show in Search Autocomplete',
    '#type' => 'textfield',
    '#default_value' => variable_get('ef_search_ac_categ_limit', 3),
  );
  $form['ef_search_autocomplete']['ef_search_ac_items_limit'] = array(
    '#title' => 'Search AC items',
    '#description' => 'Limit of items per category to show in Search Autocomplete',
    '#type' => 'textfield',
    '#default_value' => variable_get('ef_search_ac_items_limit', 3),
  );
  $index_id = variable_get('ef_search_ac_index', 'default_multilingual_node_index');
  $form['ef_search_autocomplete']['ef_search_ac_index'] = array(
    '#title' => 'Search AC index',
    '#description' => 'Index to retrive items to show in Search Autocomplete',
    '#type' => 'select',
    '#options' => search_api_index_options_list(),
    '#default_value' => $index_id,
  );
  $index = search_api_index_load($index_id);
  $search_fields = $index->getFulltextFields();
  return system_settings_form($form);
}



function ef_search_settings_form($form, &$form_state) {
	global $user;  

	//if($user->name == 'abegona' || $user->name == 'ilorenzo' || $user->name == 'sgarcia' || $user->name == 'ef_proof_user') 
	//{
		
		$form['ef_search_settings'] = array(
			'#title' => 'Search keywords',
			'#type' => 'fieldset',
		);
		
		$form['ef_search_settings']['ef_search_terms_autocomplete'] = array(
			'#title' => 'Create / Edit Keyword',
			'#description' => t('Please type your keyword and click on Check. Note that if the "Keyword" has more than one word, it will only be boosted when searched by "exact word or phrase"'),
			'#type' => 'textfield',
			'#autocomplete_path' => 'search_terms_autocomplete',
			'#weight' => 1,
			'#prefix' => '<div id="search-term-autocomplete">',
			'#suffix' => '</div>',
			'#required' => TRUE,
		);
	 
		$form['ef_search_settings']['ef_search_term_nodes'] = array(
			'#title' => 'Related nodes',
			'#description' => t('Include nodes for each keyword, separated by commas. Example 12321,44444,55555...'),
			'#type' => 'textfield',
			'#default_value' => '',
			'#weight' => 4,
			'#prefix' => '<div id="search-term-nodes">',
			'#suffix' => '</div>',
			//'#element_validate' => array('term_nodes_validate'),
		);
		
		$form['ef_search_settings']['ef_search_term_nodes_titles'] = array(
			'#title'=> t('These are the titles of the selected keywords.'), 
			'#type' => 'textarea',
			'#description' => t('Node Titles.'),
			'#default_value' =>  '',
			'#weight' => 5,
			'#disabled' => TRUE,
			'#prefix' => '<div id="search-term-nodes-titles">',
			'#suffix' => '</div>',
		);
		
		$form['submit'] = array(
			'#type' => 'submit',
			'#value' => t('Save Keyword'),
			'#weight' => 6,
			/*
			'#ajax' => array(
			'callback' => 'ajax_search_term_nodes2',
			'wrapper' => 'search-term-nodes',
			'method' => 'replace',
			'effect' => 'fade',
			 ),
			
			*/
		);
		
		$form['ef_search_settings']['apply'] = array(
		'#type' => 'button',
		'#value' => t('Check'),
		'#weight' => 2,
		'#group' => 'ef_search_settings',
		'#ajax' => array(
			'callback' => 'ajax_search_term_nodes',
			//'wrapper' => array('search-term-nodes','search-term-nodes-titles'),
			'wrapper' => 'search-term-nodes',
			'method' => 'replace',
			'effect' => 'fade',
			),
		);
		
		$form['ef_search_settings']['clear'] = array(
		'#type' => 'submit',
		'#value' => t('Clear'),
		'#submit' => array('clear_term'),
		'#weight' => 3,
		);
		
		$form['remove'] = array(
		'#type' => 'submit',
		'#value' => t('Remove'),
		'#submit' => array('remove_term'),
		'#weight' => 8,
		);
		
	//}
   return $form;
}




/*
function term_nodes_validate($element, &$form_state, $form) {
   if (empty($element['#value'])) {
		 dpm($element);
		 dpm($form_state);
		 dpm($form);
     form_error($element, t('This field is required.'));
   }
}
*/



function ajax_search_term_nodes($form, $form_state){
	
	
	//$sql = "select node from ef_search_terms where term='".$form_state['values']['ef_search_terms_autocomplete']."'"; 
	$sql = "select node from ef_search_terms where term= _utf8 '".$form_state['values']['ef_search_terms_autocomplete']."' COLLATE utf8_bin"; 
	$result = db_query($sql)->fetchAll();
	
	if(!empty($result[0]->node))
	{
		foreach ($result as $value)
		{
			$form['ef_search_settings']['ef_search_term_nodes']['#value'] = $value->node;
		}
		
		$sql = "select nid,title from node where nid IN (".$form['ef_search_settings']['ef_search_term_nodes']['#value'].");";
		$result = db_query($sql)->fetchAll();
				
		if(!empty($result)){
			
			foreach ($result as $value)
			{
				
				$form['ef_search_settings']['ef_search_term_nodes_titles']['#value'] = $form['ef_search_settings']['ef_search_term_nodes_titles']['#value']. "\n".$value->nid.": ".$value->title;
			}
		}
		else
		{
			$form['ef_search_settings']['ef_search_term_nodes_titles']['#value'] = "";
		}
	}
	else{
		$form['ef_search_settings']['ef_search_term_nodes']['#value'] = "";
	}
	
	
	
	return array(
    '#type' => 'ajax',
    '#commands' => array(
      ajax_command_replace("#search-term-nodes", render($form['ef_search_settings']['ef_search_term_nodes'])),
      ajax_command_replace("#search-term-nodes-titles", render($form['ef_search_settings']['ef_search_term_nodes_titles']))
	
    ),
  );
}


/*function ajax_function_callback($form, $form_state){
	
	
	$sql = "select node from ef_search_terms where term='".$form_state['values']['ef_search_term_nodes_combo']."'"; 
	$result = db_query($sql)->fetchAll();
	foreach ($result as $value) {
    	$form['ef_search_settings']['ef_search_term_nodes']['#value'] = $value->node;
	}
	
	$sql = "select nid,title from node where nid IN (".$form['ef_search_settings']['ef_search_term_nodes']['#value'].");";
	$result = db_query($sql)->fetchAll();
	
	foreach ($result as $value) {
    	$form['ef_search_settings']['ef_search_term_nodes_titles']['#value'] = $form['ef_search_settings']['ef_search_term_nodes_titles']['#value']. "\n".$value->nid.": ".$value->title;
	}
	
	return array(
    '#type' => 'ajax',
    '#commands' => array(
      ajax_command_replace("#search-term-nodes", render($form['ef_search_settings']['ef_search_term_nodes'])),
      ajax_command_replace("#search-term-nodes-titles", render($form['ef_search_settings']['ef_search_term_nodes_titles']))
	
    ),
  );
			
	
}*/

function search_terms_autocomplete($search_string = ''){
	$matches = array();
	//$result = db_query_range('select term,node from ef_search_terms WHERE term LIKE :string', 0,10, array(':string' => '%' .db_like($search_string) . '%' ));
	$result = db_query_range('select term,node from ef_search_terms WHERE term LIKE :string', 0,10, array(':string' => db_like($search_string) . '%' ));
	
	foreach ($result as $item){
		$matches[$item->term] = $item->term;
	}
	
	drupal_json_output($matches);
	
}





