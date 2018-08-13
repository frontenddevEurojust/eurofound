<?php

namespace Drupal\ef_pleco_components\ViewsPlugin\row;

use Drupal\ef_pleco_components\EntityDisplay\EntityDisplay_EfRelatedEntity;

class ViewsRowPlugin_PlecoLandingLatestRecord extends ViewsRowPlugin_EfEntityBase {

  /**
   * @return \Drupal\renderkit\EntityDisplay\EntityDisplayInterface
   */
  protected function getEntityDisplay() {
    return EntityDisplay_EfRelatedEntity::createDefault();
  }
}
