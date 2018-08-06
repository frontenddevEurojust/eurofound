<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\renderkit\EntityDisplay\EntityDisplayBase;
use Drupal\renderkit\EntityDisplay\EntityDisplayInterface;

/**
 * @CfrPlugin("paragraphSection", "Paragraph section")
 */
class EntityDisplay_ParagraphSection extends EntityDisplayBase {

  /**
   * @var \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  private $titleDisplay;

  /**
   * @var \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  private $contentDisplay;

  /**
   * @param \Drupal\renderkit\EntityDisplay\EntityDisplayInterface $titleDisplay
   * @param \Drupal\renderkit\EntityDisplay\EntityDisplayInterface $contentDisplay
   */
  public function __construct(EntityDisplayInterface $titleDisplay, EntityDisplayInterface $contentDisplay) {
    $this->titleDisplay = $titleDisplay;
    $this->contentDisplay = $contentDisplay;
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
    $titleElement = $this->titleDisplay->buildEntity($entity_type, $entity);
    $contentElement = $this->contentDisplay->buildEntity($entity_type, $entity);
    return [
      '#theme' => 'ef_pleco_paragraph_section',
      '#title_markup' => drupal_render($titleElement),
      '#content_markup' => drupal_render($contentElement),
    ];
  }
}
