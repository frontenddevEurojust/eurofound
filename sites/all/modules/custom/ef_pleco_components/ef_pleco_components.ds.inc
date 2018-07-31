<?php

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
