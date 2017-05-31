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

function search_terms_autocomplete($search_string = ''){
	$matches = array();
	//$result = db_query_range('select term,node from ef_search_terms WHERE term LIKE :string', 0,10, array(':string' => '%' .db_like($search_string) . '%' ));
	$result = db_query_range('select term,node from ef_search_terms WHERE term LIKE :string', 0,10, array(':string' => db_like($search_string) . '%' ));
	
	foreach ($result as $item){
		$matches[$item->term] = $item->term;
	}
	
	drupal_json_output($matches);
	
}

/**
 * Form for topic search configuration
 * all-in-one for search and add topic features
 */
function ef_search_topics_admin_form($form, &$form_state) {
	//Add som CSS
	drupal_add_css(drupal_get_path('module', 'ef_search') . '/ef_search_admin.css');
	//Get stored topics
	$topics = _ef_search_get_searched_topics();
	//Add the Any item for the select element
	$topics_added[0] = '-- Any --';
	//And create the rest of the options for the select element
	if (!empty($topics)) {
		foreach ($topics as $key => $value) {
			$topics_added[$value['tid']] = $value['term'];
		}
	}
	//Get non stored topics for the ADD TOPIC fieldset
	$topics_to_be_added = _ef_search_get_topics();
	//Get session vars to store a topic and its keywords
	//in the search feature if it has been selected.
	//Persistent until reset.
	$selected_tid = $_SESSION['search_topic_conf']['topic_search_selected'];
	$keyword = $_SESSION['search_topic_conf']['keyword'];

	//Defining form elements
	$form['search'] = array(
  	'#type' => 'fieldset',
    '#title' => t('Search topics'),
    '#collapsible' => FALSE,
  );
	
  $form['search']['topic_search_select'] = array(
    '#title' => 'Search by Topic',
    '#type' => 'select',
    '#options' => $topics_added,
    '#default_value' => $_SESSION['search_topic_conf']['topic_search_selected'],
  );

  $form['search']['keyword'] = array(
    '#title' => 'Search by Keyword',
    '#type' => 'textfield',
    '#default_value' => $_SESSION['search_topic_conf']['keyword'],
		'#autocomplete_path' => 'admin/config/search/ef-search-topics/autocomplete',
  );
	
  $form['search']['search'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
    '#name' => 'search_terms_button',
  );

  $form['search']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Reset'),
    '#name' => 'reset_filters_button',
  );

  $form['add'] = array(
  	'#type' => 'fieldset',
    '#title' => t('Add topic'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['add']['topic_add_select'] = array(
    '#title' => 'Add Topic',
    '#type' => 'select',
    '#options' => $topics_to_be_added,
    '#default_value' => $_SESSION['search_topic_conf']['topic_add_selected'],
  );

  $form['add']['keywords'] = array(
    '#title' => 'Add Keywords',
    '#type' => 'textarea',
  );
	
  $form['add']['add'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
    '#name' => 'add_terms_button',
  );

  $stored_topics = _ef_search_get_searched_topics($selected_tid, $keyword);

  //These are the buttons, I prefer to define them here.
  //Probably it is better to define them in the theme
  //function to avoid kinda coupling but I do not like
  //how Drupal works with forms with sortable columns
  //and pagers so I do it myyyy wayyyy
  if (!empty($stored_topics)) {
  	foreach ($stored_topics as $key => $topic) {
  		$form['container'][$topic['tid']]['edit'] = array(
      	'#type' => 'submit',
      	'#value' => t('Edit'),
      	'#name' => 'edit_topic_search_' . $topic['tid'],
    	);
    	$form['container'][$topic['tid']]['delete'] = array(
     		'#type' => 'submit',
      	'#value' => t('Delete'),
      	'#name' => 'delete_topic_search_' . $topic['tid'],
    	);
    }
  }

  return $form;
}

/**
 * Theme function to display the Topic Search 
 * configuration admin form
 */
function theme_ef_search_topics_admin_form($variables) {

	$form = $variables['form'];

	//Define a header for the table
	$header_sort = array(
    array('data' => 'Topic ID', 'field' => 'tid', 'sort' => 'ASC'),
    array('data' => 'Topic', 'field' => 'term', 'sort' => 'ASC'),
    array('data' => 'Keywords'),
    array('data' => 'Operations'),
  );
	
	//This is a mess. Drupal forces to add DB logic in a theme
	//function. I would prefer to do it separately but TableSort and
	//PagerDefault methods must be available to entend the Drupal
	//query.
	$select = db_select('ef_search_topics', 'st');
  $select->fields('st', array('tid', 'term', 'keywords'));

  if ($tid != 0) {
  	$select->condition('st.tid', $tid, '=');
  }

  if ($keyword) {
  	$select->condition('st.keywords', '%' . $keyword . '%', 'LIKE');
  }
  
  //Extend the query with methods for sorting and paging and define
  //the sorting as previously defined header dependent.
  $select = $select
                ->extend('TableSort')
                ->extend('PagerDefault')
                ->orderByHeader($header_sort);

  $result = $select->execute();
	
	//Read the iterable objects' records one by one generating the matrix
	//Here I use the previously defined buttons from the form function.
	foreach ($result as $record) {
		$buttons = drupal_render($form['container'][$record->tid]['edit']);
   	$buttons .= drupal_render($form['container'][$record->tid]['delete']);
   	module_load_include('inc', 'pathauto', 'pathauto');
    $term = pathauto_cleanstring($record->term);
   	$term_link = l($record->term, '/topic/' . $term);
   	$record->keywords = preg_replace('/(?<!\d),|,(?!\d{3})/', ', ', $record->keywords);
		$rows[] = array(
			array('data' => $record->tid),
			array('data' => $term_link),
			array('data' => $record->keywords),
    	array('data' => $buttons),
		);
	}

	//After adding the buttons we must unset the element containing them
	//to prevent them being rendered twice by drupal_render_children()
	//and theme('table'...) which contain rows. This can be subject of 
	//improvement but leave me be.
	unset($form['container']);

	//RENDER!!!!!!!
	$output = drupal_render_children($form);
  $output .= theme('table', array('header' => $header_sort, 'rows' => $rows,));
  $output .= theme('pager');

  return $output;
}

/**
 * Submit function for the admin interface.
 * There are a lot of buttons here with
 * a lot of features, the switch makes the code
 * kinda self-explaining.
 * 
 * Deicided to use $_SESSION to leave $form_state alone,
 * too many cases
 */
function ef_search_topics_admin_form_submit($form, &$form_state) {
	$clicked = $form_state['clicked_button']['#value'];
	switch ($clicked) {
		case 'Search':
			//Make the filter values persistent after form rebuild
			$_SESSION['search_topic_conf']['action'] = 'search';
			$_SESSION['search_topic_conf']['topic_search_selected'] = $form_state['input']['topic_search_select'];
			$_SESSION['search_topic_conf']['keyword'] = $form_state['input']['keyword'];
			break;

		case 'Add':
			//Store the added topic in the DB
			_ef_search_add_topic($form_state['input']['topic_add_select'], $form_state['input']['keywords']);
			//Reset the session var to remove previous searches
			unset($_SESSION['search_topic_conf']);
			//And reload the form
			$form_state['redirect'] = '/admin/config/search/ef-search-topics';
			break;

		case 'Reset':
			//Well, reset.
			unset($_SESSION['search_topic_conf']);
			break;

		case 'Edit':
			//Identify the item to be edited
			$topic_tid = $form_state['clicked_button']['#array_parents'][1];
			//Keep the value handy while we are in the edit form
			$_SESSION['search_topic_conf']['edit_tid'] = $topic_tid;
			//Redirect to the edit form.
			$form_state['redirect'] = 'admin/config/search/ef-search-topics/' . $topic_tid . '/edit';
			break;

		case 'Delete':
			//Identify the item to be deleted
			$topic_tid = $form_state['clicked_button']['#array_parents'][1];
			//Keep the value handy while we are in the delete form
			$_SESSION['search_topic_conf']['delete_tid'] = $topic_tid;
			//Redirect to the delete form.
			$form_state['redirect'] = 'admin/config/search/ef-search-topics/' . $topic_tid . '/delete';
			break;
		
		default:
			//Just in case in the future we add something...
			break;
	}
}

/**
 * Define the topic edit form
 */
function ef_edit_topics_admin_form($form, &$form_state) {
	//Get the topic values
	$topic_added = _ef_search_get_searched_topics($_SESSION['search_topic_conf']['edit_tid']);
	//Define the form elements
	$form['topic_add_select'] = array(
  	'#markup' => '<h3> Edit keywords for: ' . $topic_added[0]['term'] . '</h3>',
  );

	$keywords = preg_replace('/(?<!\d),|,(?!\d{3})/', ', ', $topic_added[0]['keywords']);

  $form['keywords'] = array(
    '#title' => 'Add new Keywords',
    '#type' => 'textarea',
    '#default_value' => $keywords,
  );
	
  $form['save'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#name' => 'save_value_button',
  );

  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel'),
    '#name' => 'cancel_button',
  );

  return $form;
}

