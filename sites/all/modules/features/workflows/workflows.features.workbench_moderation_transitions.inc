<?php
/**
 * @file
 * workflows.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function workflows_workbench_moderation_export_transitions() {
  $items = array(
    'approved:under_revision_request' => array(
      'from_name' => 'approved',
      'to_name' => 'under_revision_request',
    ),
    'approved_for_editing:on_external_editing' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'on_external_editing',
    ),
    'approved_for_editing:on_second_editing' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'on_second_editing',
    ),
    'approved_for_editing:published' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'published',
    ),
    'approved_for_editing:ready_for_publishing' => array(
      'from_name' => 'approved_for_editing',
      'to_name' => 'ready_for_publishing',
    ),
    'draft:requested' => array(
      'from_name' => 'draft',
      'to_name' => 'requested',
    ),
    'draft:submitted' => array(
      'from_name' => 'draft',
      'to_name' => 'submitted',
    ),
    'draft:submitted_qr' => array(
      'from_name' => 'draft',
      'to_name' => 'submitted_qr',
    ),
    'on_external_editing:approved_for_editing' => array(
      'from_name' => 'on_external_editing',
      'to_name' => 'approved_for_editing',
    ),
    'on_external_editing:on_second_editing' => array(
      'from_name' => 'on_external_editing',
      'to_name' => 'on_second_editing',
    ),
    'on_second_editing:published' => array(
      'from_name' => 'on_second_editing',
      'to_name' => 'published',
    ),
    'on_second_editing:ready_for_publishing' => array(
      'from_name' => 'on_second_editing',
      'to_name' => 'ready_for_publishing',
    ),
    'published:approved_for_editing' => array(
      'from_name' => 'published',
      'to_name' => 'approved_for_editing',
    ),
    'published:rejected' => array(
      'from_name' => 'published',
      'to_name' => 'rejected',
    ),
    'published:under_revision_request' => array(
      'from_name' => 'published',
      'to_name' => 'under_revision_request',
    ),
    'published:unpublished' => array(
      'from_name' => 'published',
      'to_name' => 'unpublished',
    ),
    'ready_for_publishing:approved_for_editing' => array(
      'from_name' => 'ready_for_publishing',
      'to_name' => 'approved_for_editing',
    ),
    'ready_for_publishing:on_second_editing' => array(
      'from_name' => 'ready_for_publishing',
      'to_name' => 'on_second_editing',
    ),
    'requested:submitted' => array(
      'from_name' => 'requested',
      'to_name' => 'submitted',
    ),
    'submitted:approved_for_editing' => array(
      'from_name' => 'submitted',
      'to_name' => 'approved_for_editing',
    ),
    'submitted:rejected' => array(
      'from_name' => 'submitted',
      'to_name' => 'rejected',
    ),
    'submitted:under_revision_request' => array(
      'from_name' => 'submitted',
      'to_name' => 'under_revision_request',
    ),
    'submitted_qr:approved' => array(
      'from_name' => 'submitted_qr',
      'to_name' => 'approved',
    ),
    'submitted_qr:approved_for_editing' => array(
      'from_name' => 'submitted_qr',
      'to_name' => 'approved_for_editing',
    ),
    'submitted_qr:published' => array(
      'from_name' => 'submitted_qr',
      'to_name' => 'published',
    ),
    'submitted_qr:rejected' => array(
      'from_name' => 'submitted_qr',
      'to_name' => 'rejected',
    ),
    'submitted_qr:under_revision_request' => array(
      'from_name' => 'submitted_qr',
      'to_name' => 'under_revision_request',
    ),
    'under_revision_request:submitted' => array(
      'from_name' => 'under_revision_request',
      'to_name' => 'submitted',
    ),
    'under_revision_request:submitted_qr' => array(
      'from_name' => 'under_revision_request',
      'to_name' => 'submitted_qr',
    ),
    'unpublished:approved_for_editing' => array(
      'from_name' => 'unpublished',
      'to_name' => 'approved_for_editing',
    ),
    'unpublished:draft' => array(
      'from_name' => 'unpublished',
      'to_name' => 'draft',
    ),
    'unpublished:on_external_editing' => array(
      'from_name' => 'unpublished',
      'to_name' => 'on_external_editing',
    ),
    'unpublished:on_second_editing' => array(
      'from_name' => 'unpublished',
      'to_name' => 'on_second_editing',
    ),
    'unpublished:published' => array(
      'from_name' => 'unpublished',
      'to_name' => 'published',
    ),
    'unpublished:ready_for_publishing' => array(
      'from_name' => 'unpublished',
      'to_name' => 'ready_for_publishing',
    ),
    'unpublished:rejected' => array(
      'from_name' => 'unpublished',
      'to_name' => 'rejected',
    ),
    'unpublished:submitted' => array(
      'from_name' => 'unpublished',
      'to_name' => 'submitted',
    ),
    'unpublished:submitted_qr' => array(
      'from_name' => 'unpublished',
      'to_name' => 'submitted_qr',
    ),
    'unpublished:under_revision_request' => array(
      'from_name' => 'unpublished',
      'to_name' => 'under_revision_request',
    ),
  );
  return $items;
}
