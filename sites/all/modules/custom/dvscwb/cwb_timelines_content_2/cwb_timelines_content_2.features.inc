<?php
/**
 * @file
 * cwb_timelines_content_2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwb_timelines_content_2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
