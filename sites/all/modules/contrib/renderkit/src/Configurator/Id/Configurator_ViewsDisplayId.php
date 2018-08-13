<?php

namespace Drupal\renderkit\Configurator\Id;

use Drupal\cfrapi\Configurator\Id\Configurator_SelectBase;

class Configurator_ViewsDisplayId extends Configurator_SelectBase {

  /**
   * @param string $id
   *
   * @return bool
   */
  protected function idIsKnown($id) {
    list($view_name, $display_id) = explode(':', $id . ':');
    return 1
      && '' !== $view_name
      && '' !== $display_id
      && NULL !== ($view = \views_get_view($view_name))
      && !empty($view->display[$display_id]);
  }

  /**
   * @return mixed[]
   */
  protected function getSelectOptions() {

    /** @var \view[] $views */
    $views = \views_get_all_views();

    $options = [];

    foreach ($views as $view_id => $view) {
      if (!empty($view->disabled)) {
        continue;
      }

      if (empty($view->display)) {
        // Skip this view as it is broken.
        continue;
      }

      $view_label = $view->get_human_name();

      /** @var \views_display $display */
      foreach ($view->display as $display_id => $display) {
        /** @noinspection PhpUndefinedFieldInspection */
        if ('default' === $display->display_plugin || 'page' === $display->display_plugin) {
          continue;
        }

        /** @noinspection PhpUndefinedFieldInspection */
        $options[$view_label][$view_id . ':' . $display_id] = $display->display_title;
      }
    }

    return $options;
  }

  /**
   * @param string $id
   *
   * @return string|null
   */
  protected function idGetLabel($id) {
    list($view_name, $display_id) = explode(':', $id . ':');
    if ('' === $view_name || '' === $display_id) {
      return NULL;
    }
    $view = \views_get_view($view_name);
    if (NULL === $view) {
      return NULL;
    }
    if (empty($view->display[$display_id])) {
      return NULL;
    }
    $display = $view->display[$display_id];
    $display_label = !empty($display->display_title)
      ? $display->display_title
      : $display_id;
    return $view->get_human_name() . ': ' . $display_label;
  }
}
