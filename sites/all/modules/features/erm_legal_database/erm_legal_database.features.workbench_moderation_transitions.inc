<?php
/**
 * @file
 * erm_legal_database.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function erm_legal_database_workbench_moderation_export_transitions() {
  $items = array(
    'draft:proposal' => array(
      'from_name' => 'draft',
      'to_name' => 'proposal',
    ),
    'proposal:rejected' => array(
      'from_name' => 'proposal',
      'to_name' => 'rejected',
    ),
    'proposal:requested' => array(
      'from_name' => 'proposal',
      'to_name' => 'requested',
    ),
  );
  return $items;
}
