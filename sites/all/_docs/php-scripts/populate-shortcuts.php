<?php

echo "populating shortcuts...\n";

function empty_shortcut_menu_links() {
	$result = db_query("SELECT * FROM {menu_links} WHERE menu_name LIKE 'shortcut-set%'");
	foreach ($result as $link) {
	    _menu_delete_item($link, true);
	}
}
empty_shortcut_menu_links();


$contact_us_path = drupal_get_normal_path('contact-form/contact-us');
$network_quarterly_report_path = drupal_get_normal_path('quarterly-report/network-quarterly-report');
$ic_quarterly_report_path = drupal_get_normal_path('quarterly-report/support-for-eurofounds-information-and-communication-unit-network-of-correspondents');


$shortcut_set = new stdClass();
$shortcut_set->title = 'Default';
$shortcut_set->set_name = 'shortcut-set-1';
$shortcut_set->links = array(
	array('link_path' => 'node/add', 'link_title' => 'Add content', 'weight' => 0,),
	array('link_path' => 'admin/content', 'link_title' => 'Admin content', 'weight' => 1,),
	array('link_path' => 'find-content', 'link_title' => 'Find content', 'weight' => 2,),
	array('link_path' => 'admin/needs-review', 'link_title' => 'Needs review', 'weight' => 3,),
	array('link_path' => 'quarterly-reports', 'link_title' => 'Quarterly reports', 'weight' => 4,),
	array('link_path' => 'network-quarterly-reports-export', 'link_title' => 'Network quarterly reports export', 'weight' => 5,),
	array('link_path' => 'national-contributions-export', 'link_title' => 'National contributions export', 'weight' => 6,),
	array('link_path' => 'national-correspondents', 'link_title' => 'National correspondents', 'weight' => 7,),
	array('link_path' => $contact_us_path, 'link_title' => 'Contact us', 'weight' => 8,),
	array('link_path' => 'qr-autocreation', 'link_title' => 'Quarterly reports autocreation', 'weight' => 9),
	array('link_path' => 'car-nc-autocreation', 'link_title' => 'CAR and National Contribution Autocreation', 'weight' => 10),
	array('link_path' => 'access/mantis', 'link_title' => 'Mantis', 'weight' => 11),
	array('link_path' => 'user', 'link_title' => 'My profile', 'weight' => 12),
	array('link_path' => 'user/logout', 'link_title' => 'Logout', 'weight' => 13)

);
shortcut_set_save($shortcut_set);

$shortcut_set = new stdClass();
$shortcut_set->title = 'Author Shortcuts';
$shortcut_set->set_name = 'shortcut-set-2';
$shortcut_set->links = array(
	array('link_path' => 'node/add', 'link_title' => 'Add content', 'weight' => 0,),	
	array('link_path' => 'quarterly-reports', 'link_title' => 'Quarterly reports', 'weight' => 1,),
	array('link_path' => 'my-todo-list', 'link_title' => 'My to-do list', 'weight' => 2,),
	array('link_path' => 'find-content', 'link_title' => 'Find content', 'weight' => 3,),
	array('link_path' => $contact_us_path, 'link_title' => 'Contact us', 'weight' => 4,),
	array('link_path' => 'user', 'link_title' => 'My profile', 'weight' => 5),
	array('link_path' => 'user/logout', 'link_title' => 'Logout', 'weight' => 6)
);
shortcut_set_save($shortcut_set);

$shortcut_set = new stdClass();
$shortcut_set->title = 'Editor Shortcuts';
$shortcut_set->set_name = 'shortcut-set-3';
$shortcut_set->links = array(
	array('link_path' => 'node/add', 'link_title' => 'Add content', 'weight' => -1),
	array('link_path' => 'needs-review', 'link_title' => 'Needs review', 'weight' => 0,),
	array('link_path' => 'find-content', 'link_title' => 'Find content', 'weight' => 1,),
	array('link_path' => $contact_us_path, 'link_title' => 'Contact us', 'weight' => 2,),
	array('link_path' => 'user', 'link_title' => 'My profile', 'weight' => 3),
	array('link_path' => 'user/logout', 'link_title' => 'Logout', 'weight' => 4)
);
shortcut_set_save($shortcut_set);

