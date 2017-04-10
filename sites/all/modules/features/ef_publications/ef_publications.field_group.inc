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
    'weight' => '4',
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
  $export['group_content|node|ef_report|form'] = $field_group;

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
    'weight' => '6',
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
    'weight' => '7',
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
    'weight' => '7',
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
    'weight' => '24',
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
    'weight' => '25',
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
    'weight' => '6',
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
    'weight' => '8',
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
      4 => 'field_ef_publication_date',
      5 => 'field_ef_project',
      6 => 'field_ef_publ_sector',
      7 => 'field_ef_catalogue',
      8 => 'field_ef_document_type',
      9 => 'field_ef_number_of_pages',
      10 => 'field_ef_theme',
      11 => 'field_ef_topic',
      12 => 'field_ef_doi',
      13 => 'field_ef_observatory',
      14 => 'field_ef_eu_related_countries',
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
        'description' => 'Emphasis on terms and conditions of employment relationships or the context and conditions under which work is performed. This includes information on: ',
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
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Health and wellbeing at work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ef-qr-health field-group-fieldset',
        'description' => 'Please report any influential research findings and analysis as well as important discussions, policies, legislation, other outputs in relation to the following. ',
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
        'description' => 'Please provide a short summary of the most important developments of particular significance regarding the political, socio-economic and legal context, influencing industrial relations and working conditions in the reporting period. This summary can be done with short bullet points. (Max. 400 words) ',
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
        'description' => 'This section looks at outcomes of negotiation processes (such as collective agreements) of the most important negotiations (national, cross-sectoral, sectoral, regional or company level) between the social partners and legislative changes. It also looks at other aspects such as debates among various actors, policies, as well as at research findings and administrative sources of data in the following topical areas: • Individual employment relations • Collective employment relations • Pay • Working time and work-life balance • Skills, learning and employability • Health and wellbeing at work • Work Organisation ',
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
        'description' => 'Please report any important discussions, policies, legislation, research findings or other outputs in relation to the following.',
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
        'description' => 'Please report any important discussions, policies, legislation, research findings or other outputs in relation to the following:',
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
        'description' => '',
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
    'weight' => '14',
    'children' => array(
      0 => 'field_ef_balance_in_reporting',
      1 => 'field_ef_command_of_english',
      2 => 'field_ef_product_criteria',
      3 => 'field_ef_quality_of_contents',
      4 => 'field_ef_style_and_presentation',
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
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_ic_quarterly_report|default';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_ic_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '5',
    'children' => array(
      0 => 'field_ef_quality_of_contents',
      1 => 'field_ef_balance_in_reporting',
      2 => 'field_ef_style_and_presentation',
      3 => 'field_ef_command_of_english',
      4 => 'field_ef_product_criteria',
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
      0 => 'field_ef_balance_in_reporting',
      1 => 'field_ef_command_of_english',
      2 => 'field_ef_product_criteria',
      3 => 'field_ef_quality_of_contents',
      4 => 'field_ef_style_and_presentation',
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
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_network_quarterly_report|default';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_network_quarterly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '4',
    'children' => array(
      0 => 'field_ef_balance_in_reporting',
      1 => 'field_ef_command_of_english',
      2 => 'field_ef_product_criteria',
      3 => 'field_ef_quality_of_contents',
      4 => 'field_ef_style_and_presentation',
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
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_report|default';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '17',
    'children' => array(
      0 => 'field_ef_balance_in_reporting',
      1 => 'field_ef_command_of_english',
      2 => 'field_ef_product_criteria',
      3 => 'field_ef_quality_of_contents',
      4 => 'field_ef_style_and_presentation',
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
    'weight' => '5',
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
    'weight' => '15',
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
    'weight' => '18',
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
      5 => 'post_date',
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
  $field_group->identifier = 'group_structure|node|ef_publication|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Structure',
    'weight' => '2',
    'children' => array(
      0 => 'field_ef_project',
      1 => 'field_ef_publ_sector',
      2 => 'field_ef_theme',
      3 => 'field_ef_topic',
      4 => 'field_ef_observatory',
      5 => 'field_ef_eu_related_countries',
      6 => 'field_ef_survey_family',
      7 => 'field_ef_spotlight_theme',
      8 => 'field_ef_unit',
      9 => 'field_ef_work_programme_area',
      10 => 'language',
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
      11 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-structure field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_structure|node|ef_report|form'] = $field_group;

  return $export;
}
