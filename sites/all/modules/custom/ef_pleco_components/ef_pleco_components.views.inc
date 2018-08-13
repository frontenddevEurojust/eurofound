<?php

/**
 * Implements hook_views_plugins().
 *
 * This would be unnecessary if we had PHP 7.1 and entdisp + cfr installed.
 *
 * @see entity_views_plugins()
 * @see entdisp_views_plugins()
 *   (currently not in EUROFOUND, but see https://drupal.org/project/entdisp)
 *
 * @return array[]
 */
function ef_pleco_components_views_plugins() {
  // Have views cache the table list for us so it gets
  // cleared at the appropriate times.
  $data = views_cache_get('entity_base_tables', TRUE);
  if (!empty($data->data)) {
    $base_tables = $data->data;
  }
  else {
    $base_tables = [];
    foreach (views_fetch_data() as $table => $data) {
      if (!empty($data['table']['entity type']) && !empty($data['table']['base'])) {
        $base_tables[] = $table;
      }
    }
    views_cache_set('entity_base_tables', $base_tables, TRUE);
  }
  return [
    'module' => 'ef_pleco_components',
    'row' => [
      'ef_pleco_landing_latest_record' => [
        'title' => 'EF PLECO Landing Latest Record',
        'help' => 'Renders the entity as in the "Related entities" block.',
        'handler' => \Drupal\ef_pleco_components\ViewsPlugin\row\ViewsRowPlugin_PlecoLandingLatestRecord::class,
        'uses fields' => FALSE,
        'uses options' => FALSE,
        'type' => 'normal',
        'base' => $base_tables,
      ],
    ],
  ];
}
