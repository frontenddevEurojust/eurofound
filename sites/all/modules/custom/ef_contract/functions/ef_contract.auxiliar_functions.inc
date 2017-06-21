<?php

function content_type_forms_array(){

	$form_ids = array(
    'ef_report_node_form', 'ef_comparative_analytical_report_node_form', 'ef_national_contribution_node_form',
    'ef_ic_quarterly_report_node_form', 'ef_input_to_erm_node_form', 'ef_case_study_node_form',
    'erm_support_instrument_node_form', 'ef_erm_regulation_node_form', 'ef_restructuring_in_smes_node_form',
    'ef_factsheet_node_form', 'ef_ir_dictionary_node_form', 'ef_annual_progress_report_node_form',
    'ef_network_quarterly_report_node_form', 'case_study_publication_node_form','ef_working_life_country_profiles_node_form',
  );

  return $form_ids;

}
/**
 * Retrieves the workflow by the selected content type
 * @param String $type
 *
 */
function get_workflow_by_content_type($type){

	// Workflow: S2
	if($type == 'ef_report' || $type == 'ef_comparative_analytical_report'
		|| $type == 'ef_national_contribution' || $type == 'ef_working_life_country_profiles'){
		$workflow = 'S2';
	}
	// Workflow: QR
	elseif ($type == 'ef_ic_quarterly_report' || $type == 'ef_network_quarterly_report'
		|| $type == 'ef_input_to_erm') {
		$workflow = 'QR';
	}
	// Workflow: DB
	elseif ($type == 'ef_case_study' || $type == 'erm_support_instrument'
		|| $type == 'ef_erm_regulation' || $type == 'ef_restructuring_in_smes'
    || $type == 'case_study_publication') {
		$workflow = 'DB';
	}
	// Workflow: Factsheet
	elseif ($type == 'ef_factsheet') {
		$workflow = 'Factsheet';
	}
	// Workflow: IR Dictionary
	elseif ($type == 'ef_ir_dictionary'){
		$workflow = 'IR_Dictionary';
	}
	// Workflow: APR
	elseif ($type == 'ef_annual_progress_report'){
		$workflow = 'APR';
	}

	return $workflow;
}

/**
 * Retrieves the roles that depend of $workflow
 * and workbench moderation $state
 * @param String $workflow
 * @param String $state
 *
 */
function get_available_roles_by_workflow($wf, $state){

	$roles = array(
		'Author',
		'Editor',
		'External Editor',
		'Quality Manager',
		'OSU',
		'Author +',
		'Quality Manager +'
	);
	switch ($wf) {
		case 'S2':
			switch ($state) {
				case 'draft':
					$roles = array('Author','Quality Manager','Author +','Quality Manager +');
					break;
				case 'proposal':
					$roles = array('Quality Manager','Quality Manager +' ,'Author +');
					break;
				case 'requested':
					$roles = array('Author', 'Author +', 'Quality Manager +');
					break;
				case 'submitted':
					$roles = array('Editor', 'Quality Manager', 'Quality Manager +','Author +');
					break;
				case 'submitted_qr':
					$roles = array('Quality Manager', 'Author +','Quality Manager +');
					break;
				case 'rejected':
					$roles = array('Quality Manager',' Author +' ,'Quality Manager +');
					break;
				case 'under_revision_request':
					$roles = array('Author',' Quality Manager +','Author +');
					break;
				case 'approved_for_editing':
					$roles = array('Editor');
					break;
				case 'on_second_editing':
					$roles = array('Editor');
					break;
				case 'on_external_editing':
					$roles = array('External Editor');
					break;
				case 'ready_for_publishing':
					$roles = array('Quality Manager', 'Editor',' Quality Manager +','Author +');
					break;
				case 'published':
					$roles = array('Editor');
					break;
				case 'unpublished':
					$roles = array('Editor');
					break;
			}
			break;
		case 'QR':
			switch($state){
				case 'draft':
					$roles = array('Author', 'Author +','Quality Manager','Quality Manager +');
					break;
				case 'submitted_qr':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'rejected':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'under_revision_request':
					$roles = array('Author','Quality Manager +','Author +');
					break;
				case 'approved':
					$roles = array('Quality Manager','Quality Manager +');
					break;
			}
			break;
		case 'DB':
			switch($state){
				case 'draft':
					$roles = array('Author','Quality Manager','Author +','Quality Manager +');
					break;
				case 'submitted_qr':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'rejected':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'under_revision_request':
					$roles = array('Author','Author +','Quality Manager +','Quality Manager');
					break;
				case 'approved_for_editing':
					$roles = array('Editor');
					break;
				case 'ready_for_publishing':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'published':
					$roles = array('Editor','Eurofound Content Manager','Eurofound Administrator');
					break;
				case 'unpublished':
					$roles = array('Editor','Eurofound Content Manager','Eurofound Administrator');
					break;
			}
			break;
		case 'Factsheet':
			switch($state){
				case 'draft':
					$roles = array('Author','Quality Manager','Author +','Quality Manager +');
					break;
				case 'submitted_qr':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'rejected':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'under_revision_request':
					$roles = array('Author', 'Quality Manager','Author +','Quality Manager+');
					break;
				case 'published':
					$roles = array('Editor','Eurofound Content Manager','Eurofound Administrator','Quality Manager','Quality Manager +');
					break;
				case 'unpublished':
					$roles = array('Editor','Eurofound Content Manager','Eurofound Administrator','Quality Manager','Quality Manager +');
					break;
			}
			break;
		case 'IR_Dictionary':
			switch($state){
				case 'draft':
					$roles = array('Author','Quality Manager','Author +','Quality Manager +');
					break;
				case 'submitted_qr':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'rejected':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'under_revision_request':
					$roles = array('Author','Author +');
					break;
				case 'approved_for_editing':
					$roles = array('Editor');
					break;
				case 'on_second_editing':
					$roles = array('Editor');
					break;
				case 'on_external_editing':
					$roles = array('External Editor');
					break;
				case 'ready_for_publishing':
					$roles = array('Quality Manager','Quality Manager +');
					break;
				case 'published':
					$roles = array('Editor','Eurofound Content Manager','Eurofound Administrator','Quality Manager','Quality Manager +');
					break;
				case 'unpublished':
					$roles = array('Editor','Eurofound Content Manager','Eurofound Administrator');
					break;
			}
			break;
		case 'APR':
			switch($state){
				case 'draft':
					$roles = array('OSU');
					break;
				case 'requested':
					$roles = array('Author','Author +');
					break;
				case 'submitted':
					$roles = array('OSU');
					break;
				case 'rejected':
					$roles = array('OSU');
					break;
				case 'approved':
					$roles = array('OSU');
					break;
				case 'under_revision_request':
					$roles = array('Quality Manager','Author','Author +','Quality Manager +');
					break;
			}
			break;
		default:

			break;
	}

	return $roles;
}

