<?php
/**
 * @file
 * country_profile_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function country_profile_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_contract|node|ef_working_life_country_profiles|form';
  $field_group->group_name = 'group_ef_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_working_life_country_profiles';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '19',
    'children' => array(
      0 => 'field_ef_assign_to_country_group',
      1 => 'field_ef_assign_to_author',
      2 => 'field_ef_author_contract',
      3 => 'field_ef_approved_for_payment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-contract field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_contract|node|ef_working_life_country_profiles|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_publishing_options|node|ef_working_life_country_profiles|form';
  $field_group->group_name = 'group_ef_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_working_life_country_profiles';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation & Assignment',
    'weight' => '20',
    'children' => array(
      0 => 'field_ef_assign_to_user',
      1 => 'field_ef_revision_deadline',
      2 => 'field_ef_ee_deadline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-publishing-options field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_publishing_options|node|ef_working_life_country_profiles|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_working_life_profile|node|ef_working_life_country_profiles|form';
  $field_group->group_name = 'group_ef_working_life_profile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_working_life_country_profiles';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content  working life profile',
    'weight' => '13',
    'children' => array(
      0 => 'body',
      1 => 'field_ef_source_documents',
      2 => 'field_ef_flag',
      3 => 'field_ef_related_content',
      4 => 'field_ef_responsible',
      5 => 'field_ef_documents',
      6 => 'field_subtitle',
      7 => 'field_ef_cp_update_day',
      8 => 'group_tabs_working_life',
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
  $export['group_ef_working_life_profile|node|ef_working_life_country_profiles|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_living_and_working|node|ef_working_life_country_profiles|form';
  $field_group->group_name = 'group_living_and_working';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_working_life_country_profiles';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content Living and Working',
    'weight' => '12',
    'children' => array(
      0 => 'field_ef_eurostat_results',
      1 => 'field_ef_summary_living_working',
      2 => 'field_ef_country_main_img',
      3 => 'group_living_working',
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
  $export['group_living_and_working|node|ef_working_life_country_profiles|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_living_working|node|ef_working_life_country_profiles|form';
  $field_group->group_name = 'group_living_working';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_working_life_country_profiles';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_living_and_working';
  $field_group->data = array(
    'label' => 'Content tabs',
    'weight' => '15',
    'children' => array(
      0 => 'field_ef_tabs_living_working',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-living-working field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_living_working|node|ef_working_life_country_profiles|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs_working_life|node|ef_working_life_country_profiles|form';
  $field_group->group_name = 'group_tabs_working_life';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_working_life_country_profiles';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_working_life_profile';
  $field_group->data = array(
    'label' => 'Content tabs',
    'weight' => '22',
    'children' => array(
      0 => 'field_ef_tabs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tabs-working-life field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tabs_working_life|node|ef_working_life_country_profiles|form'] = $field_group;

  return $export;
}
