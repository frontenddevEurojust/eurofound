<?php

/**
 * @param array $variables
 */
function template_preprocess_ef_pleco_keyvaluetable(array &$variables) {

  $group_element = $variables['element'];

  $variables['title_markup'] = check_plain($group_element['#title']);

  $rows = array();
  foreach (element_children($group_element, TRUE) as $fieldname) {
    $field_element = $group_element[$fieldname];
    if (NULL === $field_element) {
      continue;
    }
    $title = '';
    if (array_key_exists('#title', $field_element)) {
      $title = $field_element['#title'];
    }
    $field_element['#label_display'] = 'hidden';
    unset($field_element['#theme']);
    $rows[] = [
      'label_markup' => check_plain($title),
      'content_markup' => drupal_render($field_element)
    ];
  }

  $variables['rows'] = $rows;
}

/**
 * @param array $variables
 */
function template_preprocess_ef_pleco_related_entity(array &$variables) {

  $element = $variables['element'];

  $variables['title_link_markup'] = drupal_render($element['title']);

  $meta_parts = [];
  if (!empty($element['meta'])) {
    foreach (element_children($element['meta']) as $delta) {
      $meta_part = drupal_render($element['meta'][$delta]);
      if ('' !== $meta_part) {
        $meta_parts[] = $meta_part;
      }
    }
  }

  $variables['meta_parts'] = $meta_parts;
}

/**
 * @param array $variables
 */
function template_preprocess_ef_pleco_block_with_title(array &$variables) {

  $element = $variables['element'];

  $variables['children'] = $element['#children'];
  $variables['title'] = $element['#title'];
}
