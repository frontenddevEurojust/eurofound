<?php
/*
* @description: Controller for both my to do lists
* @args:
*    $uid: user identifier.
*    $title: title filter input value. Additional condition added if exists
*    $types: content type filter input value. Additional condition added if exists.
*    $order: Order the table by this value
*/
function _retrieve_table_data($uid, $title, $types, $country_groups, $order) 
{
	global $user;

	// Distinguish by url-> my todo or my group todo list
	$url = $_SERVER["REQUEST_URI"];

	if (in_array('Author', $user->roles)) {
		$query->condition('c.state', array('submitted','submitted_qr'), 'NOT IN');
	}  

	if (in_array('Author +', $user->roles)) {
		$query->condition('c.state', array('submitted','submitted_qr'), 'NOT IN');
	} 

	if(!strpos($url,'ef-my-todo-list') === FALSE)
	{
		// My ToDo list
		// base query
		$query = _generate_base_query($uid);

		// Add conditions if any of the filters is populated
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
			$query = $query->extend('TableSort')->orderBy(_return_field_machine_name($order));
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
		
		$query = $query->extend('PagerDefault')->limit(25);
		
		
		$result = $query->execute();

		// Adapt results for table output.
		$array = _format_data($result);

		return $array;
	}
 	else 
	{
		// My Group ToDo list
		$country_groups_result = _retrieve_country_groups_per_user($uid,$user->roles,$country_groups);
		$country_groups = array();
		
		foreach ($country_groups_result as $key => $value) 
		{
			$country_groups[$value->country_group_id] = $value->country_group_name;
		}

		return $country_groups;
	}
}
/*
* @description: Retrieve list of content types based on base query set of results.
* @args: user identifier.
*/
function _retrieve_list_of_content_types($uid)
{
	$query = _generate_base_query($uid);
	$result = $query->execute();
	$aux = array();
	
	foreach ($result as $value) 
	{
		if(!isset($aux[$value->content_type]))
			$aux[$value->content_type] = $value->content_type;
	}
	
	return $aux;
}

/*
* @description: Transform array values into final table output(my to do list).
* @args:
*    $db_result: database fetched data (Objects)
*/
function _format_data($db_result)
{
	$array = array();
	
	foreach ($db_result as $key => $table_row) 
	{
		//Formatting changes for better display in tableselect
		$table_row->country_group = "<strong>" . $table_row->country_group . "</strong>";
		$table_row->title = "<a href='node/" . $table_row->node_id . "'>" . $table_row->title . "</a>";
		$table_row->scheduled_record_delivery_date = (isset($table_row->scheduled_record_delivery_date) ? date("d/M/Y",strtotime($table_row->scheduled_record_delivery_date)) : null);
		$table_row->revision_deadline = (isset($table_row->revision_deadline) ? date("d/M/Y",strtotime($table_row->revision_deadline)) : null);
		$table_row->state = ($table_row->state == 'Submitted qr' ? 'Submitted to QM' : $table_row->state);
		$table_row->state = strtoupper(str_replace("_", " ", $table_row->state)); 
		$table_row->requested_by = ($table_row->requested_by ? str_replace("@eurofound.europa.eu", "", $table_row->requested_by) : null);
		$table_row->responsible = ($table_row->responsible ? str_replace("@eurofound.europa.eu", "", $table_row->requested_by) : null);
		$table_row->updated = date('d/M/Y h:i:s', $table_row->updated_date);
		$table_row->edit = "<a href='node/" . $table_row->node_id . "/edit' class='button'>Edit</a>";

		$array[] = (array) $table_row;
	}

	return $array;

}

/*
* @description: Retrieve machine name from table header value to build the query
*/
function _return_field_machine_name($name)
{

	$array = array(
		'node_id' => 'a.nid' ,
		'country_group' => 'e.title',
		'title' => 'a.title',
		'content_type' => 'f.name',
		'state' => 'c.state',
		'requested_by' => 'i.name',
		'responsible' => 'j.name' ,
		'scheduled_record_delivery_date' => 'h.field_ef_report_delivery_date_value',
		'revision_deadline' => 'k.field_ef_revision_deadline_value',
		'assigned_user' => 'z.name',
	);

	return $array[$name];
}


