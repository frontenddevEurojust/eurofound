<?php 

include_once "helpers/auxiliar_functions.inc";
include_once "helpers/db_functions.inc";

/*
* @description: My todo list form creation
*/
function my_todo_list_form($form,$form_state){

	global $user;
	// url for creating header links and ordering
	$url = $_SERVER["REQUEST_URI"];

	// if we have not filtered by anything append request sign
	if(strpos($url,"?") === FALSE){
		$url = $url . '?';
	}

	// Build table header early as it's needed for ordering by header in the query
	// Header keys need to match with $options array keys
	// Href values are used as sorting system
	$header = my_list_table_header_definition($url);

	// Control if the URL contains any request or not
	$options = array();

	if($_GET['title'] || $_GET['types'] || $_GET['order'])
	{
		$options = _retrieve_table_data($user->uid, $_GET['title'], $_GET['types'], $_GET['order']);
	} 
	else 
	{
		$options = _retrieve_table_data($user->uid, null, array(), null);
	}
	$form['content_topside_wrapper'] = array(
		'#type' => 'container',
	);
	// Topside markup for username
	$form['content_topside_wrapper']['username'] = array(
		'#markup' => ucfirst($user->name) . "'s tasks",
		'#prefix' => '<h3>',
		'#suffix' => '</h3>',
	);
	// Back to my dashboard link
		$form['content_topside_wrapper']['my-dashboard'] = array(
		'#markup' => '<a href="my-dashboard"><i class="fa fa-undo"></i> Back to my dashboard</a>',
		'#prefix' => '<p class="go-back-to">',
		'#suffix' => '</p>',
	);
	// Filter fieldset
	$form['filters'] = array(
		'#title' => 'Filters',
		'#type' => 'fieldset',
		'#collapsible' => TRUE, 
		'#collapsed' => FALSE,
	);

	$form['filters']['title'] = array(
		'#title' => 'Title',
		'#type' => 'textfield',
		'#default_value' => $_GET['title'],
	);
	// Filter population based on retrieved different content types
	$content_types = _retrieve_list_of_content_types($user->uid);

	// Retrieved values from the url don't follow the same pattern of $key => $value so create an auxiliary array for default value population when is needed
	$type_defaults = array();
	
	foreach ($_GET['types'] as $key => $value) 
	{
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
	$form['filters']['container'] = array(
		'#type' => 'container'
	);
	$form['filters']['container']['submit'] = array(
		'#type' => 'submit',
		'#value' => 'Apply',
		'#submit' => array('_mytodo_submit'),
	);

	$form['filters']['container']['reset'] = array(
		'#type' => 'submit',
		'#value' => 'Reset',
		'#submit' => array('_reset_table'),
	);

	$form['table'] = array(
		'#type' => 'tableselect',
		'#header' => $header,
		'#options' => $options,
		'#empty' => t('There is no content assigned.'),
		'#js_select' => FALSE,
	);

	$form['#attached']['css'] = array(
		drupal_get_path('module', 'ef_lists') . '/ef_mytodo_list.css' => array(
			'group' => CSS_THEME,
			'weight' => 999,
			)
		);

	$form['pager'] = array('#theme' => 'pager');

	return $form;
}

/*
* @description: Apply button callback function. Redirect to requested URL.
*/
function _mytodo_submit($form,&$form_state)
{

	global $user;
	// get current URL
	$url = $_SERVER["SERVER_NAME"] . $_SERVER["REQUEST_URI"];

	$title = (isset($form_state['values']['title']) ? $form_state['values']['title'] : null);
	$types = (isset($form_state['values']['type']) ? $form_state['values']['type'] : null);
	
		
	foreach ($types as $key => $value) 
	{
		$types_array[] = str_replace(" ", "_", $value); 
	}
	
	// create $parameters for a succesful redirect URL
	$parameters["title"] = $title;
	$parameters["types"] = $types_array;

	$form_state['redirect'] = array(
		'ef-my-todo-list',
		array(
			'query' => $parameters,
		)
	); 

}

/*
* @description: Reset button callback function. Reset all filtering applied before.
*/
function _reset_table($form,&$form_state)
{
	$form_state['redirect'] = array('ef-my-todo-list');
}