<?php

namespace Drupal\renderkit\ImageProcessor;

class ImageProcessor_Neutral implements ImageProcessorInterface {

  /**
   * @param array $build
   *   Render array with '#theme' => 'image'.
   *
   * @return array
   *   Render array after the processing.
   */
  public function processImage(array $build) {
    return $build;
  }
}
