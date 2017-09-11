<?php
/**
 * @file
 * ef_ct_dataexplorer.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_ct_dataexplorer_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|data_explorer_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'data_explorer_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_sub_header' => array(
        0 => 'title_field',
        1 => 'field_ef_de_description',
        2 => 'field_ef_de_methodology',
      ),
    ),
    'fields' => array(
      'title_field' => 'node_sub_header',
      'field_ef_de_description' => 'node_sub_header',
      'field_ef_de_methodology' => 'node_sub_header',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|data_explorer_page|default'] = $ds_layout;

  return $export;
}
