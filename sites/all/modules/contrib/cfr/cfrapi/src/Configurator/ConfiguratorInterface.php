<?php

namespace Drupal\cfrapi\Configurator;

use Drupal\cfrapi\ConfToValue\ConfToValueInterface;
use Drupal\cfrapi\RawConfigurator\RawConfiguratorInterface;

interface ConfiguratorInterface extends RawConfiguratorInterface, ConfToValueInterface {

}
