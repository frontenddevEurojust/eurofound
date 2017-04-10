<?
// 	EFDR-915
// time drush -r /var/www/ef scr sites/all/_docs/php-scripts/fix-s2-migrated-languages-fields-but-body.php
$db_list2 = array(
"field_data_field_ef_submission_details",
"field_revision_field_ef_submission_details",
"field_data_field_ef_address",
"field_revision_field_ef_address",
"field_data_field_ef_city",
"field_revision_field_ef_city",
"field_data_field_ef_location",
"field_revision_field_ef_location",
"field_data_field_ef_organised_by",
"field_revision_field_ef_organised_by",
"field_data_field_ef_venue_title",
"field_revision_field_ef_venue_title",
"field_data_field_ef_subtitle",
"field_revision_field_ef_subtitle",
"field_data_field_ef_activity_timeline",
"field_data_field_ef_activity_title",
"field_data_field_ef_author",
"field_revision_field_ef_activity_timeline",
"field_revision_field_ef_activity_title",
"field_revision_field_ef_author",
"field_data_field_ef_important_discussions",
"field_revision_field_ef_important_discussions",
"field_data_field_ef_research_findings",
"field_revision_field_ef_research_findings",
"field_data_field_ef_short_summary",
"field_revision_field_ef_short_summary",
"field_data_field_ef_number_of_pages",
"field_revision_field_ef_number_of_pages",
"field_revision_field_ef_document",
"field_data_field_ef_document"
);

foreach ($db_list2 as $key => $value) {
	$db_name = $value;
	$num_updated = db_update($db_name) // Table name no longer needs {}
  	->fields(array(
		'language' => "en",
  	))
  	->condition('language', "und", '=')
  	->execute();

  	print_r($db_name. "  updated ! count:" . $num_updated );
  	print("\n");

}