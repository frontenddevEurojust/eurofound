<?php

include 'functions/auxiliar_functions.inc';

// This feature has relationship with PATCH 1.0
// Custom action for VBO (View Bulk Operation module)
// See view http://www.efstaging.bilbomatica.es/update-contracts
/**
 * Implements hook_action_info().
 */
function ef_contract_action_info() {

  // UPDATE COUNTRY GROUP AND CONTRACT
  $actions['ef_contract_update_country_group_and_contract'] = array(
    'type' => 'node',
    'label' => t('Update Country group and Contract'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  // UPDATE old contracts with real values (Authors and contracts)
  $actions['ef_contract_upload_contract'] = array(
    'type' => 'node', // Here come's the name of your custom entity type
    'label' => t('Upload contract'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  // UPDATE old contracts with N/A contract
  $actions['ef_contract_upload_NA_contract'] = array(
    'type' => 'node', // Here come's the name of your custom entity type
    'label' => t('Upload N/A contracts'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  // Change EF Article, CAR/REP,NC,IR Dictionary status
  // from Approved for Editing to On external Editing
  $actions['ef_editor_to_ee'] = array(
    'type' => 'node', // Here come's the name of your custom entity type
    'label' => t('Change status to On External Editing'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );
  // Update empty contracts for network quarterly reports
  $actions['empty_network'] = array(
    'type' => 'node', // Here come's the name of your custom entity type
    'label' => t('Update empty Network Quarterly Reports'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );


  return $actions;

}
function empty_network($entity,$context){


  if($entity->workbench_moderation['current']->state == 'draft' || $entity->workbench_moderation['current']->state == 'requested'){

    $select = "SELECT b.name
             FROM countries_country b
             WHERE b.iso2 = :country";

    $country_name = db_query($select,array(':country' => $entity->field_ef_quarter_report_country['und'][0]['iso2']))->fetchAll();
    $group = group_load_by_name($country_name[0]->name);
    $entity = node_contract($entity,$group);

  } else {

    $user = get_user_by_mid($entity->field_ef_assign_to_author['und'][0]['target_id']);
    $contracts = get_contract_by_user($user);
    foreach ($contracts as $key => $value) {
      if(strpos($value, "scheduled"))
        $entity->field_ef_author_contract['und'][0]['tid'] = $key;
    }
  }
  entity_save('node', $entity);
}
function ef_editor_to_ee($entity,$context){

  if($entity->workbench_moderation['current']->state == 'approved_for_editing'){
    //get new values to change for the node
    //assigned to editor default user by default
    $assign_to_user = get_assign_to_user_role_dependency_by_default($entity,$role = 'External Editor');
    $new_state = 'on_external_editing';

    $entity->field_ef_assign_to_user['und'][0]['target_id'] = $assign_to_user;
    workbench_moderation_moderate($entity,$new_state);

    entity_save('node',$entity);
  }
}

function ef_contract_upload_contract($entity, $context) {

  $type = $entity->type;

  // Checking old assign_to field exists
  if (isset($entity->field_assign_to_erm_reg['und'][0]['target_id'])
    || isset($entity->field_assign_to_erm_si['und'][0]['target_id'])
    || isset($entity->field_ef_assign_to['und'][0]['target_id'])) {

    // ERM REGULATION
    if ($type == 'ef_erm_regulation') {
      $old_assigned_contract_uid = $entity->field_assign_to_erm_reg['und'][0]['target_id'];
      $old_contract_tid = $entity->field_contract_erm_reg['und'][0]['tid'];
    }
    // ERM SUPPORT INSTRUMENT
    elseif ($type == 'erm_support_instrument') {
      $old_assigned_contract_uid = $entity->field_assign_to_erm_si['und'][0]['target_id'];
      $old_contract_tid = $entity->field_contract_erm_si['und'][0]['tid'];
    }
    // REST OF CONTENT TYPES
    else {
      $old_assigned_contract_uid = $entity->field_ef_assign_to['und'][0]['target_id'];
      $old_contract_tid = $entity->field_ef_contract['und'][0]['tid'];
    }

    // 1. Old contract = New contract
    $new_contract = $old_contract_tid;
    $new_contract_term = taxonomy_term_load($new_contract);
    $new_contract_name = $new_contract_term->name;

    // 2. Search Country Group on the Contract
    $old_assigned_contract_user = user_load($old_assigned_contract_uid);
    $old_gids = get_group_by_user($old_assigned_contract_user);
    foreach ($old_gids as $this_gid => $country) {
      $pos = strpos(strtolower($new_contract_name), strtolower($country));
      if ($pos !== false) {
        $new_gid = $this_gid;
      }
    }

    if (isset($new_gid)) {

      // 3. Assign to Author (mid) = Assign to (uid)
      $new_author_member = group_membership_load($new_gid, $old_assigned_contract_uid);

      // 4. Assign to User (uid)
      $current_state = $entity->workbench_moderation['current']->state;
      $new_assigned_user = get_assign_to_user_by_default($current_state, $new_gid, $inputs = null, $entity);

      if (isset($new_assigned_user)) {

        // NEW CONTRACT assignation
        $entity->field_ef_assign_to_country_group['und'][0]['target_id'] = $new_gid;
        $entity->field_ef_assign_to_author['und'][0]['target_id'] = $new_author_member->mid;
        $entity->field_ef_author_contract['und'][0]['tid'] = $new_contract;
        // NEW ASSIGN TO USER
        $entity->field_ef_assign_to_user['und'][0]['target_id'] = $new_assigned_user;

        // Saving entity
        entity_save('node', $entity);

      } else {

        $message = 'Undefined "Assign to User" field (node->nid = ' . $entity->nid . ')';
        drupal_set_message(t($message), $type = 'warning');

      }

    } else {

      $message = 'Warning. Undefined Country group (node->nid = ' .$entity->nid . ')';
      drupal_set_message(t($message), $type = 'warning');

    }

  }

  else {
    $message = 'Error. Revise node nid = '.$entity->nid. ')';
    drupal_set_message(t($message), $type = 'error');
  }

}


function ef_contract_upload_NA_contract($entity, $context){

  $country_name = get_country_name_by_content_type($entity);
  dpm($country_name);

  // COUNTRY GROUP ASSIGNED
  $gid = get_gid_by_country_group_name($country_name);

  // ASSIGNED AUTHOR (MID)
  $mid = get_leader_mid_by_gid($gid);

  // CONTRACT
  $contract_tid = get_assigned_contract($gid, $entity->type);

  if (isset($entity->workbench_moderation['current']->state)) {

    $current_state = $entity->workbench_moderation['current']->state;
    $assigned_user = get_assign_to_user_by_default($current_state, $gid, $inputs = null, $entity);

      if (isset($assigned_user)) {

        // NEW CONTRACT assignation
        //$entity->field_ef_assign_to_country_group['und'][0]['target_id'] = $gid;
        //$entity->field_ef_assign_to_author['und'][0]['target_id'] = $mid;
        //$entity->field_ef_author_contract['und'][0]['tid'] = $contract_tid;
        // NEW ASSIGN TO USER
        //$entity->field_ef_assign_to_user['und'][0]['target_id'] = $assigned_user;

        //avoid_unique_changed_date($entity);

        //field_attach_update('node', $entity);

        $node_url = url(drupal_get_path_alias('node/'. $entity->nid),array('absolute' => TRUE));
        drupal_set_message(l($entity->type . ', ' . $entity->title . ' NID: ' . $entity->nid, $node_url));

      } else {
        $message = 'Missing Assigned User. Revise node nid = '.$entity->nid. ' and "by default functions")';
        drupal_set_message(t($message), $type = 'warning');
      }

  }

}

