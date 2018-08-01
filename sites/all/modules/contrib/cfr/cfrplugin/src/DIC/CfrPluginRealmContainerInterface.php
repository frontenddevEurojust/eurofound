<?php

namespace Drupal\cfrplugin\DIC;

use Drupal\cfrrealm\Container\CfrRealmContainerInterface;

/**
 * @property \Drupal\cfrrealm\DefinitionsByTypeAndId\DefinitionsByTypeAndIdInterface $definitionsByTypeAndId
 *
 * Part of the cycle using reflection:
 * @property \Drupal\cfrreflection\CfrGen\CallbackToConfigurator\CallbackToConfiguratorInterface $callbackToConfigurator
 * @property \Drupal\cfrreflection\CfrGen\ParamToConfigurator\ParamToConfiguratorInterface $paramToConfigurator
 * @property \Drupal\cfrreflection\ParamToLabel\ParamToLabelInterface $paramToLabel
 */
interface CfrPluginRealmContainerInterface extends CfrRealmContainerInterface {}
