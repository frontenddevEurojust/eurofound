<?php
/**
 * @file
 * ef_basics.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ef_basics_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-ef-footer-links.
  $menus['menu-ef-footer-links'] = array(
    'menu_name' => 'menu-ef-footer-links',
    'title' => 'Footer Links',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-ef-quick-links.
  $menus['menu-ef-quick-links'] = array(
    'menu_name' => 'menu-ef-quick-links',
    'title' => 'Quick Links',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-ef-user-login-links-menu.
  $menus['menu-ef-user-login-links-menu'] = array(
    'menu_name' => 'menu-ef-user-login-links-menu',
    'title' => 'User Login Links Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Links');
  t('Main menu');
  t('Quick Links');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('User Login Links Menu');


  return $menus;
}