/**
 * Submit function for the topic edit form
 */
function ef_edit_topics_admin_form_submit($form, &$form_state) {
	//Identify the clicked button
	$clicked = $form_state['clicked_button']['#value'];
	switch ($clicked) {
		case 'Save':
			$tid = $_SESSION['search_topic_conf']['edit_tid'];
			$keywords = $form_state['input']['keywords'];
			//Save the keywords to the DB
			_ef_search_save_topic($tid, $keywords);
			//Unset, no longer necessary
			unset($_SESSION['search_topic_conf']['edit_tid']);
			//Message
			drupal_set_message('Changes have been saved');
			//Redirecntion to the admin interface and done.
			$form_state['redirect'] = 'admin/config/search/ef-search-topics/';
			break;

		case 'Cancel':
			//Unset, no longer necessary
			unset($_SESSION['search_topic_conf']['edit_tid']);
			//Message
			drupal_set_message('No changes have been performed');
			//Redirecntion to the admin interface and done.
			$form_state['redirect'] = 'admin/config/search/ef-search-topics/';
			break;
		
		default:
			//Just in case in the future we add something...
			break;
	}
}

/**
 * Define the topic delete form
 */
function ef_delete_topics_admin_form($form, &$form_state) {
	$topic_added = _ef_search_get_searched_topics($_SESSION['search_topic_conf']['delete_tid']);

	$keywords = preg_replace('/(?<!\d),|,(?!\d{3})/', ', ', $topic_added[0]['keywords']);

	$form['topic_add_select'] = array(
  	'#markup' => 'This action will remove the following item and its related keywords but the topic will still exist. <p>Topic:</p> <h3>' . $topic_added[0]['term'] . '</h3> <p>Keywords: </p> <p> <b>' . $keywords . '</b></p> <p>This action cannot be undone.</p>',
  );

  $form['confirm'] = array(
    '#type' => 'submit',
    '#value' => t('Confirm'),
    '#name' => 'confirm_deletion_button',
  );

  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel'),
    '#name' => 'cancel_deletion_button',
  );

  return $form;
}

