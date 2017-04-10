<?php
/**
 * @file
 * ef_business_components.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_business_components_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_call_for_tender|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_call_for_tender';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
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
    'field_ef_procurement_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_procurement_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_call_for_tender|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_vacancy|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_vacancy';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_ef_date_format',
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
  $export['node|ef_vacancy|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_business_components_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_call_for_tender|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_call_for_tender';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_languages' => array(
        0 => 'links',
      ),
      'node_sub_header' => array(
        1 => 'field_ef_procurement_status',
      ),
      'node_metadata' => array(
        2 => 'field_ef_tender_publication_date',
        3 => 'group_procurement_info',
        4 => 'group_node_tagging',
        5 => 'field_ef_procurement_type',
        8 => 'field_ef_observatory',
        11 => 'field_ef_theme',
        14 => 'field_ef_topic',
      ),
      'node_content' => array(
        6 => 'field_ef_published_in',
        7 => 'body',
        9 => 'group_procurement_deadlines',
        10 => 'field_ef_submission_details',
        12 => 'field_ef_access_to_documentation',
        13 => 'field_ef_submission_of_tenders',
        15 => 'webform',
        17 => 'field_ef_opening_of_tenders',
      ),
      'node_downloads' => array(
        16 => 'field_ef_documents',
      ),
    ),
    'fields' => array(
      'links' => 'node_languages',
      'field_ef_procurement_status' => 'node_sub_header',
      'field_ef_tender_publication_date' => 'node_metadata',
      'group_procurement_info' => 'node_metadata',
      'group_node_tagging' => 'node_metadata',
      'field_ef_procurement_type' => 'node_metadata',
      'field_ef_published_in' => 'node_content',
      'body' => 'node_content',
      'field_ef_observatory' => 'node_metadata',
      'group_procurement_deadlines' => 'node_content',
      'field_ef_submission_details' => 'node_content',
      'field_ef_theme' => 'node_metadata',
      'field_ef_access_to_documentation' => 'node_content',
      'field_ef_submission_of_tenders' => 'node_content',
      'field_ef_topic' => 'node_metadata',
      'webform' => 'node_content',
      'field_ef_documents' => 'node_downloads',
      'field_ef_opening_of_tenders' => 'node_content',
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
  $export['node|ef_call_for_tender|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_vacancy|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_vacancy';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_languages' => array(
        0 => 'links',
      ),
      'node_metadata' => array(
        1 => 'group_node_tagging',
        2 => 'post_date',
        5 => 'field_ef_observatory',
        6 => 'field_ef_theme',
        9 => 'field_ef_topic',
      ),
      'node_content' => array(
        3 => 'field_ef_reference_number',
        4 => 'field_ef_vacancy_ext_link',
        7 => 'body',
        8 => 'group_deadlines',
        10 => 'field_ef_application_deadline',
        11 => 'field_ef_shortlisting_deadline',
        13 => 'field_ef_interviews_deadline',
      ),
      'node_downloads' => array(
        12 => 'field_ef_documents',
      ),
    ),
    'fields' => array(
      'links' => 'node_languages',
      'group_node_tagging' => 'node_metadata',
      'post_date' => 'node_metadata',
      'field_ef_reference_number' => 'node_content',
      'field_ef_vacancy_ext_link' => 'node_content',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_theme' => 'node_metadata',
      'body' => 'node_content',
      'group_deadlines' => 'node_content',
      'field_ef_topic' => 'node_metadata',
      'field_ef_application_deadline' => 'node_content',
      'field_ef_shortlisting_deadline' => 'node_content',
      'field_ef_documents' => 'node_downloads',
      'field_ef_interviews_deadline' => 'node_content',
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
  $export['node|ef_vacancy|default'] = $ds_layout;

  return $export;
}
