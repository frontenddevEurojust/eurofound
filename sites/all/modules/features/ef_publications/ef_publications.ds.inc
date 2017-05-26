<?php
/**
 * @file
 * ef_publications.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ef_publications_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_case_study|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_case_study';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '2',
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
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
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
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_organisation_size' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_legal_form' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_social_dialogue' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_target_groups' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_case_study_sectors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_initiative_types' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_scope' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_social_dialogue_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_case_study_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_case_study_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_case_study|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_comparative_analytical_report|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_comparative_analytical_report';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '12',
      'label' => 'inline',
      'format' => 'publication_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
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
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_publish_on' => array(
      'weight' => '9',
      'label' => 'inline',
      'format' => 'ds_publish_on_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'ds_submission_date' => array(
      'weight' => '10',
      'label' => 'inline',
      'format' => 'ds_submission_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'field_ef_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_institution' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
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
    'field_ef_contract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_assign_to' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_flag' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_deliverable_kind' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_unit' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_work_programme_area' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_comparative_analytical_report|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_ic_quarterly_report|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_ic_quarterly_report';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'qrr' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ef_approved_for_payment' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_report_delivery_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_ic_quarterly_report|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_national_contribution|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_national_contribution';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '11',
      'label' => 'inline',
      'format' => 'publication_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
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
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_publish_on' => array(
      'weight' => '9',
      'label' => 'inline',
      'format' => 'ds_publish_on_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'ds_submission_date' => array(
      'weight' => '10',
      'label' => 'inline',
      'format' => 'ds_submission_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_institution' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_country' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
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
    'field_ef_contract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_assign_to' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_flag' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_deliverable_kind' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_report_delivery_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_national_contribution|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_network_quarterly_report|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_network_quarterly_report';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ef_short_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
    'field_ef_document' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_network_quarterly_report|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_photo_gallery|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_photo_gallery';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
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
  $export['node|ef_photo_gallery|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_publication|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_publication';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '9',
      'label' => 'inline',
      'format' => 'publication_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
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
    'publication_preview' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:10:"pdfpreview";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:4:{s:11:"image_style";s:0:"";s:10:"image_link";s:4:"file";s:16:"show_description";i:0;s:3:"tag";s:4:"span";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:22:"node:field_ef_document";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ef_reference_no' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_document' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_publ_keywords' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_publ_contributors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_isbn' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_project' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_publ_sector' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_catalogue' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_document_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_number_of_pages' => array(
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
    'field_ef_doi' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_eu_related_countries' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_publication|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_report|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_report';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'published_on' => array(
      'weight' => '10',
      'label' => 'inline',
      'format' => 'publication_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
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
    'qrr' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_publish_on' => array(
      'weight' => '8',
      'label' => 'inline',
      'format' => 'ds_publish_on_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'ds_submission_date' => array(
      'weight' => '9',
      'label' => 'inline',
      'format' => 'ds_submission_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'field_ef_author' => array(
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
    'field_ef_flag' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_author_contract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_report|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_spotlight_entry|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_spotlight_entry';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'ds_post_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'field_ef_spotlight_theme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
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
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_spotlight_entry|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_spotlight_entry|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_spotlight_entry';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_ef_date_format',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_spotlight_theme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
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
  $export['node|ef_spotlight_entry|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ef_video|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ef_video';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_ef_documents' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_duration' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_observatory' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_subtitles_language' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_theme' => array(
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
    'field_ef_video_main_language' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ef_video_subtitles' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|ef_video|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ef_publications_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'publication_preview';
  $ds_field->label = 'Publication Preview';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'ef_publication|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['publication_preview'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ef_publications_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_case_study|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_case_study';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_sub_header' => array(
        0 => 'links',
      ),
      'node_metadata' => array(
        1 => 'group_node_tagging',
        3 => 'published_on',
        5 => 'field_ef_theme',
        9 => 'field_ef_topic',
        11 => 'field_ef_observatory',
        14 => 'field_ef_report_delivery_date',
        15 => 'field_ef_approved_for_payment',
      ),
      'node_content' => array(
        2 => 'group_node_about',
        4 => 'body',
        6 => 'field_ef_case_study_name',
        8 => 'field_ef_country',
        12 => 'field_ef_organisation_size',
        13 => 'field_ef_legal_form',
        16 => 'field_ef_case_study_sectors',
        17 => 'field_ef_social_dialogue',
        18 => 'field_ef_case_study_category',
        19 => 'field_ef_social_dialogue_type',
        20 => 'field_ef_target_groups',
        21 => 'field_ef_initiative_types',
        22 => 'field_ef_scope',
      ),
      'node_downloads' => array(
        7 => 'field_ef_documents',
      ),
      'node_comments' => array(
        10 => 'comments',
      ),
    ),
    'fields' => array(
      'links' => 'node_sub_header',
      'group_node_tagging' => 'node_metadata',
      'group_node_about' => 'node_content',
      'published_on' => 'node_metadata',
      'body' => 'node_content',
      'field_ef_theme' => 'node_metadata',
      'field_ef_case_study_name' => 'node_content',
      'field_ef_documents' => 'node_downloads',
      'field_ef_country' => 'node_content',
      'field_ef_topic' => 'node_metadata',
      'comments' => 'node_comments',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_organisation_size' => 'node_content',
      'field_ef_legal_form' => 'node_content',
      'field_ef_report_delivery_date' => 'node_metadata',
      'field_ef_approved_for_payment' => 'node_metadata',
      'field_ef_case_study_sectors' => 'node_content',
      'field_ef_social_dialogue' => 'node_content',
      'field_ef_case_study_category' => 'node_content',
      'field_ef_social_dialogue_type' => 'node_content',
      'field_ef_target_groups' => 'node_content',
      'field_ef_initiative_types' => 'node_content',
      'field_ef_scope' => 'node_content',
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
  $export['node|ef_case_study|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_comparative_analytical_report|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_comparative_analytical_report';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_languages' => array(
        0 => 'links',
      ),
      'node_metadata' => array(
        1 => 'field_ef_national_contribution',
        2 => 'field_ef_deliverable_kind',
        4 => 'field_ef_observatory',
        5 => 'field_ef_theme',
        8 => 'field_ef_topic',
        9 => 'field_ef_flag',
        10 => 'field_ef_assign_to',
        11 => 'field_ef_contract',
        12 => 'ds_publish_on',
        13 => 'ds_submission_date',
        14 => 'published_on',
        15 => 'field_ef_unit',
        16 => 'field_ef_work_programme_area',
      ),
      'node_content' => array(
        3 => 'field_ef_sector',
        6 => 'field_ef_author',
        7 => 'field_ef_institution',
        17 => 'group_ef_quality_assessment',
        18 => 'group_node_about',
        19 => 'body',
        24 => 'field_ef_balance_in_reporting_ca',
        25 => 'field_ef_command_of_english_ca',
        26 => 'field_ef_quality_of_contents_ca',
        27 => 'field_ef_style_presentation_ca',
      ),
      'node_downloads' => array(
        20 => 'group_documents',
        21 => 'field_ef_source_documents',
        22 => 'field_ef_document',
        23 => 'field_ef_documents',
      ),
    ),
    'fields' => array(
      'links' => 'node_languages',
      'field_ef_national_contribution' => 'node_metadata',
      'field_ef_deliverable_kind' => 'node_metadata',
      'field_ef_sector' => 'node_content',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_theme' => 'node_metadata',
      'field_ef_author' => 'node_content',
      'field_ef_institution' => 'node_content',
      'field_ef_topic' => 'node_metadata',
      'field_ef_flag' => 'node_metadata',
      'field_ef_assign_to' => 'node_metadata',
      'field_ef_contract' => 'node_metadata',
      'ds_publish_on' => 'node_metadata',
      'ds_submission_date' => 'node_metadata',
      'published_on' => 'node_metadata',
      'field_ef_unit' => 'node_metadata',
      'field_ef_work_programme_area' => 'node_metadata',
      'group_ef_quality_assessment' => 'node_content',
      'group_node_about' => 'node_content',
      'body' => 'node_content',
      'group_documents' => 'node_downloads',
      'field_ef_source_documents' => 'node_downloads',
      'field_ef_document' => 'node_downloads',
      'field_ef_documents' => 'node_downloads',
      'field_ef_balance_in_reporting_ca' => 'node_content',
      'field_ef_command_of_english_ca' => 'node_content',
      'field_ef_quality_of_contents_ca' => 'node_content',
      'field_ef_style_presentation_ca' => 'node_content',
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
  $export['node|ef_comparative_analytical_report|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_ic_quarterly_report|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_ic_quarterly_report';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'field_ef_quartely_report_year',
        1 => 'field_ef_quarter',
        2 => 'field_ef_quarter_report_country',
        3 => 'field_ef_report_delivery_date',
        4 => 'field_ef_approved_for_payment',
      ),
      'node_content' => array(
        5 => 'field_ef_dissemination',
        6 => 'group_ef_activity',
        7 => 'group_ef_dissemination',
        8 => 'field_ef_other_feedback',
        9 => 'qrr',
        10 => 'field_ef_activity',
      ),
      'node_downloads' => array(
        11 => 'links',
      ),
    ),
    'fields' => array(
      'field_ef_quartely_report_year' => 'node_metadata',
      'field_ef_quarter' => 'node_metadata',
      'field_ef_quarter_report_country' => 'node_metadata',
      'field_ef_report_delivery_date' => 'node_metadata',
      'field_ef_approved_for_payment' => 'node_metadata',
      'field_ef_dissemination' => 'node_content',
      'group_ef_activity' => 'node_content',
      'group_ef_dissemination' => 'node_content',
      'field_ef_other_feedback' => 'node_content',
      'qrr' => 'node_content',
      'field_ef_activity' => 'node_content',
      'links' => 'node_downloads',
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
  $export['node|ef_ic_quarterly_report|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_national_contribution|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_national_contribution';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_languages' => array(
        0 => 'links',
      ),
      'node_metadata' => array(
        1 => 'field_ef_deliverable_kind',
        2 => 'field_ef_observatory',
        3 => 'field_ef_approved_for_payment',
        6 => 'field_ef_theme',
        7 => 'field_ef_topic',
        10 => 'field_ef_flag',
        11 => 'field_ef_assign_to',
        12 => 'field_ef_contract',
        13 => 'ds_publish_on',
        14 => 'ds_submission_date',
        15 => 'published_on',
        16 => 'field_ef_report_delivery_date',
      ),
      'node_content' => array(
        4 => 'field_ef_country',
        5 => 'field_ef_sector',
        8 => 'field_ef_author',
        9 => 'field_ef_institution',
        17 => 'group_ef_quality_assessment',
        18 => 'field_ef_balance_in_reporting_nc',
        19 => 'group_node_about',
        20 => 'field_ef_command_of_english_nc',
        21 => 'body',
        23 => 'field_ef_quality_of_contents_nc',
        25 => 'field_ef_style_presentation_nc',
      ),
      'node_downloads' => array(
        22 => 'group_documents',
        24 => 'field_ef_source_documents',
        26 => 'field_ef_documents',
      ),
    ),
    'fields' => array(
      'links' => 'node_languages',
      'field_ef_deliverable_kind' => 'node_metadata',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_approved_for_payment' => 'node_metadata',
      'field_ef_country' => 'node_content',
      'field_ef_sector' => 'node_content',
      'field_ef_theme' => 'node_metadata',
      'field_ef_topic' => 'node_metadata',
      'field_ef_author' => 'node_content',
      'field_ef_institution' => 'node_content',
      'field_ef_flag' => 'node_metadata',
      'field_ef_assign_to' => 'node_metadata',
      'field_ef_contract' => 'node_metadata',
      'ds_publish_on' => 'node_metadata',
      'ds_submission_date' => 'node_metadata',
      'published_on' => 'node_metadata',
      'field_ef_report_delivery_date' => 'node_metadata',
      'group_ef_quality_assessment' => 'node_content',
      'field_ef_balance_in_reporting_nc' => 'node_content',
      'group_node_about' => 'node_content',
      'field_ef_command_of_english_nc' => 'node_content',
      'body' => 'node_content',
      'group_documents' => 'node_downloads',
      'field_ef_quality_of_contents_nc' => 'node_content',
      'field_ef_source_documents' => 'node_downloads',
      'field_ef_style_presentation_nc' => 'node_content',
      'field_ef_documents' => 'node_downloads',
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
  $export['node|ef_national_contribution|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_network_quarterly_report|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_network_quarterly_report';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'field_ef_quartely_report_year',
        1 => 'field_ef_quarter',
        2 => 'field_ef_quarter_report_country',
        3 => 'field_ef_author_textfield',
      ),
      'node_content' => array(
        4 => 'field_ef_document',
        5 => 'field_ef_short_summary',
        6 => 'field_ef_actors_institutions',
        7 => 'group_ef_qr_introduction',
        8 => 'group_ef_qr_actors',
        9 => 'field_ef_physical_risk_factors',
        10 => 'field_ef_employment_status',
        11 => 'group_ef_qr_processes',
        12 => 'field_ef_skills_and_training',
        13 => 'field_ef_processes',
        14 => 'group_ef_qr_outcomes',
        15 => 'field_ef_psychosocial_risk_fact',
        16 => 'field_ef_work_organisation_skill',
        17 => 'field_ef_entitlements_obligs',
        18 => 'group_ef_qr_relevant_issues',
        19 => 'field_ef_career_development',
        20 => 'field_ef_work_related_health',
        21 => 'field_ef_termination_of_employm',
        22 => 'group_ef_qr_summary_commentary',
        23 => 'field_ef_absenteeism_presenteeis',
        24 => 'field_ef_other_relevant_issues',
        25 => 'field_ef_working_time_in_general',
        26 => 'field_ef_summary_commentary',
        28 => 'field_ef_violence_and_harassment',
        29 => 'field_ef_organisation_of_working',
        30 => 'field_ef_occupational_health',
        31 => 'field_ef_work_life_balance',
        32 => 'field_ef_non_standard_working',
        33 => 'field_ef_forms_of_work_organisat',
        34 => 'field_ef_workplace_innovation',
        35 => 'field_ef_employee_involvement',
        36 => 'field_ef_participation_at_work',
        37 => 'group_ef_qr_employ_conditions',
        38 => 'group_ef_qr_pay',
        39 => 'field_ef_pay',
        40 => 'group_ef_qr_working_time',
        41 => 'group_ef_qr_skills',
        42 => 'group_ef_qr_health',
        43 => 'group_ef_qr_work_organisation',
      ),
      'node_downloads' => array(
        27 => 'links',
      ),
    ),
    'fields' => array(
      'field_ef_quartely_report_year' => 'node_metadata',
      'field_ef_quarter' => 'node_metadata',
      'field_ef_quarter_report_country' => 'node_metadata',
      'field_ef_author_textfield' => 'node_metadata',
      'field_ef_document' => 'node_content',
      'field_ef_short_summary' => 'node_content',
      'field_ef_actors_institutions' => 'node_content',
      'group_ef_qr_introduction' => 'node_content',
      'group_ef_qr_actors' => 'node_content',
      'field_ef_physical_risk_factors' => 'node_content',
      'field_ef_employment_status' => 'node_content',
      'group_ef_qr_processes' => 'node_content',
      'field_ef_skills_and_training' => 'node_content',
      'field_ef_processes' => 'node_content',
      'group_ef_qr_outcomes' => 'node_content',
      'field_ef_psychosocial_risk_fact' => 'node_content',
      'field_ef_work_organisation_skill' => 'node_content',
      'field_ef_entitlements_obligs' => 'node_content',
      'group_ef_qr_relevant_issues' => 'node_content',
      'field_ef_career_development' => 'node_content',
      'field_ef_work_related_health' => 'node_content',
      'field_ef_termination_of_employm' => 'node_content',
      'group_ef_qr_summary_commentary' => 'node_content',
      'field_ef_absenteeism_presenteeis' => 'node_content',
      'field_ef_other_relevant_issues' => 'node_content',
      'field_ef_working_time_in_general' => 'node_content',
      'field_ef_summary_commentary' => 'node_content',
      'links' => 'node_downloads',
      'field_ef_violence_and_harassment' => 'node_content',
      'field_ef_organisation_of_working' => 'node_content',
      'field_ef_occupational_health' => 'node_content',
      'field_ef_work_life_balance' => 'node_content',
      'field_ef_non_standard_working' => 'node_content',
      'field_ef_forms_of_work_organisat' => 'node_content',
      'field_ef_workplace_innovation' => 'node_content',
      'field_ef_employee_involvement' => 'node_content',
      'field_ef_participation_at_work' => 'node_content',
      'group_ef_qr_employ_conditions' => 'node_content',
      'group_ef_qr_pay' => 'node_content',
      'field_ef_pay' => 'node_content',
      'group_ef_qr_working_time' => 'node_content',
      'group_ef_qr_skills' => 'node_content',
      'group_ef_qr_health' => 'node_content',
      'group_ef_qr_work_organisation' => 'node_content',
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
  $export['node|ef_network_quarterly_report|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_photo_gallery|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_photo_gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'field_ef_observatory',
        1 => 'field_ef_theme',
        2 => 'field_ef_topic',
      ),
      'node_content' => array(
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_ef_observatory' => 'node_metadata',
      'field_ef_theme' => 'node_metadata',
      'field_ef_topic' => 'node_metadata',
      'body' => 'node_content',
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
  $export['node|ef_photo_gallery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_publication|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_publication';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_languages' => array(
        0 => 'links',
      ),
      'node_side_info' => array(
        1 => 'publication_preview',
        2 => 'field_ef_document',
        21 => 'field_order_label',
      ),
      'node_content' => array(
        3 => 'body',
        4 => 'group_ef_node_details',
        5 => 'field_ef_publ_contributors',
        6 => 'field_term_subscription_url',
        7 => 'field_ef_number_of_pages',
        9 => 'field_ef_document_type',
        10 => 'field_ef_reference_no',
        11 => 'published_on',
        12 => 'field_ef_publ_keywords',
        13 => 'field_ef_isbn',
        14 => 'field_ef_project',
        15 => 'field_ef_publ_sector',
        16 => 'field_ef_catalogue',
        17 => 'field_ef_doi',
        18 => 'field_ef_topic',
        19 => 'field_ef_observatory',
        20 => 'field_ef_eu_related_countries',
      ),
      'node_comments' => array(
        8 => 'comments',
      ),
    ),
    'fields' => array(
      'links' => 'node_languages',
      'publication_preview' => 'node_side_info',
      'field_ef_document' => 'node_side_info',
      'body' => 'node_content',
      'group_ef_node_details' => 'node_content',
      'field_ef_publ_contributors' => 'node_content',
      'field_term_subscription_url' => 'node_content',
      'field_ef_number_of_pages' => 'node_content',
      'comments' => 'node_comments',
      'field_ef_document_type' => 'node_content',
      'field_ef_reference_no' => 'node_content',
      'published_on' => 'node_content',
      'field_ef_publ_keywords' => 'node_content',
      'field_ef_isbn' => 'node_content',
      'field_ef_project' => 'node_content',
      'field_ef_publ_sector' => 'node_content',
      'field_ef_catalogue' => 'node_content',
      'field_ef_doi' => 'node_content',
      'field_ef_topic' => 'node_content',
      'field_ef_observatory' => 'node_content',
      'field_ef_eu_related_countries' => 'node_content',
      'field_order_label' => 'node_side_info',
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
  $export['node|ef_publication|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_report|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_report';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_languages' => array(
        0 => 'links',
      ),
      'node_metadata' => array(
        1 => 'field_ef_report_delivery_date',
        2 => 'field_ef_approved_for_payment',
        3 => 'field_ef_topic',
        4 => 'field_ef_flag',
        5 => 'field_ef_assign_to_user',
        6 => 'field_ef_author_contract',
        7 => 'ds_publish_on',
        8 => 'ds_submission_date',
        9 => 'published_on',
        10 => 'field_ef_author',
      ),
      'node_content' => array(
        11 => 'field_ef_main_image',
        12 => 'body',
        13 => 'qrr',
      ),
      'node_downloads' => array(
        14 => 'field_ef_source_documents',
        15 => 'field_ef_documents',
      ),
      'node_comments' => array(
        16 => 'comments',
      ),
    ),
    'fields' => array(
      'links' => 'node_languages',
      'field_ef_report_delivery_date' => 'node_metadata',
      'field_ef_approved_for_payment' => 'node_metadata',
      'field_ef_topic' => 'node_metadata',
      'field_ef_flag' => 'node_metadata',
      'field_ef_assign_to_user' => 'node_metadata',
      'field_ef_author_contract' => 'node_metadata',
      'ds_publish_on' => 'node_metadata',
      'ds_submission_date' => 'node_metadata',
      'published_on' => 'node_metadata',
      'field_ef_author' => 'node_metadata',
      'field_ef_main_image' => 'node_content',
      'body' => 'node_content',
      'qrr' => 'node_content',
      'field_ef_source_documents' => 'node_downloads',
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
  $export['node|ef_report|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_spotlight_entry|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_spotlight_entry';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'group_node_tagging',
        4 => 'post_date',
        5 => 'field_ef_topic',
        6 => 'field_ef_theme',
        7 => 'field_ef_observatory',
        8 => 'field_ef_spotlight_theme',
      ),
      'node_content' => array(
        1 => 'field_ef_main_image',
        2 => 'body',
      ),
      'node_downloads' => array(
        3 => 'field_ef_documents',
      ),
    ),
    'fields' => array(
      'group_node_tagging' => 'node_metadata',
      'field_ef_main_image' => 'node_content',
      'body' => 'node_content',
      'field_ef_documents' => 'node_downloads',
      'post_date' => 'node_metadata',
      'field_ef_topic' => 'node_metadata',
      'field_ef_theme' => 'node_metadata',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_spotlight_theme' => 'node_metadata',
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
  $export['node|ef_spotlight_entry|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_spotlight_entry|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_spotlight_entry';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_metadata' => array(
        0 => 'group_node_tagging',
        1 => 'post_date',
        2 => 'field_ef_topic',
        4 => 'field_ef_theme',
        5 => 'field_ef_observatory',
        7 => 'field_ef_spotlight_theme',
      ),
      'node_content' => array(
        3 => 'field_ef_main_image',
        6 => 'body',
      ),
      'node_downloads' => array(
        8 => 'field_ef_documents',
      ),
      'node_comments' => array(
        9 => 'comments',
      ),
    ),
    'fields' => array(
      'group_node_tagging' => 'node_metadata',
      'post_date' => 'node_metadata',
      'field_ef_topic' => 'node_metadata',
      'field_ef_main_image' => 'node_content',
      'field_ef_theme' => 'node_metadata',
      'field_ef_observatory' => 'node_metadata',
      'body' => 'node_content',
      'field_ef_spotlight_theme' => 'node_metadata',
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
  $export['node|ef_spotlight_entry|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ef_video|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ef_video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ef_foundation_two_column_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'node_content' => array(
        0 => 'body',
        4 => 'field_ef_videos',
        5 => 'field_ef_duration',
        6 => 'field_ef_video_main_language',
        7 => 'field_ef_video_subtitles',
        8 => 'field_ef_subtitles_language',
        9 => 'field_ef_documents',
      ),
      'node_metadata' => array(
        1 => 'field_ef_observatory',
        2 => 'field_ef_theme',
        3 => 'field_ef_topic',
      ),
    ),
    'fields' => array(
      'body' => 'node_content',
      'field_ef_observatory' => 'node_metadata',
      'field_ef_theme' => 'node_metadata',
      'field_ef_topic' => 'node_metadata',
      'field_ef_videos' => 'node_content',
      'field_ef_duration' => 'node_content',
      'field_ef_video_main_language' => 'node_content',
      'field_ef_video_subtitles' => 'node_content',
      'field_ef_subtitles_language' => 'node_content',
      'field_ef_documents' => 'node_content',
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
  $export['node|ef_video|default'] = $ds_layout;

  return $export;
}
