<?php
/**
 * @file
 * views_timelinejs_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_timelinejs_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_timelinejs_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function views_timelinejs_feature_node_info() {
  $items = array(
    'timeline_date' => array(
      'name' => t('CWB EIRO Timeline'),
      'base' => 'node_content',
      'description' => t('EIRO references in a timeline.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
