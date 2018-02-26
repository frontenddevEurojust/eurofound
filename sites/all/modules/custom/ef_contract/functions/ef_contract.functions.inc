<?php
/**
 * Retrieves the current state by $node
 * @param Object $node
 *
 */
function get_current_state($node){

  $current_state = 'draft';

  if(isset($node->workbench_moderation)){
    $current_state = $node->workbench_moderation['current']->state;
  }

  return $current_state;
}

/**
 * Retrieves an Array: Possible States list
 *
 * @param Object $node
 * @param Object $account = $user
 *
 */
function get_available_states($node, $account){

  $states = array();

  $current_state = get_current_state($node);

  $next_states = workbench_moderation_states_next($current_state, $account, $node);
  $state_labels = workbench_moderation_state_labels();

  // Getting the Current state label
  foreach ($state_labels as $key => $value) {
    if($key == $current_state){
      $current_state_label = t('Current: ') . $value;
    }
  }
  $next_states[$current_state] = $current_state_label;

  // Writing the current state as the first option
  $states[$current_state] = $current_state_label;
  foreach ($next_states as $key => $value) {
    $states[$key] = $value;
  }

  /* --- ISSUE 3517 --- */
  // Authors ought to be able to edit published contents, but not publishing them
  if (in_array('Author', $account->roles)) {
    if ($node->workbench_moderation['current']->state == 'published'
      && $node->workbench_moderation['current']->published == 1) {
      array_shift($states);
    }
  }
  /* --- end 3517 --- */

  return $states;
}

/**
 * Retrieves the list of available Authors by Country group
 * @param Integer $gid
 *
 */
function get_assign_to_author_options_by_gid($gid){

  // View name
  $name = 'country_group_members';
  // View display
  $display_id = 'group_membership_entity_reference';
  // Getting the results from "$name" view
  $membership_view_results = views_get_view_result($name, $display_id, array($gid));

  $options = array();
  foreach ($membership_view_results as $key => $object) {

    $user = user_load($object->group_membership_uid);
    $first_name = $user->field_ef_first_name['und'][0]['safe_value'];
    $last_name = $user->field_ef_last_name['und'][0]['safe_value'];
    $nickname = $user->name;
    // Creating the select options
    $options[$object->mid] = $last_name . ', ' . $first_name . ' - ' . $nickname . ' -';

  }

  return $options;
}

function get_assign_to_author_value_by_nid($nid = NULL, $assign_to_author_options, $gid = NULL) {
  if (isset($nid)) {
    $query = db_select('field_revision_field_ef_assign_to_author', 'ata');
    $query->fields('ata', array('revision_id', 'field_ef_assign_to_author_target_id'));
    $query->condition('ata.entity_id', $nid);

    $results = $query->execute()->fetchAll();
  }

  $options = array_keys($assign_to_author_options);

  foreach ($results as $key => $value) {
    if (in_array($value->field_ef_assign_to_author_target_id, $options)) {
      return $value->field_ef_assign_to_author_target_id;
    }
  }

  if (isset($gid)) {
    $leader = get_leader_mid_by_gid($gid);
    return $leader;
  }

  return $options[0];
}

/**
 * Retrieves the $user entity (Obj)
 * by Country group membership identifier
 * @param Integer $mid
 *
 */
function get_user_by_mid($mid){

  $sql = db_select('group_membership', 'gm');
  $sql->fields('gm', array('uid'));
  $sql->condition('gm.mid', $mid, '=');

  $result = $sql->execute()->fetchAll();

  foreach ($result as $key => $value) {
    $uid = $value->uid;
  }

  $user = user_load($uid);

  return $user;
}

/**
 * Retrieves the $contracts availables by $user
 * @param Integer $mid
 *
 */
function get_contract_by_user($user){

  $contracts = array();
  $contracts_tids = $user->field_ef_contracts['und'];
  $contracts = write_contracts($contracts_tids, $tid);

  return $contracts;
}

