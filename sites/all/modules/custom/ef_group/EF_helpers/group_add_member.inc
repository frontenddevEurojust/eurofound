<?php
/**
 * Retrieve Authors who are still not members on this group
 *
 * @param integer $gid
 *   The ID of the group entity
 *
 * @return array
 *   A list of Authors names (first name, last name and the username as key)
 */
function get_authors($gid){

  $authors = array();

  // SUB-SELECT, USERS' UID (Who already are in this group?)
  $subquery = db_select('group_membership', 'gm');
  $subquery->fields('gm', array('uid'));
  $subquery->join('groups', 'g', 'g.gid = gm.gid');
  $subquery->condition('g.gid', $gid, '=');

  $sub_results = $subquery->execute()->fetchAll();


  // MAIN SELECT
  $query = db_select('users', 'u');
  
  $query->join('users_roles', 'ur', 'u.uid = ur.uid');
  $query->join('role', 'r', 'r.rid = ur.rid');
  $query->join('field_data_field_ef_first_name', 'fn', 'fn.entity_id = u.uid');
  $query->join('field_data_field_ef_last_name', 'ln', 'ln.entity_id = u.uid');

  $query->fields('u', array('uid', 'name'));
  $query->fields('fn', array('field_ef_first_name_value'));
  $query->fields('ln', array('field_ef_last_name_value'));
  $query->fields('r', array('rid', 'name'));

  $query->condition('r.name', array('Author','Author +'),'IN');
  $query->condition('u.uid', $subquery, 'NOT IN');

  $query->orderBy('field_ef_last_name_value', 'ASC');

  // Results
  $result = $query->execute()->fetchAll();
  
  
  foreach ($result as $key => $value) {
    $authors[$value->name] = $value->field_ef_last_name_value 
    . ', ' . $value->field_ef_first_name_value . ' (' . $value->name . ')';
  }

  return $authors;

}

/**
 * Retrieve Countries in order to filter authors by country
 *
 * @param integer $gid
 *   The ID of the group entity
 *
 * @return array
 *   A list of Countries
 */
function get_countries($gid){

  $countries = array();
  $countries[] = t('- Any -');

  // query
  $query = db_select('users', 'u');
  $query->distinct();

  $query->join('field_data_field_ef_contracts', 'c', 'c.entity_id = u.uid');
  $query->join('taxonomy_term_data', 't', 't.tid = c.field_ef_contracts_tid');
  $query->join('field_data_field_ef_eu_related_countries', 'rc', 'rc.entity_id = t.tid');
  $query->join('countries_country', 'cc', 'cc.iso2 = rc.field_ef_eu_related_countries_iso2');

  $query->fields('cc', array('name','iso2'));

  $query->orderBy('name', 'ASC');

  // results
  $result = $query->execute()->fetchAll();
  
  foreach ($result as $key => $value) {
    $countries[$value->iso2] = $value->name;
  }

  return $countries;

}

/**
 * Retrieve Authors who are still not members on this group and are from the selected country
 *
 * @param integer $gid
 *   The ID of the group entity
  * @param string $iso_country
 *   The country's ISO code
 *
 * @return array
 *   A list of Authors names by country selected(first name, last name and the username as key)
 */
function get_authors_by_country($gid, $iso_country){
  
  if($iso_country == '0'){

    $authors = get_authors($gid);
    
  }else{

    $authors = array();

    $none_value = "";
    $node_select = '-Select-';

    // PATCH 1.0 - Avoids N/A contracts
    // see variable $country_name and condition in line 155
    // First condition
    $sql = db_select('countries_country', 'cc');
    $sql->fields('cc', array('name'));
    $sql->condition('cc.iso2', $iso_country, '=');
    $country_name = $sql->execute()->fetchField();

    // SUB-SELECT, USERS' UID (Who already are in this group?)
    $subquery = db_select('group_membership', 'gm');
    $subquery->fields('gm', array('uid'));
    $subquery->join('groups', 'g', 'g.gid = gm.gid');
    $subquery->condition('g.gid', $gid, '=');

    $sub_results = $subquery->execute()->fetchAll();

    // MAIN QUERY
    $query = db_select('users', 'u');
    $query->distinct();

    $query->join('users_roles', 'ur', 'ur.uid = u.uid');
    $query->join('role', 'r', 'r.rid = ur.rid');
    $query->join('field_data_field_ef_first_name', 'fn', 'fn.entity_id = u.uid');
    $query->join('field_data_field_ef_last_name', 'ln', 'ln.entity_id = u.uid');
    $query->join('field_data_field_ef_contracts', 'c', 'c.entity_id = u.uid');
    $query->join('taxonomy_term_data', 't', 't.tid = c.field_ef_contracts_tid');
    $query->join('field_data_field_ef_eu_related_countries', 'rc', 'rc.entity_id = t.tid');
    $query->join('countries_country', 'cc', 'cc.iso2 = rc.field_ef_eu_related_countries_iso2');

    $query->fields('u', array('uid', 'name'));
    $query->fields('fn', array('field_ef_first_name_value'));
    $query->fields('ln', array('field_ef_last_name_value'));
    $query->fields('r', array('rid', 'name'));

    $query->condition('r.name', 'Author');
    $query->condition('cc.iso2', $iso_country, 'LIKE');
    $query->condition('t.name', '%'.$country_name.'%', 'LIKE');
    $query->condition('u.uid', $subquery, 'NOT IN');

    $query->orderBy('field_ef_last_name_value', 'ASC');

    // Results
    $result = $query->execute()->fetchAll();

    $authors[$none_value] = $node_select;
    foreach ($result as $key => $value) {
      $authors[$value->name] = $value->field_ef_last_name_value 
      . ', ' . $value->field_ef_first_name_value . ' (' . $value->name . ')';
    } 

  }

  return $authors;

}

