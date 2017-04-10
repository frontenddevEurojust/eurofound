<?php
/**
 * @file
 * cwb_model.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwb_model_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cwb_model_node_info() {
  $items = array(
    'cwb_country_info' => array(
      'name' => t('CWB Country info'),
      'base' => 'node_content',
      'description' => t('Abstract, Bargaining system, Timing, Derogation and related Meta-data (Sources)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cwb_level_coordination' => array(
      'name' => t('CWB Context'),
      'base' => 'node_content',
      'description' => t('Level of wage bargaining and degree of coordination per Year, Country, Value'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cwb_series' => array(
      'name' => t('CWB Time series overview'),
      'base' => 'node_content',
      'description' => t('Time series overview meta-data identifying the time series tabular data'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cwb_time_series' => array(
      'name' => t('CWB Time series'),
      'base' => 'node_content',
      'description' => t('Time series tabular data per SeriesID'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
