<?php
/**
 * @file
 * ssi_web_apps_intergration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ssi_web_apps_intergration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ssi_web_apps_intergration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ssi_web_apps_intergration_node_info() {
  $items = array(
    'ssi_services' => array(
      'name' => t('SSI services'),
      'base' => 'node_content',
      'description' => t('The content type gathers the information needed to provide single sing in features'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
