<?php
/**
 * @file
 * erm_support_instruments.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function erm_support_instruments_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-category-explode';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'category';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['erm_support_instruments-category-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-example-strip_tags';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'example';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['erm_support_instruments-example-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-funding-explode';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'funding';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['erm_support_instruments-funding-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-source-copy';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'source';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'sourceurl',
  );
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Copy source value';
  $export['erm_support_instruments-source-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-source-explode';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'source';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '</p>',
    'limit' => '',
    'real_separator' => '</p>',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Explode';
  $export['erm_support_instruments-source-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-source-html_entity_decode';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'source';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'HTML entity decode';
  $export['erm_support_instruments-source-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-source-strip_tags';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'source';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 13;
  $feeds_tamper->description = 'Strip tags';
  $export['erm_support_instruments-source-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-source-trim';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'source';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '</p>',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Trim';
  $export['erm_support_instruments-source-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-source-truncate_text';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'source';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '250',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 14;
  $feeds_tamper->description = 'Truncate';
  $export['erm_support_instruments-source-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-sourceurl-explode';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'sourceURL';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '</p>',
    'limit' => '',
    'real_separator' => '</p>',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['erm_support_instruments-sourceurl-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-sourceurl-find_replace_regex';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'sourceURL';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/.*ref="/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['erm_support_instruments-sourceurl-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-sourceurl-find_replace_regex_2';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'sourceURL';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/">.*/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['erm_support_instruments-sourceurl-find_replace_regex_2'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_support_instruments-sourceurl-find_replace_regex_3';
  $feeds_tamper->importer = 'erm_support_instruments';
  $feeds_tamper->source = 'sourceURL';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/<p>.*/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['erm_support_instruments-sourceurl-find_replace_regex_3'] = $feeds_tamper;

  return $export;
}
