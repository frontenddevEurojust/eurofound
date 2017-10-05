<?php
/**
 * @file
 * country_profile_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function country_profile_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_working_life_country_profiles';
  $strongarm->value = '2';
  $export['comment_anonymous_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_working_life_country_profiles';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_working_life_country_profiles';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_working_life_country_profiles';
  $strongarm->value = '2';
  $export['comment_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_working_life_country_profiles';
  $strongarm->value = 1;
  $export['comment_form_location_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_working_life_country_profiles';
  $strongarm->value = '1';
  $export['comment_preview_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_working_life_country_profiles';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_working_life_country_profiles';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '22',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'xmlsitemap' => array(
          'weight' => '21',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_working_life_country_profiles';
  $strongarm->value = '4';
  $export['language_content_type_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_working_life_country_profiles';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_working_life_country_profiles';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_working_life_country_profiles';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_working_life_country_profiles';
  $strongarm->value = '1';
  $export['node_preview_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_working_life_country_profiles';
  $strongarm->value = 0;
  $export['node_submitted_ef_working_life_country_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_el_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_el_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_is_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_is_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_mk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_mk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_pattern';
  $strongarm->value = 'country/[node:field_ef_country]';
  $export['pathauto_node_ef_working_life_country_profiles_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_sr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_sr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_tr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_tr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_working_life_country_profiles_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_working_life_country_profiles_und_pattern'] = $strongarm;

  return $export;
}
