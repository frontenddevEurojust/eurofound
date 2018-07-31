<?php

/**
 * Implements hook_field_formatter_info().
 */
function ef_pleco_components_field_formatter_info() {

  $formatters = array();

  if (module_exists('taxonomy') && module_exists('i18n_taxonomy')) {

    $formatters['ef_pleco_terms_plain_separator'] = [
      'label'       => t('Plain text, separated'),
      'description' => t('Display the referenced term as plain text, with a separator.'),
      'field types' => ['taxonomy_term_reference'],
      'settings'    => [
        'taxonomy_term_link' => TRUE,
        'taxonomy_term_separator' => ', ',
      ],
    ];


    if (module_exists('i18n_taxonomy')) {
      $formatters['ef_pleco_terms_plain_separator_localized'] = [
        'label'       => t('Plain text, separated (localized) (PLECO)'),
        'description' => t('Display the referenced term as plain text, with a separator. Use this with the "localize" translation mode for vocabularies.'),
        'field types' => ['taxonomy_term_reference'],
        'settings'    => ['taxonomy_term_reference_view_mode' => 'full'],
      ];
    }

    if (module_exists('i18n_taxonomy')) {
      $formatters['ds_taxonomy_separator_localized'] = array(
        'label'       => t('Separated (localized)'),
        'description' => t('Display the referenced term with a separator. Use this with the "localize" translation mode for vocabularies.'),
        'field types' => array('taxonomy_term_reference'),
        'settings'    => array(
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
      );
    }
  }
}
