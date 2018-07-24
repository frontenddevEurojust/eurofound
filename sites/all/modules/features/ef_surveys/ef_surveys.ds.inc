<?php
/**
 * @file
 * ef_surveys.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_surveys_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_survey|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_survey';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ef_survey_family' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_survey_year' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_survey|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_survey|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_survey';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|ef_survey|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_surveys_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_survey|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_survey';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_languages' => array(
        0 => 'links',
      ),
      'node_metadata' => array(
        1 => 'field_ef_survey_family',
        2 => 'field_ef_survey_year',
      ),
      'node_content' => array(
        3 => 'body',
        4 => 'field_ef_related_content',
      ),
      'node_downloads' => array(
        5 => 'field_ef_documents',
      ),
      'node_comments' => array(
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'links' => 'node_languages',
      'field_ef_survey_family' => 'node_metadata',
      'field_ef_survey_year' => 'node_metadata',
      'body' => 'node_content',
      'field_ef_related_content' => 'node_content',
      'field_ef_documents' => 'node_downloads',
      'comments' => 'node_comments',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
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
  $export['node|ef_survey|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_survey|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_survey';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'zf_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ef_survey|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|ef_survey_families|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'ef_survey_families';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_side_info' => array(
        0 => 'field_ef_survey_family_logo',
      ),
      'node_content' => array(
        1 => 'description',
      ),
    ),
    'fields' => array(
      'field_ef_survey_family_logo' => 'node_side_info',
      'description' => 'node_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
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
  $export['taxonomy_term|ef_survey_families|default'] = $ds_layout;

  return $export;
}
