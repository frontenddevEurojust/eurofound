<?php
/**
 * @file
 * ef_ft_pleco_record.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_ft_pleco_record_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pleco_record|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pleco_record';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_pleco_record_types' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_ef_pleco_ds_field_items_comma',
        ),
      ),
    ),
    'field_pleco_keywords' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_pleco_work_typologies' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|pleco_record|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_ft_pleco_record_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pleco_record|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pleco_record';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_pleco_record_abstract',
        1 => 'field_pleco_record_description',
        2 => 'field_pleco_external_link',
        3 => 'group_metadata',
        4 => 'field_pleco_disclaimer',
        5 => 'field_pleco_platforms',
        6 => 'field_pleco_platform_sectors',
        7 => 'field_pleco_work_typologies',
        8 => 'field_pleco_countries',
        9 => 'field_pleco_date',
        10 => 'field_pleco_publication_date',
        11 => 'field_pleco_record_types',
        12 => 'field_pleco_keywords',
        13 => 'field_pleco_languages',
        14 => 'field_pleco_organisations',
        15 => 'field_pleco_methodologies',
        16 => 'field_pleco_availability',
      ),
    ),
    'fields' => array(
      'field_pleco_record_abstract' => 'ds_content',
      'field_pleco_record_description' => 'ds_content',
      'field_pleco_external_link' => 'ds_content',
      'group_metadata' => 'ds_content',
      'field_pleco_disclaimer' => 'ds_content',
      'field_pleco_platforms' => 'ds_content',
      'field_pleco_platform_sectors' => 'ds_content',
      'field_pleco_work_typologies' => 'ds_content',
      'field_pleco_countries' => 'ds_content',
      'field_pleco_date' => 'ds_content',
      'field_pleco_publication_date' => 'ds_content',
      'field_pleco_record_types' => 'ds_content',
      'field_pleco_keywords' => 'ds_content',
      'field_pleco_languages' => 'ds_content',
      'field_pleco_organisations' => 'ds_content',
      'field_pleco_methodologies' => 'ds_content',
      'field_pleco_availability' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|pleco_record|full'] = $ds_layout;

  return $export;
}
