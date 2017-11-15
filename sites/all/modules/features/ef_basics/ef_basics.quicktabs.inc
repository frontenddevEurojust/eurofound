<?php
/**
 * @file
 * ef_basics.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function ef_basics_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'ef_block_latest_content';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Latest Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'ef_latest_content',
      'display' => 'page',
      'args' => '',
      'title' => 'Latest',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'ef_events',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Upcoming Events',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Latest');
  t('Latest Content');
  t('Upcoming Events');

  $export['ef_block_latest_content'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'ef_latest_spotlight_entries';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Latest Spotlight Entries';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'ef_latest_spotlight_entries_for_theme',
      'display' => 'default',
      'args' => 'employment',
      'title' => 'Employment',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'ef_latest_spotlight_entries_for_theme',
      'display' => 'default',
      'args' => 'quality-of-life',
      'title' => 'Quality of life',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'ef_latest_spotlight_entries_for_theme',
      'display' => 'default',
      'args' => 'youth',
      'title' => 'Youth in Europe',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Excel';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Employment');
  t('Latest Spotlight Entries');
  t('Quality of life');
  t('Youth in Europe');

  $export['ef_latest_spotlight_entries'] = $quicktabs;

  return $export;
}
