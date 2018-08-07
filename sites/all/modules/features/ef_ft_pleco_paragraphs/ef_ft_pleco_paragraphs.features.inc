<?php
/**
 * @file
 * ef_ft_pleco_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_ft_pleco_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function ef_ft_pleco_paragraphs_paragraphs_info() {
  $items = array(
    'block' => array(
      'name' => 'Block',
      'bundle' => 'block',
      'locked' => '1',
    ),
    'pleco_landing_dossiers' => array(
      'name' => 'PLECO landing dossiers',
      'bundle' => 'pleco_landing_dossiers',
      'locked' => '1',
    ),
    'pleco_section' => array(
      'name' => 'PLECO section',
      'bundle' => 'pleco_section',
      'locked' => '1',
    ),
  );
  return $items;
}
