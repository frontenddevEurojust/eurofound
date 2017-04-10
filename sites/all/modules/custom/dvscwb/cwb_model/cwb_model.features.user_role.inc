<?php
/**
 * @file
 * cwb_model.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cwb_model_user_default_roles() {
  $roles = array();

  // Exported role: cwb admin.
  $roles['cwb admin'] = array(
    'name' => 'cwb admin',
    'weight' => 5,
  );

  return $roles;
}
