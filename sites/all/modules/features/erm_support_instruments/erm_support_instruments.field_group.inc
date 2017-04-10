<?php
/**
 * @file
 * erm_support_instruments.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erm_support_instruments_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contract_erm_si|node|erm_support_instrument|form';
  $field_group->group_name = 'group_contract_erm_si';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erm_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '15',
    'children' => array(
      0 => 'field_contract_erm_si',
      1 => 'field_assign_to_erm_si',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contract-erm-si field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contract_erm_si|node|erm_support_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funding_erm_si|node|erm_support_instrument|form';
  $field_group->group_name = 'group_funding_erm_si';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erm_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '10',
    'children' => array(
      0 => 'field_funding_erm_si',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-funding-erm-si field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_funding_erm_si|node|erm_support_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_involved_actors_erm_si|node|erm_support_instrument|form';
  $field_group->group_name = 'group_involved_actors_erm_si';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erm_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Involved actors',
    'weight' => '9',
    'children' => array(
      0 => 'field_employers_org_erm_si',
      1 => 'field_national_govermment_erm_si',
      2 => 'field_public_employ_serv_erm_si',
      3 => 'field_reg_local_gov_erm_si',
      4 => 'field_other_erm_si',
      5 => 'field_involved_actors_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-involved-actors-erm-si field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_involved_actors_erm_si|node|erm_support_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content_erm_si|node|erm_support_instrument|form';
  $field_group->group_name = 'group_main_content_erm_si';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erm_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main content',
    'weight' => '8',
    'children' => array(
      0 => 'field_coverage_elig_erm_si',
      1 => 'field_main_characteristic_erm_si',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main-content-erm-si field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_main_content_erm_si|node|erm_support_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sources_erm_si|node|erm_support_instrument|form';
  $field_group->group_name = 'group_sources_erm_si';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erm_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sources',
    'weight' => '14',
    'children' => array(
      0 => 'field_sources_erm_si',
      1 => 'field_sources_notes_erm_si',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sources-erm-si field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sources_erm_si|node|erm_support_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_strong_weak_erm_si|node|erm_support_instrument|form';
  $field_group->group_name = 'group_strong_weak_erm_si';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erm_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Strengths and weaknesses',
    'weight' => '11',
    'children' => array(
      0 => 'field_effectiveness_erm_si',
      1 => 'field_strengths_erm_si',
      2 => 'field_weaknesses_erm_si',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-strong-weak-erm-si field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_strong_weak_erm_si|node|erm_support_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_titles_erm_si|node|erm_support_instrument|form';
  $field_group->group_name = 'group_titles_erm_si';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erm_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title names',
    'weight' => '7',
    'children' => array(
      0 => 'field_native_name_erm_si',
      1 => 'field_english_name_erm_si',
      2 => 'field_name_notes_erm_si',
      3 => 'field_name_notes_memory_erm_si',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-titles-erm-si field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_titles_erm_si|node|erm_support_instrument|form'] = $field_group;

  return $export;
}
