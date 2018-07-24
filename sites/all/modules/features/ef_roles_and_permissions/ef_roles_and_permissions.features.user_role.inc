<?php
/**
 * @file
 * ef_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ef_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Author.
  $roles['Author'] = array(
    'name' => 'Author',
    'weight' => 2,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 5,
  );

  // Exported role: Eurofound Administrator.
  $roles['Eurofound Administrator'] = array(
    'name' => 'Eurofound Administrator',
    'weight' => 7,
  );

  // Exported role: Eurofound Content Manager.
  $roles['Eurofound Content Manager'] = array(
    'name' => 'Eurofound Content Manager',
    'weight' => 6,
  );

  // Exported role: Event Administrator.
  $roles['Event Administrator'] = array(
    'name' => 'Event Administrator',
    'weight' => 9,
  );

  // Exported role: External Editor.
  $roles['External Editor'] = array(
    'name' => 'External Editor',
    'weight' => 3,
  );

  // Exported role: Governing Board.
  $roles['Governing Board'] = array(
    'name' => 'Governing Board',
    'weight' => 11,
  );

  // Exported role: Governing Board Member.
  $roles['Governing Board Member'] = array(
    'name' => 'Governing Board Member',
    'weight' => 14,
  );

  // Exported role: Media Manager.
  $roles['Media Manager'] = array(
    'name' => 'Media Manager',
    'weight' => 10,
  );

  // Exported role: OSU.
  $roles['OSU'] = array(
    'name' => 'OSU',
    'weight' => 13,
  );

  // Exported role: Quality Manager.
  $roles['Quality Manager'] = array(
    'name' => 'Quality Manager',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 8,
  );

  return $roles;
}
