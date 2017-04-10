<?php
/**
 * @file
 * ef_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ef_event_date_range' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
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
    'field_ef_documents' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Downloads',
        ),
      ),
    ),
    'field_ef_event_type' => array(
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
  );
  $export['node|ef_event|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ef_events_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ef_event_date_range';
  $ds_field->label = 'Event Date Range';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'ef_event|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:field-ef-event-start-date:ef_date_format] - [node:field-ef-event-end-date:ef_date_format]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['ef_event_date_range'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'ef_event_date_range',
        3 => 'group_event_info',
        4 => 'group_node_tagging',
        6 => 'field_ef_event_type',
        7 => 'field_ef_theme',
        9 => 'field_ef_organised_by',
        10 => 'field_ef_topic',
        11 => 'field_ef_observatory',
      ),
      'node_languages' => array(
        1 => 'links',
      ),
      'node_sub_header' => array(
        2 => 'field_ef_venue_title',
      ),
      'node_content' => array(
        5 => 'field_image',
        8 => 'body',
        12 => 'group_venue_details',
        14 => 'group_ef_venue_info',
        16 => 'field_ef_geo_location',
        17 => 'field_ef_location',
        18 => 'field_ef_address',
        19 => 'field_ef_city',
        20 => 'field_ef_country',
      ),
      'node_downloads' => array(
        13 => 'field_ef_documents',
      ),
      'node_comments' => array(
        15 => 'comments',
      ),
    ),
    'fields' => array(
      'ef_event_date_range' => 'node_metadata',
      'links' => 'node_languages',
      'field_ef_venue_title' => 'node_sub_header',
      'group_event_info' => 'node_metadata',
      'group_node_tagging' => 'node_metadata',
      'field_image' => 'node_content',
      'field_ef_event_type' => 'node_metadata',
      'field_ef_theme' => 'node_metadata',
      'body' => 'node_content',
      'field_ef_organised_by' => 'node_metadata',
      'field_ef_topic' => 'node_metadata',
      'field_ef_observatory' => 'node_metadata',
      'group_venue_details' => 'node_content',
      'field_ef_documents' => 'node_downloads',
      'group_ef_venue_info' => 'node_content',
      'comments' => 'node_comments',
      'field_ef_geo_location' => 'node_content',
      'field_ef_location' => 'node_content',
      'field_ef_address' => 'node_content',
      'field_ef_city' => 'node_content',
      'field_ef_country' => 'node_content',
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
  $export['node|ef_event|default'] = $ds_layout;

  return $export;
}
