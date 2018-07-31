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
 *
 * @return string
 * @throws \Exception
 */
function theme_ef_pleco_keyvaluetable_(array $variables) {

  $group_element = $variables['element'];

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
    $rows[] = array($title, drupal_render($field_element));
  }

  foreach ($rows as $i_row => $row) {
    $rows[$i_row] = array(
      'no_striping' => TRUE,
      'data' => $row,
    );
  }

  $table_variables = array(
    'rows' => $rows,
  );

  if (isset($group_element['#title'])) {
    $table_variables['caption'] = $group_element['#title'];
  }

  if (isset($group_element['#attributes'])) {
    $table_variables['attributes'] = $group_element['#attributes'];
  }

  /* @see theme_table() */
  return theme('table', $table_variables);
}

/**
 * @param array $variables
 *
 * @return string
 * @throws \Exception
 */
function theme_ef_pleco_keyvaluetable__(array $variables) {

  $groupElement = $variables['element'];

  $rows = array();
  foreach (element_children($groupElement, TRUE) as $fieldname) {
    $fieldElement = $groupElement[$fieldname];
    if (NULL === $fieldElement) {
      continue;
    }
    $title = '';
    if (array_key_exists('#title', $fieldElement)) {
      $title = $fieldElement['#title'];
    }
    $fieldElement['#label_display'] = 'hidden';
    $rows[] = array($title, drupal_render($fieldElement));
  }
  foreach ($rows as $iRow => $row) {
    $rows[$iRow] = array(
      'no_striping' => TRUE,
      'data' => $row,
    );
  }

  $tableVariables = array(
    'rows' => $rows,
  );

  if (isset($groupElement['#title'])) {
    $tableVariables['caption'] = $groupElement['#title'];
  }

  if (isset($groupElement['#attributes'])) {
    $tableVariables['attributes'] = $groupElement['#attributes'];
  }

  /* @see theme_table() */
  return theme('table', $tableVariables);
}