/**
 * Retrieves the $contracts availables by $user and $node->group
 * @param Integer $mid
 * @param Integer $gid
 *
 */
function get_contract_by_user_and_gid($user, $gid){

  $selected_contracts = array();

  $contracts = get_contract_by_user($user);
  $country = group_load($gid);
  $country_name = strtoupper($country->title);
  foreach ($contracts as $tid => $contract) {

    $up_contract = strtoupper($contract);
    if (strrpos($up_contract, 'CORRESPONDENTS')) {
      if (strrpos($up_contract, $country_name)) {
        $selected_contracts[$tid] = $contract;
      }
    } else {
      // Dealing with exceptions Eurofound and Overview Report Groups
      if(strrpos($up_contract,'REPORT OVERVIEW')) {
        $selected_contracts[$tid] = $contract;
      }else{
        if(strrpos($up_contract,'N/A'))
          $selected_contracts[$tid] = $contract;
      }
    }

  }

  return $selected_contracts;
}

/**
 * Retrieves the list of users
 * who are able to edit the content on the next state (see workflows)
 * @param String $type ($node->type)
 * @param Integer $gid ($node->group)
 * @param String $state
 *
 */
function get_assign_to_user_list($type, $gid, $state){

  // Getting the current workflow
  $workflow = get_workflow_by_content_type($type);
  // Which roles are able to edit on this workflow and this state
  $available_roles = get_available_roles_by_workflow($workflow, $state);
  // Getting the users
  $users = get_available_users_by_roles($available_roles, $gid);

  return $users;

}

/**
 * Retrieves the $group entity
 * @param Obj $user (Entity user)
 *
 */
function get_group_by_user($user){

  $uid = $user->uid;
  $groups = array();

  $sql = db_select('group_membership', 'gm');

  $sql->join('groups', 'g', 'g.gid = gm.gid');

  $sql->fields('gm', array('gid'));
  $sql->fields('g', array('title'));
  $sql->condition('gm.uid', $uid, '=');

  $result = $sql->execute()->fetchAll();

  foreach ($result as $key => $value) {
    $groups[$value->gid] = $value->title;
  }

  return $groups;
}

/**
 * Retrieves the Country group UID
 * @param Integer $gid (Country group ID)
 *
 */
function get_group_leader_uid($gid){

  $sql = db_select('users', 'u');

  $sql->fields('u', array('uid'));
  $sql->fields('gm', array('mid'));
  $sql->fields('gmr', array('role'));

  $sql->innerJoin('group_membership', 'gm', 'gm.uid = u.uid');
  $sql->innerJoin('group_membership_role', 'gmr', 'gmr.mid = gm.mid');
  $sql->innerJoin('groups', 'g', 'g.gid = gm.gid');

  $sql->condition('gmr.role', 'country_group_leader', '=');
  $sql->condition('g.gid', $gid, '=');

  $results = $sql->execute()->fetchAll();
  if(empty($results)){
    $sql = db_select('users', 'u');

    $sql->fields('u', array('uid'));
    $sql->fields('gm', array('mid'));
    $sql->fields('gmr', array('role'));

    $sql->innerJoin('group_membership', 'gm', 'gm.uid = u.uid');
    $sql->innerJoin('group_membership_role', 'gmr', 'gmr.mid = gm.mid');
    $sql->innerJoin('groups', 'g', 'g.gid = gm.gid');

    $sql->condition('gmr.role', 'workgroup_leader', '=');
    $sql->condition('g.gid', $gid, '=');

    $results = $sql->Execute()->fetchAll();

  }
  foreach ($results as $key => $value) {
    $default_uid = $value->uid;
  }

  if(!is_null($default_uid)){

    return $default_uid;
  }
}

/**
 * Retrieves the Default Assigned User
 * @param String $nex_state (Workbench moderation state)
 * @param Integer $gid (Country group ID)
 * @param inputs ($form_state['inputs'])
 * @param Object $node
 *
 */
