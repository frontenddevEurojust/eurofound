<?php
/**
 * @file
 * ef_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_ef_date_format',
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
  $export['node|ef_news|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_languages' => array(
        0 => 'links',
      ),
      'node_metadata' => array(
        1 => 'post_date',
        3 => 'field_ef_observatory',
        4 => 'group_node_tagging',
        6 => 'field_ef_theme',
        7 => 'field_ef_topic',
      ),
      'node_sub_header' => array(
        2 => 'field_ef_subtitle',
      ),
      'node_content' => array(
        5 => 'field_ef_main_image',
        8 => 'body',
        9 => 'field_ef_ext_reference',
      ),
      'node_downloads' => array(
        10 => 'field_ef_documents',
      ),
      'node_comments' => array(
        11 => 'comments',
      ),
    ),
    'fields' => array(
      'links' => 'node_languages',
      'post_date' => 'node_metadata',
      'field_ef_subtitle' => 'node_sub_header',
      'field_ef_observatory' => 'node_metadata',
      'group_node_tagging' => 'node_metadata',
      'field_ef_main_image' => 'node_content',
      'field_ef_theme' => 'node_metadata',
      'field_ef_topic' => 'node_metadata',
      'body' => 'node_content',
      'field_ef_ext_reference' => 'node_content',
      'field_ef_documents' => 'node_downloads',
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
  $export['node|ef_news|default'] = $ds_layout;

  return $export;
}
