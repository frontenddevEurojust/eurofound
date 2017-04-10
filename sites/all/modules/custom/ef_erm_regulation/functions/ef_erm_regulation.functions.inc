<?php

function get_erm_regulation_user_variable_url_parameters(){

	$erm_regulation_admin_filters = &$_SESSION['regulations_admin_filters'];

	$nid = &$erm_regulation_admin_filters['nid'];
	$native_name = &$erm_regulation_admin_filters['native_name'];
	$english_name = &$erm_regulation_admin_filters['english_name'];
	$title = &$erm_regulation_admin_filters['title'];
	$country = &$erm_regulation_admin_filters['country'];
	$type = &$erm_regulation_admin_filters['type'];
	$status = &$erm_regulation_admin_filters['status'];
	$state = &$erm_regulation_admin_filters['state'];
	$updated_min = &$erm_regulation_admin_filters['updated_min'];
	$updated_max = &$erm_regulation_admin_filters['updated_max'];

	$url = '?nid='.$nid.
		'&field_native_name_erm_reg_value='.$native_name.
		'&field_english_name_erm_reg_value='.$english_name.
		'&title_field_value='.$title;			

	if (!empty($country)) {
		foreach ($country as $i => $c) {
			$url = $url . '&field_country_erm_reg_tid_selective[]='.$c;
		}
	}
	if (!empty($type)) {
		foreach ($type as $j => $t) {
			$url = $url . '&field_type_phase_erm_reg_tid_selective[]='.$t;
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
