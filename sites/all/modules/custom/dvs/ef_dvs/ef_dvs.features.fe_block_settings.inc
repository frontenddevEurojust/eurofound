<?php
/**
 * @file
 * ef_dvs.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_dvs_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-dvs_topics_questions'] = array(
    'cache' => -1,
    'css_class' => 'dvs_topics_block block-main-menu-sub-menu',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'dvs_topics_questions',
    'module' => 'block',
    'node_types' => array(
      0 => 'dvs_survey',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -57,
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
