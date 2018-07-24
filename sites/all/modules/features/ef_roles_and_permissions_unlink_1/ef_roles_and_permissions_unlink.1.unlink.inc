<?php

/**
 * Unlink ef_roles_and_permissions_unlink_1_views_view().
 */
function ef_roles_and_permissions_unlink_1_views_view() {
$view = new view();
$view->name = 'ef_administration_users';
$view->description = 'List, add, and edit users.';
$view->tag = 'admin';
$view->base_table = 'users';
$view->human_name = 'EF Administration: Users';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Users';
$handler->display->display_options['css_class'] = 'admin-views-view';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 50;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'mail' => 'name',
  'status' => 'status',
  'rid' => 'rid',
  'created' => 'created',
  'access' => 'access',
  'field_ef_contracts' => 'field_ef_contracts',
);
$handler->display->display_options['style_options']['default'] = 'access';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br />',
    'empty_column' => 0,
  ),
  'mail' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'rid' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'access' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_contracts' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['empty_table'] = TRUE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'No users available.';
/* Field: Bulk operations: User */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::system_block_ip_action' => array(
    'selected' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Ban IP address of the current user',
    'postpone_processing' => 0,
  ),
  'action::user_block_user_action' => array(
    'selected' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Delete',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Change value',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
    'postpone_processing' => 0,
  ),
  'action::system_message_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_user_roles_action' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Change user roles',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
  ),
  'action::system_goto_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_send_email_action' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Send e-mail',
    'postpone_processing' => 0,
  ),
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
/* Field: User: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
$handler->display->display_options['fields']['mail']['label'] = '';
$handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['mail']['link_to_user'] = '0';
/* Field: User: Active */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'users';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['type'] = 'ul';
/* Field: User: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'users';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Member for';
$handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
/* Field: User: Last access */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'users';
$handler->display->display_options['fields']['access']['field'] = 'access';
$handler->display->display_options['fields']['access']['date_format'] = 'time ago';
/* Field: User: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: User: Cancel link */
$handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['table'] = 'users';
$handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['label'] = '';
$handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['cancel_node']['hide_alter_empty'] = FALSE;
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Username';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['group'] = 1;
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
$handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Users';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'mail' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'status' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'rid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_contracts_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'name_list' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Contracts (field_ef_contracts) */
$handler->display->display_options['relationships']['field_ef_contracts_tid']['id'] = 'field_ef_contracts_tid';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['table'] = 'field_data_field_ef_contracts';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['field'] = 'field_ef_contracts_tid';
/* Relationship: Field: Country (field_ef_eu_related_countries) */
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['id'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['table'] = 'field_data_field_ef_eu_related_countries';
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['field'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['relationship'] = 'field_ef_contracts_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Bulk operations: User */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::user_block_user_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_user_cancel_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::role_delegation_delegate_roles_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Delete',
  ),
  'action::views_bulk_operations_delete_revision' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Change value',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::views_bulk_operations_user_roles_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Change user roles',
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
  ),
  'action::system_send_email_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Send e-mail',
  ),
  'rules_component::rules_unblock_selected_users' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::pathauto_user_update_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
