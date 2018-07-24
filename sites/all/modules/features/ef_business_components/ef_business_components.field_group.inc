<?php
/**
 * @file
 * ef_business_components.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ef_business_components_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deadlines|node|ef_vacancy|default';
  $field_group->group_name = 'group_deadlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_vacancy';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Deadlines',
    'weight' => '4',
    'children' => array(
      0 => 'field_ef_application_deadline',
      1 => 'field_ef_shortlisting_deadline',
      2 => 'field_ef_interviews_deadline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Deadlines',
      'instance_settings' => array(
        'classes' => 'group-deadlines field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_deadlines|node|ef_vacancy|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_call_for_tender|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_call_for_tender';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '18',
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
  $export['group_ef_migration_info|node|ef_call_for_tender|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_project|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '10',
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
  $export['group_ef_migration_info|node|ef_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_vacancy|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_vacancy';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '14',
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
  $export['group_ef_migration_info|node|ef_vacancy|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_call_for_tender|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_call_for_tender';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_observatory',
      1 => 'field_ef_theme',
      2 => 'field_ef_topic',
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
  $export['group_node_tagging|node|ef_call_for_tender|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_vacancy|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_vacancy';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '0',
    'children' => array(
      0 => 'field_ef_observatory',
      1 => 'field_ef_theme',
      2 => 'field_ef_topic',
      3 => 'post_date',
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
  $export['group_node_tagging|node|ef_vacancy|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_procurement_deadlines|node|ef_call_for_tender|default';
  $field_group->group_name = 'group_procurement_deadlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_call_for_tender';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Deadlines',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_access_to_documentation',
      1 => 'field_ef_submission_of_tenders',
      2 => 'field_ef_opening_of_tenders',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Deadlines',
      'instance_settings' => array(
        'classes' => 'group-procurement-deadlines field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_procurement_deadlines|node|ef_call_for_tender|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_procurement_info|node|ef_call_for_tender|default';
  $field_group->group_name = 'group_procurement_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_call_for_tender';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Procurement Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_ef_tender_publication_date',
      1 => 'field_ef_procurement_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Procurement Info',
      'instance_settings' => array(
        'classes' => 'group-procurement-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_procurement_info|node|ef_call_for_tender|default'] = $field_group;

  return $export;
}
