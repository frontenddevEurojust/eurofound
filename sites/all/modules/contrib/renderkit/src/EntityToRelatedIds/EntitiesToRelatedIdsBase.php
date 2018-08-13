<?php

namespace Drupal\renderkit\EntityToRelatedIds;

abstract class EntitiesToRelatedIdsBase implements EntityToRelatedIdsInterface {

  /**
   * @param string $entityType
   * @param object $entity
   *
   * @return int[]
   *   Format: $[] = $relatedEntityId
   */
  final public function entityGetRelatedIds($entityType, $entity) {
    $relatedIdsByDelta = $this->entitiesGetRelatedIds($entityType, [$entity]);
    return array_key_exists(0, $relatedIdsByDelta)
      ? $relatedIdsByDelta[0]
      : [];
  }
}
