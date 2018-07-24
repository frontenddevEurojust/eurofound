<?php
/**
 * @file
 * erm_legal_database.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erm_legal_database_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_erm_reg|node|ef_erm_regulation|form';
  $field_group->group_name = 'group_content_erm_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_erm_regulation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '8',
    'children' => array(
      0 => 'body',
      1 => 'field_article_erm_reg',
      2 => 'field_comments_erm_reg',
      3 => 'field_article_notes',
      4 => 'field_article_notes_memo_erm_reg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-erm-reg field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content_erm_reg|node|ef_erm_regulation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contract_erm_reg|node|ef_erm_regulation|form';
  $field_group->group_name = 'group_contract_erm_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_erm_regulation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '17',
    'children' => array(
      0 => 'field_assign_to_erm_reg',
      1 => 'field_contract_erm_reg',
      2 => 'field_approved_payment_erm_reg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contract-erm-reg field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contract_erm_reg|node|ef_erm_regulation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_involved_actors_erm_reg|node|ef_erm_regulation|form';
  $field_group->group_name = 'group_involved_actors_erm_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_erm_regulation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Involved actors',
    'weight' => '9',
    'children' => array(
      0 => 'field_involved_actors_erm_reg',
      1 => 'field_involvement_other_erm_reg',
      2 => 'field_involvedactors_com_erm_reg',
      3 => 'field_invol_notes_memo_erm_reg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-involved-actors-erm-reg field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_involved_actors_erm_reg|node|ef_erm_regulation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_thresholds_erm_reg|node|ef_erm_regulation|form';
  $field_group->group_name = 'group_thresholds_erm_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_erm_regulation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thresholds',
    'weight' => '13',
    'children' => array(
      0 => 'field_company_size_erm_reg',
      1 => 'field_affected_employees_erm_reg',
      2 => 'field_thresholds_notes',
      3 => 'field_thres_notes_memo_erm_reg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-thresholds-erm-reg field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_thresholds_erm_reg|node|ef_erm_regulation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_titles_erm_reg|node|ef_erm_regulation|form';
  $field_group->group_name = 'group_titles_erm_reg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_erm_regulation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title names',
    'weight' => '7',
    'children' => array(
      0 => 'field_english_name_erm_reg',
      1 => 'field_native_name_erm_reg',
      2 => 'field_native_name_com_erm_reg',
      3 => 'field_name_notes_memory_erm_reg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-titles-erm-reg field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_titles_erm_reg|node|ef_erm_regulation|form'] = $field_group;

  return $export;
}
