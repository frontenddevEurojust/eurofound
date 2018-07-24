<?php
/**
 * @file
 * erm_legal_database.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function erm_legal_database_workbench_moderation_export_states() {
  $items = array(
    'proposal' => array(
      'name' => 'proposal',
      'label' => 'Proposal',
      'description' => 'Proposed articles',
      'weight' => -10,
    ),
  );
  return $items;
}
