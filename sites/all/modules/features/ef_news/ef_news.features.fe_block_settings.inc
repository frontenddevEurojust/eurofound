<?php
/**
 * @file
 * ef_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-ef_news-news_page_view'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '-exp-ef_news-news_page_view',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -56,
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

  $export['views--exp-ef_news-page'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '-exp-ef_news-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news/news-articles',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -59,
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

  return $export;
}
