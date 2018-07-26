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
  $field_group->identifier = 'group_metadata|node|pleco_record|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pleco_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '9',
    'children' => array(
      0 => 'field_pleco_platforms',
      1 => 'field_pleco_platform_sectors',
      2 => 'field_pleco_countries',
      3 => 'field_pleco_keywords',
      4 => 'field_pleco_languages',
      5 => 'field_pleco_organisations',
      6 => 'field_pleco_methodologies',
      7 => 'field_pleco_availability',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|pleco_record|form'] = $field_group;

  return $export;
}
