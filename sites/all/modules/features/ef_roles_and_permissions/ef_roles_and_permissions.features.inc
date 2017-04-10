<?php
/**
 * @file
 * ef_roles_and_permissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_roles_and_permissions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ef_roles_and_permissions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