/**
 * Retrieves the Author users' list
 * @param String $role
 * @param Integer $gid (Group ID)
 *
 */
function get_authors_by_gid($role, $gid){

	$authors = array();

	$sql = db_select('users', 'u');

	$sql->innerJoin('users_roles', 'ur', 'ur.uid = u.uid');
	$sql->innerJoin('role', 'r', 'r.rid = ur.rid');
	$sql->innerJoin('field_data_field_ef_first_name', 'fn', 'fn.entity_id = u.uid');
	$sql->innerJoin('field_data_field_ef_last_name', 'ln', 'ln.entity_id = u.uid');
	$sql->leftJoin('group_membership', 'gm', 'gm.uid = u.uid');
	$sql->leftJoin('groups', 'g', 'g.gid = gm.gid');

	$sql->fields('u', array('uid', 'name'));
	$sql->fields('fn', array('field_ef_first_name_value'));
	$sql->fields('ln', array('field_ef_last_name_value'));
	$sql->fields('r', array('rid', 'name'));
	$sql->fields('gm', array('gid'));
	$sql->fields('g', array('title'));

	$sql->condition('r.name', $role, '=');
	$sql->condition('g.gid', $gid, '=');
	$sql->condition('u.status', 1, '=');


	$sql->orderBy('ln.field_ef_last_name_value', 'ASC');

	$results = $sql->execute()->fetchAll();

	foreach ($results as $key => $value) {
		$authors[$value->uid] = $value->field_ef_last_name_value . ', ' .
			$value->field_ef_first_name_value . ' - ' . $value->name . ' -';

	}

	return $authors;
}

/**
 * Retrieves the users' list, (without Author role)
 * @param String $role
 *
 */
function get_another_users($role){

	$users = array();

	$sql = db_select('users', 'u');

	$sql->innerJoin('users_roles', 'ur', 'ur.uid = u.uid');
	$sql->innerJoin('role', 'r', 'r.rid = ur.rid');
	$sql->innerJoin('field_data_field_ef_first_name', 'fn', 'fn.entity_id = u.uid');
	$sql->innerJoin('field_data_field_ef_last_name', 'ln', 'ln.entity_id = u.uid');

	$sql->fields('u', array('uid', 'name'));
	$sql->fields('fn', array('field_ef_first_name_value'));
	$sql->fields('ln', array('field_ef_last_name_value'));
	$sql->fields('r', array('rid', 'name'));

	$sql->condition('r.name', $role, '=');
	$sql->condition('u.status', 1, '=');

	$sql->orderBy('ln.field_ef_last_name_value', 'ASC');

	$results = $sql->execute()->fetchAll();

	foreach ($results as $key => $value) {
		$users[$value->uid] = $value->field_ef_last_name_value . ', ' .
			$value->field_ef_first_name_value . ' - ' . $value->name . ' -';

	}

	return $users;
}

/**
 * Retrieves the users' list
 * @param Array $roles
 * @param Integer $gid (Country group identifier)
 *
 */