function get_assign_to_user_by_default($next_state, $gid, $inputs, $node){

  global $user;

  switch ($next_state) {

    case 'approved_for_editing':
    case 'on_second_editing':
    case 'ready_for_publishing':
    case 'published':
    case 'unpublished':

      $default_uid = get_assign_to_user_role_dependency_by_default($node, $role = 'Editor');

      break;

    case 'on_external_editing':

      $default_uid = get_assign_to_user_role_dependency_by_default($node, $role = 'External Editor');

      break;

    case 'requested':
    case 'under_revision_request':

      $default_uid = get_assign_to_user_author_by_default($gid, $inputs, $node);

      break;

    case 'submitted':
    case 'submitted_qr':
    case 'proposal':
    case 'approved':
    case 'rejected':

      if ($node->type == 'ef_annual_progress_report') {
        $default_uid = get_assign_to_user_role_dependency_by_default($node, $role = 'OSU');
      } else {
        $default_uid = get_assign_to_user_role_dependency_by_default($node, $role = 'Quality Manager');
      }

      break;

    default:
      //draft case:
      $creator_uid = $node->uid;
      $creator_user = user_load($creator_uid);
      if (in_array('Author', $creator_user->roles) || in_array('Author +', $creator_user->roles)){
        $default_uid = get_assign_to_user_author_by_default($gid, $inputs, $node);
      }elseif (in_array('Quality Manager', $creator_user->roles)) {
        $default_uid = get_assign_to_user_role_dependency_by_default($node, $role = 'Quality Manager');
      }else{
        $default_uid = get_assign_to_user_role_dependency_by_default($node, $role = 'Quality Manager');
      }
      break;
  }

  return $default_uid;
}

/**
 * Retrieves all Country groups
 *
 */
function get_country_groups(){

  $groups = array();

  $name = 'country_groups';
  $display_id = 'country_groups_entity_reference';
  $results = views_get_view_result($name, $display_id);

  foreach ($results as $key => $result) {
    $groups[$result->gid] = $result->groups_title;
  }

  return $groups;
}

/**
 * Update Country and contracts
 */
function update_node_group($gid, $nid) {

  $update = 'UPDATE group_entity ge
    set ge.gid = :gid
    where ge.entity_id = :nid';

  $args = array(':gid' => $gid, ':nid' => $nid);
  db_query($update, $args);

}

/*
 * Retrieves Revision log message by default
 * (this function is called by custom/ef_contract and contrib/workbench_modulation)
 *
 */
function get_revision_log_message_by_default($user){
  $date = date('d-m-Y, h:i:s');
  $message = $date . ' by ' . $user->mail;

  return t($message);
}

function get_deliverable_kinds($context = NULL) {
  $vocabulary = taxonomy_vocabulary_machine_name_load('ef_deliverable_kinds');
  $load_entity = TRUE;
  $max_depth = NULL;
  $parent = 0;
  $terms = taxonomy_get_tree($vocabulary->vid, $parent, $max_depth, $load_entity);
  $deliverable_kinds['_none'] = '- Select a value -';
  foreach ($terms as $key => $term) {
    $parent = taxonomy_term_load($term->parents[0]);
    if ($term->field_ef_nec_period['und'][0]['value'] == '2018 - 2022') {
      $deliverable_kinds['NEC 2018-2022'][$term->tid] = $term->name;
    }
    else {
      if (isset($parent->name) && $context != 1) {
        $deliverable_kinds['NEC 2014-2018'][$term->tid] = $parent->name . ' - ' . $term->name;
      }
    }
  }

  return $deliverable_kinds;
}

