<?php
/**
 * @file
 * ef_ct_dataexplorer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_ct_dataexplorer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ef_ct_dataexplorer_node_info() {
  $items = array(
    'data_explorer_page' => array(
      'name' => t('Data Explorer Page'),
      'base' => 'node_content',
      'description' => t('Data Explorer content type is used for data visualisations using d3.js'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
