<?php
/**
 * @file
 * ef_ft_pleco_record.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_ft_pleco_record_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ef_ft_pleco_record_node_info() {
  $items = array(
    'pleco_record' => array(
      'name' => t('Platform economy record'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
