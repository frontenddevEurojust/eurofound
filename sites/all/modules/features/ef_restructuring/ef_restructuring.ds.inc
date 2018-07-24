<?php
/**
 * @file
 * ef_restructuring.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_restructuring_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_factsheet|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_factsheet';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Company/organisation',
        ),
      ),
    ),
    'field_ef_announcement_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_employment_effect_start' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_foreseen_end_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_group' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_nace' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Sector',
        ),
      ),
    ),
    'field_ef_nuts' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Country/Region',
        ),
      ),
    ),
    'field_ef_type_of_restructuring' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_affected_units' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_direct_dismissals' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_job_reductions_max' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_job_reductions_min' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_number_employed' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_other_job_reduction' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_planned_job_creation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_fact_sources' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_factsheet|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_input_to_erm|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_input_to_erm';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_ef_date_format',
    ),
    'ds_publication_date' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'ds_publication_date_long',
    ),
    'ds_submission_date' => array(
      'weight' => '7',
      'label' => 'inline',
      'format' => 'ds_submission_date_long',
    ),
    'field_ef_theme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_report_delivery_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_approved_for_payment' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_input_to_erm|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_ir_dictionary|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_ir_dictionary';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'ds_publish_on' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'ds_publish_on_long',
    ),
    'ds_publication_date' => array(
      'weight' => '8',
      'label' => 'inline',
      'format' => 'ds_publication_date_long',
    ),
    'ds_submission_date' => array(
      'weight' => '7',
      'label' => 'inline',
      'format' => 'ds_submission_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_assign_to' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_contract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_ir_dictionary|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_regulation|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_regulation';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ef_regulation_phase' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_regulation_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_regulation_funding' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_regulation_article' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_regulation_involvements' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_urls' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_source' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_regulation_thresholds' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_thresholds_texts' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Description',
        ),
      ),
    ),
    'field_ef_theme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_approved_for_payment' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_report_delivery_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_involvement_other' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_regulation_english_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_regulation|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_restructuring_in_smes|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_restructuring_in_smes';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_company_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_employees_after_restr' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_employees_before_restr' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_nace' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_restructuring_keywords' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_survey_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_type_of_restructuring' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_restructuring_in_smes|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_support_instrument|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_support_instrument';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ef_coverage_eligibility' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_effectiveness' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_instrument_cat_phases' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_instrument_categories' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_instrument_examples' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_instrument_fundings' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_involvement_texts' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_involvement_types' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_main_characteristics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_source' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_strengths' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_urls' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_weaknesses' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_approved_for_payment' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_report_delivery_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_english_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_support_instrument|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_restructuring_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_factsheet|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_factsheet';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_content' => array(
        0 => 'group_organisation_company',
        1 => 'group_factsheet_info',
        2 => 'title',
        3 => 'group_geographic_location',
        4 => 'group_company',
        5 => 'group_employment_effects',
        6 => 'field_ef_additional_information',
        7 => 'field_ef_nuts',
        8 => 'field_ef_affected_units',
        9 => 'field_ef_fact_sources',
        10 => 'field_ef_announcement_date',
        11 => 'field_ef_sources_links',
        12 => 'field_ef_job_reductions_min',
        13 => 'field_ef_group',
        14 => 'field_ef_job_reductions_max',
        15 => 'field_ef_nace',
        16 => 'field_ef_number_employed',
        17 => 'field_ef_type_of_restructuring',
        18 => 'field_ef_employment_effect_start',
        19 => 'field_ef_foreseen_end_date',
        20 => 'field_ef_direct_dismissals',
        21 => 'field_ef_other_job_reduction',
        22 => 'field_ef_planned_job_creation',
      ),
    ),
    'fields' => array(
      'group_organisation_company' => 'node_content',
      'group_factsheet_info' => 'node_content',
      'title' => 'node_content',
      'group_geographic_location' => 'node_content',
      'group_company' => 'node_content',
      'group_employment_effects' => 'node_content',
      'field_ef_additional_information' => 'node_content',
      'field_ef_nuts' => 'node_content',
      'field_ef_affected_units' => 'node_content',
      'field_ef_fact_sources' => 'node_content',
      'field_ef_announcement_date' => 'node_content',
      'field_ef_sources_links' => 'node_content',
      'field_ef_job_reductions_min' => 'node_content',
      'field_ef_group' => 'node_content',
      'field_ef_job_reductions_max' => 'node_content',
      'field_ef_nace' => 'node_content',
      'field_ef_number_employed' => 'node_content',
      'field_ef_type_of_restructuring' => 'node_content',
      'field_ef_employment_effect_start' => 'node_content',
      'field_ef_foreseen_end_date' => 'node_content',
      'field_ef_direct_dismissals' => 'node_content',
      'field_ef_other_job_reduction' => 'node_content',
      'field_ef_planned_job_creation' => 'node_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'node_sub_header' => 'div',
      'node_languages' => 'div',
      'node_metadata' => 'div',
      'node_side_info' => 'div',
      'node_content' => 'div',
      'node_downloads' => 'div',
      'node_comments' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ef_factsheet|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_input_to_erm|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_input_to_erm';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'post_date',
        2 => 'group_node_tagging',
        3 => 'ds_publication_date',
        4 => 'field_ef_theme',
        6 => 'field_ef_topic',
        8 => 'field_ef_report_delivery_date',
        10 => 'field_ef_observatory',
        11 => 'field_ef_contract',
        12 => 'field_ef_assign_to',
        13 => 'ds_submission_date',
        14 => 'field_ef_approved_for_payment',
      ),
      'node_comments' => array(
        1 => 'comments',
      ),
      'node_content' => array(
        5 => 'field_ef_main_image',
        7 => 'body',
      ),
      'node_downloads' => array(
        9 => 'field_ef_documents',
      ),
    ),
    'fields' => array(
      'post_date' => 'node_metadata',
      'comments' => 'node_comments',
      'group_node_tagging' => 'node_metadata',
      'ds_publication_date' => 'node_metadata',
      'field_ef_theme' => 'node_metadata',
      'field_ef_main_image' => 'node_content',
      'field_ef_topic' => 'node_metadata',
      'body' => 'node_content',
      'field_ef_report_delivery_date' => 'node_metadata',
      'field_ef_documents' => 'node_downloads',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_contract' => 'node_metadata',
      'field_ef_assign_to' => 'node_metadata',
      'ds_submission_date' => 'node_metadata',
      'field_ef_approved_for_payment' => 'node_metadata',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'node_sub_header' => 'div',
      'node_languages' => 'div',
      'node_metadata' => 'div',
      'node_side_info' => 'div',
      'node_content' => 'div',
      'node_downloads' => 'div',
      'node_comments' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ef_input_to_erm|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_ir_dictionary|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_ir_dictionary';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'post_date',
        1 => 'field_ef_observatory',
        2 => 'field_ef_report_delivery_date',
        3 => 'field_ef_approved_for_payment',
        4 => 'field_ef_assign_to',
        5 => 'field_ef_contract',
        6 => 'ds_publish_on',
        7 => 'ds_submission_date',
        8 => 'ds_publication_date',
        9 => 'group_node_tagging',
      ),
      'node_content' => array(
        10 => 'body',
      ),
      'node_comments' => array(
        11 => 'comments',
      ),
    ),
    'fields' => array(
      'post_date' => 'node_metadata',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_report_delivery_date' => 'node_metadata',
      'field_ef_approved_for_payment' => 'node_metadata',
      'field_ef_assign_to' => 'node_metadata',
      'field_ef_contract' => 'node_metadata',
      'ds_publish_on' => 'node_metadata',
      'ds_submission_date' => 'node_metadata',
      'ds_publication_date' => 'node_metadata',
      'group_node_tagging' => 'node_metadata',
      'body' => 'node_content',
      'comments' => 'node_comments',
    ),
    'classes' => array(),
    'wrappers' => array(
      'node_sub_header' => 'div',
      'node_languages' => 'div',
      'node_metadata' => 'div',
      'node_side_info' => 'div',
      'node_content' => 'div',
      'node_downloads' => 'div',
      'node_comments' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ef_ir_dictionary|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_regulation|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_regulation';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'group_node_tagging',
        2 => 'field_ef_theme',
        5 => 'field_ef_observatory',
        7 => 'field_ef_report_delivery_date',
        9 => 'field_ef_approved_for_payment',
      ),
      'node_downloads' => array(
        1 => 'links',
      ),
      'node_content' => array(
        3 => 'field_ef_regulation_type',
        4 => 'group_node_info',
        8 => 'field_ef_country',
        10 => 'field_ef_regulation_english_name',
        11 => 'body',
        12 => 'field_ef_regulation_article',
        13 => 'field_ef_regulation_phase',
        14 => 'field_ef_regulation_funding',
        15 => 'field_ef_regulation_involvements',
        16 => 'field_ef_regulation_thresholds',
        17 => 'field_ef_thresholds_texts',
        18 => 'field_ef_urls',
        19 => 'field_ef_source',
        20 => 'field_ef_involvement_other',
      ),
      'node_comments' => array(
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'group_node_tagging' => 'node_metadata',
      'links' => 'node_downloads',
      'field_ef_theme' => 'node_metadata',
      'field_ef_regulation_type' => 'node_content',
      'group_node_info' => 'node_content',
      'field_ef_observatory' => 'node_metadata',
      'comments' => 'node_comments',
      'field_ef_report_delivery_date' => 'node_metadata',
      'field_ef_country' => 'node_content',
      'field_ef_approved_for_payment' => 'node_metadata',
      'field_ef_regulation_english_name' => 'node_content',
      'body' => 'node_content',
      'field_ef_regulation_article' => 'node_content',
      'field_ef_regulation_phase' => 'node_content',
      'field_ef_regulation_funding' => 'node_content',
      'field_ef_regulation_involvements' => 'node_content',
      'field_ef_regulation_thresholds' => 'node_content',
      'field_ef_thresholds_texts' => 'node_content',
      'field_ef_urls' => 'node_content',
      'field_ef_source' => 'node_content',
      'field_ef_involvement_other' => 'node_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'node_sub_header' => 'div',
      'node_languages' => 'div',
      'node_metadata' => 'div',
      'node_side_info' => 'div',
      'node_content' => 'div',
      'node_downloads' => 'div',
      'node_comments' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ef_regulation|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_restructuring_in_smes|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_restructuring_in_smes';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'group_node_tagging',
        2 => 'field_ef_theme',
        4 => 'field_ef_topic',
        5 => 'field_ef_observatory',
      ),
      'node_content' => array(
        1 => 'field_ef_company_name',
        3 => 'group_node_info',
        6 => 'field_ef_country',
        7 => 'body',
        8 => 'field_ef_survey_date',
        9 => 'field_ef_employees_before_restr',
        10 => 'field_ef_employees_after_restr',
        11 => 'field_ef_nace',
        12 => 'field_ef_restructuring_keywords',
        13 => 'field_ef_type_of_restructuring',
      ),
    ),
    'fields' => array(
      'group_node_tagging' => 'node_metadata',
      'field_ef_company_name' => 'node_content',
      'field_ef_theme' => 'node_metadata',
      'group_node_info' => 'node_content',
      'field_ef_topic' => 'node_metadata',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_country' => 'node_content',
      'body' => 'node_content',
      'field_ef_survey_date' => 'node_content',
      'field_ef_employees_before_restr' => 'node_content',
      'field_ef_employees_after_restr' => 'node_content',
      'field_ef_nace' => 'node_content',
      'field_ef_restructuring_keywords' => 'node_content',
      'field_ef_type_of_restructuring' => 'node_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'node_sub_header' => 'div',
      'node_languages' => 'div',
      'node_metadata' => 'div',
      'node_side_info' => 'div',
      'node_content' => 'div',
      'node_downloads' => 'div',
      'node_comments' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ef_restructuring_in_smes|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_support_instrument|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_support_instrument';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_comments' => array(
        0 => 'comments',
      ),
      'node_downloads' => array(
        1 => 'links',
      ),
      'node_metadata' => array(
        2 => 'group_node_tagging',
        3 => 'field_ef_theme',
        4 => 'field_ef_observatory',
        6 => 'field_ef_report_delivery_date',
        7 => 'field_ef_approved_for_payment',
      ),
      'node_content' => array(
        5 => 'group_node_info',
        8 => 'field_ef_english_name',
        9 => 'field_ef_country',
        10 => 'field_ef_instrument_cat_phases',
        11 => 'field_ef_instrument_categories',
        12 => 'field_ef_instrument_fundings',
        13 => 'field_ef_coverage_eligibility',
        14 => 'field_ef_main_characteristics',
        15 => 'field_ef_effectiveness',
        16 => 'field_ef_strengths',
        17 => 'field_ef_weaknesses',
        18 => 'field_ef_instrument_examples',
        19 => 'field_ef_urls',
        20 => 'field_ef_involvement_types',
        21 => 'field_ef_involvement_texts',
        22 => 'field_ef_source',
      ),
    ),
    'fields' => array(
      'comments' => 'node_comments',
      'links' => 'node_downloads',
      'group_node_tagging' => 'node_metadata',
      'field_ef_theme' => 'node_metadata',
      'field_ef_observatory' => 'node_metadata',
      'group_node_info' => 'node_content',
      'field_ef_report_delivery_date' => 'node_metadata',
      'field_ef_approved_for_payment' => 'node_metadata',
      'field_ef_english_name' => 'node_content',
      'field_ef_country' => 'node_content',
      'field_ef_instrument_cat_phases' => 'node_content',
      'field_ef_instrument_categories' => 'node_content',
      'field_ef_instrument_fundings' => 'node_content',
      'field_ef_coverage_eligibility' => 'node_content',
      'field_ef_main_characteristics' => 'node_content',
      'field_ef_effectiveness' => 'node_content',
      'field_ef_strengths' => 'node_content',
      'field_ef_weaknesses' => 'node_content',
      'field_ef_instrument_examples' => 'node_content',
      'field_ef_urls' => 'node_content',
      'field_ef_involvement_types' => 'node_content',
      'field_ef_involvement_texts' => 'node_content',
      'field_ef_source' => 'node_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'node_sub_header' => 'div',
      'node_languages' => 'div',
      'node_metadata' => 'div',
      'node_side_info' => 'div',
      'node_content' => 'div',
      'node_downloads' => 'div',
      'node_comments' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ef_support_instrument|default'] = $ds_layout;

  return $export;
}
