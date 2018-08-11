<?php
/**
 * @file
 * ef_ft_ct_plecopage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_ft_ct_plecopage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pleco_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pleco_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ef_pleco_related_content_and_taxonomy' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|pleco_page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_ft_ct_plecopage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pleco_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pleco_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ef_pleco_common';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_paragraphs',
        2 => 'group_comments',
        3 => 'comments',
      ),
      'right' => array(
        4 => 'ef_pleco_related_content_and_taxonomy',
        5 => 'field_pleco_subscription_link',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_paragraphs' => 'ds_content',
      'group_comments' => 'ds_content',
      'comments' => 'ds_content',
      'ef_pleco_related_content_and_taxonomy' => 'right',
      'field_pleco_subscription_link' => 'right',
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
  $export['node|pleco_page|full'] = $ds_layout;

  return $export;
}
