<?php
/**
 * @file
 * ef_annual_progress_report.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_annual_progress_report_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ef_annual_progress_report_node_info() {
  $items = array(
    'ef_annual_progress_report' => array(
      'name' => t('Annual Progress Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
