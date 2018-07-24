<?php
/**
 * @file
 * ef_taxonomy_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ef_taxonomy_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Metadata Manager.
  $roles['Metadata Manager'] = array(
    'name' => 'Metadata Manager',
    'weight' => 20,
  );

  return $roles;
}
