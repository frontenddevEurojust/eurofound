<?php
/**
 * @file
 * fe_workbench_moderation_state_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fe_workbench_moderation_state_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit all content in approved'.
  $permissions['edit all content in approved'] = array(
    'name' => 'edit all content in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in approved_for_editing'.
  $permissions['edit all content in approved_for_editing'] = array(
    'name' => 'edit all content in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in draft'.
  $permissions['edit all content in draft'] = array(
    'name' => 'edit all content in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in on_external_editing'.
  $permissions['edit all content in on_external_editing'] = array(
    'name' => 'edit all content in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in on_second_editing'.
  $permissions['edit all content in on_second_editing'] = array(
    'name' => 'edit all content in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in proposal'.
  $permissions['edit all content in proposal'] = array(
    'name' => 'edit all content in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in published'.
  $permissions['edit all content in published'] = array(
    'name' => 'edit all content in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in ready_for_publishing'.
  $permissions['edit all content in ready_for_publishing'] = array(
    'name' => 'edit all content in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in rejected'.
  $permissions['edit all content in rejected'] = array(
    'name' => 'edit all content in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in requested'.
  $permissions['edit all content in requested'] = array(
    'name' => 'edit all content in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in submitted'.
  $permissions['edit all content in submitted'] = array(
    'name' => 'edit all content in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in submitted_qr'.
  $permissions['edit all content in submitted_qr'] = array(
    'name' => 'edit all content in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in under_revision_request'.
  $permissions['edit all content in under_revision_request'] = array(
    'name' => 'edit all content in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit all content in unpublished'.
  $permissions['edit all content in unpublished'] = array(
    'name' => 'edit all content in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in approved'.
  $permissions['edit case_study_publication in approved'] = array(
    'name' => 'edit case_study_publication in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in approved_for_editing'.
  $permissions['edit case_study_publication in approved_for_editing'] = array(
    'name' => 'edit case_study_publication in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in draft'.
  $permissions['edit case_study_publication in draft'] = array(
    'name' => 'edit case_study_publication in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in on_external_editing'.
  $permissions['edit case_study_publication in on_external_editing'] = array(
    'name' => 'edit case_study_publication in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in on_second_editing'.
  $permissions['edit case_study_publication in on_second_editing'] = array(
    'name' => 'edit case_study_publication in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in proposal'.
  $permissions['edit case_study_publication in proposal'] = array(
    'name' => 'edit case_study_publication in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in published'.
  $permissions['edit case_study_publication in published'] = array(
    'name' => 'edit case_study_publication in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in ready_for_publishing'.
  $permissions['edit case_study_publication in ready_for_publishing'] = array(
    'name' => 'edit case_study_publication in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in rejected'.
  $permissions['edit case_study_publication in rejected'] = array(
    'name' => 'edit case_study_publication in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in requested'.
  $permissions['edit case_study_publication in requested'] = array(
    'name' => 'edit case_study_publication in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in submitted'.
  $permissions['edit case_study_publication in submitted'] = array(
    'name' => 'edit case_study_publication in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in submitted_qr'.
  $permissions['edit case_study_publication in submitted_qr'] = array(
    'name' => 'edit case_study_publication in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in under_revision_request'.
  $permissions['edit case_study_publication in under_revision_request'] = array(
    'name' => 'edit case_study_publication in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit case_study_publication in unpublished'.
  $permissions['edit case_study_publication in unpublished'] = array(
    'name' => 'edit case_study_publication in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in approved'.
  $permissions['edit ef_annual_progress_report in approved'] = array(
    'name' => 'edit ef_annual_progress_report in approved',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in approved_for_editing'.
  $permissions['edit ef_annual_progress_report in approved_for_editing'] = array(
    'name' => 'edit ef_annual_progress_report in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in draft'.
  $permissions['edit ef_annual_progress_report in draft'] = array(
    'name' => 'edit ef_annual_progress_report in draft',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in on_external_editing'.
  $permissions['edit ef_annual_progress_report in on_external_editing'] = array(
    'name' => 'edit ef_annual_progress_report in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in on_second_editing'.
  $permissions['edit ef_annual_progress_report in on_second_editing'] = array(
    'name' => 'edit ef_annual_progress_report in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in proposal'.
  $permissions['edit ef_annual_progress_report in proposal'] = array(
    'name' => 'edit ef_annual_progress_report in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in published'.
  $permissions['edit ef_annual_progress_report in published'] = array(
    'name' => 'edit ef_annual_progress_report in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in ready_for_publishing'.
  $permissions['edit ef_annual_progress_report in ready_for_publishing'] = array(
    'name' => 'edit ef_annual_progress_report in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in rejected'.
  $permissions['edit ef_annual_progress_report in rejected'] = array(
    'name' => 'edit ef_annual_progress_report in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in requested'.
  $permissions['edit ef_annual_progress_report in requested'] = array(
    'name' => 'edit ef_annual_progress_report in requested',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in submitted'.
  $permissions['edit ef_annual_progress_report in submitted'] = array(
    'name' => 'edit ef_annual_progress_report in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in submitted_qr'.
  $permissions['edit ef_annual_progress_report in submitted_qr'] = array(
    'name' => 'edit ef_annual_progress_report in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in under_revision_request'.
  $permissions['edit ef_annual_progress_report in under_revision_request'] = array(
    'name' => 'edit ef_annual_progress_report in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_annual_progress_report in unpublished'.
  $permissions['edit ef_annual_progress_report in unpublished'] = array(
    'name' => 'edit ef_annual_progress_report in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in approved'.
  $permissions['edit ef_case_study in approved'] = array(
    'name' => 'edit ef_case_study in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in approved_for_editing'.
  $permissions['edit ef_case_study in approved_for_editing'] = array(
    'name' => 'edit ef_case_study in approved_for_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in draft'.
  $permissions['edit ef_case_study in draft'] = array(
    'name' => 'edit ef_case_study in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in on_external_editing'.
  $permissions['edit ef_case_study in on_external_editing'] = array(
    'name' => 'edit ef_case_study in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in on_second_editing'.
  $permissions['edit ef_case_study in on_second_editing'] = array(
    'name' => 'edit ef_case_study in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in proposal'.
  $permissions['edit ef_case_study in proposal'] = array(
    'name' => 'edit ef_case_study in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in published'.
  $permissions['edit ef_case_study in published'] = array(
    'name' => 'edit ef_case_study in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in ready_for_publishing'.
  $permissions['edit ef_case_study in ready_for_publishing'] = array(
    'name' => 'edit ef_case_study in ready_for_publishing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in rejected'.
  $permissions['edit ef_case_study in rejected'] = array(
    'name' => 'edit ef_case_study in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in requested'.
  $permissions['edit ef_case_study in requested'] = array(
    'name' => 'edit ef_case_study in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in submitted'.
  $permissions['edit ef_case_study in submitted'] = array(
    'name' => 'edit ef_case_study in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in submitted_qr'.
  $permissions['edit ef_case_study in submitted_qr'] = array(
    'name' => 'edit ef_case_study in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in under_revision_request'.
  $permissions['edit ef_case_study in under_revision_request'] = array(
    'name' => 'edit ef_case_study in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_case_study in unpublished'.
  $permissions['edit ef_case_study in unpublished'] = array(
    'name' => 'edit ef_case_study in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in approved'.
  $permissions['edit ef_comparative_analytical_report in approved'] = array(
    'name' => 'edit ef_comparative_analytical_report in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in approved_for_editing'.
  $permissions['edit ef_comparative_analytical_report in approved_for_editing'] = array(
    'name' => 'edit ef_comparative_analytical_report in approved_for_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in draft'.
  $permissions['edit ef_comparative_analytical_report in draft'] = array(
    'name' => 'edit ef_comparative_analytical_report in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in on_external_editing'.
  $permissions['edit ef_comparative_analytical_report in on_external_editing'] = array(
    'name' => 'edit ef_comparative_analytical_report in on_external_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in on_second_editing'.
  $permissions['edit ef_comparative_analytical_report in on_second_editing'] = array(
    'name' => 'edit ef_comparative_analytical_report in on_second_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in proposal'.
  $permissions['edit ef_comparative_analytical_report in proposal'] = array(
    'name' => 'edit ef_comparative_analytical_report in proposal',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in published'.
  $permissions['edit ef_comparative_analytical_report in published'] = array(
    'name' => 'edit ef_comparative_analytical_report in published',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in ready_for_publishing'.
  $permissions['edit ef_comparative_analytical_report in ready_for_publishing'] = array(
    'name' => 'edit ef_comparative_analytical_report in ready_for_publishing',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in rejected'.
  $permissions['edit ef_comparative_analytical_report in rejected'] = array(
    'name' => 'edit ef_comparative_analytical_report in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in requested'.
  $permissions['edit ef_comparative_analytical_report in requested'] = array(
    'name' => 'edit ef_comparative_analytical_report in requested',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in submitted'.
  $permissions['edit ef_comparative_analytical_report in submitted'] = array(
    'name' => 'edit ef_comparative_analytical_report in submitted',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in submitted_qr'.
  $permissions['edit ef_comparative_analytical_report in submitted_qr'] = array(
    'name' => 'edit ef_comparative_analytical_report in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in under_revision_request'.
  $permissions['edit ef_comparative_analytical_report in under_revision_request'] = array(
    'name' => 'edit ef_comparative_analytical_report in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_comparative_analytical_report in unpublished'.
  $permissions['edit ef_comparative_analytical_report in unpublished'] = array(
    'name' => 'edit ef_comparative_analytical_report in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in approved'.
  $permissions['edit ef_erm_regulation in approved'] = array(
    'name' => 'edit ef_erm_regulation in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in approved_for_editing'.
  $permissions['edit ef_erm_regulation in approved_for_editing'] = array(
    'name' => 'edit ef_erm_regulation in approved_for_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in draft'.
  $permissions['edit ef_erm_regulation in draft'] = array(
    'name' => 'edit ef_erm_regulation in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in on_external_editing'.
  $permissions['edit ef_erm_regulation in on_external_editing'] = array(
    'name' => 'edit ef_erm_regulation in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in on_second_editing'.
  $permissions['edit ef_erm_regulation in on_second_editing'] = array(
    'name' => 'edit ef_erm_regulation in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in proposal'.
  $permissions['edit ef_erm_regulation in proposal'] = array(
    'name' => 'edit ef_erm_regulation in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in published'.
  $permissions['edit ef_erm_regulation in published'] = array(
    'name' => 'edit ef_erm_regulation in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in ready_for_publishing'.
  $permissions['edit ef_erm_regulation in ready_for_publishing'] = array(
    'name' => 'edit ef_erm_regulation in ready_for_publishing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in rejected'.
  $permissions['edit ef_erm_regulation in rejected'] = array(
    'name' => 'edit ef_erm_regulation in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in requested'.
  $permissions['edit ef_erm_regulation in requested'] = array(
    'name' => 'edit ef_erm_regulation in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in submitted'.
  $permissions['edit ef_erm_regulation in submitted'] = array(
    'name' => 'edit ef_erm_regulation in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in submitted_qr'.
  $permissions['edit ef_erm_regulation in submitted_qr'] = array(
    'name' => 'edit ef_erm_regulation in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in under_revision_request'.
  $permissions['edit ef_erm_regulation in under_revision_request'] = array(
    'name' => 'edit ef_erm_regulation in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_erm_regulation in unpublished'.
  $permissions['edit ef_erm_regulation in unpublished'] = array(
    'name' => 'edit ef_erm_regulation in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in approved'.
  $permissions['edit ef_factsheet in approved'] = array(
    'name' => 'edit ef_factsheet in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in approved_for_editing'.
  $permissions['edit ef_factsheet in approved_for_editing'] = array(
    'name' => 'edit ef_factsheet in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in draft'.
  $permissions['edit ef_factsheet in draft'] = array(
    'name' => 'edit ef_factsheet in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in on_external_editing'.
  $permissions['edit ef_factsheet in on_external_editing'] = array(
    'name' => 'edit ef_factsheet in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in on_second_editing'.
  $permissions['edit ef_factsheet in on_second_editing'] = array(
    'name' => 'edit ef_factsheet in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in proposal'.
  $permissions['edit ef_factsheet in proposal'] = array(
    'name' => 'edit ef_factsheet in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in published'.
  $permissions['edit ef_factsheet in published'] = array(
    'name' => 'edit ef_factsheet in published',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in ready_for_publishing'.
  $permissions['edit ef_factsheet in ready_for_publishing'] = array(
    'name' => 'edit ef_factsheet in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in rejected'.
  $permissions['edit ef_factsheet in rejected'] = array(
    'name' => 'edit ef_factsheet in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in requested'.
  $permissions['edit ef_factsheet in requested'] = array(
    'name' => 'edit ef_factsheet in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in submitted'.
  $permissions['edit ef_factsheet in submitted'] = array(
    'name' => 'edit ef_factsheet in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in submitted_qr'.
  $permissions['edit ef_factsheet in submitted_qr'] = array(
    'name' => 'edit ef_factsheet in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in under_revision_request'.
  $permissions['edit ef_factsheet in under_revision_request'] = array(
    'name' => 'edit ef_factsheet in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_factsheet in unpublished'.
  $permissions['edit ef_factsheet in unpublished'] = array(
    'name' => 'edit ef_factsheet in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in approved'.
  $permissions['edit ef_ic_quarterly_report in approved'] = array(
    'name' => 'edit ef_ic_quarterly_report in approved',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in approved_for_editing'.
  $permissions['edit ef_ic_quarterly_report in approved_for_editing'] = array(
    'name' => 'edit ef_ic_quarterly_report in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in draft'.
  $permissions['edit ef_ic_quarterly_report in draft'] = array(
    'name' => 'edit ef_ic_quarterly_report in draft',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in on_external_editing'.
  $permissions['edit ef_ic_quarterly_report in on_external_editing'] = array(
    'name' => 'edit ef_ic_quarterly_report in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in on_second_editing'.
  $permissions['edit ef_ic_quarterly_report in on_second_editing'] = array(
    'name' => 'edit ef_ic_quarterly_report in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in proposal'.
  $permissions['edit ef_ic_quarterly_report in proposal'] = array(
    'name' => 'edit ef_ic_quarterly_report in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in published'.
  $permissions['edit ef_ic_quarterly_report in published'] = array(
    'name' => 'edit ef_ic_quarterly_report in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in ready_for_publishing'.
  $permissions['edit ef_ic_quarterly_report in ready_for_publishing'] = array(
    'name' => 'edit ef_ic_quarterly_report in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in rejected'.
  $permissions['edit ef_ic_quarterly_report in rejected'] = array(
    'name' => 'edit ef_ic_quarterly_report in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in requested'.
  $permissions['edit ef_ic_quarterly_report in requested'] = array(
    'name' => 'edit ef_ic_quarterly_report in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in submitted'.
  $permissions['edit ef_ic_quarterly_report in submitted'] = array(
    'name' => 'edit ef_ic_quarterly_report in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in submitted_qr'.
  $permissions['edit ef_ic_quarterly_report in submitted_qr'] = array(
    'name' => 'edit ef_ic_quarterly_report in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in under_revision_request'.
  $permissions['edit ef_ic_quarterly_report in under_revision_request'] = array(
    'name' => 'edit ef_ic_quarterly_report in under_revision_request',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ic_quarterly_report in unpublished'.
  $permissions['edit ef_ic_quarterly_report in unpublished'] = array(
    'name' => 'edit ef_ic_quarterly_report in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in approved'.
  $permissions['edit ef_input_to_erm in approved'] = array(
    'name' => 'edit ef_input_to_erm in approved',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in approved_for_editing'.
  $permissions['edit ef_input_to_erm in approved_for_editing'] = array(
    'name' => 'edit ef_input_to_erm in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in draft'.
  $permissions['edit ef_input_to_erm in draft'] = array(
    'name' => 'edit ef_input_to_erm in draft',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in on_external_editing'.
  $permissions['edit ef_input_to_erm in on_external_editing'] = array(
    'name' => 'edit ef_input_to_erm in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in on_second_editing'.
  $permissions['edit ef_input_to_erm in on_second_editing'] = array(
    'name' => 'edit ef_input_to_erm in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in proposal'.
  $permissions['edit ef_input_to_erm in proposal'] = array(
    'name' => 'edit ef_input_to_erm in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in published'.
  $permissions['edit ef_input_to_erm in published'] = array(
    'name' => 'edit ef_input_to_erm in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in ready_for_publishing'.
  $permissions['edit ef_input_to_erm in ready_for_publishing'] = array(
    'name' => 'edit ef_input_to_erm in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in rejected'.
  $permissions['edit ef_input_to_erm in rejected'] = array(
    'name' => 'edit ef_input_to_erm in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in requested'.
  $permissions['edit ef_input_to_erm in requested'] = array(
    'name' => 'edit ef_input_to_erm in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in submitted'.
  $permissions['edit ef_input_to_erm in submitted'] = array(
    'name' => 'edit ef_input_to_erm in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in submitted_qr'.
  $permissions['edit ef_input_to_erm in submitted_qr'] = array(
    'name' => 'edit ef_input_to_erm in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in under_revision_request'.
  $permissions['edit ef_input_to_erm in under_revision_request'] = array(
    'name' => 'edit ef_input_to_erm in under_revision_request',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_input_to_erm in unpublished'.
  $permissions['edit ef_input_to_erm in unpublished'] = array(
    'name' => 'edit ef_input_to_erm in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in approved'.
  $permissions['edit ef_ir_dictionary in approved'] = array(
    'name' => 'edit ef_ir_dictionary in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in approved_for_editing'.
  $permissions['edit ef_ir_dictionary in approved_for_editing'] = array(
    'name' => 'edit ef_ir_dictionary in approved_for_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in draft'.
  $permissions['edit ef_ir_dictionary in draft'] = array(
    'name' => 'edit ef_ir_dictionary in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in on_external_editing'.
  $permissions['edit ef_ir_dictionary in on_external_editing'] = array(
    'name' => 'edit ef_ir_dictionary in on_external_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in on_second_editing'.
  $permissions['edit ef_ir_dictionary in on_second_editing'] = array(
    'name' => 'edit ef_ir_dictionary in on_second_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in proposal'.
  $permissions['edit ef_ir_dictionary in proposal'] = array(
    'name' => 'edit ef_ir_dictionary in proposal',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in published'.
  $permissions['edit ef_ir_dictionary in published'] = array(
    'name' => 'edit ef_ir_dictionary in published',
    'roles' => array(
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in ready_for_publishing'.
  $permissions['edit ef_ir_dictionary in ready_for_publishing'] = array(
    'name' => 'edit ef_ir_dictionary in ready_for_publishing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in rejected'.
  $permissions['edit ef_ir_dictionary in rejected'] = array(
    'name' => 'edit ef_ir_dictionary in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in requested'.
  $permissions['edit ef_ir_dictionary in requested'] = array(
    'name' => 'edit ef_ir_dictionary in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in submitted'.
  $permissions['edit ef_ir_dictionary in submitted'] = array(
    'name' => 'edit ef_ir_dictionary in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in submitted_qr'.
  $permissions['edit ef_ir_dictionary in submitted_qr'] = array(
    'name' => 'edit ef_ir_dictionary in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in under_revision_request'.
  $permissions['edit ef_ir_dictionary in under_revision_request'] = array(
    'name' => 'edit ef_ir_dictionary in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_ir_dictionary in unpublished'.
  $permissions['edit ef_ir_dictionary in unpublished'] = array(
    'name' => 'edit ef_ir_dictionary in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in approved'.
  $permissions['edit ef_national_contribution in approved'] = array(
    'name' => 'edit ef_national_contribution in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in approved_for_editing'.
  $permissions['edit ef_national_contribution in approved_for_editing'] = array(
    'name' => 'edit ef_national_contribution in approved_for_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in draft'.
  $permissions['edit ef_national_contribution in draft'] = array(
    'name' => 'edit ef_national_contribution in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in on_external_editing'.
  $permissions['edit ef_national_contribution in on_external_editing'] = array(
    'name' => 'edit ef_national_contribution in on_external_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in on_second_editing'.
  $permissions['edit ef_national_contribution in on_second_editing'] = array(
    'name' => 'edit ef_national_contribution in on_second_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in proposal'.
  $permissions['edit ef_national_contribution in proposal'] = array(
    'name' => 'edit ef_national_contribution in proposal',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in published'.
  $permissions['edit ef_national_contribution in published'] = array(
    'name' => 'edit ef_national_contribution in published',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in ready_for_publishing'.
  $permissions['edit ef_national_contribution in ready_for_publishing'] = array(
    'name' => 'edit ef_national_contribution in ready_for_publishing',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in rejected'.
  $permissions['edit ef_national_contribution in rejected'] = array(
    'name' => 'edit ef_national_contribution in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in requested'.
  $permissions['edit ef_national_contribution in requested'] = array(
    'name' => 'edit ef_national_contribution in requested',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in submitted'.
  $permissions['edit ef_national_contribution in submitted'] = array(
    'name' => 'edit ef_national_contribution in submitted',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in submitted_qr'.
  $permissions['edit ef_national_contribution in submitted_qr'] = array(
    'name' => 'edit ef_national_contribution in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in under_revision_request'.
  $permissions['edit ef_national_contribution in under_revision_request'] = array(
    'name' => 'edit ef_national_contribution in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_national_contribution in unpublished'.
  $permissions['edit ef_national_contribution in unpublished'] = array(
    'name' => 'edit ef_national_contribution in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in approved'.
  $permissions['edit ef_network_quarterly_report in approved'] = array(
    'name' => 'edit ef_network_quarterly_report in approved',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in approved_for_editing'.
  $permissions['edit ef_network_quarterly_report in approved_for_editing'] = array(
    'name' => 'edit ef_network_quarterly_report in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in draft'.
  $permissions['edit ef_network_quarterly_report in draft'] = array(
    'name' => 'edit ef_network_quarterly_report in draft',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in on_external_editing'.
  $permissions['edit ef_network_quarterly_report in on_external_editing'] = array(
    'name' => 'edit ef_network_quarterly_report in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in on_second_editing'.
  $permissions['edit ef_network_quarterly_report in on_second_editing'] = array(
    'name' => 'edit ef_network_quarterly_report in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in proposal'.
  $permissions['edit ef_network_quarterly_report in proposal'] = array(
    'name' => 'edit ef_network_quarterly_report in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in published'.
  $permissions['edit ef_network_quarterly_report in published'] = array(
    'name' => 'edit ef_network_quarterly_report in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in ready_for_publishing'.
  $permissions['edit ef_network_quarterly_report in ready_for_publishing'] = array(
    'name' => 'edit ef_network_quarterly_report in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in rejected'.
  $permissions['edit ef_network_quarterly_report in rejected'] = array(
    'name' => 'edit ef_network_quarterly_report in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in requested'.
  $permissions['edit ef_network_quarterly_report in requested'] = array(
    'name' => 'edit ef_network_quarterly_report in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in submitted'.
  $permissions['edit ef_network_quarterly_report in submitted'] = array(
    'name' => 'edit ef_network_quarterly_report in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in submitted_qr'.
  $permissions['edit ef_network_quarterly_report in submitted_qr'] = array(
    'name' => 'edit ef_network_quarterly_report in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in under_revision_request'.
  $permissions['edit ef_network_quarterly_report in under_revision_request'] = array(
    'name' => 'edit ef_network_quarterly_report in under_revision_request',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_network_quarterly_report in unpublished'.
  $permissions['edit ef_network_quarterly_report in unpublished'] = array(
    'name' => 'edit ef_network_quarterly_report in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in approved'.
  $permissions['edit ef_regulation in approved'] = array(
    'name' => 'edit ef_regulation in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in approved_for_editing'.
  $permissions['edit ef_regulation in approved_for_editing'] = array(
    'name' => 'edit ef_regulation in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in draft'.
  $permissions['edit ef_regulation in draft'] = array(
    'name' => 'edit ef_regulation in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in on_external_editing'.
  $permissions['edit ef_regulation in on_external_editing'] = array(
    'name' => 'edit ef_regulation in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in on_second_editing'.
  $permissions['edit ef_regulation in on_second_editing'] = array(
    'name' => 'edit ef_regulation in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in proposal'.
  $permissions['edit ef_regulation in proposal'] = array(
    'name' => 'edit ef_regulation in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in published'.
  $permissions['edit ef_regulation in published'] = array(
    'name' => 'edit ef_regulation in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in ready_for_publishing'.
  $permissions['edit ef_regulation in ready_for_publishing'] = array(
    'name' => 'edit ef_regulation in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in rejected'.
  $permissions['edit ef_regulation in rejected'] = array(
    'name' => 'edit ef_regulation in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in requested'.
  $permissions['edit ef_regulation in requested'] = array(
    'name' => 'edit ef_regulation in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in submitted'.
  $permissions['edit ef_regulation in submitted'] = array(
    'name' => 'edit ef_regulation in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in submitted_qr'.
  $permissions['edit ef_regulation in submitted_qr'] = array(
    'name' => 'edit ef_regulation in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in under_revision_request'.
  $permissions['edit ef_regulation in under_revision_request'] = array(
    'name' => 'edit ef_regulation in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_regulation in unpublished'.
  $permissions['edit ef_regulation in unpublished'] = array(
    'name' => 'edit ef_regulation in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in approved'.
  $permissions['edit ef_report in approved'] = array(
    'name' => 'edit ef_report in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in approved_for_editing'.
  $permissions['edit ef_report in approved_for_editing'] = array(
    'name' => 'edit ef_report in approved_for_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in draft'.
  $permissions['edit ef_report in draft'] = array(
    'name' => 'edit ef_report in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in on_external_editing'.
  $permissions['edit ef_report in on_external_editing'] = array(
    'name' => 'edit ef_report in on_external_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in on_second_editing'.
  $permissions['edit ef_report in on_second_editing'] = array(
    'name' => 'edit ef_report in on_second_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in proposal'.
  $permissions['edit ef_report in proposal'] = array(
    'name' => 'edit ef_report in proposal',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in published'.
  $permissions['edit ef_report in published'] = array(
    'name' => 'edit ef_report in published',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in ready_for_publishing'.
  $permissions['edit ef_report in ready_for_publishing'] = array(
    'name' => 'edit ef_report in ready_for_publishing',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in rejected'.
  $permissions['edit ef_report in rejected'] = array(
    'name' => 'edit ef_report in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in requested'.
  $permissions['edit ef_report in requested'] = array(
    'name' => 'edit ef_report in requested',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in submitted'.
  $permissions['edit ef_report in submitted'] = array(
    'name' => 'edit ef_report in submitted',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in submitted_qr'.
  $permissions['edit ef_report in submitted_qr'] = array(
    'name' => 'edit ef_report in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in under_revision_request'.
  $permissions['edit ef_report in under_revision_request'] = array(
    'name' => 'edit ef_report in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_report in unpublished'.
  $permissions['edit ef_report in unpublished'] = array(
    'name' => 'edit ef_report in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in approved'.
  $permissions['edit ef_restructuring_in_smes in approved'] = array(
    'name' => 'edit ef_restructuring_in_smes in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in approved_for_editing'.
  $permissions['edit ef_restructuring_in_smes in approved_for_editing'] = array(
    'name' => 'edit ef_restructuring_in_smes in approved_for_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in draft'.
  $permissions['edit ef_restructuring_in_smes in draft'] = array(
    'name' => 'edit ef_restructuring_in_smes in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in on_external_editing'.
  $permissions['edit ef_restructuring_in_smes in on_external_editing'] = array(
    'name' => 'edit ef_restructuring_in_smes in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in on_second_editing'.
  $permissions['edit ef_restructuring_in_smes in on_second_editing'] = array(
    'name' => 'edit ef_restructuring_in_smes in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in proposal'.
  $permissions['edit ef_restructuring_in_smes in proposal'] = array(
    'name' => 'edit ef_restructuring_in_smes in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in published'.
  $permissions['edit ef_restructuring_in_smes in published'] = array(
    'name' => 'edit ef_restructuring_in_smes in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in ready_for_publishing'.
  $permissions['edit ef_restructuring_in_smes in ready_for_publishing'] = array(
    'name' => 'edit ef_restructuring_in_smes in ready_for_publishing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in rejected'.
  $permissions['edit ef_restructuring_in_smes in rejected'] = array(
    'name' => 'edit ef_restructuring_in_smes in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in requested'.
  $permissions['edit ef_restructuring_in_smes in requested'] = array(
    'name' => 'edit ef_restructuring_in_smes in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in submitted'.
  $permissions['edit ef_restructuring_in_smes in submitted'] = array(
    'name' => 'edit ef_restructuring_in_smes in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in submitted_qr'.
  $permissions['edit ef_restructuring_in_smes in submitted_qr'] = array(
    'name' => 'edit ef_restructuring_in_smes in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in under_revision_request'.
  $permissions['edit ef_restructuring_in_smes in under_revision_request'] = array(
    'name' => 'edit ef_restructuring_in_smes in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_restructuring_in_smes in unpublished'.
  $permissions['edit ef_restructuring_in_smes in unpublished'] = array(
    'name' => 'edit ef_restructuring_in_smes in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in approved'.
  $permissions['edit ef_support_instrument in approved'] = array(
    'name' => 'edit ef_support_instrument in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in approved_for_editing'.
  $permissions['edit ef_support_instrument in approved_for_editing'] = array(
    'name' => 'edit ef_support_instrument in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in draft'.
  $permissions['edit ef_support_instrument in draft'] = array(
    'name' => 'edit ef_support_instrument in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in on_external_editing'.
  $permissions['edit ef_support_instrument in on_external_editing'] = array(
    'name' => 'edit ef_support_instrument in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in on_second_editing'.
  $permissions['edit ef_support_instrument in on_second_editing'] = array(
    'name' => 'edit ef_support_instrument in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in proposal'.
  $permissions['edit ef_support_instrument in proposal'] = array(
    'name' => 'edit ef_support_instrument in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in published'.
  $permissions['edit ef_support_instrument in published'] = array(
    'name' => 'edit ef_support_instrument in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in ready_for_publishing'.
  $permissions['edit ef_support_instrument in ready_for_publishing'] = array(
    'name' => 'edit ef_support_instrument in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in rejected'.
  $permissions['edit ef_support_instrument in rejected'] = array(
    'name' => 'edit ef_support_instrument in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in requested'.
  $permissions['edit ef_support_instrument in requested'] = array(
    'name' => 'edit ef_support_instrument in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in submitted'.
  $permissions['edit ef_support_instrument in submitted'] = array(
    'name' => 'edit ef_support_instrument in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in submitted_qr'.
  $permissions['edit ef_support_instrument in submitted_qr'] = array(
    'name' => 'edit ef_support_instrument in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in under_revision_request'.
  $permissions['edit ef_support_instrument in under_revision_request'] = array(
    'name' => 'edit ef_support_instrument in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit ef_support_instrument in unpublished'.
  $permissions['edit ef_support_instrument in unpublished'] = array(
    'name' => 'edit ef_support_instrument in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in approved'.
  $permissions['edit erm_support_instrument in approved'] = array(
    'name' => 'edit erm_support_instrument in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in approved_for_editing'.
  $permissions['edit erm_support_instrument in approved_for_editing'] = array(
    'name' => 'edit erm_support_instrument in approved_for_editing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in draft'.
  $permissions['edit erm_support_instrument in draft'] = array(
    'name' => 'edit erm_support_instrument in draft',
    'roles' => array(
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in on_external_editing'.
  $permissions['edit erm_support_instrument in on_external_editing'] = array(
    'name' => 'edit erm_support_instrument in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in on_second_editing'.
  $permissions['edit erm_support_instrument in on_second_editing'] = array(
    'name' => 'edit erm_support_instrument in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in proposal'.
  $permissions['edit erm_support_instrument in proposal'] = array(
    'name' => 'edit erm_support_instrument in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in published'.
  $permissions['edit erm_support_instrument in published'] = array(
    'name' => 'edit erm_support_instrument in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in ready_for_publishing'.
  $permissions['edit erm_support_instrument in ready_for_publishing'] = array(
    'name' => 'edit erm_support_instrument in ready_for_publishing',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in rejected'.
  $permissions['edit erm_support_instrument in rejected'] = array(
    'name' => 'edit erm_support_instrument in rejected',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in requested'.
  $permissions['edit erm_support_instrument in requested'] = array(
    'name' => 'edit erm_support_instrument in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in submitted'.
  $permissions['edit erm_support_instrument in submitted'] = array(
    'name' => 'edit erm_support_instrument in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in submitted_qr'.
  $permissions['edit erm_support_instrument in submitted_qr'] = array(
    'name' => 'edit erm_support_instrument in submitted_qr',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in under_revision_request'.
  $permissions['edit erm_support_instrument in under_revision_request'] = array(
    'name' => 'edit erm_support_instrument in under_revision_request',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit erm_support_instrument in unpublished'.
  $permissions['edit erm_support_instrument in unpublished'] = array(
    'name' => 'edit erm_support_instrument in unpublished',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in approved'.
  $permissions['edit page in approved'] = array(
    'name' => 'edit page in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in approved_for_editing'.
  $permissions['edit page in approved_for_editing'] = array(
    'name' => 'edit page in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in draft'.
  $permissions['edit page in draft'] = array(
    'name' => 'edit page in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in on_external_editing'.
  $permissions['edit page in on_external_editing'] = array(
    'name' => 'edit page in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in on_second_editing'.
  $permissions['edit page in on_second_editing'] = array(
    'name' => 'edit page in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in proposal'.
  $permissions['edit page in proposal'] = array(
    'name' => 'edit page in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in published'.
  $permissions['edit page in published'] = array(
    'name' => 'edit page in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in ready_for_publishing'.
  $permissions['edit page in ready_for_publishing'] = array(
    'name' => 'edit page in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in rejected'.
  $permissions['edit page in rejected'] = array(
    'name' => 'edit page in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in requested'.
  $permissions['edit page in requested'] = array(
    'name' => 'edit page in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in submitted'.
  $permissions['edit page in submitted'] = array(
    'name' => 'edit page in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in submitted_qr'.
  $permissions['edit page in submitted_qr'] = array(
    'name' => 'edit page in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in under_revision_request'.
  $permissions['edit page in under_revision_request'] = array(
    'name' => 'edit page in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'edit page in unpublished'.
  $permissions['edit page in unpublished'] = array(
    'name' => 'edit page in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in approved'.
  $permissions['view all content in approved'] = array(
    'name' => 'view all content in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in approved_for_editing'.
  $permissions['view all content in approved_for_editing'] = array(
    'name' => 'view all content in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in draft'.
  $permissions['view all content in draft'] = array(
    'name' => 'view all content in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in on_external_editing'.
  $permissions['view all content in on_external_editing'] = array(
    'name' => 'view all content in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in on_second_editing'.
  $permissions['view all content in on_second_editing'] = array(
    'name' => 'view all content in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in proposal'.
  $permissions['view all content in proposal'] = array(
    'name' => 'view all content in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in published'.
  $permissions['view all content in published'] = array(
    'name' => 'view all content in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in ready_for_publishing'.
  $permissions['view all content in ready_for_publishing'] = array(
    'name' => 'view all content in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in rejected'.
  $permissions['view all content in rejected'] = array(
    'name' => 'view all content in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in requested'.
  $permissions['view all content in requested'] = array(
    'name' => 'view all content in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in submitted'.
  $permissions['view all content in submitted'] = array(
    'name' => 'view all content in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in submitted_qr'.
  $permissions['view all content in submitted_qr'] = array(
    'name' => 'view all content in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in under_revision_request'.
  $permissions['view all content in under_revision_request'] = array(
    'name' => 'view all content in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view all content in unpublished'.
  $permissions['view all content in unpublished'] = array(
    'name' => 'view all content in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in approved'.
  $permissions['view case_study_publication in approved'] = array(
    'name' => 'view case_study_publication in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in approved_for_editing'.
  $permissions['view case_study_publication in approved_for_editing'] = array(
    'name' => 'view case_study_publication in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in draft'.
  $permissions['view case_study_publication in draft'] = array(
    'name' => 'view case_study_publication in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in on_external_editing'.
  $permissions['view case_study_publication in on_external_editing'] = array(
    'name' => 'view case_study_publication in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in on_second_editing'.
  $permissions['view case_study_publication in on_second_editing'] = array(
    'name' => 'view case_study_publication in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in proposal'.
  $permissions['view case_study_publication in proposal'] = array(
    'name' => 'view case_study_publication in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in published'.
  $permissions['view case_study_publication in published'] = array(
    'name' => 'view case_study_publication in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in ready_for_publishing'.
  $permissions['view case_study_publication in ready_for_publishing'] = array(
    'name' => 'view case_study_publication in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in rejected'.
  $permissions['view case_study_publication in rejected'] = array(
    'name' => 'view case_study_publication in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in requested'.
  $permissions['view case_study_publication in requested'] = array(
    'name' => 'view case_study_publication in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in submitted'.
  $permissions['view case_study_publication in submitted'] = array(
    'name' => 'view case_study_publication in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in submitted_qr'.
  $permissions['view case_study_publication in submitted_qr'] = array(
    'name' => 'view case_study_publication in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in under_revision_request'.
  $permissions['view case_study_publication in under_revision_request'] = array(
    'name' => 'view case_study_publication in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view case_study_publication in unpublished'.
  $permissions['view case_study_publication in unpublished'] = array(
    'name' => 'view case_study_publication in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in approved'.
  $permissions['view ef_annual_progress_report in approved'] = array(
    'name' => 'view ef_annual_progress_report in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in approved_for_editing'.
  $permissions['view ef_annual_progress_report in approved_for_editing'] = array(
    'name' => 'view ef_annual_progress_report in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in draft'.
  $permissions['view ef_annual_progress_report in draft'] = array(
    'name' => 'view ef_annual_progress_report in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in on_external_editing'.
  $permissions['view ef_annual_progress_report in on_external_editing'] = array(
    'name' => 'view ef_annual_progress_report in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in on_second_editing'.
  $permissions['view ef_annual_progress_report in on_second_editing'] = array(
    'name' => 'view ef_annual_progress_report in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in proposal'.
  $permissions['view ef_annual_progress_report in proposal'] = array(
    'name' => 'view ef_annual_progress_report in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in published'.
  $permissions['view ef_annual_progress_report in published'] = array(
    'name' => 'view ef_annual_progress_report in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in ready_for_publishing'.
  $permissions['view ef_annual_progress_report in ready_for_publishing'] = array(
    'name' => 'view ef_annual_progress_report in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in rejected'.
  $permissions['view ef_annual_progress_report in rejected'] = array(
    'name' => 'view ef_annual_progress_report in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in requested'.
  $permissions['view ef_annual_progress_report in requested'] = array(
    'name' => 'view ef_annual_progress_report in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in submitted'.
  $permissions['view ef_annual_progress_report in submitted'] = array(
    'name' => 'view ef_annual_progress_report in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in submitted_qr'.
  $permissions['view ef_annual_progress_report in submitted_qr'] = array(
    'name' => 'view ef_annual_progress_report in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in under_revision_request'.
  $permissions['view ef_annual_progress_report in under_revision_request'] = array(
    'name' => 'view ef_annual_progress_report in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_annual_progress_report in unpublished'.
  $permissions['view ef_annual_progress_report in unpublished'] = array(
    'name' => 'view ef_annual_progress_report in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in approved'.
  $permissions['view ef_case_study in approved'] = array(
    'name' => 'view ef_case_study in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in approved_for_editing'.
  $permissions['view ef_case_study in approved_for_editing'] = array(
    'name' => 'view ef_case_study in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in draft'.
  $permissions['view ef_case_study in draft'] = array(
    'name' => 'view ef_case_study in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in on_external_editing'.
  $permissions['view ef_case_study in on_external_editing'] = array(
    'name' => 'view ef_case_study in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in on_second_editing'.
  $permissions['view ef_case_study in on_second_editing'] = array(
    'name' => 'view ef_case_study in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in proposal'.
  $permissions['view ef_case_study in proposal'] = array(
    'name' => 'view ef_case_study in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in published'.
  $permissions['view ef_case_study in published'] = array(
    'name' => 'view ef_case_study in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in ready_for_publishing'.
  $permissions['view ef_case_study in ready_for_publishing'] = array(
    'name' => 'view ef_case_study in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in rejected'.
  $permissions['view ef_case_study in rejected'] = array(
    'name' => 'view ef_case_study in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in requested'.
  $permissions['view ef_case_study in requested'] = array(
    'name' => 'view ef_case_study in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in submitted'.
  $permissions['view ef_case_study in submitted'] = array(
    'name' => 'view ef_case_study in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in submitted_qr'.
  $permissions['view ef_case_study in submitted_qr'] = array(
    'name' => 'view ef_case_study in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in under_revision_request'.
  $permissions['view ef_case_study in under_revision_request'] = array(
    'name' => 'view ef_case_study in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_case_study in unpublished'.
  $permissions['view ef_case_study in unpublished'] = array(
    'name' => 'view ef_case_study in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in approved'.
  $permissions['view ef_comparative_analytical_report in approved'] = array(
    'name' => 'view ef_comparative_analytical_report in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in approved_for_editing'.
  $permissions['view ef_comparative_analytical_report in approved_for_editing'] = array(
    'name' => 'view ef_comparative_analytical_report in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in draft'.
  $permissions['view ef_comparative_analytical_report in draft'] = array(
    'name' => 'view ef_comparative_analytical_report in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in on_external_editing'.
  $permissions['view ef_comparative_analytical_report in on_external_editing'] = array(
    'name' => 'view ef_comparative_analytical_report in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in on_second_editing'.
  $permissions['view ef_comparative_analytical_report in on_second_editing'] = array(
    'name' => 'view ef_comparative_analytical_report in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in proposal'.
  $permissions['view ef_comparative_analytical_report in proposal'] = array(
    'name' => 'view ef_comparative_analytical_report in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in published'.
  $permissions['view ef_comparative_analytical_report in published'] = array(
    'name' => 'view ef_comparative_analytical_report in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in ready_for_publishing'.
  $permissions['view ef_comparative_analytical_report in ready_for_publishing'] = array(
    'name' => 'view ef_comparative_analytical_report in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in rejected'.
  $permissions['view ef_comparative_analytical_report in rejected'] = array(
    'name' => 'view ef_comparative_analytical_report in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in requested'.
  $permissions['view ef_comparative_analytical_report in requested'] = array(
    'name' => 'view ef_comparative_analytical_report in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in submitted'.
  $permissions['view ef_comparative_analytical_report in submitted'] = array(
    'name' => 'view ef_comparative_analytical_report in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in submitted_qr'.
  $permissions['view ef_comparative_analytical_report in submitted_qr'] = array(
    'name' => 'view ef_comparative_analytical_report in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in under_revision_request'.
  $permissions['view ef_comparative_analytical_report in under_revision_request'] = array(
    'name' => 'view ef_comparative_analytical_report in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_comparative_analytical_report in unpublished'.
  $permissions['view ef_comparative_analytical_report in unpublished'] = array(
    'name' => 'view ef_comparative_analytical_report in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in approved'.
  $permissions['view ef_erm_regulation in approved'] = array(
    'name' => 'view ef_erm_regulation in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in approved_for_editing'.
  $permissions['view ef_erm_regulation in approved_for_editing'] = array(
    'name' => 'view ef_erm_regulation in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in draft'.
  $permissions['view ef_erm_regulation in draft'] = array(
    'name' => 'view ef_erm_regulation in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in on_external_editing'.
  $permissions['view ef_erm_regulation in on_external_editing'] = array(
    'name' => 'view ef_erm_regulation in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in on_second_editing'.
  $permissions['view ef_erm_regulation in on_second_editing'] = array(
    'name' => 'view ef_erm_regulation in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in proposal'.
  $permissions['view ef_erm_regulation in proposal'] = array(
    'name' => 'view ef_erm_regulation in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in published'.
  $permissions['view ef_erm_regulation in published'] = array(
    'name' => 'view ef_erm_regulation in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in ready_for_publishing'.
  $permissions['view ef_erm_regulation in ready_for_publishing'] = array(
    'name' => 'view ef_erm_regulation in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in rejected'.
  $permissions['view ef_erm_regulation in rejected'] = array(
    'name' => 'view ef_erm_regulation in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in requested'.
  $permissions['view ef_erm_regulation in requested'] = array(
    'name' => 'view ef_erm_regulation in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in submitted'.
  $permissions['view ef_erm_regulation in submitted'] = array(
    'name' => 'view ef_erm_regulation in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in submitted_qr'.
  $permissions['view ef_erm_regulation in submitted_qr'] = array(
    'name' => 'view ef_erm_regulation in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in under_revision_request'.
  $permissions['view ef_erm_regulation in under_revision_request'] = array(
    'name' => 'view ef_erm_regulation in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_erm_regulation in unpublished'.
  $permissions['view ef_erm_regulation in unpublished'] = array(
    'name' => 'view ef_erm_regulation in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in approved'.
  $permissions['view ef_factsheet in approved'] = array(
    'name' => 'view ef_factsheet in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in approved_for_editing'.
  $permissions['view ef_factsheet in approved_for_editing'] = array(
    'name' => 'view ef_factsheet in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in draft'.
  $permissions['view ef_factsheet in draft'] = array(
    'name' => 'view ef_factsheet in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in on_external_editing'.
  $permissions['view ef_factsheet in on_external_editing'] = array(
    'name' => 'view ef_factsheet in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in on_second_editing'.
  $permissions['view ef_factsheet in on_second_editing'] = array(
    'name' => 'view ef_factsheet in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in proposal'.
  $permissions['view ef_factsheet in proposal'] = array(
    'name' => 'view ef_factsheet in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in published'.
  $permissions['view ef_factsheet in published'] = array(
    'name' => 'view ef_factsheet in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in ready_for_publishing'.
  $permissions['view ef_factsheet in ready_for_publishing'] = array(
    'name' => 'view ef_factsheet in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in rejected'.
  $permissions['view ef_factsheet in rejected'] = array(
    'name' => 'view ef_factsheet in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in requested'.
  $permissions['view ef_factsheet in requested'] = array(
    'name' => 'view ef_factsheet in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in submitted'.
  $permissions['view ef_factsheet in submitted'] = array(
    'name' => 'view ef_factsheet in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in submitted_qr'.
  $permissions['view ef_factsheet in submitted_qr'] = array(
    'name' => 'view ef_factsheet in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in under_revision_request'.
  $permissions['view ef_factsheet in under_revision_request'] = array(
    'name' => 'view ef_factsheet in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_factsheet in unpublished'.
  $permissions['view ef_factsheet in unpublished'] = array(
    'name' => 'view ef_factsheet in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in approved'.
  $permissions['view ef_ic_quarterly_report in approved'] = array(
    'name' => 'view ef_ic_quarterly_report in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in approved_for_editing'.
  $permissions['view ef_ic_quarterly_report in approved_for_editing'] = array(
    'name' => 'view ef_ic_quarterly_report in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in draft'.
  $permissions['view ef_ic_quarterly_report in draft'] = array(
    'name' => 'view ef_ic_quarterly_report in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in on_external_editing'.
  $permissions['view ef_ic_quarterly_report in on_external_editing'] = array(
    'name' => 'view ef_ic_quarterly_report in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in on_second_editing'.
  $permissions['view ef_ic_quarterly_report in on_second_editing'] = array(
    'name' => 'view ef_ic_quarterly_report in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in proposal'.
  $permissions['view ef_ic_quarterly_report in proposal'] = array(
    'name' => 'view ef_ic_quarterly_report in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in published'.
  $permissions['view ef_ic_quarterly_report in published'] = array(
    'name' => 'view ef_ic_quarterly_report in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in ready_for_publishing'.
  $permissions['view ef_ic_quarterly_report in ready_for_publishing'] = array(
    'name' => 'view ef_ic_quarterly_report in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in rejected'.
  $permissions['view ef_ic_quarterly_report in rejected'] = array(
    'name' => 'view ef_ic_quarterly_report in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in requested'.
  $permissions['view ef_ic_quarterly_report in requested'] = array(
    'name' => 'view ef_ic_quarterly_report in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in submitted'.
  $permissions['view ef_ic_quarterly_report in submitted'] = array(
    'name' => 'view ef_ic_quarterly_report in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in submitted_qr'.
  $permissions['view ef_ic_quarterly_report in submitted_qr'] = array(
    'name' => 'view ef_ic_quarterly_report in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in under_revision_request'.
  $permissions['view ef_ic_quarterly_report in under_revision_request'] = array(
    'name' => 'view ef_ic_quarterly_report in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ic_quarterly_report in unpublished'.
  $permissions['view ef_ic_quarterly_report in unpublished'] = array(
    'name' => 'view ef_ic_quarterly_report in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in approved'.
  $permissions['view ef_input_to_erm in approved'] = array(
    'name' => 'view ef_input_to_erm in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in approved_for_editing'.
  $permissions['view ef_input_to_erm in approved_for_editing'] = array(
    'name' => 'view ef_input_to_erm in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in draft'.
  $permissions['view ef_input_to_erm in draft'] = array(
    'name' => 'view ef_input_to_erm in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in on_external_editing'.
  $permissions['view ef_input_to_erm in on_external_editing'] = array(
    'name' => 'view ef_input_to_erm in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in on_second_editing'.
  $permissions['view ef_input_to_erm in on_second_editing'] = array(
    'name' => 'view ef_input_to_erm in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in proposal'.
  $permissions['view ef_input_to_erm in proposal'] = array(
    'name' => 'view ef_input_to_erm in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in published'.
  $permissions['view ef_input_to_erm in published'] = array(
    'name' => 'view ef_input_to_erm in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in ready_for_publishing'.
  $permissions['view ef_input_to_erm in ready_for_publishing'] = array(
    'name' => 'view ef_input_to_erm in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in rejected'.
  $permissions['view ef_input_to_erm in rejected'] = array(
    'name' => 'view ef_input_to_erm in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in requested'.
  $permissions['view ef_input_to_erm in requested'] = array(
    'name' => 'view ef_input_to_erm in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in submitted'.
  $permissions['view ef_input_to_erm in submitted'] = array(
    'name' => 'view ef_input_to_erm in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in submitted_qr'.
  $permissions['view ef_input_to_erm in submitted_qr'] = array(
    'name' => 'view ef_input_to_erm in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in under_revision_request'.
  $permissions['view ef_input_to_erm in under_revision_request'] = array(
    'name' => 'view ef_input_to_erm in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_input_to_erm in unpublished'.
  $permissions['view ef_input_to_erm in unpublished'] = array(
    'name' => 'view ef_input_to_erm in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in approved'.
  $permissions['view ef_ir_dictionary in approved'] = array(
    'name' => 'view ef_ir_dictionary in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in approved_for_editing'.
  $permissions['view ef_ir_dictionary in approved_for_editing'] = array(
    'name' => 'view ef_ir_dictionary in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in draft'.
  $permissions['view ef_ir_dictionary in draft'] = array(
    'name' => 'view ef_ir_dictionary in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in on_external_editing'.
  $permissions['view ef_ir_dictionary in on_external_editing'] = array(
    'name' => 'view ef_ir_dictionary in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in on_second_editing'.
  $permissions['view ef_ir_dictionary in on_second_editing'] = array(
    'name' => 'view ef_ir_dictionary in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in proposal'.
  $permissions['view ef_ir_dictionary in proposal'] = array(
    'name' => 'view ef_ir_dictionary in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in published'.
  $permissions['view ef_ir_dictionary in published'] = array(
    'name' => 'view ef_ir_dictionary in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in ready_for_publishing'.
  $permissions['view ef_ir_dictionary in ready_for_publishing'] = array(
    'name' => 'view ef_ir_dictionary in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in rejected'.
  $permissions['view ef_ir_dictionary in rejected'] = array(
    'name' => 'view ef_ir_dictionary in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in requested'.
  $permissions['view ef_ir_dictionary in requested'] = array(
    'name' => 'view ef_ir_dictionary in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in submitted'.
  $permissions['view ef_ir_dictionary in submitted'] = array(
    'name' => 'view ef_ir_dictionary in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in submitted_qr'.
  $permissions['view ef_ir_dictionary in submitted_qr'] = array(
    'name' => 'view ef_ir_dictionary in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in under_revision_request'.
  $permissions['view ef_ir_dictionary in under_revision_request'] = array(
    'name' => 'view ef_ir_dictionary in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_ir_dictionary in unpublished'.
  $permissions['view ef_ir_dictionary in unpublished'] = array(
    'name' => 'view ef_ir_dictionary in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in approved'.
  $permissions['view ef_national_contribution in approved'] = array(
    'name' => 'view ef_national_contribution in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in approved_for_editing'.
  $permissions['view ef_national_contribution in approved_for_editing'] = array(
    'name' => 'view ef_national_contribution in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in draft'.
  $permissions['view ef_national_contribution in draft'] = array(
    'name' => 'view ef_national_contribution in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in on_external_editing'.
  $permissions['view ef_national_contribution in on_external_editing'] = array(
    'name' => 'view ef_national_contribution in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in on_second_editing'.
  $permissions['view ef_national_contribution in on_second_editing'] = array(
    'name' => 'view ef_national_contribution in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in proposal'.
  $permissions['view ef_national_contribution in proposal'] = array(
    'name' => 'view ef_national_contribution in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in published'.
  $permissions['view ef_national_contribution in published'] = array(
    'name' => 'view ef_national_contribution in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in ready_for_publishing'.
  $permissions['view ef_national_contribution in ready_for_publishing'] = array(
    'name' => 'view ef_national_contribution in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in rejected'.
  $permissions['view ef_national_contribution in rejected'] = array(
    'name' => 'view ef_national_contribution in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in requested'.
  $permissions['view ef_national_contribution in requested'] = array(
    'name' => 'view ef_national_contribution in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in submitted'.
  $permissions['view ef_national_contribution in submitted'] = array(
    'name' => 'view ef_national_contribution in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in submitted_qr'.
  $permissions['view ef_national_contribution in submitted_qr'] = array(
    'name' => 'view ef_national_contribution in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in under_revision_request'.
  $permissions['view ef_national_contribution in under_revision_request'] = array(
    'name' => 'view ef_national_contribution in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_national_contribution in unpublished'.
  $permissions['view ef_national_contribution in unpublished'] = array(
    'name' => 'view ef_national_contribution in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in approved'.
  $permissions['view ef_network_quarterly_report in approved'] = array(
    'name' => 'view ef_network_quarterly_report in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in approved_for_editing'.
  $permissions['view ef_network_quarterly_report in approved_for_editing'] = array(
    'name' => 'view ef_network_quarterly_report in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in draft'.
  $permissions['view ef_network_quarterly_report in draft'] = array(
    'name' => 'view ef_network_quarterly_report in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in on_external_editing'.
  $permissions['view ef_network_quarterly_report in on_external_editing'] = array(
    'name' => 'view ef_network_quarterly_report in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in on_second_editing'.
  $permissions['view ef_network_quarterly_report in on_second_editing'] = array(
    'name' => 'view ef_network_quarterly_report in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in proposal'.
  $permissions['view ef_network_quarterly_report in proposal'] = array(
    'name' => 'view ef_network_quarterly_report in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in published'.
  $permissions['view ef_network_quarterly_report in published'] = array(
    'name' => 'view ef_network_quarterly_report in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in ready_for_publishing'.
  $permissions['view ef_network_quarterly_report in ready_for_publishing'] = array(
    'name' => 'view ef_network_quarterly_report in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in rejected'.
  $permissions['view ef_network_quarterly_report in rejected'] = array(
    'name' => 'view ef_network_quarterly_report in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in requested'.
  $permissions['view ef_network_quarterly_report in requested'] = array(
    'name' => 'view ef_network_quarterly_report in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in submitted'.
  $permissions['view ef_network_quarterly_report in submitted'] = array(
    'name' => 'view ef_network_quarterly_report in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in submitted_qr'.
  $permissions['view ef_network_quarterly_report in submitted_qr'] = array(
    'name' => 'view ef_network_quarterly_report in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in under_revision_request'.
  $permissions['view ef_network_quarterly_report in under_revision_request'] = array(
    'name' => 'view ef_network_quarterly_report in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_network_quarterly_report in unpublished'.
  $permissions['view ef_network_quarterly_report in unpublished'] = array(
    'name' => 'view ef_network_quarterly_report in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in approved'.
  $permissions['view ef_regulation in approved'] = array(
    'name' => 'view ef_regulation in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in approved_for_editing'.
  $permissions['view ef_regulation in approved_for_editing'] = array(
    'name' => 'view ef_regulation in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in draft'.
  $permissions['view ef_regulation in draft'] = array(
    'name' => 'view ef_regulation in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in on_external_editing'.
  $permissions['view ef_regulation in on_external_editing'] = array(
    'name' => 'view ef_regulation in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in on_second_editing'.
  $permissions['view ef_regulation in on_second_editing'] = array(
    'name' => 'view ef_regulation in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in proposal'.
  $permissions['view ef_regulation in proposal'] = array(
    'name' => 'view ef_regulation in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in published'.
  $permissions['view ef_regulation in published'] = array(
    'name' => 'view ef_regulation in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in ready_for_publishing'.
  $permissions['view ef_regulation in ready_for_publishing'] = array(
    'name' => 'view ef_regulation in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in rejected'.
  $permissions['view ef_regulation in rejected'] = array(
    'name' => 'view ef_regulation in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in requested'.
  $permissions['view ef_regulation in requested'] = array(
    'name' => 'view ef_regulation in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in submitted'.
  $permissions['view ef_regulation in submitted'] = array(
    'name' => 'view ef_regulation in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in submitted_qr'.
  $permissions['view ef_regulation in submitted_qr'] = array(
    'name' => 'view ef_regulation in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in under_revision_request'.
  $permissions['view ef_regulation in under_revision_request'] = array(
    'name' => 'view ef_regulation in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_regulation in unpublished'.
  $permissions['view ef_regulation in unpublished'] = array(
    'name' => 'view ef_regulation in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in approved'.
  $permissions['view ef_report in approved'] = array(
    'name' => 'view ef_report in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in approved_for_editing'.
  $permissions['view ef_report in approved_for_editing'] = array(
    'name' => 'view ef_report in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in draft'.
  $permissions['view ef_report in draft'] = array(
    'name' => 'view ef_report in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in on_external_editing'.
  $permissions['view ef_report in on_external_editing'] = array(
    'name' => 'view ef_report in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in on_second_editing'.
  $permissions['view ef_report in on_second_editing'] = array(
    'name' => 'view ef_report in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in proposal'.
  $permissions['view ef_report in proposal'] = array(
    'name' => 'view ef_report in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in published'.
  $permissions['view ef_report in published'] = array(
    'name' => 'view ef_report in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in ready_for_publishing'.
  $permissions['view ef_report in ready_for_publishing'] = array(
    'name' => 'view ef_report in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in rejected'.
  $permissions['view ef_report in rejected'] = array(
    'name' => 'view ef_report in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in requested'.
  $permissions['view ef_report in requested'] = array(
    'name' => 'view ef_report in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in submitted'.
  $permissions['view ef_report in submitted'] = array(
    'name' => 'view ef_report in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in submitted_qr'.
  $permissions['view ef_report in submitted_qr'] = array(
    'name' => 'view ef_report in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in under_revision_request'.
  $permissions['view ef_report in under_revision_request'] = array(
    'name' => 'view ef_report in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_report in unpublished'.
  $permissions['view ef_report in unpublished'] = array(
    'name' => 'view ef_report in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in approved'.
  $permissions['view ef_restructuring_in_smes in approved'] = array(
    'name' => 'view ef_restructuring_in_smes in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in approved_for_editing'.
  $permissions['view ef_restructuring_in_smes in approved_for_editing'] = array(
    'name' => 'view ef_restructuring_in_smes in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in draft'.
  $permissions['view ef_restructuring_in_smes in draft'] = array(
    'name' => 'view ef_restructuring_in_smes in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in on_external_editing'.
  $permissions['view ef_restructuring_in_smes in on_external_editing'] = array(
    'name' => 'view ef_restructuring_in_smes in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in on_second_editing'.
  $permissions['view ef_restructuring_in_smes in on_second_editing'] = array(
    'name' => 'view ef_restructuring_in_smes in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in proposal'.
  $permissions['view ef_restructuring_in_smes in proposal'] = array(
    'name' => 'view ef_restructuring_in_smes in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in published'.
  $permissions['view ef_restructuring_in_smes in published'] = array(
    'name' => 'view ef_restructuring_in_smes in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in ready_for_publishing'.
  $permissions['view ef_restructuring_in_smes in ready_for_publishing'] = array(
    'name' => 'view ef_restructuring_in_smes in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in rejected'.
  $permissions['view ef_restructuring_in_smes in rejected'] = array(
    'name' => 'view ef_restructuring_in_smes in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in requested'.
  $permissions['view ef_restructuring_in_smes in requested'] = array(
    'name' => 'view ef_restructuring_in_smes in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in submitted'.
  $permissions['view ef_restructuring_in_smes in submitted'] = array(
    'name' => 'view ef_restructuring_in_smes in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in submitted_qr'.
  $permissions['view ef_restructuring_in_smes in submitted_qr'] = array(
    'name' => 'view ef_restructuring_in_smes in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in under_revision_request'.
  $permissions['view ef_restructuring_in_smes in under_revision_request'] = array(
    'name' => 'view ef_restructuring_in_smes in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_restructuring_in_smes in unpublished'.
  $permissions['view ef_restructuring_in_smes in unpublished'] = array(
    'name' => 'view ef_restructuring_in_smes in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in approved'.
  $permissions['view ef_support_instrument in approved'] = array(
    'name' => 'view ef_support_instrument in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in approved_for_editing'.
  $permissions['view ef_support_instrument in approved_for_editing'] = array(
    'name' => 'view ef_support_instrument in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in draft'.
  $permissions['view ef_support_instrument in draft'] = array(
    'name' => 'view ef_support_instrument in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in on_external_editing'.
  $permissions['view ef_support_instrument in on_external_editing'] = array(
    'name' => 'view ef_support_instrument in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in on_second_editing'.
  $permissions['view ef_support_instrument in on_second_editing'] = array(
    'name' => 'view ef_support_instrument in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in proposal'.
  $permissions['view ef_support_instrument in proposal'] = array(
    'name' => 'view ef_support_instrument in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in published'.
  $permissions['view ef_support_instrument in published'] = array(
    'name' => 'view ef_support_instrument in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in ready_for_publishing'.
  $permissions['view ef_support_instrument in ready_for_publishing'] = array(
    'name' => 'view ef_support_instrument in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in rejected'.
  $permissions['view ef_support_instrument in rejected'] = array(
    'name' => 'view ef_support_instrument in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in requested'.
  $permissions['view ef_support_instrument in requested'] = array(
    'name' => 'view ef_support_instrument in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in submitted'.
  $permissions['view ef_support_instrument in submitted'] = array(
    'name' => 'view ef_support_instrument in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in submitted_qr'.
  $permissions['view ef_support_instrument in submitted_qr'] = array(
    'name' => 'view ef_support_instrument in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in under_revision_request'.
  $permissions['view ef_support_instrument in under_revision_request'] = array(
    'name' => 'view ef_support_instrument in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view ef_support_instrument in unpublished'.
  $permissions['view ef_support_instrument in unpublished'] = array(
    'name' => 'view ef_support_instrument in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in approved'.
  $permissions['view erm_support_instrument in approved'] = array(
    'name' => 'view erm_support_instrument in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in approved_for_editing'.
  $permissions['view erm_support_instrument in approved_for_editing'] = array(
    'name' => 'view erm_support_instrument in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in draft'.
  $permissions['view erm_support_instrument in draft'] = array(
    'name' => 'view erm_support_instrument in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in on_external_editing'.
  $permissions['view erm_support_instrument in on_external_editing'] = array(
    'name' => 'view erm_support_instrument in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in on_second_editing'.
  $permissions['view erm_support_instrument in on_second_editing'] = array(
    'name' => 'view erm_support_instrument in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in proposal'.
  $permissions['view erm_support_instrument in proposal'] = array(
    'name' => 'view erm_support_instrument in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in published'.
  $permissions['view erm_support_instrument in published'] = array(
    'name' => 'view erm_support_instrument in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in ready_for_publishing'.
  $permissions['view erm_support_instrument in ready_for_publishing'] = array(
    'name' => 'view erm_support_instrument in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in rejected'.
  $permissions['view erm_support_instrument in rejected'] = array(
    'name' => 'view erm_support_instrument in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in requested'.
  $permissions['view erm_support_instrument in requested'] = array(
    'name' => 'view erm_support_instrument in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in submitted'.
  $permissions['view erm_support_instrument in submitted'] = array(
    'name' => 'view erm_support_instrument in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in submitted_qr'.
  $permissions['view erm_support_instrument in submitted_qr'] = array(
    'name' => 'view erm_support_instrument in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in under_revision_request'.
  $permissions['view erm_support_instrument in under_revision_request'] = array(
    'name' => 'view erm_support_instrument in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view erm_support_instrument in unpublished'.
  $permissions['view erm_support_instrument in unpublished'] = array(
    'name' => 'view erm_support_instrument in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in approved'.
  $permissions['view page in approved'] = array(
    'name' => 'view page in approved',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in approved_for_editing'.
  $permissions['view page in approved_for_editing'] = array(
    'name' => 'view page in approved_for_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in draft'.
  $permissions['view page in draft'] = array(
    'name' => 'view page in draft',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in on_external_editing'.
  $permissions['view page in on_external_editing'] = array(
    'name' => 'view page in on_external_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in on_second_editing'.
  $permissions['view page in on_second_editing'] = array(
    'name' => 'view page in on_second_editing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in proposal'.
  $permissions['view page in proposal'] = array(
    'name' => 'view page in proposal',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in published'.
  $permissions['view page in published'] = array(
    'name' => 'view page in published',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in ready_for_publishing'.
  $permissions['view page in ready_for_publishing'] = array(
    'name' => 'view page in ready_for_publishing',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in rejected'.
  $permissions['view page in rejected'] = array(
    'name' => 'view page in rejected',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in requested'.
  $permissions['view page in requested'] = array(
    'name' => 'view page in requested',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in submitted'.
  $permissions['view page in submitted'] = array(
    'name' => 'view page in submitted',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in submitted_qr'.
  $permissions['view page in submitted_qr'] = array(
    'name' => 'view page in submitted_qr',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in under_revision_request'.
  $permissions['view page in under_revision_request'] = array(
    'name' => 'view page in under_revision_request',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  // Exported permission: 'view page in unpublished'.
  $permissions['view page in unpublished'] = array(
    'name' => 'view page in unpublished',
    'roles' => array(),
    'module' => 'ef_workbench_moderation_state_access',
  );

  return $permissions;
}
