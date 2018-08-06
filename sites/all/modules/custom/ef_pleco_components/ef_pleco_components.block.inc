<?php

use Drupal\ef_pleco_components\BuildProvider\BuildProvider_PlecoTabs;
use Drupal\ef_pleco_components\BuildProvider\BuildProvider_ViewsExposedForm;
use Drupal\ef_pleco_components\LabeledElement\LabeledElement_Composite;
use Drupal\renderkit\BuildProvider\BuildProvider_BlockContent;
use Drupal\renderkit\BuildProvider\BuildProvider_ViewsDisplay;

/**
 * Implements hook_block_info().
 */
function ef_pleco_components_block_info() {
  $blocks = [];

  $blocks['landing_search'] = [
    'info' => t('PLECO Landing search'),
    'cache' => DRUPAL_NO_CACHE
  ];

  $blocks['landing_tabs'] = [
    'info' => t('PLECO landing page tabs'),
    'cache' => DRUPAL_NO_CACHE,
  ];

  return $blocks;
}

/**
 * @param string $delta
 *
 * @return array
 */
function ef_pleco_components_block_view($delta = '') {

  switch ($delta) {

    case 'landing_search':
      return _ef_pleco_components_block_view__landing_search();

    case 'landing_tabs':
      return _ef_pleco_components_block_view__landing_tabs();

    default:
      return [];
  }
}

/**
 * @return array
 */
function _ef_pleco_components_block_view__landing_search() {

  $buildProvider = BuildProvider_ViewsExposedForm::doCreate(
    'pleco_records:landing_page_search',
    'data/platform-economy/records');

  if (NULL === $buildProvider) {
    return [];
  }

  $element = $buildProvider->build();

  return [
    'content' => $element,
  ];
}

/**
 * @return array
 */
function _ef_pleco_components_block_view__landing_tabs() {

  $buildProvider = new BuildProvider_PlecoTabs(
    [
      // Sequence item #0
      LabeledElement_Composite::create(
        'Latest',
        BuildProvider_ViewsDisplay::doCreate(
          'pleco_records:landing_page_latest',
          NULL)),

      // Sequence item #1
      LabeledElement_Composite::create(
        'Search',
        BuildProvider_ViewsExposedForm::doCreate(
          'pleco_records:landing_page_search',
          'data/platform-economy/records')),
    ]);

  $element = $buildProvider->build();

  return [
    'content' => $element,
  ];
}
