<?php

namespace Drupal\cfrrealm\Container;

use Donquixote\Containerkit\Container\ContainerBase;
use Drupal\cfrfamily\DefinitionToLabel\DefinitionToLabel;
use Drupal\cfrfamily\DefinitionToLabel\DefinitionToLabel_FromModuleName;
use Drupal\cfrfamily\DefmapToCfrFamily\DefmapToCfrFamily;
use Drupal\cfrfamily\DefmapToCfrFamily\DefmapToCfrFamily_InlineExpanded;
use Drupal\cfrfamily\DefmapToContainer\DefmapToContainer;
use Drupal\cfrrealm\TypeToCfrFamily\TypeToCfrFamily_ViaDefmap;
use Drupal\cfrrealm\TypeToConfigurator\TypeToConfigurator_Buffer;
use Drupal\cfrrealm\TypeToConfigurator\TypeToConfigurator_ViaCfrFamily;
use Drupal\cfrrealm\TypeToContainer\TypeToContainer_Buffer;
use Drupal\cfrrealm\TypeToContainer\TypeToContainer_ViaDefmap;

/**
 * Contains services that are used throughout one configurator realm.
 */
abstract class CfrRealmContainerBase extends ContainerBase implements CfrRealmContainerInterface {

  /**
   * @return \Drupal\cfrrealm\TypeToConfigurator\TypeToConfiguratorInterface
   *
   * @see $typeToConfigurator
   */
  protected function get_typeToConfigurator() {
    $typeToConfigurator = new TypeToConfigurator_ViaCfrFamily($this->typeToCfrFamily);
    return new TypeToConfigurator_Buffer($typeToConfigurator);
  }

  /**
   * @return \Drupal\cfrrealm\TypeToCfrFamily\TypeToCfrFamilyInterface
   *
   * @see $typeToCfrFamily
   */
  protected function get_typeToCfrFamily() {
    return new TypeToCfrFamily_ViaDefmap($this->typeToDefmap, $this->defmapToCfrFamily);
  }

  /**
   * @return \Drupal\cfrfamily\DefmapToCfrFamily\DefmapToCfrFamilyInterface
   *
   * @see $defmapToCfrFamily
   */
  protected function get_defmapToCfrFamily() {
    return TRUE
      ? new DefmapToCfrFamily_InlineExpanded($this->definitionToConfigurator, $this->definitionToLabel, $this->definitionToGrouplabel)
      : new DefmapToCfrFamily($this->definitionToConfigurator, $this->definitionToLabel, $this->definitionToGrouplabel);
  }

  /**
   * @return \Drupal\cfrfamily\DefinitionToConfigurator\DefinitionToConfiguratorInterface
   *
   * @see $definitionToConfigurator
   */
  abstract protected function get_definitionToConfigurator();

  /**
   * @return \Drupal\cfrfamily\DefinitionToLabel\DefinitionToLabel
   *
   * @see $definitionToLabel
   */
  protected function get_definitionToLabel() {
    return DefinitionToLabel::create();
  }

  /**
   * @return \Drupal\cfrfamily\DefinitionToLabel\DefinitionToLabel_FromModuleName
   *
   * @see $definitionToGrouplabel
   */
  protected function get_definitionToGrouplabel() {
    return new DefinitionToLabel_FromModuleName();
  }

  /**
   * @return \Drupal\cfrrealm\TypeToDefmap\TypeToDefmapInterface
   *
   * @see $typeToDefmap
   */
  abstract protected function get_typeToDefmap();

  /**
   * @return \Drupal\cfrrealm\TypeToContainer\TypeToContainer_Buffer
   *
   * @see $typeToContainer
   */
  protected function get_typeToContainer() {
    $typeToContainer = new TypeToContainer_ViaDefmap($this->typeToDefmap, $this->defmapToContainer);
    return new TypeToContainer_Buffer($typeToContainer);
  }

  /**
   * @return \Drupal\cfrfamily\DefmapToContainer\DefmapToContainer
   *
   * @see $defmapToContainer
   */
  protected function get_defmapToContainer() {
    return new DefmapToContainer($this->definitionToConfigurator, $this->definitionToLabel, $this->definitionToGrouplabel);
  }

}
