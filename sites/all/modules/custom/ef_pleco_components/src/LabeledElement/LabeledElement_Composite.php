<?php

namespace Drupal\ef_pleco_components\LabeledElement;

use Drupal\cfrapi\Configurator\Configurator_Textfield;
use Drupal\cfrreflection\Configurator\Configurator_CallbackConfigurable;
use Drupal\renderkit\BuildProvider\BuildProvider;
use Drupal\renderkit\BuildProvider\BuildProviderInterface;

class LabeledElement_Composite implements LabeledElementInterface {

  /**
   * @var string
   */
  private $labelMarkup;

  /**
   * @var \Drupal\renderkit\BuildProvider\BuildProviderInterface
   */
  private $buildProvider;

  /**
   * @CfrPlugin("composite", "Composite")
   *
   * @return \Drupal\cfrapi\Configurator\ConfiguratorInterface
   */
  public static function plugin() {
    return Configurator_CallbackConfigurable::createFromClassStaticMethod(
      self::class,
      'create',
      [
        new Configurator_Textfield(),
        BuildProvider::configurator(),
      ],
      [
        t('Label'),
        t('Build provider'),
      ]);
  }

  /**
   * @param string $labelUnsafe
   * @param \Drupal\renderkit\BuildProvider\BuildProviderInterface $buildProvider
   *
   * @return self
   */
  public static function create($labelUnsafe, BuildProviderInterface $buildProvider) {
    return new self(
      check_plain($labelUnsafe),
      $buildProvider);
  }

  /**
   * @param string $labelMarkup
   * @param \Drupal\renderkit\BuildProvider\BuildProviderInterface $buildProvider
   */
  public function __construct($labelMarkup, BuildProviderInterface $buildProvider) {
    $this->labelMarkup = $labelMarkup;
    $this->buildProvider = $buildProvider;
  }

  /**
   * @return string
   */
  public function getLabelMarkup() {
    return $this->labelMarkup;
  }

  /**
   * @return array
   *   The render element for the main content.
   */
  public function getElement() {
    return $this->buildProvider->build();
  }
}
