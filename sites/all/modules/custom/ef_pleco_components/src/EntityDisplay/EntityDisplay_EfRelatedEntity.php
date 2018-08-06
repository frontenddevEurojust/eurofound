<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\cfrapi\Context\CfrContextInterface;
use Drupal\cfrreflection\Configurator\Configurator_CallbackConfigurable;
use Drupal\renderkit\EntityBuildProcessor\EntityBuildProcessor_Wrapper_ContextualLinks;
use Drupal\renderkit\EntityBuildProcessor\EntityBuildProcessor_Wrapper_LinkToEntity;
use Drupal\renderkit\EntityDisplay\Decorator\EntityDisplay_WithEntityBuildProcessor;
use Drupal\renderkit\EntityDisplay\EntityDisplay;
use Drupal\renderkit\EntityDisplay\EntityDisplay_DsField;
use Drupal\renderkit\EntityDisplay\EntityDisplay_Title;
use Drupal\renderkit\EntityDisplay\EntityDisplayBase;
use Drupal\renderkit\EntityDisplay\EntityDisplayInterface;
use Drupal\renderkit\FieldDisplayProcessor\FieldDisplayProcessor_PluginFactoryUtil;

class EntityDisplay_EfRelatedEntity extends EntityDisplayBase {

  /**
   * @var \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  private $titleLinkDisplay;

  /**
   * @var \Drupal\renderkit\EntityDisplay\EntityDisplayInterface[]
   */
  private $metaDisplays;

  /**
   * @CfrPlugin("efRelatedEntityDefault", "EF Related Entity, default")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   *
   * See http://ef2.loc/admin/reports/cfrplugin/Drupal.renderkit.EntityDisplay.EntityDisplayInterface/demo?plugin%5Bid%5D=ef_pleco_components.efRelatedEntity&plugin%5Boptions%5D%5B0%5D%5Bid%5D=renderkit.title&plugin%5Boptions%5D%5B0%5D%5Boptions%5D%5Btag_name%5D=&plugin%5Boptions%5D%5B0%5D%5Boptions%5D%5Blink%5D=1&plugin%5Boptions%5D%5B1%5D%5B0%5D%5Bid%5D=ef_pleco_components.countryName&plugin%5Boptions%5D%5B1%5D%5B1%5D%5Bid%5D=ef_pleco_components.bundleLabel&plugin%5Boptions%5D%5B1%5D%5B2%5D%5Bid%5D=renderkit.dsField&plugin%5Boptions%5D%5B1%5D%5B2%5D%5Boptions%5D%5B0%5D%5Bfield%5D=node%3Apublished_on&plugin%5Boptions%5D%5B1%5D%5B2%5D%5Boptions%5D%5B0%5D%5Bdisplay%5D%5Bformat%5D=publication_date_short&plugin%5Boptions%5D%5B1%5D%5B2%5D%5Boptions%5D%5B1%5D=hidden&plugin%5Boptions%5D%5B1%5D%5B2%5D%5Boptions%5D%5B2%5D%5Bid%5D=renderkit.fullResetDefault
   */
  public static function createDefault() {

    return new EntityDisplay_EfRelatedEntity(
      new EntityDisplay_WithEntityBuildProcessor(
        new EntityDisplay_Title(),
        new EntityBuildProcessor_Wrapper_LinkToEntity()),
      [
        // Sequence item #0
        EntityDisplay_EfCountry::create(),

        // Sequence item #1
        EntityDisplay_BundleLabel::createWithSpanClass(),

        // Sequence item #2
        EntityDisplay_DsField::fromGroup(
          [
            'field' => 'node:published_on',
            'display' => [
              'format' => 'publication_date_short'
            ],
          ],
          'hidden',
          FieldDisplayProcessor_PluginFactoryUtil::fullResetDefault()),
      ]);
  }

  /**
   * @CfrPlugin("efRelatedEntity", "EF Related Entity")
   *
   * @param \Drupal\cfrapi\Context\CfrContextInterface|null $context
   *
   * @return \Drupal\cfrapi\Configurator\ConfiguratorInterface
   */
  public static function plugin(CfrContextInterface $context = NULL) {
    return Configurator_CallbackConfigurable::createFromClassName(
      self::class,
      [
        EntityDisplay::configurator($context),
        EntityDisplay::sequenceConfigurator($context),
      ],
      [
        t('Title link display'),
        t('Meta displays'),
      ]);
  }

  /**
   * @param \Drupal\renderkit\EntityDisplay\EntityDisplayInterface $titleLinkDisplay
   * @param \Drupal\renderkit\EntityDisplay\EntityDisplayInterface[] $metaDisplays
   */
  public function __construct(EntityDisplayInterface $titleLinkDisplay, array $metaDisplays) {
    $this->titleLinkDisplay = $titleLinkDisplay;
    $this->metaDisplays = $metaDisplays;
  }

  /**
   * Same as ->buildEntities(), just for a single entity.
   *
   * @param string $entity_type
   *   E.g. 'node' or 'taxonomy_term'.
   * @param object $entity
   *   Single entity object for which to build a render arary.
   *
   * @return array
   *
   * @see \Drupal\renderkit\EntityDisplay\EntityDisplayInterface::buildEntity()
   */
  public function buildEntity($entity_type, $entity) {

    $titleLinkElement = $this->titleLinkDisplay->buildEntity($entity_type, $entity);

    $metaElements = [];
    foreach ($this->metaDisplays as $metaDisplay) {
      $metaElements[] = $metaDisplay->buildEntity($entity_type, $entity);
    }

    $element = [
      /* @see \template_preprocess_ef_pleco_related_entity() */
      '#theme' => 'ef_pleco_related_entity',
      'title' => $titleLinkElement,
      'meta' => $metaElements,
    ];

    $element['#attached']['css'][] = drupal_get_path('module', 'ef_pleco_components') . '/css/ef_pleco_components.related_entity.css';

    return $element;
  }
}
