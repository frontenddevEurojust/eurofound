<?php

use Drupal\ef_pleco_migrate\Migration\Migration_PlecoRecord;

/**
 * Implements hook_migrate_api().
 */
function ef_pleco_migrate_migrate_api() {

  $api = [
    'api' => 2,
    'groups' => [
      'ef_pleco' => [
        'title' => 'EUROFOUND PLECO',
      ],
    ],
  ];

  $api['migrations']['PlecoRecord'] = [
    'class_name' => Migration_PlecoRecord::class,
    'group_name' => 'ef_pleco',
    'dependencies' => [],
  ];

  return $api;
}
