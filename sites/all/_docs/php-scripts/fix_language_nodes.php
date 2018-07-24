<?


$db_list = array("field_data_comment_body",
"field_data_field_ef_country_body",
"field_revision_field_ef_country_body",
"field_data_field_ef_country_more",
"field_revision_field_ef_country_more",
"field_data_field_ef_external_links",
"field_revision_field_ef_external_links",
"field_data_field_ef_migration_details",
"field_revision_field_ef_migration_details",
"field_data_field_ef_quality_of_society",
"field_revision_field_ef_quality_of_society",
"field_data_field_ef_specific_information",
"field_revision_field_ef_specific_information",
"field_data_field_ef_topic_key",
"field_revision_field_ef_topic_key",
"field_data_field_ef_contract_number",
"field_revision_field_ef_contract_number",
"field_data_field_ef_contractor",
"field_revision_field_ef_contractor",
"field_data_field_ef_cs_years_span",
"field_revision_field_ef_cs_years_span",
"field_data_field_ef_dissemination",
"field_revision_field_ef_dissemination",
"field_data_field_ef_dissemination_timeline",
"field_revision_field_ef_dissemination_timeline",
"field_data_field_ef_dissemination_title",
"field_revision_field_ef_dissemination_title",
"field_data_field_ef_num_of_outputs_sent_out",
"field_revision_field_ef_num_of_outputs_sent_out",
"field_data_field_ef_other_feedback",
"field_revision_field_ef_other_feedback",
"field_data_field_ef_quarterly_report_1",
"field_data_field_ef_quarterly_report_2",
"field_data_field_ef_quarterly_report_3",
"field_data_field_ef_quarterly_report_4",
"field_data_field_ef_quarterly_report_5",
"field_data_field_ef_quarterly_report_6",
"field_revision_field_ef_quarterly_report_1",
"field_revision_field_ef_quarterly_report_2",
"field_revision_field_ef_quarterly_report_3",
"field_revision_field_ef_quarterly_report_4",
"field_revision_field_ef_quarterly_report_5",
"field_revision_field_ef_quarterly_report_6",
"field_data_field_ef_target_audience",
"field_revision_field_ef_target_audience",
"field_data_field_ef_additional_information",
"field_revision_field_ef_additional_information",
"field_data_field_ef_affected_units",
"field_revision_field_ef_affected_units",
"field_data_field_ef_case_name",
"field_revision_field_ef_case_name",
"field_data_field_ef_comment",
"field_revision_field_ef_comment",
"field_data_field_ef_company_name",
"field_revision_field_ef_company_name",
"field_data_field_ef_coverage_eligibility",
"field_revision_field_ef_coverage_eligibility",
"field_data_field_ef_effectiveness",
"field_revision_field_ef_effectiveness",
"field_data_field_ef_english_name",
"field_revision_field_ef_english_name",
"field_data_field_ef_full_text_source",
"field_revision_field_ef_full_text_source",
"field_data_field_ef_group",
"field_revision_field_ef_group",
"field_data_field_ef_instrument_examples",
"field_revision_field_ef_instrument_examples",
"field_data_field_ef_involvement_other",
"field_revision_field_ef_involvement_other",
"field_data_field_ef_involvement_texts",
"field_revision_field_ef_involvement_texts",
"field_data_field_ef_main_characteristics",
"field_revision_field_ef_main_characteristics",
"field_data_field_ef_nace_code",
"field_revision_field_ef_nace_code",
"field_data_field_ef_nuts_code",
"field_revision_field_ef_nuts_code",
"field_data_field_ef_regulation_article",
"field_revision_field_ef_regulation_article",
"field_data_field_ef_regulation_comments",
"field_revision_field_ef_regulation_comments",
"field_data_field_ef_regulation_english_name",
"field_revision_field_ef_regulation_english_name",
"field_data_field_ef_restructuring_type_code",
"field_revision_field_ef_restructuring_type_code",
"field_data_field_ef_sources_links",
"field_revision_field_ef_sources_links",
"field_data_field_ef_strengths",
"field_revision_field_ef_strengths",
"field_data_field_ef_thresholds_texts",
"field_revision_field_ef_thresholds_texts",
"field_data_field_ef_weaknesses",
"field_revision_field_ef_weaknesses",
"field_data_field_ef_first_name",
"field_revision_field_ef_first_name",
"field_data_field_ef_last_name",
"field_revision_field_ef_last_name",
"field_data_field_ef_organisation",
"field_revision_field_ef_organisation",
"field_data_field_ef_full_name",
"field_revision_field_ef_full_name"
);




foreach ($db_list as $key => $value) {
	$db_name = $value;

  $num_deleted = db_delete($db_name)
  ->condition('language', "en",'!=')
  ->execute();

	$num_updated = db_update($db_name) // Table name no longer needs {}
  	->fields(array(
		'language' => "und",
  	))
  	->condition('language', "und", '!=')
  	->execute();
  	print_r($db_name. "  updated !" );
  	print_r("\n");
}


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
  	print_r($db_name. "  updated !" );
  	print_r("\n");
}