<?php
/**
 * @file
 * ef_basics.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ef_basics_default_rules_configuration() {
  $items = array();
  $items['rules_ef_redirect_to_the_index_page_after_login'] = entity_import('rules_config', '{ "rules_ef_redirect_to_the_index_page_after_login" : {
      "LABEL" : "Redirect to the index page after login",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [ { "redirect" : { "url" : "[site:url]" } } ]
    }
  }');
  return $items;
}