$shortcut_set = new stdClass();
$shortcut_set->title = 'Quality Manager Shortcuts';
$shortcut_set->set_name = 'shortcut-set-4';
$shortcut_set->links = array(
	array('link_path' => 'node/add', 'link_title' => 'Add content', 'weight' => -1),
	array('link_path' => 'node/add/ef-report', 'link_title' => 'Create EF Report', 'weight' => 0,),
	array('link_path' => 'node/add/ef-comparative-analytical-report', 'link_title' => 'Create Comparative Analytical Report', 'weight' => 1,),
	array('link_path' => 'node/add/ef-national-contribution', 'link_title' => 'Create National Contribution', 'weight' => 2,),
	array('link_path' => 'quarterly-reports', 'link_title' => 'Quarterly reports', 'weight' => 3,),
	array('link_path' => 'network-quarterly-reports-export', 'link_title' => 'Network quarterly reports export', 'weight' => 4,),
	array('link_path' => 'needs-review', 'link_title' => 'Needs review', 'weight' => 5,),
	array('link_path' => 'find-content', 'link_title' => 'Find content', 'weight' => 6,),
	array('link_path' => 'national-contributions-export', 'link_title' => 'National contributions export', 'weight' => 7,),
	array('link_path' => 'national-correspondents', 'link_title' => 'National correspondents', 'weight' => 8,),
	array('link_path' => $contact_us_path, 'link_title' => 'Contact us', 'weight' => 9,),
	array('link_path' => 'access/mantis', 'link_title' => 'Mantis', 'weight' => 10),
	array('link_path' => 'user', 'link_title' => 'My profile', 'weight' => 11),
	array('link_path' => 'user/logout', 'link_title' => 'Logout', 'weight' => 12)
);
shortcut_set_save($shortcut_set);

$shortcut_set = new stdClass();
$shortcut_set->title = 'OSU Shortcuts';
$shortcut_set->set_name = 'shortcut-set-5';
$shortcut_set->links = array(
	array('link_path' => 'osu-contract-reporting', 'link_title' => 'Contract Reporting', 'weight' => 0),
	array('link_path' => 'find-content', 'link_title' => 'Find content', 'weight' => 1,),
	array('link_path' => $contact_us_path, 'link_title' => 'Contact us', 'weight' => 2),
	array('link_path' => 'user', 'link_title' => 'My profile', 'weight' => 3),
	array('link_path' => 'user/logout', 'link_title' => 'Logout', 'weight' => 4)
);
shortcut_set_save($shortcut_set);


function ef_populate_shortcuts_initiate() {
	$ss_per_role = variable_get('shortcut_per_role', array());
	foreach ($ss_per_role as $r_id => $sh_set) {
	  	$ss_per_role[$r_id] = 'shortcut-set-1';
	}
	unset($ss_per_role[NULL]);
	variable_set('shortcut_per_role', $ss_per_role);
}
function ef_populate_shortcuts_assign($role_name, $shortcut_set) {
	$ss_per_role = variable_get('shortcut_per_role', array());
	$rid = ($role = user_role_load_by_name($role_name)) ? $role->rid : NULL;
	$ss_per_role[$rid] = $shortcut_set;
	variable_set('shortcut_per_role', $ss_per_role);
}


ef_populate_shortcuts_initiate();
ef_populate_shortcuts_assign('Author', 'shortcut-set-2');
ef_populate_shortcuts_assign('Editor', 'shortcut-set-3');
ef_populate_shortcuts_assign('External Editor', 'shortcut-set-3');
ef_populate_shortcuts_assign('Quality Manager', 'shortcut-set-4');
ef_populate_shortcuts_assign('OSU', 'shortcut-set-5');



echo "shortcuts population finished";

?>