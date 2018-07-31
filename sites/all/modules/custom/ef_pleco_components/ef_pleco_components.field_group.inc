<?php

/**
 * Implements hook_field_group_formatter_info().
 *
 * @return array[][]
 *   Format: $['display'|'form'][$formatter_machine_name] = $formatter_definition
 */
function ef_pleco_components_field_group_formatter_info() {
  $definitionss = [];
  $definitionss['display']['ef_pleco_keyvaluetable'] = [
    'label' => 'EF PLECO: Key-value table',
    'instance_settings' => [],
  ];
  $definitionss['display']['ef_pleco_inline_with_separator'] = [
    'label' => 'EF PLECO: Inline, with separator',
    'instance_settings' => [],
  ];
  return $definitionss;
}

/**
 * @param array $element
 * @param object $group
 * @param array $form
 */
function field_group_pre_render_ef_pleco_keyvaluetable__(array &$element, $group, array &$form) {

  $element['#theme_wrappers'][] = 'container';
  $element['#attributes']['class'][] = 'ef-pleco-keyvaluetable';
  $element['#attached']['css'][] = drupal_get_path('module', 'ef_pleco_components') . '/css/ef_pleco_components.keyvaluetable.css';

  /*
  if ($this->titleIsVisible) {
    $groupElement['#title'] = $group->label;
  }

  $groupElement += array('#attributes' => array());
  $groupElement['#attributes'] += $this->attributes;
  $groupElement['#attributes']['class'] += $this->attributes['class'];
  */
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
 * @param array $element
 * @param object $group
 * @param array $form
 */
function field_group_pre_render_ef_pleco_inline_with_separator(array &$element, $group, array &$form) {

  $listElements = array();

  foreach (element_children($element) as $k) {
    $listElements[$k] = $element[$k];
  }

  $entityType = $form['#fieldgroupcfr_entity_type'];
  $entity = $form['#fieldgroupcfr_entity'];
  $label = $group->label;
  $element = $this->labeledEntityDisplayListFormat->build($listElements, $entityType, $entity, $label);
}
