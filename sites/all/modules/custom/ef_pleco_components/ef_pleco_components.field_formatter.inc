<?php

/**
 * Implements hook_field_formatter_info().
 */
function ef_pleco_components_field_formatter_info() {

  $formatters = array();

  /* @see _ef_pleco_components_field_formatter_view__ef_pleco_subscription_box() */
  $formatters['ef_pleco_subscription_box'] = [
    'label' => t('PLECO Subscription box'),
    'description' => t('Box with a link for email subscription'),
    'field types' => ['link_field'],
  ];

  /* @see _ef_pleco_components_field_formatter_view__ef_pleco_landing_dossiers() */
  $formatters['ef_pleco_landing_dossiers'] = [
    'label' => 'PLECO landing dossiers',
    'description' => 'Dossiers links on PLECO landing page',
    'field types' => ['link_field'],
  ];

  $formatters['ef_pleco_paragraphs_tabs'] = [
    'label' => 'PLECO tabs',
    'description' => 'Paragraphs items as tabs. Only works in the correct paragraphs type.',
    'field types' => ['paragraphs'],
  ];

  return $formatters;
}

/**
 * Implements hook_field_formatter_view().
 *
 * @param string $entity_type
 * @param object $entity
 * @param array $field
 * @param array $instance
 * @param string $langcode
 * @param array[] $items
 * @param array $display
 *
 * @return array
 *
 * @see \link_field_formatter_view()
 */
function ef_pleco_components_field_formatter_view($entity_type, $entity, array $field, array $instance, $langcode, array $items, array $display) {

  $type = $display['type'];
  $function = '_ef_pleco_components_field_formatter_view__' . $type;
  if (function_exists($function)) {
    return $function($entity_type, $entity, $field, $instance, $langcode, $items, $display);
  }

  return [];
}


/**
 * Implements hook_field_formatter_view().
 *
 * @param string $entity_type
 * @param object $entity
 * @param array $field
 * @param array $instance
 * @param string $langcode
 * @param array[] $items
 * @param array $display
 *
 * @return array
 *
 * @see \link_field_formatter_view()
 */
function _ef_pleco_components_field_formatter_view__ef_pleco_subscription_box($entity_type, $entity, array $field, array $instance, $langcode, array $items, array $display) {

  $elements = array();
  foreach ($items as $delta => $item) {

    $title_unsafe = $item['title'];
    $url = $item['url'];

    $link_options = [];
    $link_options['attributes'] = [];

    $title_safe = check_plain($title_unsafe);
    $title_safe = '<i class="fa fa-envelope-o" aria-hidden="true"></i> ' . $title_safe;
    $link_options['html'] = TRUE;

    $elements[$delta] = [
      '#theme' => 'link',
      '#text' => $title_safe,
      '#path' => $url,
      '#options' => $link_options,
    ];
  }

  $elements['#theme_wrappers'][] = 'container';
  $elements['#attributes']['class'][] = 'ef-pleco-subscription-box';
  $elements['#attached']['css'][] = drupal_get_path('module', 'ef_pleco_components') . '/css/ef_pleco_components.subscription_box.css';

  $elements['#theme'] = NULL;

  return $elements;
}

/**
 * Implements hook_field_formatter_view().
 *
 * @param string $entity_type
 * @param object $entity
 * @param array $field
 * @param array $instance
 * @param string $langcode
 * @param array[] $items
 * @param array $display
 *
 * @return array
 *
 * @see \link_field_formatter_view()
 */
function _ef_pleco_components_field_formatter_view__ef_pleco_landing_dossiers($entity_type, $entity, array $field, array $instance, $langcode, array $items, array $display) {

  $elements = array();
  foreach ($items as $delta => $item) {

    $title_unsafe = $item['title'];
    $url = $item['url'];

    $link_options = [];
    $link_options['attributes'] = [];

    $title_safe = check_plain($title_unsafe);
    $title_safe = '<i class="fa fa-envelope-o" aria-hidden="true"></i> ' . $title_safe;
    $link_options['html'] = TRUE;

    $elements[$delta] = [
      '#theme' => 'link',
      '#text' => $title_safe,
      '#path' => $url,
      '#options' => $link_options,
    ];
  }

  $elements['#theme'] = 'themekit_item_list';
  $elements['#attributes']['class'][] = 'ef-pleco-landing-dossiers';
  $elements['#attached']['css'][] = drupal_get_path('module', 'ef_pleco_components') . '/css/ef_pleco_components.landing_dossiers.css';

  return $elements;
}
