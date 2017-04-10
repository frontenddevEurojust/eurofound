<?php
/**
 * @file
 * ef_case_study_publication_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ef_case_study_publication_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'case_study_publication';
  $feeds_importer->config = array(
    'name' => 'Case study publication',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
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
            'source' => 'title_field',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'field_relation_identifier_csp',
            'target' => 'field_relation_identifier_csp',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'field_country_csp',
            'target' => 'field_country_csp',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'field_type_of_restructuring_csp',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'field_ownership_csp',
            'target' => 'field_ownership_csp',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'field_sectors_csp',
            'target' => 'field_sectors_csp',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'field_organisation_size_csp',
            'target' => 'field_organisation_size_csp',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'field_affected_est_size_csp',
            'target' => 'field_affected_est_size_csp',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'field_involved_actors_csp',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'field_ant_change_activ_csp',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'field_man_change_activ_csp',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'field_keywords_csp',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'case_study_publication',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['case_study_publication'] = $feeds_importer;

  return $export;
}
