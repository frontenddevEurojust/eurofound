<?php

function get_taxonomy_options_by_name($name, $parent){

  $options = array();

  $country_vocabulary = taxonomy_vocabulary_machine_name_load($name);
  $countries = taxonomy_get_tree($country_vocabulary->vid, $parent);

  foreach ($countries as $key => $country) {
    $options[$country->tid] = $country->name;
  }

  return $options;

}

function get_country_tids(){

  $tids = array();

  $name = 'country';
  $countries = get_taxonomy_options_by_name($name, $parent = 0);
  foreach ($countries as $key => $value) {
    $tids[$value] = $key;
  }

  return $tids;

}

function node_basic_conf($node){

  $node->language = "en";
  $node->type = 'ef_annual_progress_report';
  $node->status = 0;

  return $node;
}

function node_contract($node, $groups){

  foreach ($groups as $key => $group) {

    $gid = $group->gid;

    $author_uid = get_group_leader_uid($gid);
    $author_user = user_load($author_uid);
    $author_member = group_membership_load($gid, $author_uid);
    $author_contracts = get_contract_by_user($author_user);

    $contract_tid = 0;
    $country_group_name = strtoupper($group->title);
    foreach ($author_contracts as $key => $contract) {
      $contract_up = strtoupper($contract);
      if (strrpos($contract_up, $country_group_name)) {
        if (strrpos($contract_up, 'SCHEDULED')) {
          $contract_tid = $key;
        }
      }
    }
  }

  if (isset($gid)) {
    $node->field_ef_assign_to_country_group['und'][0]['target_id'] = $gid;
    $node->field_ef_assign_to_author['und'][0]['target_id'] = $author_member->mid;
    $node->field_ef_assign_to_user['und'][0]['target_id'] = $author_uid;
    $node->field_ef_author_contract['und'][0]['tid'] = $contract_tid;
  }

  return $node;
}

function usersAvailable(){

    $sql = "SELECT au.field_ef_assign_to_user_target_id, u.name
            FROM field_data_field_ef_assign_to_user au
            INNER JOIN users u ON u.uid = au.field_ef_assign_to_user_target_id
            WHERE au.bundle LIKE 'ef_annual_progress_report'";


  $result = db_query($sql)->fetchAll();



  $options = array();

  foreach ($result as $key => $value) {

    $options[$value->field_ef_assign_to_user_target_id] = $value->name;
  }



  return $options;

}

function get_empty_fields($node){

  $all_fields = get_field_machine_name();
  $checking_fields_array = array();
  $checking_fields = $node->field_ef_checking_arp_fields['und'];
  foreach ($checking_fields as $key => $value) {
    $checking_fields_array[] = $value['value'];
  }

  $empty_fields = array_diff($all_fields, $checking_fields_array);

  return $empty_fields;

}


function fill_in_cheking_fields($node) {

  unset($node->field_ef_checking_arp_fields);
  $field_names = get_field_machine_name();

  foreach ($field_names as $name) {

    $this_field = $name;
    $this_node_field = $node->$this_field;

    if (!isset($this_node_field['und'][0]['value'])) {
      $node->field_ef_checking_arp_fields['und'][]['value'] = $name;
    }
  }

}

function get_field_machine_name(){

  $fields = array();

  $sql = db_select('field_config', 'fc');
  $sql->join('field_config_instance', 'fci', 'fci.field_id = fc.id');
  $sql->fields('fc', array('field_name'));
  $sql->condition(
    db_and()
      ->condition('fc.id', '743', '!=')
      ->condition('fci.bundle', 'ef_annual_progress_report', '=')
      ->condition(
        db_or()
          ->condition('fc.type', 'text_long','=')
          ->condition('fc.type', 'list_text','=')
      )
  );

  $results = $sql->execute()->fetchAll();

  foreach ($results as $key => $value) {
    $fields[] = $value->field_name;
  }

  return $fields;

}

function get_apr_mandatory_fields(){

  // Some fields commented and added due to #3691
  $fields = array(
    'field_ef_date_and_partici_bm',
    'field_ef_working_methods_rating',
    'field_ef_general_kind_access',
    'field_ef_related_acess',
    'field_ef_general_kind_useful',
    'field_ef_related_deliv_useful',
    'field_ef_support_admin_rating',
    'field_ef_support_deliver_rating',
    //'field_ef_invoicing_policy_rating',
    //'field_ef_ef_adherence_rating',
    //'field_ef_yammer_rating',
    'field_ef_cms_system_rating',
    'field_ef_network_tend_main_area',
    //'field_ef_completed_by',
  );

  return $fields;
}

function get_empty_apr_mandatory_fields($node) {

  $fields = array();

  $no_checked_fields = get_empty_fields($node);
  $mandatory_fields = get_apr_mandatory_fields();

  $fields = array_diff($mandatory_fields, $no_checked_fields);

  return $fields;
}

function get_field_suffix_description($description_type) {

  $SC_fields_which_require_description = array(
    'field_ef_quart_reporting_one_sc',
    'field_ef_quart_reporting_two_sc',
    'field_ef_standard_contrib_sc', 
    'field_ef_short_contrib_sc', 
    'field_ef_contrib_to_rep_sc',
    'field_ef_restruct_si_sc', 
    'field_ef_factsheets_sp', 
    'field_ef_rsf_standard_sc', 
    'field_ef_rsf_extended_sc', 
    'field_ef_spotlight_sc', 
    'field_ef_erm_annual_report_sc', 
    'field_ef_erm_quarterly_sc', 
    'field_ef_new_entries_sc', 
    'field_ef_national_media_sc', 
    'field_ef_industrial_relations_sc',
    'field_ef_other_research_sc', 
  );

  $GC_fields_which_require_description = array(
    'field_ef_quart_reporting_one_gc',
    'field_ef_quart_reporting_two_gc',
    'field_ef_standard_contrib_gc',
    'field_ef_short_contrib_gc',
    'field_ef_contrib_to_rep_gc',
    'field_ef_restruct_si_gc',
    'field_ef_factsheets_gc',
    'field_ef_rsf_standard_gc',
    'field_ef_rsf_extended_gc',
    'field_ef_spotlight_gc',
    'field_ef_erm_annual_report_gc',
    'field_ef_erm_quarterly_gc',
    'field_ef_new_entries_gc',
    'field_ef_national_media_gc',
    'field_ef_industrial_relations_gc',
    'field_ef_other_research_gc',
  );

  if ($description_type == 'sc') {
    return $SC_fields_which_require_description;
  } elseif ($description_type == 'gc') {
    return $GC_fields_which_require_description;
  }

}
