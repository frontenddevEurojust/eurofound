<?php
/**
 * @file
 * country_profile_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function country_profile_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_working_life_country_profiles|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_working_life_country_profiles';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'publication_date_ef_date_format',
    ),
    'qrr' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ef_cp_update_day' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|ef_working_life_country_profiles|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function country_profile_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_working_life_country_profiles|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_working_life_country_profiles';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_sub_header' => array(
        0 => 'links',
        1 => 'comments',
        2 => 'title_field',
        3 => 'body',
        4 => 'field_ef_topic',
        5 => 'field_ef_author',
        6 => 'field_ef_tabs',
        7 => 'field_ef_deliverable_kind',
        8 => 'field_ef_observatory',
        9 => 'published_on',
        10 => 'field_ef_assign_to_country_group',
        11 => 'field_ef_assign_to_user',
        12 => 'field_ef_country',
        13 => 'field_ef_institution',
        14 => 'field_ef_documents',
        15 => 'field_ef_source_documents',
        16 => 'field_ef_author_contract',
        17 => 'qrr',
        18 => 'field_ef_report_delivery_date',
        19 => 'field_subtitle',
        20 => 'field_ef_eurostat_results',
        21 => 'field_ef_summary_living_working',
        22 => 'field_ef_tabs_living_working',
        23 => 'field_ef_country_main_img',
        24 => 'field_ef_cp_update_day',
      ),
    ),
    'fields' => array(
      'links' => 'node_sub_header',
      'comments' => 'node_sub_header',
      'title_field' => 'node_sub_header',
      'body' => 'node_sub_header',
      'field_ef_topic' => 'node_sub_header',
      'field_ef_author' => 'node_sub_header',
      'field_ef_tabs' => 'node_sub_header',
      'field_ef_deliverable_kind' => 'node_sub_header',
      'field_ef_observatory' => 'node_sub_header',
      'published_on' => 'node_sub_header',
      'field_ef_assign_to_country_group' => 'node_sub_header',
      'field_ef_assign_to_user' => 'node_sub_header',
      'field_ef_country' => 'node_sub_header',
      'field_ef_institution' => 'node_sub_header',
      'field_ef_documents' => 'node_sub_header',
      'field_ef_source_documents' => 'node_sub_header',
      'field_ef_author_contract' => 'node_sub_header',
      'qrr' => 'node_sub_header',
      'field_ef_report_delivery_date' => 'node_sub_header',
      'field_subtitle' => 'node_sub_header',
      'field_ef_eurostat_results' => 'node_sub_header',
      'field_ef_summary_living_working' => 'node_sub_header',
      'field_ef_tabs_living_working' => 'node_sub_header',
      'field_ef_country_main_img' => 'node_sub_header',
      'field_ef_cp_update_day' => 'node_sub_header',
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
  $export['node|ef_working_life_country_profiles|default'] = $ds_layout;

  return $export;
}
