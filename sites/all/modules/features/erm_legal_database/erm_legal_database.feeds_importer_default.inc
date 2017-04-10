<?php
/**
 * @file
 * erm_legal_database.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function erm_legal_database_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'erm_regulation';
  $feeds_importer->config = array(
    'name' => 'ERM Regulation',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '403',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'field_native_name_erm_reg',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'English name',
            'target' => 'field_english_name_erm_reg',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Country',
            'target' => 'field_country_erm_reg',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Observatory',
            'target' => 'field_observatory_erm_reg',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Theme',
            'target' => 'field_theme_erm_reg',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Phase',
            'target' => 'field_phase_erm_reg',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Type',
            'target' => 'field_type_phase_erm_reg',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Cost covered by',
            'target' => 'field_erm_fundings_erm_reg',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Involved actors',
            'target' => 'field_involved_actors_erm_reg',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Involvement Other',
            'target' => 'field_involvement_other_erm_reg',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Source',
            'target' => 'field_sources_erm_reg:title',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'SourceURL',
            'target' => 'field_sources_erm_reg:url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Thresholds',
            'target' => 'field_company_size_erm_reg',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Thresholds Texts',
            'target' => 'field_affected_employees_erm_reg',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Article',
            'target' => 'field_article_erm_reg',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Comments',
            'target' => 'field_comments_erm_reg',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'ef_erm_regulation',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['erm_regulation'] = $feeds_importer;

  return $export;
}
