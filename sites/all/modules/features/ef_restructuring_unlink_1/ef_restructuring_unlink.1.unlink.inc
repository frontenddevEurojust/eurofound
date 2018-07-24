<?php

/**
 * Unlink ef_restructuring_unlink_1_views_view().
 */
function ef_restructuring_unlink_1_views_view() {
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
  'field_ef_job_reductions_min' => 'field_ef_job_reductions_min',
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
    'sortable' => 0,
    'default_sort_order' => 'asc',
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
  'field_ef_job_reductions_min' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'optional',
  ),
);
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'The restructuring events database contains factsheets with data on large-scale restructuring events reported in the principal national media in each EU member state. It has been in existence since 2002.

The database is updated daily and grows at a rate of approximately 20-30 new entries a week. To date, more than 22,000 restructuring events have been recorded.

In order to be included in the database, an individual case of restructuring must involve the announced loss or creation of at least 100 jobs, or employment effects affecting at least 10% of a workforce of more than 250 people. A <a href="https://www.eurofound.europa.eu/observatories/emcc/erm/restructuring-statistics">restructuring statistics tool</a> is available to explore summary data from the restructuring events database by country, sector and restructuring type.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = 'Country';
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$sql = "select n.nid, nuts.field_ef_nuts_tid, t.name 
from node n 
inner join field_data_field_ef_nuts nuts on nuts.entity_id = n.nid
inner join taxonomy_term_data t on t.tid = nuts.field_ef_nuts_tid
where n.type = \'ef_factsheet\'
and n.nid =:nid ";
$result = db_query($sql, array(\':nid\' => $row->nid) )->fetchAll();
$tid = $result[0]->field_ef_nuts_tid;
$parent = taxonomy_get_parents_all($tid);
$tam = sizeof($parent);
echo $parent[$tam-1]->name;

?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
/* Field: Global: PHP */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['label'] = 'Sector';
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$sql = "select n.nid, nace.field_ef_nace_tid, t.name 
from node n 
inner join field_data_field_ef_nace nace on nace.entity_id = n.nid
inner join taxonomy_term_data t on t.tid = nace.field_ef_nace_tid
where n.type = \'ef_factsheet\'
and n.nid =:nid ";
$result = db_query($sql, array(\':nid\' => $row->nid) )->fetchAll();
$tamres = sizeof($result);
$tid = $result[$tamres-1]->field_ef_nace_tid;
$parent = taxonomy_get_parents_all($tid);
$tam = sizeof($parent);
echo $parent[$tam-1]->name;

?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
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
$handler->display->display_options['fields']['field_ef_job_reductions_max']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_job_reductions_max']['element_type'] = 'span';
$handler->display->display_options['fields']['field_ef_job_reductions_max']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 1,
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Planned Job Reductions min */
$handler->display->display_options['fields']['field_ef_job_reductions_min']['id'] = 'field_ef_job_reductions_min';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['table'] = 'field_data_field_ef_job_reductions_min';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['field'] = 'field_ef_job_reductions_min';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['label'] = 'Planned job reductions min';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['element_type'] = 'span';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['element_class'] = 'views-field-field-ef-job-reductions-max';
$handler->display->display_options['fields']['field_ef_job_reductions_min']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 1,
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
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
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
  'field_ef_type_of_restructuring_tid' => array(
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
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'The database is updated daily and grows at a rate of approximately 20-30 new entries a week. To date, more than 22,000 restructuring events have been recorded.

In order to be included in the database, an individual case of restructuring must involve the announced loss or creation of at least 100 jobs, or employment effects affecting at least 10% of a workforce of more than 250 people. A <a href="https://www.eurofound.europa.eu/observatories/emcc/erm/restructuring-statistics">restructuring statistics tool</a> is available to explore summary data from the restructuring events database by country, sector and restructuring type.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<span class="view-header-results">@total items found</span>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'Country';
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
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Company';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search Company';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'ef_search';
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['combine']['fields'] = array(
  'title' => 'title',
);
/* Filter criterion: Content: Has taxonomy terms (with depth; <em class="placeholder">Simple hierarchical select</em>) */
$handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['value'] = 'All';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['group'] = 1;
$handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
$handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'ef_nuts';
$handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '4';
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Sector';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'ef_nace_codes';
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
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
$handler->display->display_options['filters']['field_ef_announcement_date_value']['year_range'] = '2001:+0';
/* Filter criterion: Content: Type of Restructuring (field_ef_type_of_restructuring) */
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['id'] = 'field_ef_type_of_restructuring_tid';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['table'] = 'field_data_field_ef_type_of_restructuring';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['field'] = 'field_ef_type_of_restructuring_tid';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['value'] = array(
  1106 => '1106',
  20383 => '20383',
  1103 => '1103',
  1107 => '1107',
  1099 => '1099',
  1100 => '1100',
  1105 => '1105',
  1104 => '1104',
  1101 => '1101',
  1102 => '1102',
);
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['operator_id'] = 'field_ef_type_of_restructuring_tid_op';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['label'] = 'Restructuring type';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['operator'] = 'field_ef_type_of_restructuring_tid_op';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['identifier'] = 'field_ef_type_of_restructuring_tid';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['vocabulary'] = 'ef_restructuring_types';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid']['error_message'] = FALSE;
$handler->display->display_options['path'] = 'observatories/emcc/erm/factsheets_old2';
$handler->display->display_options['menu']['title'] = 'Factsheets';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'changed' => 'changed',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
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
  'ef_ir_dictionary' => 'ef_ir_dictionary',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Designed as an easy-to-use online reference tool, the European industrial relations dictionary is a comprehensive collection of the most commonly used terms in employment and industrial relations at EU level today. It contains over 350 entries, featuring concise definitions and relevant contextual information, with hyperlinks to EU legislation and case law.
The product of a collaborative effort between acknowledged <a href="european-industrial-relations-dictionary-credits">experts in the field</a>, the dictionary is aimed at policymakers, practitioners and all those interested in the history and evolving structure of the European Union.
Background information is provided on the <a href="european-industrial-relations-dictionary-industrial-relations-context">industrial relations context</a>, <a href="european-industrial-relations-dictionary-institutional-framework"> institutional framework</a>, <a href="european-industrial-relations-dictionay-the-legal-framework">legal framework</a>, <a href="european-industrial-relations-dictionary-collective-industrial-relations">collective industrial relations</a>, <a href="european-industrial-relations-dictionary-individual-employment-relations">individual employment relations</a>, <a href="european-industrial-relations-dictionary-the-enterprise">the enterprise</a>, <a href="european-industrial-relations-dictionary-free-movement-of-workers">free movement of workers</a>, <a href="european-industrial-relations-dictionary-discrimination-and-equality-in-employment">discrimination and equality in employment</a>, <a href="european-industrial-relations-dictionary-health-and-safety">health and safety</a> and movement towards an <a href="european-industrial-relations-dictionary-towards-an-eu-system-of-employment-and-industrial-relations">EU system</a> of employment and industrial relations.
';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Filter letter */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Filter letter';
$handler->display->display_options['header']['php']['label'] = 'Selected letter';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '
';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<p> No results were found. </p>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['settings'] = array(
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
$handler->display->display_options['fields']['published_at']['label'] = 'Date of publication';
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Title */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
$handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
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
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Global: Combine fields filter */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Text';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
$handler->display->display_options['filters']['combine']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
$handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
$handler->display->display_options['filters']['combine']['group_info']['multiple'] = TRUE;
$handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
  1 => array(
    'title' => '',
    'operator' => 'contains',
    'value' => '',
  ),
  2 => array(
    'title' => '',
    'operator' => 'contains',
    'value' => '',
  ),
  3 => array(
    'title' => '',
    'operator' => 'contains',
    'value' => '',
  ),
);
$handler->display->display_options['filters']['combine']['fields'] = array(
  'title' => 'title',
  'body' => 'body',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_ir_dictionary' => 'ef_ir_dictionary',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Workbench Moderation: Published */
$handler->display->display_options['filters']['published']['id'] = 'published';
$handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['published']['field'] = 'published';
$handler->display->display_options['filters']['published']['value'] = '1';
$handler->display->display_options['filters']['published']['group'] = 1;
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Date of Publication';
$handler->display->display_options['filters']['published_at']['expose']['operator'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['identifier'] = 'published_at';
$handler->display->display_options['filters']['published_at']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/eurwork/industrial-relations-dictionary';
$handler->display->display_options['menu']['title'] = 'Glossary';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Attachment */
$handler = $view->new_display('attachment', 'Attachment', 'attachment');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'glossary';
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Title */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'summary';
$handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
$handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
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

$view->save();
$view = new view();
$view->name = 'ef_latest_restructuring';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Latest Restructuring cases';
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
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Footer: Summary */
$handler->display->display_options['footer']['php']['id'] = 'php';
$handler->display->display_options['footer']['php']['table'] = 'views';
$handler->display->display_options['footer']['php']['field'] = 'php';
$handler->display->display_options['footer']['php']['ui_name'] = 'Summary';
$handler->display->display_options['footer']['php']['php_output'] = '<?php

global $base_url;

$query = "SELECT count(*) as count from node where node.type = \'ef_factsheet\' and node.status = 1";
$result = db_query($query);
$count = $result->fetchAll();

$total = $count[0]->count;

?>
<span class="latest-factsheets-link"><a href="<?php echo $base_url; ?>/observatories/emcc/erm/factsheets"><?php echo $total; ?> cases</a> recorded since 2002</span>
';
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
$handler->display->display_options['title'] = 'Latest restructuring cases';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
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
/* Field: Company name */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['ui_name'] = 'Company name';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Country */
$handler->display->display_options['fields']['field__ef_nuts_comp_country']['id'] = 'field__ef_nuts_comp_country';
$handler->display->display_options['fields']['field__ef_nuts_comp_country']['table'] = 'field_data_field__ef_nuts_comp_country';
$handler->display->display_options['fields']['field__ef_nuts_comp_country']['field'] = 'field__ef_nuts_comp_country';
$handler->display->display_options['fields']['field__ef_nuts_comp_country']['ui_name'] = 'Country';
$handler->display->display_options['fields']['field__ef_nuts_comp_country']['label'] = '';
$handler->display->display_options['fields']['field__ef_nuts_comp_country']['exclude'] = TRUE;
$handler->display->display_options['fields']['field__ef_nuts_comp_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field__ef_nuts_comp_country']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Announcement Date */
$handler->display->display_options['fields']['field_ef_announcement_date']['id'] = 'field_ef_announcement_date';
$handler->display->display_options['fields']['field_ef_announcement_date']['table'] = 'field_data_field_ef_announcement_date';
$handler->display->display_options['fields']['field_ef_announcement_date']['field'] = 'field_ef_announcement_date';
$handler->display->display_options['fields']['field_ef_announcement_date']['ui_name'] = 'Announcement Date';
$handler->display->display_options['fields']['field_ef_announcement_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_announcement_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_announcement_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_announcement_date']['settings'] = array(
  'format_type' => 'ef_minimal',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Gain/Loss */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Gain/Loss';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php $node = node_load($data->nid);

if(isset($node->field_ef_planned_job_creation[\'und\'][0][\'value\'])){
    $gains = $node->field_ef_planned_job_creation[\'und\'][0][\'value\'];
}
if(isset($node->field_ef_job_reductions_max[\'und\'][0][\'value\'])){
    $loss_max = $node->field_ef_job_reductions_max[\'und\'][0][\'value\'];
}
if(isset($node->field_ef_job_reductions_min[\'und\'][0][\'value\'])){
    $loss_min = $node->field_ef_job_reductions_min[\'und\'][0][\'value\'];
}


?>

<!-- gains -->
<?php if(isset($gains)): ?>
   
    <div class="label success round">
        <i class="fa fa-caret-up"></i>
        <span><?php echo $gains; ?> jobs created</span>
    </div>
   
<?php endif; ?>

<!-- loss -->
<?php if(isset($loss_min) || isset($loss_max)): ?>

    <div class="label alert round">
    <!-- loss min -->
    <?php if(isset($loss_min) && !isset($loss_max)): ?>

           
        <i class="fa fa-caret-down"></i>
        <span><?php echo $loss_min; ?> jobs lost</span>
       

    <!-- loss max -->   
    <?php elseif(!isset($loss_min) && isset($loss_max)): ?>

        <i class="fa fa-caret-down"></i>
        <span><?php echo $loss_max; ?> jobs lost</span>

    <!-- loss min - loss max -->   
    <?php elseif(isset($loss_min) && isset($loss_max)): ?>

        <?php if($loss_min != $loss_max): ?>

            <i class="fa fa-caret-down"></i>
            <span><?php echo $loss_min; ?> - <?php echo $loss_max; ?> jobs lost</span>

        <?php else: ?>

            <i class="fa fa-caret-down"></i>
            <span><?php echo $loss_min; ?> jobs lost</span>
           
        <?php endif; ?>       

    <?php endif; ?>

    </div>

<?php endif; ?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: display */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'display';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="latest-row">
 
  <div class="latest-name">[title]</div>

  <div class="latest-country-date row">
    <div class="latest-country small-4 columns">[field__ef_nuts_comp_country]</div>
    <div class="latest-announce-date small-3 columns">[field_ef_announcement_date]</div>
    <div class="latest-gain-loss small-5 columns text-center">[php]</div>
  </div>
 
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: php Country */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'php Country';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$sql = "select n.nid, nuts.field_ef_nuts_tid, t.name 
from node n 
inner join field_data_field_ef_nuts nuts on nuts.entity_id = n.nid
inner join taxonomy_term_data t on t.tid = nuts.field_ef_nuts_tid
where n.type = \'ef_factsheet\'
and n.nid =:nid ";
$result = db_query($sql, array(\':nid\' => $row->nid) )->fetchAll();
$tid = $result[0]->field_ef_nuts_tid;
$parent = taxonomy_get_parents_all($tid);
$tam = sizeof($parent);
echo $parent[$tam-1]->name;
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: display2 */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = 'display2';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="latest-row">
 
  <div class="latest-name">[title]</div>

  <div class="latest-country-date row">
    <div class="latest-country small-4 columns">[php_1]</div>
    <div class="latest-announce-date small-3 columns">[field_ef_announcement_date]</div>
    <div class="latest-gain-loss small-5 columns text-center">[php]</div>
  </div>
 
</div>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Announcement Date (field_ef_announcement_date) */
$handler->display->display_options['sorts']['field_ef_announcement_date_value']['id'] = 'field_ef_announcement_date_value';
$handler->display->display_options['sorts']['field_ef_announcement_date_value']['table'] = 'field_data_field_ef_announcement_date';
$handler->display->display_options['sorts']['field_ef_announcement_date_value']['field'] = 'field_ef_announcement_date_value';
$handler->display->display_options['sorts']['field_ef_announcement_date_value']['order'] = 'DESC';
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

$view->save();
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
$handler->display->display_options['title'] = 'Restructuring related legislation';
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
  'view_node' => 'view_node',
  'field_ef_country' => 'field_ef_country',
  'field_ef_regulation_type' => 'field_ef_regulation_type',
  'field_ef_regulation_funding' => 'field_ef_regulation_funding',
  'title' => 'title',
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
  'view_node' => array(
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
);
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = ' Eurofound’s ERM database on restructuring related legal regulations provides information on about 370 regulations in the Member States of the European Union and Norway which are explicitly or implicitly linked to anticipating and managing change. The database covers statutory rules, only, and does not include collective agreements or company-level initiatives. The regulations are described in terms of their content, thresholds, involved actors and who covers the cost (if applicable). The aim is to provide an easy possibility of a cross-national comparison of the main features of restructuring related legislation.

Eurofound aims to keep this information up to date and accurate. If errors are brought to our attention, we will try to correct them. However, Eurofound accepts no responsibility or liability whatsoever with regard to the information in this database.
This information is:
<ul>
<li>of a general nature only and is not intended to address the specific circumstances of any particular individual or entity;</li> 
<li>not necessarily comprehensive, complete, accurate or up to date;</li>
<li>sometimes linked to external sites over which Eurofound services have no control and for which Eurofound assumes no responsibility;</li>
<li>not professional or legal advice (if specific advice is needed, a suitably qualified professional should be consulted).</li> 
 ';
$handler->display->display_options['header']['area']['format'] = 'full_html';
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

$view->save();
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
$handler->display->display_options['title'] = 'Restructuring in SMEs';
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
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
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
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Restructuring is part and parcel of the economic fabric in Europe, as companies must adapt to altered conditions in a bid to remain sustainable and competitive. Small and medium-sized companies (SMEs) constitute over 99% of European businesses and about 66% of private sector employment, so policymakers at all levels need to understand the specific challenges facing them to provide appropriate support for this backbone of the European economy. Eurofound’s report \'Restructuring in SMEs in Europe\' outlines the features peculiar to SMEs in their anticipation and management of restructuring. It also explores the main drivers of change and analyses the factors influencing successful restructuring. It offers a wide-ranging, comparative view of how restructuring impacts on workers and the company itself and puts forward several policy pointers for future action. The report draws on 85 company case studies which are available in this database. ';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Restructuring is part and parcel of the economic fabric in Europe, as companies must adapt to altered conditions in a bid to remain sustainable and competitive. Small and medium-sized companies (SMEs) constitute over 99% of European businesses and about 66% of private sector employment, so policymakers at all levels need to understand the specific challenges facing them to provide appropriate support for this backbone of the European economy. Eurofound’s report <a href="http://www.eurofound.europa.eu/publications/report/2013/labour-market-business/restructuring-in-smes-in-europe">Restructuring in SMEs in Europe</a> outlines the features peculiar to SMEs in their anticipation and management of restructuring. It also explores the main drivers of change and analyses the factors influencing successful restructuring. It offers a wide-ranging, comparative view of how restructuring impacts on workers and the company itself and puts forward several policy pointers for future action. The report draws on 85 company case studies which are available in this database. An overview of the <a href="https://www.eurofound.europa.eu/observatories/emcc/erm/restructuring-in-smes-in-europe">restructuring in SMEs project</a> is available.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found';
$handler->display->display_options['defaults']['fields'] = FALSE;
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
/* Field: Type of Restructuring (field_ef_type_of_restructuring) (selective) */
$handler->display->display_options['fields']['field_ef_type_of_restructuring']['id'] = 'field_ef_type_of_restructuring';
$handler->display->display_options['fields']['field_ef_type_of_restructuring']['table'] = 'field_data_field_ef_type_of_restructuring';
$handler->display->display_options['fields']['field_ef_type_of_restructuring']['field'] = 'field_ef_type_of_restructuring';
$handler->display->display_options['fields']['field_ef_type_of_restructuring']['ui_name'] = 'Type of Restructuring (field_ef_type_of_restructuring) (selective)';
$handler->display->display_options['fields']['field_ef_type_of_restructuring']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_type_of_restructuring']['delta_offset'] = '0';
/* Field: Content: Nace */
$handler->display->display_options['fields']['field_ef_nace']['id'] = 'field_ef_nace';
$handler->display->display_options['fields']['field_ef_nace']['table'] = 'field_data_field_ef_nace';
$handler->display->display_options['fields']['field_ef_nace']['field'] = 'field_ef_nace';
$handler->display->display_options['fields']['field_ef_nace']['label'] = 'Sector';
$handler->display->display_options['fields']['field_ef_nace']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
$handler->display->display_options['fields']['field_ef_nace']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_ef_nace']['delta_offset'] = '0';
/* Field: Keywords (field_ef_restructuring_keywords) (selective) */
$handler->display->display_options['fields']['field_ef_restructuring_keywords']['id'] = 'field_ef_restructuring_keywords';
$handler->display->display_options['fields']['field_ef_restructuring_keywords']['table'] = 'field_data_field_ef_restructuring_keywords';
$handler->display->display_options['fields']['field_ef_restructuring_keywords']['field'] = 'field_ef_restructuring_keywords';
$handler->display->display_options['fields']['field_ef_restructuring_keywords']['ui_name'] = 'Keywords (field_ef_restructuring_keywords) (selective)';
$handler->display->display_options['fields']['field_ef_restructuring_keywords']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_restructuring_keywords']['delta_offset'] = '0';
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
$handler->display->display_options['filters']['name_list']['value'] = array(
  'AT' => 'AT',
  'BE' => 'BE',
  'BG' => 'BG',
  'CY' => 'CY',
  'CZ' => 'CZ',
  'DK' => 'DK',
  'EE' => 'EE',
  'FI' => 'FI',
  'FR' => 'FR',
  'DE' => 'DE',
  'GR' => 'GR',
  'HU' => 'HU',
  'IE' => 'IE',
  'IT' => 'IT',
  'LV' => 'LV',
  'LT' => 'LT',
  'LU' => 'LU',
  'MT' => 'MT',
  'NL' => 'NL',
  'PL' => 'PL',
  'PT' => 'PT',
  'RO' => 'RO',
  'SK' => 'SK',
  'SI' => 'SI',
  'ES' => 'ES',
  'SE' => 'SE',
  'GB' => 'GB',
);
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
  17 => 0,
  18 => 0,
);
$handler->display->display_options['filters']['name_list']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['name_list']['configuration'] = '2';
$handler->display->display_options['filters']['name_list']['filter'] = array(
  'enabled' => '1',
  'continents' => array(),
);
/* Filter criterion: Type of Restructuring (field_ef_type_of_restructuring) (selective) */
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['id'] = 'field_ef_type_of_restructuring_tid_selective';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['table'] = 'field_data_field_ef_type_of_restructuring';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['field'] = 'field_ef_type_of_restructuring_tid_selective';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['ui_name'] = 'Type of Restructuring (field_ef_type_of_restructuring) (selective)';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['expose']['label'] = 'Type of Restructuring ';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['expose']['identifier'] = 'field_ef_type_of_restructuring_tid_selective';
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_restructuring_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Employees Before Restructuring (field_ef_employees_before_restr) */
$handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['id'] = 'field_ef_employees_before_restr_tid';
$handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['table'] = 'field_data_field_ef_employees_before_restr';
$handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['field'] = 'field_ef_employees_before_restr_tid';
$handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['value'] = array(
  13108 => '13108',
  13109 => '13109',
  13110 => '13110',
);
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
$handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_employees_before_restr_tid']['vocabulary'] = 'ef_company_sizes';
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['label'] = 'Sector';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'ef_nace_codes';
/* Filter criterion: Keywords (field_ef_restructuring_keywords) (selective) */
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['id'] = 'field_ef_restructuring_keywords_tid_selective';
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['table'] = 'field_data_field_ef_restructuring_keywords';
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['field'] = 'field_ef_restructuring_keywords_tid_selective';
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['ui_name'] = 'Keywords (field_ef_restructuring_keywords) (selective)';
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['expose']['label'] = 'Keywords ';
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['expose']['identifier'] = 'field_ef_restructuring_keywords_tid_selective';
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_restructuring_keywords_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/emcc/erm/restructuring-in-smes';
$handler->display->display_options['menu']['title'] = 'Restructurings in SMEs';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
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
$handler->display->display_options['title'] = 'Restructuring support instruments';
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
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Eurofound’s ERM database on support instruments for restructuring provides information on about 400 measures in the Member States of the European Union and Norway. National governments, employers’ organisations and trade unions are among the bodies providing support for companies that need to restructure and the affected employees. The support instruments are described in terms of their characteristics, involved actors, funding sources, strengths, weaknesses and outcomes. The aim is to inform governments, social partners and others involved about what kinds of support can be offered.

Make your selection by using the filters below.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
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

$view->save();
}
