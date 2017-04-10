<?php
/**
 * @file
 * ef_events.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ef_events_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ef-events-menu.
  $menus['menu-ef-events-menu'] = array(
    'menu_name' => 'menu-ef-events-menu',
    'title' => 'Events Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events Menu');


  return $menus;
}
