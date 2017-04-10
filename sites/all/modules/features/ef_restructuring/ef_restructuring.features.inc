<?php
/**
 * @file
 * ef_restructuring.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_restructuring_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ef_restructuring_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ef_restructuring_node_info() {
  $items = array(
    'ef_factsheet' => array(
      'name' => t('Factsheet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company name'),
      'help' => '',
    ),
    'ef_input_to_erm' => array(
      'name' => t('Input to ERM'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_ir_dictionary' => array(
      'name' => t('IR Dictionary'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_regulation' => array(
      'name' => t('Regulation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_restructuring_in_smes' => array(
      'name' => t('Restructuring in SMEs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_support_instrument' => array(
      'name' => t('Support instrument'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Original name'),
      'help' => '',
    ),
  );
  return $items;
}
