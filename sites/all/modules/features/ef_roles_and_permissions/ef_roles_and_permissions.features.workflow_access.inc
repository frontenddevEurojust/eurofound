<?php
/**
 * @file
 * ef_roles_and_permissions.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function ef_roles_and_permissions_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['Node Publication'] = array();
  $workflows['Node Publication']['Draft'] = array();
  $workflows['Node Publication']['Draft']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['Node Publication']['Draft']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Draft']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Draft']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Draft']['Eurofound Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Draft']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Draft']['Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Draft']['Eurofound Content Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Draft']['External Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Draft']['Quality Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted'] = array();
  $workflows['Node Publication']['Submitted']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['Eurofound Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['Eurofound Content Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['External Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Submitted']['Quality Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected'] = array();
  $workflows['Node Publication']['Rejected']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['Eurofound Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['Eurofound Content Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['External Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Rejected']['Quality Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request'] = array();
  $workflows['Node Publication']['Under revision request']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['Eurofound Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['Eurofound Content Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['External Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Under revision request']['Quality Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing'] = array();
  $workflows['Node Publication']['Approved for editing']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['Eurofound Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['Eurofound Content Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['External Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Approved for editing']['Quality Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing'] = array();
  $workflows['Node Publication']['On second editing']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['Eurofound Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['Eurofound Content Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['External Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On second editing']['Quality Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing'] = array();
  $workflows['Node Publication']['On external editing']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['Eurofound Administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['Eurofound Content Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['External Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['On external editing']['Quality Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing'] = array();
  $workflows['Node Publication']['Ready for publishing']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['Eurofound Administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['Eurofound Content Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['External Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Ready for publishing']['Quality Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published'] = array();
  $workflows['Node Publication']['Published']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['anonymous user'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['authenticated user'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['Eurofound Administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['Author'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['Eurofound Content Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['External Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Published']['Quality Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished'] = array();
  $workflows['Node Publication']['Unpublished']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['anonymous user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['authenticated user'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['administrator'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['Eurofound Administrator'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['Author'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['Editor'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['Eurofound Content Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['External Editor'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['Node Publication']['Unpublished']['Quality Manager'] = array(
    'grant_view' => 0,
    'grant_update' => 0,
    'grant_delete' => 0,
  );

  return $workflows;
}
