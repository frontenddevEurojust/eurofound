<?php

namespace Drupal\renderkit\LabeledEntityBuildProcessor;

interface LabeledEntityBuildProcessorInterface {

  /**
   * @param array $build
   * @param string $entityType
   * @param object $entity
   * @param string $label
   *
   * @return array
   */
  public function buildAddLabelWithEntity(array $build, $entityType, $entity, $label);

}
