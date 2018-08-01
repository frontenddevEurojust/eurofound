<?php
/**
 * @file
 * ef_ft_fieldbase.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_ft_fieldbase_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
