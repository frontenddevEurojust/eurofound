<?php

namespace Drupal\ef_pleco_components\BuildProvider;

use Drupal\cfrapi\Configurator\Sequence\Configurator_SequenceTabledrag;
use Drupal\cfrreflection\Configurator\Configurator_CallbackMono;
use Drupal\ef_pleco_components\LabeledElement\LabeledElementInterface;
use Drupal\renderkit\BuildProvider\BuildProviderInterface;

class BuildProvider_PlecoTabs implements BuildProviderInterface {

  /**
   * @var \Drupal\ef_pleco_components\LabeledElement\LabeledElementInterface[]
   */
  private $labeledElements;

  /**
   * @CfrPlugin("plecoTabs", "PLECO Tabs")
   *
   * @return \Drupal\cfrreflection\Configurator\Configurator_CallbackMono
   */
  public static function plugin() {
    return Configurator_CallbackMono::createFromClassName(
      self::class,
      new Configurator_SequenceTabledrag(
        cfrplugin()->interfaceGetConfigurator(
          LabeledElementInterface::class)));
  }

  /**
   * @param \Drupal\ef_pleco_components\LabeledElement\LabeledElementInterface[] $labeledElements
   */
  public function __construct(array $labeledElements) {
    $this->labeledElements = $labeledElements;
  }

  /**
   * @return array
   *   A render array.
   */
  public function build() {

    $tabs = [];
    foreach ($this->labeledElements as $labeledElement) {
      $contentElement = $labeledElement->getElement();
      $tabs[] = [
        'title_markup' => $labeledElement->getLabelMarkup(),
        'content_markup' => drupal_render($contentElement),
      ];
    }

    return [
      '#theme' => 'ef_pleco_tabs',
      '#tabs' => $tabs,
      '#attached' => [
        'css' => [_ef_pleco_components_file('css', 'tabs')],
        'js' => [_ef_pleco_components_file('js', 'tabs')],
      ],
    ];
  }
}
