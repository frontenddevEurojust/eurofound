<?php

namespace Drupal\renderkit\ListFormat;

use Drupal\renderkit\Configurator\Configurator_ListSeparator;
use Drupal\cfrreflection\Configurator\Configurator_CallbackConfigurable;

/**
 * Concatenates the list items with a separator.
 */
class ListFormat_Separator implements ListFormatInterface {

  /**
   * @var string
   */
  private $separator;

  /**
   * @CfrPlugin(
   *   id = "separator",
   *   label = @t("Separator")
   * )
   *
   * @return \Drupal\cfrapi\Configurator\ConfiguratorInterface
   */
  public static function createConfigurator() {
    $configurators = [
      new Configurator_ListSeparator(),
    ];
    $labels = [t('Separator')];
    return Configurator_CallbackConfigurable::createFromClassName(__CLASS__, $configurators, $labels);
  }

  /**
   * @param string $separator
   */
  public function __construct($separator = '') {
    $this->separator = $separator;
  }

  /**
   * @param array[] $builds
   *   Array of render arrays for list items.
   *   Must not contain any property keys like "#..".
   *
   * @return array
   *   Render array for the list.
   */
  public function buildList(array $builds) {
    return [
      /* @see renderkit_theme() */
      /* @see theme_themekit_separator_list() */
      '#theme' => 'themekit_separator_list',
      '#separator' => $this->separator,
    ] + $builds;
  }
}
