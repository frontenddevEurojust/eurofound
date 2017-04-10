<?php
/**
 * @file
 * ef_restructuring.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ef_restructuring_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ef_factsheets_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Factsheets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Factsheets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'combine' => array(
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
    'shs_term_node_tid_depth' => array(
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
    'tid' => array(
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
    'shs_term_node_tid_depth_1' => array(
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
    'field_ef_announcement_date_value' => array(
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '14';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'mediatable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ef_announcement_date' => 'field_ef_announcement_date',
    'field_ef_nuts' => 'field_ef_nuts',
    'title' => 'title',
    'field_ef_type_of_restructuring' => 'field_ef_type_of_restructuring',
    'field_ef_nace' => 'field_ef_nace',
    'field_ef_planned_job_creation' => 'field_ef_planned_job_creation',
    'field_ef_job_reductions_max' => 'field_ef_job_reductions_max',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ef_announcement_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'optional',
    ),
    'field_ef_nuts' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'optional',
    ),
    'field_ef_type_of_restructuring' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'optional',
    ),
    'field_ef_nace' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'optional',
    ),
    'field_ef_planned_job_creation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'optional',
    ),
    'field_ef_job_reductions_max' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'optional',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="view-header-results">@total items found</span>';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = '<span class="view-footer-results">Displaying @start - @end of @total</span>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Announcement Date */
  $handler->display->display_options['fields']['field_ef_announcement_date']['id'] = 'field_ef_announcement_date';
  $handler->display->display_options['fields']['field_ef_announcement_date']['table'] = 'field_data_field_ef_announcement_date';
  $handler->display->display_options['fields']['field_ef_announcement_date']['field'] = 'field_ef_announcement_date';
  $handler->display->display_options['fields']['field_ef_announcement_date']['label'] = 'Announcement date';
  $handler->display->display_options['fields']['field_ef_announcement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_announcement_date']['settings'] = array(
    'format_type' => 'dmy_for_tables',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nuts */
  $handler->display->display_options['fields']['field_ef_nuts']['id'] = 'field_ef_nuts';
  $handler->display->display_options['fields']['field_ef_nuts']['table'] = 'field_data_field_ef_nuts';
  $handler->display->display_options['fields']['field_ef_nuts']['field'] = 'field_ef_nuts';
  $handler->display->display_options['fields']['field_ef_nuts']['label'] = 'Country';
  $handler->display->display_options['fields']['field_ef_nuts']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_nuts']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ef_nuts']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ef_nuts']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ef_nuts']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Company';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type of Restructuring */
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['id'] = 'field_ef_type_of_restructuring';
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['table'] = 'field_data_field_ef_type_of_restructuring';
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['field'] = 'field_ef_type_of_restructuring';
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['label'] = 'Restructuring type';
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['delta_offset'] = '0';
  /* Field: Content: Nace */
  $handler->display->display_options['fields']['field_ef_nace']['id'] = 'field_ef_nace';
  $handler->display->display_options['fields']['field_ef_nace']['table'] = 'field_data_field_ef_nace';
  $handler->display->display_options['fields']['field_ef_nace']['field'] = 'field_ef_nace';
  $handler->display->display_options['fields']['field_ef_nace']['label'] = 'Sector';
  $handler->display->display_options['fields']['field_ef_nace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_nace']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ef_nace']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ef_nace']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ef_nace']['separator'] = '';
  /* Field: Content: Planned Job Creation */
  $handler->display->display_options['fields']['field_ef_planned_job_creation']['id'] = 'field_ef_planned_job_creation';
  $handler->display->display_options['fields']['field_ef_planned_job_creation']['table'] = 'field_data_field_ef_planned_job_creation';
  $handler->display->display_options['fields']['field_ef_planned_job_creation']['field'] = 'field_ef_planned_job_creation';
  $handler->display->display_options['fields']['field_ef_planned_job_creation']['label'] = 'Planned job creation';
  $handler->display->display_options['fields']['field_ef_planned_job_creation']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ef_planned_job_creation']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_ef_planned_job_creation']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Planned Job Reductions max */
  $handler->display->display_options['fields']['field_ef_job_reductions_max']['id'] = 'field_ef_job_reductions_max';
  $handler->display->display_options['fields']['field_ef_job_reductions_max']['table'] = 'field_data_field_ef_job_reductions_max';
  $handler->display->display_options['fields']['field_ef_job_reductions_max']['field'] = 'field_ef_job_reductions_max';
  $handler->display->display_options['fields']['field_ef_job_reductions_max']['label'] = 'Planned job reductions max';
  $handler->display->display_options['fields']['field_ef_job_reductions_max']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ef_job_reductions_max']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Announcement Date (field_ef_announcement_date) */
  $handler->display->display_options['sorts']['field_ef_announcement_date_value']['id'] = 'field_ef_announcement_date_value';
  $handler->display->display_options['sorts']['field_ef_announcement_date_value']['table'] = 'field_data_field_ef_announcement_date';
  $handler->display->display_options['sorts']['field_ef_announcement_date_value']['field'] = 'field_ef_announcement_date_value';
  $handler->display->display_options['sorts']['field_ef_announcement_date_value']['order'] = 'DESC';
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
    'ef_factsheet' => 'ef_factsheet',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['ui_name'] = 'Search';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title';
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
    'title' => 'title',
  );
  /* Filter criterion: Country */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['ui_name'] = 'Country';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['description'] = 'Search country or inner nuts level, eg: Ireland or --Dublin';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'ef_nuts';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['error_message'] = FALSE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['use_chosen'] = 'always';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '4';
  /* Filter criterion: Sector/Nace */
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['id'] = 'shs_term_node_tid_depth_1';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['ui_name'] = 'Sector/Nace';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['value'] = 'All';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['group'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['expose']['operator_id'] = 'shs_term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['expose']['label'] = 'Sector/Nace';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['expose']['description'] = 'Search sector or inner nace level';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['expose']['operator'] = 'shs_term_node_tid_depth_1_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['expose']['identifier'] = 'shs_term_node_tid_depth_1';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['type'] = 'select';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['vocabulary'] = 'ef_nace_codes';
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['hierarchy'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['error_message'] = FALSE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth_1']['depth'] = '6';
  /* Filter criterion: Content: Announcement Date (field_ef_announcement_date) */
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['id'] = 'field_ef_announcement_date_value';
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['table'] = 'field_data_field_ef_announcement_date';
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['field'] = 'field_ef_announcement_date_value';
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['expose']['operator_id'] = 'field_ef_announcement_date_value_op';
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['expose']['label'] = 'Announcement Date';
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['expose']['operator'] = 'field_ef_announcement_date_value_op';
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['expose']['identifier'] = 'field_ef_announcement_date_value';
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_ef_announcement_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Type of Restructuring (field_ef_type_of_restructuring) */
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['id'] = 'field_ef_type_of_restructuring_tid';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['table'] = 'field_data_field_ef_type_of_restructuring';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['field'] = 'field_ef_type_of_restructuring_tid';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['operator_id'] = 'field_ef_type_of_restructuring_tid_op';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['label'] = 'Restructuring type';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['operator'] = 'field_ef_type_of_restructuring_tid_op';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['identifier'] = 'field_ef_type_of_restructuring_tid';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['vocabulary'] = 'ef_restructuring_types';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'observatories/emcc/erm/factsheets';
  $handler->display->display_options['menu']['title'] = 'Factsheets';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ef_factsheets_view'] = $view;

  $view = new view();
  $view->name = 'ef_ir_dictionary';
  $view->description = 'A list of all content, by letter.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IR Dictionary';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'European Industrial Relations Dictionary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ef_ir_dictionary' => 'ef_ir_dictionary',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'observatories/eurwork/industrial-relations-dictionary';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ef_ir_dictionary' => 'ef_ir_dictionary',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['ef_ir_dictionary'] = $view;

  $view = new view();
  $view->name = 'ef_latest_restructuring';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest Restructuring';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Restructuring';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Latest Restructuring Block EMCC Landing Page */
  $handler = $view->new_display('block', 'Latest Restructuring Block EMCC Landing Page', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest restructuring';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ef_country' => 'field_ef_country',
    'type' => 'type',
    'field_ef_theme' => 'field_ef_theme',
  );
  $handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_wrapper_class'] = 'margin-after';
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_ef_country']['id'] = 'field_ef_country';
  $handler->display->display_options['fields']['field_ef_country']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['fields']['field_ef_country']['field'] = 'field_ef_country';
  $handler->display->display_options['fields']['field_ef_country']['label'] = '';
  $handler->display->display_options['fields']['field_ef_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_country']['element_wrapper_class'] = 'ef-field-metadata';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = 'ef-field-metadata';
  /* Field: Field: Theme */
  $handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['label'] = '';
  $handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_theme']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'ef_factsheet' => 'ef_factsheet',
  );
  $export['ef_latest_restructuring'] = $view;

  $view = new view();
  $view->name = 'ef_regulations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Regulations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regulations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
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
    'path' => 'path',
    'field_ef_regulation_english_name' => 'field_ef_regulation_english_name',
    'field_ef_country' => 'field_ef_country',
    'field_ef_regulation_type' => 'field_ef_regulation_type',
    'field_ef_regulation_funding' => 'field_ef_regulation_funding',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_ef_regulation_english_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'field_ef_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_ef_regulation_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_ef_regulation_funding' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total items found';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Content: Country (field_ef_country) */
  $handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: English name */
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['id'] = 'field_ef_regulation_english_name';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['table'] = 'field_data_field_ef_regulation_english_name';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['field'] = 'field_ef_regulation_english_name';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ef_regulation_english_name']['settings'] = array(
    'trim_length' => '100',
  );
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ef_regulation' => 'ef_regulation',
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
  $handler->display->display_options['filters']['name_list']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'observatories/emcc/erm/legislation';
  $handler->display->display_options['menu']['title'] = 'Regulations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ef_regulations'] = $view;

  $view = new view();
  $view->name = 'ef_restructurings_in_smes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restructurings in SMEs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Restructurings in SMEs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_ef_company_name_value' => array(
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
    'field_ef_type_of_restructuring_tid' => array(
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
    'field_ef_employees_before_restr_tid' => array(
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
    'field_ef_restructuring_keywords_tid' => array(
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
    'shs_term_node_tid_depth' => array(
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'mediatable';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'field_ef_type_of_restructuring' => 'field_ef_type_of_restructuring',
    'field_ef_nace' => 'field_ef_nace',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_ef_type_of_restructuring' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_ef_nace' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total items found';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Content: Country (field_ef_country) */
  $handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'Country';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Company';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Countries: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'countries_country';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_ef_country_iso2';
  $handler->display->display_options['fields']['name']['label'] = 'Country';
  /* Field: Content: Type of Restructuring */
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['id'] = 'field_ef_type_of_restructuring';
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['table'] = 'field_data_field_ef_type_of_restructuring';
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['field'] = 'field_ef_type_of_restructuring';
  $handler->display->display_options['fields']['field_ef_type_of_restructuring']['delta_offset'] = '0';
  /* Field: Content: Nace */
  $handler->display->display_options['fields']['field_ef_nace']['id'] = 'field_ef_nace';
  $handler->display->display_options['fields']['field_ef_nace']['table'] = 'field_data_field_ef_nace';
  $handler->display->display_options['fields']['field_ef_nace']['field'] = 'field_ef_nace';
  $handler->display->display_options['fields']['field_ef_nace']['label'] = 'Sector';
  $handler->display->display_options['fields']['field_ef_nace']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
  $handler->display->display_options['fields']['field_ef_nace']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ef_nace']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ef_restructuring_in_smes' => 'ef_restructuring_in_smes',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Company Name (field_ef_company_name) */
  $handler->display->display_options['filters']['field_ef_company_name_value']['id'] = 'field_ef_company_name_value';
  $handler->display->display_options['filters']['field_ef_company_name_value']['table'] = 'field_data_field_ef_company_name';
  $handler->display->display_options['filters']['field_ef_company_name_value']['field'] = 'field_ef_company_name_value';
  $handler->display->display_options['filters']['field_ef_company_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_ef_company_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_company_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_company_name_value']['expose']['operator_id'] = 'field_ef_company_name_value_op';
  $handler->display->display_options['filters']['field_ef_company_name_value']['expose']['label'] = 'Company Name';
  $handler->display->display_options['filters']['field_ef_company_name_value']['expose']['operator'] = 'field_ef_company_name_value_op';
  $handler->display->display_options['filters']['field_ef_company_name_value']['expose']['identifier'] = 'field_ef_company_name_value';
  $handler->display->display_options['filters']['field_ef_company_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
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
  $handler->display->display_options['filters']['name_list']['configuration'] = '2';
  $handler->display->display_options['filters']['name_list']['filter'] = array(
    'enabled' => '1',
    'continents' => array(),
  );
  /* Filter criterion: Content: Type of Restructuring (field_ef_type_of_restructuring) */
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['id'] = 'field_ef_type_of_restructuring_tid';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['table'] = 'field_data_field_ef_type_of_restructuring';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['field'] = 'field_ef_type_of_restructuring_tid';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['operator_id'] = 'field_ef_type_of_restructuring_tid_op';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['label'] = 'Type of Restructuring';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['operator'] = 'field_ef_type_of_restructuring_tid_op';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['identifier'] = 'field_ef_type_of_restructuring_tid';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['vocabulary'] = 'ef_restructuring_types';
  /* Filter criterion: Content: Employees Before Restructuring (field_ef_employees_before_restr) */
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['id'] = 'field_ef_employees_before_restr_tid';
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['table'] = 'field_data_field_ef_employees_before_restr';
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['field'] = 'field_ef_employees_before_restr_tid';
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['expose']['operator_id'] = 'field_ef_employees_before_restr_tid_op';
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['expose']['label'] = 'Company Size (Before)';
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['expose']['operator'] = 'field_ef_employees_before_restr_tid_op';
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['expose']['identifier'] = 'field_ef_employees_before_restr_tid';
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['vocabulary'] = 'ef_company_sizes';
  /* Filter criterion: Content: Nace (field_ef_nace) */
  $handler->display->display_options['filters']['field_ef_nace_tid']['id'] = 'field_ef_nace_tid';
  $handler->display->display_options['filters']['field_ef_nace_tid']['table'] = 'field_data_field_ef_nace';
  $handler->display->display_options['filters']['field_ef_nace_tid']['field'] = 'field_ef_nace_tid';
  $handler->display->display_options['filters']['field_ef_nace_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_nace_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_nace_tid']['expose']['operator_id'] = 'field_ef_nace_tid_op';
  $handler->display->display_options['filters']['field_ef_nace_tid']['expose']['label'] = 'Sectors';
  $handler->display->display_options['filters']['field_ef_nace_tid']['expose']['operator'] = 'field_ef_nace_tid_op';
  $handler->display->display_options['filters']['field_ef_nace_tid']['expose']['identifier'] = 'field_ef_nace_tid';
  $handler->display->display_options['filters']['field_ef_nace_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_nace_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_nace_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_nace_tid']['vocabulary'] = 'ef_nace_codes';
  $handler->display->display_options['filters']['field_ef_nace_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'observatories/emcc/erm/restructuring-in-smes';
  $handler->display->display_options['menu']['title'] = 'Restructurings in SMEs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ef_restructurings_in_smes'] = $view;

  $view = new view();
  $view->name = 'ef_support_instruments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Support Instruments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Support Instruments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
    'field_ef_instrument_cat_phases_tid' => array(
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
    'field_ef_instrument_categories_tid' => array(
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
    'field_ef_instrument_fundings_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_select_all_none_nested' => 0,
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
    'field_ef_involvement_types_tid' => array(
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'mediatable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ef_english_name' => 'field_ef_english_name',
    'title' => 'title',
    'name' => 'name',
    'field_ef_instrument_cat_phases' => 'field_ef_instrument_cat_phases',
    'field_ef_instrument_categories' => 'field_ef_instrument_categories',
    'field_ef_instrument_fundings' => 'field_ef_instrument_fundings',
    'field_ef_involvement_types' => 'field_ef_involvement_types',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ef_english_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'persist',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_ef_instrument_cat_phases' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_ef_instrument_categories' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_ef_instrument_fundings' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'essential',
    ),
    'field_ef_involvement_types' => array(
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
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results for the selected filters found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Country (field_ef_country) */
  $handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'Country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['required'] = TRUE;
  /* Field: Content: English name */
  $handler->display->display_options['fields']['field_ef_english_name']['id'] = 'field_ef_english_name';
  $handler->display->display_options['fields']['field_ef_english_name']['table'] = 'field_data_field_ef_english_name';
  $handler->display->display_options['fields']['field_ef_english_name']['field'] = 'field_ef_english_name';
  $handler->display->display_options['fields']['field_ef_english_name']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_ef_english_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_ef_english_name']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_ef_english_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ef_english_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Original Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Countries: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'countries_country';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_ef_country_iso2';
  $handler->display->display_options['fields']['name']['label'] = 'Country';
  /* Field: Field: Phases */
  $handler->display->display_options['fields']['field_ef_instrument_cat_phases']['id'] = 'field_ef_instrument_cat_phases';
  $handler->display->display_options['fields']['field_ef_instrument_cat_phases']['table'] = 'field_data_field_ef_instrument_cat_phases';
  $handler->display->display_options['fields']['field_ef_instrument_cat_phases']['field'] = 'field_ef_instrument_cat_phases';
  $handler->display->display_options['fields']['field_ef_instrument_cat_phases']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_instrument_cat_phases']['delta_offset'] = '0';
  /* Field: Content: Instrument Categories */
  $handler->display->display_options['fields']['field_ef_instrument_categories']['id'] = 'field_ef_instrument_categories';
  $handler->display->display_options['fields']['field_ef_instrument_categories']['table'] = 'field_data_field_ef_instrument_categories';
  $handler->display->display_options['fields']['field_ef_instrument_categories']['field'] = 'field_ef_instrument_categories';
  $handler->display->display_options['fields']['field_ef_instrument_categories']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_ef_instrument_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_instrument_categories']['delta_offset'] = '0';
  /* Field: Content: Instrument Fundings */
  $handler->display->display_options['fields']['field_ef_instrument_fundings']['id'] = 'field_ef_instrument_fundings';
  $handler->display->display_options['fields']['field_ef_instrument_fundings']['table'] = 'field_data_field_ef_instrument_fundings';
  $handler->display->display_options['fields']['field_ef_instrument_fundings']['field'] = 'field_ef_instrument_fundings';
  $handler->display->display_options['fields']['field_ef_instrument_fundings']['label'] = '';
  $handler->display->display_options['fields']['field_ef_instrument_fundings']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_instrument_fundings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_instrument_fundings']['delta_offset'] = '0';
  /* Field: Content: Involved actors */
  $handler->display->display_options['fields']['field_ef_involvement_types']['id'] = 'field_ef_involvement_types';
  $handler->display->display_options['fields']['field_ef_involvement_types']['table'] = 'field_data_field_ef_involvement_types';
  $handler->display->display_options['fields']['field_ef_involvement_types']['field'] = 'field_ef_involvement_types';
  $handler->display->display_options['fields']['field_ef_involvement_types']['label'] = '';
  $handler->display->display_options['fields']['field_ef_involvement_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_involvement_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_involvement_types']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ef_support_instrument' => 'ef_support_instrument',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['ui_name'] = 'Search';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Search English name, Original name';
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
    'field_ef_english_name' => 'field_ef_english_name',
    'title' => 'title',
  );
  /* Filter criterion: Countries */
  $handler->display->display_options['filters']['name_list_1']['id'] = 'name_list_1';
  $handler->display->display_options['filters']['name_list_1']['table'] = 'countries_country';
  $handler->display->display_options['filters']['name_list_1']['field'] = 'name_list';
  $handler->display->display_options['filters']['name_list_1']['relationship'] = 'field_ef_country_iso2';
  $handler->display->display_options['filters']['name_list_1']['ui_name'] = 'Countries';
  $handler->display->display_options['filters']['name_list_1']['group'] = 1;
  $handler->display->display_options['filters']['name_list_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_list_1']['expose']['operator_id'] = 'name_list_1_op';
  $handler->display->display_options['filters']['name_list_1']['expose']['label'] = 'Countries';
  $handler->display->display_options['filters']['name_list_1']['expose']['operator'] = 'name_list_1_op';
  $handler->display->display_options['filters']['name_list_1']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['name_list_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name_list_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Phases (field_ef_instrument_cat_phases) */
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['id'] = 'field_ef_instrument_cat_phases_tid';
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['table'] = 'field_data_field_ef_instrument_cat_phases';
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['field'] = 'field_ef_instrument_cat_phases_tid';
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['expose']['operator_id'] = 'field_ef_instrument_cat_phases_tid_op';
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['expose']['label'] = 'Phases';
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['expose']['operator'] = 'field_ef_instrument_cat_phases_tid_op';
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['expose']['identifier'] = 'field_ef_instrument_cat_phases_tid';
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_instrument_cat_phases_tid']['vocabulary'] = 'ef_instrument_phases';
  /* Filter criterion: Content: Instrument Categories (field_ef_instrument_categories) */
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['id'] = 'field_ef_instrument_categories_tid';
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['table'] = 'field_data_field_ef_instrument_categories';
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['field'] = 'field_ef_instrument_categories_tid';
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['expose']['operator_id'] = 'field_ef_instrument_categories_tid_op';
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['expose']['label'] = 'Instrument Categories';
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['expose']['operator'] = 'field_ef_instrument_categories_tid_op';
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['expose']['identifier'] = 'field_ef_instrument_categories_tid';
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_instrument_categories_tid']['vocabulary'] = 'ef_instrument_categories';
  /* Filter criterion: Content: Instrument Fundings (field_ef_instrument_fundings) */
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['id'] = 'field_ef_instrument_fundings_tid';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['table'] = 'field_data_field_ef_instrument_fundings';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['field'] = 'field_ef_instrument_fundings_tid';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['expose']['operator_id'] = 'field_ef_instrument_fundings_tid_op';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['expose']['label'] = 'Fundings';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['expose']['operator'] = 'field_ef_instrument_fundings_tid_op';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['expose']['identifier'] = 'field_ef_instrument_fundings_tid';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['vocabulary'] = 'ef_instrument_fundings';
  $handler->display->display_options['filters']['field_ef_instrument_fundings_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Involved actors (field_ef_involvement_types) */
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['id'] = 'field_ef_involvement_types_tid';
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['table'] = 'field_data_field_ef_involvement_types';
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['field'] = 'field_ef_involvement_types_tid';
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['expose']['operator_id'] = 'field_ef_involvement_types_tid_op';
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['expose']['label'] = 'Involvements';
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['expose']['operator'] = 'field_ef_involvement_types_tid_op';
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['expose']['identifier'] = 'field_ef_involvement_types_tid';
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_involvement_types_tid']['vocabulary'] = 'ef_instrument_involvement_types';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'observatories/emcc/erm/support-instruments';
  $handler->display->display_options['menu']['title'] = 'Support Instruments';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ef_support_instruments'] = $view;

  return $export;
}
