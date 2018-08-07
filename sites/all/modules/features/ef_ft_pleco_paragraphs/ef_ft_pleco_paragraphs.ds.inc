<?php
/**
 * @file
 * ef_ft_pleco_paragraphs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_ft_pleco_paragraphs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|pleco_landing_dossiers|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'pleco_landing_dossiers';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_pleco_landing_dossiers' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_ef_pleco_ds_field_items_landing_dossiers',
        ),
      ),
    ),
    'field_pleco_read_more' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_ef_pleco_ds_field_items_landing_dossiers_readmore',
        ),
      ),
    ),
  );
  $export['paragraphs_item|pleco_landing_dossiers|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|pleco_section|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'pleco_section';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_paragraph' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['paragraphs_item|pleco_section|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_ft_pleco_paragraphs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|pleco_landing_dossiers|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'pleco_landing_dossiers';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_pleco_landing_dossiers',
        1 => 'field_pleco_read_more',
      ),
    ),
    'fields' => array(
      'field_pleco_landing_dossiers' => 'ds_content',
      'field_pleco_read_more' => 'ds_content',
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
  $export['paragraphs_item|pleco_landing_dossiers|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|pleco_section|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'pleco_section';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_pleco_paragraph_section';
  $ds_layout->settings = array(
    'regions' => array(
      'title' => array(
        0 => 'title_field',
      ),
      'ds_content' => array(
        1 => 'field_paragraph',
      ),
    ),
    'fields' => array(
      'title_field' => 'title',
      'field_paragraph' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'title' => 'div',
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|pleco_section|default'] = $ds_layout;

  return $export;
}
