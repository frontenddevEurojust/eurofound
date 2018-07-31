<?php
$node = menu_get_object();
$array = array("ef_news", "page", "ef_publication", "ef_event", "ef_case_study", "ef_spotlight_entry", "ef_photo_gallery", "ef_video", "ef_vacancy", "ef_call_for_tender", "ef_project", "ef_survey", "ef_comparative_analytical_report", "ef_national_contribution", "ef_report", "ef_ir_dictionary", "ef_input_to_erm", "board_member_page", "ef_emire_dictionary", "ef_factsheet", "ef_network_extranet_page", "ef_working_life_country_profiles");

if (in_array($node->type, $array, TRUE)){

  if (count($node->field_related_taxonomy['und']) > 0 || count($node->field_ef_related_content['und']) > 0) {
    if (substr($_SERVER["REQUEST_URI"], -6, 6)=="/draft") {
      $current_revision=$node->workbench_moderation["current"]->vid;

      $query = db_select('related_content_and_taxonomies', 'rc');
      $query->fields('rc', array("rc_weight", "rc_id", "rc_type", "nid"));
      $query->condition('rc.revision_id', $current_revision, "=");
      $result=$query->execute();

      if ($result->rowCount() > 0) {
        return true;
      }
    }
    else {
      return true;
    }
  }
  else {
    if (substr($_SERVER["REQUEST_URI"], -6, 6)=="/draft") {
      $current_revision=$node->workbench_moderation["current"]->vid;

      $query = db_select('related_content_and_taxonomies', 'rc');
      $query->fields('rc', array("rc_weight", "rc_id", "rc_type", "nid"));
      $query->condition('rc.revision_id', $current_revision, "=");
      $result = $query->execute();

      if($result->rowCount() > 0){
        return true;
      }
    }
  }
}

if (count($node->field_related_taxonomy['und']) == 0 && count($node->field_ef_related_content['und']) == 0) {
  return false;
}
