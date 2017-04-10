<?php

function get_support_instrument_user_variable_url_parameters(){

	$support_instrument_admin_filters = &$_SESSION['support_instrument_admin_filters'];

	$nid = &$support_instrument_admin_filters['nid'];
	$native_name = &$support_instrument_admin_filters['native_name'];
	$english_name = &$support_instrument_admin_filters['english_name'];
	$country = &$support_instrument_admin_filters['country'];
	$type = &$support_instrument_admin_filters['type'];
	$status = &$support_instrument_admin_filters['status'];
	$state = &$support_instrument_admin_filters['state'];
	$updated_min = &$support_instrument_admin_filters['updated_min'];
	$updated_max = &$support_instrument_admin_filters['updated_max'];

	$url = '?nid='.$nid.
		'&field_native_name_erm_si_value='.$native_name.
		'&field_english_name_erm_si_value='.$english_name;			

	if (!empty($country)) {
		foreach ($country as $i => $c) {
			$url = $url . '&field_country_erm_si_tid_selective[]='.$c;
		}
	}
	if (!empty($type)) {
		foreach ($type as $j => $t) {
			$url = $url . '&field_type_erm_si_tid_selective[]='.$t;
		}
	}

	if ($status == '') {
		$status = 'All';
	}

	$url = $url . '&status='.$status;
	if (!empty($state)) {
		foreach ($state as $k => $s) {
			$url = $url . '&state[]='.$s;
		}
	}
	
	$url = $url .
		'&changed[min]='.$updated_min.
		'&changed[max]='.$updated_max;

	return $url;
}

function get_phase_options($machine_name){

  $type_vocabulary = taxonomy_vocabulary_machine_name_load($machine_name);
  
  $anticipation_term = taxonomy_get_term_by_name('Anticipation', $machine_name);
  $management_term = taxonomy_get_term_by_name('Management', $machine_name);
  $key_anticipation = key($anticipation_term);
  $key_management = key($management_term);

  $options = array(
  	$key_anticipation => $anticipation_term[$key_anticipation]->name, 
	$key_management => $management_term[$key_management]->name,
  );
  return $options;

}

function get_aticipation_key($machine_name){

	$anticipation_term = taxonomy_get_term_by_name('Anticipation', $machine_name);
	$key_anticipation = key($anticipation_term);

	return $key_anticipation;

}

function get_management_key($machine_name){

	$management_term = taxonomy_get_term_by_name('Management', $machine_name);
	$key_management = key($management_term);

	return $key_management;

}

/*
 * --> igarcia code OJO
 */ 

function check_involved_actors_terms($name,$node) {
	$term = taxonomy_get_term_by_name($name,'involved_actors');
	$position = sizeof($node->field_ef_involved_actors_tax['und']);
	foreach ($term as $key => $value) {
	  $tid = $value->tid;
	}
	$node->field_ef_involved_actors_tax['und'][$position]['tid'] = $tid;
}

function update_erm_support_instrument() {
	$sql = "SELECT *
	      FROM node
	      WHERE node.type = 'erm_support_instrument'";
	$result = db_query($sql)->fetchAll();
	foreach ($result as $key => $value) {
	  $node = node_load($value->nid);
	  node_object_prepare($node);
	  $node = node_submit($node);
	  node_save($node);
	}
}

/*
 * end Igarcia
 */