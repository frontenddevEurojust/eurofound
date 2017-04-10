<?php
/**
 * @file
 * erm_support_instruments.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function erm_support_instruments_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'moderate erm_support_instrument state from approved to under_revision_request'.
  $permissions['moderate erm_support_instrument state from approved to under_revision_request'] = array(
    'name' => 'moderate erm_support_instrument state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from approved_for_editing to on_external_editing'.
  $permissions['moderate erm_support_instrument state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate erm_support_instrument state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from approved_for_editing to on_second_editing'.
  $permissions['moderate erm_support_instrument state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate erm_support_instrument state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from approved_for_editing to published'.
  $permissions['moderate erm_support_instrument state from approved_for_editing to published'] = array(
    'name' => 'moderate erm_support_instrument state from approved_for_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate erm_support_instrument state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate erm_support_instrument state from approved_for_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from draft to requested'.
  $permissions['moderate erm_support_instrument state from draft to requested'] = array(
    'name' => 'moderate erm_support_instrument state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from draft to submitted'.
  $permissions['moderate erm_support_instrument state from draft to submitted'] = array(
    'name' => 'moderate erm_support_instrument state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from draft to submitted_qr'.
  $permissions['moderate erm_support_instrument state from draft to submitted_qr'] = array(
    'name' => 'moderate erm_support_instrument state from draft to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from on_external_editing to approved_for_editing'.
  $permissions['moderate erm_support_instrument state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate erm_support_instrument state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from on_external_editing to on_second_editing'.
  $permissions['moderate erm_support_instrument state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate erm_support_instrument state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from on_second_editing to published'.
  $permissions['moderate erm_support_instrument state from on_second_editing to published'] = array(
    'name' => 'moderate erm_support_instrument state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from on_second_editing to ready_for_publishing'.
  $permissions['moderate erm_support_instrument state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate erm_support_instrument state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from published to approved_for_editing'.
  $permissions['moderate erm_support_instrument state from published to approved_for_editing'] = array(
    'name' => 'moderate erm_support_instrument state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from published to rejected'.
  $permissions['moderate erm_support_instrument state from published to rejected'] = array(
    'name' => 'moderate erm_support_instrument state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from published to requested'.
  $permissions['moderate erm_support_instrument state from published to requested'] = array(
    'name' => 'moderate erm_support_instrument state from published to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from published to under_revision_request'.
  $permissions['moderate erm_support_instrument state from published to under_revision_request'] = array(
    'name' => 'moderate erm_support_instrument state from published to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from published to unpublished'.
  $permissions['moderate erm_support_instrument state from published to unpublished'] = array(
    'name' => 'moderate erm_support_instrument state from published to unpublished',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate erm_support_instrument state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate erm_support_instrument state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from ready_for_publishing to on_second_editing'.
  $permissions['moderate erm_support_instrument state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate erm_support_instrument state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from rejected to draft'.
  $permissions['moderate erm_support_instrument state from rejected to draft'] = array(
    'name' => 'moderate erm_support_instrument state from rejected to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from rejected to published'.
  $permissions['moderate erm_support_instrument state from rejected to published'] = array(
    'name' => 'moderate erm_support_instrument state from rejected to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from rejected to submitted_qr'.
  $permissions['moderate erm_support_instrument state from rejected to submitted_qr'] = array(
    'name' => 'moderate erm_support_instrument state from rejected to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from rejected to under_revision_request'.
  $permissions['moderate erm_support_instrument state from rejected to under_revision_request'] = array(
    'name' => 'moderate erm_support_instrument state from rejected to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from rejected to unpublished'.
  $permissions['moderate erm_support_instrument state from rejected to unpublished'] = array(
    'name' => 'moderate erm_support_instrument state from rejected to unpublished',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from requested to submitted'.
  $permissions['moderate erm_support_instrument state from requested to submitted'] = array(
    'name' => 'moderate erm_support_instrument state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from requested to submitted_qr'.
  $permissions['moderate erm_support_instrument state from requested to submitted_qr'] = array(
    'name' => 'moderate erm_support_instrument state from requested to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from submitted to approved_for_editing'.
  $permissions['moderate erm_support_instrument state from submitted to approved_for_editing'] = array(
    'name' => 'moderate erm_support_instrument state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from submitted to rejected'.
  $permissions['moderate erm_support_instrument state from submitted to rejected'] = array(
    'name' => 'moderate erm_support_instrument state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from submitted to under_revision_request'.
  $permissions['moderate erm_support_instrument state from submitted to under_revision_request'] = array(
    'name' => 'moderate erm_support_instrument state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from submitted_qr to approved'.
  $permissions['moderate erm_support_instrument state from submitted_qr to approved'] = array(
    'name' => 'moderate erm_support_instrument state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from submitted_qr to approved_for_editing'.
  $permissions['moderate erm_support_instrument state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate erm_support_instrument state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from submitted_qr to published'.
  $permissions['moderate erm_support_instrument state from submitted_qr to published'] = array(
    'name' => 'moderate erm_support_instrument state from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from submitted_qr to rejected'.
  $permissions['moderate erm_support_instrument state from submitted_qr to rejected'] = array(
    'name' => 'moderate erm_support_instrument state from submitted_qr to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from submitted_qr to under_revision_request'.
  $permissions['moderate erm_support_instrument state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate erm_support_instrument state from submitted_qr to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from under_revision_request to submitted'.
  $permissions['moderate erm_support_instrument state from under_revision_request to submitted'] = array(
    'name' => 'moderate erm_support_instrument state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from under_revision_request to submitted_qr'.
  $permissions['moderate erm_support_instrument state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate erm_support_instrument state from under_revision_request to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to approved_for_editing'.
  $permissions['moderate erm_support_instrument state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to draft'.
  $permissions['moderate erm_support_instrument state from unpublished to draft'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to on_external_editing'.
  $permissions['moderate erm_support_instrument state from unpublished to on_external_editing'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to on_second_editing'.
  $permissions['moderate erm_support_instrument state from unpublished to on_second_editing'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to published'.
  $permissions['moderate erm_support_instrument state from unpublished to published'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to ready_for_publishing'.
  $permissions['moderate erm_support_instrument state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to rejected'.
  $permissions['moderate erm_support_instrument state from unpublished to rejected'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to requested'.
  $permissions['moderate erm_support_instrument state from unpublished to requested'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to submitted'.
  $permissions['moderate erm_support_instrument state from unpublished to submitted'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to submitted_qr'.
  $permissions['moderate erm_support_instrument state from unpublished to submitted_qr'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate erm_support_instrument state from unpublished to under_revision_request'.
  $permissions['moderate erm_support_instrument state from unpublished to under_revision_request'] = array(
    'name' => 'moderate erm_support_instrument state from unpublished to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
