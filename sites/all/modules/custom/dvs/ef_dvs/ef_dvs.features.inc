<?php
/**
 * @file
 * ef_dvs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_dvs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ef_dvs_node_info() {
  $items = array(
    'dvs_survey' => array(
      'name' => t('DVS survey'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
