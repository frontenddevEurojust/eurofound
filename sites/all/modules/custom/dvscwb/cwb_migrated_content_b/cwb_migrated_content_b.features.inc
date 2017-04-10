<?php
/**
 * @file
 * cwb_migrated_content_b.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwb_migrated_content_b_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
