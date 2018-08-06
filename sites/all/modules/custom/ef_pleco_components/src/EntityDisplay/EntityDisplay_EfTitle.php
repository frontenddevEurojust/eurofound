<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\renderkit\EntityDisplay\EntityDisplay_FieldWithFormatter;
use Drupal\renderkit\EntityDisplay\EntityDisplay_Title;
use Drupal\renderkit\EntityDisplay\Switcher\EntityDisplay_ChainOfResponsibility;
use Drupal\renderkit\FieldDisplayProcessor\FieldDisplayProcessor_PluginFactoryUtil;

class EntityDisplay_EfTitle {


  /**
   * @CfrPlugin("efTitle", "EF entity title")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  public static function create() {

    return new EntityDisplay_ChainOfResponsibility(
      [
        // Sequence item #0
        new EntityDisplay_FieldWithFormatter(
          'title_field',
          [
            'type' => 'text_plain',
            'settings' => [],
            'label' => 'hidden'
          ],
          FieldDisplayProcessor_PluginFactoryUtil::fullResetDefault()),

        // Sequence item #1
        new EntityDisplay_Title(),
      ]);
  }

}
