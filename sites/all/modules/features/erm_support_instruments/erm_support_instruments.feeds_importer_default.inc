<?php
/**
 * @file
 * erm_support_instruments.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function erm_support_instruments_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'erm_support_instruments';
  $feeds_importer->config = array(
    'name' => 'ERM Support Instruments',
    'description' => 'Importer for the Support Instruments',
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
            'source' => 'name',
            'target' => 'field_native_name_erm_si',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'english name',
            'target' => 'field_english_name_erm_si',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'coverage',
            'target' => 'field_coverage_elig_erm_si',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'main chars',
            'target' => 'field_main_characteristic_erm_si',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'effectiveness',
            'target' => 'field_effectiveness_erm_si',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'strenghts',
            'target' => 'field_strengths_erm_si',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'weakness',
            'target' => 'field_weaknesses_erm_si',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'example',
            'target' => 'field_example_erm_si',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'source',
            'target' => 'field_sources_erm_si:title',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'sourceURL',
            'target' => 'field_sources_erm_si:url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'category',
            'target' => 'field_type_erm_si',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'funding',
            'target' => 'field_funding_erm_si',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'phase',
            'target' => 'field_phase_erm_si',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'regional',
            'target' => 'field_reg_local_gov_erm_si',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'organisations',
            'target' => 'field_employers_org_erm_si',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'public',
            'target' => 'field_public_employ_serv_erm_si',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'other',
            'target' => 'field_other_erm_si',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'national',
            'target' => 'field_national_govermment_erm_si',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'countryname',
            'target' => 'field_country_erm_si',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'erm_support_instrument',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['erm_support_instruments'] = $feeds_importer;

  return $export;
}
