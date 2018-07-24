<?php
/**
 * @file
 * ef_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-ef_events_list-page_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-ef_events_list-page_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'events/upcoming',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -43,
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

  $export['views--exp-ef_events_list-page_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-ef_events_list-page_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'events/past',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -42,
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

  $export['views-9f753d67fd009c5135dee78ef22e08e7'] = array(
    'cache' => -1,
    'css_class' => 'exposed-filters',
    'custom' => 0,
    'delta' => '9f753d67fd009c5135dee78ef22e08e7',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'events',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -44,
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

  $export['views-ef_events-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ef_events-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'calendar-node-field-ef-event-start-date
calendar-node-field-ef-event-start-date/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -40,
      ),
      'zurb_foundation' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
