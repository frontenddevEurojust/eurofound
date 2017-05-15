<?php

include_once "helpers/auxiliar_functions.inc";
include_once "helpers/db_functions.inc";

/*
* @description: Country list form creation
* @args: 
*       $country: contextual field.
*/
function country_form($form,$form_state,$country){
	// Use drupal_set_title function as hook_menu title can't work with contextual values
	drupal_set_title(ucfirst($country));

	// url for creating header links and ordering
	$url = $_SERVER["REQUEST_URI"];
	// if we have not filtered by anything append request sign
	if(strpos($url,"?") === FALSE)
	{
		$url = $url . '?';
	}

	// Prepare the header for all country group tables
	$header = group_list_table_header_definition($url);

	// Go back to link
	$form['markup'] = array(
		'#markup' => '<a href="/ef-my-group-todo-list"><i class="fa fa-arrow-left"></i> Go back to my group todo list</a>',
		'#prefix' => '<p class="go-back-to">',
		'#suffix' => '</p>'
	);

	$options = _retrieve_country_data($country, $_GET['order']);

	$form['table'] = array(
		'#type' => 'tableselect',
		'#header' => $header,
		'#options' => $options,
		'#empty' => t('There is no content for this country group.'),
		'#js_select' => FALSE,
	);

	$form['pager'] = array('#theme' => 'pager');

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

function _retrieve_country_data($country_name,$order)
{

	$query = db_select('groups', 'a');
	$query->addField('a','gid', 'country_id');
	$query->condition('a.title', $country_name,'=');

	$result = $query->execute();
	
	return _create_country_group_table($result->fetchObject()->country_id, $order, 50, array(), null);
}