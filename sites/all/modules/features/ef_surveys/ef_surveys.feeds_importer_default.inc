<?php
/**
 * @file
 * ef_surveys.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ef_surveys_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ef_vocabulary_survey_families_import';
  $feeds_importer->config = array(
    'name' => 'Vocabulary Survey Families import',
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
            'source' => 'abbreviation',
            'target' => 'field_ef_abbreviation',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'short_description',
            'target' => 'field_ef_short_description',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'logo',
            'target' => 'field_ef_survey_family_logo',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'weight',
            'target' => 'weight',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'ef_survey_families',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ef_vocabulary_survey_families_import'] = $feeds_importer;

  return $export;
}