/**
 * Submit function for the topic edit form
 */
function ef_delete_topics_admin_form_submit($form, &$form_state) {
	//Identify the clicked button
	$clicked = $form_state['clicked_button']['#value'];
	switch ($clicked) {
		case 'Confirm':
			//Delete item from the DB
			_ef_search_delete_topic($_SESSION['search_topic_conf']['delete_tid']);
			//Unset, no longer necessary
			unset($_SESSION['search_topic_conf']['delete_tid']);
			//Message
			drupal_set_message('Item has been deleted');
			//Redirecntion to the admin interface and done.
			$form_state['redirect'] = 'admin/config/search/ef-search-topics/';
			break;

		case 'Cancel':
			//Unset, no longer necessary
			unset($_SESSION['search_topic_conf']['delete_tid']);
			//Message
			drupal_set_message('No changes have been done');
			//Redirecntion to the admin interface and done.
			$form_state['redirect'] = 'admin/config/search/ef-search-topics/';
			break;
		
		default:
			
			break;
	}
}

/**
 * Function to clean and format the values added to the DB
 * in the specific way we need them to be saved
 */
function _clean_keywords($string) {
	$keywords_array = explode(',', $string);
	foreach($keywords_array as $key => $keyword) {
		$keyword = check_plain(strtolower($keyword));
		$items[] = trim($keyword);
	}
	$items = array_unique($items);
	$keywords_string = implode(',', $items);
	if (substr($keywords_string, -1) != ',') {
		$keywords_string .= ',';
	}

	return $keywords_string;
}

/**
 * Function to save new values to the DB
 */
function _ef_search_save_topic($tid, $keywords) {
	$keywords = _clean_keywords($keywords);
	db_update('ef_search_topics')
  	->fields(array(
    	'keywords' => $keywords,
  	))
  	->condition('tid', $tid, '=')
  	->execute();
}

/**
 * Function to save new keywords for an existing topic to the DB
 */
function _ef_search_delete_topic($tid) {
	db_delete('ef_search_topics')
  	->condition('tid', $tid)
  	->execute();
}

/**
 * Function to save new values to the DB
 */
function _ef_search_add_topic($tid, $keywords) {
	$term = _ef_search_get_topics($tid);
	$term = implode('', $term);
	$keywords = _clean_keywords($keywords);

	db_insert('ef_search_topics')
    ->fields(array(
  	  'tid' => $tid,
      'term' => $term,
      'keywords' => $keywords,
    ))
    ->execute();
}

/**
 * Function to get topic data from taxonomy term data
 * This is used mostly by the add feature
 */
function _ef_search_get_topics($tid = 0) {
	$topics_added = _ef_search_get_searched_topics();
	if (!empty($topics_added)) {
		foreach ($topics_added as $key => $topic) {
			$tids[] = $topic['tid'];
		}
	}

  $select = db_select('taxonomy_term_data', 'ttd');
  $select->fields('ttd', array('tid', 'name'));
  $select->condition('ttd.vid', '21', '=');
  if (!empty($tids)) {
  	$select->condition('ttd.tid', $tids, 'NOT IN');
  }

  if ($tid != 0) {
  	$select->condition('ttd.tid', $tid, '=');
  }

	$result = $select->execute();

	foreach ($result as $key => $record) {
		$terms[$record->tid] = $record->name;	
	}

	return $terms;
}

/**
 * Function to get topic data from this modules table
 * Used by the search feature
 */
function _ef_search_get_searched_topics($tid = 0, $keyword = NULL) {
  $select = db_select('ef_search_topics', 'st');
  $select->fields('st', array('tid', 'term', 'keywords'));

  if ($tid != 0) {
  	$select->condition('st.tid', $tid, '=');
  }

  if ($keyword) {
  	$select->condition('st.keywords', '%' . $keyword . '%', 'LIKE');
  }

	$result = $select->execute();

	foreach ($result as $key => $record) {
		$terms[$key]['tid'] = $record->tid;
		$terms[$key]['term'] = $record->term;
		$terms[$key]['keywords'] = $record->keywords;	
	}
	
	return $terms;
}