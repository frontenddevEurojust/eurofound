<?php
/**
 * @file
 * ef_restructuring.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ef_restructuring_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_company|node|ef_factsheet|default';
  $field_group->group_name = 'group_company';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_factsheet_info';
  $field_group->data = array(
    'label' => 'Company',
    'weight' => '3',
    'children' => array(
      0 => 'field_ef_group',
      1 => 'field_ef_nace',
      2 => 'field_ef_number_employed',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Company',
      'instance_settings' => array(
        'classes' => 'group-company field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_company|node|ef_factsheet|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_factsheet_group1|node|ef_factsheet|form';
  $field_group->group_name = 'group_ef_factsheet_group1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Geographic Location',
    'weight' => '6',
    'children' => array(
      0 => 'field_ef_nuts',
      1 => 'field_ef_affected_units',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Geographic Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-factsheet-group1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_factsheet_group1|node|ef_factsheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_factsheet_group2|node|ef_factsheet|form';
  $field_group->group_name = 'group_ef_factsheet_group2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Company',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_group',
      1 => 'field_ef_nace',
      2 => 'field_ef_number_employed',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Company',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-factsheet-group2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_factsheet_group2|node|ef_factsheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_factsheet_group3|node|ef_factsheet|form';
  $field_group->group_name = 'group_ef_factsheet_group3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Employment effects',
    'weight' => '8',
    'children' => array(
      0 => 'field_ef_announcement_date',
      1 => 'field_ef_employment_effect_start',
      2 => 'field_ef_foreseen_end_date',
      3 => 'field_ef_type_of_restructuring',
      4 => 'field_ef_direct_dismissals',
      5 => 'field_ef_job_reductions_max',
      6 => 'field_ef_job_reductions_min',
      7 => 'field_ef_other_job_reduction',
      8 => 'field_ef_planned_job_creation',
      9 => 'field_ef_new_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Employment effects',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-factsheet-group3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_factsheet_group3|node|ef_factsheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_factsheet|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '17',
    'children' => array(
      0 => 'field_ef_migration_datetime',
      1 => 'field_ef_migration_old_url',
      2 => 'field_ef_migration_details',
      3 => 'field_ef_migration_old_user',
      4 => 'field_ef_migration_factsheet_id',
      5 => 'field_ef_migration_factsheet_key',
      6 => 'field_ef_migration_fact_base_id',
      7 => 'field_ef_factsheet_sources',
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
  $export['group_ef_migration_info|node|ef_factsheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_restructuring_in_smes|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_restructuring_in_smes';
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
  $export['group_ef_migration_info|node|ef_restructuring_in_smes|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_support_instrument|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '21',
    'children' => array(
      0 => 'field_ef_migration_datetime',
      1 => 'field_ef_migration_old_url',
      2 => 'field_ef_migration_details',
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
  $export['group_ef_migration_info|node|ef_support_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_request_assignee|node|ef_factsheet|form';
  $field_group->group_name = 'group_ef_request_assignee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '16',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_contract',
      2 => 'field_ef_assign_to',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-request-assignee field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_request_assignee|node|ef_factsheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_request_assignee|node|ef_ir_dictionary|form';
  $field_group->group_name = 'group_ef_request_assignee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ir_dictionary';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '46',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_assign_to',
      2 => 'field_ef_contract',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-request-assignee field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_request_assignee|node|ef_ir_dictionary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_request_assignee|node|ef_regulation|form';
  $field_group->group_name = 'group_ef_request_assignee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_regulation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '21',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_contract',
      2 => 'field_ef_assign_to',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-request-assignee field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_request_assignee|node|ef_regulation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_request_assignee|node|ef_support_instrument|form';
  $field_group->group_name = 'group_ef_request_assignee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_support_instrument';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '22',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_contract',
      2 => 'field_ef_assign_to',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-request-assignee field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_request_assignee|node|ef_support_instrument|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employment_effects|node|ef_factsheet|default';
  $field_group->group_name = 'group_employment_effects';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_factsheet_info';
  $field_group->data = array(
    'label' => 'Employment effects',
    'weight' => '4',
    'children' => array(
      0 => 'field_ef_announcement_date',
      1 => 'field_ef_employment_effect_start',
      2 => 'field_ef_foreseen_end_date',
      3 => 'field_ef_type_of_restructuring',
      4 => 'field_ef_direct_dismissals',
      5 => 'field_ef_job_reductions_max',
      6 => 'field_ef_job_reductions_min',
      7 => 'field_ef_other_job_reduction',
      8 => 'field_ef_planned_job_creation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Employment effects',
      'instance_settings' => array(
        'classes' => 'group-employment-effects field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_employment_effects|node|ef_factsheet|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_info|node|ef_factsheet|default';
  $field_group->group_name = 'group_factsheet_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Factsheet Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_ef_sources_links',
      1 => 'field_ef_additional_information',
      2 => 'field_ef_fact_sources',
      3 => 'group_company',
      4 => 'group_employment_effects',
      5 => 'group_geographic_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Factsheet Info',
      'instance_settings' => array(
        'classes' => 'group-factsheet-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_factsheet_info|node|ef_factsheet|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geographic_location|node|ef_factsheet|default';
  $field_group->group_name = 'group_geographic_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_factsheet_info';
  $field_group->data = array(
    'label' => 'Geographic Location',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_nuts',
      1 => 'field_ef_affected_units',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Geographic Location',
      'instance_settings' => array(
        'classes' => 'group-geographic-location field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_geographic_location|node|ef_factsheet|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_info|node|ef_regulation|default';
  $field_group->group_name = 'group_node_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_regulation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_regulation_phase',
      1 => 'field_ef_regulation_funding',
      2 => 'field_ef_regulation_article',
      3 => 'field_ef_regulation_involvements',
      4 => 'field_ef_urls',
      5 => 'field_ef_source',
      6 => 'field_ef_regulation_thresholds',
      7 => 'field_ef_thresholds_texts',
      8 => 'field_ef_country',
      9 => 'body',
      10 => 'field_ef_involvement_other',
      11 => 'field_ef_regulation_english_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Node Info',
      'instance_settings' => array(
        'classes' => 'group-node-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_info|node|ef_regulation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_info|node|ef_restructuring_in_smes|default';
  $field_group->group_name = 'group_node_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_restructuring_in_smes';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Info',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_ef_country',
      2 => 'field_ef_employees_after_restr',
      3 => 'field_ef_employees_before_restr',
      4 => 'field_ef_nace',
      5 => 'field_ef_restructuring_keywords',
      6 => 'field_ef_survey_date',
      7 => 'field_ef_type_of_restructuring',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Node Info',
      'instance_settings' => array(
        'classes' => 'group-node-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_info|node|ef_restructuring_in_smes|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_info|node|ef_support_instrument|default';
  $field_group->group_name = 'group_node_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_support_instrument';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_coverage_eligibility',
      1 => 'field_ef_effectiveness',
      2 => 'field_ef_instrument_cat_phases',
      3 => 'field_ef_instrument_categories',
      4 => 'field_ef_instrument_examples',
      5 => 'field_ef_instrument_fundings',
      6 => 'field_ef_involvement_texts',
      7 => 'field_ef_involvement_types',
      8 => 'field_ef_main_characteristics',
      9 => 'field_ef_source',
      10 => 'field_ef_strengths',
      11 => 'field_ef_urls',
      12 => 'field_ef_weaknesses',
      13 => 'field_ef_country',
      14 => 'field_ef_english_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Node Info',
      'instance_settings' => array(
        'classes' => 'group-node-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_info|node|ef_support_instrument|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_factsheet|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_factsheet';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '12',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_report_delivery_date',
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
  $export['group_node_tagging|node|ef_factsheet|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_input_to_erm|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_input_to_erm';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '0',
    'children' => array(
      0 => 'field_ef_theme',
      1 => 'field_ef_topic',
      2 => 'field_ef_observatory',
      3 => 'field_ef_report_delivery_date',
      4 => 'field_ef_approved_for_payment',
      5 => 'field_ef_contract',
      6 => 'field_ef_assign_to',
      7 => 'post_date',
      8 => 'ds_submission_date',
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
  $export['group_node_tagging|node|ef_input_to_erm|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_ir_dictionary|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ir_dictionary';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '9',
    'children' => array(),
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
  $export['group_node_tagging|node|ef_ir_dictionary|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_regulation|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_regulation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '0',
    'children' => array(
      0 => 'field_ef_theme',
      1 => 'field_ef_observatory',
      2 => 'field_ef_approved_for_payment',
      3 => 'field_ef_report_delivery_date',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_tagging|node|ef_regulation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_restructuring_in_smes|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_restructuring_in_smes';
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
  $export['group_node_tagging|node|ef_restructuring_in_smes|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_support_instrument|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_support_instrument';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '0',
    'children' => array(
      0 => 'field_ef_theme',
      1 => 'field_ef_observatory',
      2 => 'field_ef_approved_for_payment',
      3 => 'field_ef_report_delivery_date',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_tagging|node|ef_support_instrument|default'] = $field_group;

  return $export;
}
