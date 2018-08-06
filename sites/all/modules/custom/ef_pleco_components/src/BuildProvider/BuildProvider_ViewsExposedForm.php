<?php

namespace Drupal\ef_pleco_components\BuildProvider;

use Drupal\cfrapi\Configurator\Configurator_Textfield;
use Drupal\cfrreflection\Configurator\Configurator_CallbackConfigurable;
use Drupal\renderkit\BuildProvider\BuildProviderInterface;
use Drupal\renderkit\Configurator\Id\Configurator_ViewsDisplayId;

/**
 * @see \Drupal\renderkit\BuildProvider\BuildProvider_ViewsDisplay
 */
class BuildProvider_ViewsExposedForm implements BuildProviderInterface {

  /**
   * @var string
   */
  private $viewName;

  /**
   * @var string
   */
  private $displayId;

  /**
   * @var string|null
   */
  private $redirectPath;

  /**
   * @CfrPlugin("viewsExposedForm", @t("Views exposed form"))
   *
   * @return \Drupal\cfrapi\Configurator\ConfiguratorInterface
   */
  public static function createConfigurator() {

    return Configurator_CallbackConfigurable::createFromClassStaticMethod(
      self::class,
      /* @see doCreate() */
      'doCreate',
      [
        new Configurator_ViewsDisplayId(),
        new Configurator_Textfield(FALSE),
      ],
      [
        t('Views display'),
        t('Redirect path'),
      ]);
  }

  /**
   * @param string $viewNameWithDisplayId
   * @param string $redirectPath
   *
   * @return self|null
   */
  public static function doCreate($viewNameWithDisplayId, $redirectPath) {
    list($view_name, $display_id) = explode(':', $viewNameWithDisplayId . ':');
    if ('' === $view_name || '' === $display_id) {
      return NULL;
    }
    // No further checking at this point.
    return new self($view_name, $display_id, $redirectPath);

  }

  /**
   * @param string $viewName
   * @param string $displayId
   * @param string|null $redirectPath
   */
  public function __construct($viewName, $displayId, $redirectPath = NULL) {
    $this->viewName = $viewName;
    $this->displayId = $displayId;
    $this->redirectPath = $redirectPath;
  }

  /**
   * See https://eureka.ykyuen.info/2013/01/18/drupal-7-render-views-exposed-filter-programmatically/
   *
   * @return array
   *   A render array.
   */
  public function build() {
    $view = \views_get_view($this->viewName);
    if (NULL === $view) {
      return [];
    }
    $success = $view->set_display($this->displayId);
    if (FALSE === $success) {
      return [];
    }
    $view->init_handlers();

    $form_state = array(
      'view' => $view,
      'display' => $view->display_handler->display,
      'exposed_form_plugin' => $view->display_handler->get_plugin('exposed_form'),
      'method' => 'get',
      'rerender' => TRUE,
      'no_redirect' => TRUE,
    );

    $form = drupal_build_form('views_exposed_form', $form_state);

    if (NULL !== $this->redirectPath) {
      $form['#action'] = url($this->redirectPath);
    }

    return $form;
  }

}
