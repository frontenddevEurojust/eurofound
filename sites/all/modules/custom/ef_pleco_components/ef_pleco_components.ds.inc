<?php

use Drupal\ef_pleco_components\EntityDisplay\EntityDisplay_EfRelatedEntities;

/**
 * Implements hook_ds_field_theme_functions_info().
 */
function ef_pleco_components_ds_field_theme_functions_info() {
  return [
    /* @see _ef_pleco_ds_field_items_comma() */
    '_ef_pleco_ds_field_items_comma' => 'Minimal, separated by comma (EF PLECO)',
  ];
}

/**
 * @param array $variables
 *
 * @return string
 *
 * @see theme_ds_field_minimal()
 */
function _ef_pleco_ds_field_items_comma(array $variables) {
  $config = $variables['ds-config'];

  // Render the items.
  $items_html_parts = [];
  foreach ($variables['items'] as $delta => $item) {
    $item_html = drupal_render($item);
    $items_html_parts[] = $item_html;
  }

  $output = implode(', ', $items_html_parts);

  // Add a label, if applicable.
  if (!$variables['label_hidden']) {
    $label_html = $variables['label'];

    if (!isset($config['lb-col'])) {
      $label_html .= ':&nbsp;';
    }
    $label_html = '<div class="label-' . $variables['element']['#label_display'] . '">' . $label_html . '</div>';

    // Prepend the label to the output.
    $output = $label_html . $output;
  }

  // Add an outer wrapper.
  $classes = 'field field-name-' . str_replace('_', '-', $variables['element']['#field_name']);

  if (isset($config['classes'])) {
    $classes .= ' ' . $config['classes'];
  }

  return '<div class="' . check_plain($classes) . '">' . $output . '</div>';
}

/**
 * Implements hook_ds_layout_info().
 */
function ef_pleco_components_ds_layout_info() {
  $path = drupal_get_path('module', 'ef_pleco_components') . '/layouts';
  $layouts = [];
  $layouts['ef_pleco_common'] = [
    'label' => 'EF PLECO',
    'path' => $path . '/ef_pleco_common',
    'regions' => [
      'ds_content' => t('Content'),
      'right' => t('Right column'),
    ],
    'css' => TRUE,
  ];
  return $layouts;
}

/**
 * Implements hook_ds_fields_info().
 *
 * @param string $entity_type
 *
 * @return array[][]
 *   Format: $[$entity_type][$field_name] = $ds_field_definition
 */
function ef_pleco_components_ds_fields_info($entity_type) {

  if ('node' !== $entity_type) {
    return [];
  }

  $node_fields = [];

  $node_fields['ef_pleco_record_metadata_inline'] = [
    'title' => 'PLECO Record Metadata, inline',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['pleco_record|full'],
    /* @see _ef_pleco_components_record_metadata_inline() */
    'function' => '_ef_pleco_components_record_metadata_inline',
  ];

  $node_fields['ef_pleco_related_content_and_taxonomy'] = [
    'title' => 'PLECO Related content and taxonomy',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['pleco_record|full'],
    /* @see _ef_pleco_components_related_content_and_taxonomy() */
    'function' => '_ef_pleco_components_related_content_and_taxonomy',
  ];

  $node_fields['ef_pleco_related_dossiers'] = [
    'title' => 'PLECO Related dossiers',
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'ui_limit' => ['pleco_record|full'],
    /* @see _ef_pleco_components_related_dossiers() */
    'function' => '_ef_pleco_components_related_dossiers',
  ];

  return ['node' => $node_fields];
}

/**
 * Display Suite field callback.
 *
 * @param array $field
 *   Display suite field definition.
 *
 * @return string
 */
function _ef_pleco_components_record_metadata_inline(array $field) {

  $entity = $field['entity'];
  $entity_type = $field['entity_type'];

  $parts = [];

  // Publication date.
  module_load_include('ds_fields_info.inc', 'publication_date');
  $parts[] = publication_date_render_published_at_field(
    [
      'entity' => $entity,
      'formatter' => 'publication_date_ef_date_format',
    ]);

  // Content type ("Platform economy record")
  $parts[] = t('Platform economy record');

  foreach ([
    'field_pleco_platforms',
    'field_pleco_work_typologies',
    'field_pleco_record_types',
  ] as $field_name) {
    $field_element = field_view_field(
      $entity_type,
      $entity,
      $field_name,
      [
        'label' => 'hidden',
        'type' => 'ds_taxonomy_separator_localized',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
      ]);

    $field_parts = [];
    foreach (element_children($field_element) as $field_item_delta) {
      $field_item_part = drupal_render($field_element[$field_item_delta]);
      if ('' === $field_item_part) {
        continue;
      }
      $field_parts[] = $field_item_part;
    }

    if ([] === $field_parts) {
      return;
    }

    $parts[] = implode(', ', $field_parts);
  }

  foreach ($parts as &$part) {
    $part = '<span class="__item">' . $part . '</span>';
  }

  // Add a separator. This will be hidden, but it will appear in copy+paste.
  $separator = '<span class="__separator"> | </span>';

  drupal_add_css(drupal_get_path('module', 'ef_pleco_components') . '/css/ef_pleco_components.record_metadata_inline.css');

  return ''
    . '<div class="ef-pleco-record-metadata-inline">'
    . implode($separator, $parts)
    . '</div>';
}

/**
 * Display Suite field callback.
 *
 * @param array $field
 *
 * @return string
 */
function _ef_pleco_components_related_content_and_taxonomy(array $field) {

  $entityDisplay = EntityDisplay_EfRelatedEntities::relatedEntities();

  $element = $entityDisplay->buildEntity(
    $field['entity_type'],
    $field['entity']);

  return drupal_render($element);
}

/**
 * Display Suite field callback.
 *
 * @param array $field
 *
 * @return string
 */
function _ef_pleco_components_related_dossiers(array $field) {

  $entityDisplay = EntityDisplay_EfRelatedEntities::relatedDossiers();

  $element = $entityDisplay->buildEntity(
    $field['entity_type'],
    $field['entity']);

  return drupal_render($element);
}
