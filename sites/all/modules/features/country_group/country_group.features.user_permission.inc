<?php
/**
 * @file
 * country_group.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function country_group_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access group overview'.
  $permissions['access group overview'] = array(
    'name' => 'access group overview',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'OSU' => 'OSU',
      'administrator' => 'administrator',
    ),
    'module' => 'group',
  );

  // Exported permission: 'bypass group access'.
  $permissions['bypass group access'] = array(
    'name' => 'bypass group access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'group',
  );

  // Exported permission: 'configure group module'.
  $permissions['configure group module'] = array(
    'name' => 'configure group module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'group',
  );

  // Exported permission: 'create country_group group'.
  $permissions['create country_group group'] = array(
    'name' => 'create country_group group',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'OSU' => 'OSU',
      'administrator' => 'administrator',
    ),
    'module' => 'group',
  );

  return $permissions;
}
