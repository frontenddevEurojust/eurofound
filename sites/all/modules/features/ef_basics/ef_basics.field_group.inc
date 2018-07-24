<?php
/**
 * @file
 * ef_basics.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ef_basics_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|board_member_page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'board_member_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_ef_documents',
      2 => 'field_ef_main_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|board_member_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_ef_documents',
      2 => 'field_ef_main_image',
      3 => 'field_ef_activities',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|board_member_page|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'board_member_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_migration_datetime',
      1 => 'field_ef_migration_details',
      2 => 'field_ef_migration_old_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Migration Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ef-migration-info field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_migration_info|node|board_member_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|page|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_ef_migration_datetime',
      1 => 'field_ef_migration_old_url',
      2 => 'field_ef_migration_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Migration Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-ef-migration-info field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_migration_info|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|board_member_page|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'board_member_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_ef_related_content',
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
  $export['group_metadata|node|board_member_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|page|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_ef_related_content',
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
  $export['group_metadata|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_about|node|ef_emire_dictionary|default';
  $field_group->group_name = 'group_node_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_emire_dictionary';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '3',
    'children' => array(
      0 => 'field_ef_country',
      1 => 'author',
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
  $export['group_node_about|node|ef_emire_dictionary|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|board_member_page|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'board_member_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '12',
    'children' => array(
      0 => 'field_ef_observatory',
      1 => 'field_ef_related_content',
      2 => 'field_ef_theme',
      3 => 'field_ef_topic',
      4 => 'published_on',
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
  $export['group_node_tagging|node|board_member_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|page|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '1',
    'children' => array(
      0 => 'field_ef_observatory',
      1 => 'field_ef_topic',
      2 => 'published_on',
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
  $export['group_node_tagging|node|page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|board_member_page|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'board_member_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Structure',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_observatory',
      1 => 'field_ef_theme',
      2 => 'field_ef_topic',
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
  $export['group_structure|node|board_member_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|page|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Structure',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_observatory',
      1 => 'field_ef_theme',
      2 => 'field_ef_topic',
      3 => 'language',
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
  $export['group_structure|node|page|form'] = $field_group;

  return $export;
}
