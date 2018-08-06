<?php
/**
 * @file
 * ef_ft_ct_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_ft_ct_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'publication_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(
          0 => array(
            'condition' => 'rules_event',
            'configuration' => array(
              'rule' => 'rules_hide_publication_date',
            ),
          ),
        ),
      ),
    ),
    'comments' => array(
      'weight' => '5',
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
    'field_ef_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_ft_ct_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'group_node_tagging',
        1 => 'published_on',
        4 => 'field_ef_topic',
        5 => 'field_ef_observatory',
      ),
      'node_content' => array(
        2 => 'field_ef_main_image',
        3 => 'body',
      ),
      'node_downloads' => array(
        6 => 'field_ef_documents',
      ),
      'node_comments' => array(
        7 => 'comments',
      ),
    ),
    'fields' => array(
      'group_node_tagging' => 'node_metadata',
      'published_on' => 'node_metadata',
      'field_ef_main_image' => 'node_content',
      'body' => 'node_content',
      'field_ef_topic' => 'node_metadata',
      'field_ef_observatory' => 'node_metadata',
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
  $export['node|page|default'] = $ds_layout;

  return $export;
}