function _format_data_group_list($result)
{
	global $user;

	$array = array();

	foreach ($result as $key => $table_row) 
	{
		$assignment_list = get_assign_to_user_list($table_row->ct_machine_name, $table_row->gid, $table_row->state);
		// Creating html select element for assign to user table_row in table
		$select = '<select name="' . $table_row->node_id . '">';
		foreach ($assignment_list as $m => $n) {
			$select = $select . '<optgroup label="' . $m . '">';
			foreach ($n as $k => $v) {
				if(strpos($v, $table_row->assigned_user) !== FALSE){
		  			$select = $select . '<option value="' . $k . '" selected="selected">' . $v . '</option>';
				}else
		  			$select = $select . '<option value="' . $k . '">' . $v . '</option>';
			}
			$select = $select . '</optgroup>';
		}
		$select = $select . '</select>';

		//Formatting changes for better display in tableselect
		$table_row->country_group = "<strong>" . $table_row->country_group . "</strong>";
		$table_row->title = "<a href='/node/" . $table_row->node_id . "'>" . $table_row->title . "</a>";
		$table_row->scheduled_record_delivery_date = (isset($table_row->scheduled_record_delivery_date) ? date("d/M/Y",strtotime($table_row->scheduled_record_delivery_date)) : null);
		$table_row->revision_deadline = (isset($table_row->revision_deadline) ? date("d/M/Y",strtotime($table_row->revision_deadline)) : null);
		$table_row->state = ($table_row->state == 'Submitted qr' ? 'Submitted to QM' : $table_row->state);
		$table_row->state = strtoupper(str_replace("_", " ", $table_row->state));
		$table_row->requested_by = ($table_row->requested_by ? str_replace("@eurofound.europa.eu", "", $table_row->requested_by) : null);
		$table_row->responsible = ($table_row->responsible ? str_replace("@eurofound.europa.eu", "", $table_row->requested_by) : null);
		$table_row->updated = date('d/M/Y h:i:s', $table_row->updated_date);


		$table_row->assigned_user = $select . '<button type="button" name="button_' . $table_row->node_id . '_' . $table_row->revision_id . '" title="Save" ><i class="fa fa-save" aria-hidden="true"></i></button>';


		// Each node is loaded so that permissions can be checked
		$node = node_load($table_row->node_id);
		if (node_access('update', $node, $user))
		{
			$table_row->edit = "<a href='/node/" . $table_row->node_id . "/edit' class='button'>Edit</a>";
		}
		else
		{
			$table_row->edit = "";
		}

		$array[] = (array) $table_row;
	}
	
	return $array;
}

function my_list_table_header_definition($url)
{

	$header = array(
		"country_group" => "<a href=" . $url . "&order=country_group>Country Group</a>", 
		"title" => "<a href=" . $url . "&order=title>Title</a>", 
		"content_type" => "<a href=" . $url . "&order=content_type>Content type</a>",  
		"state" => "<a href=" . $url . "&order=state>State</a>", 
		"requested_by" => "<a href=" . $url . "&order=requested_by>Requested by</a>", 
		"responsible" => "<a href=" . $url . "&order=responsible>Responsible</a>",
		"updated" => "<a href=" . $url . "&order=updated>Updated on</a>" , 
		"revision_deadline" => "<a href=" . $url . "&order=revision_deadline>Revision deadline</a>",
		"scheduled_record_delivery_date" => "<a href=" . $url . "&order=scheduled_record_delivery_date>Scheduled record delivery date</a>",
		"edit" => 'Operations'
	);

	return $header;
}

function group_list_table_header_definition($url)
{

	$header = array(
		"title" => "<a href=" . $url . "&order=title>Title</a>",
        "content_type" => "<a href=" . $url . "&order=content_type>Content type</a>",
		"state" => "<a href=" . $url . "&order=state>State</a>",
		"requested_by" => "<a href=" . $url . "&order=requested_by>Requested by</a>",
		"assigned_user" => "<a href=" . $url . "&order=assigned_user>Assign to User</a>",
		"responsible" => "<a href=" . $url . "&order=responsible>Responsible</a>",
		"updated" => "<a href=" . $url . "&order=updated>Updated on</a>" , 
		"revision_deadline" => "<a href=" . $url . "&order=revision_deadline>Revision deadline</a>",
		"scheduled_record_delivery_date" => "<a href=" . $url . "&order=scheduled_record_delivery_date>Scheduled record delivery date</a>",
		"edit" => 'Operations'
  	);

  	return $header;
}