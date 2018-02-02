<?php
/**
 * @file
 * blog_presentation.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function blog_presentation_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['easy_social-easy_social_block_2'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'easy_social_block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'easy_social',
    'node_types' => array(
      0 => 'blog',
      1 => 'presentation',
    ),
    'pages' => 'node/add/blog
node/add/presentation',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -96,
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
