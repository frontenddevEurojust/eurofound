<?php

/**
 * Gets the Group thanks to $action variable, from the FORM
 *
 * @param String $action (e.g. "/group/2/member/903/edit?destination=group/2/member")
 *   The ID of the group entity is the second argument
 *
 */
function get_group_by_form($action){

  $actions = explode("/", $action);
  $gid = $actions[2];

  // loading the current group
  $group = group_load($gid);

  return $group;

}

/**
 * Gets the Author (entity) thanks to $action variable, from the FORM
 *
 * @param String $action (e.g. "/group/2/member/903/edit?destination=group/2/member")
 *   The ID of the group entity is the second argument
 *
 */
function get_author_by_form($action){

  $actions = explode("/", $action);
  $uid = $actions[4];

  // loading the current author
  $author = user_load($uid);

  return $author;

}


/**
 * Update the Group Leader, the leader has to be unique
 *
 * @param integer $gid
 *   The ID of the group entity
 *
 */
function overthrow($gid){

  $select = db_select('group_membership', 'gm');

  $select->join('group_membership_role', 'gmr', 'gmr.mid = gm.mid');
  $select->fields('gm', array('mid', 'gid', 'uid'));
  $select->fields('gmr', array('role'));
  $select->condition('gmr.role', 'country_group_leader', 'LIKE');
  $select->condition('gm.gid', $gid, '=');
  $select->condition('gmr.role','country_group_member','!=');

  $results = $select->execute()->fetchAll();
  
  foreach ($results as $r => $result) {
    $mid = $result->mid;
  }
  
  // Checking if $mid member has more than just one role
  $check_select = db_select('group_membership_role','gmr');
  $check_select->fields('gmr', array('mid', 'role'));
  $check_select->condition('gmr.mid',$mid,'='); 
  
  $check_results = $check_select->execute()->fetchAll();
  if(count($check_results) > 1){

    foreach ($check_results as $key => $value) {

       if($value->role == 'country_group_leader'){

          $delete = "DELETE from group_membership_role where mid = :mid and role = :role";
          $args = array(':mid' => $value->mid, ':role' => $value->role);
          db_query($delete, $args);
          
       }

     }  

   }
   else{

    $update = "UPDATE group_membership_role gmr
              inner join group_membership gm on gm.mid = gmr.mid
              set role = 'country_group_member'
              where gmr.mid = :mid
              and gm.gid = :gid"; 

    foreach ($results as $r => $result) {
     
      $args = array(':mid' => $result->mid, ':gid' => $gid);
      db_query($update, $args);    
     
    }       
   }


}

function inherit_leadership($gid, $uid){

  $member = group_membership_load($gid, $uid);
  $leader = get_group_leader($gid);

  if ($member->uid == $leader->uid) {
    return true;
  }else{
    return false;
  }

}

/**
 * Checks if the User (UID) is already the leader in another Country group
 *
 * @param integer $uid
 *   The ID of the user (entity)
 * @param integer $gid
 *   The ID of the current Country group (entity)
 *
 */
function check_roles($uid, $gid){

  $out_gid = 0;

  $select = db_select('group_membership', 'gm');

  $select->join('group_membership_role', 'gmr', 'gmr.mid = gm.mid');
  $select->fields('gm', array('mid', 'gid', 'uid'));
  $select->fields('gmr', array('role'));
  $select->condition('gm.uid', $uid, '=');
  $select->condition('gm.gid', $gid, '!=');

  $result = $select->execute()->fetchAll();

  foreach ($result as $key => $value) {
    if($value->role == 'country_group_leader'){
      $out_gid = $value->gid;
    }
  }

  return $out_gid;

}


/**
 * Creates the message to indicate to the useres, that $uid Author is
 * already the leader in another group ($gid)
 *
 * @param integer $gid
 *   The ID of the another Country group
 * @param integer $uid
 *   The ID of the user (author)
 */
function is_leader_in_other_group($uid, $out_gid){

  $group = group_load($out_gid);
  $author = user_load($uid);

  $message = 'It is not possible to change the role, becasue the author "' . $author->name .
    '" is already the leader in the Country group "'. $group->title .'". ';

  drupal_set_message($message, 'warning');

}