function get_contracts($context = NULL) {
  $vocabulary = taxonomy_vocabulary_machine_name_load('ef_contracts');
  $terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
  $contracts['_none'] = '- Select a value -';
  foreach ($terms as $tid => $term) {
    if ($context == 'old') {
      if (empty($term->field_ef_nec_period['und'][0]['value']) || $term->field_ef_nec_period['und'][0]['value'] == '2014 - 2018') {
        $contracts[$term->tid] = $term->name;
      }
    }
    else{
      if ($term->field_ef_nec_period['und'][0]['value'] == '2018 - 2022' && $context == 1) {
        $contracts['NEC 2018-2022'][$term->tid] = $term->name;
      }
      else {
        if ($term->field_ef_nec_period['und'][0]['value'] == '2018 - 2022') {
          $contracts['NEC 2018-2022'][$term->tid] = $term->name;
        }
        elseif ($context != 1) {
          $contracts['NEC 2014-2018'][$term->tid] = $term->name;
        }
      }
    }
  }

  return $contracts;
}

function get_contract_context($nec, $contract) {
  if (empty($contract)) {
    $period = '2018 - 2022';
  }
  else {
    $contract_obj = taxonomy_term_load($contract);
    $period = $contract_obj->field_ef_nec_period['und'][0]['value'];
  }

  if ($nec && $period == '2018 - 2022') {
    return 1;
  }
  if ($nec && $period == '2014 - 2018') {
    return 2;
  }
  if (!$nec && $period == '2018 - 2022') {
    return 3;
  }
  if (!$nec && $period == '2014 - 2018') {
    return 4;
  }
}

function get_service_type($deliverable_kind_tid) {
  $vocabulary = taxonomy_vocabulary_machine_name_load('ef_service_types');
  $terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
  $service_type_keys = array_keys($terms);
  if ($deliverable_kind_tid != 0 || !empty($deliverable_kind_tid)) {
    $deliverable_kind_obj = taxonomy_term_load($deliverable_kind_tid);
  }
  if (isset($deliverable_kind_obj->field_ef_service_type['und'][1]['tid'])) {
    foreach ($service_type_keys as $key => $service_type_tid) {
      $service_type[$service_type_tid] = 0;
    }
  }
  else {
    foreach ($service_type_keys as $key => $service_type_tid) {
      if (isset($deliverable_kind_obj->field_ef_service_type['und'][0]['tid'])) {
        $service_type[$service_type_tid] = $deliverable_kind_obj->field_ef_service_type['und'][0]['tid'];
      }
    }
  }

  return $service_type;
}

function get_default_deliverable_kind($deliverable_kind_tid = NULL, $deliverable_kind_options) {
  if (isset($deliverable_kind_tid) && in_array($deliverable_kind_tid, $deliverable_kind_options)) {
    return $deliverable_kind_tid;
  }
  else {
    reset($deliverable_kind_options);
    $deliverable_kind_tid = key($deliverable_kind_options);
  }

  return $deliverable_kind_tid;
}

function get_country_group_id_from_contract($contract_tid) {
  $groups = entity_load('group');
  foreach ($groups as $key => $group) {
    if ($group->field_ef_contract['und'][0]['tid'] == $contract_tid) {
      $country_gid = $group->gid;
    }
  }
  
  return $country_gid;  
}

function get_contract_from_country_group_id($gid) {
  $country_group = group_load($gid);
  $cg_contract = $country_group->field_ef_contract['und'][0]['tid'];
  $vocabulary = taxonomy_vocabulary_machine_name_load('ef_contracts');
  $contracts = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
  foreach ($contracts as $tid => $contract) {
    if ($cg_contract == $tid) {
      $contract_tid[] = $cg_contract;
    }
  }
  if (isset($contract_tid)) {
    return $contract_tid[0];
  }

  return;
}


function get_default_deliverable_kind_by_ct($ct) {
  $vocabulary = taxonomy_vocabulary_machine_name_load('ef_deliverable_kinds');
  $load_entity = TRUE;
  $max_depth = NULL;
  $parent = 0;
  $terms = taxonomy_get_tree($vocabulary->vid, $parent, $max_depth, $load_entity);
  foreach ($terms as $key => $term) {
    if ($ct == 'ef_factsheet' && $term->name == 'Provision of ERM factsheets') {
      return $term->tid;
    }
  }
  return;
}

