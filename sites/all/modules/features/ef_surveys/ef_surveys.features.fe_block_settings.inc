<?php
/**
 * @file
 * ef_surveys.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_surveys_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-e4983b51e73b68b8d1525168ac6050a8'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => 'e4983b51e73b68b8d1525168ac6050a8',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
