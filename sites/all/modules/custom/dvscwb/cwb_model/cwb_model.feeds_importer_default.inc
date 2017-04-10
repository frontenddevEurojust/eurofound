<?php
/**
 * @file
 * cwb_model.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cwb_model_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'timelines_importer';
  $feeds_importer->config = array(
    'name' => 'timelines-importer',
    'description' => 'timelines importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'timeline_date',
        'update_existing' => '0',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'CMSCode',
            'target' => 'field_cmscode',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Link',
            'target' => 'field_cmslink',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Abstract',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Country',
            'target' => 'field_country',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Level',
            'target' => 'field_cwb_level',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Wage setting',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Indexation mechanisms',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Outcome of CB',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Minimum wage',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Gender pay gap',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Equal pay',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Wage structure',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Publication Date',
            'target' => 'field_publication_date:start',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Performance-related pay',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'CA extension',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Severance pay',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Bargaining system',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Subsidised wages',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Financial participation',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Labour dispute',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Legislation',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Court case',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Study',
            'target' => 'field_cwb_timeline_category',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['timelines_importer'] = $feeds_importer;

  return $export;
}
