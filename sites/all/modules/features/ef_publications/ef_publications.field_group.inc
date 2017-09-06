<?php
/**
 * @file
 * ef_publications.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ef_publications_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|ef_publication|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_ef_document',
      2 => 'field_ef_publ_contributors',
      3 => 'field_ef_document_type',
      4 => 'field_ef_number_of_pages',
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
  $export['group_content|node|ef_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|ef_report|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_ef_documents',
      2 => 'field_ef_source_documents',
      3 => 'field_ef_main_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|ef_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documents|node|ef_national_contribution|default';
  $field_group->group_name = 'group_documents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_national_contribution';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '16',
    'children' => array(
      0 => 'field_ef_documents',
      1 => 'field_ef_source_documents',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'nc-attached-documents',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_documents|node|ef_national_contribution|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_activity_dissemination|node|ef_ic_quarterly_report|form';
  $field_group->group_name = 'group_ef_activity_dissemination';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy debate, national initiative or event and Disseminations',
    'weight' => '7',
    'children' => array(
      0 => 'group_ef_activity_group_tab',
      1 => 'group_ef_disseminations',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-ef-activity-dissemination field-group-htabs',
      ),
    ),
  );
  $export['group_ef_activity_dissemination|node|ef_ic_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_activity_group_tab|node|ef_ic_quarterly_report|form';
  $field_group->group_name = 'group_ef_activity_group_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_activity_dissemination';
  $field_group->data = array(
    'label' => 'Policy debate, national initiative or event',
    'weight' => '6',
    'children' => array(
      0 => 'field_ef_activity',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ef_activity_group_tab|node|ef_ic_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_activity|node|ef_ic_quarterly_report|default';
  $field_group->group_name = 'group_ef_activity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy debate, national initiative or event',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_activity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-activity field-group-fieldset',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
    ),
  );
  $export['group_ef_activity|node|ef_ic_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_activity|node|ef_ic_quarterly_report|form';
  $field_group->group_name = 'group_ef_activity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy debate, national initiative or event',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-activity field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_activity|node|ef_ic_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_activity|node|ef_ic_quarterly_report|print';
  $field_group->group_name = 'group_ef_activity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy debate, national initiative or event',
    'weight' => '3',
    'children' => array(
      0 => 'field_ef_activity_context',
      1 => 'field_ef_activity_source',
      2 => 'field_ef_activity_timeline',
      3 => 'field_ef_activity_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Policy debate, national initiative or event',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_activity|node|ef_ic_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_contract|node|ef_case_study|form';
  $field_group->group_name = 'group_ef_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '38',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_assign_to_country_group',
      2 => 'field_ef_assign_to_author',
      3 => 'field_ef_author_contract',
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
  $export['group_ef_contract|node|ef_case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_contract|node|ef_comparative_analytical_report|form';
  $field_group->group_name = 'group_ef_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_comparative_analytical_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '30',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_assign_to_country_group',
      2 => 'field_ef_assign_to_author',
      3 => 'field_ef_author_contract',
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
  $export['group_ef_contract|node|ef_comparative_analytical_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_contract|node|ef_ic_quarterly_report|form';
  $field_group->group_name = 'group_ef_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '19',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_assign_to_country_group',
      2 => 'field_ef_assign_to_author',
      3 => 'field_ef_author_contract',
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
  $export['group_ef_contract|node|ef_ic_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_contract|node|ef_national_contribution|form';
  $field_group->group_name = 'group_ef_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_national_contribution';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '26',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_assign_to_country_group',
      2 => 'field_ef_assign_to_author',
      3 => 'field_ef_author_contract',
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
  $export['group_ef_contract|node|ef_national_contribution|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_contract|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '23',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_assign_to_country_group',
      2 => 'field_ef_assign_to_author',
      3 => 'field_ef_author_contract',
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
  $export['group_ef_contract|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_contract|node|ef_report|form';
  $field_group->group_name = 'group_ef_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '15',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_assign_to_country_group',
      2 => 'field_ef_assign_to_author',
      3 => 'field_ef_author_contract',
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
  $export['group_ef_contract|node|ef_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_disseminations|node|ef_ic_quarterly_report|form';
  $field_group->group_name = 'group_ef_disseminations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_activity_dissemination';
  $field_group->data = array(
    'label' => 'Disseminations',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_dissemination',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ef_disseminations|node|ef_ic_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_dissemination|node|ef_ic_quarterly_report|default';
  $field_group->group_name = 'group_ef_dissemination';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Disseminations',
    'weight' => '6',
    'children' => array(
      0 => 'field_ef_dissemination',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Disseminations',
      'instance_settings' => array(
        'classes' => 'group-ef-dissemination field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_dissemination|node|ef_ic_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_dissemination|node|ef_ic_quarterly_report|form';
  $field_group->group_name = 'group_ef_dissemination';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dissemination',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dissemination',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-dissemination field-group-fieldset',
        'description' => 'In case you have disseminated Eurofound output via existing channels during this quarter, please provide details. ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_dissemination|node|ef_ic_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_dissemination|node|ef_ic_quarterly_report|print';
  $field_group->group_name = 'group_ef_dissemination';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dissemination',
    'weight' => '4',
    'children' => array(
      0 => 'field_ef_dissemination_channel',
      1 => 'field_ef_dissemination_timeline',
      2 => 'field_ef_dissemination_title',
      3 => 'field_ef_num_of_outputs_sent_out',
      4 => 'field_ef_other_feedback',
      5 => 'field_ef_target_audience',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dissemination',
      'instance_settings' => array(
        'classes' => 'group-ef-dissemination field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_dissemination|node|ef_ic_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_case_study|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '36',
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
  $export['group_ef_migration_info|node|ef_case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_comparative_analytical_report|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_comparative_analytical_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '27',
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
  $export['group_ef_migration_info|node|ef_comparative_analytical_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_national_contribution|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_national_contribution';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '18',
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
  $export['group_ef_migration_info|node|ef_national_contribution|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_publication|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '8',
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
  $export['group_ef_migration_info|node|ef_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_migration_info|node|ef_report|form';
  $field_group->group_name = 'group_ef_migration_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Migration Info',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_migration_datetime',
      1 => 'field_ef_migration_old_url',
      2 => 'field_ef_migration_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_migration_info|node|ef_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_node_details|node|ef_publication|default';
  $field_group->group_name = 'group_ef_node_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_ef_reference_no',
      1 => 'field_ef_publ_keywords',
      2 => 'field_ef_publ_contributors',
      3 => 'field_ef_isbn',
      4 => 'field_ef_project',
      5 => 'field_ef_publ_sector',
      6 => 'field_ef_catalogue',
      7 => 'field_ef_document_type',
      8 => 'field_ef_number_of_pages',
      9 => 'field_ef_topic',
      10 => 'field_ef_doi',
      11 => 'field_ef_observatory',
      12 => 'field_ef_eu_related_countries',
      13 => 'published_on',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Node Details',
      'instance_settings' => array(
        'classes' => 'group-ef-node-details field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_node_details|node|ef_publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_publishing_options|node|ef_case_study|form';
  $field_group->group_name = 'group_ef_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation & Assignment',
    'weight' => '40',
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
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_publishing_options|node|ef_case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_publishing_options|node|ef_comparative_analytical_report|form';
  $field_group->group_name = 'group_ef_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_comparative_analytical_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation & Assignment',
    'weight' => '31',
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
  $export['group_ef_publishing_options|node|ef_comparative_analytical_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_publishing_options|node|ef_ic_quarterly_report|form';
  $field_group->group_name = 'group_ef_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
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
      'label' => 'Moderation & Assignment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-publishing-options field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_publishing_options|node|ef_ic_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_publishing_options|node|ef_national_contribution|form';
  $field_group->group_name = 'group_ef_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_national_contribution';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation & Assignment',
    'weight' => '27',
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
  $export['group_ef_publishing_options|node|ef_national_contribution|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_publishing_options|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation & Assignment',
    'weight' => '24',
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
  $export['group_ef_publishing_options|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_publishing_options|node|ef_report|form';
  $field_group->group_name = 'group_ef_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation & Assignment',
    'weight' => '17',
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
  $export['group_ef_publishing_options|node|ef_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_actors|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_actors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '2. Actors, institutions and their structures',
    'weight' => '6',
    'children' => array(
      0 => 'field_ef_actors_institutions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '2. Actors, institutions and their structures',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-actors field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_actors|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_actors|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_actors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '2. Actors, institutions and their structures',
    'weight' => '4',
    'children' => array(
      0 => 'field_ef_actors_institutions',
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
        'classes' => 'group-ef-qr-actors field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_actors|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_dispute|field_collection_item|field_ef_processes|default';
  $field_group->group_name = 'group_ef_qr_dispute';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_ef_processes';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dispute and dispute resolution',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_quarterly_report_3',
      1 => 'field_ef_quarterly_report_4',
      2 => 'field_ef_quarterly_report_5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dispute and dispute resolution',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-dispute field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_dispute|field_collection_item|field_ef_processes|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_dispute|field_collection_item|field_ef_processes|form';
  $field_group->group_name = 'group_ef_qr_dispute';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_ef_processes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dispute and dispute resolution',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_quarterly_report_3',
      1 => 'field_ef_quarterly_report_4',
      2 => 'field_ef_quarterly_report_5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dispute and dispute resolution',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-dispute field-group-fieldset',
        'description' => 'Please report on disputes and conflicts between unions and employers. Summarise the official data on strikes or lock-outs when available, and qualitative information on the same issues.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_dispute|field_collection_item|field_ef_processes|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_employ_conditions|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_employ_conditions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Individual employment relations-terms and conditions of employment',
    'weight' => '31',
    'children' => array(
      0 => 'field_ef_employment_status',
      1 => 'field_ef_entitlements_obligs',
      2 => 'field_ef_termination_of_employm',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Individual employment relations-terms and conditions of employment',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-employ-conditions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_employ_conditions|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_employ_conditions|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_qr_employ_conditions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Individual employment relations-terms and conditions of employment',
    'weight' => '8',
    'children' => array(
      0 => 'field_ef_employment_status',
      1 => 'field_ef_entitlements_obligs',
      2 => 'field_ef_termination_of_employm',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Individual employment relations-terms and conditions of employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-employ-conditions field-group-fieldset',
        'description' => 'Individual employment relations are the relationship between the individual worker and their employer. This relationship is shaped by legal regulation and by the outcomes of social partner negotiations over the terms and conditions governing the employment relationship. Find out more about EurWORK\'s work on <a href=\'http://www.eurofound.europa.eu/individual-employment-relations\'>individual employment relations</a>.
',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_qr_employ_conditions|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_employ_conditions|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_employ_conditions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Individual employment relations-terms and conditions of employment',
    'weight' => '14',
    'children' => array(
      0 => 'field_ef_employment_status',
      1 => 'field_ef_entitlements_obligs',
      2 => 'field_ef_termination_of_employm',
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
        'classes' => 'group-ef-qr-employ-conditions field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_employ_conditions|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_health|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Health and wellbeing at work',
    'weight' => '36',
    'children' => array(
      0 => 'field_ef_absenteeism_presenteeis',
      1 => 'field_ef_occupational_health',
      2 => 'field_ef_physical_risk_factors',
      3 => 'field_ef_psychosocial_risk_fact',
      4 => 'field_ef_violence_and_harassment',
      5 => 'field_ef_work_related_health',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Health and wellbeing at work',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-health field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_health|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_health|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_qr_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Health and wellbeing at work',
    'weight' => '12',
    'children' => array(
      0 => 'field_ef_absenteeism_presenteeis',
      1 => 'field_ef_occupational_health',
      2 => 'field_ef_physical_risk_factors',
      3 => 'field_ef_psychosocial_risk_fact',
      4 => 'field_ef_violence_and_harassment',
      5 => 'field_ef_work_related_health',
      6 => 'field_ef_changes_at_work',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Health and wellbeing at work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-health field-group-fieldset',
        'description' => 'Health and well-being in the workplace is a broader issue than exposure to risks, accidents and occupational diseases; it is the outcome of a multitude of settings and conditions. Organisations and workers need a range of resources to ensure health and well-being in the workplace; how work is organised and the organisational culture are also important. Physical risks, being the most visible, originally received the most attention; however, psychosocial risks are receiving increasing prominence as a workplace health hazard. <br>
EurWORK explores health and well-being in the workplace in the broadest sense: it examines the physical, mental and social well-being of workers (including illness and disability) and how work and the way it is organised can contribute to this. Find out more about EurWORK’s work on <a href="http://www.eurofound.europa.eu/health-and-well-being-at-work">health and well-being at work</a>.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_qr_health|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_health|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_health';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Health and wellbeing at work',
    'weight' => '18',
    'children' => array(
      0 => 'field_ef_absenteeism_presenteeis',
      1 => 'field_ef_occupational_health',
      2 => 'field_ef_physical_risk_factors',
      3 => 'field_ef_psychosocial_risk_fact',
      4 => 'field_ef_violence_and_harassment',
      5 => 'field_ef_work_related_health',
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
        'classes' => 'group-ef-qr-health field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_health|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_introduction|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_introduction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '1. Introduction',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_short_summary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '1. Introduction',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-introduction field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ef_qr_introduction|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_introduction|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_qr_introduction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '1. Introduction',
    'weight' => '8',
    'children' => array(
      0 => 'field_ef_short_summary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '1. Introduction',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-introduction field-group-fieldset',
        'description' => 'Please provide a short summary of the quarter. This summary should cover the most important developments of particular significance influencing industrial relations and working conditions in the reporting period. It should be written primarily as narrative text not bullet points. 
<li>Include one sentence in italics as introduction/abstract to summarise the main contents of the update.</li>
<li>Use subheadings (one or two at most) to structure the text.</li>
<li>What were the main developments around working life in your country in this quarter? Describe them briefly. Please bear in mind to report on both, industrial relations AND working conditions.</li>
<li>Put these developments in the context of the most important political, socioeconomic and legal developments, where relevant. (Brief references only, for example ‘in the context of upcoming elections/high unemployment/budgetary cuts…’).</li>
<li>You can also provide a short commentary as a concluding remark.</li>
<li>Include links (particularly to already published material on EurWORK) directly in the text. Include links where they add value, by providing more detail or justification, but do not add too many (six to eight at most). </li>
<li>Indicate the author(s), as we will publish it under their name(s)</li>
<li><b> The short summary will be published as \'country update\' under the author\'s names ( including information that was formerly put in the \'commentary\' box). </b></li>
<br>Examples can be found <a href=\'http://www.eurofound.europa.eu/quarterlies-instructions-country-update-examples\'>here</a>
</br> (Max. 600 words) ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_introduction|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_outcomes|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_outcomes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '4. Outcomes',
    'weight' => '8',
    'children' => array(
      0 => 'group_ef_qr_employ_conditions',
      1 => 'group_ef_qr_health',
      2 => 'group_ef_qr_pay',
      3 => 'group_ef_qr_skills',
      4 => 'group_ef_qr_work_organisation',
      5 => 'group_ef_qr_working_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '4. Outcomes',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-outcomes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_outcomes|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_outcomes|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_qr_outcomes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '4. Outcomes',
    'weight' => '11',
    'children' => array(
      0 => 'field_ef_pay',
      1 => 'group_ef_qr_employ_conditions',
      2 => 'group_ef_qr_health',
      3 => 'group_ef_qr_skills',
      4 => 'group_ef_qr_work_organisation',
      5 => 'group_ef_qr_working_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '4. Outcomes',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-outcomes field-group-fieldset',
        'description' => 'This section looks at outcomes of negotiation processes (such as collective agreements) of the most important negotiations (national, cross-sectoral, sectoral, regional or company level) between the social partners and legislative changes. It also looks at other aspects such as debates among various actors, policies, as well as at research findings and administrative sources of data in the following topical areas: 
<ul>
<li>Individual employment relations </li>
<li>Collective employment relations </li>
<li>Pay</li>
<li>Working time and work-life balance </li>
<li>Skills, learning and employability </li>
<li>Health and wellbeing at work</li>
<li>Work Organisation</li>
</ul>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_outcomes|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_outcomes|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_outcomes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '4. Outcomes',
    'weight' => '6',
    'children' => array(
      0 => 'group_ef_qr_employ_conditions',
      1 => 'group_ef_qr_pay',
      2 => 'group_ef_qr_working_time',
      3 => 'group_ef_qr_skills',
      4 => 'group_ef_qr_health',
      5 => 'group_ef_qr_work_organisation',
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
        'classes' => 'group-ef-qr-outcomes field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_outcomes|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_pay|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_pay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Pay',
    'weight' => '32',
    'children' => array(
      0 => 'field_ef_pay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Pay',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-pay field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_pay|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_pay|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_pay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Pay',
    'weight' => '15',
    'children' => array(
      0 => 'field_ef_pay',
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
        'classes' => 'group-ef-qr-pay field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_pay|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_processes|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_processes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '3. Processes',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_processes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '3. Processes',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-processes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_processes|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_processes|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_processes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '3. Processes',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_processes',
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
        'classes' => 'group-ef-qr-processes field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_processes|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_relevant_issues|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_relevant_issues';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '5. Other relevant issues',
    'weight' => '9',
    'children' => array(
      0 => 'field_ef_other_relevant_issues',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '5. Other relevant issues',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-relevant-issues field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_relevant_issues|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_relevant_issues|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_relevant_issues';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '5. Other relevant issues',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_other_relevant_issues',
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
        'classes' => 'group-ef-qr-relevant-issues field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_relevant_issues|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_skills|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_skills';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Skill, Learning and Employability',
    'weight' => '35',
    'children' => array(
      0 => 'field_ef_career_development',
      1 => 'field_ef_skills_and_training',
      2 => 'field_ef_work_organisation_skill',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Skill, Learning and Employability',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-skills field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_skills|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_skills|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_qr_skills';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Skill, Learning and Employability',
    'weight' => '11',
    'children' => array(
      0 => 'field_ef_career_development',
      1 => 'field_ef_skills_and_training',
      2 => 'field_ef_work_organisation_skill',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Skill, Learning and Employability',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-skills field-group-fieldset',
        'description' => '\'Education and training systems must generate new skills, to respond to the nature of the new jobs which are expected to be created, as well as to improve the adaptability and employability of adults already in the labour force.\'
European Commission, Communication on ‘New skills for new jobs’
Find out more about EurWORK\'s work on <a href="http://www.eurofound.europa.eu/skills-learning-and-employability">skills, learning and employability</a>.
',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_qr_skills|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_skills|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_skills';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Skill, Learning and Employability',
    'weight' => '17',
    'children' => array(
      0 => 'field_ef_career_development',
      1 => 'field_ef_skills_and_training',
      2 => 'field_ef_work_organisation_skill',
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
        'classes' => 'group-ef-qr-skills field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_skills|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_summary_commentary|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_summary_commentary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '6. Summary, commentary and outlook',
    'weight' => '10',
    'children' => array(
      0 => 'field_ef_summary_commentary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '6. Summary, commentary and outlook',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-summary-commentary field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_summary_commentary|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_summary_commentary|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_summary_commentary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '6. Summary, commentary and outlook',
    'weight' => '8',
    'children' => array(
      0 => 'field_ef_summary_commentary',
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
        'classes' => 'group-ef-qr-summary-commentary field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_summary_commentary|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_work_organisation|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_work_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Work organisation',
    'weight' => '37',
    'children' => array(
      0 => 'field_ef_employee_involvement',
      1 => 'field_ef_forms_of_work_organisat',
      2 => 'field_ef_participation_at_work',
      3 => 'field_ef_workplace_innovation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Work organisation',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-work-organisation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_work_organisation|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_work_organisation|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_qr_work_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Work organisation',
    'weight' => '14',
    'children' => array(
      0 => 'field_ef_employee_involvement',
      1 => 'field_ef_forms_of_work_organisat',
      2 => 'field_ef_participation_at_work',
      3 => 'field_ef_workplace_innovation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Work organisation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-work-organisation field-group-fieldset',
        'description' => 'There is considerable diversity in the forms of work organisation throughout Europe. In its research, Eurofound has examined four main types: discretionary learning, lean production, Taylorist, and traditional or simple structure. This research shows that these forms of work organisation have an impact on certain dimensions of quality of work and employment, such as physical risk factors, working time, intensity of work and satisfaction with working conditions. The need to develop systems of work organisation to foster employee motivation and well-being is becoming increasingly important in work-related policymaking. Find out more about EurWORK\'s work on <a href="http://www.eurofound.europa.eu/work-organisation">work organisation</a>.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_qr_work_organisation|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_work_organisation|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_work_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Work organisation',
    'weight' => '19',
    'children' => array(
      0 => 'field_ef_employee_involvement',
      1 => 'field_ef_forms_of_work_organisat',
      2 => 'field_ef_participation_at_work',
      3 => 'field_ef_workplace_innovation',
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
        'classes' => 'group-ef-qr-work-organisation field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_work_organisation|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_working_time|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_qr_working_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Working time and work–life balance',
    'weight' => '34',
    'children' => array(
      0 => 'field_ef_non_standard_working',
      1 => 'field_ef_organisation_of_working',
      2 => 'field_ef_work_life_balance',
      3 => 'field_ef_working_time_in_general',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Working time and work–life balance',
      'instance_settings' => array(
        'classes' => 'group-ef-qr-working-time field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ef_qr_working_time|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_working_time|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_qr_working_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Working time and work–life balance',
    'weight' => '10',
    'children' => array(
      0 => 'field_ef_non_standard_working',
      1 => 'field_ef_organisation_of_working',
      2 => 'field_ef_work_life_balance',
      3 => 'field_ef_working_time_in_general',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Working time and work–life balance',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-working-time field-group-fieldset',
        'description' => 'Working time:\'Any period during which the worker is working, at the employer\'s disposal and carrying out his activities or duties, in accordance with national laws and/or practice\' (Directive 2003/88/EC). Find out more about EurWORK\'s work on <a href=\'http://www.eurofound.europa.eu/working-time-and-work-life-balance\'>working time and work-life balance</a>.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_qr_working_time|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_qr_working_time|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_ef_qr_working_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_ef_qr_outcomes';
  $field_group->data = array(
    'label' => 'Working time and work–life balance',
    'weight' => '16',
    'children' => array(
      0 => 'field_ef_non_standard_working',
      1 => 'field_ef_organisation_of_working',
      2 => 'field_ef_work_life_balance',
      3 => 'field_ef_working_time_in_general',
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
        'classes' => 'group-ef-qr-working-time field-group-div',
      ),
    ),
  );
  $export['group_ef_qr_working_time|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_comparative_analytical_report|default';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_comparative_analytical_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '15',
    'children' => array(
      0 => 'field_ef_balance_in_reporting_ca',
      1 => 'field_ef_command_of_english_ca',
      2 => 'field_ef_quality_of_contents_ca',
      3 => 'field_ef_style_presentation_ca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Quality Assessment',
      'instance_settings' => array(
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_quality_assessment|node|ef_comparative_analytical_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_comparative_analytical_report|form';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_comparative_analytical_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_balance_in_reporting_ca',
      1 => 'field_ef_command_of_english_ca',
      2 => 'field_ef_quality_of_contents_ca',
      3 => 'field_ef_style_presentation_ca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_quality_assessment|node|ef_comparative_analytical_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_ic_quarterly_report|default';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '19',
    'children' => array(
      0 => 'field_ef_quality_of_contents_ic',
      1 => 'field_ef_balance_in_reporting_ic',
      2 => 'field_ef_style_presentation_ic',
      3 => 'field_ef_command_of_english_ic',
      4 => 'field_ef_product_criteria_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Quality Assessment',
      'instance_settings' => array(
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_quality_assessment|node|ef_ic_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_ic_quarterly_report|form';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '10',
    'children' => array(
      0 => 'field_ef_quality_of_contents_ic',
      1 => 'field_ef_balance_in_reporting_ic',
      2 => 'field_ef_style_presentation_ic',
      3 => 'field_ef_command_of_english_ic',
      4 => 'field_ef_product_criteria_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_quality_assessment|node|ef_ic_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_national_contribution|default';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_national_contribution';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '13',
    'children' => array(
      0 => 'field_ef_balance_in_reporting_nc',
      1 => 'field_ef_command_of_english_nc',
      2 => 'field_ef_quality_of_contents_nc',
      3 => 'field_ef_style_presentation_nc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Quality Assessment',
      'instance_settings' => array(
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_quality_assessment|node|ef_national_contribution|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_national_contribution|form';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_national_contribution';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '19',
    'children' => array(
      0 => 'field_ef_balance_in_reporting_nc',
      1 => 'field_ef_command_of_english_nc',
      2 => 'field_ef_quality_of_contents_nc',
      3 => 'field_ef_style_presentation_nc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_quality_assessment|node|ef_national_contribution|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '21',
    'children' => array(
      0 => 'field_ef_quality_of_contents_nq',
      1 => 'field_ef_balance_in_reporting_nq',
      2 => 'field_ef_style_presentation_nq',
      3 => 'field_ef_command_of_english_nq',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Quality Assessment',
      'instance_settings' => array(
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_quality_assessment|node|ef_network_quarterly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_network_quarterly_report|form';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '14',
    'children' => array(
      0 => 'field_ef_quality_of_contents_nq',
      1 => 'field_ef_balance_in_reporting_nq',
      2 => 'field_ef_style_presentation_nq',
      3 => 'field_ef_command_of_english_nq',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_quality_assessment|node|ef_network_quarterly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_report|default';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '30',
    'children' => array(
      0 => 'field_ef_quality_of_contents_re',
      1 => 'field_ef_balance_in_reporting_re',
      2 => 'field_ef_style_presentation_re',
      3 => 'field_ef_command_of_english_re',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Quality Assessment',
      'instance_settings' => array(
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ef_quality_assessment|node|ef_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_report|form';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '9',
    'children' => array(
      0 => 'field_ef_quality_of_contents_re',
      1 => 'field_ef_balance_in_reporting_re',
      2 => 'field_ef_style_presentation_re',
      3 => 'field_ef_command_of_english_re',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-quality-assessment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_quality_assessment|node|ef_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_request_assignee|node|ef_case_study|form';
  $field_group->group_name = 'group_ef_request_assignee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '26',
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
  $export['group_ef_request_assignee|node|ef_case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_request_assignee|node|ef_comparative_analytical_report|form';
  $field_group->group_name = 'group_ef_request_assignee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_comparative_analytical_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Assign to',
    'weight' => '26',
    'children' => array(
      0 => 'field_ef_contract',
      1 => 'field_ef_assign_to',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Assign to',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-request-assignee field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_request_assignee|node|ef_comparative_analytical_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_request_assignee|node|ef_national_contribution|form';
  $field_group->group_name = 'group_ef_request_assignee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_national_contribution';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Assign to',
    'weight' => '19',
    'children' => array(
      0 => 'field_ef_contract',
      1 => 'field_ef_assign_to',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Assign to',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-request-assignee field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_request_assignee|node|ef_national_contribution|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_request_assignee|node|ef_report|form';
  $field_group->group_name = 'group_ef_request_assignee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_contract',
      2 => 'field_ef_assign_to',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contract',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-request-assignee field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_request_assignee|node|ef_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_introduction|node|ef_network_quarterly_report|print';
  $field_group->group_name = 'group_introduction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '1. Introduction',
    'weight' => '3',
    'children' => array(
      0 => 'field_ef_short_summary',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '1. Introduction',
      'instance_settings' => array(
        'classes' => 'group-introduction field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_introduction|node|ef_network_quarterly_report|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|ef_publication|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_reference_no',
      1 => 'field_ef_publ_keywords',
      2 => 'field_ef_isbn',
      3 => 'field_ef_publication_date',
      4 => 'field_ef_catalogue',
      5 => 'field_ef_related_content',
      6 => 'field_ef_doi',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|ef_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|ef_report|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_related_content',
      1 => 'field_ef_flag',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|ef_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_about|node|ef_case_study|default';
  $field_group->group_name = 'group_node_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '1',
    'children' => array(
      0 => 'field_ef_organisation_size',
      1 => 'field_ef_legal_form',
      2 => 'field_ef_social_dialogue',
      3 => 'field_ef_target_groups',
      4 => 'field_ef_case_study_sectors',
      5 => 'field_ef_initiative_types',
      6 => 'field_ef_scope',
      7 => 'field_ef_social_dialogue_type',
      8 => 'field_ef_case_study_category',
      9 => 'field_ef_country',
      10 => 'field_ef_case_study_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'classes' => 'group-node-about field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_about|node|ef_case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_about|node|ef_comparative_analytical_report|default';
  $field_group->group_name = 'group_node_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_comparative_analytical_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '16',
    'children' => array(
      0 => 'field_ef_author',
      1 => 'field_ef_institution',
      2 => 'field_ef_sector',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'classes' => 'group-node-about field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_about|node|ef_comparative_analytical_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_about|node|ef_national_contribution|default';
  $field_group->group_name = 'group_node_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_national_contribution';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '14',
    'children' => array(
      0 => 'field_ef_author',
      1 => 'field_ef_institution',
      2 => 'field_ef_country',
      3 => 'field_ef_sector',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'classes' => 'group-node-about field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_about|node|ef_national_contribution|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_about|node|ef_report|default';
  $field_group->group_name = 'group_node_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '26',
    'children' => array(
      0 => 'field_ef_institution',
      1 => 'field_ef_country',
      2 => 'field_ef_sector',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'classes' => 'group-node-about field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_node_about|node|ef_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node_tagging|node|ef_case_study|default';
  $field_group->group_name = 'group_node_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node Tagging',
    'weight' => '0',
    'children' => array(
      0 => 'field_ef_theme',
      1 => 'field_ef_topic',
      2 => 'field_ef_observatory',
      3 => 'field_ef_approved_for_payment',
      4 => 'field_ef_report_delivery_date',
      5 => 'published_on',
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
  $export['group_node_tagging|node|ef_case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_print_copy|node|ef_publication|form';
  $field_group->group_name = 'group_print_copy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Print copy',
    'weight' => '11',
    'children' => array(
      0 => 'field_show_order_button',
      1 => 'field_order_label',
      2 => 'field_order_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-print-copy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_print_copy|node|ef_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|ef_publication|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Structure',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_project',
      1 => 'field_ef_publ_sector',
      2 => 'field_ef_theme',
      3 => 'field_ef_topic',
      4 => 'field_ef_observatory',
      5 => 'field_ef_eu_related_countries',
      6 => 'field_ef_spotlight_theme',
      7 => 'field_ef_survey_family',
      8 => 'field_ef_unit',
      9 => 'field_ef_work_programme_area',
      10 => 'field_ef_activities',
      11 => 'language',
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
  $export['group_structure|node|ef_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|ef_report|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Structure',
    'weight' => '3',
    'children' => array(
      0 => 'field_ef_author',
      1 => 'field_ef_institution',
      2 => 'field_ef_observatory',
      3 => 'field_ef_theme',
      4 => 'field_ef_topic',
      5 => 'field_ef_country',
      6 => 'field_ef_sector',
      7 => 'field_ef_deliverable_kind',
      8 => 'field_ef_spotlight_theme',
      9 => 'field_ef_unit',
      10 => 'field_ef_work_programme_area',
      11 => 'field_ef_eurwork_issue',
      12 => 'language',
      13 => 'field_ef_activities',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Structure',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_structure|node|ef_report|form'] = $field_group;

  return $export;
}
