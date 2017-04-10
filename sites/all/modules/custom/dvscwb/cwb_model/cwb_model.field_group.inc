<?php
/**
 * @file
 * cwb_model.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cwb_model_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banking_sector|node|cwb_country_info|form';
  $field_group->group_name = 'group_banking_sector';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cwb_country_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_database_meta_data';
  $field_group->data = array(
    'label' => 'Banking sector',
    'weight' => '22',
    'children' => array(
      0 => 'field_banking_sector',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-banking-sector field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_banking_sector|node|cwb_country_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_chemical_sector|node|cwb_country_info|form';
  $field_group->group_name = 'group_chemical_sector';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cwb_country_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_database_meta_data';
  $field_group->data = array(
    'label' => 'Chemical sector',
    'weight' => '20',
    'children' => array(
      0 => 'field_chemical_sector',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-chemical-sector field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_chemical_sector|node|cwb_country_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_civil_service_sector|node|cwb_country_info|form';
  $field_group->group_name = 'group_civil_service_sector';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cwb_country_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_database_meta_data';
  $field_group->data = array(
    'label' => 'Civil service sector',
    'weight' => '23',
    'children' => array(
      0 => 'field_civil_service_sector',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-civil-service-sector field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_civil_service_sector|node|cwb_country_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_database_meta_data|node|cwb_country_info|form';
  $field_group->group_name = 'group_database_meta_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cwb_country_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Database meta-data',
    'weight' => '7',
    'children' => array(
      0 => 'group_total_economy',
      1 => 'group_metal_sector',
      2 => 'group_chemical_sector',
      3 => 'group_retail_sector',
      4 => 'group_banking_sector',
      5 => 'group_civil_service_sector',
      6 => 'group_local_government_sector',
      7 => 'group_aditional',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Database meta-data',
      'instance_settings' => array(
        'classes' => ' group-database-meta-data field-group-tabs',
      ),
    ),
  );
  $export['group_database_meta_data|node|cwb_country_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_government_sector|node|cwb_country_info|form';
  $field_group->group_name = 'group_local_government_sector';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cwb_country_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_database_meta_data';
  $field_group->data = array(
    'label' => 'Local government sector',
    'weight' => '24',
    'children' => array(
      0 => 'field_local_government_sector',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-local-government-sector field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_local_government_sector|node|cwb_country_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metal_sector|node|cwb_country_info|form';
  $field_group->group_name = 'group_metal_sector';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cwb_country_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_database_meta_data';
  $field_group->data = array(
    'label' => 'Metal sector',
    'weight' => '19',
    'children' => array(
      0 => 'field_metal_sector',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-metal-sector field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metal_sector|node|cwb_country_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_retail_sector|node|cwb_country_info|form';
  $field_group->group_name = 'group_retail_sector';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cwb_country_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_database_meta_data';
  $field_group->data = array(
    'label' => 'Retail sector',
    'weight' => '21',
    'children' => array(
      0 => 'field_retail_sector',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-retail-sector field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_retail_sector|node|cwb_country_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_total_economy|node|cwb_country_info|form';
  $field_group->group_name = 'group_total_economy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cwb_country_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_database_meta_data';
  $field_group->data = array(
    'label' => 'Total economy',
    'weight' => '18',
    'children' => array(
      0 => 'field_total_economy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-total-economy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_total_economy|node|cwb_country_info|form'] = $field_group;

  return $export;
}
