<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\renderkit\EntityDisplay\EntityDisplayBase;

class EntityDisplay_SubscriptionBox extends EntityDisplayBase {

  /**
   * @var string
   */
  private $linkFieldName;

  /**
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  public static function createDefault() {
    return new self('field_pleco_subscription_link');
  }

  /**
   * @param string $linkFieldName
   */
  public function __construct($linkFieldName) {
    $this->linkFieldName = $linkFieldName;
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

    if (empty($entity->{$this->linkFieldName})) {
      return [];
    }

    foreach (field_get_items($entity_type, $entity, $this->linkFieldName) ?: [] as $item) {

    }

    $linkElement = $this->linkDisplay->buildEntity($entity_type, $entity);
    if (empty($linkElement)) {
      return [];
    }
    $boxElement = ['link' => $linkElement];
    $boxElement['#theme_wrappers'][] = 'themekit_container';
    $boxElement['#attributes']['class'][] = 'ef-pleco-subscription-box';
    $boxElement['#attached']['css'][] = drupal_get_path('module', 'pleco_components') . '/css/ef_pleco_components.subscription_box.css';
    return $boxElement;
  }
}
