<?php
/**
 * @file
 * cs_feed.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cs_feed_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'case_study_importer';
  $feeds_importer->config = array(
    'name' => 'Case Study Importer',
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
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Country 1',
            'target' => 'field_country_csp',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Observatory',
            'target' => 'field_observatory_csp',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Publication date',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Language',
            'target' => 'language',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => '(Avoiding) bankruptcy',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Business expansion',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Closure',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Internal restructuring',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Merger / Acquisition',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Offshoring / Delocalisation',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Outsourcing',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Relocation',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Reshoring',
            'target' => 'field_type_of_restructuring_csp',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Private',
            'target' => 'field_ownership_csp',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Public',
            'target' => 'field_ownership_csp',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Sector',
            'target' => 'field_sectors_csp',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Size of the organisation',
            'target' => 'field_organisation_size_csp',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Size of the affected establishment',
            'target' => 'field_affected_est_size_csp',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'European Commission',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'National government',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Regional/local government',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Public employment service',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Development agencies',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Social service provider',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Education/training provider',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'Business/employers organisation',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'Trade union',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'Works council',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'Business partners/supply chain',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'Private consultants',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          32 => array(
            'source' => 'Banks',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          33 => array(
            'source' => 'Others',
            'target' => 'field_involved_actors_csp',
            'unique' => FALSE,
          ),
          34 => array(
            'source' => 'Development and maintenance of capacities and competencies for anticipation of change',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          35 => array(
            'source' => 'Strategic long-term monitoring of individual organisations economic and financial situation',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          36 => array(
            'source' => 'Strategic long-term monitoring of market and technological developments',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          37 => array(
            'source' => 'R&D, innovation',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          38 => array(
            'source' => 'Continuous mapping of jobs and skills needs, elaboration of training plans',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          39 => array(
            'source' => 'Career counselling and occupational orientation activities',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          40 => array(
            'source' => 'Training/skill development',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          41 => array(
            'source' => 'Validation of non-formal/informal learning',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          42 => array(
            'source' => 'Promotion of geographic mobility',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          43 => array(
            'source' => 'Promotion of internal mobility',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          44 => array(
            'source' => 'Promotion of social dialogue',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          45 => array(
            'source' => 'Establishment of networks/partnerships with regular exchange facilities',
            'target' => 'field_ant_change_activ_csp',
            'unique' => FALSE,
          ),
          46 => array(
            'source' => 'Diagnosis of the situation and designing change procedures',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          47 => array(
            'source' => 'Information and consultation of workers or their representatives',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          48 => array(
            'source' => 'Multistakeholder communication and networking',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          49 => array(
            'source' => 'Working time flexibility measures',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          50 => array(
            'source' => 'Wage flexibility measures',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          51 => array(
            'source' => 'Redeployment of affected employees within the organisation',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          52 => array(
            'source' => 'Transition of affected employees to other employers',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          53 => array(
            'source' => 'Employment subsidies',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          54 => array(
            'source' => '(Re)training of affected employees',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          55 => array(
            'source' => 'Income support for affected workers',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          56 => array(
            'source' => 'Support of geographic mobility of affected workers',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          57 => array(
            'source' => 'Flexible/early retirement schemes',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          58 => array(
            'source' => 'Support of start-ups by and business transfers to employees, support to establish workers cooperatives',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          59 => array(
            'source' => 'Other support for affected employees',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          60 => array(
            'source' => 'Monitoring of the impact of the restructuring',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          61 => array(
            'source' => 'Attracting investors',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          62 => array(
            'source' => 'Supporting the access to finance of the affected organisation',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          63 => array(
            'source' => 'Reorientation of previous productive resources (e.g. site, equipment) and diversification measures',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          64 => array(
            'source' => 'Support of networks/partnerships among organisations',
            'target' => 'field_man_change_activ_csp',
            'unique' => FALSE,
          ),
          65 => array(
            'source' => 'Recession/crisis',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          66 => array(
            'source' => 'Greening',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          67 => array(
            'source' => 'Globalisation, internationalisation',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          68 => array(
            'source' => 'Business transfer and succession',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          69 => array(
            'source' => 'Age management',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          70 => array(
            'source' => 'Youth',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          71 => array(
            'source' => 'Flexicurity',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          72 => array(
            'source' => 'Job sharing',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          73 => array(
            'source' => 'Knowledge-intensive business sector',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          74 => array(
            'source' => 'Regional aspects',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          75 => array(
            'source' => 'Clusters, networks, supply chains',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          76 => array(
            'source' => 'Born globals',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          77 => array(
            'source' => 'Cross-border restructuring',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          78 => array(
            'source' => 'European Globalisation Adjustment Fund',
            'target' => 'field_keywords_csp',
            'unique' => FALSE,
          ),
          79 => array(
            'source' => 'Body',
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
  $export['case_study_importer'] = $feeds_importer;

  return $export;
}
