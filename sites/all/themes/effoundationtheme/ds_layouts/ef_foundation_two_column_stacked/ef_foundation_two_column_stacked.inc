<?php

/**
 * @file
 * Display Suite EF Foundation Two column stacked configuration.
 */

function ds_ef_foundation_two_column_stacked() {
  return array(
    'label' => t('EF Foundation Two column stacked'),
    'regions' => array(
      'node_sub_header' => t('Node Sub Header'),
      'node_languages' => t('Node Languages'),
      'node_metadata' => t('Node Metadata'),
      'node_side_info' => t('Node Side Info'),
      'node_content' => t('Node Content'),
      'node_downloads' => t('Node Downloads'),
      'node_comments' => t('Node Comments'),
    ),
    // Uncomment if you want to include a CSS file for this layout (ef_foundation_two_column_stacked.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (ef_foundation_two_column_stacked.png)
    'image' => TRUE,
  );
}
