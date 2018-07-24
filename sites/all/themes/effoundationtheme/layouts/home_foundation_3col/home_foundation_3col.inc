<?php

/**
 * Implements hook_panels_layouts()
 */
function effoundationtheme_home_foundation_3col_panels_layouts() {
  $items['home_foundation_3col'] = array(
    'title' => t('Foundation: Home page'),
    'category' => t('Home Page Foundation: 3'),
    'icon' => 'home_foundation_3col.png',
    'theme' => 'home-foundation-3col',
    'regions' => array(
      'left_first' => t('Left First'),
      'left_second' => t('Left Second'),
      'right_first' => t('Right First'),
      'right_second' => t('Right Second'),
    ),
  );
  return $items;
}

