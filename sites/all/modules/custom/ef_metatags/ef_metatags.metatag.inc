<?php

/*
 * Implements hook_metatag_info()
 */ 
function ef_metatags_metatag_info(){
	// ef_metatags -> identifier of the group in which the metatag will be
	// label -> Name the group of meta tags will display on the meta tag configuration menu
	$info['groups']['ef_metatags'] = array(
		'label' => t('EF Custom Metatags'),
	);

	// label -> Name the meta tag will display on the meta tag configuration menu
	// description -> Text with a brief description of how the meta tag will be displayed
	// group -> identifier of the group in which the meta tag will be allocated
	$info['tags']['ef_activity'] = array(
		'label' => t('EF Activity'),
		'description' => t('A comma-separated list of the EF Activities selected for the node'),
		'class' => 'DrupalTextMetaTag',
		'group' => 'ef_metatags',
	);

	return $info;
}

/*
 * Implements hook_metatag_config_default_alter()
 */ 
function ef_metatags_config_default_alter(array &$configs) {
	foreach ($configs as &$config) {
		switch($config->instance) {
			case 'global':
				$config->config += array();
			break;
			case 'global:frontpage':
				$config->config += array();
			break;
			case 'node':
				$config->config += array(
					'ef_activity'=>array('value'=>'This is a default value.'),
				);
			break;
			case 'taxonomy_term':
				$config->config += array();
			break;
			case 'user':
				$config->config += array();
			break;
		}
	}
}