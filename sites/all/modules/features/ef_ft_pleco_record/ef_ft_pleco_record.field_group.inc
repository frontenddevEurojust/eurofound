<?php
/**
 * @file
 * ef_ft_pleco_record.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ef_ft_pleco_record_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|pleco_record|default';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pleco_record';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_pleco_record_types',
      1 => 'field_pleco_platforms',
      2 => 'field_pleco_countries',
      3 => 'field_pleco_keywords',
      4 => 'field_pleco_languages',
      5 => 'field_pleco_organisations',
      6 => 'field_pleco_methodologies',
      7 => 'field_pleco_availability',
      8 => 'field_pleco_date',
      9 => 'field_pleco_publication_date',
      10 => 'field_pleco_work_typologies',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata field-group-fieldset',
      ),
    ),
  );
  $export['group_metadata|node|pleco_record|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|pleco_record|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pleco_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_pleco_record_types',
      1 => 'field_pleco_platforms',
      2 => 'field_pleco_platform_sectors',
      3 => 'field_pleco_countries',
      4 => 'field_pleco_keywords',
      5 => 'field_pleco_languages',
      6 => 'field_pleco_organisations',
      7 => 'field_pleco_methodologies',
      8 => 'field_pleco_availability',
      9 => 'field_pleco_date',
      10 => 'field_pleco_publication_date',
      11 => 'field_pleco_work_typologies',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|pleco_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|pleco_record|full';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pleco_record';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'field_pleco_record_types',
      1 => 'field_pleco_platforms',
      2 => 'field_pleco_platform_sectors',
      3 => 'field_pleco_countries',
      4 => 'field_pleco_keywords',
      5 => 'field_pleco_languages',
      6 => 'field_pleco_organisations',
      7 => 'field_pleco_methodologies',
      8 => 'field_pleco_availability',
      9 => 'field_pleco_date',
      10 => 'field_pleco_publication_date',
      11 => 'field_pleco_work_typologies',
    ),
    'format_type' => 'ef_pleco_keyvaluetable',
    'format_settings' => array(
      'label' => 'Metadata',
    ),
  );
  $export['group_metadata|node|pleco_record|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|pleco_record|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pleco_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related ...',
    'weight' => '6',
    'children' => array(
      0 => 'field_ef_related_content',
      1 => 'field_related_taxonomy',
      2 => 'field_pleco_related_dossiers',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related|node|pleco_record|form'] = $field_group;

  return $export;
}
