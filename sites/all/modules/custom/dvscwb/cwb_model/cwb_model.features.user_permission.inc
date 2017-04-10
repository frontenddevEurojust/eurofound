<?php
/**
 * @file
 * cwb_model.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cwb_model_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create timeline_date content'.
  $permissions['create timeline_date content'] = array(
    'name' => 'create timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
      'cwb admin' => 'cwb admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any timeline_date content'.
  $permissions['delete any timeline_date content'] = array(
    'name' => 'delete any timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own timeline_date content'.
  $permissions['delete own timeline_date content'] = array(
    'name' => 'delete own timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in cwb_timeline_category'.
  $permissions['delete terms in cwb_timeline_category'] = array(
    'name' => 'delete terms in cwb_timeline_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cwb_timeline_level'.
  $permissions['delete terms in cwb_timeline_level'] = array(
    'name' => 'delete terms in cwb_timeline_level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any timeline_date content'.
  $permissions['edit any timeline_date content'] = array(
    'name' => 'edit any timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
      'cwb admin' => 'cwb admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own timeline_date content'.
  $permissions['edit own timeline_date content'] = array(
    'name' => 'edit own timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
      'cwb admin' => 'cwb admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in cwb_timeline_category'.
  $permissions['edit terms in cwb_timeline_category'] = array(
    'name' => 'edit terms in cwb_timeline_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cwb_timeline_level'.
  $permissions['edit terms in cwb_timeline_level'] = array(
    'name' => 'edit terms in cwb_timeline_level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'publish any timeline_date content'.
  $permissions['publish any timeline_date content'] = array(
    'name' => 'publish any timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
      'cwb admin' => 'cwb admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable timeline_date content'.
  $permissions['publish editable timeline_date content'] = array(
    'name' => 'publish editable timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
      'cwb admin' => 'cwb admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own timeline_date content'.
  $permissions['publish own timeline_date content'] = array(
    'name' => 'publish own timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
      'cwb admin' => 'cwb admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any timeline_date content'.
  $permissions['unpublish any timeline_date content'] = array(
    'name' => 'unpublish any timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
      'cwb admin' => 'cwb admin',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable timeline_date content'.
  $permissions['unpublish editable timeline_date content'] = array(
    'name' => 'unpublish editable timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own timeline_date content'.
  $permissions['unpublish own timeline_date content'] = array(
    'name' => 'unpublish own timeline_date content',
    'roles' => array(
      'administrator' => 'administrator',
      'cwb admin' => 'cwb admin',
    ),
    'module' => 'publishcontent',
  );

  return $permissions;
}
