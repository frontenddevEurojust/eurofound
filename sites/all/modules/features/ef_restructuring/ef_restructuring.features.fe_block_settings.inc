<?php
/**
 * @file
 * ef_restructuring.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_restructuring_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  return $export;
}
