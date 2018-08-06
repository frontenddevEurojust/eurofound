<?php

namespace Drupal\ef_pleco_components\EntityToEntities;

use Drupal\cfrreflection\Configurator\Configurator_CallbackMono;
use Drupal\renderkit\Configurator\Id\Configurator_FieldName;
use Drupal\renderkit\EntityToEntities\EntityToEntitiesBase;

class EntityToEntities_ParagraphsField extends EntityToEntitiesBase {

  /**
   * @var string
   */
  private $fieldName;

  /**
   * @CfrPlugin("paragraphsField", "Paragraphs field")
   *
   * @param string|null $entityType
   *   Contextual parameter
   * @param string|null $bundleName
   *   Contextual parameter
   *
   * @return \Drupal\cfrreflection\Configurator\Configurator_CallbackMono
   */
  public static function plugin($entityType = NULL, $bundleName = NULL) {
    return Configurator_CallbackMono::createFromClassName(
      self::class,
      new Configurator_FieldName(
        ['paragraphs'],
        $entityType,
        $bundleName));
  }

  /**
   * @param string $fieldName
   */
  public function __construct($fieldName) {
    $this->fieldName = $fieldName;
  }

  /**
   * @return string
   */
  public function getTargetEntityType() {
    return 'paragraphs_item';
  }

  /**
   * @param string $entityType
   * @param object $entity
   *
   * @return object[]
   */
  public function entityGetRelated($entityType, $entity) {

    $target_entities = [];
    foreach (field_get_items($entityType, $entity, $this->fieldName) ?: [] as $delta => $item) {

      if (FALSE === $paragraph = paragraphs_field_get_entity($item)) {
        continue;
      }

      try {
        $paragraph->setHostEntity($entityType, $entity, LANGUAGE_NONE);
      }
      catch (\Exception $e) {
        watchdog_exception(
          'ef_pleco_components',
          $e,
          'Exception trying to set host entity for paragraph item entity: '
          . '%type: !message in %function (line %line of %file).',
          [],
          WATCHDOG_WARNING);
        continue;
      }

      $target_entities[$delta] = $paragraph;
    }

    return $target_entities;
  }
}
