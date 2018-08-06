<?php

/**
 * Implements hook_field_group_formatter_info().
 *
 * @return array[][]
 *   Format: $['display'|'form'][$formatter_machine_name] = $formatter_definition
 */
function ef_pleco_components_field_group_formatter_info() {
  $definitionss = [];
  /* @see field_group_pre_render_ef_pleco_keyvaluetable() */
  $definitionss['display']['ef_pleco_keyvaluetable'] = [
    'label' => 'EF PLECO: Key-value table',
    'instance_settings' => [],
  ];
  /* @see field_group_pre_render_ef_pleco_inline_with_separator() */
  $definitionss['display']['ef_pleco_inline_with_separator'] = [
    'label' => 'EF PLECO: Inline, with separator',
    'instance_settings' => [],
  ];
  /* @see field_group_pre_render_ef_pleco_chain_of_responsibility() */
  $definitionss['display']['ef_pleco_chain_of_responsibility'] = [
    'label' => 'EF PLECO: Chain of responsibility',
    'instance_settings' => [],
  ];
  /* @see field_group_pre_render_ef_pleco_comments_collapsible() */
  $definitionss['display']['ef_pleco_comments_collapsible'] = [
    'label' => 'EF PLECO: Comments, collapsible',
    'instance_settings' => [],
  ];
  return $definitionss;
}

/**
 * @param array $element
 * @param object $group
 * @param array $form
 */
function field_group_pre_render_ef_pleco_keyvaluetable(array &$element, $group, array &$form) {

  $element['#theme'] = 'ef_pleco_keyvaluetable';
  $element['#title'] = $group->label;

  $element['#attached']['css'][] = drupal_get_path('module', 'ef_pleco_components') . '/css/ef_pleco_components.keyvaluetable.css';
}

/**
 * @param array $group_element
 * @param object $group
 * @param array $form
 */
function field_group_pre_render_ef_pleco_inline_with_separator(array &$group_element, $group, array &$form) {

  foreach (element_children($group_element) as $k) {
    $field_element =& $group_element[$k];
    $field_element['#theme'] = NULL;
    $field_element['#theme_wrappers'][] = 'themekit_container';
    $field_element['#tag_name'] = 'div';
    $field_element['#attributes']['class'][] = '__item';
    $field_element['#attributes']['class'][] = 'field-name-' . str_replace('_', '-', $k);
  }

  $group_element['#theme'] = 'themekit_separator_list';
  $group_element['#separator'] = '<div class="__separator"> | </div>';
  $group_element['#theme_wrappers'][] = 'container';
  $group_element['#attributes']['class'][] = 'ef-pleco-record-metadata-inline';
  $group_element['#attached']['css'][] = _ef_pleco_components_file('css', 'record_metadata_inline');
}

/**
 * @param array $element
 * @param object $group
 * @param array $form
 */
function field_group_pre_render_ef_pleco_chain_of_responsibility(array &$element, $group, array &$form) {

  $html = '';
  foreach (element_children($element) as $k) {
    if ('' === $html) {
      $html = drupal_render($element[$k]);
    }
    unset($element[$k]);
  }

  $element['content']['#markup'] = $html;
}

/**
 * @param array $element
 *   The field group form element.
 * @param object $group
 *   The Field group object prepared for pre_render.
 * @param array $form
 *   The root element or form.
 */
function field_group_pre_render_ef_pleco_comments_collapsible(array &$element, $group, array &$form) {
  $element['#theme_wrappers'][] = 'ef_pleco_comments_collapsible';
}
