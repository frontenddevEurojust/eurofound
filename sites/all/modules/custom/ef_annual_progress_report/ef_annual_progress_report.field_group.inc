<?php
/**
 * @file
 * ef_annual_progress_report.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ef_annual_progress_report_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_access_to_info|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_access_to_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Access to information',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_fb_access',
      1 => 'field_ef_general_kind_access',
      2 => 'field_ef_related_acess',
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
  $export['group_access_to_info|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_info_page|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_additional_info_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_content_fields';
  $field_group->data = array(
    'label' => '5. Additional information',
    'weight' => '127',
    'children' => array(
      0 => 'group_additional_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '5. Additional information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'In addition to information provided above and related mainly to your own work related to provision of different deliverables, Eurofound would be keen on receiving feedback on its own performance related to day-to-day cooperation with Correspondents. Therefore, questions listed below refer to your level of satisfaction related to existing contractual relationship. Please rate your satisfaction from "very disappointed" to "very satisfied".',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_additional_info_page|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_info_page';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '30',
    'children' => array(
      0 => 'group_access_to_info',
      1 => 'group_useful_prov_information',
      2 => 'group_support_for_admin_issues',
      3 => 'group_support_for_deliverables',
      4 => 'group_ef_invoicing_policy',
      5 => 'group_ef_time_schedules',
      6 => 'group_network_discussions',
      7 => 'group_cms_system',
      8 => 'group_ef_any_other_feedback_ef',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_additional_information|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cms_system|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_cms_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'CMS system',
    'weight' => '14',
    'children' => array(
      0 => 'field_ef_fb_cms_system',
      1 => 'field_ef_cms_system_rating',
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
  $export['group_cms_system|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contrib_to_rep_studies|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_contrib_to_rep_studies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Contributions to representativeness studies',
    'weight' => '30',
    'children' => array(
      0 => 'field_ef_contrib_to_rep_sc',
      1 => 'field_ef_contrib_to_rep_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contributions to representativeness studies',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Questionnaire based national contributions',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_contrib_to_rep_studies|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deliverables_group|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_deliverables_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_deliverables_page';
  $field_group->data = array(
    'label' => 'Deliverables',
    'weight' => '98',
    'children' => array(
      0 => 'group_erm_annual_report',
      1 => 'group_erm_quarterly',
      2 => 'group_new_entries_and_updates',
      3 => 'group_factsheets',
      4 => 'group_standard_contributions',
      5 => 'group_short_contributions',
      6 => 'group_spotlight_report',
      7 => 'group_rsf_standard',
      8 => 'group_rsf_extended',
      9 => 'group_quarterly_reporting_part1',
      10 => 'group_quarterly_reporting_par2',
      11 => 'group_contrib_to_rep_studies',
      12 => 'group_erm_database_rest',
      13 => 'group_ef_national_media_sources',
      14 => 'group_ef_industrial_relations',
      15 => 'group_ef_other_research_services',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_deliverables_group|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_any_other_feedback_ef|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_any_other_feedback_ef';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Any other feedback',
    'weight' => '15',
    'children' => array(
      0 => 'field_ef_any_other_feedback_ef',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ef-any-other-feedback-ef field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ef_any_other_feedback_ef|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_content_fields|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_content_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content fields',
    'weight' => '4',
    'children' => array(
      0 => 'group_ef_deliverables_page',
      1 => 'group_ef_promoting_ef_work_page',
      2 => 'group_meeting_members_page',
      3 => 'group_working_methods_page',
      4 => 'group_additional_info_page',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_ef_content_fields|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_contract|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_metadata';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '13',
    'children' => array(
      0 => 'field_ef_approved_for_payment',
      1 => 'field_ef_assign_to_author',
      2 => 'field_ef_assign_to_country_group',
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
  $export['group_ef_contract|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_deliverables_page|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_deliverables_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_content_fields';
  $field_group->data = array(
    'label' => '1. Deliverables',
    'weight' => '123',
    'children' => array(
      0 => 'group_deliverables_group',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '1. Deliverables',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'Please provide comments (both positive and negative) on any of the deliverable types listed below. Comments of general character and of specific character welcome.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_deliverables_page|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_industrial_relations|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_industrial_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Industrial relations country profiles update',
    'weight' => '37',
    'children' => array(
      0 => 'field_ef_industrial_relations_sc',
      1 => 'field_ef_industrial_relations_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Industrial relations country profiles update',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Industrial relations country profiles update',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_industrial_relations|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_invoicing_policy|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_invoicing_policy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Clarity of Eurofound invoicing policy',
    'weight' => '11',
    'children' => array(
      0 => 'field_ef_fb_invoicing_policy',
      1 => 'field_ef_invoicing_policy_rating',
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
  $export['group_ef_invoicing_policy|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_metadata|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'field_ef_deliverable_kind',
      1 => 'field_ef_report_delivery_date',
      2 => 'field_ef_requested_on',
      3 => 'field_ef_type_of_report',
      4 => 'field_country',
      5 => 'field_ef_year',
      6 => 'field_ef_new_contract',
      7 => 'field_ef_apr_submitted_on',
      8 => 'field_ef_new_contract_date',
      9 => 'group_ef_contract',
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
  $export['group_ef_metadata|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_national_media_sources|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_national_media_sources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'National media sources update for the restructuring events',
    'weight' => '36',
    'children' => array(
      0 => 'field_ef_national_media_sc',
      1 => 'field_ef_national_media_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'National media sources update for the restructuring events',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: National media sources update for the restructuring events',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_national_media_sources|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_other_research_services|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_other_research_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Other research services',
    'weight' => '38',
    'children' => array(
      0 => 'field_ef_other_research_sc',
      1 => 'field_ef_other_research_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Other research services',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Other research services',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_other_research_services|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_promoting_ef_work_page|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_promoting_ef_work_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_content_fields';
  $field_group->data = array(
    'label' => '2. Promoting Eurofound work',
    'weight' => '124',
    'children' => array(
      0 => 'group_ef_promoting_ef_work',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '2. Promoting Eurofound work',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'Please describe what you did and give details, as far as possible',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_ef_promoting_ef_work_page|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_promoting_ef_work|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_promoting_ef_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_promoting_ef_work_page';
  $field_group->data = array(
    'label' => 'Promoting Eurofound work',
    'weight' => '26',
    'children' => array(
      0 => 'group_reports_on_webpage',
      1 => 'group_sharing_ef_research',
      2 => 'group_promoting_ef_research',
      3 => 'group_mentioning',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_ef_promoting_ef_work|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_publishing_options|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation & Assignment',
    'weight' => '6',
    'children' => array(
      0 => 'field_ef_assign_to_user',
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
  $export['group_ef_publishing_options|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_quality_assessment|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_quality_assessment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_metadata';
  $field_group->data = array(
    'label' => 'Quality Assessment',
    'weight' => '7',
    'children' => array(
      0 => 'field_ef_balance_in_reporting_ap',
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
  $export['group_ef_quality_assessment|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ef_time_schedules|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_ef_time_schedules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Eurofound’s adherence to time schedules',
    'weight' => '12',
    'children' => array(
      0 => 'field_ef_fb_time_schedules',
      1 => 'field_ef_ef_adherence_rating',
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
  $export['group_ef_time_schedules|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_erm_annual_report|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_erm_annual_report';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'ERM Annual Report',
    'weight' => '25',
    'children' => array(
      0 => 'field_ef_erm_annual_report_sc',
      1 => 'field_ef_erm_annual_report_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'ERM Annual Report',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Quarterly and annual reporting',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_erm_annual_report|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_erm_database_rest|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_erm_database_rest';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'ERM Database on restructuring related legislation',
    'weight' => '31',
    'children' => array(
      0 => 'field_ef_restruct_si_sc',
      1 => 'field_ef_restruct_si_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'ERM Database on restructuring related legislation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Update of existing databases',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_erm_database_rest|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_erm_quarterly|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_erm_quarterly';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'ERM Quarterly',
    'weight' => '26',
    'children' => array(
      0 => 'field_ef_erm_quarterly_sc',
      1 => 'field_ef_erm_quarterly_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'ERM Quarterly',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Quarterly and annual reporting',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_erm_quarterly|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheets|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_factsheets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Factsheets',
    'weight' => '28',
    'children' => array(
      0 => 'field_ef_factsheets_sp',
      1 => 'field_ef_factsheets_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Factsheets',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: ERM restructuring event fact sheets',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_factsheets|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meeting_members_page|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_meeting_members_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_content_fields';
  $field_group->data = array(
    'label' => '3. Meeting with Board members',
    'weight' => '125',
    'children' => array(
      0 => 'group_meeting_members',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '3. Meeting with Board members',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'Please report on meetings organised on your initiative (dates of meetings, number of participants) and provide minutes (if available) of the meeting or a summary of topics discussed.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_meeting_members_page|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meeting_members|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_meeting_members';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_meeting_members_page';
  $field_group->data = array(
    'label' => 'Meeting with Board members',
    'weight' => '28',
    'children' => array(
      0 => 'field_ef_date_and_partici_bm',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-meeting-members field-group-htabs',
      ),
    ),
  );
  $export['group_meeting_members|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentioning|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_mentioning';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_promoting_ef_work';
  $field_group->data = array(
    'label' => 'Mentioning your task as national correspondent to Eurofound stakeholders',
    'weight' => '28',
    'children' => array(
      0 => 'field_ef_mentioning_task_descrip',
      1 => 'field_ef_mentioning_task_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Mentioning your task as national correspondent to Eurofound stakeholders',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'or other national level actors',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mentioning|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multigroup_test|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_multigroup_test';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Test',
    'weight' => '6',
    'children' => array(
      0 => 'group_multipage',
      1 => 'group_multipage2',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-multigroup-test field-group-multipage-group',
        'page_header' => 3,
        'move_additional' => 1,
        'page_counter' => 1,
        'move_button' => 0,
      ),
    ),
  );
  $export['group_multigroup_test|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multipage2|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_multipage2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multigroup_test';
  $field_group->data = array(
    'label' => 'test2',
    'weight' => '8',
    'children' => array(
      0 => 'field_b',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-multipage2',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_multipage2|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multipage|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_multipage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multigroup_test';
  $field_group->data = array(
    'label' => 'test',
    'weight' => '7',
    'children' => array(
      0 => 'field_a',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-multipage',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_multipage|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_network_discussions|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_network_discussions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => ' Possibility to use Yammer for network related discussions',
    'weight' => '13',
    'children' => array(
      0 => 'field_ef_fb_yammer',
      1 => 'field_ef_yammer_rating',
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
  $export['group_network_discussions|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new_entries_and_updates|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_new_entries_and_updates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'New entries and updates',
    'weight' => '27',
    'children' => array(
      0 => 'field_ef_new_entries_sc',
      1 => 'field_ef_new_entries_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'New entries and updates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Quarterly and annual reporting',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_new_entries_and_updates|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promoting_ef_research|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_promoting_ef_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_promoting_ef_work';
  $field_group->data = array(
    'label' => 'Promoting Eurofound research',
    'weight' => '29',
    'children' => array(
      0 => 'field_ef_promoting_ef_re_descri',
      1 => 'field_ef_promoting_ef_re_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Promoting Eurofound research',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => '(from the Network in particular) and your national contributions among a national audience (e.g. by presenting at conferences)',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_promoting_ef_research|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quarterly_reporting_par2|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_quarterly_reporting_par2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Quarterly reporting: Part II on reaching out to stakeholders',
    'weight' => '24',
    'children' => array(
      0 => 'field_ef_quart_reporting_two_sc',
      1 => 'field_ef_quart_reporting_two_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Quarterly reporting: Part II on reaching out to stakeholders',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Quarterly reporting',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_quarterly_reporting_par2|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quarterly_reporting_part1|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_quarterly_reporting_part1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Quarterly reporting: Part I on EurWORK',
    'weight' => '23',
    'children' => array(
      0 => 'field_ef_quart_reporting_one_gc',
      1 => 'field_ef_quart_reporting_one_sc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Quarterly reporting: Part I on EurWORK',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Quarterly reporting',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_quarterly_reporting_part1|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reports_on_webpage|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_reports_on_webpage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_promoting_ef_work';
  $field_group->data = array(
    'label' => 'Putting reports on a web-page',
    'weight' => '26',
    'children' => array(
      0 => 'field_ef_reports_webpage_descrip',
      1 => 'field_ef_reports_webpage_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Putting reports on a web-page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Reports on a web-page',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_reports_on_webpage|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rsf_extended|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_rsf_extended';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Research in focus-extended',
    'weight' => '35',
    'children' => array(
      0 => 'field_ef_rsf_extended_gc',
      1 => 'field_ef_rsf_extended_sc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Research in focus-extended',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Article based national contributions (not applicable for those not requested to provide any)',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_rsf_extended|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rsf_standard|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_rsf_standard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Research in focus-standard',
    'weight' => '34',
    'children' => array(
      0 => 'field_ef_rsf_standard_sc',
      1 => 'field_ef_rsf_standard_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Research in focus-standard',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Article based national contributions (not applicable for those not requested to provide any)',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_rsf_standard|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sharing_ef_research|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_sharing_ef_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_promoting_ef_work';
  $field_group->data = array(
    'label' => 'Sharing Eurofound research',
    'weight' => '27',
    'children' => array(
      0 => 'field_ef_sharing_ef_res_descrip',
      1 => 'field_ef_sharing_ef_res_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sharing Eurofound research',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => '(from the Network in particular) and your national contributions in social media',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_sharing_ef_research|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_contributions|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_short_contributions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Short contributions',
    'weight' => '29',
    'children' => array(
      0 => 'field_ef_short_contrib_sc',
      1 => 'field_ef_short_contrib_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Short contributions',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Questionnaire based national contributions',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_short_contributions|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spotlight_report|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_spotlight_report';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Spotlight report',
    'weight' => '33',
    'children' => array(
      0 => 'field_ef_spotlight_sc',
      1 => 'field_ef_spotlight_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Spotlight report',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Article based national contributions (not applicable for those not requested to provide any)',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_spotlight_report|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_standard_contributions|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_standard_contributions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deliverables_group';
  $field_group->data = array(
    'label' => 'Standard contributions',
    'weight' => '32',
    'children' => array(
      0 => 'field_ef_standard_contrib_sc',
      1 => 'field_ef_standard_contrib_gc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Standard contributions',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Deliverable type: Questionnaire based national contributions',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_standard_contributions|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_support_for_admin_issues|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_support_for_admin_issues';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Support from Eurofound staff regarding administrative issues',
    'weight' => '9',
    'children' => array(
      0 => 'field_ef_fb_support_admin',
      1 => 'field_ef_support_admin_rating',
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
  $export['group_support_for_admin_issues|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_support_for_deliverables|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_support_for_deliverables';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Support from Eurofound staff regarding content aspects of deliverables',
    'weight' => '10',
    'children' => array(
      0 => 'field_ef_fb_support_deliverables',
      1 => 'field_ef_support_deliver_rating',
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
  $export['group_support_for_deliverables|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_useful_prov_information|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_useful_prov_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Usefulness of provided information',
    'weight' => '8',
    'children' => array(
      0 => 'field_ef_fb_useful',
      1 => 'field_ef_general_kind_useful',
      2 => 'field_ef_related_deliv_useful',
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
  $export['group_useful_prov_information|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_methods_difficul|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_working_methods_difficul';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_working_methods';
  $field_group->data = array(
    'label' => 'Difficulties',
    'weight' => '56',
    'children' => array(
      0 => 'field_ef_working_methods_diff',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Difficulties',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Please indicated how you addressed the difficulties, if any?',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_working_methods_difficul|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_methods_extinfo|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_working_methods_extinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_working_methods';
  $field_group->data = array(
    'label' => 'Extra information',
    'weight' => '59',
    'children' => array(
      0 => 'field_ef_working_methods_extinfo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Extra information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Any other feedback related to above question',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_working_methods_extinfo|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_methods_improve|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_working_methods_improve';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_working_methods';
  $field_group->data = array(
    'label' => 'Improvements',
    'weight' => '57',
    'children' => array(
      0 => 'field_ef_working_methods_impro',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Improvements',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'What can Eurofound improve to help you overcome certain difficulties?',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_working_methods_improve|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_methods_page|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_working_methods_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ef_content_fields';
  $field_group->data = array(
    'label' => '4. Working methods',
    'weight' => '126',
    'children' => array(
      0 => 'group_working_methods',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '4. Working methods',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'Please provide comments and details about working methods',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_working_methods_page|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_methods_summary|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_working_methods_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_working_methods';
  $field_group->data = array(
    'label' => 'Summary',
    'weight' => '55',
    'children' => array(
      0 => 'field_ef_workmeth_short_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Summary',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'Please give a short summary of what worked well or not so well during the reporting period',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_working_methods_summary|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_methods_topics|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_working_methods_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_working_methods';
  $field_group->data = array(
    'label' => 'Rating topics',
    'weight' => '58',
    'children' => array(
      0 => 'field_ef_working_methods_rating',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Rating topics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'tab-description',
        'description' => 'How relevant, in general, would you rate the topics covered by the Network so far for the national policy debate taking place currently in your country?',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_working_methods_topics|node|ef_annual_progress_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_methods|node|ef_annual_progress_report|form';
  $field_group->group_name = 'group_working_methods';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ef_annual_progress_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_working_methods_page';
  $field_group->data = array(
    'label' => 'Working methods',
    'weight' => '31',
    'children' => array(
      0 => 'group_working_methods_summary',
      1 => 'group_working_methods_difficul',
      2 => 'group_working_methods_improve',
      3 => 'group_working_methods_topics',
      4 => 'group_working_methods_extinfo',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_working_methods|node|ef_annual_progress_report|form'] = $field_group;

  return $export;
}
