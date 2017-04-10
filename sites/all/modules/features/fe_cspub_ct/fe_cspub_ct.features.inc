<?php
/**
 * @file
 * fe_cspub_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_cspub_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fe_cspub_ct_node_info() {
  $items = array(
    'case_study_publication' => array(
      'name' => t('Case study publication'),
      'base' => 'node_content',
      'description' => t('Case studies emcc
- Case studies
- Publications
- etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
