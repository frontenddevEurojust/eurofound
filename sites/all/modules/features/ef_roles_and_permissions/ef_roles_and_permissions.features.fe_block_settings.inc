<?php
/**
 * @file
 * ef_roles_and_permissions.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_roles_and_permissions_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['workbench-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'workbench',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'Eurofound Administrator' => 4,
    ),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -63,
      ),
      'zurb_foundation' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zurb_foundation',
        'weight' => -99,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