function get_available_users_by_roles($roles, $gid){

	$options = array();
	$authors = array();

	foreach ($roles as $r => $role) {
		// Just Authors (by group)
		if($role == 'Author'){
			// We know the Group ID
			if(!is_null($gid)){ $authors = get_authors_by_gid($role, $gid); }
			// We don't know the Group ID
			else{ $authors = get_another_users($role); }

			$options['Author'] = $authors;

		} elseif ($role == 'Author +') {
			// We know the Group ID
			if(!is_null($gid)){ $author_plus = get_authors_by_gid($role, $gid); }
			// We don't know the Group ID
			else{ $author_plus = get_another_users($role); }

			$options['Author +'] = $author_plus;
		}
		// Other roles (no depends of Country group)
		else{
			$options[$role] = get_another_users($role);
		}
	}

	return $options;
}

/**
 * Retrieves the contract numbers
 * @param Integer $tid (Contract Taxonomy term ID)
 *
 */
function get_contract_number($tid){

	$sql = db_select('field_data_field_ef_contract_number', 'cn');
	$sql->fields('cn', array('field_ef_contract_number_value'));
	$sql->condition('cn.entity_id', $tid, '=');

	$result = $sql->execute()->fetchCol();

	$contract_number = $result[0];

	return $contract_number;
}

/**
 * Retrieves the full contract (Contract number and taxonomy term)
 * @param Obj $taxonomy->tid (contract)
 * @param Integer $tid (Contract Taxonomy term ID)
 *
 */
function write_contracts($contracts_tids, $tid){

	$contracts = array();

	foreach ($contracts_tids as $key => $value) {
		$tid = $value['tid'];
		$contract_number = get_contract_number($tid);
		$term = taxonomy_term_load($tid);

		$contracts[$tid] = $contract_number . ' - ' . $term->name;
	}

	return $contracts;

}

/**
  *
  */
function get_assign_to_user_author_by_default($gid, $inputs, $node){

	if (isset($inputs['field_ef_assign_to_author']['und'])) {
		$author_user = get_user_by_mid($inputs['field_ef_assign_to_author']['und']);
		$author_uid = $author_user->uid;
	}else{
		if (isset($node->field_ef_assign_to_author['und'][0]['target_id'])) {
			$author_user = get_user_by_mid($node->field_ef_assign_to_author['und'][0]['target_id']);
			$author_uid = $author_user->uid;
		} else{
			$author_uid = get_group_leader_uid($gid);
		}
	}

	return $author_uid;
}

/**
  *
  */
function get_assign_to_user_role_dependency_by_default($node, $role){

	$revision_list = node_revision_list($node);
	$assigned_users = array();

	foreach ($revision_list as $index => $revision) {
		$revision_node = node_load($node->nid, $revision->vid);
		$assigned_user_uid = $revision_node->field_ef_assign_to_user['und'][0]['target_id'];
		$assigned_user = user_load($assigned_user_uid);
		if (in_array($role, $assigned_user->roles)) {
			$assigned_users[$index] = $assigned_user->uid;
		}

	}

	if (isset($assigned_users) && count($assigned_users) >= 1) {
		$last_revision_vid = max(array_keys($assigned_users));
		$default_uid = $assigned_users[$last_revision_vid];
	}
	else {
		switch ($role) {

			case 'OSU':
			case 'Quality Manager':
				$creator_user = user_load($node->uid);
				if (in_array($role, $creator_user->roles)) {
					$default_uid = $node->uid;
				}
				// PATCH 2.0 -- QM by default --
				else {
					$this_type = $node->type;
					switch ($this_type) {

						case 'ef_report':
							// For EF articles, QM by default is Christine Aumayr-Pintar
							// --> name: cau
							// --> uid: 317
							$default_uid = '317';
							break;

						case 'ef_ir_dictionary':
							// For IR dictionary, QM by default is Camilla Galli da Bino
							// --> name: gdb
							// --> uid: 291
							$default_uid = '291';
							break;

						case 'ef_erm_regulation':
						case 'erm_support_instrument':
							// For ERM regulation and ERM Support intrument,
							// QM by default is Irene Mandl
							// --> name: Irene.Mandl@eurofound.europa.eu
							// --> uid: 323
							$default_uid = '323';
							break;

            case 'ic_quarterly_report':
              //Catherine Leeson (uid:414) is the default QM for IC Quarterly Reports
              $default_uid = '414';
              break;

						case 'ef_factsheet':
						case 'ef_input_to_erm':
							// For factsheets and Input to ERM,
							// QM by default is John Hurley
							// --> name: joh@eurofound.europa.eu
							// --> uid: 942
							$default_uid = '942';
							break;

						default:
							$default_uid = $node->uid;
							break;
					}
				}
				// end PATCH 2.0 -- QM by default --
				break;

			case 'Editor':
				// By default: Hilary O'Donoghue
				// --> name: hod
				// --> uid: 332
				$default_uid = '332';
				break;

			case 'External Editor':
				// By default: Adam Woolf
				// --> name: Adam
				// --> uid: 1222
				$default_uid = '1222';
				break;
		}

	}

	return $default_uid;

}