function _ef_contract_create_service_types() {
  //First, we need to create a new vocabulary
  //for the Service Types with the following settings.
  $service_types = array(
    'name' => 'Service types',
    'machine_name' => 'ef_service_types',
    'description' => 'Service types for contracts',
    'hierarchy' => 0,
    'module' => 'ef_contract',
  );
  //Array to object
  $vocabulary = (object) $service_types;
  //Save object as a new vocabulary
  taxonomy_vocabulary_save($vocabulary);

  //Then we need the Vocabulary ID to save the new terms
  $st_taxonomy = taxonomy_vocabulary_machine_name_load('ef_service_types');

  //And these are the terms we need to save
  $service_types = array(
    'N/A',
    'Scheduled reporting service',
    'On-request reporting service',
  );

  //Using taxonomy_term_save
  foreach ($service_types as $key => $value) {
    $term = new stdClass();
    $term->name = $value;
    $term->vid = $st_taxonomy->vid;
    taxonomy_term_save($term);
    $service_type_tids[] = $term->tid;
  }
}

function _ef_contract_create_contracts_and_dks() {
  //And we need to add the new deliverable kinds
  $new_deliverable_kinds = array(
    "N/A" => '',
    "Country update on latest developments in working life" => $service_type_tids[0],
    "Contribution to topical updates" => $service_type_tids[0],
    "Contribution to EurWORK’s annual review of working life"  => $service_type_tids[0],
    "EurWORK’s Working life country profile - update" => $service_type_tids[0],
    "EurWORK database on wages/working time, dispute and dispute resolution mechanisms - update" => $service_type_tids[0],
    "Update of a database of national contacts" => $service_type_tids[0],
    "Annual Progress Report" => $service_type_tids[0],
    "Questionnaire based national contribution to comparative work" => 'both',
    "Questionnaire based national contribution to sectoral representativeness studies" => 'both',
    "Provision of ERM factsheets" => $service_type_tids[1],
    "ERM database on support instruments - 1 instrument update" => $service_type_tids[1],
    "ERM database on restructuring related legislation - 1 regulation update" => $service_type_tids[1],
    "Update of the link collection of the national media sources used for identifying restructuring events" => $service_type_tids[1],
    "On-demand service" => $service_type_tids[1],
  );

  //Using taxonomy_term_save again 
  foreach ($new_deliverable_kinds as $key => $value) {
    $term = new stdClass();
    $term->name = $key;
    $term->vid = 53;
    $term->name_field['und'][0]['value'] = $key;
    $term->field_ef_nec_period['und'][0]['value'] = '2018 - 2022';
    if ($value[1] == 'both') {
      $term->field_ef_service_type['und'][0]['tid'] = $service_type_tids[0];
      $term->field_ef_service_type['und'][1]['tid'] = $service_type_tids[1];
    }
    else {
      $term->field_ef_service_type['und'][0]['tid'] = $value;
    }
    taxonomy_term_save($term);
  }

  //And we need to add the new contracts
  $new_contracts = array(
    '18-3030-00' => array('1 - N/A', ''),
    '18-3030-01' => array('Network of correspondents - Austria', 'AT'),
    '18-3030-02' => array('Network of correspondents - Belgium', 'BE'),
    '18-3030-03' => array('Network of correspondents - Bulgaria', 'BG'),
    '18-3030-04' => array('Network of correspondents - Croatia', 'HR'),
    '18-3030-05' => array('Network of correspondents - Cyprus', 'CY'),
    '18-3030-06' => array('Network of correspondents - Czech Republic', 'CZ'),
    '18-3030-07' => array('Network of correspondents - Denmark', 'DK'),
    '18-3030-08' => array('Network of correspondents - Estonia', 'EE'),
    '18-3030-09' => array('Network of correspondents - Finland', 'FI'),
    '18-3030-10' => array('Network of correspondents - France', 'FR'),
    '18-3030-11' => array('Network of correspondents - Germany', 'DE'),
    '18-3030-12' => array('Network of correspondents - Greece', 'GR'),
    '18-3030-13' => array('Network of correspondents - Hungary', 'HU'),
    '18-3030-14' => array('Network of correspondents - Ireland', 'IE'),
    '18-3030-15' => array('Network of correspondents - Italy', 'IT'),
    '18-3030-16' => array('Network of correspondents - Latvia', 'LV'),
    '18-3030-17' => array('Network of correspondents - Lithuania', 'LT'),
    '18-3030-18' => array('Network of correspondents - Luxembourg', 'LU'),
    '18-3030-19' => array('Network of correspondents - Malta', 'MT'),
    '18-3030-20' => array('Network of correspondents - the Netherlands', 'NL'),
    '18-3030-21' => array('Network of correspondents - Poland', 'PL'),
    '18-3030-22' => array('Network of correspondents - Portugal', 'PT'),
    '18-3030-23' => array('Network of correspondents - Romania', 'RO'),
    '18-3030-24' => array('Network of correspondents - Slovakia', 'SK'),
    '18-3030-25' => array('Network of correspondents - Slovenia', 'SI'),
    '18-3030-26' => array('Network of correspondents - Spain', 'ES'),
    '18-3030-27' => array('Network of correspondents - Sweden', 'SE'),
    '18-3030-28' => array('Network of correspondents - UK', 'GB'),
  );

  //Using taxonomy_term_save again 
  foreach ($new_contracts as $key => $value) {
    $term = new stdClass();
    $term->name = $value[0];
    $term->vid = 51;
    $term->field_ef_contract_number['und'][0]['value'] = $key;
    $term->field_ef_nec_period['und'][0]['value'] = '2018 - 2022';
    $term->name_field['und'][0]['value'] = $value[0];
    $term->field_ef_eu_related_countries['und'][0]['iso2'] = $value[1];
    taxonomy_term_save($term);
  }
}

