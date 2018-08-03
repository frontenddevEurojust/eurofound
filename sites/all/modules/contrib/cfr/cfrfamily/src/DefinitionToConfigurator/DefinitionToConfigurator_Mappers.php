<?php

namespace Drupal\cfrfamily\DefinitionToConfigurator;

use Drupal\cfrapi\Context\CfrContextInterface;
use Drupal\cfrfamily\ArgDefToConfigurator\ArgDefToConfiguratorInterface;

class DefinitionToConfigurator_Mappers implements DefinitionToConfiguratorInterface {

  /**
   * @var \Drupal\cfrfamily\ArgDefToConfigurator\ArgDefToConfiguratorInterface[]
   */
  private $mappers;

  /**
   * @param string $key
   * @param \Drupal\cfrfamily\ArgDefToConfigurator\ArgDefToConfiguratorInterface $mapper
   */
  public function keySetMapper($key, ArgDefToConfiguratorInterface $mapper) {
    $this->mappers[$key] = $mapper;
  }

  /**
   * @param array $definition
   * @param \Drupal\cfrapi\Context\CfrContextInterface $context
   *
   * @return \Drupal\cfrapi\Configurator\ConfiguratorInterface|null
   */
  public function definitionGetConfigurator(array $definition, CfrContextInterface $context = NULL) {

    foreach ($this->mappers as $key => $mapper) {
      if (isset($definition[$key])) {
        return $mapper->argDefinitionGetConfigurator($definition[$key], $definition, $context);
      }
    }

    return NULL;
  }
}