/* Field: User: Contracts */
$handler->display->display_options['fields']['field_ef_contracts']['id'] = 'field_ef_contracts';
$handler->display->display_options['fields']['field_ef_contracts']['table'] = 'field_data_field_ef_contracts';
$handler->display->display_options['fields']['field_ef_contracts']['field'] = 'field_ef_contracts';
$handler->display->display_options['fields']['field_ef_contracts']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_contracts']['delta_offset'] = '0';
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = 'Countries';
$handler->display->display_options['fields']['view']['view'] = 'ef_administration_users';
$handler->display->display_options['fields']['view']['display'] = 'attachment_1';
$handler->display->display_options['fields']['view']['arguments'] = '[!uid]';
/* Field: User: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
$handler->display->display_options['fields']['mail']['label'] = '';
$handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['mail']['link_to_user'] = '0';
/* Field: User: Active */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'users';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['type'] = 'ul';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_observatory']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: User: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'users';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Member for';
$handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
/* Field: User: Last access */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'users';
$handler->display->display_options['fields']['access']['field'] = 'access';
$handler->display->display_options['fields']['access']['date_format'] = 'time ago';
/* Field: User: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: User: Cancel link */
$handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['table'] = 'users';
$handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['label'] = '';
$handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['cancel_node']['hide_alter_empty'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['filters']['uid_1']['table'] = 'users';
$handler->display->display_options['filters']['uid_1']['field'] = 'uid';
$handler->display->display_options['filters']['uid_1']['value'] = '';
$handler->display->display_options['filters']['uid_1']['group'] = 1;
$handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid_1']['expose']['operator_id'] = 'uid_1_op';
$handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
$handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
$handler->display->display_options['filters']['uid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
  17 => 0,
  18 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 1;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['group'] = 1;
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
$handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;
/* Filter criterion: User: Contracts (field_ef_contracts) */
$handler->display->display_options['filters']['field_ef_contracts_tid']['id'] = 'field_ef_contracts_tid';
$handler->display->display_options['filters']['field_ef_contracts_tid']['table'] = 'field_data_field_ef_contracts';
$handler->display->display_options['filters']['field_ef_contracts_tid']['field'] = 'field_ef_contracts_tid';
$handler->display->display_options['filters']['field_ef_contracts_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_contracts_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['operator_id'] = 'field_ef_contracts_tid_op';
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['label'] = 'Contracts';
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['operator'] = 'field_ef_contracts_tid_op';
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['identifier'] = 'field_ef_contracts_tid';
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  7 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_ef_contracts_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_contracts_tid']['vocabulary'] = 'ef_contracts';
$handler->display->display_options['filters']['field_ef_contracts_tid']['error_message'] = FALSE;
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'name_list';
$handler->display->display_options['filters']['name_list']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  7 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['path'] = 'admin/people';

/* Display: National correspondents */
$handler = $view->new_display('page', 'National correspondents', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'National correspondents';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'mail' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'status' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_contracts_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'name_list' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'mail' => 'name',
  'status' => 'status',
  'created' => 'created',
  'access' => 'access',
  'uid' => 'uid',
  'field_ef_eu_related_countries' => 'field_ef_eu_related_countries',
);
$handler->display->display_options['style_options']['default'] = 'access';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br />',
    'empty_column' => 0,
  ),
  'mail' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'access' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'uid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_eu_related_countries' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['empty_table'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Contracts (field_ef_contracts) */
$handler->display->display_options['relationships']['field_ef_contracts_tid']['id'] = 'field_ef_contracts_tid';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['table'] = 'field_data_field_ef_contracts';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['field'] = 'field_ef_contracts_tid';
/* Relationship: Field: Country (field_ef_eu_related_countries) */
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['id'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['table'] = 'field_data_field_ef_eu_related_countries';
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['field'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['relationship'] = 'field_ef_contracts_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
/* Field: User: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
$handler->display->display_options['fields']['mail']['label'] = '';
$handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['mail']['link_to_user'] = '0';
/* Field: User: Contracts */
$handler->display->display_options['fields']['field_ef_contracts']['id'] = 'field_ef_contracts';
$handler->display->display_options['fields']['field_ef_contracts']['table'] = 'field_data_field_ef_contracts';
$handler->display->display_options['fields']['field_ef_contracts']['field'] = 'field_ef_contracts';
$handler->display->display_options['fields']['field_ef_contracts']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_contracts']['delta_offset'] = '0';
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = 'Countries';
$handler->display->display_options['fields']['view']['view'] = 'ef_administration_users';
$handler->display->display_options['fields']['view']['display'] = 'attachment_1';
$handler->display->display_options['fields']['view']['arguments'] = '[!uid]';
/* Field: User: Active */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'users';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: User: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'users';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Member for';
$handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
/* Field: User: Last access */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'users';
$handler->display->display_options['fields']['access']['field'] = 'access';
$handler->display->display_options['fields']['access']['date_format'] = 'time ago';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['value'] = array(
  7 => '7',
);
$handler->display->display_options['filters']['rid']['group'] = 1;
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'name_list';
$handler->display->display_options['filters']['name_list']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  7 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name_list']['configuration'] = '1';
$handler->display->display_options['filters']['name_list']['filter'] = array(
  'enabled' => '1',
  'continents' => array(
    'EU' => 'EU',
  ),
);
/* Filter criterion: User: Contracts (field_ef_contracts) */
$handler->display->display_options['filters']['field_ef_contracts_tid']['id'] = 'field_ef_contracts_tid';
$handler->display->display_options['filters']['field_ef_contracts_tid']['table'] = 'field_data_field_ef_contracts';
$handler->display->display_options['filters']['field_ef_contracts_tid']['field'] = 'field_ef_contracts_tid';
$handler->display->display_options['filters']['field_ef_contracts_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_contracts_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['operator_id'] = 'field_ef_contracts_tid_op';
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['label'] = 'Contracts';
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['operator'] = 'field_ef_contracts_tid_op';
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['identifier'] = 'field_ef_contracts_tid';
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_contracts_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  7 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_ef_contracts_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_contracts_tid']['vocabulary'] = 'ef_contracts';
$handler->display->display_options['path'] = 'national-correspondents';

/* Display: Users Countries Attachment */
$handler = $view->new_display('attachment', 'Users Countries Attachment', 'attachment_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'User Countries Attachement';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_eu_related_countries' => 'field_ef_eu_related_countries',
);
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Contracts (field_ef_contracts) */
$handler->display->display_options['relationships']['field_ef_contracts_tid']['id'] = 'field_ef_contracts_tid';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['table'] = 'field_data_field_ef_contracts';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['field'] = 'field_ef_contracts_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Country */
$handler->display->display_options['fields']['field_ef_eu_related_countries']['id'] = 'field_ef_eu_related_countries';
$handler->display->display_options['fields']['field_ef_eu_related_countries']['table'] = 'field_data_field_ef_eu_related_countries';
$handler->display->display_options['fields']['field_ef_eu_related_countries']['field'] = 'field_ef_eu_related_countries';
$handler->display->display_options['fields']['field_ef_eu_related_countries']['relationship'] = 'field_ef_contracts_tid';
$handler->display->display_options['fields']['field_ef_eu_related_countries']['label'] = '';
$handler->display->display_options['fields']['field_ef_eu_related_countries']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_eu_related_countries']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_ef_eu_related_countries']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_ef_eu_related_countries']['delta_offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;

/* Display: OSU users management */
$handler = $view->new_display('page', 'OSU users management', 'page_2');
$handler->display->display_options['display_description'] = 'OSU users management';
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  13 => '13',
);
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<a href="admin/people/create">+ Add new user as Author</a>';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Username';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
$handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid_1']['field'] = 'rid';
$handler->display->display_options['filters']['rid_1']['value'] = array(
  7 => '7',
);
$handler->display->display_options['path'] = 'osu-users-management';

/* Display: GB users management */
$handler = $view->new_display('page', 'GB users management', 'page_3');
$handler->display->display_options['display_description'] = 'GB users management';
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  11 => '11',
);
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<a href="admin/people/create">+ Add new Governing Board Member</a>';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Username';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
$handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid_1']['field'] = 'rid';
$handler->display->display_options['filters']['rid_1']['value'] = array(
  15 => '15',
);
$handler->display->display_options['path'] = 'gb-users-management';

$view->save();
$view = new view();
$view->name = 'ef_contract_number';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Contract Number';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Taxonomy term: Contract number */
$handler->display->display_options['fields']['field_ef_contract_number']['id'] = 'field_ef_contract_number';
$handler->display->display_options['fields']['field_ef_contract_number']['table'] = 'field_data_field_ef_contract_number';
$handler->display->display_options['fields']['field_ef_contract_number']['field'] = 'field_ef_contract_number';
$handler->display->display_options['fields']['field_ef_contract_number']['label'] = '';
$handler->display->display_options['fields']['field_ef_contract_number']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_contract_number']['type'] = 'text_plain';
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  'ef_contracts' => 'ef_contracts',
);
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_contracts' => 'ef_contracts',
);

/* Display: Contract Number */
$handler = $view->new_display('attachment', 'Contract Number', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'some';

$view->save();
$view = new view();
$view->name = 'ef_find_content';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Find content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Find content';
$handler->display->display_options['css_class'] = 'view-ef-administration-nodes';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view revisions';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'title' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'type' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'uid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_observatory_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_theme_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_topic_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'language' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'state' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_flag_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'status' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'changed' => array(
    'bef_format' => 'bef_datepicker',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_spotlight_theme_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_unit_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_deliverable_kind_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_quarter_value_1' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_eurwork_issue_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'created' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_report_delivery_date_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'stamp' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_approved_for_payment_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_assign_to_target_id' => array(
    'bef_format' => 'default',
    'slider_options' => array(
      'bef_slider_min' => '0',
      'bef_slider_max' => '99999',
      'bef_slider_step' => '1',
      'bef_slider_animate' => '',
      'bef_slider_orientation' => 'horizontal',
    ),
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_quartely_report_year_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'name_list' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_quarter_report_country_iso2' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_nuts_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'timestamp' => 'title',
  'type' => 'type',
  'field_ef_assign_to' => 'field_ef_assign_to',
  'name' => 'name',
  'state' => 'state',
  'status' => 'status',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '&nbsp;',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_assign_to' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'state' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '&emsp;',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'No content available.';
/* Relationship: Content revision: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'country';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Last edited by';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['element_type'] = 'span';
$handler->display->display_options['fields']['status']['element_class'] = '[status]';
$handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = '';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Theme (field_ef_theme) */
$handler->display->display_options['filters']['field_ef_theme_tid']['id'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['filters']['field_ef_theme_tid']['field'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_theme_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['operator_id'] = 'field_ef_theme_tid_op';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['label'] = 'Theme';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['operator'] = 'field_ef_theme_tid_op';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['identifier'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_theme_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_theme_tid']['vocabulary'] = 'ef_themes';
$handler->display->display_options['filters']['field_ef_theme_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['identifier'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
$handler->display->display_options['filters']['field_ef_topic_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
$handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Flag (field_ef_flag) */
$handler->display->display_options['filters']['field_ef_flag_value']['id'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['table'] = 'field_data_field_ef_flag';
$handler->display->display_options['filters']['field_ef_flag_value']['field'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_flag_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['operator_id'] = 'field_ef_flag_value_op';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['label'] = 'Flag';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['operator'] = 'field_ef_flag_value_op';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['identifier'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Updated date */
$handler->display->display_options['filters']['changed']['id'] = 'changed';
$handler->display->display_options['filters']['changed']['table'] = 'node';
$handler->display->display_options['filters']['changed']['field'] = 'changed';
$handler->display->display_options['filters']['changed']['operator'] = '>=';
$handler->display->display_options['filters']['changed']['group'] = 1;
$handler->display->display_options['filters']['changed']['exposed'] = TRUE;
$handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated after';
$handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
$handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Country: Body (field_ef_country_body) */
$handler->display->display_options['filters']['field_ef_country_body_value']['id'] = 'field_ef_country_body_value';
$handler->display->display_options['filters']['field_ef_country_body_value']['table'] = 'field_data_field_ef_country_body';
$handler->display->display_options['filters']['field_ef_country_body_value']['field'] = 'field_ef_country_body_value';
$handler->display->display_options['filters']['field_ef_country_body_value']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['filters']['field_ef_country_body_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_country_body_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_country_body_value']['expose']['operator_id'] = 'field_ef_country_body_value_op';
$handler->display->display_options['filters']['field_ef_country_body_value']['expose']['label'] = 'Body';
$handler->display->display_options['filters']['field_ef_country_body_value']['expose']['operator'] = 'field_ef_country_body_value_op';
$handler->display->display_options['filters']['field_ef_country_body_value']['expose']['identifier'] = 'field_ef_country_body_value';
$handler->display->display_options['filters']['field_ef_country_body_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'name_list';
$handler->display->display_options['filters']['name_list']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);

/* Display: Find Content with Workflow */
$handler = $view->new_display('page', 'Find Content with Workflow', 'page_1');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'title' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'type' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'uid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_observatory_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_theme_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_topic_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'language' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'state' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_flag_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'status' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'changed' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_spotlight_theme_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_unit_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_deliverable_kind_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_quarter_value_1' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_eurwork_issue_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'created' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_report_delivery_date_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'stamp' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_approved_for_payment_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_assign_to_target_id' => array(
    'bef_format' => 'default',
    'slider_options' => array(
      'bef_slider_min' => '0',
      'bef_slider_max' => '99999',
      'bef_slider_step' => '1',
      'bef_slider_animate' => '',
      'bef_slider_orientation' => 'horizontal',
    ),
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_quartely_report_year_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'name_list' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_quarter_report_country_iso2' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field_ef_nuts_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
  'field__ef_nuts_comp_country_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['content'] = '<div class="view-result-number">Displaying @start - @end of @total</div>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content revision: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'country';
/* Relationship: Workbench Moderation: User */
$handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['relationships']['uid_1']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
/* Relationship: Content: Nuts (field_ef_nuts) */
$handler->display->display_options['relationships']['field_ef_nuts_tid']['id'] = 'field_ef_nuts_tid';
$handler->display->display_options['relationships']['field_ef_nuts_tid']['table'] = 'field_data_field_ef_nuts';
$handler->display->display_options['relationships']['field_ef_nuts_tid']['field'] = 'field_ef_nuts_tid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Assign to author */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Assign to author';
$handler->display->display_options['fields']['php']['label'] = 'Assign to Author';
$handler->display->display_options['fields']['php']['empty'] = 'N/A';
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php

$node = node_load($data->nid);
$vid = $node->vid;
if (isset($node->workbench_moderation[\'current\']->vid) && $node->workbench_moderation[\'current\']->vid != $vid) {
  $node = node_load($nid, $node->workbench_moderation[\'current\']->vid);
}
$mid = $node->field_ef_assign_to_author[\'und\'][0][\'target_id\'];
$author_user = get_user_by_mid($mid);
$user_name = $author_user->name;

print($user_name);

?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Assign to User */
$handler->display->display_options['fields']['field_ef_assign_to_user']['id'] = 'field_ef_assign_to_user';
$handler->display->display_options['fields']['field_ef_assign_to_user']['table'] = 'field_data_field_ef_assign_to_user';
$handler->display->display_options['fields']['field_ef_assign_to_user']['field'] = 'field_ef_assign_to_user';
$handler->display->display_options['fields']['field_ef_assign_to_user']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_assign_to_user']['settings'] = array(
  'link' => 0,
  'colorbox_node_link' => 0,
  'colorbox_node_width' => '600',
  'colorbox_node_height' => '600',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: User: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'users';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['name_1']['label'] = 'Last edited by';
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Revised by';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['state']['empty'] = 'N/A';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['element_type'] = 'span';
$handler->display->display_options['fields']['status']['element_class'] = '[status]';
$handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_annual_progress_report' => 'ef_annual_progress_report',
  'article' => 'article',
  'page' => 'page',
  'blog' => 'blog',
  'board_member_page' => 'board_member_page',
  'cwb_level_coordination' => 'cwb_level_coordination',
  'cwb_country_info' => 'cwb_country_info',
  'timeline_date' => 'timeline_date',
  'cwb_time_series' => 'cwb_time_series',
  'cwb_series' => 'cwb_series',
  'ef_call_for_tender' => 'ef_call_for_tender',
  'ef_case_study' => 'ef_case_study',
  'case_study_publication' => 'case_study_publication',
  'ef_comparative_analytical_report' => 'ef_comparative_analytical_report',
  'ef_contact_form' => 'ef_contact_form',
  'dvs_survey' => 'dvs_survey',
  'ef_report' => 'ef_report',
  'ef_emire_dictionary' => 'ef_emire_dictionary',
  'ef_erm_regulation' => 'ef_erm_regulation',
  'erm_support_instrument' => 'erm_support_instrument',
  'ef_event' => 'ef_event',
  'ef_factsheet' => 'ef_factsheet',
  'ef_ic_quarterly_report' => 'ef_ic_quarterly_report',
  'ef_ir_dictionary' => 'ef_ir_dictionary',
  'ef_input_to_erm' => 'ef_input_to_erm',
  'ef_national_contribution' => 'ef_national_contribution',
  'ef_network_quarterly_report' => 'ef_network_quarterly_report',
  'ef_news' => 'ef_news',
  'panel' => 'panel',
  'ef_photo_gallery' => 'ef_photo_gallery',
  'presentation' => 'presentation',
  'ef_project' => 'ef_project',
  'ef_publication' => 'ef_publication',
  'ef_quarterly_report' => 'ef_quarterly_report',
  'ef_regulation' => 'ef_regulation',
  'ef_restructuring_in_smes' => 'ef_restructuring_in_smes',
  'ssi_services' => 'ssi_services',
  'simplenews' => 'simplenews',
  'ef_spotlight_entry' => 'ef_spotlight_entry',
  'ef_support_instrument' => 'ef_support_instrument',
  'ef_survey' => 'ef_survey',
  'ef_vacancy' => 'ef_vacancy',
  'ef_video' => 'ef_video',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
  17 => 0,
  18 => 0,
);
$handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['identifier'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
$handler->display->display_options['filters']['field_ef_topic_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
$handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['group'] = 1;
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
$handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Flag (field_ef_flag) */
$handler->display->display_options['filters']['field_ef_flag_value']['id'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['table'] = 'field_data_field_ef_flag';
$handler->display->display_options['filters']['field_ef_flag_value']['field'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_flag_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['operator_id'] = 'field_ef_flag_value_op';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['label'] = 'Flag';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['operator'] = 'field_ef_flag_value_op';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['identifier'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Updated date */
$handler->display->display_options['filters']['changed']['id'] = 'changed';
$handler->display->display_options['filters']['changed']['table'] = 'node';
$handler->display->display_options['filters']['changed']['field'] = 'changed';
$handler->display->display_options['filters']['changed']['operator'] = '>=';
$handler->display->display_options['filters']['changed']['group'] = 1;
$handler->display->display_options['filters']['changed']['exposed'] = TRUE;
$handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated after';
$handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
$handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
$handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Spotlight Theme (field_ef_spotlight_theme) */
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['id'] = 'field_ef_spotlight_theme_tid';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['table'] = 'field_data_field_ef_spotlight_theme';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['field'] = 'field_ef_spotlight_theme_tid';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['operator_id'] = 'field_ef_spotlight_theme_tid_op';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['label'] = 'Spotlight Theme';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['operator'] = 'field_ef_spotlight_theme_tid_op';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['identifier'] = 'field_ef_spotlight_theme_tid';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['vocabulary'] = 'ef_spotlight_themes';
/* Filter criterion: Content: Unit (field_ef_unit) */
$handler->display->display_options['filters']['field_ef_unit_tid']['id'] = 'field_ef_unit_tid';
$handler->display->display_options['filters']['field_ef_unit_tid']['table'] = 'field_data_field_ef_unit';
$handler->display->display_options['filters']['field_ef_unit_tid']['field'] = 'field_ef_unit_tid';
$handler->display->display_options['filters']['field_ef_unit_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_unit_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['operator_id'] = 'field_ef_unit_tid_op';
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['label'] = 'Unit';
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['operator'] = 'field_ef_unit_tid_op';
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['identifier'] = 'field_ef_unit_tid';
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_unit_tid']['vocabulary'] = 'ef_units';
/* Filter criterion: Content: Deliverable kind (field_ef_deliverable_kind) */
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['id'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['table'] = 'field_data_field_ef_deliverable_kind';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['field'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['value'] = 'All';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['operator_id'] = 'field_ef_deliverable_kind_tid_op';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['label'] = 'Deliverable kind';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['operator'] = 'field_ef_deliverable_kind_tid_op';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['identifier'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  14 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  16 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  13 => 0,
  15 => 0,
);
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['vocabulary'] = 'ef_deliverable_kinds';
/* Filter criterion: Content: Quarter (field_ef_quarter) */
$handler->display->display_options['filters']['field_ef_quarter_value_1']['id'] = 'field_ef_quarter_value_1';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['table'] = 'field_data_field_ef_quarter';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['field'] = 'field_ef_quarter_value';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['value'] = array(
  'all' => 'all',
  'Q1' => 'Q1',
  'Q2' => 'Q2',
  'Q3' => 'Q3',
  'Q4' => 'Q4',
);
$handler->display->display_options['filters']['field_ef_quarter_value_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_quarter_value_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['operator_id'] = 'field_ef_quarter_value_1_op';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['label'] = 'Quarter';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['operator'] = 'field_ef_quarter_value_1_op';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['identifier'] = 'field_ef_quarter_value_1';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  14 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  16 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  13 => 0,
  15 => 0,
);
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['reduce'] = TRUE;
/* Filter criterion: Content: EurWORK landing page topics (field_ef_eurwork_issue) */
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['id'] = 'field_ef_eurwork_issue_tid';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['table'] = 'field_data_field_ef_eurwork_issue';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['field'] = 'field_ef_eurwork_issue_tid';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['value'] = '';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['expose']['operator_id'] = 'field_ef_eurwork_issue_tid_op';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['expose']['label'] = 'EurWORK theme';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['expose']['operator'] = 'field_ef_eurwork_issue_tid_op';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['expose']['identifier'] = 'field_ef_eurwork_issue_tid';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_eurwork_issue_tid']['vocabulary'] = 'eurwork_landing_pages';
/* Filter criterion: Content: Post date */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'node';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['operator'] = 'between';
$handler->display->display_options['filters']['created']['group'] = 1;
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['label'] = 'Requested';
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
$handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  14 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  16 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  13 => 0,
  15 => 0,
);
/* Filter criterion: Content: Scheduled record delivery date (field_ef_report_delivery_date) */
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['id'] = 'field_ef_report_delivery_date_value';
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['table'] = 'field_data_field_ef_report_delivery_date';
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['field'] = 'field_ef_report_delivery_date_value';
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['operator'] = 'between';
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['expose']['operator_id'] = 'field_ef_report_delivery_date_value_op';
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['expose']['label'] = 'Scheduled record delivery date ';
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['expose']['operator'] = 'field_ef_report_delivery_date_value_op';
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['expose']['identifier'] = 'field_ef_report_delivery_date_value';
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_report_delivery_date_value']['form_type'] = 'date_popup';
/* Filter criterion: Workbench Moderation: Timestamp */
$handler->display->display_options['filters']['stamp']['id'] = 'stamp';
$handler->display->display_options['filters']['stamp']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['stamp']['field'] = 'stamp';
$handler->display->display_options['filters']['stamp']['operator'] = 'between';
$handler->display->display_options['filters']['stamp']['group'] = 1;
$handler->display->display_options['filters']['stamp']['exposed'] = TRUE;
$handler->display->display_options['filters']['stamp']['expose']['operator_id'] = 'stamp_op';
$handler->display->display_options['filters']['stamp']['expose']['label'] = 'Submitted';
$handler->display->display_options['filters']['stamp']['expose']['operator'] = 'stamp_op';
$handler->display->display_options['filters']['stamp']['expose']['identifier'] = 'stamp';
$handler->display->display_options['filters']['stamp']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Approved for payment (field_ef_approved_for_payment) */
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['id'] = 'field_ef_approved_for_payment_value';
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['table'] = 'field_data_field_ef_approved_for_payment';
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['field'] = 'field_ef_approved_for_payment_value';
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['operator'] = 'between';
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['expose']['operator_id'] = 'field_ef_approved_for_payment_value_op';
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['expose']['label'] = 'Approved for payment';
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['expose']['operator'] = 'field_ef_approved_for_payment_value_op';
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['expose']['identifier'] = 'field_ef_approved_for_payment_value';
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_approved_for_payment_value']['form_type'] = 'date_popup';
/* Filter criterion: Content: Assign to Author (field_ef_assign_to_author) */
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['id'] = 'field_ef_assign_to_author_target_id';
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['table'] = 'field_data_field_ef_assign_to_author';
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['field'] = 'field_ef_assign_to_author_target_id';
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['group'] = 1;
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['expose']['operator_id'] = 'field_ef_assign_to_author_target_id_op';
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['expose']['label'] = 'Assign to Author ';
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['expose']['operator'] = 'field_ef_assign_to_author_target_id_op';
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['expose']['identifier'] = 'field_ef_assign_to_author_target_id';
$handler->display->display_options['filters']['field_ef_assign_to_author_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
  17 => 0,
  18 => 0,
);
/* Filter criterion: Content: Year (field_ef_quartely_report_year) */
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['id'] = 'field_ef_quartely_report_year_value';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['table'] = 'field_data_field_ef_quartely_report_year';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['field'] = 'field_ef_quartely_report_year_value';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['operator_id'] = 'field_ef_quartely_report_year_value_op';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['label'] = 'Year ';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['operator'] = 'field_ef_quartely_report_year_value_op';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['identifier'] = 'field_ef_quartely_report_year_value';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  14 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  16 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  13 => 0,
  15 => 0,
);
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['granularity'] = 'year';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['form_type'] = 'date_popup';
/* Filter criterion: Content:  ef_nuts_comp_country (field__ef_nuts_comp_country) */
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['id'] = 'field__ef_nuts_comp_country_value';
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['table'] = 'field_data_field__ef_nuts_comp_country';
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['field'] = 'field__ef_nuts_comp_country_value';
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['group'] = 1;
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['expose']['operator_id'] = 'field__ef_nuts_comp_country_value_op';
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['expose']['label'] = 'Factsheet Country Nuts';
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['expose']['operator'] = 'field__ef_nuts_comp_country_value_op';
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['expose']['identifier'] = 'field__ef_nuts_comp_country_value';
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field__ef_nuts_comp_country_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => '1',
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['filters']['name_list']['group'] = 2;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['name_list']['expose']['description'] = 'This field doesn\'t involve IC quarterly reports / Network quarterly reports /  Comparative analytic reports / Factsheets.';
$handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'name_list';
$handler->display->display_options['filters']['name_list']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Country (field_ef_quarter_report_country) */
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['id'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['table'] = 'field_data_field_ef_quarter_report_country';
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['field'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['operator'] = 'contains';
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['group'] = 2;
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['expose']['operator_id'] = 'field_ef_quarter_report_country_iso2_op';
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['expose']['label'] = 'Quarterly Reports Country ';
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['expose']['operator'] = 'field_ef_quarter_report_country_iso2_op';
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['expose']['identifier'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['filters']['field_ef_quarter_report_country_iso2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['operator'] = 'not in';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'webform' => 'webform',
);
$handler->display->display_options['path'] = 'find-content';

$view->save();
$view = new view();
$view->name = 'ef_my_to_do_list';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node_revision';
$view->human_name = 'My to-do list';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My to-do list';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view revisions';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'state' => 'state',
  'stamp' => 'stamp',
  'name' => 'name',
  'field_ef_report_delivery_date' => 'field_ef_report_delivery_date',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'field_ef_report_delivery_date';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'state' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'stamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_report_delivery_date' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Revision ID */
$handler->display->display_options['relationships']['vid']['id'] = 'vid';
$handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['vid']['field'] = 'vid';
$handler->display->display_options['relationships']['vid']['ui_name'] = 'Revision ID';
$handler->display->display_options['relationships']['vid']['label'] = 'Revision ID';
/* Relationship: Assigned to */
$handler->display->display_options['relationships']['field_ef_assign_to_target_id']['id'] = 'field_ef_assign_to_target_id';
$handler->display->display_options['relationships']['field_ef_assign_to_target_id']['table'] = 'field_revision_field_ef_assign_to';
$handler->display->display_options['relationships']['field_ef_assign_to_target_id']['field'] = 'field_ef_assign_to_target_id';
$handler->display->display_options['relationships']['field_ef_assign_to_target_id']['ui_name'] = 'Assigned to';
$handler->display->display_options['relationships']['field_ef_assign_to_target_id']['label'] = 'Assigned to';
$handler->display->display_options['relationships']['field_ef_assign_to_target_id']['required'] = TRUE;
/* Relationship: Workbench Moderation: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Workbench Moderation: Timestamp */
$handler->display->display_options['fields']['stamp']['id'] = 'stamp';
$handler->display->display_options['fields']['stamp']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['stamp']['field'] = 'stamp';
$handler->display->display_options['fields']['stamp']['label'] = 'Requested on';
$handler->display->display_options['fields']['stamp']['date_format'] = 'ef_date_format';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Requested by';
/* Field: Content: Scheduled record delivery date */
$handler->display->display_options['fields']['field_ef_report_delivery_date']['id'] = 'field_ef_report_delivery_date';
$handler->display->display_options['fields']['field_ef_report_delivery_date']['table'] = 'field_data_field_ef_report_delivery_date';
$handler->display->display_options['fields']['field_ef_report_delivery_date']['field'] = 'field_ef_report_delivery_date';
$handler->display->display_options['fields']['field_ef_report_delivery_date']['relationship'] = 'vid';
$handler->display->display_options['fields']['field_ef_report_delivery_date']['settings'] = array(
  'format_type' => 'ef_date_format',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Sort criterion: Workbench Moderation: Timestamp */
$handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
$handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
$handler->display->display_options['sorts']['stamp']['order'] = 'DESC';
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['relationship'] = 'field_ef_assign_to_target_id';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['null']['must_not_be'] = TRUE;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  'requested' => 'requested',
  'under_revision_request' => 'under_revision_request',
);
$handler->display->display_options['filters']['state']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'my-todo-list';

$view->save();
$view = new view();
$view->name = 'ef_osu_contract_reporting';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node_revision';
$view->human_name = 'OSU Contract Reporting';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'OSU Contract Reporting';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  13 => '13',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'views_aggregator';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'timestamp' => 'timestamp',
  'title' => 'title',
  'state' => 'state',
  'field_ef_assign_to-revision_id' => 'field_ef_assign_to-revision_id',
  'field_ef_contract-revision_id' => 'field_ef_contract-revision_id',
  'field_ef_deliverable_kind-revision_id' => 'field_ef_deliverable_kind-revision_id',
  'stamp' => 'stamp',
  'vid' => 'vid',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 1,
    'aggr' => array(
      'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'timestamp' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      'views_aggregator_minimum' => 'views_aggregator_minimum',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'state' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_ef_assign_to-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_ef_contract-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'field_ef_deliverable_kind-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'stamp' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'vid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
);
$handler->display->display_options['style_options']['totals_per_page'] = '1';
$handler->display->display_options['style_options']['totals_row_position'] = array(
  1 => 0,
  2 => '2',
);
/* Relationship: Workbench Moderation: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
/* Relationship: Content revision: Content */
$handler->display->display_options['relationships']['vid']['id'] = 'vid';
$handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['vid']['field'] = 'vid';
$handler->display->display_options['relationships']['vid']['label'] = 'Content revision';
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = 'Contract';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'ef_contract_number';
$handler->display->display_options['fields']['view']['display'] = 'attachment_1';
$handler->display->display_options['fields']['view']['arguments'] = '[%field_ef_contract-revision_id]';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content (historical data): Deliverable kind */
$handler->display->display_options['fields']['field_ef_deliverable_kind-revision_id']['id'] = 'field_ef_deliverable_kind-revision_id';
$handler->display->display_options['fields']['field_ef_deliverable_kind-revision_id']['table'] = 'field_revision_field_ef_deliverable_kind';
$handler->display->display_options['fields']['field_ef_deliverable_kind-revision_id']['field'] = 'field_ef_deliverable_kind-revision_id';
$handler->display->display_options['fields']['field_ef_deliverable_kind-revision_id']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['relationship'] = 'nid';
$handler->display->display_options['fields']['created']['label'] = 'Requested on';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
/* Field: Workbench Moderation: Timestamp */
$handler->display->display_options['fields']['stamp']['id'] = 'stamp';
$handler->display->display_options['fields']['stamp']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['stamp']['field'] = 'stamp';
$handler->display->display_options['fields']['stamp']['label'] = 'Submitted on';
$handler->display->display_options['fields']['stamp']['date_format'] = 'short';
/* Field: Content (historical data): Scheduled record delivery date */
$handler->display->display_options['fields']['field_ef_report_delivery_date-revision_id']['id'] = 'field_ef_report_delivery_date-revision_id';
$handler->display->display_options['fields']['field_ef_report_delivery_date-revision_id']['table'] = 'field_revision_field_ef_report_delivery_date';
$handler->display->display_options['fields']['field_ef_report_delivery_date-revision_id']['field'] = 'field_ef_report_delivery_date-revision_id';
$handler->display->display_options['fields']['field_ef_report_delivery_date-revision_id']['label'] = 'Deadline';
$handler->display->display_options['fields']['field_ef_report_delivery_date-revision_id']['settings'] = array(
  'format_type' => 'ef_date_format',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content (historical data): Approved for payment */
$handler->display->display_options['fields']['field_ef_approved_for_payment-revision_id']['id'] = 'field_ef_approved_for_payment-revision_id';
$handler->display->display_options['fields']['field_ef_approved_for_payment-revision_id']['table'] = 'field_revision_field_ef_approved_for_payment';
$handler->display->display_options['fields']['field_ef_approved_for_payment-revision_id']['field'] = 'field_ef_approved_for_payment-revision_id';
$handler->display->display_options['fields']['field_ef_approved_for_payment-revision_id']['settings'] = array(
  'format_type' => 'ef_date_format',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content (historical data): Assign to */
$handler->display->display_options['fields']['field_ef_assign_to-revision_id']['id'] = 'field_ef_assign_to-revision_id';
$handler->display->display_options['fields']['field_ef_assign_to-revision_id']['table'] = 'field_revision_field_ef_assign_to';
$handler->display->display_options['fields']['field_ef_assign_to-revision_id']['field'] = 'field_ef_assign_to-revision_id';
$handler->display->display_options['fields']['field_ef_assign_to-revision_id']['settings'] = array(
  'link' => 0,
);
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['exclude'] = TRUE;
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Content revision: Vid */
$handler->display->display_options['fields']['vid']['id'] = 'vid';
$handler->display->display_options['fields']['vid']['table'] = 'node_revision';
$handler->display->display_options['fields']['vid']['field'] = 'vid';
$handler->display->display_options['fields']['vid']['exclude'] = TRUE;
/* Contextual filter: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['null']['must_not_be'] = TRUE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_national_contribution' => 'ef_national_contribution',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  'min' => '',
  'max' => '',
  'value' => '',
  'submitted' => 'submitted',
);
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['relationship'] = 'nid';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
);
/* Filter criterion: Field: Contract (field_ef_contract) */
$handler->display->display_options['filters']['field_ef_contract_tid']['id'] = 'field_ef_contract_tid';
$handler->display->display_options['filters']['field_ef_contract_tid']['table'] = 'field_data_field_ef_contract';
$handler->display->display_options['filters']['field_ef_contract_tid']['field'] = 'field_ef_contract_tid';
$handler->display->display_options['filters']['field_ef_contract_tid']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_ef_contract_tid']['value'] = '';
$handler->display->display_options['filters']['field_ef_contract_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['operator_id'] = 'field_ef_contract_tid_op';
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['label'] = 'Contract Number';
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['operator'] = 'field_ef_contract_tid_op';
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['identifier'] = 'field_ef_contract_tid';
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
);
$handler->display->display_options['filters']['field_ef_contract_tid']['vocabulary'] = 'ef_contracts';
$handler->display->display_options['filters']['field_ef_contract_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Deliverable kind (field_ef_deliverable_kind) */
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['id'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['table'] = 'field_data_field_ef_deliverable_kind';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['field'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['relationship'] = 'vid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['value'] = '';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['operator_id'] = 'field_ef_deliverable_kind_tid_op';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['label'] = 'Deliverable kind';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['operator'] = 'field_ef_deliverable_kind_tid_op';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['identifier'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
);
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['vocabulary'] = 'ef_deliverable_kinds';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['error_message'] = FALSE;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';

/* Display: OSU Contract Reporting */
$handler = $view->new_display('page', 'OSU Contract Reporting', 'page');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_national_contribution' => 'ef_national_contribution',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['relationship'] = 'nid';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
);
/* Filter criterion: Field: Contract (field_ef_contract) */
$handler->display->display_options['filters']['field_ef_contract_tid']['id'] = 'field_ef_contract_tid';
$handler->display->display_options['filters']['field_ef_contract_tid']['table'] = 'field_data_field_ef_contract';
$handler->display->display_options['filters']['field_ef_contract_tid']['field'] = 'field_ef_contract_tid';
$handler->display->display_options['filters']['field_ef_contract_tid']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_ef_contract_tid']['value'] = '';
$handler->display->display_options['filters']['field_ef_contract_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['operator_id'] = 'field_ef_contract_tid_op';
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['label'] = 'Contract Number';
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['operator'] = 'field_ef_contract_tid_op';
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['identifier'] = 'field_ef_contract_tid';
$handler->display->display_options['filters']['field_ef_contract_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
);
$handler->display->display_options['filters']['field_ef_contract_tid']['vocabulary'] = 'ef_contracts';
$handler->display->display_options['filters']['field_ef_contract_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Deliverable kind (field_ef_deliverable_kind) */
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['id'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['table'] = 'field_data_field_ef_deliverable_kind';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['field'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['operator_id'] = 'field_ef_deliverable_kind_tid_op';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['label'] = 'Deliverable kind';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['operator'] = 'field_ef_deliverable_kind_tid_op';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['identifier'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
  16 => 0,
);
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['reduce_duplicates'] = TRUE;
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['vocabulary'] = 'ef_deliverable_kinds';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['hierarchy'] = 1;
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['error_message'] = FALSE;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['path'] = 'osu-contract-reporting-old';

$view->save();
$view = new view();
$view->name = 'ef_user_lists';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'User lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  7 => '7',
  6 => '6',
  4 => '4',
  5 => '5',
  8 => '8',
  13 => '13',
  9 => '9',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: User: Contracts (field_ef_contracts) */
$handler->display->display_options['relationships']['field_ef_contracts_tid']['id'] = 'field_ef_contracts_tid';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['table'] = 'field_data_field_ef_contracts';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['field'] = 'field_ef_contracts_tid';
$handler->display->display_options['relationships']['field_ef_contracts_tid']['required'] = TRUE;
/* Field: User: First Name */
$handler->display->display_options['fields']['field_ef_first_name']['id'] = 'field_ef_first_name';
$handler->display->display_options['fields']['field_ef_first_name']['table'] = 'field_data_field_ef_first_name';
$handler->display->display_options['fields']['field_ef_first_name']['field'] = 'field_ef_first_name';
$handler->display->display_options['fields']['field_ef_first_name']['label'] = '';
$handler->display->display_options['fields']['field_ef_first_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_first_name']['hide_empty'] = TRUE;
/* Field: User: Last Name */
$handler->display->display_options['fields']['field_ef_last_name']['id'] = 'field_ef_last_name';
$handler->display->display_options['fields']['field_ef_last_name']['table'] = 'field_data_field_ef_last_name';
$handler->display->display_options['fields']['field_ef_last_name']['field'] = 'field_ef_last_name';
$handler->display->display_options['fields']['field_ef_last_name']['label'] = '';
$handler->display->display_options['fields']['field_ef_last_name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_last_name']['alter']['text'] = '[field_ef_last_name] -';
$handler->display->display_options['fields']['field_ef_last_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_last_name']['hide_empty'] = TRUE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
/* Sort criterion: User: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'users';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['value'] = array(
  7 => '7',
);

/* Display: Authors Entity Reference */
$handler = $view->new_display('entityreference', 'Authors Entity Reference', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'uid' => 'uid',
  'name' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_first_name' => 'field_ef_first_name',
  'field_ef_last_name' => 'field_ef_last_name',
  'name' => 'name',
);
$handler->display->display_options['row_options']['separator'] = ' ';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;

$view->save();
}
