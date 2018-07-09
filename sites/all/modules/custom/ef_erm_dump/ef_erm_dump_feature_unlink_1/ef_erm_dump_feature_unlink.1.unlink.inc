<?php

/**
 * Unlink ef_erm_dump_feature_unlink_1_views_view().
 */
function ef_erm_dump_feature_unlink_1_views_view() {
$view = new view();
$view->name = 'factsheets_export_primary';
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
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  5 => '5',
);
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
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
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
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content revision: Vid */
$handler->display->display_options['fields']['vid']['id'] = 'vid';
$handler->display->display_options['fields']['vid']['table'] = 'node_revision';
$handler->display->display_options['fields']['vid']['field'] = 'vid';
/* Field: Content: Migration Details */
$handler->display->display_options['fields']['field_ef_migration_details']['id'] = 'field_ef_migration_details';
$handler->display->display_options['fields']['field_ef_migration_details']['table'] = 'field_data_field_ef_migration_details';
$handler->display->display_options['fields']['field_ef_migration_details']['field'] = 'field_ef_migration_details';
/* Field: Content: Announcement Date */
$handler->display->display_options['fields']['field_ef_announcement_date']['id'] = 'field_ef_announcement_date';
$handler->display->display_options['fields']['field_ef_announcement_date']['table'] = 'field_data_field_ef_announcement_date';
$handler->display->display_options['fields']['field_ef_announcement_date']['field'] = 'field_ef_announcement_date';
$handler->display->display_options['fields']['field_ef_announcement_date']['label'] = 'Announcement date';
$handler->display->display_options['fields']['field_ef_announcement_date']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_ef_announcement_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_announcement_date']['settings'] = array(
  'format_type' => 'short',
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
/* Field: Content: Nuts */
$handler->display->display_options['fields']['field_ef_nuts_1']['id'] = 'field_ef_nuts_1';
$handler->display->display_options['fields']['field_ef_nuts_1']['table'] = 'field_data_field_ef_nuts';
$handler->display->display_options['fields']['field_ef_nuts_1']['field'] = 'field_ef_nuts';
$handler->display->display_options['fields']['field_ef_nuts_1']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_ef_nuts_1']['delta_offset'] = '0';
/* Field: Content: Location of affected unit(s) */
$handler->display->display_options['fields']['field_ef_affected_units']['id'] = 'field_ef_affected_units';
$handler->display->display_options['fields']['field_ef_affected_units']['table'] = 'field_data_field_ef_affected_units';
$handler->display->display_options['fields']['field_ef_affected_units']['field'] = 'field_ef_affected_units';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Company';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
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
/* Field: Content: Number Employed */
$handler->display->display_options['fields']['field_ef_number_employed']['id'] = 'field_ef_number_employed';
$handler->display->display_options['fields']['field_ef_number_employed']['table'] = 'field_data_field_ef_number_employed';
$handler->display->display_options['fields']['field_ef_number_employed']['field'] = 'field_ef_number_employed';
$handler->display->display_options['fields']['field_ef_number_employed']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 0,
);
/* Field: Content: Other Job Reduction Measures */
$handler->display->display_options['fields']['field_ef_other_job_reduction']['id'] = 'field_ef_other_job_reduction';
$handler->display->display_options['fields']['field_ef_other_job_reduction']['table'] = 'field_data_field_ef_other_job_reduction';
$handler->display->display_options['fields']['field_ef_other_job_reduction']['field'] = 'field_ef_other_job_reduction';
$handler->display->display_options['fields']['field_ef_other_job_reduction']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 0,
);
/* Field: Content: Planned Job Reductions max */
$handler->display->display_options['fields']['field_ef_job_reductions_max_1']['id'] = 'field_ef_job_reductions_max_1';
$handler->display->display_options['fields']['field_ef_job_reductions_max_1']['table'] = 'field_data_field_ef_job_reductions_max';
$handler->display->display_options['fields']['field_ef_job_reductions_max_1']['field'] = 'field_ef_job_reductions_max';
$handler->display->display_options['fields']['field_ef_job_reductions_max_1']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Planned Job Reductions min */
$handler->display->display_options['fields']['field_ef_job_reductions_min']['id'] = 'field_ef_job_reductions_min';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['table'] = 'field_data_field_ef_job_reductions_min';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['field'] = 'field_ef_job_reductions_min';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Employment Effect Start */
$handler->display->display_options['fields']['field_ef_employment_effect_start']['id'] = 'field_ef_employment_effect_start';
$handler->display->display_options['fields']['field_ef_employment_effect_start']['table'] = 'field_data_field_ef_employment_effect_start';
$handler->display->display_options['fields']['field_ef_employment_effect_start']['field'] = 'field_ef_employment_effect_start';
$handler->display->display_options['fields']['field_ef_employment_effect_start']['label'] = 'Employment_effect_start';
$handler->display->display_options['fields']['field_ef_employment_effect_start']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_ef_employment_effect_start']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Foreseen End Date */
$handler->display->display_options['fields']['field_ef_foreseen_end_date']['id'] = 'field_ef_foreseen_end_date';
$handler->display->display_options['fields']['field_ef_foreseen_end_date']['table'] = 'field_data_field_ef_foreseen_end_date';
$handler->display->display_options['fields']['field_ef_foreseen_end_date']['field'] = 'field_ef_foreseen_end_date';
$handler->display->display_options['fields']['field_ef_foreseen_end_date']['label'] = 'Foreseen_end_date';
$handler->display->display_options['fields']['field_ef_foreseen_end_date']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_ef_foreseen_end_date']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Case Name */
$handler->display->display_options['fields']['field_ef_case_name']['id'] = 'field_ef_case_name';
$handler->display->display_options['fields']['field_ef_case_name']['table'] = 'field_data_field_ef_case_name';
$handler->display->display_options['fields']['field_ef_case_name']['field'] = 'field_ef_case_name';
$handler->display->display_options['fields']['field_ef_case_name']['label'] = 'Case_name';
/* Field: Content: Direct Dismissals */
$handler->display->display_options['fields']['field_ef_direct_dismissals']['id'] = 'field_ef_direct_dismissals';
$handler->display->display_options['fields']['field_ef_direct_dismissals']['table'] = 'field_data_field_ef_direct_dismissals';
$handler->display->display_options['fields']['field_ef_direct_dismissals']['field'] = 'field_ef_direct_dismissals';
$handler->display->display_options['fields']['field_ef_direct_dismissals']['label'] = 'Direct_dismissals';
$handler->display->display_options['fields']['field_ef_direct_dismissals']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['alter']['strip_tags'] = TRUE;
/* Sort criterion: Content: Nid */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'observatories/emcc/erm/factsheets_export_primary';
$handler->display->display_options['menu']['title'] = 'Factsheets';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Data export */
$handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_csv';
$handler->display->display_options['style_options']['provide_file'] = 1;
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['style_options']['separator'] = '	';
$handler->display->display_options['style_options']['quote'] = '1';
$handler->display->display_options['style_options']['trim'] = 1;
$handler->display->display_options['style_options']['replace_newlines'] = 0;
$handler->display->display_options['style_options']['header'] = 1;
$handler->display->display_options['style_options']['keep_html'] = 0;
$handler->display->display_options['style_options']['encoding'] = 'UTF-8';
$handler->display->display_options['path'] = 'observatories/emcc/erm/factsheets_export_primary.xls';

