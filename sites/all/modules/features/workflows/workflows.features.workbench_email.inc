<?php
/**
 * @file
 * workflows.features.workbench_email.inc
 */

/**
 * Implements hook_workbench_email_export().
 */
function workflows_workbench_email_export() {
  $items = array(
    'approved_for_editing:on_external_editing:External Editor' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'on_external_editing',
      'role' => 'External Editor',
    ),
    'approved_for_editing:on_second_editing:Editor' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'on_second_editing',
      'role' => 'Editor',
    ),
    'approved_for_editing:published:Editor' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'published',
      'role' => 'Editor',
    ),
    'approved_for_editing:published:Eurofound Administrator' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'published',
      'role' => 'Eurofound Administrator',
    ),
    'approved_for_editing:published:Eurofound Content Manager' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'published',
      'role' => 'Eurofound Content Manager',
    ),
    'approved_for_editing:published:Quality Manager' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'published',
      'role' => 'Quality Manager',
    ),
    'approved_for_editing:ready_for_publishing:Quality Manager' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'ready_for_publishing',
      'role' => 'Quality Manager',
    ),
    'draft:submitted:Editor' => array(
      'from_name' => 'draft',
      'to_name' => 'submitted',
      'role' => 'Editor',
    ),
    'draft:submitted:Quality Manager' => array(
      'from_name' => 'draft',
      'to_name' => 'submitted',
      'role' => 'Quality Manager',
    ),
    'draft:submitted_qr:Quality Manager' => array(
      'from_name' => 'draft',
      'to_name' => 'submitted_qr',
      'role' => 'Quality Manager',
    ),
    'on_external_editing:approved_for_editing:Editor' => array(
      'from_name' => 'on_external_editing',
      'to_name' => 'approved_for_editing',
      'role' => 'Editor',
    ),
    'on_external_editing:on_second_editing:Editor' => array(
      'from_name' => 'on_external_editing',
      'to_name' => 'on_second_editing',
      'role' => 'Editor',
    ),
    'on_second_editing:published:Editor' => array(
      'from_name' => 'on_second_editing',
      'to_name' => 'published',
      'role' => 'Editor',
    ),
    'on_second_editing:published:Eurofound Administrator' => array(
      'from_name' => 'on_second_editing',
      'to_name' => 'published',
      'role' => 'Eurofound Administrator',
    ),
    'on_second_editing:published:Eurofound Content Manager' => array(
      'from_name' => 'on_second_editing',
      'to_name' => 'published',
      'role' => 'Eurofound Content Manager',
    ),
    'on_second_editing:published:Quality Manager' => array(
      'from_name' => 'on_second_editing',
      'to_name' => 'published',
      'role' => 'Quality Manager',
    ),
    'on_second_editing:ready_for_publishing:Quality Manager' => array(
      'from_name' => 'on_second_editing',
      'to_name' => 'ready_for_publishing',
      'role' => 'Quality Manager',
    ),
    'ready_for_publishing:approved_for_editing:Editor' => array(
      'from_name' => 'ready_for_publishing',
      'to_name' => 'approved_for_editing',
      'role' => 'Editor',
    ),
    'ready_for_publishing:on_second_editing:Editor' => array(
      'from_name' => 'ready_for_publishing',
      'to_name' => 'on_second_editing',
      'role' => 'Editor',
    ),
    'requested:submitted:Editor' => array(
      'from_name' => 'requested',
      'to_name' => 'submitted',
      'role' => 'Editor',
    ),
    'requested:submitted:Quality Manager' => array(
      'from_name' => 'requested',
      'to_name' => 'submitted',
      'role' => 'Quality Manager',
    ),
    'submitted:approved:Quality Manager' => array(
      'from_name' => 'submitted',
      'to_name' => 'approved',
      'role' => 'Quality Manager',
    ),
    'submitted:approved_for_editing:Editor' => array(
      'from_name' => 'submitted',
      'to_name' => 'approved_for_editing',
      'role' => 'Editor',
    ),
    'submitted_qr:approved_for_editing:Editor' => array(
      'from_name' => 'submitted_qr',
      'to_name' => 'approved_for_editing',
      'role' => 'Editor',
    ),
    'under_revision_request:submitted:Editor' => array(
      'from_name' => 'under_revision_request',
      'to_name' => 'submitted',
      'role' => 'Editor',
    ),
    'under_revision_request:submitted:Quality Manager' => array(
      'from_name' => 'under_revision_request',
      'to_name' => 'submitted',
      'role' => 'Quality Manager',
    ),
    'under_revision_request:submitted_qr:Quality Manager' => array(
      'from_name' => 'under_revision_request',
      'to_name' => 'submitted_qr',
      'role' => 'Quality Manager',
    ),
    'unpublished:approved_for_editing:Editor' => array(
      'from_name' => 'unpublished',
      'to_name' => 'approved_for_editing',
      'role' => 'Editor',
    ),
    'unpublished:on_external_editing:External Editor' => array(
      'from_name' => 'unpublished',
      'to_name' => 'on_external_editing',
      'role' => 'External Editor',
    ),
    'unpublished:on_second_editing:Editor' => array(
      'from_name' => 'unpublished',
      'to_name' => 'on_second_editing',
      'role' => 'Editor',
    ),
    'unpublished:published:Editor' => array(
      'from_name' => 'unpublished',
      'to_name' => 'published',
      'role' => 'Editor',
    ),
    'unpublished:published:Eurofound Administrator' => array(
      'from_name' => 'unpublished',
      'to_name' => 'published',
      'role' => 'Eurofound Administrator',
    ),
    'unpublished:published:Eurofound Content Manager' => array(
      'from_name' => 'unpublished',
      'to_name' => 'published',
      'role' => 'Eurofound Content Manager',
    ),
    'unpublished:published:Quality Manager' => array(
      'from_name' => 'unpublished',
      'to_name' => 'published',
      'role' => 'Quality Manager',
    ),
    'unpublished:ready_for_publishing:Quality Manager' => array(
      'from_name' => 'unpublished',
      'to_name' => 'ready_for_publishing',
      'role' => 'Quality Manager',
    ),
    'unpublished:submitted:Editor' => array(
      'from_name' => 'unpublished',
      'to_name' => 'submitted',
      'role' => 'Editor',
    ),
    'unpublished:submitted:Quality Manager' => array(
      'from_name' => 'unpublished',
      'to_name' => 'submitted',
      'role' => 'Quality Manager',
    ),
    'unpublished:submitted_qr:Quality Manager' => array(
      'from_name' => 'unpublished',
      'to_name' => 'submitted_qr',
      'role' => 'Quality Manager',
    ),
  );
  return $items;
}
