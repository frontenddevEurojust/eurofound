<?php
/**
 * @file
 * ef_ft_pleco_taxonomy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ef_ft_pleco_taxonomy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_availability_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_availability_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_country_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_country_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_keyword_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_keyword_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_language_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_language_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_methodology_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_methodology_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_organisation_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_organisation_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_organisation_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_organisation_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_platform_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_platform_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_platform_sector_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_platform_sector_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_platform_work_typology_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_platform_work_typology_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pleco_record_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pleco_record_type_pattern'] = $strongarm;

  return $export;
}
