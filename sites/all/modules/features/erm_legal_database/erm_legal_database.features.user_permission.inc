<?php
/**
 * @file
 * erm_legal_database.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function erm_legal_database_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'moderate ef_erm_regulation state from approved to under_revision_request'.
  $permissions['moderate ef_erm_regulation state from approved to under_revision_request'] = array(
    'name' => 'moderate ef_erm_regulation state from approved to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from approved_for_editing to on_external_editing'.
  $permissions['moderate ef_erm_regulation state from approved_for_editing to on_external_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from approved_for_editing to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from approved_for_editing to on_second_editing'.
  $permissions['moderate ef_erm_regulation state from approved_for_editing to on_second_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from approved_for_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from approved_for_editing to published'.
  $permissions['moderate ef_erm_regulation state from approved_for_editing to published'] = array(
    'name' => 'moderate ef_erm_regulation state from approved_for_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from approved_for_editing to ready_for_publishing'.
  $permissions['moderate ef_erm_regulation state from approved_for_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_erm_regulation state from approved_for_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from draft to requested'.
  $permissions['moderate ef_erm_regulation state from draft to requested'] = array(
    'name' => 'moderate ef_erm_regulation state from draft to requested',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from draft to submitted'.
  $permissions['moderate ef_erm_regulation state from draft to submitted'] = array(
    'name' => 'moderate ef_erm_regulation state from draft to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from draft to submitted_qr'.
  $permissions['moderate ef_erm_regulation state from draft to submitted_qr'] = array(
    'name' => 'moderate ef_erm_regulation state from draft to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from on_external_editing to approved_for_editing'.
  $permissions['moderate ef_erm_regulation state from on_external_editing to approved_for_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from on_external_editing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from on_external_editing to on_second_editing'.
  $permissions['moderate ef_erm_regulation state from on_external_editing to on_second_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from on_external_editing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from on_second_editing to published'.
  $permissions['moderate ef_erm_regulation state from on_second_editing to published'] = array(
    'name' => 'moderate ef_erm_regulation state from on_second_editing to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from on_second_editing to ready_for_publishing'.
  $permissions['moderate ef_erm_regulation state from on_second_editing to ready_for_publishing'] = array(
    'name' => 'moderate ef_erm_regulation state from on_second_editing to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from published to approved_for_editing'.
  $permissions['moderate ef_erm_regulation state from published to approved_for_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from published to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from published to rejected'.
  $permissions['moderate ef_erm_regulation state from published to rejected'] = array(
    'name' => 'moderate ef_erm_regulation state from published to rejected',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from published to requested'.
  $permissions['moderate ef_erm_regulation state from published to requested'] = array(
    'name' => 'moderate ef_erm_regulation state from published to requested',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from published to under_revision_request'.
  $permissions['moderate ef_erm_regulation state from published to under_revision_request'] = array(
    'name' => 'moderate ef_erm_regulation state from published to under_revision_request',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from published to unpublished'.
  $permissions['moderate ef_erm_regulation state from published to unpublished'] = array(
    'name' => 'moderate ef_erm_regulation state from published to unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from ready_for_publishing to approved_for_editing'.
  $permissions['moderate ef_erm_regulation state from ready_for_publishing to approved_for_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from ready_for_publishing to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from ready_for_publishing to on_second_editing'.
  $permissions['moderate ef_erm_regulation state from ready_for_publishing to on_second_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from ready_for_publishing to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from requested to submitted'.
  $permissions['moderate ef_erm_regulation state from requested to submitted'] = array(
    'name' => 'moderate ef_erm_regulation state from requested to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from requested to submitted_qr'.
  $permissions['moderate ef_erm_regulation state from requested to submitted_qr'] = array(
    'name' => 'moderate ef_erm_regulation state from requested to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from submitted to approved_for_editing'.
  $permissions['moderate ef_erm_regulation state from submitted to approved_for_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from submitted to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from submitted to rejected'.
  $permissions['moderate ef_erm_regulation state from submitted to rejected'] = array(
    'name' => 'moderate ef_erm_regulation state from submitted to rejected',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from submitted to under_revision_request'.
  $permissions['moderate ef_erm_regulation state from submitted to under_revision_request'] = array(
    'name' => 'moderate ef_erm_regulation state from submitted to under_revision_request',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from submitted_qr to approved'.
  $permissions['moderate ef_erm_regulation state from submitted_qr to approved'] = array(
    'name' => 'moderate ef_erm_regulation state from submitted_qr to approved',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from submitted_qr to approved_for_editing'.
  $permissions['moderate ef_erm_regulation state from submitted_qr to approved_for_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from submitted_qr to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from submitted_qr to published'.
  $permissions['moderate ef_erm_regulation state from submitted_qr to published'] = array(
    'name' => 'moderate ef_erm_regulation state from submitted_qr to published',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from submitted_qr to rejected'.
  $permissions['moderate ef_erm_regulation state from submitted_qr to rejected'] = array(
    'name' => 'moderate ef_erm_regulation state from submitted_qr to rejected',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from submitted_qr to under_revision_request'.
  $permissions['moderate ef_erm_regulation state from submitted_qr to under_revision_request'] = array(
    'name' => 'moderate ef_erm_regulation state from submitted_qr to under_revision_request',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from under_revision_request to submitted'.
  $permissions['moderate ef_erm_regulation state from under_revision_request to submitted'] = array(
    'name' => 'moderate ef_erm_regulation state from under_revision_request to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from under_revision_request to submitted_qr'.
  $permissions['moderate ef_erm_regulation state from under_revision_request to submitted_qr'] = array(
    'name' => 'moderate ef_erm_regulation state from under_revision_request to submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to approved_for_editing'.
  $permissions['moderate ef_erm_regulation state from unpublished to approved_for_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to approved_for_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to draft'.
  $permissions['moderate ef_erm_regulation state from unpublished to draft'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to draft',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to on_external_editing'.
  $permissions['moderate ef_erm_regulation state from unpublished to on_external_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to on_external_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to on_second_editing'.
  $permissions['moderate ef_erm_regulation state from unpublished to on_second_editing'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to on_second_editing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to published'.
  $permissions['moderate ef_erm_regulation state from unpublished to published'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to published',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to ready_for_publishing'.
  $permissions['moderate ef_erm_regulation state from unpublished to ready_for_publishing'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to ready_for_publishing',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to rejected'.
  $permissions['moderate ef_erm_regulation state from unpublished to rejected'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to rejected',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to requested'.
  $permissions['moderate ef_erm_regulation state from unpublished to requested'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to requested',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to submitted'.
  $permissions['moderate ef_erm_regulation state from unpublished to submitted'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to submitted',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to submitted_qr'.
  $permissions['moderate ef_erm_regulation state from unpublished to submitted_qr'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to submitted_qr',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ef_erm_regulation state from unpublished to under_revision_request'.
  $permissions['moderate ef_erm_regulation state from unpublished to under_revision_request'] = array(
    'name' => 'moderate ef_erm_regulation state from unpublished to under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
