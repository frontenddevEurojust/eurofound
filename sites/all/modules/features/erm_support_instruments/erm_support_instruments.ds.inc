<?php
/**
 * @file
 * erm_support_instruments.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function erm_support_instruments_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|erm_support_instrument|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'erm_support_instrument';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_country_erm_si' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_type_erm_si' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'ul',
          'ow-cl' => 'no-bullet',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
        ),
      ),
    ),
    'field_sources_erm_si' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'ul',
          'ow-cl' => 'no-bullet',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
        ),
      ),
    ),
    'field_funding_erm_si' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'ul',
          'ow-cl' => 'no-bullet',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
        ),
      ),
    ),
  );
  $export['node|erm_support_instrument|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function erm_support_instruments_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|erm_support_instrument|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'erm_support_instrument';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_sub_header' => array(
        0 => 'field_observatory_erm_si',
        1 => 'field_theme_erm_si',
        2 => 'field_native_name_erm_si',
        3 => 'field_english_name_erm_si',
        4 => 'field_name_notes_erm_si',
        5 => 'field_country_erm_si',
        6 => 'field_type_erm_si',
        7 => 'field_phase_erm_si',
        8 => 'field_coverage_elig_erm_si',
        9 => 'field_main_characteristic_erm_si',
        10 => 'field_effectiveness_erm_si',
        11 => 'field_strengths_erm_si',
        12 => 'field_weaknesses_erm_si',
        13 => 'field_employers_org_erm_si',
        14 => 'field_national_govermment_erm_si',
        15 => 'field_public_employ_serv_erm_si',
        16 => 'field_reg_local_gov_erm_si',
        17 => 'field_other_erm_si',
        18 => 'field_involved_actors_notes',
        19 => 'field_sources_erm_si',
        20 => 'field_sources_notes_erm_si',
        21 => 'field_contract_erm_si',
        22 => 'field_funding_erm_si',
        23 => 'field_example_erm_si',
        24 => 'field_name_notes_memory_erm_si',
      ),
    ),
    'fields' => array(
      'field_observatory_erm_si' => 'node_sub_header',
      'field_theme_erm_si' => 'node_sub_header',
      'field_native_name_erm_si' => 'node_sub_header',
      'field_english_name_erm_si' => 'node_sub_header',
      'field_name_notes_erm_si' => 'node_sub_header',
      'field_country_erm_si' => 'node_sub_header',
      'field_type_erm_si' => 'node_sub_header',
      'field_phase_erm_si' => 'node_sub_header',
      'field_coverage_elig_erm_si' => 'node_sub_header',
      'field_main_characteristic_erm_si' => 'node_sub_header',
      'field_effectiveness_erm_si' => 'node_sub_header',
      'field_strengths_erm_si' => 'node_sub_header',
      'field_weaknesses_erm_si' => 'node_sub_header',
      'field_employers_org_erm_si' => 'node_sub_header',
      'field_national_govermment_erm_si' => 'node_sub_header',
      'field_public_employ_serv_erm_si' => 'node_sub_header',
      'field_reg_local_gov_erm_si' => 'node_sub_header',
      'field_other_erm_si' => 'node_sub_header',
      'field_involved_actors_notes' => 'node_sub_header',
      'field_sources_erm_si' => 'node_sub_header',
      'field_sources_notes_erm_si' => 'node_sub_header',
      'field_contract_erm_si' => 'node_sub_header',
      'field_funding_erm_si' => 'node_sub_header',
      'field_example_erm_si' => 'node_sub_header',
      'field_name_notes_memory_erm_si' => 'node_sub_header',
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
  $export['node|erm_support_instrument|default'] = $ds_layout;

  return $export;
}
