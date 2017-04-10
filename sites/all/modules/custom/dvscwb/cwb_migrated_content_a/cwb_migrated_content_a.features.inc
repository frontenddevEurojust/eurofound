<?php
/**
 * @file
 * cwb_migrated_content_a.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwb_migrated_content_a_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
