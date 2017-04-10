<?php
/**
 * @file
 * ef_basics.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ef_basics_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ef_vocabulary_industrial_relations_terms_import-related-explode';
  $feeds_tamper->importer = 'ef_vocabulary_industrial_relations_terms_import';
  $feeds_tamper->source = 'related';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['ef_vocabulary_industrial_relations_terms_import-related-explode'] = $feeds_tamper;

  return $export;
}
