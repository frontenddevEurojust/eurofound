<?php

function get_country_name_by_content_type($node){

	$country_name_by_default = 'Eurofound';

	switch ($node->type) {

		case 'ef_report':

			if (isset($node->field_ef_deliverable_kind['und'][0]['tid']) && isset($node->field_ef_country['und'][0]['iso2'])) {

				$deliverable_kinds = array(
					'Spotlight report',
					'Research in focus standard',
					'Research in focus extended',
					'Other research services EF');
				$deliverable_tid = $node->field_ef_deliverable_kind['und'][0]['tid'];
				$deliverable_term = taxonomy_term_load($deliverable_tid);

				if (in_array($deliverable_term->name, $deliverable_kinds)) {
					$iso2 = $node->field_ef_country['und'][0]['iso2'];
					$country_name = get_country_name_by_iso2($iso2);
					$country_name = check_country_groups($country_name, $node);
				}
				else {
					$country_name = $country_name_by_default;
				}

			} else {

				$country_name = $country_name_by_default;

			}

			break;

		case 'ef_factsheet':

			if (isset($node->field__ef_nuts_comp_country['und'][0]['value'])) {

				$nuts = $node->field__ef_nuts_comp_country['und'][0]['value'];
				$country_name = get_country_name_by_nuts($nuts);
				$country_name = check_country_groups($country_name, $node);

			} else {

				$country_name = $country_name_by_default;

			}

			break;

		case 'ef_ir_dictionary':

			if ($node->field_ef_contract['und'][0]['tid'] ==  13692) {
				$country_name = 'EU level';
			} else {
				$country_name = $country_name_by_default;
			}

			break;

		case 'ef_erm_regulation':
		case 'erm_support_instrument':

			if (isset($node->field_country_erm_reg['und'][0]['tid'])) {
				$tid = $node->field_country_erm_reg['und'][0]['tid'];
			} elseif (isset($node->field_country_erm_si['und'][0]['tid'])) {
				$tid = $node->field_country_erm_si['und'][0]['tid'];
			} else {
				$country_name = $country_name_by_default;
			}

			if (isset($tid)) {
				$country_term = taxonomy_term_load($tid);
				$country_name = $country_term->name;
			}

			break;

		case 'ef_case_study':

			if(isset($node->field_ef_contract['und'][0]['tid']) && $node->field_ef_contract['und'][0]['tid'] ==  20220){
				$country_name = $country_name_by_default;
			} else {
				$country_name = $country_name_by_default;
			}

			break;

		case 'ef_ic_quarterly_report':
		case 'ef_network_quarterly_report':

			if(isset($node->field_ef_quarter_report_country['und'][0]['iso2'])) {

				$iso2 = $node->field_ef_quarter_report_country['und'][0]['iso2'];

			} else {

				$country_name = $country_name_by_default;

			}

			if (isset($iso2)) {
				$country_name = get_country_name_by_iso2($iso2);
				$country_name = check_country_groups($country_name, $node);
			}

			break;

		default:
			// ef_national_contribution
			// ef_comparative_analytical_report
			$country_name = $country_name_by_default;
			break;
	}

	return $country_name;

}

function get_country_name_by_nuts($nuts){

	$nuts_country_terms = taxonomy_get_term_by_name($nuts);

  foreach ($nuts_country_terms as $key => $term) {
    $nuts_country = taxonomy_get_parents_all($term->tid);
  }

  $country_name = end($nuts_country);
  $nuts = end($nuts_country);

  return $nuts->name;
}

function get_country_name_by_iso2($iso2){

	$country_field = country_load($iso2);

	return $country_field->name;
}

function get_gid_by_country_group_name($country_group_name){

	$country_groups = group_load_by_name($country_group_name);
	$gid = key($country_groups);

	return $gid;
}

function get_leader_mid_by_gid($gid){

	$group_leader = get_group_leader($gid);
	$assigned_author = group_membership_load($gid, $group_leader->uid);

	return $assigned_author->mid;
}

function get_assigned_contract($gid, $type, $context = NULL){
	$group_leader = get_group_leader($gid);
	$group = group_load($gid);
  $context == 1 ? $contract = $group->field_ef_contract['und'][0]['tid'] : $contracts = $group_leader->field_ef_contracts['und'];
  $request_types = array('ef_report', 'ef_factsheet');
  $scheduled_types = array('ef_ir_dictionary', 'ef_erm_regulation', 'erm_support_instrument',
  	'ef_ic_quarterly_report');

  if ($context != 1) {
  	foreach ($contracts as $key => $contract) {
    	$contract_term = taxonomy_term_load($contract['tid']);

    	if ( in_array($type, $request_types) && strrpos($contract_term->name, 'request') ) {
    		if ($group->title == 'EU level') {
    			if (strrpos($contract_term->name, 'EU Level')) {
    				$assigned_contract = $contract_term->tid;
    			}
    		} 
    		else {
    			if (strrpos($contract_term->name, $group->title)) {
    				$assigned_contract = $contract_term->tid;
    			}
    		}
    	}
    	if ( in_array($type, $scheduled_types) && strrpos($contract_term->name, 'scheduled') ) {
    		if ($group->title == 'EU level') {
    			if (strrpos($contract_term->name, 'EU Level')) {
    				$assigned_contract = $contract_term->tid;
    			}
    		} 
    		else {
    			if (strrpos($contract_term->name, $group->title)) {
    				$assigned_contract = $contract_term->tid;
    			}
    		}
    	}
    }
  }
  else {
    $assigned_contract = $contract;
  }

  if(!isset($assigned_contract) && $group->title == 'Eurofound' && $context != 1) {
  	$assigned_contract = 20220;
  }

  return $assigned_contract;
}

function check_country_groups($country_name, $node){

	$is_group = false;
	$country_name_up = strtoupper($country_name);

	$groups = group_load_by_type($type = 'country_group');
	foreach ($groups as $key => $group) {
		$title_up = strtoupper($group->title);
		if ($title_up == $country_name_up) {
			$is_group = true;
		}
	}

	if ($country_name == 'World') {
		$author = user_load($node->uid);
		if ($author->status != 0){

			if (in_array('Author', $author->roles) || in_array('Author +', $author->roles)) {
				$author_groups = get_group_by_user($author);
				if (isset($author_groups)) {
					$gid = key($author_groups);
					$group = group_load($gid);
					$country_name = $group->title;
					$is_group = true;
				}
			}
		}

	}

	return $is_group ? $country_name : 'Eurofound';

}

function avoid_unique_changed_date($node) {

	$insert = db_insert('update_changed_date');
	$insert->fields(
		array(
			'nid' => $node->nid,
			'changed' => $node->changed,
			'revised_by' => $node->revision_uid,
		)
	);
	$insert->execute();

}
