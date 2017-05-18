<?php
/**
 * @file
 * ef_basics.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ef_basics_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'Author' => 'Author',
      'Author +' => 'Author +',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'External Editor' => 'External Editor',
      'Governing Board' => 'Governing Board',
      'Governing Board Member' => 'Governing Board Member',
      'Media Manager' => 'Media Manager',
      'Metadata Manager' => 'Metadata Manager',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'Quality Manager +' => 'Quality Manager +',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  return $permissions;
}
