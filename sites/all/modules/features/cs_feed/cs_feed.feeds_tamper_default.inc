<?php
/**
 * @file
 * cs_feed.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function cs_feed_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-clusters__networks__supply_chains-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Clusters, networks, supply chains';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Clusters/Networks/Supply chains',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-clusters__networks__supply_chains-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-continuous_mapping_of_jobs_and_skills_needs__elaboration_of_training_plans-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Continuous mapping of jobs and skills needs, elaboration of training plans';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Continuous mapping of jobs and skills needs - Elaboration of training plans',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-continuous_mapping_of_jobs_and_skills_needs__elaboration_of_training_plans-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-establishment_of_networks_partnerships_with_regular_exchange_facilities-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Establishment of networks/partnerships with regular exchange facilities';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[development and maintenance of capacities and competencies for anticipation of change],[strategic long-term monitoring of individual organisations economic and financial situation],[strategic long-term monitoring of market and technological developments],[r&d, innovation],[continuous mapping of jobs and skills needs, elaboration of training plans],[career counselling and occupational orientation activities],[training/skill development],[validation of non-formal/informal learning],[promotion of geographic mobility],[promotion of internal mobility],[promotion of social dialogue],[establishment of networks/partnerships with regular exchange facilities]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-establishment_of_networks_partnerships_with_regular_exchange_facilities-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-european_globalisation_adjustment_fund-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'European Globalisation Adjustment Fund';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[recession/crisis],[greening],[globalisation, internationalisation],[business transfer and succession],[age management],[youth],[flexicurity],[job sharing],[knowledge-intensive business sector],[regional aspects],[clusters, networks, supply chains],[born globals],[cross-border restructuring],[european globalisation adjustment fund]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-european_globalisation_adjustment_fund-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-globalisation__internationalisation-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Globalisation, internationalisation';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Globalisation/Internationalisation',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-globalisation__internationalisation-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-others-explode';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Others';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['case_study_importer-others-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-others-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Others';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[european commission],[national government],[regional/local government],[public employment service],[development agencies],[social service provider],[education/training provider],[business/employers organisation],[trade union],[works council],[business partners/supply chain],[private consultants],[banks],[others]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-others-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-public-explode';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Public';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['case_study_importer-public-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-public-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Public';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[private],[public]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-public-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-r_d__innovation-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'R&D, innovation';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'R&D - innovation',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-r_d__innovation-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-reorientation_of_previous_productive_resources-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Reorientation of previous productive resources';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Reorientation of previous productive resources (site/equipment/etc) and diversification measures',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-reorientation_of_previous_productive_resources-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-reshoring-explode';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Reshoring';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['case_study_importer-reshoring-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-reshoring-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Reshoring';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[(avoiding) bankruptcy],[business expansion],[closure],[internal restructuring],[merger / acquisition],[offshoring / delocalisation],[outsourcing],[relocation],[reshoring]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-reshoring-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-support_of_networks_partnerships_among_organisations-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Support of networks/partnerships among organisations';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[diagnosis of the situation and designing change procedures],[information and consultation of workers or their representatives],[multistakeholder communication and networking],[working time flexibility measures],[wage flexibility measures],[redeployment of affected employees within the organisation],[transition of affected employees to other employers],[employment subsidies],[(re)training of affected employees],[income support for affected workers],[support of geographic mobility of affected workers],[flexible/early retirement schemes],[support of start-ups by and business transfers to employees],[other support for affected employees],[monitoring of the impact of the restructuring],[attracting investors],[reorientation of previous productive resources],[support of networks/partnerships among organisations]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-support_of_networks_partnerships_among_organisations-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'case_study_importer-support_of_start-ups_by_and_business_transfers_to_employees-rewrite';
  $feeds_tamper->importer = 'case_study_importer';
  $feeds_tamper->source = 'Support of start-ups by and business transfers to employees';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Support of start-ups by and business transfers to employees/support to establish workers cooperatives',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['case_study_importer-support_of_start-ups_by_and_business_transfers_to_employees-rewrite'] = $feeds_tamper;

  return $export;
}
