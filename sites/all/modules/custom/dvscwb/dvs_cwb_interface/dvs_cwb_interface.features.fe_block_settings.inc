<?php
/**
 * @file
 * dvs_cwb_interface.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function dvs_cwb_interface_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-cwb_country_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cwb_country_info-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'context
observatories/eurwork/collective-wage-bargaining/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -31,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-d2852480712e1da493264dfa5a116da2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd2852480712e1da493264dfa5a116da2',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/eurwork/collective-wage-bargaining/country-info
observatories/eurwork/collective-wage-bargaining/timeline
observatories/eurwork/collective-wage-bargaining/time-series
observatories/eurwork/collective-wage-bargaining/meta-data',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -50,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
