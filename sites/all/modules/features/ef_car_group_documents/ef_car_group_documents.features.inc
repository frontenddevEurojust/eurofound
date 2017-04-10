<?php
/**
 * @file
 * ef_car_group_documents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_car_group_documents_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
