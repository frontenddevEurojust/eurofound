<?php

/**
 * Implements hook_panels_layouts()
 */
function effoundationtheme_publication_minipanel_3col_panels_layouts() {
  $items['publication_minipanel_3col'] = array(
    'title' => t('Foundation: Publication Minipanel'),
    'category' => t('Foundation: 3'),
    'icon' => 'publication_minipanel_3col.png',
    'theme' => 'publication-minipanel-3col',
    'regions' => array(
      'left' => t('Left'),
      'middle' => t('Middle'),
      'right' => t('Right')
    ),
  );
  return $items;
}

