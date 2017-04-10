<?php

/**
 * Retrieves Country list names from COUNTRY taxonomy
 *
 * @return array
 *   A list of Country names
 */
function get_country_name_list(){

	$countries = array();

	$countries['EU level'] = 'EU level';
	$select = db_select('taxonomy_vocabulary', 'tv');

	$select->fields('tv', array('vid', 'machine_name'));
	$select->condition('tv.machine_name', 'country', '=');

	$results = $select->execute()->fetchAll();

	foreach ($results as $index => $result) {
	  $vid = $result->vid;
	}

	$taxonomy_terms = taxonomy_get_tree($vid);
	foreach ($taxonomy_terms as $key => $term) {
	  $countries[$term->name] = $term->name;
	}


	$query = db_select('groups','g');
	$query->fields('g',array('title'));

	$existing_groups = $query->execute()->fetchAll();


	foreach($countries as $key =>$value){
		foreach($existing_groups  as $k => $v){
				if($value == $v->title ){
					unset($countries[$key]);
				}
		}
	}

  return $countries;

}

function get_current_group_admin($group){

	$gid = $group->gid;

	$sql = db_select('users', 'u');
	$sql->fields('u', array('name'));
	$sql->fields('fn', array('field_ef_first_name_value'));
	$sql->fields('ln', array('field_ef_last_name_value'));
	$sql->join('field_data_field_ef_first_name', 'fn', 'fn.entity_id = u.uid');
	$sql->join('field_data_field_ef_last_name', 'ln', 'ln.entity_id = u.uid');
	$sql->join('group_membership', 'gm', 'gm.uid = u.uid');
	$sql->join('group_membership_role', 'gmr', 'gmr.mid = gm.mid');
	$sql->join('groups', 'g', 'g.gid = gm.gid');
	$sql->condition('g.gid', $gid, '=');
	$sql->condition('gmr.role', '%creator%', 'LIKE');

	$results = $sql->execute()->fetchAll();

	foreach ($results as $key => $result) {
		$creator = $result->field_ef_first_name_value . ' ' . $result->field_ef_last_name_value .
		'  - ' . $result->name . ' -';
	}

	return $creator;

}

function get_current_group_admin_uid($group){

	$gid = $group->gid;

	$sql = db_select('users', 'u');
	$sql->fields('u', array('uid'));
	$sql->join('group_membership', 'gm', 'gm.uid = u.uid');
	$sql->join('group_membership_role', 'gmr', 'gmr.mid = gm.mid');
	$sql->join('groups', 'g', 'g.gid = gm.gid');
	$sql->condition('g.gid', $gid, '=');
	$sql->condition('gmr.role', '%creator%', 'LIKE');

	$results = $sql->execute()->fetchAll();

	foreach ($results as $key => $result) {
		$new_admin_uid = $result->uid;
	}

	return $new_admin_uid;

}

function get_new_possible_admins(){

	$users = array();

	$roles = array(
		'osu',
		'eurofound content manager',
		'eurofound administrator'
	);

	$sql = db_select('users', 'u');
	$sql->distinct('u.uid');
	$sql->fields('u', array('name', 'uid'));
	$sql->fields('fn', array('field_ef_first_name_value'));
	$sql->fields('ln', array('field_ef_last_name_value'));
	$sql->join('field_data_field_ef_first_name', 'fn', 'fn.entity_id = u.uid');
	$sql->join('field_data_field_ef_last_name', 'ln', 'ln.entity_id = u.uid');
	$sql->join('users_roles', 'ur', 'ur.uid = u.uid');
	$sql->join('role', 'r', 'r.rid = ur.rid');
	$sql->condition('u.status', 1, '=');
	$sql->condition('r.name', $roles, 'IN');
	$sql->orderBy('r.name', 'DESC');

	$results = $sql->execute()->fetchAll();

	foreach ($results as $r => $result) {
			$users[$result->uid] = $result->field_ef_first_name_value . ' ' . $result->field_ef_last_name_value .
				'  - ' . $result->name . ' -';

	}

	return $users;

}
