<?php

namespace Drupal\ef_pleco_components\ListFormat;

use Drupal\renderkit\ListFormat\ListFormat_ElementDefaults;
use Drupal\renderkit\ListFormat\ListFormat_HtmlList;
use Drupal\renderkit\ListFormat\ListFormatInterface;

class ListFormat_RelatedDossiers implements ListFormatInterface {

  public static function referencedPageLinks() {
    $lf = ListFormat_HtmlList::ul('');
    $lf = new ListFormat_ElementDefaults(
      [
        '#type' => 'themekit_item_list',
      ]);
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
    // TODO: Implement buildList() method.
  }
}
