<?php
/**
 * @file
 * country_group.features.inc
 */

/**
 * Implements hook_default_group_role().
 */
function country_group_default_group_role() {
  $items = array();
  $items['group_admin'] = entity_import('group_role', '{
    "type" : "",
    "name" : "group_admin",
    "label" : "Administrator",
    "global" : "1",
    "permissions" : [
      "administer fieldgroups",
      "administer group",
      "administer members",
      "access member overview",
      "access member pages",
      "access member metadata",
      "edit own membership",
      "edit group",
      "delete group",
      "join group",
      "join group form",
      "request membership",
      "request membership form",
      "leave group",
      "view group",
      "view members"
    ],
    "weight" : "10",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_group_type().
 */
function country_group_default_group_type() {
  $items = array();
  $items['country_group'] = entity_import('group_type', '{
    "name" : "country_group",
    "label" : "Country group",
    "anonymous_permissions" : [],
    "outsider_permissions" : [
      "view ef_report",
      "view cwb_country_info",
      "view cwb_level_coordination",
      "view cwb_series",
      "view cwb_time_series",
      "view board_member_page",
      "view ef_contact_form",
      "view ef_emire_dictionary",
      "view page",
      "view ef_call_for_tender",
      "view ef_project",
      "view ef_vacancy",
      "view dvs_survey",
      "view ef_event",
      "view ef_photo_gallery",
      "view ef_video",
      "view ef_news",
      "view ef_case_study",
      "view ef_comparative_analytical_report",
      "view ef_national_contribution",
      "view ef_publication",
      "view ef_quarterly_report",
      "view ef_factsheet",
      "view ef_input_to_erm",
      "view ef_ir_dictionary",
      "view ef_regulation",
      "view ef_restructuring_in_smes",
      "view ef_support_instrument",
      "view ef_spotlight_entry",
      "view ef_survey",
      "view ef_erm_regulation",
      "view ssi_services",
      "view timeline_date",
      "view panel",
      "view article",
      "view case_study_publication",
      "view erm_support_instrument",
      "view simplenews",
      "view webform",
      "view group",
      "view ef_annual_progress_report"
    ],
    "member_permissions" : [],
    "config" : { "creator_roles" : [ "country_group_creator" ] },
    "weight" : "0",
    "rdf_mapping" : [],
    "roles" : [
      {
        "type" : "country_group",
        "name" : "country_group_leader",
        "label" : "Country group leader",
        "global" : "0",
        "permissions" : [
          "access member overview",
          "view group",
          "view members",
          "view ef_report",
          "create ef_report",
          "update own ef_report",
          "delete own ef_report",
          "add member",
          "administer members",
          "view ef_case_study",
          "view ef_comparative_analytical_report",
          "view ef_ic_quarterly_report",
          "view ef_national_contribution",
          "view ef_factsheet",
          "view ef_input_to_erm",
          "view ef_ir_dictionary",
          "view ef_regulation",
          "view ef_restructuring_in_smes",
          "view erm_support_instrument",
          "update any ef_report",
          "view ef_annual_progress_report",
          "update any ef_annual_progress_report",
          "create ef_factsheet",
          "update own ef_factsheet",
          "update any ef_factsheet",
          "delete own ef_factsheet",
          "create ef_input_to_erm",
          "update own ef_input_to_erm",
          "update any ef_input_to_erm",
          "delete own ef_input_to_erm",
          "create ef_ir_dictionary",
          "update own ef_ir_dictionary",
          "update any ef_ir_dictionary",
          "delete own ef_ir_dictionary",
          "view ef_erm_regulation",
          "create ef_erm_regulation",
          "update own ef_erm_regulation",
          "update any ef_erm_regulation",
          "delete own ef_erm_regulation",
          "create erm_support_instrument",
          "update own erm_support_instrument",
          "update any erm_support_instrument",
          "delete own erm_support_instrument",
          "view ef_network_quarterly_report"
        ],
        "weight" : "-10",
        "rdf_mapping" : []
      },
      {
        "type" : "country_group",
        "name" : "country_group_member",
        "label" : "Country group member",
        "global" : "0",
        "permissions" : [
          "access member overview",
          "view ef_report",
          "create ef_report",
          "update own ef_report",
          "delete own ef_report",
          "view group",
          "view ef_case_study",
          "view ef_comparative_analytical_report",
          "update own ef_comparative_analytical_report",
          "view ef_ic_quarterly_report",
          "view ef_national_contribution",
          "view ef_factsheet",
          "view ef_input_to_erm",
          "view ef_ir_dictionary",
          "view ef_regulation",
          "view ef_restructuring_in_smes",
          "view erm_support_instrument",
          "update any ef_report",
          "view ef_annual_progress_report",
          "update any ef_annual_progress_report",
          "create ef_factsheet",
          "update own ef_factsheet",
          "update any ef_factsheet",
          "delete own ef_factsheet",
          "create ef_input_to_erm",
          "update own ef_input_to_erm",
          "update any ef_input_to_erm",
          "delete own ef_input_to_erm",
          "create ef_ir_dictionary",
          "update own ef_ir_dictionary",
          "update any ef_ir_dictionary",
          "delete own ef_ir_dictionary",
          "view ef_erm_regulation",
          "create ef_erm_regulation",
          "update own ef_erm_regulation",
          "update any ef_erm_regulation",
          "delete own ef_erm_regulation",
          "create erm_support_instrument",
          "update own erm_support_instrument",
          "update any erm_support_instrument",
          "delete own erm_support_instrument",
          "view ef_network_quarterly_report"
        ],
        "weight" : "-9",
        "rdf_mapping" : []
      },
      {
        "type" : "country_group",
        "name" : "country_group_creator",
        "label" : "Country group creator",
        "global" : "0",
        "permissions" : [
          "administer group",
          "administer members",
          "access member overview",
          "access member pages",
          "access member metadata",
          "edit own membership",
          "edit group",
          "delete group",
          "leave group",
          "view group",
          "view members",
          "add member"
        ],
        "weight" : "0",
        "rdf_mapping" : []
      }
    ]
  }');
  return $items;
}
