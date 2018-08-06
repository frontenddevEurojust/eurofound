<?php

namespace Drupal\ef_pleco_components\EntitiesListFormat;

use Drupal\renderkit\EntitiesListFormat\EntitiesListFormatInterface;
use Drupal\renderkit\EntityDisplay\EntityDisplayInterface;

/**
 * @CfrPlugin("tabs", "PLECO Tabs")
 */
class EntitiesListFormat_Tabs implements EntitiesListFormatInterface {

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
   * Displays the entities as a list, e.g. as a table.
   *
   * @param string $entityType
   * @param object[] $entities
   *
   * @return array
   *   A render array.
   */
  public function entitiesBuildList($entityType, array $entities) {

    $titleElements = $this->titleDisplay->buildEntities($entityType, $entities);
    $contentElements = $this->contentDisplay->buildEntities($entityType, $entities);

    $tabs = [];
    foreach (array_intersect_key($titleElements, $contentElements) as $key => $titleElement) {
      $contentElement = $contentElements[$key];
      $tabs[] = [
        'title_markup' => drupal_render($titleElement),
        'content_markup' => drupal_render($contentElement),
      ];
    }

    return [
      '#theme' => 'ef_pleco_tabs',
      '#tabs' => $tabs,
      '#attached' => [
        'css' => [_ef_pleco_components_file('css', 'tabs')],
        'js' => [_ef_pleco_components_file('js', 'tabs')],
      ],
    ];
  }
}
