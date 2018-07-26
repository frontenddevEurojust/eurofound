<?php
/**
 * @file
 * ef_ft_pleco_taxonomy.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ef_ft_pleco_taxonomy_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_pleco_organisation_type'
  $field_bases['field_pleco_organisation_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pleco_organisation_type',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'pleco_organisation_type',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  foreach (array(
    'pleco_record_type' => 'Record type',
    'pleco_platform' => 'Platform',
    'pleco_platform_sector' => 'Platform sector',
    'pleco_platform_work_typology' => 'Platform work typology',
    'pleco_country' => 'Country',
    'pleco_keyword' => 'Keyword',
    'pleco_language' => 'Language',
    'pleco_organisation' => 'Organisation',
    'pleco_methodology' => 'Methodology',
    'pleco_availability' => 'Availability',
  ) as $vocabulary_machine_name => $field_label) {

    $field_name = 'field_' . $vocabulary_machine_name . 's';

    if ('ys' === substr($field_name, -2)) {
      $field_name = substr($field_name, 0, -2) . 'ies';
    }

    if ('pleco_platform_work_typology' === $vocabulary_machine_name) {
      $field_name = 'field_pleco_work_typologies';
    }

    $field_bases[$field_name] = array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => $field_name,
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => $vocabulary_machine_name,
            'parent' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    );
  }

  return $field_bases;
}
