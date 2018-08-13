<?php

namespace Drupal\cfrplugindiscovery\ClassFileToDefinitions;

interface ClassFileToDefinitionsInterface {

  /**
   * @param string $class
   * @param string $file
   *
   * @return array[][]
   *   Format: $[$pluginType][$pluginId] = $pluginDefinition
   */
  public function classFileGetDefinitions($class, $file);

}