/**
 * Retrieve Group's LEADER (if he/she exists)
 *
 * @param integer $gid
 *   The ID of the group entity
 *
 * @return User entity
 *   The user who is the leader of the group with GID = $gid
 */
function get_group_leader($gid){

  $query = db_select('group_membership', 'gm');

  $query->join('group_membership_role', 'gmr', 'gmr.mid = gm.mid');
  $query->join('group_role', 'gr', 'gr.name = gmr.role');
  $query->join('groups', 'g', 'g.gid = gm.gid');

  $query->fields('gm', array('uid'));

  // BUG solved 2015/11/17, Who is the leader?
  // Instead of checking gr.rid = 3 (staging)
  // Now, we check gr.name like '%leader%'
  $query->condition('gr.name', '%leader%', 'LIKE');
  $query->condition('g.gid', $gid, '=');

  $result = $query->execute()->fetchAll();

  foreach ($result as $key => $value) {
    $leader = user_load($value->uid);
  }

  return $leader;

}

/**
 * Retrieve Country_group roles
 *
 * @param integer $type
 *   $type = 'country_group'
 *
 * @return roles
 *   All the roles availabes in this group
 */
function get_roles_by_group_type($type, $account){

  global $user;

  if( in_array('OSU', $user->roles) 
    || in_array('Eurofound Administrator', $user->roles) 
    || in_array('Eurofound Content Manager', $user->roles) ){

    if( in_array('OSU', $account->roles) 
    || in_array('Eurofound Administrator', $account->roles) 
    || in_array('Eurofound Content Manager', $account->roles) ){

      $query = db_select('group_role', 'gr')
        ->fields('gr', array('name', 'label'))
        ->condition('gr.type', $type, 'LIKE')
        ->condition('gr.status', '1', '=')
        ->condition('gr.label', '%creator%', 'LIKE');       

    }elseif (in_array('Author', $account->roles)) {

      $query = db_select('group_role', 'gr')
        ->fields('gr', array('name', 'label'))
        ->condition('gr.type', $type, 'LIKE')
        ->condition('gr.status', '1', '=')
        ->condition('gr.label', '%creator%', 'NOT LIKE');
    }else{

      $query = db_select('group_role', 'gr')
        ->fields('gr', array('name', 'label'))
        ->condition('gr.type', $type, 'LIKE')
        ->condition('gr.status', '1', '=')
        ->condition('gr.label', '%creator%', 'NOT LIKE');      
    } 
      
  }elseif (in_array('administrator', $user->roles)) {

    if( in_array('OSU', $account->roles) 
    || in_array('Eurofound Administrator', $account->roles) 
    || in_array('Eurofound Content Manager', $account->roles)
    || in_array('administrator', $account->roles) ){

      $query = db_select('group_role', 'gr')
        ->fields('gr', array('name', 'label'))
        ->condition('gr.type', $type, 'LIKE')
        ->condition('gr.status', '1', '=')
        ->condition('gr.label', '%creator%', 'LIKE');       

    }elseif (in_array('Author', $account->roles)) {
      $query = db_select('group_role', 'gr')
        ->fields('gr', array('name', 'label'))
        ->condition('gr.type', $type, 'LIKE')
        ->condition('gr.status', '1', '=')
        ->condition('gr.label', '%creator%', 'NOT LIKE');
    }else{
      $query = db_select('group_role', 'gr')
        ->fields('gr', array('name', 'label'))
        ->condition('gr.type', $type, 'LIKE')
        ->condition('gr.status', '1', '=')
        ->condition('gr.label', '%creator%', 'NOT LIKE');        
    }

  }else{

    $query = db_select('group_role', 'gr')
      ->fields('gr', array('name', 'label'))
      ->condition('gr.type', $type, 'LIKE')
      ->condition('gr.status', '1', '=')
      ->condition('gr.label', '%creator%', 'NOT LIKE');    

  }

  $roles = array();

  $res = $query->execute()->fetchAll();

  foreach ($res as $key => $value) {
    $roles[$value->name] = $value->label;
  }

  return $roles;
  
}

