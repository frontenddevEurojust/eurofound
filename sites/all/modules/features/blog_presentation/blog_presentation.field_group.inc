<?php
/**
 * @file
 * blog_presentation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function blog_presentation_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_authors|node|blog|form';
  $field_group->group_name = 'group_authors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Authors',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_publ_contributors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-authors field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_authors|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_authors|node|presentation|form';
  $field_group->group_name = 'group_authors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Authors',
    'weight' => '9',
    'children' => array(
      0 => 'field_ef_publ_contributors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-authors field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_authors|node|presentation|form'] = $field_group;

  return $export;
}
