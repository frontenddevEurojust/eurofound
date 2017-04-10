<?php
/**
 * @file
 * ef_spotlight.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ef_spotlight_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_spotlight_entry|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_spotlight_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '12',
    'children' => array(
      0 => 'field_ef_migration_datetime',
      1 => 'field_ef_migration_details',
      2 => 'field_ef_migration_old_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-migration-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_migration_info|node|ef_spotlight_entry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_about|node|ef_spotlight_entry|default';
  $field_group->group_name = 'group_node_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_spotlight_entry';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node About',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_spotlight_theme',
      1 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-node-about field-group-div',
      ),
    ),
  );
  $export['group_node_about|node|ef_spotlight_entry|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_spotlight_entry|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_spotlight_entry';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '0',
    'children' => array(
      0 => 'field_ef_observatory',
      1 => 'field_ef_theme',
      2 => 'field_ef_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-node-tagging field-group-div',
      ),
    ),
  );
  $export['group_node_tagging|node|ef_spotlight_entry|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_spotlight_entry|full';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_spotlight_entry';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '0',
    'children' => array(
      0 => 'field_ef_spotlight_theme',
      1 => 'field_ef_observatory',
      2 => 'field_ef_theme',
      3 => 'field_ef_topic',
      4 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Node Tagging',
      'instance_settings' => array(
        'classes' => 'group-node-tagging field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_tagging|node|ef_spotlight_entry|full'] = $field_group;

  return $export;
}
