<?php 

include_once "helpers/auxiliar_functions.inc";
include_once "helpers/db_functions.inc";

/*
* @description: My group todo list form creation
*/
function my_group_todo_list_form($form,$form_state){

	global $user;

	// url for creating header links and ordering
  	$url = $_SERVER["REQUEST_URI"];
 	
 	// boolean to control #default_value population
  	$default;

  	if( $_GET['title'] || $_GET['country_groups'] || $_GET['types'] || $_GET['order'] )
  	{
    	$country_groups = _retrieve_table_data($user->uid, $_GET['title'], $_GET['types'], $_GET['country_groups'], $_GET['order']);
  		$default = TRUE;
  	} 
  	else 
  	{
  		$default = FALSE;
    	$country_groups = _retrieve_table_data($user->uid, null, array(), null);
  	}

	$form['my-dashboard'] = array(
    	'#markup' => '<a href="my-dashboard"><i class="fa fa-undo"></i> Back to my dashboard</a>',
    	'#prefix' => '<p class="go-back-to">',
    	'#suffix' => '</p>'
    );

	$form['filters'] = array(
		'#title' => 'Filters',
		'#type' => 'fieldset',
    	'#collapsible' => TRUE, 
    	'#collapsed' => FALSE,
	);
	// populate #options based on what belongs to one user's country groups'
	$all_country_groups = array();
	
	foreach (_retrieve_country_groups_per_user($user->uid,$user->roles,null) as $key => $value) 
	{
		$all_country_groups[$value->country_group_id] = $value->country_group_name;	
	}

	if( in_array('Quality Manager', $user->roles) || in_array('Quality Manager +', $user->roles) )
	{
		$form['filters']['country_group'] = array(
			'#title' => 'Country Group',
		 	'#type' => 'select',
		 	'#options' => $all_country_groups,
		 	'#multiple' => TRUE,
		 	'#attributes' => array(
	      		'class' => array('chosen-widget')
	      	)
		);

		// For QMs display 10 nodes per group
		$limit = 10;
	}
	
	if( in_array('Author', $user->roles) || in_array('Author +', $user->roles) )
	{
		
		$form['filters']['title'] = array(
			'#title' => 'Title',
			'#type' => 'textfield',
			'#default_value' => $_GET['title'],
		);

		// Filter population based on retrieved different content types
		$content_types = _retrieve_list_of_content_types($user->uid);

		foreach ($_GET['types'] as $key => $value) {
			$type_defaults[str_replace("_", " ", $value)] = str_replace("_", " ", $value);
		}

		$form['filters']['type'] = array(
			'#type' => 'select',
			'#title' => 'Content type',
			'#options' => $content_types,
			'#multiple' => TRUE,
			'#default_value' => $type_defaults,    
			'#attributes' => array(
				'class' => array('chosen-widget')
				)
		);

		// For authors display 20 nodes per group
		$limit = 20;
	}
	
	// populate filter default value when request is made
	if($default)
	{
		$form['filters']['country_group']['#default_value'] =  array_flip($country_groups);
	}
	// if we have not filtered by anything append request sign
	if(strpos($url,"?") === FALSE)
	{
    	$url = $url . '?';
  	}

	// Prepare the header for all country group tables
	$header = group_list_table_header_definition($url);
	
	// Build each table
	foreach ($country_groups as $gid => $gname) 
	{

		$options = _create_country_group_table($gid, $_GET['order'], $limit, $_GET['types'], $_GET['title']);	
		
		$form[$gname . '_markup'] = array(
			'#markup' => '<h3>' . ucfirst($gname) . '</h3>'
		);

		$form[$gname] = array(
			'#type' => 'tableselect',
			'#header' => $header,
      		'#options' => $options,
      		'#empty' => t('There is no content assigned.'),
      		'#js_select' => FALSE,
      	);

      	$form['see_more' . $gname] = array(
      		'#markup' => '<a href="groups/country-group/' . urlencode($gname) . '"><i class="fa fa-table"></i>' . ' See more content on ' . $gname . '</a>');
	}

	$form['filters']['buttons'] = array(
		'#type' => 'container',
		'#attributes' => array(
			'style' => array('clear: both')
			)
	);
	// Create button for filtering
	$form['filters']['buttons']['submit'] = array(
		'#type' => 'submit',
		'#value' => 'Apply',
		'#submit' => array('_grouptodo_submit')
	);

	$form['filters']['buttons']['reset'] = array(
		'#type' => 'submit',
		'#value' => 'Reset',
		'#submit' => array('_reset_group_table')
	);



  	$form['#attached']['css'] = array(
    	drupal_get_path('module', 'ef_lists') . '/ef_group_list.css' => array(
      		'group' => CSS_THEME,
      		'weight' => 999,
      	)
  	);
  	$form['#attached']['js'] = array(
    	drupal_get_path('module', 'ef_lists') . '/ef_group_lists.js',
  	);

	return $form;
}
/*
* @description: Apply button callback function. Redirect to requested URL.
*/
function _grouptodo_submit($form,&$form_state)
{

	$title = (isset($form_state['values']['title']) ? $form_state['values']['title'] : null);
	$types = (isset($form_state['values']['type']) ? $form_state['values']['type'] : null);

	foreach ($types as $key => $value) 
	{
		$types_array[] = str_replace(" ", "_", $value); 
	}
	
	$parameters["title"] = $title;
	$parameters['types'] = $types_array;
	$parameters['country_groups'] = $form_state['values']['country_group'];
	
	
	$form_state['redirect'] = array(
	  'ef-my-group-todo-list',
	    array(
	      'query' => $parameters,
	    )
	);
	
}
/*
* @description: Reset button callback function. Reset all filtering applied before.
*/
function _reset_group_table($form,&$form_state)
{
  $form_state['redirect'] = array('ef-my-group-todo-list');
}