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
function get_assign_to_author_by_gid($gid){

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


