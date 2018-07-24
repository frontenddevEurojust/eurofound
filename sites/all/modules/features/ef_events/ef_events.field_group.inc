<?php
/**
 * @file
 * ef_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ef_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_event_venue|node|ef_event|form';
  $field_group->group_name = 'group_ef_event_venue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Venue',
    'weight' => '21',
    'children' => array(
      0 => 'field_ef_venue_title',
      1 => 'field_ef_country',
      2 => 'field_ef_city',
      3 => 'field_ef_address',
      4 => 'field_ef_geo_location',
      5 => 'field_ef_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-event-venue field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_event_venue|node|ef_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_event|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '15',
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
  $export['group_ef_migration_info|node|ef_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_venue|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_venue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '14',
    'children' => array(
      0 => 'field_ef_migration_old_url',
      1 => 'field_ef_migration_details',
      2 => 'field_ef_migration_datetime',
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
  $export['group_ef_migration_info|node|ef_venue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_venue_info|node|ef_event|default';
  $field_group->group_name = 'group_ef_venue_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_venue_details';
  $field_group->data = array(
    'label' => 'ef-venue-info',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_address',
      1 => 'field_ef_city',
      2 => 'field_ef_country',
      3 => 'field_ef_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ef-venue-info',
      'instance_settings' => array(
        'classes' => 'group-ef-venue-info field-group-div ef-venue-info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_venue_info|node|ef_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|ef_event|default';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_ef_organised_by',
      1 => 'field_ef_event_type',
      2 => 'ef_event_date_range',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Info',
      'instance_settings' => array(
        'classes' => 'group-event-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_info|node|ef_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_event|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_theme',
      1 => 'field_ef_topic',
      2 => 'field_ef_observatory',
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
  $export['group_node_tagging|node|ef_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venue_details|node|ef_event|default';
  $field_group->group_name = 'group_venue_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Venue Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_geo_location',
      1 => 'group_ef_venue_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-venue-details field-group-fieldset',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
    ),
  );
  $export['group_venue_details|node|ef_event|default'] = $field_group;

  return $export;
}
