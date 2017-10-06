<?php
/**
 * @file
 * blog_presentation.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function blog_presentation_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'publication_date_ef_date_format',
    ),
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|blog|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|presentation|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'presentation';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'publication_date_ef_date_format',
    ),
  );
  $export['node|presentation|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function blog_presentation_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_sub_header' => array(
        0 => 'published_on',
        1 => 'field_ef_publ_contributors',
        2 => 'field_ef_topic',
        3 => 'title',
        4 => 'field_ef_main_image',
        5 => 'field_abstract',
        6 => 'body',
        7 => 'field_ef_related_links_block',
      ),
      'node_comments' => array(
        8 => 'comments',
      ),
    ),
    'fields' => array(
      'published_on' => 'node_sub_header',
      'field_ef_publ_contributors' => 'node_sub_header',
      'field_ef_topic' => 'node_sub_header',
      'title' => 'node_sub_header',
      'field_ef_main_image' => 'node_sub_header',
      'field_abstract' => 'node_sub_header',
      'body' => 'node_sub_header',
      'field_ef_related_links_block' => 'node_sub_header',
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
  $export['node|blog|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|presentation|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'presentation';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_sub_header' => array(
        0 => 'published_on',
        1 => 'field_ef_publ_contributors',
        2 => 'field_ef_topic',
        3 => 'title_field',
        4 => 'field_abstract',
        5 => 'field_pdf_presentation',
        6 => 'field_pdf_description',
        7 => 'body',
        8 => 'field_ef_related_links_block',
      ),
    ),
    'fields' => array(
      'published_on' => 'node_sub_header',
      'field_ef_publ_contributors' => 'node_sub_header',
      'field_ef_topic' => 'node_sub_header',
      'title_field' => 'node_sub_header',
      'field_abstract' => 'node_sub_header',
      'field_pdf_presentation' => 'node_sub_header',
      'field_pdf_description' => 'node_sub_header',
      'body' => 'node_sub_header',
      'field_ef_related_links_block' => 'node_sub_header',
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
  $export['node|presentation|default'] = $ds_layout;

  return $export;
}
