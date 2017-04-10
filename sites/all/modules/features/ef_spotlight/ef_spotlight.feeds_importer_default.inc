<?php
/**
 * @file
 * ef_spotlight.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ef_spotlight_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ef_vocabulary_spotlight_themes_import';
  $feeds_importer->config = array(
    'name' => 'Vocabulary Spotlight Themes import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Full Name',
            'target' => 'field_ef_full_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Image',
            'target' => 'field_ef_main_image',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ef_spotlight_themes',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ef_vocabulary_spotlight_themes_import'] = $feeds_importer;

  return $export;
}
