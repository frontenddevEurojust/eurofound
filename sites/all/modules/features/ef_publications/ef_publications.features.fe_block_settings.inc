<?php
/**
 * @file
 * ef_publications.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_publications_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-ef_articles-page'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '-exp-ef_articles-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'articles',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -80,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-ef_articles-page_1'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '-exp-ef_articles-page_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/emcc/articles',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -79,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-ef_articles-page_2'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '-exp-ef_articles-page_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/eurwork/articles
deliverable-kinds/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -77,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-ef_articles-page_4'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '-exp-ef_articles-page_4',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/emcc/erm/survey-reports',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -73,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-ef_publications_view-page'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '-exp-ef_publications_view-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'publications',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -88,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-0a8a42020a94f7e63a7343dc4a7d65b4'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '0a8a42020a94f7e63a7343dc4a7d65b4',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'about/what-we-do/annual-reports',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -61,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-5db3d6a56d0e4b2542bed64a43e9d27c'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '5db3d6a56d0e4b2542bed64a43e9d27c',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/emcc/erm/comparative-information',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -68,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-64a54fb041bd594dc633ed519d98336c'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '64a54fb041bd594dc633ed519d98336c',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'comparative-information',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -70,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-77ae7d9a77d2980e9197198fdfafaa20'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '77ae7d9a77d2980e9197198fdfafaa20',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/emcc/erm/annual-reports',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -83,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-9cf22433e0efbd8b206c8e4c2edb177c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9cf22433e0efbd8b206c8e4c2edb177c',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-b1067644d37b0585c3b1ef6c1aab7e85'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => 'b1067644d37b0585c3b1ef6c1aab7e85',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/emcc/erm/erm-quarterly-newsletters',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -82,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-bc93e9ff80537b05630dfd07b8209fe2'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => 'bc93e9ff80537b05630dfd07b8209fe2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'about/what-we-do/work-programmes',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -58,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-date_jump_menu-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'date_jump_menu-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-ef_publications_view-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ef_publications_view-block_3',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(
      0 => 'ef_publication',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -51,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-latest_publications-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'latest_publications-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
