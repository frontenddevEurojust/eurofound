<?php

/**
 * Implements hook_ds_layout_info().
 */
function ef_pleco_components_ds_layout_info() {
  $path = drupal_get_path('module', 'ef_pleco_components') . '/layouts';
  $layouts = [];
  $layouts['ef_pleco_common'] = [
    'label' => 'EF PLECO Page',
    'path' => $path . '/ef_pleco_common',
    'regions' => [
      'ds_content' => t('Content'),
      'right' => t('Right column'),
    ],
    'css' => TRUE,
  ];
  $layouts['ef_pleco_paragraph_section'] = [
    'label' => 'EF PLECO Paragraph section',
    'path' => $path . '/ef_pleco_paragraph_section',
    'regions' => [
      'title' => t('Title'),
      'ds_content' => t('Content'),
    ],
    'css' => TRUE,
  ];
  return $layouts;
}
