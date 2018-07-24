<?php
/**
 * @file
 * ef_roles_and_permissions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ef_roles_and_permissions_default_rules_configuration() {
  $items = array();
  $items['ef_roles_and_permissions_email_to_authors_when_qr_rejected'] = entity_import('rules_config', '{ "ef_roles_and_permissions_email_to_authors_when_qr_rejected" : {
      "LABEL" : "Send email notification to authors when QR rejected",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [
        "author",
        "email",
        "moderation",
        "notification",
        "transition",
        "workbench"
      ],
      "REQUIRES" : [ "workbench_moderation", "rules", "rules_i18n" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_ic_quarterly_report" : "ef_ic_quarterly_report",
                "ef_network_quarterly_report" : "ef_network_quarterly_report"
              }
            }
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "rejected" } },
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "rejected" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:country-authors-emails]",
            "subject" : "[EF CMS][[node:content-type]] \\u0027[node:title]\\u0027 has been rejected",
            "message" : "Dear national correspondent,\\r\\n\\r\\nA submission for a quarterly report of a country associated to a contract of yours ([node:field-ef-quarter-report-country]) has been rejected by [node:current-revision-author-name] because:\\r\\n\\r\\n[node:log]\\r\\n\\r\\nYou can view the submission and the reviewer\\u0027s notes at: [node:url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['ef_roles_and_permissions_send_email_to_authors_when_qr_approved'] = entity_import('rules_config', '{ "ef_roles_and_permissions_send_email_to_authors_when_qr_approved" : {
      "LABEL" : "Send email to authors when QR approved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [
        "author",
        "email",
        "moderation",
        "notification",
        "transition",
        "workbench"
      ],
      "REQUIRES" : [ "workbench_moderation", "rules", "rules_i18n" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_ic_quarterly_report" : "ef_ic_quarterly_report",
                "ef_network_quarterly_report" : "ef_network_quarterly_report"
              }
            }
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "approved" } },
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "approved" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:country-authors-emails]",
            "subject" : "[EF CMS][[node:content-type]] \\u0027[node:title]\\u0027 has been approved",
            "message" : "Dear national correspondent,\\r\\n\\r\\nThis item has been approved:\\r\\n\\r\\nType: [node:content-type]\\r\\nTitle: [node:title]\\r\\nAuthor: [node:author]\\r\\nLast change: [node:changed]\\r\\nYou can view your submission and the reviewer\\u0027s notes at: [node:url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['ef_roles_and_permissions_send_email_when_qr_under_revision'] = entity_import('rules_config', '{ "ef_roles_and_permissions_send_email_when_qr_under_revision" : {
      "LABEL" : "Send email to authors when QR under revision request",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [
        "author",
        "email",
        "moderation",
        "notification",
        "transition",
        "workbench"
      ],
      "REQUIRES" : [ "workbench_moderation", "rules", "rules_i18n" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_ic_quarterly_report" : "ef_ic_quarterly_report",
                "ef_network_quarterly_report" : "ef_network_quarterly_report"
              }
            }
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "under_revision_request" } },
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "under_revision_request" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:country-authors-emails]",
            "subject" : "[EF CMS][[node:content-type]] \\u0027[node:title]\\u0027 needs revision",
            "message" : "Dear national correspondent,\\r\\n\\r\\nThis item has been reviewed by [node:current-revision-author-name] and needs a revision:\\r\\n\\r\\nType: [node:content-type]\\r\\nTitle: [node:title]\\r\\nAuthor: [node:author]\\r\\nLast change: [node:changed]\\r\\nNote: [node:log]\\r\\n\\r\\nPlease revise it here: [node:edit-url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_boarding_member_pages'] = entity_import('rules_config', '{ "rules_boarding_member_pages" : {
      "LABEL" : "Boarding Member Pages",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "node_view--board_member_page" : { "bundle" : "board_member_page" } },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : {
                "9" : "9",
                "6" : "6",
                "5" : "5",
                "4" : "4",
                "3" : "3",
                "10" : "10",
                "12" : "12",
                "11" : "11",
                "14" : "14",
                "13" : "13",
                "15" : "15",
                "16" : "16"
              }
            },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "php_eval" : { "code" : "drupal_access_denied(); exit;" } } ]
    }
  }');
  $items['rules_ef_send_email_to_admins_when_a_contact_form_is_submitted'] = entity_import('rules_config', '{ "rules_ef_send_email_to_admins_when_a_contact_form_is_submitted" : {
      "LABEL" : "Send email to admins when a contact form is submitted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "webform_rules" ],
      "ON" : { "webform_rules_submit" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ef_contact_form" : "ef_contact_form" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4", "3" : "3" } },
            "subject" : "A new [data:type-value] has been reported",
            "message" : "On [site:current-date] user [data:name-value] with [data:email-value] reported the following:\\r\\n\\r\\n [data:body-value]\\r\\n\\r\\nThe Eurofound CMS"
          }
        }
      ]
    }
  }');
  $items['rules_email_notification_to_efadm_if_new_user_has_registered'] = entity_import('rules_config', '{ "rules_email_notification_to_efadm_if_new_user_has_registered" : {
      "LABEL" : "Email notification to EFADM if new user has registered",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "[account:field_ef_first_name] [account:field_ef_last_name]  created an account at [site:url-brief] (pending approval)",
            "message" : "This is an automated email.\\r\\n\\r\\n [account:field_ef_first_name] [account:field_ef_last_name]  ([account:name]) has completed the registration form and is waiting for approval. To activate the user click on the following link: [account:edit-url]\\r\\n\\r\\nPlease make sure that you assign the appropriate role to the user.\\r\\n\\r\\nThe Eurofound CMS"
          }
        }
      ]
    }
  }');
  $items['rules_send_email_notification_to_author_when_node_published'] = entity_import('rules_config', '{ "rules_send_email_notification_to_author_when_node_published" : {
      "LABEL" : "Send email notification to author when node published",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [
        "author",
        "email",
        "moderation",
        "notification",
        "transition",
        "workbench"
      ],
      "REQUIRES" : [ "workbench_moderation", "rules", "rules_i18n" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_case_study" : "ef_case_study",
                "ef_comparative_analytical_report" : "ef_comparative_analytical_report",
                "ef_report" : "ef_report",
                "ef_ir_dictionary" : "ef_ir_dictionary",
                "ef_national_contribution" : "ef_national_contribution",
                "ef_regulation" : "ef_regulation",
                "ef_restructuring_in_smes" : "ef_restructuring_in_smes",
                "ef_support_instrument" : "ef_support_instrument",
                "ef_factsheet" : "ef_factsheet"
              }
            }
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-ef-assign-to:mail]",
            "subject" : "[EF CMS][[node:content-type]] \\u0027[node:title]\\u0027 has been published",
            "message" : "Dear [node:field-ef-assign-to:name],\\r\\n\\r\\nThis item has been published:\\r\\n\\r\\nObservatory: [node:field-ef-observatory]\\r\\nType: [node:content-type]\\r\\nTitle: [node:title]\\r\\nAuthor: [node:author]\\r\\nLast change: [node:changed]\\r\\n\\r\\nYou can view it here: [node:url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_notification_to_author_when_node_rejected'] = entity_import('rules_config', '{ "rules_send_email_notification_to_author_when_node_rejected" : {
      "LABEL" : "Send email notification to author when node rejected",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [
        "author",
        "email",
        "moderation",
        "notification",
        "transition",
        "workbench"
      ],
      "REQUIRES" : [ "workbench_moderation", "rules", "rules_i18n" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_case_study" : "ef_case_study",
                "ef_comparative_analytical_report" : "ef_comparative_analytical_report",
                "ef_report" : "ef_report",
                "ef_ir_dictionary" : "ef_ir_dictionary",
                "ef_national_contribution" : "ef_national_contribution",
                "ef_regulation" : "ef_regulation",
                "ef_restructuring_in_smes" : "ef_restructuring_in_smes",
                "ef_support_instrument" : "ef_support_instrument",
                "ef_factsheet" : "ef_factsheet"
              }
            }
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "rejected" } },
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "rejected" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-ef-assign-to:mail]",
            "subject" : "[EF CMS][[node:content-type]] \\u0027[node:title]\\u0027 has been rejected",
            "message" : "Dear [node:field-ef-assign-to:name],\\r\\n\\r\\nYour submission has been rejected by [node:current-revision-author-name] because:\\r\\n\\r\\n[node:log]\\r\\n\\r\\nYou can view your submission and the reviewer\\u0027s notes at: [node:url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_notification_to_author_when_node_requested'] = entity_import('rules_config', '{ "rules_send_email_notification_to_author_when_node_requested" : {
      "LABEL" : "Send email notification to author when node requested",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [
        "author",
        "email",
        "moderation",
        "notification",
        "transition",
        "workbench"
      ],
      "REQUIRES" : [ "workbench_moderation", "rules", "rules_i18n" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_comparative_analytical_report" : "ef_comparative_analytical_report",
                "ef_report" : "ef_report",
                "ef_national_contribution" : "ef_national_contribution"
              }
            }
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "requested" } },
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "requested" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-ef-assign-to:mail]",
            "subject" : "[EF CMS][[node:content-type]] submission request",
            "message" : "Dear [node:field-ef-assign-to:name],\\r\\n\\r\\nPlease write the following article:\\r\\n\\r\\nObservatory: [node:field-ef-observatory]\\r\\nType: [node:content-type]\\r\\nTitle: [node:title]\\r\\nAuthor: [node:author]\\r\\nLast change: [node:changed]\\r\\nNote: [node:log]\\r\\n\\r\\nPlease write it here: [node:edit-url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_notification_to_author_when_node_under_revision'] = entity_import('rules_config', '{ "rules_send_email_notification_to_author_when_node_under_revision" : {
      "LABEL" : "Send email notification to author when node under revision request",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [
        "author",
        "email",
        "moderation",
        "notification",
        "transition",
        "workbench"
      ],
      "REQUIRES" : [ "workbench_moderation", "rules", "rules_i18n" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_case_study" : "ef_case_study",
                "ef_comparative_analytical_report" : "ef_comparative_analytical_report",
                "ef_report" : "ef_report",
                "ef_ir_dictionary" : "ef_ir_dictionary",
                "ef_national_contribution" : "ef_national_contribution",
                "ef_regulation" : "ef_regulation",
                "ef_restructuring_in_smes" : "ef_restructuring_in_smes",
                "ef_support_instrument" : "ef_support_instrument",
                "ef_factsheet" : "ef_factsheet"
              }
            }
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "under_revision_request" } },
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "under_revision_request" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-ef-assign-to:mail]",
            "subject" : "[EF CMS][[node:content-type]] \\u0027[node:title]\\u0027 needs revision",
            "message" : "Dear [node:field-ef-assign-to:name],\\r\\n\\r\\nThis item has been reviewed by [node:current-revision-author-name] and needs a revision:\\r\\n\\r\\nObservatory: [node:field-ef-observatory]\\r\\nType: [node:content-type]\\r\\nTitle: [node:title]\\r\\nAuthor: [node:author]\\r\\nLast change: [node:changed]\\r\\nNote: [node:log]\\r\\n\\r\\nPlease revise it here: [node:edit-url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_notification_to_author_when_requested_auth_chan'] = entity_import('rules_config', '{ "rules_send_email_notification_to_author_when_requested_auth_chan" : {
      "LABEL" : "Send email notification to author when requested author changed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workbench_moderation", "rules_i18n" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_ef_assign_to" } },
        { "NOT data_is" : {
            "data" : [ "node-unchanged:field-ef-assign-to" ],
            "value" : [ "node:field-ef-assign-to" ]
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "requested" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_comparative_analytical_report" : "ef_comparative_analytical_report",
                "ef_report" : "ef_report",
                "ef_national_contribution" : "ef_national_contribution"
              }
            }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-ef-assign-to:mail]",
            "subject" : "[EF CMS][[node:content-type]] submission request",
            "message" : "Dear [node:field-ef-assign-to:name],\\r\\n\\r\\nPlease write the following article:\\r\\n\\r\\nObservatory: [node:field-ef-observatory]\\r\\nType: [node:content-type]\\r\\nTitle: [node:title]\\r\\nAuthor: [node:author]\\r\\nLast change: [node:changed]\\r\\nNote: [node:log]\\r\\n\\r\\nPlease write it here: [node:edit-url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_notification_to_author_when_under_revision_auth'] = entity_import('rules_config', '{ "rules_send_email_notification_to_author_when_under_revision_auth" : {
      "LABEL" : "Send email notification to author when under revision author changed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workbench_moderation", "rules_i18n" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_ef_assign_to" } },
        { "NOT data_is" : {
            "data" : [ "node-unchanged:field-ef-assign-to" ],
            "value" : [ "node:field-ef-assign-to" ]
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "under_revision_request" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_case_study" : "ef_case_study",
                "ef_comparative_analytical_report" : "ef_comparative_analytical_report",
                "ef_report" : "ef_report",
                "ef_ir_dictionary" : "ef_ir_dictionary",
                "ef_national_contribution" : "ef_national_contribution",
                "ef_regulation" : "ef_regulation",
                "ef_restructuring_in_smes" : "ef_restructuring_in_smes",
                "ef_support_instrument" : "ef_support_instrument",
                "ef_factsheet" : "ef_factsheet"
              }
            }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-ef-assign-to:mail]",
            "subject" : "[EF CMS][[node:content-type]] \\u0027[node:title]\\u0027 needs revision",
            "message" : "Dear [node:field-ef-assign-to:name],\\r\\n\\r\\nThis item has been reviewed by [node:current-revision-author-name] and needs a revision:\\r\\n\\r\\nObservatory: [node:field-ef-observatory]\\r\\nType: [node:content-type]\\r\\nTitle: [node:title]\\r\\nAuthor: [node:author]\\r\\nLast change: [node:changed]\\r\\nNote: [node:log]\\r\\n\\r\\nPlease revise it here: [node:edit-url]\\r\\n\\r\\nRegards,\\r\\nEF CMS Webmaster",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_notification_to_ef_admins_after_modaration_tran'] = entity_import('rules_config', '{ "rules_send_email_notification_to_ef_admins_after_modaration_tran" : {
      "LABEL" : "Send email notification to EF admins after modaration transition",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules", "php" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "ef_case_study" : "ef_case_study",
                "ef_comparative_analytical_report" : "ef_comparative_analytical_report",
                "ef_report" : "ef_report",
                "ef_ir_dictionary" : "ef_ir_dictionary",
                "ef_national_contribution" : "ef_national_contribution",
                "ef_regulation" : "ef_regulation",
                "ef_restructuring_in_smes" : "ef_restructuring_in_smes",
                "ef_support_instrument" : "ef_support_instrument",
                "ef_factsheet" : "ef_factsheet"
              }
            }
          }
        },
        { "NOT contents_current_state" : { "node" : [ "node" ], "moderation_state" : "draft" } },
        { "php_eval" : { "code" : "return $previous_state!=$new_state;" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5", "4" : "4" } },
            "subject" : "Eurofound CMS: The [node:content-type] \\u0027[node:title]\\u0027 is now in \\u0027[new-state:value]\\u0027 status",
            "message" : "The [node:content-type] \\u0027[node:title]\\u0027 has been moved from [previous-state:value] to [new-state:value] by [site:current-user].\\r\\n\\r\\nThe following note has been added in the  [node:content-type]:\\r\\n\\u0022[node:log]\\u0022\\r\\n\\r\\nTo review the [node:content-type] online, click the following link: [node:url]\\r\\n\\r\\nAuthor: [node:field-ef-assign-to]\\r\\nContract\\/Country: [node:field-ef-contract]\\r\\nObsevatory: [node:field-ef-observatory]\\r\\n\\r\\nEurofound CMS"
          }
        }
      ]
    }
  }');
  return $items;
}
