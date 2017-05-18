<?php
/**
 * @file
 * ef_publications.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ef_publications_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_ef_comparative_analytical_report';
  $strongarm->value = 1;
  $export['autosave_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_ef_ic_quarterly_report';
  $strongarm->value = 0;
  $export['autosave_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_ef_national_contribution';
  $strongarm->value = 1;
  $export['autosave_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_ef_report';
  $strongarm->value = 1;
  $export['autosave_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_case_study';
  $strongarm->value = '2';
  $export['comment_anonymous_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_comparative_analytical_report';
  $strongarm->value = '2';
  $export['comment_anonymous_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_ic_quarterly_report';
  $strongarm->value = '0';
  $export['comment_anonymous_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_national_contribution';
  $strongarm->value = '2';
  $export['comment_anonymous_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_network_quarterly_report';
  $strongarm->value = '0';
  $export['comment_anonymous_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_publication';
  $strongarm->value = '2';
  $export['comment_anonymous_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_quarterly_report';
  $strongarm->value = 0;
  $export['comment_anonymous_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ef_report';
  $strongarm->value = '2';
  $export['comment_anonymous_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_case_study';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_comparative_analytical_report';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_ic_quarterly_report';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_national_contribution';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_network_quarterly_report';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_publication';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_quarterly_report';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ef_report';
  $strongarm->value = 1;
  $export['comment_default_mode_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_case_study';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_comparative_analytical_report';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_ic_quarterly_report';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_national_contribution';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_network_quarterly_report';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_publication';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_quarterly_report';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ef_report';
  $strongarm->value = '50';
  $export['comment_default_per_page_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_case_study';
  $strongarm->value = '2';
  $export['comment_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_comparative_analytical_report';
  $strongarm->value = '2';
  $export['comment_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_ic_quarterly_report';
  $strongarm->value = '1';
  $export['comment_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_national_contribution';
  $strongarm->value = '2';
  $export['comment_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_network_quarterly_report';
  $strongarm->value = '1';
  $export['comment_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_publication';
  $strongarm->value = '2';
  $export['comment_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_quarterly_report';
  $strongarm->value = '1';
  $export['comment_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ef_report';
  $strongarm->value = '2';
  $export['comment_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_case_study';
  $strongarm->value = 1;
  $export['comment_form_location_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_comparative_analytical_report';
  $strongarm->value = 1;
  $export['comment_form_location_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_ic_quarterly_report';
  $strongarm->value = 1;
  $export['comment_form_location_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_national_contribution';
  $strongarm->value = 1;
  $export['comment_form_location_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_network_quarterly_report';
  $strongarm->value = 1;
  $export['comment_form_location_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_publication';
  $strongarm->value = 1;
  $export['comment_form_location_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_quarterly_report';
  $strongarm->value = 1;
  $export['comment_form_location_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ef_report';
  $strongarm->value = 1;
  $export['comment_form_location_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_case_study';
  $strongarm->value = '1';
  $export['comment_preview_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_comparative_analytical_report';
  $strongarm->value = '1';
  $export['comment_preview_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_ic_quarterly_report';
  $strongarm->value = '1';
  $export['comment_preview_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_national_contribution';
  $strongarm->value = '1';
  $export['comment_preview_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_network_quarterly_report';
  $strongarm->value = '1';
  $export['comment_preview_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_publication';
  $strongarm->value = '1';
  $export['comment_preview_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_quarterly_report';
  $strongarm->value = '1';
  $export['comment_preview_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ef_report';
  $strongarm->value = '1';
  $export['comment_preview_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_case_study';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_comparative_analytical_report';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_ic_quarterly_report';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_national_contribution';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_network_quarterly_report';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_publication';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_quarterly_report';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ef_report';
  $strongarm->value = 1;
  $export['comment_subject_field_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_ef_comparative_analytical_report';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_ef_national_contribution';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_ef_report';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_case_study';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'workflow' => array(
          'weight' => '22',
        ),
        'xmlsitemap' => array(
          'weight' => '31',
        ),
        'metatags' => array(
          'weight' => '39',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_comparative_analytical_report';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'workflow' => array(
          'weight' => '102',
        ),
        'xmlsitemap' => array(
          'weight' => '28',
        ),
        'metatags' => array(
          'weight' => '32',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
        ),
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_ic_quarterly_report';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
        ),
        'metatags' => array(
          'weight' => '21',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_national_contribution';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'workflow' => array(
          'weight' => '102',
        ),
        'xmlsitemap' => array(
          'weight' => '20',
        ),
        'metatags' => array(
          'weight' => '28',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
        ),
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_network_quarterly_report';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'xmlsitemap' => array(
          'weight' => '15',
        ),
        'metatags' => array(
          'weight' => '25',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_publication';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
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
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'language' => array(
          'weight' => '1',
        ),
        'workflow' => array(
          'weight' => '102',
        ),
        'metatags' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '21',
            'visible' => TRUE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_quarterly_report';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'webform' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ef_report';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'scs' => array(
        'custom_settings' => TRUE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'workflow' => array(
          'weight' => '102',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ef_case_study';
  $strongarm->value = '1';
  $export['i18n_node_extended_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ef_comparative_analytical_report';
  $strongarm->value = '1';
  $export['i18n_node_extended_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ef_ic_quarterly_report';
  $strongarm->value = 1;
  $export['i18n_node_extended_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ef_national_contribution';
  $strongarm->value = '1';
  $export['i18n_node_extended_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ef_network_quarterly_report';
  $strongarm->value = 1;
  $export['i18n_node_extended_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ef_publication';
  $strongarm->value = '1';
  $export['i18n_node_extended_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ef_report';
  $strongarm->value = '1';
  $export['i18n_node_extended_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ef_case_study';
  $strongarm->value = array();
  $export['i18n_node_options_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ef_comparative_analytical_report';
  $strongarm->value = array();
  $export['i18n_node_options_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ef_ic_quarterly_report';
  $strongarm->value = array();
  $export['i18n_node_options_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ef_national_contribution';
  $strongarm->value = array();
  $export['i18n_node_options_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ef_network_quarterly_report';
  $strongarm->value = array();
  $export['i18n_node_options_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ef_publication';
  $strongarm->value = array();
  $export['i18n_node_options_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ef_report';
  $strongarm->value = array();
  $export['i18n_node_options_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_ef_publication';
  $strongarm->value = array();
  $export['i18n_sync_node_type_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_case_study';
  $strongarm->value = '4';
  $export['language_content_type_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_comparative_analytical_report';
  $strongarm->value = '4';
  $export['language_content_type_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_ic_quarterly_report';
  $strongarm->value = '0';
  $export['language_content_type_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_national_contribution';
  $strongarm->value = '4';
  $export['language_content_type_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_network_quarterly_report';
  $strongarm->value = '0';
  $export['language_content_type_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_publication';
  $strongarm->value = '4';
  $export['language_content_type_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_quarterly_report';
  $strongarm->value = '0';
  $export['language_content_type_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ef_report';
  $strongarm->value = '4';
  $export['language_content_type_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mb_content_cancel_ef_case_study';
  $strongarm->value = '1';
  $export['mb_content_cancel_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mb_content_cancel_ef_comparative_analytical_report';
  $strongarm->value = '1';
  $export['mb_content_cancel_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mb_content_cancel_ef_ic_quarterly_report';
  $strongarm->value = '1';
  $export['mb_content_cancel_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mb_content_cancel_ef_national_contribution';
  $strongarm->value = '1';
  $export['mb_content_cancel_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mb_content_cancel_ef_network_quarterly_report';
  $strongarm->value = '1';
  $export['mb_content_cancel_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mb_content_cancel_ef_publication';
  $strongarm->value = '1';
  $export['mb_content_cancel_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mb_content_cancel_ef_report';
  $strongarm->value = '1';
  $export['mb_content_cancel_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_case_study';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_comparative_analytical_report';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_ic_quarterly_report';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_national_contribution';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_network_quarterly_report';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_publication';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_quarterly_report';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ef_report';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_case_study';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_comparative_analytical_report';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_ic_quarterly_report';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_national_contribution';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_network_quarterly_report';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_publication';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_quarterly_report';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ef_report';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_article';
  $strongarm->value = '1';
  $export['new_revisions_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_ef_case_study';
  $strongarm->value = '1';
  $export['new_revisions_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_ef_comparative_analytical_report';
  $strongarm->value = '1';
  $export['new_revisions_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_ef_ic_quarterly_report';
  $strongarm->value = '1';
  $export['new_revisions_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_ef_national_contribution';
  $strongarm->value = '1';
  $export['new_revisions_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_ef_network_quarterly_report';
  $strongarm->value = '1';
  $export['new_revisions_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_ef_publication';
  $strongarm->value = '1';
  $export['new_revisions_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_ef_report';
  $strongarm->value = '1';
  $export['new_revisions_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_ic_report';
  $strongarm->value = '0';
  $export['new_revisions_ic_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_case_study';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision_moderation',
    2 => 'revision',
  );
  $export['node_options_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_comparative_analytical_report';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_ic_quarterly_report';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_national_contribution';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_network_quarterly_report';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_publication';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_quarterly_report';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
    2 => 'revision_moderation',
  );
  $export['node_options_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ef_report';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_case_study';
  $strongarm->value = '0';
  $export['node_preview_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_comparative_analytical_report';
  $strongarm->value = '0';
  $export['node_preview_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_ic_quarterly_report';
  $strongarm->value = '0';
  $export['node_preview_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_national_contribution';
  $strongarm->value = '0';
  $export['node_preview_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_network_quarterly_report';
  $strongarm->value = '0';
  $export['node_preview_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_publication';
  $strongarm->value = '0';
  $export['node_preview_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_quarterly_report';
  $strongarm->value = '0';
  $export['node_preview_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ef_report';
  $strongarm->value = '0';
  $export['node_preview_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_case_study';
  $strongarm->value = 1;
  $export['node_submitted_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_comparative_analytical_report';
  $strongarm->value = 1;
  $export['node_submitted_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_ic_quarterly_report';
  $strongarm->value = 1;
  $export['node_submitted_ef_ic_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_national_contribution';
  $strongarm->value = 0;
  $export['node_submitted_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_network_quarterly_report';
  $strongarm->value = 1;
  $export['node_submitted_ef_network_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_publication';
  $strongarm->value = 1;
  $export['node_submitted_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_quarterly_report';
  $strongarm->value = 0;
  $export['node_submitted_ef_quarterly_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ef_report';
  $strongarm->value = 1;
  $export['node_submitted_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_is_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_is_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_mk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_mk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_sr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_sr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_case_study_tr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_case_study_tr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_is_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_is_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_mk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_mk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_sr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_sr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_comparative_analytical_report_tr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_comparative_analytical_report_tr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_is_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_is_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_mk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_mk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_sr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_sr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_national_contribution_tr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_national_contribution_tr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_is_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_is_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_mk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_mk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_sr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_sr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_publication_tr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_publication_tr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_quarterly_report_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_quarterly_report_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_is_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_is_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_mk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_mk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_sr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_sr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ef_report_tr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ef_report_tr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_case_study_anticipation_of_change_activities_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_case_study_anticipation_of_change_activities_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_case_study_involved_actors_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_case_study_involved_actors_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_case_study_keywords_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_case_study_keywords_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_case_study_management_of_change_activities_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_case_study_management_of_change_activities_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_case_study_ownership_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_case_study_ownership_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_case_study_size_of_the_affected_establishment_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_case_study_size_of_the_affected_establishment_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_country_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_country_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_ef_case_study_type_of_measure_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_ef_case_study_type_of_measure_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_eurwork_landing_pages_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_eurwork_landing_pages_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_ef_case_study';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_ef_comparative_analytical_report';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_ef_national_contribution';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_ef_publication';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_ef_report';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_ef_case_study';
  $strongarm->value = 0;
  $export['scheduler_publish_required_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_ef_comparative_analytical_report';
  $strongarm->value = 0;
  $export['scheduler_publish_required_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_ef_national_contribution';
  $strongarm->value = 0;
  $export['scheduler_publish_required_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_ef_publication';
  $strongarm->value = 0;
  $export['scheduler_publish_required_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_ef_report';
  $strongarm->value = 0;
  $export['scheduler_publish_required_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_ef_case_study';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_ef_comparative_analytical_report';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_ef_national_contribution';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_ef_publication';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_ef_report';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_ef_case_study';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_ef_comparative_analytical_report';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_ef_national_contribution';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_ef_publication';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_ef_report';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_ef_case_study';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_ef_comparative_analytical_report';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_ef_national_contribution';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_ef_publication';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_ef_report';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ef_case_study';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ef_comparative_analytical_report';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ef_national_contribution';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ef_publication';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ef_report';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_ef_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_ef_case_study';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_ef_case_study'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_ef_comparative_analytical_report';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_ef_comparative_analytical_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_ef_national_contribution';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_ef_national_contribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_ef_publication';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_ef_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_ef_report';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_ef_report'] = $strongarm;

  return $export;
}
