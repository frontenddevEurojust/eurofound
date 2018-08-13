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
    'ef_pleco_record_metadata_inline' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ef_pleco_record_resources' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ef_pleco_related_content_and_taxonomy' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ef_pleco_related_dossiers' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ef_pleco_record_default_disclaimer' => array(
      'weight' => '7',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_ef_pleco_ds_field_items_label_dash_text',
          'lb' => 'Disclaimer',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_pleco_disclaimer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_ef_pleco_ds_field_items_label_dash_text',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_pleco_record_abstract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_ef_pleco_ds_field_items_label_dash_text',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_pleco_record_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_ef_pleco_ds_field_items_label_dash_text',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|pleco_record|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pleco_record|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pleco_record';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'publication_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_pleco_record_abstract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_pleco_record_types' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_pleco_work_typologies' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|pleco_record|teaser'] = $ds_fieldsetting;

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
  $ds_layout->layout = 'ef_pleco_common';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ef_pleco_record_metadata_inline',
        1 => 'field_pleco_record_abstract',
        2 => 'field_pleco_record_description',
        3 => 'ef_pleco_record_resources',
        4 => 'group_metadata',
        5 => 'group_disclaimer',
        6 => 'field_pleco_disclaimer',
        7 => 'ef_pleco_record_default_disclaimer',
        9 => 'field_pleco_platforms',
        10 => 'field_pleco_platform_sectors',
        12 => 'field_pleco_work_typologies',
        13 => 'field_pleco_countries',
        14 => 'field_pleco_date',
        15 => 'field_pleco_publication_date',
        16 => 'field_pleco_record_types',
        17 => 'field_pleco_keywords',
        18 => 'field_pleco_languages',
        19 => 'field_pleco_organisations',
        20 => 'field_pleco_methodologies',
        21 => 'field_pleco_availability',
      ),
      'right' => array(
        8 => 'ef_pleco_related_dossiers',
        11 => 'ef_pleco_related_content_and_taxonomy',
      ),
    ),
    'fields' => array(
      'ef_pleco_record_metadata_inline' => 'ds_content',
      'field_pleco_record_abstract' => 'ds_content',
      'field_pleco_record_description' => 'ds_content',
      'ef_pleco_record_resources' => 'ds_content',
      'group_metadata' => 'ds_content',
      'group_disclaimer' => 'ds_content',
      'field_pleco_disclaimer' => 'ds_content',
      'ef_pleco_record_default_disclaimer' => 'ds_content',
      'ef_pleco_related_dossiers' => 'right',
      'field_pleco_platforms' => 'ds_content',
      'field_pleco_platform_sectors' => 'ds_content',
      'ef_pleco_related_content_and_taxonomy' => 'right',
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
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|pleco_record|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pleco_record|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pleco_record';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_pleco_record_abstract',
        2 => 'group_metadata',
        3 => 'field_pleco_record_types',
        4 => 'field_pleco_work_typologies',
        5 => 'published_on',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_pleco_record_abstract' => 'ds_content',
      'group_metadata' => 'ds_content',
      'field_pleco_record_types' => 'ds_content',
      'field_pleco_work_typologies' => 'ds_content',
      'published_on' => 'ds_content',
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
  $export['node|pleco_record|teaser'] = $ds_layout;

  return $export;
}
