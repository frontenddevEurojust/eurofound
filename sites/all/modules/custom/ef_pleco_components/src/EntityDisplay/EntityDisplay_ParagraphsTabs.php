<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\ef_pleco_components\EntitiesListFormat\EntitiesListFormat_Tabs;
use Drupal\ef_pleco_components\EntityToEntities\EntityToEntities_ParagraphsField;
use Drupal\renderkit\EntityDisplay\EntityDisplay_FieldWithFormatter;
use Drupal\renderkit\EntityDisplay\EntityDisplay_ListOfRelatedEntities;
use Drupal\renderkit\FieldDisplayProcessor\FieldDisplayProcessor_PluginFactoryUtil;

class EntityDisplay_ParagraphsTabs {

  /**
   * @CfrPlugin("paragraphsTabs", "PLECO Paragraphs tabs")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  public static function create() {

    return new EntityDisplay_ListOfRelatedEntities(
      new EntityToEntities_ParagraphsField('field_paragraphs'),
      new EntitiesListFormat_Tabs(
        EntityDisplay_EfTitle::create(),
        new EntityDisplay_FieldWithFormatter(
          'field_paragraph',
          [
            'type' => 'paragraphs_view',
            'settings' => ['view_mode' => 'full'],
            'label' => 'hidden'
          ],
          FieldDisplayProcessor_PluginFactoryUtil::fullResetDefault())));
  }

}
