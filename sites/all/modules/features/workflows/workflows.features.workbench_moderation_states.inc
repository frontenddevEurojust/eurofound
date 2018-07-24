<?php
/**
 * @file
 * workflows.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function workflows_workbench_moderation_export_states() {
  $items = array(
    'approved' => array(
      'name' => 'approved',
      'label' => 'Approved',
      'description' => '',
      'weight' => -4,
    ),
    'approved_for_editing' => array(
      'name' => 'approved_for_editing',
      'label' => 'Approved for editing',
      'description' => '',
      'weight' => -3,
    ),
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Work in progress',
      'weight' => -10,
    ),
    'on_external_editing' => array(
      'name' => 'on_external_editing',
      'label' => 'On external editing',
      'description' => '',
      'weight' => -1,
    ),
    'on_second_editing' => array(
      'name' => 'on_second_editing',
      'label' => 'On second editing',
      'description' => '',
      'weight' => -2,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => 1,
    ),
    'ready_for_publishing' => array(
      'name' => 'ready_for_publishing',
      'label' => 'Ready for publishing',
      'description' => '',
      'weight' => 0,
    ),
    'rejected' => array(
      'name' => 'rejected',
      'label' => 'Rejected',
      'description' => '',
      'weight' => -6,
    ),
    'requested' => array(
      'name' => 'requested',
      'label' => 'Requested',
      'description' => '',
      'weight' => -9,
    ),
    'submitted' => array(
      'name' => 'submitted',
      'label' => 'Submitted (S2)',
      'description' => 'Submitted to QM or E (for S2 nodes)',
      'weight' => -8,
    ),
    'submitted_qr' => array(
      'name' => 'submitted_qr',
      'label' => 'Submitted to QM',
      'description' => 'Submitted to QM (for QRs, IRs, DBs)',
      'weight' => -7,
    ),
    'under_revision_request' => array(
      'name' => 'under_revision_request',
      'label' => 'Under revision request',
      'description' => '',
      'weight' => -5,
    ),
    'unpublished' => array(
      'name' => 'unpublished',
      'label' => 'Unpublished',
      'description' => '',
      'weight' => 2,
    ),
  );
  return $items;
}
