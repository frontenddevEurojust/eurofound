<?php
/**
 * @file
 * country_profile_content_type..inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function country_profile_content_type_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'field_ef_tabs';
  $multifield->label = 'field_ef_tabs';
  $multifield->description = '';
  $export['field_ef_tabs'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'field_ef_tabs_living_working';
  $multifield->label = 'field_ef_tabs_living_working';
  $multifield->description = '';
  $export['field_ef_tabs_living_working'] = $multifield;

  return $export;
}
