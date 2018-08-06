<?php

namespace Drupal\ef_pleco_components\ListFormat;

use Drupal\renderkit\ListFormat\ListFormatInterface;

/**
 * @CfrPlugin("passthru", "Passthru")
 */
class ListFormat_Passthru implements ListFormatInterface {

  /**
   * @param array[] $builds
   *   Array of render arrays for list items.
   *   Must not contain any property keys like "#..".
   *
   * @return array
   *   Render array for the list.
   */
  public function buildList(array $builds) {
    foreach (element_properties($builds) as $key) {
      // This should not happen, but...
      unset($builds[$key]);
    }
    return $builds;
  }
}
