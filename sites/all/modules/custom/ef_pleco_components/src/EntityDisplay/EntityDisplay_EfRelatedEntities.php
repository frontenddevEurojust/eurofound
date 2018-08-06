<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\ef_pleco_components\ListFormat\ListFormat_Passthru;
use Drupal\renderkit\EntitiesListFormat\EntitiesListFormat_ListFormat;
use Drupal\renderkit\EntityDisplay\Decorator\EntityDisplay_RelatedEntity;
use Drupal\renderkit\EntityDisplay\EntityDisplay_ListOfRelatedEntities;
use Drupal\renderkit\EntityDisplay\EntityDisplay_Sequence;
use Drupal\renderkit\EntityDisplay\EntityDisplay_ViewModeOneType;
use Drupal\renderkit\EntityDisplay\EntityDisplayInterface;
use Drupal\renderkit\EntityToEntities\EntityToEntities_EntityReferenceField;
use Drupal\renderkit\EntityToEntity\EntityToEntity_EntityReferenceField;

abstract class EntityDisplay_EfRelatedEntities implements EntityDisplayInterface {

  /**
   * @CfrPlugin("relatedDossiers", "Related dossiers")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  public static function relatedDossiers() {
    return self::relatedByField('field_pleco_related_dossiers');
  }

  /**
   * @CfrPlugin("relatedEntities", "Related content and taxonomy")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  public static function relatedEntities() {
    return new EntityDisplay_Sequence(
      [
        self::relatedTerms(),
        self::relatedNodes(),
      ]);
  }

  /**
   * @CfrPlugin("relatedNodes", "Related nodes")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  public static function relatedNodes() {
    return self::relatedByField('field_ef_related_content');
  }

  /**
   * @CfrPlugin("relatedNodes", "Related terms")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  public static function relatedTerms() {
    return self::relatedByField('field_related_taxonomy');
  }

  /**
   * @param string $field_name
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   *
   * See http://ef2.loc/admin/reports/cfrplugin/Drupal.renderkit.EntityDisplay.EntityDisplayInterface/demo?plugin%5Bid%5D=renderkit.listOfRelatedEntities&plugin%5Boptions%5D%5B0%5D%5Bid%5D=renderkit.entityReferenceField&plugin%5Boptions%5D%5B0%5D%5Boptions%5D%5B0%5D=field_related_taxonomy&plugin%5Boptions%5D%5B1%5D%5Bid%5D=renderkit.listFormat&plugin%5Boptions%5D%5B1%5D%5Boptions%5D%5B0%5D%5Bid%5D=ef_pleco_components.efRelatedEntityDefault&plugin%5Boptions%5D%5B1%5D%5Boptions%5D%5B1%5D%5Bid%5D=ef_pleco_components.passthru
   */
  private static function relatedByField($field_name) {

    return new EntityDisplay_ListOfRelatedEntities(
      EntityToEntities_EntityReferenceField::create($field_name),
      new EntitiesListFormat_ListFormat(
        EntityDisplay_EfRelatedEntity::createDefault(),
        new ListFormat_Passthru()));
  }

}
