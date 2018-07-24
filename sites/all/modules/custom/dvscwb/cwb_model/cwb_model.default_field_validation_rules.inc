<?php
/**
 * @file
 * cwb_model.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function cwb_model_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'One Country Info ';
  $rule->name = 'one_country_info_';
  $rule->field_name = 'field_country';
  $rule->col = 'tid';
  $rule->entity_type = 'node';
  $rule->bundle = 'cwb_country_info';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      4 => 0,
      5 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'A country info has been already defined for the selected country';
  $export['one_country_info_'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Series uniqueness';
  $rule->name = 'series_uniqueness';
  $rule->field_name = 'field_series_id';
  $rule->col = 'target_id';
  $rule->entity_type = 'node';
  $rule->bundle = 'cwb_time_series';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'entity',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      4 => 0,
      5 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'An entry with the same Series ID has already been defined. Please update that relevant entry';
  $export['series_uniqueness'] = $rule;

  return $export;
}
