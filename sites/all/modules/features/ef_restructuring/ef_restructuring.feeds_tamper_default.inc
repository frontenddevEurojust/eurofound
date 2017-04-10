<?php
/**
 * @file
 * ef_restructuring.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ef_restructuring_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ef_vocabulary_instrument_categories_import-phases-explode';
  $feeds_tamper->importer = 'ef_vocabulary_instrument_categories_import';
  $feeds_tamper->source = 'phases';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['ef_vocabulary_instrument_categories_import-phases-explode'] = $feeds_tamper;

  return $export;
}
