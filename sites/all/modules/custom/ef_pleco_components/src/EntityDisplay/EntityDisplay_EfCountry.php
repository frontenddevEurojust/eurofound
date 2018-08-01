<?php

namespace Drupal\ef_pleco_components\EntityDisplay;

use Drupal\renderkit\BuildProcessor\BuildProcessor_Container;
use Drupal\renderkit\EntityDisplay\Decorator\EntityDisplay_WithBuildProcessor;
use Drupal\renderkit\EntityDisplay\EntityDisplay_FieldWithFormatter;
use Drupal\renderkit\EntityDisplay\EntityDisplayInterface;
use Drupal\renderkit\EntityDisplay\Switcher\EntityDisplay_ChainOfResponsibility;
use Drupal\renderkit\FieldDisplayProcessor\FieldDisplayProcessor_PluginFactoryUtil;

abstract class EntityDisplay_EfCountry implements EntityDisplayInterface {

  /**
   * @CfrPlugin("countryNameWithSpan", "Country name, with span")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  public static function createWithSpan() {

    return new EntityDisplay_WithBuildProcessor(
      self::create(),
      BuildProcessor_Container::create('span', ['__country']));
  }

  /**
   * @CfrPlugin("countryName", "Country name")
   *
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   *
   * @link http://ef2.loc/admin/reports/cfrplugin/Drupal.renderkit.EntityDisplay.EntityDisplayInterface/demo?plugin%5Bid%5D=renderkit.chain&plugin%5Boptions%5D%5B0%5D%5B0%5D%5Bid%5D=renderkit.fieldWithFormatter&plugin%5Boptions%5D%5B0%5D%5B0%5D%5Boptions%5D%5Bfield%5D%5Bfield%5D=field_ef_country&plugin%5Boptions%5D%5B0%5D%5B0%5D%5Boptions%5D%5Bfield%5D%5Bdisplay%5D%5Btype%5D=country_official&plugin%5Boptions%5D%5B0%5D%5B0%5D%5Boptions%5D%5Blabel%5D=hidden&plugin%5Boptions%5D%5B0%5D%5B0%5D%5Boptions%5D%5Bprocessor%5D%5Bid%5D=renderkit.fullResetDefault&plugin%5Boptions%5D%5B0%5D%5B1%5D%5Bid%5D=renderkit.fieldWithFormatter&plugin%5Boptions%5D%5B0%5D%5B1%5D%5Boptions%5D%5Bfield%5D%5Bfield%5D=field_ef_eu_related_countries&plugin%5Boptions%5D%5B0%5D%5B1%5D%5Boptions%5D%5Bfield%5D%5Bdisplay%5D%5Btype%5D=country_official&plugin%5Boptions%5D%5B0%5D%5B1%5D%5Boptions%5D%5Blabel%5D=hidden&plugin%5Boptions%5D%5B0%5D%5B1%5D%5Boptions%5D%5Bprocessor%5D%5Bid%5D=renderkit.fullResetDefault&plugin%5Boptions%5D%5B0%5D%5B2%5D%5Bid%5D=renderkit.fieldWithFormatter&plugin%5Boptions%5D%5B0%5D%5B2%5D%5Boptions%5D%5Bfield%5D%5Bfield%5D=field_ef_quarter_report_country&plugin%5Boptions%5D%5B0%5D%5B2%5D%5Boptions%5D%5Bfield%5D%5Bdisplay%5D%5Btype%5D=country_official&plugin%5Boptions%5D%5B0%5D%5B2%5D%5Boptions%5D%5Blabel%5D=hidden&plugin%5Boptions%5D%5B0%5D%5B2%5D%5Boptions%5D%5Bprocessor%5D%5Bid%5D=renderkit.fullResetDefault
   */
  public static function create() {

    return new EntityDisplay_ChainOfResponsibility(
      [
        // Sequence item #0
        new EntityDisplay_FieldWithFormatter(
          'field_ef_country',
          [
            'type' => 'country_official',
            'settings' => [],
            'label' => 'hidden'
          ],
          FieldDisplayProcessor_PluginFactoryUtil::fullResetDefault()),

        // Sequence item #1
        new EntityDisplay_FieldWithFormatter(
          'field_ef_eu_related_countries',
          [
            'type' => 'country_official',
            'settings' => [],
            'label' => 'hidden'
          ],
          FieldDisplayProcessor_PluginFactoryUtil::fullResetDefault()),

        // Sequence item #2
        new EntityDisplay_FieldWithFormatter(
          'field_ef_quarter_report_country',
          [
            'type' => 'country_official',
            'settings' => [],
            'label' => 'hidden'
          ],
          FieldDisplayProcessor_PluginFactoryUtil::fullResetDefault()),
      ]);
  }
}
