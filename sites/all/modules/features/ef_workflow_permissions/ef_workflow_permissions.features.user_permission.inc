<?php
/**
 * @file
 * ef_workflow_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ef_workflow_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'moderate content from approved to under_revision_request'.
  $permissions['moderate content from approved to under_revision_request'] = array(
    'name' => 'moderate content from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from approved_for_editing to on_external_editing'.
  $permissions['moderate content from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate content from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from approved_for_editing to on_second_editing'.
  $permissions['moderate content from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate content from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from approved_for_editing to published'.
  $permissions['moderate content from approved_for_editing to published'] = array(
    'name' => 'moderate content from approved_for_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from approved_for_editing to ready_for_publishing'.
  $permissions['moderate content from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate content from approved_for_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to requested'.
  $permissions['moderate content from draft to requested'] = array(
    'name' => 'moderate content from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to submitted'.
  $permissions['moderate content from draft to submitted'] = array(
    'name' => 'moderate content from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to submitted_qr'.
  $permissions['moderate content from draft to submitted_qr'] = array(
    'name' => 'moderate content from draft to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from on_external_editing to approved_for_editing'.
  $permissions['moderate content from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate content from on_external_editing to approved_for_editing',
    'roles' => array(
      'External Editor' => 'External Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from on_external_editing to on_second_editing'.
  $permissions['moderate content from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate content from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from on_second_editing to published'.
  $permissions['moderate content from on_second_editing to published'] = array(
    'name' => 'moderate content from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from on_second_editing to ready_for_publishing'.
  $permissions['moderate content from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate content from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to approved_for_editing'.
  $permissions['moderate content from published to approved_for_editing'] = array(
    'name' => 'moderate content from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to rejected'.
  $permissions['moderate content from published to rejected'] = array(
    'name' => 'moderate content from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to under_revision_request'.
  $permissions['moderate content from published to under_revision_request'] = array(
    'name' => 'moderate content from published to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to unpublished'.
  $permissions['moderate content from published to unpublished'] = array(
    'name' => 'moderate content from published to unpublished',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from ready_for_publishing to approved_for_editing'.
  $permissions['moderate content from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate content from ready_for_publishing to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from ready_for_publishing to on_second_editing'.
  $permissions['moderate content from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate content from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from requested to submitted'.
  $permissions['moderate content from requested to submitted'] = array(
    'name' => 'moderate content from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from submitted to approved_for_editing'.
  $permissions['moderate content from submitted to approved_for_editing'] = array(
    'name' => 'moderate content from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from submitted to rejected'.
  $permissions['moderate content from submitted to rejected'] = array(
    'name' => 'moderate content from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from submitted to under_revision_request'.
  $permissions['moderate content from submitted to under_revision_request'] = array(
    'name' => 'moderate content from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from submitted_qr to approved'.
  $permissions['moderate content from submitted_qr to approved'] = array(
    'name' => 'moderate content from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from submitted_qr to approved_for_editing'.
  $permissions['moderate content from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate content from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from submitted_qr to published'.
  $permissions['moderate content from submitted_qr to published'] = array(
    'name' => 'moderate content from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from submitted_qr to rejected'.
  $permissions['moderate content from submitted_qr to rejected'] = array(
    'name' => 'moderate content from submitted_qr to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from submitted_qr to under_revision_request'.
  $permissions['moderate content from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate content from submitted_qr to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from under_revision_request to submitted'.
  $permissions['moderate content from under_revision_request to submitted'] = array(
    'name' => 'moderate content from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from under_revision_request to submitted_qr'.
  $permissions['moderate content from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate content from under_revision_request to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to approved_for_editing'.
  $permissions['moderate content from unpublished to approved_for_editing'] = array(
    'name' => 'moderate content from unpublished to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to draft'.
  $permissions['moderate content from unpublished to draft'] = array(
    'name' => 'moderate content from unpublished to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to on_external_editing'.
  $permissions['moderate content from unpublished to on_external_editing'] = array(
    'name' => 'moderate content from unpublished to on_external_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to on_second_editing'.
  $permissions['moderate content from unpublished to on_second_editing'] = array(
    'name' => 'moderate content from unpublished to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to published'.
  $permissions['moderate content from unpublished to published'] = array(
    'name' => 'moderate content from unpublished to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to ready_for_publishing'.
  $permissions['moderate content from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate content from unpublished to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to rejected'.
  $permissions['moderate content from unpublished to rejected'] = array(
    'name' => 'moderate content from unpublished to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to submitted'.
  $permissions['moderate content from unpublished to submitted'] = array(
    'name' => 'moderate content from unpublished to submitted',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to submitted_qr'.
  $permissions['moderate content from unpublished to submitted_qr'] = array(
    'name' => 'moderate content from unpublished to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from unpublished to under_revision_request'.
  $permissions['moderate content from unpublished to under_revision_request'] = array(
    'name' => 'moderate content from unpublished to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from approved to under_revision_request'.
  $permissions['moderate ef_case_study state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_case_study state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_case_study state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_case_study state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_case_study state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_case_study state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from approved_for_editing to published'.
  $permissions['moderate ef_case_study state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_case_study state from approved_for_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_case_study state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_case_study state from approved_for_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from draft to requested'.
  $permissions['moderate ef_case_study state from draft to requested'] = array(
    'name' => 'moderate ef_case_study state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from draft to submitted'.
  $permissions['moderate ef_case_study state from draft to submitted'] = array(
    'name' => 'moderate ef_case_study state from draft to submitted',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from draft to submitted_qr'.
  $permissions['moderate ef_case_study state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_case_study state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_case_study state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_case_study state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_case_study state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_case_study state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from on_second_editing to published'.
  $permissions['moderate ef_case_study state from on_second_editing to published'] = array(
    'name' => 'moderate ef_case_study state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_case_study state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_case_study state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from published to approved_for_editing'.
  $permissions['moderate ef_case_study state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_case_study state from published to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from published to rejected'.
  $permissions['moderate ef_case_study state from published to rejected'] = array(
    'name' => 'moderate ef_case_study state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from published to under_revision_request'.
  $permissions['moderate ef_case_study state from published to under_revision_request'] = array(
    'name' => 'moderate ef_case_study state from published to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from published to unpublished'.
  $permissions['moderate ef_case_study state from published to unpublished'] = array(
    'name' => 'moderate ef_case_study state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_case_study state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_case_study state from ready_for_publishing to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_case_study state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_case_study state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from requested to submitted'.
  $permissions['moderate ef_case_study state from requested to submitted'] = array(
    'name' => 'moderate ef_case_study state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from submitted to approved_for_editing'.
  $permissions['moderate ef_case_study state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_case_study state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from submitted to rejected'.
  $permissions['moderate ef_case_study state from submitted to rejected'] = array(
    'name' => 'moderate ef_case_study state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from submitted to under_revision_request'.
  $permissions['moderate ef_case_study state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_case_study state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from submitted_qr to approved'.
  $permissions['moderate ef_case_study state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_case_study state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_case_study state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_case_study state from submitted_qr to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from submitted_qr to published'.
  $permissions['moderate ef_case_study state from submitted_qr to published'] = array(
    'name' => 'moderate ef_case_study state from submitted_qr to published',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from submitted_qr to rejected'.
  $permissions['moderate ef_case_study state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_case_study state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_case_study state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_case_study state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from under_revision_request to submitted'.
  $permissions['moderate ef_case_study state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_case_study state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_case_study state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_case_study state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to approved_for_editing'.
  $permissions['moderate ef_case_study state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_case_study state from unpublished to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to draft'.
  $permissions['moderate ef_case_study state from unpublished to draft'] = array(
    'name' => 'moderate ef_case_study state from unpublished to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to on_external_editing'.
  $permissions['moderate ef_case_study state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_case_study state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to on_second_editing'.
  $permissions['moderate ef_case_study state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_case_study state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to published'.
  $permissions['moderate ef_case_study state from unpublished to published'] = array(
    'name' => 'moderate ef_case_study state from unpublished to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_case_study state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_case_study state from unpublished to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to rejected'.
  $permissions['moderate ef_case_study state from unpublished to rejected'] = array(
    'name' => 'moderate ef_case_study state from unpublished to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to submitted'.
  $permissions['moderate ef_case_study state from unpublished to submitted'] = array(
    'name' => 'moderate ef_case_study state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to submitted_qr'.
  $permissions['moderate ef_case_study state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_case_study state from unpublished to submitted_qr',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_case_study state from unpublished to under_revision_request'.
  $permissions['moderate ef_case_study state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_case_study state from unpublished to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from approved to under_revision_request'.
  $permissions['moderate ef_comparative_analytical_report state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_comparative_analytical_report state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from approved_for_editing to on_external_editing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_comparative_analytical_report state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from approved_for_editing to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from approved_for_editing to published'.
  $permissions['moderate ef_comparative_analytical_report state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from approved_for_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_comparative_analytical_report state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from approved_for_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from draft to requested'.
  $permissions['moderate ef_comparative_analytical_report state from draft to requested'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from draft to requested',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from draft to submitted'.
  $permissions['moderate ef_comparative_analytical_report state from draft to submitted'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from draft to submitted_qr'.
  $permissions['moderate ef_comparative_analytical_report state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from draft to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_comparative_analytical_report state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_comparative_analytical_report state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from on_external_editing to on_second_editing',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from on_second_editing to published'.
  $permissions['moderate ef_comparative_analytical_report state from on_second_editing to published'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from on_second_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_comparative_analytical_report state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from on_second_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from published to approved_for_editing'.
  $permissions['moderate ef_comparative_analytical_report state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from published to rejected'.
  $permissions['moderate ef_comparative_analytical_report state from published to rejected'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from published to under_revision_request'.
  $permissions['moderate ef_comparative_analytical_report state from published to under_revision_request'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from published to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from published to unpublished'.
  $permissions['moderate ef_comparative_analytical_report state from published to unpublished'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_comparative_analytical_report state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_comparative_analytical_report state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from ready_for_publishing to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from requested to submitted'.
  $permissions['moderate ef_comparative_analytical_report state from requested to submitted'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from requested to submitted',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from submitted to approved_for_editing'.
  $permissions['moderate ef_comparative_analytical_report state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from submitted to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from submitted to rejected'.
  $permissions['moderate ef_comparative_analytical_report state from submitted to rejected'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from submitted to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from submitted to under_revision_request'.
  $permissions['moderate ef_comparative_analytical_report state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from submitted to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from submitted_qr to approved'.
  $permissions['moderate ef_comparative_analytical_report state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_comparative_analytical_report state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from submitted_qr to published'.
  $permissions['moderate ef_comparative_analytical_report state from submitted_qr to published'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from submitted_qr to rejected'.
  $permissions['moderate ef_comparative_analytical_report state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from submitted_qr to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_comparative_analytical_report state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from submitted_qr to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from under_revision_request to submitted'.
  $permissions['moderate ef_comparative_analytical_report state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from under_revision_request to submitted',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_comparative_analytical_report state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from under_revision_request to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to approved_for_editing'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to draft'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to draft'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to on_external_editing'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to on_second_editing'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to published'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to published'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to rejected'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to rejected'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to submitted'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to submitted'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to submitted_qr'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_comparative_analytical_report state from unpublished to under_revision_request'.
  $permissions['moderate ef_comparative_analytical_report state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_comparative_analytical_report state from unpublished to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from approved to under_revision_request'.
  $permissions['moderate ef_factsheet state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_factsheet state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_factsheet state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_factsheet state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_factsheet state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_factsheet state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from approved_for_editing to published'.
  $permissions['moderate ef_factsheet state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_factsheet state from approved_for_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_factsheet state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_factsheet state from approved_for_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from draft to requested'.
  $permissions['moderate ef_factsheet state from draft to requested'] = array(
    'name' => 'moderate ef_factsheet state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from draft to submitted'.
  $permissions['moderate ef_factsheet state from draft to submitted'] = array(
    'name' => 'moderate ef_factsheet state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from draft to submitted_qr'.
  $permissions['moderate ef_factsheet state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_factsheet state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_factsheet state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_factsheet state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_factsheet state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_factsheet state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from on_second_editing to published'.
  $permissions['moderate ef_factsheet state from on_second_editing to published'] = array(
    'name' => 'moderate ef_factsheet state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_factsheet state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_factsheet state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from published to approved_for_editing'.
  $permissions['moderate ef_factsheet state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_factsheet state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from published to rejected'.
  $permissions['moderate ef_factsheet state from published to rejected'] = array(
    'name' => 'moderate ef_factsheet state from published to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from published to under_revision_request'.
  $permissions['moderate ef_factsheet state from published to under_revision_request'] = array(
    'name' => 'moderate ef_factsheet state from published to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from published to unpublished'.
  $permissions['moderate ef_factsheet state from published to unpublished'] = array(
    'name' => 'moderate ef_factsheet state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_factsheet state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_factsheet state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_factsheet state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_factsheet state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from requested to submitted'.
  $permissions['moderate ef_factsheet state from requested to submitted'] = array(
    'name' => 'moderate ef_factsheet state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from submitted to approved_for_editing'.
  $permissions['moderate ef_factsheet state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_factsheet state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from submitted to rejected'.
  $permissions['moderate ef_factsheet state from submitted to rejected'] = array(
    'name' => 'moderate ef_factsheet state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from submitted to under_revision_request'.
  $permissions['moderate ef_factsheet state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_factsheet state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from submitted_qr to approved'.
  $permissions['moderate ef_factsheet state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_factsheet state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_factsheet state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_factsheet state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from submitted_qr to published'.
  $permissions['moderate ef_factsheet state from submitted_qr to published'] = array(
    'name' => 'moderate ef_factsheet state from submitted_qr to published',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from submitted_qr to rejected'.
  $permissions['moderate ef_factsheet state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_factsheet state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_factsheet state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_factsheet state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from under_revision_request to submitted'.
  $permissions['moderate ef_factsheet state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_factsheet state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_factsheet state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_factsheet state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to approved_for_editing'.
  $permissions['moderate ef_factsheet state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to draft'.
  $permissions['moderate ef_factsheet state from unpublished to draft'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to on_external_editing'.
  $permissions['moderate ef_factsheet state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to on_second_editing'.
  $permissions['moderate ef_factsheet state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to published'.
  $permissions['moderate ef_factsheet state from unpublished to published'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_factsheet state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to rejected'.
  $permissions['moderate ef_factsheet state from unpublished to rejected'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to submitted'.
  $permissions['moderate ef_factsheet state from unpublished to submitted'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to submitted_qr'.
  $permissions['moderate ef_factsheet state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to submitted_qr',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_factsheet state from unpublished to under_revision_request'.
  $permissions['moderate ef_factsheet state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_factsheet state from unpublished to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from approved to under_revision_request'.
  $permissions['moderate ef_ic_quarterly_report state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from approved to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_ic_quarterly_report state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_ic_quarterly_report state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from approved_for_editing to published'.
  $permissions['moderate ef_ic_quarterly_report state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from approved_for_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_ic_quarterly_report state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from approved_for_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from draft to requested'.
  $permissions['moderate ef_ic_quarterly_report state from draft to requested'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from draft to submitted'.
  $permissions['moderate ef_ic_quarterly_report state from draft to submitted'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from draft to submitted_qr'.
  $permissions['moderate ef_ic_quarterly_report state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_ic_quarterly_report state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_ic_quarterly_report state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from on_second_editing to published'.
  $permissions['moderate ef_ic_quarterly_report state from on_second_editing to published'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_ic_quarterly_report state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from published to approved_for_editing'.
  $permissions['moderate ef_ic_quarterly_report state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from published to rejected'.
  $permissions['moderate ef_ic_quarterly_report state from published to rejected'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from published to under_revision_request'.
  $permissions['moderate ef_ic_quarterly_report state from published to under_revision_request'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from published to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from published to unpublished'.
  $permissions['moderate ef_ic_quarterly_report state from published to unpublished'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from published to unpublished',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_ic_quarterly_report state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_ic_quarterly_report state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from requested to submitted'.
  $permissions['moderate ef_ic_quarterly_report state from requested to submitted'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from submitted to approved_for_editing'.
  $permissions['moderate ef_ic_quarterly_report state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from submitted to rejected'.
  $permissions['moderate ef_ic_quarterly_report state from submitted to rejected'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from submitted to under_revision_request'.
  $permissions['moderate ef_ic_quarterly_report state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from submitted_qr to approved'.
  $permissions['moderate ef_ic_quarterly_report state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from submitted_qr to approved',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_ic_quarterly_report state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from submitted_qr to published'.
  $permissions['moderate ef_ic_quarterly_report state from submitted_qr to published'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from submitted_qr to rejected'.
  $permissions['moderate ef_ic_quarterly_report state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_ic_quarterly_report state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from under_revision_request to submitted'.
  $permissions['moderate ef_ic_quarterly_report state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_ic_quarterly_report state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to approved_for_editing'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to draft'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to draft'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to on_external_editing'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to on_second_editing'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to published'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to published'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to rejected'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to rejected'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to submitted'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to submitted'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to submitted_qr'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ic_quarterly_report state from unpublished to under_revision_request'.
  $permissions['moderate ef_ic_quarterly_report state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_ic_quarterly_report state from unpublished to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from approved to under_revision_request'.
  $permissions['moderate ef_input_to_erm state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_input_to_erm state from approved to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_input_to_erm state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_input_to_erm state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from approved_for_editing to published'.
  $permissions['moderate ef_input_to_erm state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_input_to_erm state from approved_for_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_input_to_erm state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_input_to_erm state from approved_for_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from draft to requested'.
  $permissions['moderate ef_input_to_erm state from draft to requested'] = array(
    'name' => 'moderate ef_input_to_erm state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from draft to submitted'.
  $permissions['moderate ef_input_to_erm state from draft to submitted'] = array(
    'name' => 'moderate ef_input_to_erm state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from draft to submitted_qr'.
  $permissions['moderate ef_input_to_erm state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_input_to_erm state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_input_to_erm state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_input_to_erm state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from on_second_editing to published'.
  $permissions['moderate ef_input_to_erm state from on_second_editing to published'] = array(
    'name' => 'moderate ef_input_to_erm state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_input_to_erm state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_input_to_erm state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from published to approved_for_editing'.
  $permissions['moderate ef_input_to_erm state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from published to rejected'.
  $permissions['moderate ef_input_to_erm state from published to rejected'] = array(
    'name' => 'moderate ef_input_to_erm state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from published to under_revision_request'.
  $permissions['moderate ef_input_to_erm state from published to under_revision_request'] = array(
    'name' => 'moderate ef_input_to_erm state from published to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from published to unpublished'.
  $permissions['moderate ef_input_to_erm state from published to unpublished'] = array(
    'name' => 'moderate ef_input_to_erm state from published to unpublished',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_input_to_erm state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_input_to_erm state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from requested to submitted'.
  $permissions['moderate ef_input_to_erm state from requested to submitted'] = array(
    'name' => 'moderate ef_input_to_erm state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from submitted to approved_for_editing'.
  $permissions['moderate ef_input_to_erm state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from submitted to rejected'.
  $permissions['moderate ef_input_to_erm state from submitted to rejected'] = array(
    'name' => 'moderate ef_input_to_erm state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from submitted to under_revision_request'.
  $permissions['moderate ef_input_to_erm state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_input_to_erm state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from submitted_qr to approved'.
  $permissions['moderate ef_input_to_erm state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_input_to_erm state from submitted_qr to approved',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_input_to_erm state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from submitted_qr to published'.
  $permissions['moderate ef_input_to_erm state from submitted_qr to published'] = array(
    'name' => 'moderate ef_input_to_erm state from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from submitted_qr to rejected'.
  $permissions['moderate ef_input_to_erm state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_input_to_erm state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_input_to_erm state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_input_to_erm state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from under_revision_request to submitted'.
  $permissions['moderate ef_input_to_erm state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_input_to_erm state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_input_to_erm state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_input_to_erm state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to approved_for_editing'.
  $permissions['moderate ef_input_to_erm state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to draft'.
  $permissions['moderate ef_input_to_erm state from unpublished to draft'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to on_external_editing'.
  $permissions['moderate ef_input_to_erm state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to on_second_editing'.
  $permissions['moderate ef_input_to_erm state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to published'.
  $permissions['moderate ef_input_to_erm state from unpublished to published'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_input_to_erm state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to rejected'.
  $permissions['moderate ef_input_to_erm state from unpublished to rejected'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to submitted'.
  $permissions['moderate ef_input_to_erm state from unpublished to submitted'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to submitted_qr'.
  $permissions['moderate ef_input_to_erm state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_input_to_erm state from unpublished to under_revision_request'.
  $permissions['moderate ef_input_to_erm state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_input_to_erm state from unpublished to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from approved to under_revision_request'.
  $permissions['moderate ef_ir_dictionary state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_ir_dictionary state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_ir_dictionary state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from approved_for_editing to on_external_editing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_ir_dictionary state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from approved_for_editing to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from approved_for_editing to published'.
  $permissions['moderate ef_ir_dictionary state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_ir_dictionary state from approved_for_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_ir_dictionary state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_ir_dictionary state from approved_for_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from draft to requested'.
  $permissions['moderate ef_ir_dictionary state from draft to requested'] = array(
    'name' => 'moderate ef_ir_dictionary state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from draft to submitted'.
  $permissions['moderate ef_ir_dictionary state from draft to submitted'] = array(
    'name' => 'moderate ef_ir_dictionary state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from draft to submitted_qr'.
  $permissions['moderate ef_ir_dictionary state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_ir_dictionary state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_ir_dictionary state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_ir_dictionary state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from on_external_editing to on_second_editing',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from on_second_editing to published'.
  $permissions['moderate ef_ir_dictionary state from on_second_editing to published'] = array(
    'name' => 'moderate ef_ir_dictionary state from on_second_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_ir_dictionary state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_ir_dictionary state from on_second_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from published to approved_for_editing'.
  $permissions['moderate ef_ir_dictionary state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from published to rejected'.
  $permissions['moderate ef_ir_dictionary state from published to rejected'] = array(
    'name' => 'moderate ef_ir_dictionary state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from published to under_revision_request'.
  $permissions['moderate ef_ir_dictionary state from published to under_revision_request'] = array(
    'name' => 'moderate ef_ir_dictionary state from published to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from published to unpublished'.
  $permissions['moderate ef_ir_dictionary state from published to unpublished'] = array(
    'name' => 'moderate ef_ir_dictionary state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_ir_dictionary state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_ir_dictionary state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from requested to submitted'.
  $permissions['moderate ef_ir_dictionary state from requested to submitted'] = array(
    'name' => 'moderate ef_ir_dictionary state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from submitted to approved_for_editing'.
  $permissions['moderate ef_ir_dictionary state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from submitted to rejected'.
  $permissions['moderate ef_ir_dictionary state from submitted to rejected'] = array(
    'name' => 'moderate ef_ir_dictionary state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from submitted to under_revision_request'.
  $permissions['moderate ef_ir_dictionary state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_ir_dictionary state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from submitted_qr to approved'.
  $permissions['moderate ef_ir_dictionary state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_ir_dictionary state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_ir_dictionary state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from submitted_qr to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from submitted_qr to published'.
  $permissions['moderate ef_ir_dictionary state from submitted_qr to published'] = array(
    'name' => 'moderate ef_ir_dictionary state from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from submitted_qr to rejected'.
  $permissions['moderate ef_ir_dictionary state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_ir_dictionary state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_ir_dictionary state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_ir_dictionary state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from under_revision_request to submitted'.
  $permissions['moderate ef_ir_dictionary state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_ir_dictionary state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_ir_dictionary state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_ir_dictionary state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to approved_for_editing'.
  $permissions['moderate ef_ir_dictionary state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to draft'.
  $permissions['moderate ef_ir_dictionary state from unpublished to draft'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to on_external_editing'.
  $permissions['moderate ef_ir_dictionary state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to on_external_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to on_second_editing'.
  $permissions['moderate ef_ir_dictionary state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to published'.
  $permissions['moderate ef_ir_dictionary state from unpublished to published'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_ir_dictionary state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to rejected'.
  $permissions['moderate ef_ir_dictionary state from unpublished to rejected'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to submitted'.
  $permissions['moderate ef_ir_dictionary state from unpublished to submitted'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to submitted_qr'.
  $permissions['moderate ef_ir_dictionary state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to submitted_qr',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_ir_dictionary state from unpublished to under_revision_request'.
  $permissions['moderate ef_ir_dictionary state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_ir_dictionary state from unpublished to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from approved to under_revision_request'.
  $permissions['moderate ef_national_contribution state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_national_contribution state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_national_contribution state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_national_contribution state from approved_for_editing to on_external_editing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_national_contribution state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_national_contribution state from approved_for_editing to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from approved_for_editing to published'.
  $permissions['moderate ef_national_contribution state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_national_contribution state from approved_for_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_national_contribution state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_national_contribution state from approved_for_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from draft to requested'.
  $permissions['moderate ef_national_contribution state from draft to requested'] = array(
    'name' => 'moderate ef_national_contribution state from draft to requested',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from draft to submitted'.
  $permissions['moderate ef_national_contribution state from draft to submitted'] = array(
    'name' => 'moderate ef_national_contribution state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from draft to submitted_qr'.
  $permissions['moderate ef_national_contribution state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_national_contribution state from draft to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_national_contribution state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_national_contribution state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_national_contribution state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_national_contribution state from on_external_editing to on_second_editing',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from on_second_editing to published'.
  $permissions['moderate ef_national_contribution state from on_second_editing to published'] = array(
    'name' => 'moderate ef_national_contribution state from on_second_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_national_contribution state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_national_contribution state from on_second_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from published to approved_for_editing'.
  $permissions['moderate ef_national_contribution state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_national_contribution state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from published to rejected'.
  $permissions['moderate ef_national_contribution state from published to rejected'] = array(
    'name' => 'moderate ef_national_contribution state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from published to under_revision_request'.
  $permissions['moderate ef_national_contribution state from published to under_revision_request'] = array(
    'name' => 'moderate ef_national_contribution state from published to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from published to unpublished'.
  $permissions['moderate ef_national_contribution state from published to unpublished'] = array(
    'name' => 'moderate ef_national_contribution state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_national_contribution state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_national_contribution state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_national_contribution state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_national_contribution state from ready_for_publishing to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from requested to submitted'.
  $permissions['moderate ef_national_contribution state from requested to submitted'] = array(
    'name' => 'moderate ef_national_contribution state from requested to submitted',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from submitted to approved_for_editing'.
  $permissions['moderate ef_national_contribution state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_national_contribution state from submitted to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from submitted to rejected'.
  $permissions['moderate ef_national_contribution state from submitted to rejected'] = array(
    'name' => 'moderate ef_national_contribution state from submitted to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from submitted to under_revision_request'.
  $permissions['moderate ef_national_contribution state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_national_contribution state from submitted to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from submitted_qr to approved'.
  $permissions['moderate ef_national_contribution state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_national_contribution state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_national_contribution state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_national_contribution state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from submitted_qr to published'.
  $permissions['moderate ef_national_contribution state from submitted_qr to published'] = array(
    'name' => 'moderate ef_national_contribution state from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from submitted_qr to rejected'.
  $permissions['moderate ef_national_contribution state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_national_contribution state from submitted_qr to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_national_contribution state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_national_contribution state from submitted_qr to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from under_revision_request to submitted'.
  $permissions['moderate ef_national_contribution state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_national_contribution state from under_revision_request to submitted',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_national_contribution state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_national_contribution state from under_revision_request to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to approved_for_editing'.
  $permissions['moderate ef_national_contribution state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to draft'.
  $permissions['moderate ef_national_contribution state from unpublished to draft'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to on_external_editing'.
  $permissions['moderate ef_national_contribution state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to on_second_editing'.
  $permissions['moderate ef_national_contribution state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to published'.
  $permissions['moderate ef_national_contribution state from unpublished to published'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_national_contribution state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to rejected'.
  $permissions['moderate ef_national_contribution state from unpublished to rejected'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to submitted'.
  $permissions['moderate ef_national_contribution state from unpublished to submitted'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to submitted_qr'.
  $permissions['moderate ef_national_contribution state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_national_contribution state from unpublished to under_revision_request'.
  $permissions['moderate ef_national_contribution state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_national_contribution state from unpublished to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from approved to under_revision_request'.
  $permissions['moderate ef_network_quarterly_report state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_network_quarterly_report state from approved to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_network_quarterly_report state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_network_quarterly_report state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from approved_for_editing to published'.
  $permissions['moderate ef_network_quarterly_report state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_network_quarterly_report state from approved_for_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_network_quarterly_report state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from approved_for_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from draft to requested'.
  $permissions['moderate ef_network_quarterly_report state from draft to requested'] = array(
    'name' => 'moderate ef_network_quarterly_report state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from draft to submitted'.
  $permissions['moderate ef_network_quarterly_report state from draft to submitted'] = array(
    'name' => 'moderate ef_network_quarterly_report state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from draft to submitted_qr'.
  $permissions['moderate ef_network_quarterly_report state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_network_quarterly_report state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_network_quarterly_report state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_network_quarterly_report state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from on_second_editing to published'.
  $permissions['moderate ef_network_quarterly_report state from on_second_editing to published'] = array(
    'name' => 'moderate ef_network_quarterly_report state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_network_quarterly_report state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from published to approved_for_editing'.
  $permissions['moderate ef_network_quarterly_report state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from published to rejected'.
  $permissions['moderate ef_network_quarterly_report state from published to rejected'] = array(
    'name' => 'moderate ef_network_quarterly_report state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from published to under_revision_request'.
  $permissions['moderate ef_network_quarterly_report state from published to under_revision_request'] = array(
    'name' => 'moderate ef_network_quarterly_report state from published to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from published to unpublished'.
  $permissions['moderate ef_network_quarterly_report state from published to unpublished'] = array(
    'name' => 'moderate ef_network_quarterly_report state from published to unpublished',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_network_quarterly_report state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_network_quarterly_report state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from requested to submitted'.
  $permissions['moderate ef_network_quarterly_report state from requested to submitted'] = array(
    'name' => 'moderate ef_network_quarterly_report state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from submitted to approved_for_editing'.
  $permissions['moderate ef_network_quarterly_report state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from submitted to rejected'.
  $permissions['moderate ef_network_quarterly_report state from submitted to rejected'] = array(
    'name' => 'moderate ef_network_quarterly_report state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from submitted to under_revision_request'.
  $permissions['moderate ef_network_quarterly_report state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_network_quarterly_report state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from submitted_qr to approved'.
  $permissions['moderate ef_network_quarterly_report state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_network_quarterly_report state from submitted_qr to approved',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_network_quarterly_report state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from submitted_qr to published'.
  $permissions['moderate ef_network_quarterly_report state from submitted_qr to published'] = array(
    'name' => 'moderate ef_network_quarterly_report state from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from submitted_qr to rejected'.
  $permissions['moderate ef_network_quarterly_report state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_network_quarterly_report state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_network_quarterly_report state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_network_quarterly_report state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from under_revision_request to submitted'.
  $permissions['moderate ef_network_quarterly_report state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_network_quarterly_report state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_network_quarterly_report state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_network_quarterly_report state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to approved_for_editing'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to draft'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to draft'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to on_external_editing'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to on_second_editing'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to published'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to published'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to rejected'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to rejected'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to submitted'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to submitted'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to submitted_qr'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_network_quarterly_report state from unpublished to under_revision_request'.
  $permissions['moderate ef_network_quarterly_report state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_network_quarterly_report state from unpublished to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from approved to under_revision_request'.
  $permissions['moderate ef_regulation state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_regulation state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_regulation state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_regulation state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_regulation state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_regulation state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from approved_for_editing to published'.
  $permissions['moderate ef_regulation state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_regulation state from approved_for_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_regulation state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_regulation state from approved_for_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from draft to requested'.
  $permissions['moderate ef_regulation state from draft to requested'] = array(
    'name' => 'moderate ef_regulation state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from draft to submitted'.
  $permissions['moderate ef_regulation state from draft to submitted'] = array(
    'name' => 'moderate ef_regulation state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from draft to submitted_qr'.
  $permissions['moderate ef_regulation state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_regulation state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_regulation state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_regulation state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_regulation state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_regulation state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from on_second_editing to published'.
  $permissions['moderate ef_regulation state from on_second_editing to published'] = array(
    'name' => 'moderate ef_regulation state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_regulation state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_regulation state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from published to approved_for_editing'.
  $permissions['moderate ef_regulation state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_regulation state from published to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from published to rejected'.
  $permissions['moderate ef_regulation state from published to rejected'] = array(
    'name' => 'moderate ef_regulation state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from published to under_revision_request'.
  $permissions['moderate ef_regulation state from published to under_revision_request'] = array(
    'name' => 'moderate ef_regulation state from published to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from published to unpublished'.
  $permissions['moderate ef_regulation state from published to unpublished'] = array(
    'name' => 'moderate ef_regulation state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_regulation state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_regulation state from ready_for_publishing to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_regulation state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_regulation state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from requested to submitted'.
  $permissions['moderate ef_regulation state from requested to submitted'] = array(
    'name' => 'moderate ef_regulation state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from submitted to approved_for_editing'.
  $permissions['moderate ef_regulation state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_regulation state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from submitted to rejected'.
  $permissions['moderate ef_regulation state from submitted to rejected'] = array(
    'name' => 'moderate ef_regulation state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from submitted to under_revision_request'.
  $permissions['moderate ef_regulation state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_regulation state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from submitted_qr to approved'.
  $permissions['moderate ef_regulation state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_regulation state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_regulation state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_regulation state from submitted_qr to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from submitted_qr to published'.
  $permissions['moderate ef_regulation state from submitted_qr to published'] = array(
    'name' => 'moderate ef_regulation state from submitted_qr to published',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from submitted_qr to rejected'.
  $permissions['moderate ef_regulation state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_regulation state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_regulation state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_regulation state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from under_revision_request to submitted'.
  $permissions['moderate ef_regulation state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_regulation state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_regulation state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_regulation state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to approved_for_editing'.
  $permissions['moderate ef_regulation state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_regulation state from unpublished to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to draft'.
  $permissions['moderate ef_regulation state from unpublished to draft'] = array(
    'name' => 'moderate ef_regulation state from unpublished to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to on_external_editing'.
  $permissions['moderate ef_regulation state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_regulation state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to on_second_editing'.
  $permissions['moderate ef_regulation state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_regulation state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to published'.
  $permissions['moderate ef_regulation state from unpublished to published'] = array(
    'name' => 'moderate ef_regulation state from unpublished to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_regulation state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_regulation state from unpublished to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to rejected'.
  $permissions['moderate ef_regulation state from unpublished to rejected'] = array(
    'name' => 'moderate ef_regulation state from unpublished to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to submitted'.
  $permissions['moderate ef_regulation state from unpublished to submitted'] = array(
    'name' => 'moderate ef_regulation state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to submitted_qr'.
  $permissions['moderate ef_regulation state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_regulation state from unpublished to submitted_qr',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_regulation state from unpublished to under_revision_request'.
  $permissions['moderate ef_regulation state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_regulation state from unpublished to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from approved to under_revision_request'.
  $permissions['moderate ef_report state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_report state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_report state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_report state from approved_for_editing to on_external_editing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_report state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_report state from approved_for_editing to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from approved_for_editing to published'.
  $permissions['moderate ef_report state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_report state from approved_for_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_report state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_report state from approved_for_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from draft to requested'.
  $permissions['moderate ef_report state from draft to requested'] = array(
    'name' => 'moderate ef_report state from draft to requested',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from draft to submitted'.
  $permissions['moderate ef_report state from draft to submitted'] = array(
    'name' => 'moderate ef_report state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from draft to submitted_qr'.
  $permissions['moderate ef_report state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_report state from draft to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_report state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_report state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_report state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_report state from on_external_editing to on_second_editing',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from on_second_editing to published'.
  $permissions['moderate ef_report state from on_second_editing to published'] = array(
    'name' => 'moderate ef_report state from on_second_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_report state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_report state from on_second_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from published to approved_for_editing'.
  $permissions['moderate ef_report state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_report state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from published to rejected'.
  $permissions['moderate ef_report state from published to rejected'] = array(
    'name' => 'moderate ef_report state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from published to under_revision_request'.
  $permissions['moderate ef_report state from published to under_revision_request'] = array(
    'name' => 'moderate ef_report state from published to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from published to unpublished'.
  $permissions['moderate ef_report state from published to unpublished'] = array(
    'name' => 'moderate ef_report state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_report state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_report state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_report state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_report state from ready_for_publishing to on_second_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from requested to submitted'.
  $permissions['moderate ef_report state from requested to submitted'] = array(
    'name' => 'moderate ef_report state from requested to submitted',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from submitted to approved_for_editing'.
  $permissions['moderate ef_report state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_report state from submitted to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from submitted to rejected'.
  $permissions['moderate ef_report state from submitted to rejected'] = array(
    'name' => 'moderate ef_report state from submitted to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from submitted to under_revision_request'.
  $permissions['moderate ef_report state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_report state from submitted to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from submitted_qr to approved'.
  $permissions['moderate ef_report state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_report state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_report state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_report state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from submitted_qr to published'.
  $permissions['moderate ef_report state from submitted_qr to published'] = array(
    'name' => 'moderate ef_report state from submitted_qr to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from submitted_qr to rejected'.
  $permissions['moderate ef_report state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_report state from submitted_qr to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_report state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_report state from submitted_qr to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from under_revision_request to submitted'.
  $permissions['moderate ef_report state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_report state from under_revision_request to submitted',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_report state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_report state from under_revision_request to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to approved_for_editing'.
  $permissions['moderate ef_report state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_report state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to draft'.
  $permissions['moderate ef_report state from unpublished to draft'] = array(
    'name' => 'moderate ef_report state from unpublished to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to on_external_editing'.
  $permissions['moderate ef_report state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_report state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to on_second_editing'.
  $permissions['moderate ef_report state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_report state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to published'.
  $permissions['moderate ef_report state from unpublished to published'] = array(
    'name' => 'moderate ef_report state from unpublished to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_report state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_report state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to rejected'.
  $permissions['moderate ef_report state from unpublished to rejected'] = array(
    'name' => 'moderate ef_report state from unpublished to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to submitted'.
  $permissions['moderate ef_report state from unpublished to submitted'] = array(
    'name' => 'moderate ef_report state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to submitted_qr'.
  $permissions['moderate ef_report state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_report state from unpublished to submitted_qr',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_report state from unpublished to under_revision_request'.
  $permissions['moderate ef_report state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_report state from unpublished to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from approved to under_revision_request'.
  $permissions['moderate ef_restructuring_in_smes state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_restructuring_in_smes state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_restructuring_in_smes state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from approved_for_editing to published'.
  $permissions['moderate ef_restructuring_in_smes state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from approved_for_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_restructuring_in_smes state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from approved_for_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from draft to requested'.
  $permissions['moderate ef_restructuring_in_smes state from draft to requested'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from draft to submitted'.
  $permissions['moderate ef_restructuring_in_smes state from draft to submitted'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from draft to submitted_qr'.
  $permissions['moderate ef_restructuring_in_smes state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_restructuring_in_smes state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_restructuring_in_smes state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from on_second_editing to published'.
  $permissions['moderate ef_restructuring_in_smes state from on_second_editing to published'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_restructuring_in_smes state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from published to approved_for_editing'.
  $permissions['moderate ef_restructuring_in_smes state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from published to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from published to rejected'.
  $permissions['moderate ef_restructuring_in_smes state from published to rejected'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from published to under_revision_request'.
  $permissions['moderate ef_restructuring_in_smes state from published to under_revision_request'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from published to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from published to unpublished'.
  $permissions['moderate ef_restructuring_in_smes state from published to unpublished'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_restructuring_in_smes state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from ready_for_publishing to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_restructuring_in_smes state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from requested to submitted'.
  $permissions['moderate ef_restructuring_in_smes state from requested to submitted'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from submitted to approved_for_editing'.
  $permissions['moderate ef_restructuring_in_smes state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from submitted to rejected'.
  $permissions['moderate ef_restructuring_in_smes state from submitted to rejected'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from submitted to under_revision_request'.
  $permissions['moderate ef_restructuring_in_smes state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from submitted_qr to approved'.
  $permissions['moderate ef_restructuring_in_smes state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_restructuring_in_smes state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from submitted_qr to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from submitted_qr to published'.
  $permissions['moderate ef_restructuring_in_smes state from submitted_qr to published'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from submitted_qr to published',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from submitted_qr to rejected'.
  $permissions['moderate ef_restructuring_in_smes state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_restructuring_in_smes state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from under_revision_request to submitted'.
  $permissions['moderate ef_restructuring_in_smes state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_restructuring_in_smes state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to approved_for_editing'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to draft'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to draft'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to on_external_editing'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to on_second_editing'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to published'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to published'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to rejected'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to rejected'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to submitted'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to submitted'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to submitted_qr'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to submitted_qr',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_restructuring_in_smes state from unpublished to under_revision_request'.
  $permissions['moderate ef_restructuring_in_smes state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_restructuring_in_smes state from unpublished to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from approved to under_revision_request'.
  $permissions['moderate ef_support_instrument state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_support_instrument state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_support_instrument state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_support_instrument state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_support_instrument state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_support_instrument state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from approved_for_editing to published'.
  $permissions['moderate ef_support_instrument state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_support_instrument state from approved_for_editing to published',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_support_instrument state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_support_instrument state from approved_for_editing to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from draft to requested'.
  $permissions['moderate ef_support_instrument state from draft to requested'] = array(
    'name' => 'moderate ef_support_instrument state from draft to requested',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from draft to submitted'.
  $permissions['moderate ef_support_instrument state from draft to submitted'] = array(
    'name' => 'moderate ef_support_instrument state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from draft to submitted_qr'.
  $permissions['moderate ef_support_instrument state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_support_instrument state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_support_instrument state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_support_instrument state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_support_instrument state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_support_instrument state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from on_second_editing to published'.
  $permissions['moderate ef_support_instrument state from on_second_editing to published'] = array(
    'name' => 'moderate ef_support_instrument state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_support_instrument state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_support_instrument state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from published to approved_for_editing'.
  $permissions['moderate ef_support_instrument state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_support_instrument state from published to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from published to rejected'.
  $permissions['moderate ef_support_instrument state from published to rejected'] = array(
    'name' => 'moderate ef_support_instrument state from published to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from published to under_revision_request'.
  $permissions['moderate ef_support_instrument state from published to under_revision_request'] = array(
    'name' => 'moderate ef_support_instrument state from published to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from published to unpublished'.
  $permissions['moderate ef_support_instrument state from published to unpublished'] = array(
    'name' => 'moderate ef_support_instrument state from published to unpublished',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_support_instrument state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_support_instrument state from ready_for_publishing to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_support_instrument state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_support_instrument state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from requested to submitted'.
  $permissions['moderate ef_support_instrument state from requested to submitted'] = array(
    'name' => 'moderate ef_support_instrument state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from submitted to approved_for_editing'.
  $permissions['moderate ef_support_instrument state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_support_instrument state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from submitted to rejected'.
  $permissions['moderate ef_support_instrument state from submitted to rejected'] = array(
    'name' => 'moderate ef_support_instrument state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from submitted to under_revision_request'.
  $permissions['moderate ef_support_instrument state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_support_instrument state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from submitted_qr to approved'.
  $permissions['moderate ef_support_instrument state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_support_instrument state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_support_instrument state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_support_instrument state from submitted_qr to approved_for_editing',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from submitted_qr to published'.
  $permissions['moderate ef_support_instrument state from submitted_qr to published'] = array(
    'name' => 'moderate ef_support_instrument state from submitted_qr to published',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from submitted_qr to rejected'.
  $permissions['moderate ef_support_instrument state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_support_instrument state from submitted_qr to rejected',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_support_instrument state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_support_instrument state from submitted_qr to under_revision_request',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from under_revision_request to submitted'.
  $permissions['moderate ef_support_instrument state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_support_instrument state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_support_instrument state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_support_instrument state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to approved_for_editing'.
  $permissions['moderate ef_support_instrument state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to approved_for_editing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to draft'.
  $permissions['moderate ef_support_instrument state from unpublished to draft'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to on_external_editing'.
  $permissions['moderate ef_support_instrument state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to on_second_editing'.
  $permissions['moderate ef_support_instrument state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to published'.
  $permissions['moderate ef_support_instrument state from unpublished to published'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_support_instrument state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to ready_for_publishing',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to rejected'.
  $permissions['moderate ef_support_instrument state from unpublished to rejected'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to submitted'.
  $permissions['moderate ef_support_instrument state from unpublished to submitted'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to submitted_qr'.
  $permissions['moderate ef_support_instrument state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to submitted_qr',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_support_instrument state from unpublished to under_revision_request'.
  $permissions['moderate ef_support_instrument state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_support_instrument state from unpublished to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