$view->save();
$view = new view();
$view->name = 'factsheets_export_secondary';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Factsheets';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Factsheets secondary';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  5 => '5',
);
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
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
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
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content revision: Vid */
$handler->display->display_options['fields']['vid']['id'] = 'vid';
$handler->display->display_options['fields']['vid']['table'] = 'node_revision';
$handler->display->display_options['fields']['vid']['field'] = 'vid';
/* Field: Content: Additional Information */
$handler->display->display_options['fields']['field_ef_additional_information']['id'] = 'field_ef_additional_information';
$handler->display->display_options['fields']['field_ef_additional_information']['table'] = 'field_data_field_ef_additional_information';
$handler->display->display_options['fields']['field_ef_additional_information']['field'] = 'field_ef_additional_information';
$handler->display->display_options['fields']['field_ef_additional_information']['alter']['strip_tags'] = TRUE;
/* Field: Content: Nace */
$handler->display->display_options['fields']['field_ef_nace']['id'] = 'field_ef_nace';
$handler->display->display_options['fields']['field_ef_nace']['table'] = 'field_data_field_ef_nace';
$handler->display->display_options['fields']['field_ef_nace']['field'] = 'field_ef_nace';
$handler->display->display_options['fields']['field_ef_nace']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_ef_nace']['delta_offset'] = '0';
/* Field: Content: Other full text sources */
$handler->display->display_options['fields']['field_otheref_full_text_sources']['id'] = 'field_otheref_full_text_sources';
$handler->display->display_options['fields']['field_otheref_full_text_sources']['table'] = 'field_data_field_otheref_full_text_sources';
$handler->display->display_options['fields']['field_otheref_full_text_sources']['field'] = 'field_otheref_full_text_sources';
$handler->display->display_options['fields']['field_otheref_full_text_sources']['click_sort_column'] = 'fid';
/* Field: Content: Sources Links */
$handler->display->display_options['fields']['field_ef_sources_links']['id'] = 'field_ef_sources_links';
$handler->display->display_options['fields']['field_ef_sources_links']['table'] = 'field_data_field_ef_sources_links';
$handler->display->display_options['fields']['field_ef_sources_links']['field'] = 'field_ef_sources_links';
$handler->display->display_options['fields']['field_ef_sources_links']['type'] = 'text_plain';
/* Field: Content: New Location */
$handler->display->display_options['fields']['field_ef_new_location']['id'] = 'field_ef_new_location';
$handler->display->display_options['fields']['field_ef_new_location']['table'] = 'field_data_field_ef_new_location';
$handler->display->display_options['fields']['field_ef_new_location']['field'] = 'field_ef_new_location';
$handler->display->display_options['fields']['field_ef_new_location']['alter']['strip_tags'] = TRUE;
/* Field: Content: Migration Old User */
$handler->display->display_options['fields']['field_ef_migration_old_user']['id'] = 'field_ef_migration_old_user';
$handler->display->display_options['fields']['field_ef_migration_old_user']['table'] = 'field_data_field_ef_migration_old_user';
$handler->display->display_options['fields']['field_ef_migration_old_user']['field'] = 'field_ef_migration_old_user';
/* Field: Content: Group */
$handler->display->display_options['fields']['field_ef_group']['id'] = 'field_ef_group';
$handler->display->display_options['fields']['field_ef_group']['table'] = 'field_data_field_ef_group';
$handler->display->display_options['fields']['field_ef_group']['field'] = 'field_ef_group';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: Content: Migration Factsheet Base */
$handler->display->display_options['fields']['field_ef_migration_fact_base_id']['id'] = 'field_ef_migration_fact_base_id';
$handler->display->display_options['fields']['field_ef_migration_fact_base_id']['table'] = 'field_data_field_ef_migration_fact_base_id';
$handler->display->display_options['fields']['field_ef_migration_fact_base_id']['field'] = 'field_ef_migration_fact_base_id';
/* Field: Content: Migration Factsheet Key */
$handler->display->display_options['fields']['field_ef_migration_factsheet_key']['id'] = 'field_ef_migration_factsheet_key';
$handler->display->display_options['fields']['field_ef_migration_factsheet_key']['table'] = 'field_data_field_ef_migration_factsheet_key';
$handler->display->display_options['fields']['field_ef_migration_factsheet_key']['field'] = 'field_ef_migration_factsheet_key';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
/* Field: Content: Comment */
$handler->display->display_options['fields']['field_ef_comment']['id'] = 'field_ef_comment';
$handler->display->display_options['fields']['field_ef_comment']['table'] = 'field_data_field_ef_comment';
$handler->display->display_options['fields']['field_ef_comment']['field'] = 'field_ef_comment';
/* Field: Content: Sources */
$handler->display->display_options['fields']['field_ef_fact_sources']['id'] = 'field_ef_fact_sources';
$handler->display->display_options['fields']['field_ef_fact_sources']['table'] = 'field_data_field_ef_fact_sources';
$handler->display->display_options['fields']['field_ef_fact_sources']['field'] = 'field_ef_fact_sources';
$handler->display->display_options['fields']['field_ef_fact_sources']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_ef_fact_sources']['click_sort_column'] = 'field_ef_facsheet_media_date_value';
$handler->display->display_options['fields']['field_ef_fact_sources']['settings'] = array(
  'view_mode' => 'default',
);
$handler->display->display_options['fields']['field_ef_fact_sources']['delta_offset'] = '0';
/* Field: Content revision: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'node_revision';
$handler->display->display_options['fields']['state']['field'] = 'state';
/* Sort criterion: Content: Nid */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'observatories/emcc/erm/factsheets_export_secondary';
$handler->display->display_options['menu']['title'] = 'Factsheets';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Data export */
$handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_csv';
$handler->display->display_options['style_options']['provide_file'] = 1;
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['style_options']['separator'] = '	';
$handler->display->display_options['style_options']['quote'] = '1';
$handler->display->display_options['style_options']['trim'] = 1;
$handler->display->display_options['style_options']['replace_newlines'] = 0;
$handler->display->display_options['style_options']['header'] = 1;
$handler->display->display_options['style_options']['keep_html'] = 1;
$handler->display->display_options['style_options']['encoding'] = 'UTF-8';
$handler->display->display_options['path'] = 'observatories/emcc/erm/factsheets_export_secondary.xls';

$view->save();
}
