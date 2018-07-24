<?php
/**
 * @file
 * erm_legal_database.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function erm_legal_database_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-article-strip_tags';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Article';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['erm_regulation-article-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-cost_covered_by-explode';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Cost covered by';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation-cost_covered_by-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-cost_covered_by-find_replace';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Cost covered by';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'National',
    'replace' => 'National government',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^National$/ui',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation-cost_covered_by-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-cost_covered_by-find_replace_ccb';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Cost covered by';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'National Government',
    'replace' => 'National government',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^National Government$/ui',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation-cost_covered_by-find_replace_ccb'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-cost_covered_by-find_replace_e';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Cost covered by';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Employees',
    'replace' => 'Employee',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Employees$/ui',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation-cost_covered_by-find_replace_e'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-involvement_other-strip_tags';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Involvement Other';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['erm_regulation-involvement_other-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-source-copy';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Source';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => 'sourceurl',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['erm_regulation-source-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-source-explode';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Source';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '</p>',
    'limit' => '',
    'real_separator' => '</p>',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation-source-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-source-strip_tags';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Source';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['erm_regulation-source-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-source-truncate_text';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Source';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '250',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Truncate';
  $export['erm_regulation-source-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-sourceurl-explode';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'SourceURL';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '</p>',
    'limit' => '',
    'real_separator' => '</p>',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation-sourceurl-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-sourceurl-find_replace_regex';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'SourceURL';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/.*ref="/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['erm_regulation-sourceurl-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-sourceurl-find_replace_regex_no_url';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'SourceURL';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/<p>.*/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['erm_regulation-sourceurl-find_replace_regex_no_url'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-sourceurl-find_replace_regex_tail';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'SourceURL';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/">.*/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['erm_regulation-sourceurl-find_replace_regex_tail'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation-thresholds-trim';
  $feeds_tamper->importer = 'erm_regulation';
  $feeds_tamper->source = 'Thresholds';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['erm_regulation-thresholds-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-blank-explode';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Blank';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation_importer-blank-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-blank-find_replace';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Blank';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '</p>',
    'replace' => '|',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^</p>$/i',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation_importer-blank-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-blank-trim';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Blank';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '"',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';
  $export['erm_regulation_importer-blank-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-cost_covered_by-explode';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Cost covered by';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation_importer-cost_covered_by-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-cost_covered_by-find_replace';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Cost covered by';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'National',
    'replace' => 'National government',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^National$/i',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation_importer-cost_covered_by-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-cost_covered_by-find_replace_emp';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Cost covered by';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Employees',
    'replace' => 'Employee',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^Employees$/i',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation_importer-cost_covered_by-find_replace_emp'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-cost_covered_by-find_replace_ng';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Cost covered by';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'National Government',
    'replace' => 'National government',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^National Government$/',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation_importer-cost_covered_by-find_replace_ng'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-involved_actors-explode';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Involved actors';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation_importer-involved_actors-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-involvement_other-strip_tags';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Involvement Other';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['erm_regulation_importer-involvement_other-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-source-copy';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Source';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'to',
    'source' => '',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Copy source value';
  $export['erm_regulation_importer-source-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-source-explode';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Source';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation_importer-source-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-source-find_replace';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Source';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '</p>',
    'replace' => '|',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation_importer-source-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-source-strip_tags';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Source';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Strip tags';
  $export['erm_regulation_importer-source-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-sourceurl-explode';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'SourceURL';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation_importer-sourceurl-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-sourceurl-find_replace';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'SourceURL';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '</p>',
    'replace' => '|',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^</p>$/i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation_importer-sourceurl-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-thresholds-find_replace';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'Thresholds';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 1,
    'regex' => TRUE,
    'regex_find' => '/^ $/ui',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['erm_regulation_importer-thresholds-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-url_s_-explode';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'URL(s)';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation_importer-url_s_-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'erm_regulation_importer-url_t_-explode';
  $feeds_tamper->importer = 'erm_regulation_importer';
  $feeds_tamper->source = 'URL(t)';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['erm_regulation_importer-url_t_-explode'] = $feeds_tamper;

  return $export;
}
