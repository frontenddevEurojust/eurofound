<?php

/*
* @description: return defined base query for my to do list.
* @args: user identifier.
*/
function _generate_base_query($uid)
{

	$query = db_select('node', 'a');
	$query->innerJoin('workbench_moderation_node_history', 'c', 'a.nid = c.nid');
	$query->innerJoin('field_revision_field_ef_assign_to_user', 'b', 'c.vid = b.revision_id');
	$query->innerJoin('field_revision_field_ef_assign_to_country_group', 'd', 'c.vid = d.revision_id');
	$query->innerJoin('groups','e', 'd.field_ef_assign_to_country_group_target_id = e.gid');
	$query->innerJoin('node_type', 'f', 'a.`type` = f.`type`');
	$query->innerJoin('users', 'i', 'c.uid = i.uid');
	$query->leftJoin('field_revision_field_ef_report_delivery_date', 'h', 'c.vid = h.revision_id');
	$query->leftJoin('field_revision_field_ef_revision_deadline', 'k', 'c.vid = k.revision_id');
	$query->leftJoin('field_revision_field_ef_responsible', 'g', 'c.vid = g.revision_id');
	$query->leftJoin('users', 'j', 'g.field_ef_responsible_target_id = j.uid');
	$query->addField('a','nid', 'node_id');
	$query->addField('e','title', 'country_group');
	$query->addField('a','title', 'title');
	$query->addField('f','name', 'content_type');
	$query->addField('c','state', 'state');
	$query->addField('i','name', 'requested_by');
	$query->addField('j','name', 'responsible');
	$query->addField('a','changed','updated_date');
	$query->addField('k','field_ef_revision_deadline_value', 'revision_deadline');
	$query->addField('h','field_ef_report_delivery_date_value', 'scheduled_record_delivery_date');	
	$query->condition('b.field_ef_assign_to_user_target_id', $uid, '=');
	$query->condition('c.current', '1', '=');
	$query->condition('c.state', array('approved','published','unpublished'),'NOT IN');

	return $query;
}

/*
* @description: Retrieve country groups per user. It can be limited to set of them
* @args: $uid: user identifier.
*        $types: range of content types to filter by.
*/
function _retrieve_country_groups_per_user($uid,$roles,$types)
{

	// Should Overview Report country group be excluded?
	$query = db_select('users', 'a');
	$query->innerJoin('group_membership', 'b', 'a.uid = b.uid');
	$query->innerJoin('groups', 'c', 'b.gid = c.gid');
	$query->addField('c','gid', 'country_group_id');
	$query->addField('c','title','country_group_name');
	
	if(in_array('Author', $roles))
	{
		$query->condition('b.uid', $uid, '=');
	}

	if($types)
	{
		$query->condition('c.gid',$types,'IN');
	}

	$query->orderBy('c.title','ASC');

	return $query->execute();
}

function _create_country_group_table($gid, $order, $limit, $types, $title)
{

	$query = db_select('node', 'a');
	$query->innerJoin('workbench_moderation_node_history', 'c', 'a.nid = c.nid');
	$query->innerJoin('group_entity', 'x', 'c.nid = x.entity_id');
	$query->leftJoin('field_revision_field_ef_assign_to_user', 'b', 'c.vid = b.revision_id');
	$query->innerJoin('field_revision_field_ef_assign_to_country_group', 'd', 'c.vid = d.revision_id');
	$query->innerJoin('groups','e', 'd.field_ef_assign_to_country_group_target_id = e.gid');
	$query->innerJoin('node_type', 'f', 'a.`type` = f.`type`');
	$query->innerJoin('users', 'i', 'c.uid = i.uid');
	$query->innerJoin('users','z','z.uid = b.field_ef_assign_to_user_target_id');
	$query->leftJoin('field_revision_field_ef_report_delivery_date', 'h', 'c.vid = h.revision_id');
	$query->leftJoin('field_revision_field_ef_revision_deadline', 'k', 'c.vid = k.revision_id');
	$query->leftJoin('field_revision_field_ef_responsible', 'g', 'c.vid = g.revision_id');
	$query->leftJoin('users', 'j', 'g.field_ef_responsible_target_id = j.uid');
	$query->addField('a','nid', 'node_id');
	$query->addField('c','vid', 'revision_id');
	$query->addField('e', 'gid', 'gid');
	$query->addField('f', 'type', 'ct_machine_name');
	$query->addField('e','title', 'country_group');
	$query->addField('a','title', 'title');
	$query->addField('f','name', 'content_type');
	$query->addField('c','state', 'state');
	$query->addField('i','name', 'requested_by');
	$query->addField('z','name', 'assigned_user');
	$query->addField('j','name', 'responsible');
	$query->addField('a','changed','updated_date');
	$query->addField('h','field_ef_report_delivery_date_value', 'scheduled_record_delivery_date');
	$query->addField('k','field_ef_revision_deadline_value', 'revision_deadline');
	$query->condition('c.current', '1', '=');
	$query->condition('c.state', array('approved','published','unpublished'),'NOT IN');
	$query->condition('x.gid', $gid,'=');
	
	// Add title LIKE condition
	if($title)
	{
		$query->condition('a.title', '%' . $title . '%', 'LIKE');
	}

	// Add content type condition
	if(!empty($types))
	{
		foreach ($types as $key => $value) 
		{
		  $types[$key] = str_replace("_", " ", $value);
		}

		$query->condition('f.name', $types,'IN');
	}

	// Add ordering condition
	if($order)
	{
		$query->extend('TableSort')->orderBy(_return_field_machine_name($order));
	}
	else
	{
		// Order by updated date
		$query->orderBy('a.changed', 'DESC');
		// Order by revision deadline
		$query->orderBy('k.field_ef_revision_deadline_value', 'DESC');
		// Order by scheduled record delivery date
		$query->orderBy('h.field_ef_report_delivery_date_value', 'DESC');
	}

	$query = $query->extend('PagerDefault')->limit($limit);
	$result = $query->execute();

	// Adapt results for table output
	$array = _format_data_group_list($result);

	return $array;
}
