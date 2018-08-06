<?php

/**
 * Implements hook_ds_field_theme_functions_info().
 */
function ef_pleco_components_ds_field_theme_functions_info() {
  return [
    /* @see _ef_pleco_ds_field_items_comma() */
    '_ef_pleco_ds_field_items_comma' => 'Minimal, separated by comma (EF PLECO)',
    /* @see _ef_pleco_ds_field_items_landing_dossiers() */
    '_ef_pleco_ds_field_items_landing_dossiers' => 'PLECO landing dossiers',
    /* @see _ef_pleco_ds_field_items_landing_dossiers_readmore() */
    '_ef_pleco_ds_field_items_landing_dossiers_readmore' => 'PLECO landing dossiers read-more',
    /* @see _ef_pleco_ds_field_items_label_dash_text() */
    '_ef_pleco_ds_field_items_label_dash_text' => 'PLECO "[label] - [text]"',
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
 * @param array $variables
 *
 * @return string
 *
 * @see theme_ds_field_minimal()
 */
function _ef_pleco_ds_field_items_landing_dossiers(array $variables) {

  $elements = $variables['items'];
  $elements['#theme'] = 'themekit_item_list';
  $elements['#attributes']['class'][] = 'ef-pleco-landing-dossiers';
  $elements['#attached']['css'][] = _ef_pleco_components_file('css', 'landing_dossiers');

  return drupal_render($elements);
}

/**
 * @param array $variables
 *
 * @return string
 *
 * @see theme_ds_field_minimal()
 */
function _ef_pleco_ds_field_items_landing_dossiers_readmore(array $variables) {

  $elements = $variables['items'];
  $elements['#theme_wrappers'][] = 'container';
  $elements['#attributes']['class'][] = 'ef-pleco-landing-dossiers-readmore';
  $elements['#attached']['css'][] = _ef_pleco_components_file('css', 'landing_dossiers');

  return drupal_render($elements);
}

/**
 * @param array $variables
 *
 * @return string
 *
 * @see theme_ds_field_minimal()
 */
function _ef_pleco_ds_field_items_label_dash_text(array $variables) {
  $config = $variables['ds-config'];
  $classes = isset($config['classes'])
    ? ' ' . $config['classes']
    : '';

  $output = '';

  // Render the label.
  if (!$variables['label_hidden']) {

    $label_output = $variables['label'];

    if (!isset($config['lb-col'])) {
      $label_output .= ':&nbsp;';
    }

    $label_output .= '&nbsp; &mdash; &nbsp;';
    $output .=  '<span class="ef-pleco-label-with-dash">' . $label_output . '</span>';
  }

  // Render the items.
  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }

  $field_name_as_class_part = str_replace('_', '-', $variables['element']['#field_name']);

  drupal_add_css(_ef_pleco_components_file('css', 'common'));

  return ''
    . '<div class="field field-name-' . $field_name_as_class_part . $classes . '">'
    . $output
    . '</div>';
}
