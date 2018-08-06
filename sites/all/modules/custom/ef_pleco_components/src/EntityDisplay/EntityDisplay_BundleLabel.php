<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\renderkit\BuildProcessor\BuildProcessor_Container;
use Drupal\renderkit\EntityDisplay\Decorator\EntityDisplay_WithBuildProcessor;
use Drupal\renderkit\EntityDisplay\EntityDisplayBase;

/**
 * @CfrPlugin("bundleLabel", "Bundle label")
 */
class EntityDisplay_BundleLabel extends EntityDisplayBase {

  /**
   * @CfrPlugin("bundleLabelSpan", "Bundle label, with <span>")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   *
   * See http://ef2.loc/admin/reports/cfrplugin/Drupal.renderkit.EntityDisplay.EntityDisplayInterface/demo?plugin%5Bid%5D=renderkit.processedEntityDisplay&plugin%5Boptions%5D%5B0%5D%5Bid%5D=ef_pleco_components.bundleLabel&plugin%5Boptions%5D%5B1%5D%5Bid%5D=renderkit.buildProcessor/renderkit.container&plugin%5Boptions%5D%5B1%5D%5Boptions%5D%5B0%5D=span&plugin%5Boptions%5D%5B1%5D%5Boptions%5D%5B1%5D=__bundleLabel
   */
  public static function createWithSpanClass() {

    return EntityDisplay_WithBuildProcessor::create(
      new self(),
      BuildProcessor_Container::create('span', ['__bundleLabel']));
  }

  /**
   * Same as ->buildEntities(), just for a single entity.
   *
   * @param string $entity_type
   *   E.g. 'node' or 'taxonomy_term'.
   * @param object $entity
   *   Single entity object for which to build a render arary.
   *
   * @return array
   *
   * @see \Drupal\renderkit\EntityDisplay\EntityDisplayInterface::buildEntity()
   */
  public function buildEntity($entity_type, $entity) {
    $info = entity_get_info($entity_type);
    list(,, $bundle) = entity_extract_ids($entity_type, $entity);
    if (!isset($info['bundles'][$bundle]['label'])) {
      return [];
    }
    return ['#markup' => check_plain($info['bundles'][$bundle]['label'])];
  }
}
