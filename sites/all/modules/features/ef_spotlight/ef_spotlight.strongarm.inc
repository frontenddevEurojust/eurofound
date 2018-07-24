<?php
/**
 * @file
 * ef_spotlight.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ef_spotlight_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_spotlight_entry';
  $strongarm->value = '2';
  $export['comment_anonymous_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_spotlight_entry';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_spotlight_entry';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_spotlight_entry';
  $strongarm->value = '2';
  $export['comment_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_spotlight_entry';
  $strongarm->value = 1;
  $export['comment_form_location_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_spotlight_entry';
  $strongarm->value = '1';
  $export['comment_preview_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_spotlight_entry';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_spotlight_entry';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
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
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
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
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ef_spotlight_entry';
  $strongarm->value = 1;
  $export['i18n_node_extended_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ef_spotlight_entry';
  $strongarm->value = array();
  $export['i18n_node_options_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_ef_spotlight_entry';
  $strongarm->value = array();
  $export['i18n_sync_node_type_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_spotlight_entry';
  $strongarm->value = '4';
  $export['language_content_type_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mb_content_cancel_ef_spotlight_entry';
  $strongarm->value = '1';
  $export['mb_content_cancel_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_spotlight_entry';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_spotlight_entry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_spotlight_entry';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_spotlight_entry';
  $strongarm->value = '0';
  $export['node_preview_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_spotlight_entry';
  $strongarm->value = 0;
  $export['node_submitted_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_el_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_el_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_is_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_is_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_mk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_mk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_sr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_sr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_tr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_tr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_spotlight_entry_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_spotlight_entry_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_ef_spotlight_entry';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_ef_spotlight_entry';
  $strongarm->value = 0;
  $export['scheduler_publish_required_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_ef_spotlight_entry';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_ef_spotlight_entry';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_ef_spotlight_entry';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ef_spotlight_entry';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_ef_spotlight_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_ef_spotlight_entry';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_ef_spotlight_entry'] = $strongarm;

  return $export;
}
