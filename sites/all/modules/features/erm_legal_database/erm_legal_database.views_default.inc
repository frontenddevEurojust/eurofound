<?php
/**
 * @file
 * erm_legal_database.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erm_legal_database_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'erm_regulations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ERM regulations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regulations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    4 => '4',
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'name_list' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
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
    'field_ef_regulation_phase_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
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
    'field_ef_regulation_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
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
    'field_ef_regulation_funding_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
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
    'field_ef_regulation_involvements_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
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
    'field_ef_regulation_thresholds_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'mediatable';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_english_name_erm_reg' => 'field_english_name_erm_reg',
    'field_native_name_erm_reg' => 'field_native_name_erm_reg',
    'field_country_erm_reg' => 'field_country_erm_reg',
    'field_phase_erm_reg' => 'field_phase_erm_reg',
    'field_type_phase_erm_reg' => 'field_type_phase_erm_reg',
    'field_fundings_erm_reg' => 'field_fundings_erm_reg',
    'field_involved_actors_erm_reg' => 'field_involved_actors_erm_reg',
    'field_involvement_other_erm_reg' => 'field_involvement_other_erm_reg',
    'field_affected_employees_erm_reg' => 'field_affected_employees_erm_reg',
    'field_company_size_erm_reg' => 'field_company_size_erm_reg',
    'published_at' => 'published_at',
    'state' => 'state',
    'status' => 'status',
    'views_bulk_operations' => 'views_bulk_operations',
    'delete_node' => 'delete_node',
    'edit_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_english_name_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_native_name_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_country_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_phase_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_type_phase_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_fundings_erm_reg' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'persist',
    ),
    'field_involved_actors_erm_reg' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'persist',
    ),
    'field_involvement_other_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'persist',
    ),
    'field_affected_employees_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'persist',
    ),
    'field_company_size_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'persist',
    ),
    'published_at' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total items found';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
print(l(t(\'Add Regulation\'), \'node/add/ef-regulation\'));
?>';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Content: Country (field_ef_country) */
  $handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
  /* Field: Content: English name */
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['id'] = 'field_ef_regulation_english_name';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['table'] = 'field_data_field_ef_regulation_english_name';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['field'] = 'field_ef_regulation_english_name';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['label'] = '';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'English Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_ef_regulation_english_name]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_ef_country']['id'] = 'field_ef_country';
  $handler->display->display_options['fields']['field_ef_country']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['fields']['field_ef_country']['field'] = 'field_ef_country';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_ef_regulation_type']['id'] = 'field_ef_regulation_type';
  $handler->display->display_options['fields']['field_ef_regulation_type']['table'] = 'field_data_field_ef_regulation_type';
  $handler->display->display_options['fields']['field_ef_regulation_type']['field'] = 'field_ef_regulation_type';
  $handler->display->display_options['fields']['field_ef_regulation_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_regulation_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Cost covered by */
  $handler->display->display_options['fields']['field_ef_regulation_funding']['id'] = 'field_ef_regulation_funding';
  $handler->display->display_options['fields']['field_ef_regulation_funding']['table'] = 'field_data_field_ef_regulation_funding';
  $handler->display->display_options['fields']['field_ef_regulation_funding']['field'] = 'field_ef_regulation_funding';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ef_erm_regulation' => 'ef_erm_regulation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search name */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['ui_name'] = 'Search name';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Search english name';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'ef_search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_ef_regulation_english_name' => 'field_ef_regulation_english_name',
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
  /* Filter criterion: Field: Phase (field_ef_regulation_phase) */
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['id'] = 'field_ef_regulation_phase_tid';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['table'] = 'field_data_field_ef_regulation_phase';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['field'] = 'field_ef_regulation_phase_tid';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['expose']['operator_id'] = 'field_ef_regulation_phase_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['expose']['label'] = 'Phases';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['expose']['operator'] = 'field_ef_regulation_phase_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['expose']['identifier'] = 'field_ef_regulation_phase_tid';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['vocabulary'] = 'ef_regulation_phases';
  $handler->display->display_options['filters']['field_ef_regulation_phase_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Type (field_ef_regulation_type) */
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['id'] = 'field_ef_regulation_type_tid';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['table'] = 'field_data_field_ef_regulation_type';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['field'] = 'field_ef_regulation_type_tid';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['expose']['operator_id'] = 'field_ef_regulation_type_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['expose']['label'] = 'Types';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['expose']['operator'] = 'field_ef_regulation_type_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['expose']['identifier'] = 'field_ef_regulation_type_tid';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['vocabulary'] = 'ef_regulation_types';
  $handler->display->display_options['filters']['field_ef_regulation_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Cost covered by (field_ef_regulation_funding) */
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['id'] = 'field_ef_regulation_funding_tid';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['table'] = 'field_data_field_ef_regulation_funding';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['field'] = 'field_ef_regulation_funding_tid';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['expose']['operator_id'] = 'field_ef_regulation_funding_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['expose']['label'] = 'Fundings';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['expose']['operator'] = 'field_ef_regulation_funding_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['expose']['identifier'] = 'field_ef_regulation_funding_tid';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['vocabulary'] = 'ef_regulation_fundings';
  $handler->display->display_options['filters']['field_ef_regulation_funding_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Involved actors (field_ef_regulation_involvements) */
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['id'] = 'field_ef_regulation_involvements_tid';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['table'] = 'field_data_field_ef_regulation_involvements';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['field'] = 'field_ef_regulation_involvements_tid';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['expose']['operator_id'] = 'field_ef_regulation_involvements_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['expose']['label'] = 'Involvements';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['expose']['operator'] = 'field_ef_regulation_involvements_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['expose']['identifier'] = 'field_ef_regulation_involvements_tid';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['vocabulary'] = 'ef_regulation_involvements';
  $handler->display->display_options['filters']['field_ef_regulation_involvements_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Thresholds (field_ef_regulation_thresholds) */
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['id'] = 'field_ef_regulation_thresholds_tid';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['table'] = 'field_data_field_ef_regulation_thresholds';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['field'] = 'field_ef_regulation_thresholds_tid';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['expose']['operator_id'] = 'field_ef_regulation_thresholds_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['expose']['label'] = 'Thresholds';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['expose']['operator'] = 'field_ef_regulation_thresholds_tid_op';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['expose']['identifier'] = 'field_ef_regulation_thresholds_tid';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['vocabulary'] = 'ef_regulation_thresholds';
  $handler->display->display_options['filters']['field_ef_regulation_thresholds_tid']['error_message'] = FALSE;

  /* Display: ERM Front-end */
  $handler = $view->new_display('page', 'ERM Front-end', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restructuring related legislation';
  $handler->display->display_options['display_description'] = 'ERM qualitative databases front end';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'title_field_value' => array(
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
    'field_country_erm_reg_tid_selective' => array(
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
    'field_phase_erm_reg_value_selective' => array(
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
    'field_type_phase_erm_reg_tid_selective' => array(
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
    'field_fundings_erm_reg_tid_selective' => array(
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
    'field_involved_actors_erm_reg_tid_selective' => array(
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
    'field_company_size_erm_reg_value' => array(
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
    'field_affected_employees_erm_reg_value' => array(
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'mediatable';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_country_erm_reg' => 'field_country_erm_reg',
    'field_type_phase_erm_reg' => 'field_type_phase_erm_reg',
    'field_phase_erm_reg' => 'field_phase_erm_reg',
    'field_native_name_erm_reg' => 'field_native_name_erm_reg',
    'field_english_name_erm_reg' => 'field_english_name_erm_reg',
    'field_involved_actors_erm_reg' => 'field_involved_actors_erm_reg',
    'field_involvement_other_erm_reg' => 'field_involvement_other_erm_reg',
    'field_erm_fundings_erm_reg' => 'field_erm_fundings_erm_reg',
    'field_affected_employees_erm_reg' => 'field_affected_employees_erm_reg',
    'field_company_size_erm_reg' => 'field_company_size_erm_reg',
    'published_at' => 'published_at',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_country_erm_reg' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_type_phase_erm_reg' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_phase_erm_reg' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_native_name_erm_reg' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_english_name_erm_reg' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_involved_actors_erm_reg' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'essential',
    ),
    'field_involvement_other_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'essential',
    ),
    'field_erm_fundings_erm_reg' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_affected_employees_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'essential',
    ),
    'field_company_size_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'essential',
    ),
    'published_at' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Introduction */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>Eurofound’s ERM database on restructuring related legal regulations provides information on about 370 regulations in the Member States of the European Union and Norway which are explicitly or implicitly linked to anticipating and managing change. The database covers statutory rules, only, and does not include collective agreements or company-level initiatives. The regulations are described in terms of their content, thresholds, involved actors and who covers the cost (if applicable). The aim is to provide an easy possibility of a cross-national comparison of the main features of restructuring related legislation.

<p>Eurofound aims to keep this information up to date and accurate. If errors are brought to our attention, we will try to correct them. However, Eurofound accepts no responsibility or liability whatsoever with regard to the information in this database.
This information is:

<ul>
<li>of a general nature only and is not intended to address the specific circumstances of any particular individual or entity;</li>
<li>not necessarily comprehensive, complete, accurate or up to date;</li>
<li>sometimes linked to external sites over which Eurofound services have no control and for which Eurofound assumes no responsibility;</li>
<li>not professional or legal advice (if specific advice is needed, a suitably qualified professional should be consulted).</li>
</ul>
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total items found';
  /* Header: Help */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['ui_name'] = 'Help';
  $handler->display->display_options['header']['area_1']['empty'] = TRUE;
  $handler->display->display_options['header']['area_1']['content'] = '
<div class="filter-description-more">
  <span>Help</span>
</div>
<div class="filter-description">
  <h4>Make your selection by using the filters:</h4>
    <ul>
	
	<li><span>Country</span>EU 28 and Norway</li>
	<li><span>Title</span>the title is made up of the country name and type, for example: Austria: working time flexibility</li>
	<li><span>Phase</span>Either anticipation or management
		<ul>
			<li><span>Anticipation</span>refers to activities that help to prepare workers or companies for change.</li>
			<li><span>Management</span>covers activities required to handle a current restructuring event while minimising social costs. It refers to the steps involved in implementing an organisational change process.</li>
		</ul>
	</li>
	<li><span>Type</span>the range includes, for example, provisions for collective dismissal, information/consultation obligations, notice periods and severance payments, training obligations for employers and employees and regulations concerning working time flexibility</li>
	<li><span>Threshold</span>whether the regulation is obligatory in all circumstances or only for companies over a certain size or cases affecting a certain number of workers</li>
	<li><span>Cost covered by</span>
		<ul>
			<li>no specific additional costs are involved</li>
			<li>costs covered by national or regional governments</li>
			<li>cost covered by companies in general or the specific employer undergoing restructuring</li>
			<li>cost covered by employees</li>
		</ul>
	</li>
	<li><span>Involved actors</span>including regional or local government, works councils, employers’ organisations, trade union or public employment services. The national government, as legislator, is assumed to be involved in all regulations so is not included as a filter option.</li>
					
  </ul>
</div>';
  $handler->display->display_options['header']['area_1']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country (field_ef_country) */
  $handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
  /* Relationship: Content: Type (field_type_phase_erm_reg) */
  $handler->display->display_options['relationships']['field_type_phase_erm_reg_tid']['id'] = 'field_type_phase_erm_reg_tid';
  $handler->display->display_options['relationships']['field_type_phase_erm_reg_tid']['table'] = 'field_data_field_type_phase_erm_reg';
  $handler->display->display_options['relationships']['field_type_phase_erm_reg_tid']['field'] = 'field_type_phase_erm_reg_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Country - Selective */
  $handler->display->display_options['fields']['field_country_erm_reg']['id'] = 'field_country_erm_reg';
  $handler->display->display_options['fields']['field_country_erm_reg']['table'] = 'field_data_field_country_erm_reg';
  $handler->display->display_options['fields']['field_country_erm_reg']['field'] = 'field_country_erm_reg';
  $handler->display->display_options['fields']['field_country_erm_reg']['ui_name'] = 'Country - Selective';
  $handler->display->display_options['fields']['field_country_erm_reg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Type - selective */
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['id'] = 'field_type_phase_erm_reg';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['table'] = 'field_data_field_type_phase_erm_reg';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['field'] = 'field_type_phase_erm_reg';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['ui_name'] = 'Type - selective';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Phase - selective */
  $handler->display->display_options['fields']['field_phase_erm_reg']['id'] = 'field_phase_erm_reg';
  $handler->display->display_options['fields']['field_phase_erm_reg']['table'] = 'field_data_field_phase_erm_reg';
  $handler->display->display_options['fields']['field_phase_erm_reg']['field'] = 'field_phase_erm_reg';
  $handler->display->display_options['fields']['field_phase_erm_reg']['ui_name'] = 'Phase - selective';
  $handler->display->display_options['fields']['field_phase_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phase_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Native name */
  $handler->display->display_options['fields']['field_native_name_erm_reg']['id'] = 'field_native_name_erm_reg';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['table'] = 'field_data_field_native_name_erm_reg';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['field'] = 'field_native_name_erm_reg';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['ui_name'] = 'Native name';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: English name */
  $handler->display->display_options['fields']['field_english_name_erm_reg']['id'] = 'field_english_name_erm_reg';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['table'] = 'field_data_field_english_name_erm_reg';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['field'] = 'field_english_name_erm_reg';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['ui_name'] = 'English name';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Involved actors - selective */
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['id'] = 'field_involved_actors_erm_reg';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['table'] = 'field_data_field_involved_actors_erm_reg';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['field'] = 'field_involved_actors_erm_reg';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['ui_name'] = 'Involved actors - selective';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['delta_offset'] = '0';
  /* Field: Content: Involvement other */
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['id'] = 'field_involvement_other_erm_reg';
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['table'] = 'field_data_field_involvement_other_erm_reg';
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['field'] = 'field_involvement_other_erm_reg';
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Cost covered by - selective */
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['id'] = 'field_erm_fundings_erm_reg';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['table'] = 'field_data_field_erm_fundings_erm_reg';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['field'] = 'field_erm_fundings_erm_reg';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['ui_name'] = 'Cost covered by - selective';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['empty'] = 'Not applicable';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['delta_offset'] = '0';
  /* Field: Content: Affected employees */
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['id'] = 'field_affected_employees_erm_reg';
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['table'] = 'field_data_field_affected_employees_erm_reg';
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['field'] = 'field_affected_employees_erm_reg';
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Company size */
  $handler->display->display_options['fields']['field_company_size_erm_reg']['id'] = 'field_company_size_erm_reg';
  $handler->display->display_options['fields']['field_company_size_erm_reg']['table'] = 'field_data_field_company_size_erm_reg';
  $handler->display->display_options['fields']['field_company_size_erm_reg']['field'] = 'field_company_size_erm_reg';
  $handler->display->display_options['fields']['field_company_size_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_size_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'ef_minimal';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ef_erm_regulation' => 'ef_erm_regulation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'word';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Country - Selective */
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['id'] = 'field_country_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['table'] = 'field_data_field_country_erm_reg';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['field'] = 'field_country_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['ui_name'] = 'Country - Selective';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['identifier'] = 'field_country_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Phase - selective */
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['id'] = 'field_phase_erm_reg_value_selective';
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['table'] = 'field_data_field_phase_erm_reg';
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['field'] = 'field_phase_erm_reg_value_selective';
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['ui_name'] = 'Phase - selective';
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['expose']['label'] = 'Phase';
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['expose']['identifier'] = 'field_phase_erm_reg_value_selective';
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_phase_erm_reg_value_selective']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Type - selective */
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['id'] = 'field_type_phase_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['table'] = 'field_data_field_type_phase_erm_reg';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['field'] = 'field_type_phase_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['ui_name'] = 'Type - selective';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['identifier'] = 'field_type_phase_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Involved actors - selective */
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['id'] = 'field_involved_actors_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['table'] = 'field_data_field_involved_actors_erm_reg';
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['field'] = 'field_involved_actors_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['ui_name'] = 'Involved actors - selective';
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['expose']['label'] = 'Involved actors';
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['expose']['identifier'] = 'field_involved_actors_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_involved_actors_erm_reg_tid_selective']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Cost covered by - selective */
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['id'] = 'field_erm_fundings_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['table'] = 'field_data_field_erm_fundings_erm_reg';
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['field'] = 'field_erm_fundings_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['ui_name'] = 'Cost covered by - selective';
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['expose']['label'] = 'Cost covered by';
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['expose']['identifier'] = 'field_erm_fundings_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_erm_fundings_erm_reg_tid_selective']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Company size (field_company_size_erm_reg) */
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['id'] = 'field_company_size_erm_reg_value';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['table'] = 'field_data_field_company_size_erm_reg';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['field'] = 'field_company_size_erm_reg_value';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['group'] = 2;
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['expose']['operator_id'] = 'field_company_size_erm_reg_value_op';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['expose']['label'] = 'Company size (field_company_size_erm_reg)';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['expose']['operator'] = 'field_company_size_erm_reg_value_op';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['expose']['identifier'] = 'field_company_size_erm_reg_value';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['group_info']['label'] = 'Company size';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['group_info']['identifier'] = 'field_company_size_erm_reg_value';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_company_size_erm_reg_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Applicable to all companies',
      'operator' => 'not empty',
      'value' => 'NOT NULL',
    ),
    2 => array(
      'title' => 'Applicable to companies over a certain size',
      'operator' => 'empty',
      'value' => 'NULL',
    ),
  );
  /* Filter criterion: Content: Affected employees (field_affected_employees_erm_reg) */
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['id'] = 'field_affected_employees_erm_reg_value';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['table'] = 'field_data_field_affected_employees_erm_reg';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['field'] = 'field_affected_employees_erm_reg_value';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['group'] = 2;
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['expose']['operator_id'] = 'field_affected_employees_erm_reg_value_op';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['expose']['label'] = 'Affected employees (field_affected_employees_erm_reg)';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['expose']['operator'] = 'field_affected_employees_erm_reg_value_op';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['expose']['identifier'] = 'field_affected_employees_erm_reg_value';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['group_info']['label'] = 'Affected employees';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['group_info']['identifier'] = 'field_affected_employees_erm_reg_value';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_affected_employees_erm_reg_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Applicable in all cases',
      'operator' => 'not empty',
      'value' => 'NOT NULL',
    ),
    2 => array(
      'title' => 'Applicable if a certain number of employees are affected',
      'operator' => 'empty',
      'value' => 'NULL',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  $handler->display->display_options['path'] = 'observatories/emcc/erm/legislation';
  $handler->display->display_options['menu']['title'] = 'Regulations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: ERM Back-end */
  $handler = $view->new_display('page', 'ERM Back-end', 'page_admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Restructuring related legislation';
  $handler->display->display_options['display_description'] = 'ERM qualitative databases back end';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
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
    'nid' => array(
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
    'field_native_name_erm_reg_value' => array(
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
    'field_english_name_erm_reg_value' => array(
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
    'title_field_value' => array(
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
    'field_country_erm_reg_tid_selective' => array(
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
    'field_type_phase_erm_reg_tid_selective' => array(
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
    'state_selective' => array(
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
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'mediatable';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title_field' => 'title_field',
    'field_english_name_erm_reg' => 'field_english_name_erm_reg',
    'field_native_name_erm_reg' => 'field_native_name_erm_reg',
    'field_country_erm_reg' => 'field_country_erm_reg',
    'field_phase_erm_reg' => 'field_phase_erm_reg',
    'field_type_phase_erm_reg' => 'field_type_phase_erm_reg',
    'field_involved_actors_erm_reg' => 'field_involved_actors_erm_reg',
    'field_involvement_other_erm_reg' => 'field_involvement_other_erm_reg',
    'field_erm_fundings_erm_reg' => 'field_erm_fundings_erm_reg',
    'field_affected_employees_erm_reg' => 'field_affected_employees_erm_reg',
    'field_company_size_erm_reg' => 'field_company_size_erm_reg',
    'published_at' => 'published_at',
    'name' => 'name',
    'field_assign_to_erm_reg' => 'field_assign_to_erm_reg',
    'changed' => 'changed',
    'state' => 'state',
    'status' => 'status',
    'edit_node' => 'edit_node',
    'publishcontent' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_english_name_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_native_name_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_country_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_phase_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_type_phase_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_involved_actors_erm_reg' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_involvement_other_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'essential',
    ),
    'field_erm_fundings_erm_reg' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_affected_employees_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'essential',
    ),
    'field_company_size_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'essential',
    ),
    'published_at' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_assign_to_erm_reg' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => 'persist',
    ),
    'publishcontent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Add new one */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'Add new one';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php global $base_root; ?>
<div id="create-new-erm-reg">
  <span class="add-new-erm-reg">
    <a href="<?php print $base_root; ?>/node/add/ef-erm-regulation">Add new content</a>
  </span>
</div>
';
  /* Header: Introduction */
  $handler->display->display_options['header']['php_1']['id'] = 'php_1';
  $handler->display->display_options['header']['php_1']['table'] = 'views';
  $handler->display->display_options['header']['php_1']['field'] = 'php';
  $handler->display->display_options['header']['php_1']['ui_name'] = 'Introduction';
  $handler->display->display_options['header']['php_1']['empty'] = TRUE;
  $handler->display->display_options['header']['php_1']['php_output'] = '<?php global $user; ?>
<div class="intro">

	<?php if(in_array(\'authenticated user\', $user->roles)): ?>
		
		<p>Eurofound’s ERM database on restructuring related legal regulations provides information on about 370 regulations in the Member States of the European Union and Norway which are explicitly or implicitly linked to anticipating and managing change. The database covers statutory rules, only, and does not include collective agreements or company-level initiatives. The regulations are described in terms of their content, thresholds, involved actors and who covers the cost (if applicable). The aim is to provide an easy possibility of a cross-national comparison of the main features of restructuring related legislation.

	<?php else: ?>
		
		<p>Eurofound’s ERM database on restructuring related legal regulations provides information on about 370 regulations in the Member States of the European Union and Norway which are explicitly or implicitly linked to anticipating and managing change. The database covers statutory rules, only, and does not include collective agreements or company-level initiatives. The regulations are described in terms of their content, thresholds, involved actors and who covers the cost (if applicable). The aim is to provide an easy possibility of a cross-national comparison of the main features of restructuring related legislation.

		<p>Eurofound aims to keep this information up to date and accurate. If errors are brought to our attention, we will try to correct them. However, Eurofound accepts no responsibility or liability whatsoever with regard to the information in this database.
		This information is:

		<ul>
			<li>of a general nature only and is not intended to address the specific circumstances of any particular individual or entity;</li>
			<li>not necessarily comprehensive, complete, accurate or up to date;</li>
			<li>sometimes linked to external sites over which Eurofound services have no control and for which Eurofound assumes no responsibility;</li>
			<li>not professional or legal advice (if specific advice is needed, a suitably qualified professional should be consulted).</li>
		</ul>

	<?php endif; ?>	

</div>';
  /* Header: Help */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['ui_name'] = 'Help';
  $handler->display->display_options['header']['area_1']['empty'] = TRUE;
  $handler->display->display_options['header']['area_1']['content'] = '<div class="filter-description-more">
  <span>Help</span>
</div>
<div class="filter-description">
  <h4>Make your selection by using the filters:</h4>
    <ul>
	
	<li><span>Identifier</span>the numerical code used as unique identifier in the CMS</li>
	<li><span>Country</span>EU 28 and Norway</li>
	<li><span>Title</span>the title is made up of the country name and type, for example: Austria: working time flexibility</li>
	<li><span>Phase</span>Either anticipation or management
		<ul>
			<li><span>Anticipation</span>refers to activities that help to prepare workers or companies for change.</li>
			<li><span>Management</span>covers activities required to handle a current restructuring event while minimising social costs. It refers to the steps involved in implementing an organisational change process.</li>
		</ul>
	</li>
	<li><span>Type</span>the range includes, for example, provisions for collective dismissal, information/consultation obligations, notice periods and severance payments, training obligations for employers and employees and regulations concerning working time flexibility</li>
	<li><span>Threshold</span>whether the regulation is obligatory in all circumstances or only for companies over a certain size or cases affecting a certain number of workers</li>
	<li><span>Cost covered by</span>
		<ul>
			<li>no specific additional costs are involved</li>
			<li>costs covered by national or regional governments</li>
			<li>cost covered by companies in general or the specific employer undergoing restructuring</li>
			<li>cost covered by employees</li>
		</ul>
	</li>
	<li><span>Involved actors</span>including regional or local government, works councils, employers’ organisations, trade union or public employment services. The national government, as legislator, is assumed to be involved in all regulations so is not included as a filter option.</li>
					
  </ul>
</div>';
  $handler->display->display_options['header']['area_1']['format'] = 'filtered_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="erm-summary-results">@total items found</div>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country (field_ef_country) */
  $handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
  /* Relationship: Content: Type (field_type_phase_erm_reg) */
  $handler->display->display_options['relationships']['field_type_phase_erm_reg_tid']['id'] = 'field_type_phase_erm_reg_tid';
  $handler->display->display_options['relationships']['field_type_phase_erm_reg_tid']['table'] = 'field_data_field_type_phase_erm_reg';
  $handler->display->display_options['relationships']['field_type_phase_erm_reg_tid']['field'] = 'field_type_phase_erm_reg_tid';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::nodequeue_add_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::clone_action_clone' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_convert_convert_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::scs_views_create_newsletter_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::revisioning_delete_archived_action' => array(
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
      'override_label' => 0,
      'label' => '',
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
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Assign to',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'ef_erm_regulation::field_assign_to_erm_reg' => 'ef_erm_regulation::field_assign_to_erm_reg',
        ),
      ),
    ),
    'action::node_export_drupal_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::revisioning_publish_latest_revision_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::nodequeue_remove_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::scheduler_remove_publish_date_component' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::scheduler_remove_unpublish_date_component' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::scheduler_set_publish_date_component' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::scheduler_set_unpublish_date_component' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::custom_pub_off_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::custom_pub_on_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Id';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: English name */
  $handler->display->display_options['fields']['field_english_name_erm_reg']['id'] = 'field_english_name_erm_reg';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['table'] = 'field_data_field_english_name_erm_reg';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['field'] = 'field_english_name_erm_reg';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['ui_name'] = 'English name';
  $handler->display->display_options['fields']['field_english_name_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Native name */
  $handler->display->display_options['fields']['field_native_name_erm_reg']['id'] = 'field_native_name_erm_reg';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['table'] = 'field_data_field_native_name_erm_reg';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['field'] = 'field_native_name_erm_reg';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['ui_name'] = 'Native name';
  $handler->display->display_options['fields']['field_native_name_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Country - Selective */
  $handler->display->display_options['fields']['field_country_erm_reg']['id'] = 'field_country_erm_reg';
  $handler->display->display_options['fields']['field_country_erm_reg']['table'] = 'field_data_field_country_erm_reg';
  $handler->display->display_options['fields']['field_country_erm_reg']['field'] = 'field_country_erm_reg';
  $handler->display->display_options['fields']['field_country_erm_reg']['ui_name'] = 'Country - Selective';
  $handler->display->display_options['fields']['field_country_erm_reg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Phase - selective */
  $handler->display->display_options['fields']['field_phase_erm_reg']['id'] = 'field_phase_erm_reg';
  $handler->display->display_options['fields']['field_phase_erm_reg']['table'] = 'field_data_field_phase_erm_reg';
  $handler->display->display_options['fields']['field_phase_erm_reg']['field'] = 'field_phase_erm_reg';
  $handler->display->display_options['fields']['field_phase_erm_reg']['ui_name'] = 'Phase - selective';
  $handler->display->display_options['fields']['field_phase_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phase_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Type - selective */
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['id'] = 'field_type_phase_erm_reg';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['table'] = 'field_data_field_type_phase_erm_reg';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['field'] = 'field_type_phase_erm_reg';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['ui_name'] = 'Type - selective';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_type_phase_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Involved actors - selective */
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['id'] = 'field_involved_actors_erm_reg';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['table'] = 'field_data_field_involved_actors_erm_reg';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['field'] = 'field_involved_actors_erm_reg';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['ui_name'] = 'Involved actors - selective';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['empty'] = 'Not applicable';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_involved_actors_erm_reg']['delta_offset'] = '0';
  /* Field: Content: Involvement other */
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['id'] = 'field_involvement_other_erm_reg';
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['table'] = 'field_data_field_involvement_other_erm_reg';
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['field'] = 'field_involvement_other_erm_reg';
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_involvement_other_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Cost covered by - selective */
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['id'] = 'field_erm_fundings_erm_reg';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['table'] = 'field_data_field_erm_fundings_erm_reg';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['field'] = 'field_erm_fundings_erm_reg';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['ui_name'] = 'Cost covered by - selective';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['empty'] = 'Not applicable';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_erm_fundings_erm_reg']['delta_offset'] = '0';
  /* Field: Content: Affected employees */
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['id'] = 'field_affected_employees_erm_reg';
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['table'] = 'field_data_field_affected_employees_erm_reg';
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['field'] = 'field_affected_employees_erm_reg';
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_affected_employees_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Company size */
  $handler->display->display_options['fields']['field_company_size_erm_reg']['id'] = 'field_company_size_erm_reg';
  $handler->display->display_options['fields']['field_company_size_erm_reg']['table'] = 'field_data_field_company_size_erm_reg';
  $handler->display->display_options['fields']['field_company_size_erm_reg']['field'] = 'field_company_size_erm_reg';
  $handler->display->display_options['fields']['field_company_size_erm_reg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_size_erm_reg']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'ef_minimal';
  /* Field: Content: Last edited by */
  $handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
  $handler->display->display_options['fields']['last_editor']['table'] = 'node';
  $handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
  /* Field: Assign to */
  $handler->display->display_options['fields']['field_assign_to_erm_reg']['id'] = 'field_assign_to_erm_reg';
  $handler->display->display_options['fields']['field_assign_to_erm_reg']['table'] = 'field_data_field_assign_to_erm_reg';
  $handler->display->display_options['fields']['field_assign_to_erm_reg']['field'] = 'field_assign_to_erm_reg';
  $handler->display->display_options['fields']['field_assign_to_erm_reg']['ui_name'] = 'Assign to';
  $handler->display->display_options['fields']['field_assign_to_erm_reg']['settings'] = array(
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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_minimal';
  /* Field: State - selective */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['ui_name'] = 'State - selective';
  $handler->display->display_options['fields']['state']['element_class'] = '[state]';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_class'] = '[status]';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Workbench Moderation: Current */
  $handler->display->display_options['fields']['current']['id'] = 'current';
  $handler->display->display_options['fields']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['current']['field'] = 'current';
  $handler->display->display_options['fields']['current']['exclude'] = TRUE;
  $handler->display->display_options['fields']['current']['not'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'hour';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ef_erm_regulation' => 'ef_erm_regulation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  $handler->display->display_options['filters']['current']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'ID';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Native name */
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['id'] = 'field_native_name_erm_reg_value';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['table'] = 'field_data_field_native_name_erm_reg';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['field'] = 'field_native_name_erm_reg_value';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['ui_name'] = 'Native name';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['group'] = 1;
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['expose']['operator_id'] = 'field_native_name_erm_reg_value_op';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['expose']['label'] = 'Native name';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['expose']['operator'] = 'field_native_name_erm_reg_value_op';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['expose']['identifier'] = 'field_native_name_erm_reg_value';
  $handler->display->display_options['filters']['field_native_name_erm_reg_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: English name */
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['id'] = 'field_english_name_erm_reg_value';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['table'] = 'field_data_field_english_name_erm_reg';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['field'] = 'field_english_name_erm_reg_value';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['ui_name'] = 'English name';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['group'] = 1;
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['expose']['operator_id'] = 'field_english_name_erm_reg_value_op';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['expose']['label'] = 'English name';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['expose']['operator'] = 'field_english_name_erm_reg_value_op';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['expose']['identifier'] = 'field_english_name_erm_reg_value';
  $handler->display->display_options['filters']['field_english_name_erm_reg_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'word';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Country - Selective */
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['id'] = 'field_country_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['table'] = 'field_data_field_country_erm_reg';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['field'] = 'field_country_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['ui_name'] = 'Country - Selective';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['identifier'] = 'field_country_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_country_erm_reg_tid_selective']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Type - selective */
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['id'] = 'field_type_phase_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['table'] = 'field_data_field_type_phase_erm_reg';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['field'] = 'field_type_phase_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['ui_name'] = 'Type - selective';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['identifier'] = 'field_type_phase_erm_reg_tid_selective';
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_phase_erm_reg_tid_selective']['expose']['remember_roles'] = array(
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
  /* Filter criterion: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['ui_name'] = 'State';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'requested' => 'requested',
    'submitted_qr' => 'submitted_qr',
    'rejected' => 'rejected',
    'under_revision_request' => 'under_revision_request',
    'published' => 'published',
    'unpublished' => 'unpublished',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Current state';
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
  $handler->display->display_options['filters']['state']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = 'between';
  $handler->display->display_options['filters']['changed']['group'] = 1;
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
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
  $handler->display->display_options['path'] = 'observatories/emcc/erm/legislation/admin';
  $handler->display->display_options['menu']['title'] = 'Regulations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['erm_regulations'] = $view;

  return $export;
}