function _ef_contract_populate_nec_period() {
  $vocabulary = taxonomy_vocabulary_machine_name_load('ef_contracts');
  $terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
  foreach ($terms as $key => $term) {
    if ($term->field_ef_nec_period['und'][0]['value'] != '2018 - 2022') {
      $term->field_ef_nec_period['und'][0]['value'] = '2014 - 2018';
      taxonomy_term_save($term);
    }
  }
  $vocabulary = taxonomy_vocabulary_machine_name_load('ef_deliverable_kinds');
  $terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
  foreach ($terms as $key => $term) {
    if ($term->field_ef_nec_period['und'][0]['value'] != '2018 - 2022') {
      $term->field_ef_nec_period['und'][0]['value'] = '2014 - 2018';
      taxonomy_term_save($term);
    }
  }
  return;
}

function _ef_contract_populate_contracts_in_cg() {
  $groups = entity_load('group');
  $vocabulary = taxonomy_vocabulary_machine_name_load('ef_contracts');
  $contracts = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
  foreach ($groups as $key => $group) {
    $coincidence = FALSE;
    foreach ($contracts as $key => $contract) {
      if ($contract->field_ef_nec_period['und'][0]['value'] == '2018 - 2022') {
        $coincidence = strpos($contract->name, $group->title);
        if ($coincidence !== FALSE) {
          $group->field_ef_contracts['und'][0]['tid'] = $contract->tid;
          entity_save('group', $group);
          break;
        }
        if ($group->title == 'United Kingdom' && strpos($contract->name, 'UK')) {
          $group->field_ef_contracts['und'][0]['tid'] = $contract->tid;
          entity_save('group', $group);
          break;
        }
        if ($group->title == 'Eurofound' && strpos($contract->name, 'N/A')) {
          $group->field_ef_contracts['und'][0]['tid'] = $contract->tid;
          entity_save('group', $group);
          break;
        }
      }
    }
    if ($coincidence === FALSE) {
      var_dump($group->title);
    }
  }
}