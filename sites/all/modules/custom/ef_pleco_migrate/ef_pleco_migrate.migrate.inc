<?php

use Drupal\ef_pleco_migrate\Migration\Migration_PlecoRecord;
use Drupal\ef_pleco_migrate\Migration\Migration_PlecoTermGeneric;

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
    'migrations' => [],
  ];

  $term_migrations = Migration_PlecoTermGeneric::defineMigrations();

  $api['migrations'] += $term_migrations;

  $api['migrations']['PlecoRecord'] = [
    'class_name' => Migration_PlecoRecord::class,
    'dependencies' => array_keys($term_migrations),
  ];

  foreach ($api['migrations'] as &$migration_definition) {
    $migration_definition['group_name'] = 'ef_pleco';
  }

  return $api;
}
