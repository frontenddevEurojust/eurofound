<?php

echo 'populating emails...';


function ef_workbench_email_texts_export_get_emails($from_name = NULL, $to_name = NULL, $rid = NULL) {
  $emails = array();
  $query = db_select('workbench_emails', 'wve')
    ->fields('wve', array('rid', 'from_name', 'to_name', 'subject', 'message'));
  if ($from_name) {
    $query->condition('wve.from_name', $from_name);
  }
  if ($to_name) {
    $query->condition('wve.to_name', $to_name);
  }
  if ($rid) {
    $query->condition('wve.rid', $rid);
  }
  $result = $query->execute();
  foreach ($result as $row) {
    $emails[$row->from_name . '_to_' . $row->to_name][$row->rid] = $row;
  }
  return $emails;
}

function ef_workbench_email_texts_export_update_email_full($from_name, $to_name, $role_name, $subject, $message) {
	$rid = ($role = user_role_load_by_name($role_name)) ? $role->rid : NULL;
	$workbench_emails = ef_workbench_email_texts_export_get_emails($from_name, $to_name, $rid);
	foreach ($workbench_emails as $transition_label => $email_transition_set) {
		foreach ($email_transition_set as $rid => $email_transition) {
	  		workbench_email_save($email_transition, $rid, $subject, $message);
		}
	}
}

function ef_workbench_email_texts_export_update_email($to_name, $subject, $message) {
	ef_workbench_email_texts_export_update_email_full(NULL, $to_name, NULL, $subject, $message);
}


ef_workbench_email_texts_export_update_email(submitted,"[EF CMS][[node:content-type]] '[node:title]' needs review","Dear moderator,

This item needs a review:

Observatory: [node:field-ef-observatory]
Type: [node:content-type]
Title: [node:title]
Author: [node:author]
Last change: [node:changed]
Note: [node:log]

Please review it here: [node:edit-url]

Regards,
EF CMS Webmaster");

ef_workbench_email_texts_export_update_email(submitted_qr,"[EF CMS][[node:content-type]] '[node:title]' needs review","Dear moderator,

This item needs a review:

Observatory: [node:field-ef-observatory]
Type: [node:content-type]
Title: [node:title]
Author: [node:author]
Last change: [node:changed]
Note: [node:log]

Please review it here: [node:edit-url]

Regards,
EF CMS Webmaster");

ef_workbench_email_texts_export_update_email(approved_for_editing,"[EF CMS][[node:content-type]] '[node:title]' needs editing","Dear moderator,

This item has been approved for editing:

Observatory: [node:field-ef-observatory]
Type: [node:content-type]
Title: [node:title]
Author: [node:author]
Last change: [node:changed]
Note: [node:log]

You can edit it here: [node:edit-url]

Regards,
EF CMS Webmaster");

ef_workbench_email_texts_export_update_email(on_second_editing,"[EF CMS][[node:content-type]] '[node:title]' needs 2nd editing","Dear moderator,

This item has been assigned to you for second editing:

Observatory: [node:field-ef-observatory]
Type: [node:content-type]
Title: [node:title]
Author: [node:author]
Last change: [node:changed]
Note: [node:log]

You can edit it here: [node:edit-url]

Regards,
EF CMS Webmaster");

ef_workbench_email_texts_export_update_email(on_external_editing,"[EF CMS][[node:content-type]] '[node:title]' needs editing","Dear moderator,

This item has been assigned to you for editing:

Observatory: [node:field-ef-observatory]
Type: [node:content-type]
Title: [node:title]
Author: [node:author]
Last change: [node:changed]
Note: [node:log]

You can edit it here: [node:edit-url]

Regards,
EF CMS Webmaster");

ef_workbench_email_texts_export_update_email(ready_for_publishing,"[EF CMS][[node:content-type]] '[node:title]' is ready for publishing","Dear moderator,

This item is ready for publishing, and has been assigned to you for a final quality review:

Observatory: [node:field-ef-observatory]
Type: [node:content-type]
Title: [node:title]
Author: [node:author]
Last change: [node:changed]
Note: [node:log]

You can approve it here: [node:edit-url]

Regards,
EF CMS Webmaster");

ef_workbench_email_texts_export_update_email(published,"[EF CMS][[node:content-type]] '[node:title]' has been published","Dear moderator,

This item has been published:

Observatory: [node:field-ef-observatory]
Type: [node:content-type]
Title: [node:title]
Author: [node:author]
Last change: [node:changed]

You can view it here: [node:url]

Regards,
EF CMS Webmaster");

ef_workbench_email_texts_export_update_email(approved,"[EF CMS][[node:content-type]] '[node:title]' has been approved","Dear [node:author],

This item has been approved:

Type: [node:content-type]
Title: [node:title]
Author: [node:author]
Last change: [node:changed]
You can view your submission and the reviewer's notes at: [node:url]

Regards,
EF CMS Webmaster");




echo ' emails population finished';

?>