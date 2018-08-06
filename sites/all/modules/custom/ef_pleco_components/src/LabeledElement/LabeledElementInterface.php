<?php

namespace Drupal\ef_pleco_components\LabeledElement;

interface LabeledElementInterface {

  /**
   * @return string
   */
  public function getLabelMarkup();

  /**
   * @return array
   *   The render element for the main content.
   */
  public function getElement();

}
