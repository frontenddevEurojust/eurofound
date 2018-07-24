<?php
/**
 * @file
 * ef_spotlight.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_spotlight_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ef_spotlight_themes-block'] = array(
    'cache' => -1,
    'css_class' => 'boxed-block',
    'custom' => 0,
    'delta' => 'ef_spotlight_themes-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'spotlight-on
spotlight-on/*
spotlight-themes/*
ef-spotlight-entry/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -67,
      ),
      'zurb_foundation' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
