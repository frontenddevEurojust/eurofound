<?php

/**
 * Unlink ef_publications_unlink_1_views_view().
 */
function ef_publications_unlink_1_views_view() {
$view = new view();
$view->name = 'date_jump_menu';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Date Jump Menu';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'SELECT YEAR';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'field_ef_publication_date_value' => array(
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
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_value'] = '$static = 0;';
$handler->display->display_options['fields']['php']['php_output'] = '<?php

echo $static;
$static++;

?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['published_at']['alter']['text'] = '[published_at]';
$handler->display->display_options['fields']['published_at']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['published_at']['alter']['path'] = 'publications?published_at=[php]';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'year';
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'date-jump-menu';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');

$view->save();
$view = new view();
$view->name = 'ef_articles';
$view->description = 'test';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'EF Articles';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Articles';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear all';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
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
  'date_filter' => array(
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
  'field_ef_theme_tid' => array(
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
  'field_ef_observatory_tid_1' => array(
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
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_main_image_1]';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_topic' => 'field_ef_topic',
  'field_ef_observatory' => 'field_ef_observatory',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['type'] = 'lightbox2__lightbox__medium__medium';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Body (Summary) */
$handler->display->display_options['fields']['body_1']['id'] = 'body_1';
$handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_1']['field'] = 'body';
$handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
$handler->display->display_options['fields']['body_1']['label'] = '';
$handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body_1']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<ul class="metadata-items inline-list">
<li class="list-metadata">[field_ef_theme]</li>
<li class="list-delib-kind">[field_ef_topic]</li>
<li  class="list-metadata">[field_ef_observatory]</li>
</ul>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field:  Image css classes  */
$handler->display->display_options['fields']['field_ef_main_image_1']['id'] = 'field_ef_main_image_1';
$handler->display->display_options['fields']['field_ef_main_image_1']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['ui_name'] = ' Image css classes ';
$handler->display->display_options['fields']['field_ef_main_image_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_report' => 'ef_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search articles';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Updated date (Year) */
$handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['table'] = 'node';
$handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['ui_name'] = 'Updated date (Year)';
$handler->display->display_options['filters']['date_filter']['group'] = 1;
$handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
$handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Year';
$handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
$handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
$handler->display->display_options['filters']['date_filter']['year_range'] = '-5:+5';
$handler->display->display_options['filters']['date_filter']['date_fields'] = array(
  'node.changed' => 'node.changed',
);
/* Filter criterion: Themes */
$handler->display->display_options['filters']['field_ef_theme_tid']['id'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['filters']['field_ef_theme_tid']['field'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['ui_name'] = 'Themes';
$handler->display->display_options['filters']['field_ef_theme_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_theme_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['operator_id'] = 'field_ef_theme_tid_op';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['label'] = 'Themes';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['operator'] = 'field_ef_theme_tid_op';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['identifier'] = 'ef_theme_topic';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_theme_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_theme_tid']['vocabulary'] = 'ef_themes';
$handler->display->display_options['filters']['field_ef_theme_tid']['error_message'] = FALSE;
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator_id'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['label'] = 'Observatory (field_ef_observatory)';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['identifier'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['error_message'] = FALSE;

/* Display: EF articles page */
$handler = $view->new_display('page', 'EF articles page', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Articles';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_main_image_1]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_topic' => 'field_ef_topic',
  'field_ef_observatory' => 'field_ef_observatory',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['type'] = 'lightbox2__lightbox__medium__medium';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Body (Summary) */
$handler->display->display_options['fields']['body_1']['id'] = 'body_1';
$handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_1']['field'] = 'body';
$handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
$handler->display->display_options['fields']['body_1']['label'] = '';
$handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body_1']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<ul class="metadata-items inline-list">
<li class="list-pub-date">[published_at] </li>
<li class="list-metadata">[field_ef_theme]</li>
<li class="list-delib-kind">[field_ef_topic]</li>
<li  class="list-metadata">[field_ef_observatory]</li>
</ul>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field:  Image css classes  */
$handler->display->display_options['fields']['field_ef_main_image_1']['id'] = 'field_ef_main_image_1';
$handler->display->display_options['fields']['field_ef_main_image_1']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['ui_name'] = ' Image css classes ';
$handler->display->display_options['fields']['field_ef_main_image_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_report' => 'ef_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search articles';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator_id'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['identifier'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['error_message'] = FALSE;
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'articles';
$handler->display->display_options['menu']['title'] = 'News';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: EMCC articles page */
$handler = $view->new_display('page', 'EMCC articles page', 'page_1');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_report' => 'ef_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search articles';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['value'] = array(
  12176 => '12176',
);
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator_id'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['label'] = 'Observatory (field_ef_observatory)';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['identifier'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['error_message'] = FALSE;
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/emcc/articles';
$handler->display->display_options['menu']['title'] = 'News';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: EOWL articles page */
$handler = $view->new_display('page', 'EOWL articles page', 'page_2');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
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
  'name_selective' => array(
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
  'field_ef_topic_tid_selective' => array(
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
  'field_ef_sector_tid_selective' => array(
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
  'published_at' => array(
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
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_observatory' => 'field_ef_observatory',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'EurWORK articles cover working life in Europe, in particular the fields of industrial relations and working conditions. The articles are based on quarterly reporting provided by the <a href="http://www.eurofound.europa.eu/network-of-european-correspondents">Network of Eurofound Correspondents</a>.
<ul>
<li><strong>Topical updates</strong> summarise and update developments around selected topics, which are relevant across a number of Member States at the same time</li> 
<li><strong>Spotlight reports</strong> cover in more depth country-level events, debates and changes in regulation related to working life, aiming to provide a balanced view of all parties’ positions</li> 
<li><strong>Research in Focus</strong> articles report on important research findings (including surveys) from the national level, often, but not exclusively, in the area of working conditions</li>  
<li><strong>In brief</strong> articles are short news items drawn from the correspondents\' quarterly reports</li>
<li><strong>Country updates</strong> summarise developments at national level and are published 4 times a year</li>
</ul>
<hr class="separator-intro">

';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<span class="view-header-results">@total items found</span>';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No results. Please try again.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'country';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_field']['id'] = 'title_field';
$handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field']['field'] = 'title_field';
$handler->display->display_options['fields']['title_field']['label'] = '';
$handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_field']['element_wrapper_type'] = 'h2';
$handler->display->display_options['fields']['title_field']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
/* Field: Countries Name (selective) */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['fields']['name']['ui_name'] = 'Countries Name (selective)';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '<li class="list-country">[name]</li>';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['name']['element_wrapper_class'] = 'ef-field-metadata';
/* Field: Display deliverable kind/type and date */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Display deliverable kind/type and date';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
  
  $node = node_load($data->nid);
  
  //Content type
  $type = $node->type;

  // deliverable kinds
  $tid = $node->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);
  
  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    $name = str_replace("ef_","EF ",$name);


  }

  if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
    $name = \'Research in Focus\';
  }elseif($tid == 13744){
    $name = \'Comparative analytical report\';
  }elseif($tid == 13745){
    $name = \'Annual update\';
  }elseif($tid == 13746){
    $name = \'Representativeness study\';
  }



  // publication date
  $date_ts = $node->published_at;
  $date = date(\'d F Y\', $date_ts);
  

?>

<?php if(isset($name)): ?>
  <li class="list-delib-kind"><?php print $name; ?></li>
<?php endif; ?>

<?php if(isset($date)): ?>
  <li class="list-pub-date"><?php print $date; ?></li>
<?php endif; ?>
';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Eurwork link */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Eurwork link';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
global $base_url;
?>
<a href="<?php print $base_url . \'/observatories/eurwork\'; ?>">Eurwork</a>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '<li class="list-observatory">[php_1]</li>';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_observatory']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_observatory']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: List info */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'List info';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="metadata-items inline-list">
  [name]
  [php]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_class'] = 'img-ef-article';
$handler->display->display_options['fields']['field_ef_main_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'topical-update-img-list',
  'image_link' => '',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Body (Summary) */
$handler->display->display_options['fields']['body_1']['id'] = 'body_1';
$handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_1']['field'] = 'body';
$handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
$handler->display->display_options['fields']['body_1']['label'] = '';
$handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body_1']['settings'] = array(
  'trim_length' => '200',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field:  Image css classes  */
$handler->display->display_options['fields']['field_ef_main_image_1']['id'] = 'field_ef_main_image_1';
$handler->display->display_options['fields']['field_ef_main_image_1']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['ui_name'] = ' Image css classes ';
$handler->display->display_options['fields']['field_ef_main_image_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image_1']['settings'] = array(
  'image_style' => 'topical-update-img',
  'image_link' => '',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search articles';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, content';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'ef_search';
$handler->display->display_options['filters']['combine']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['combine']['fields'] = array(
  'title_field' => 'title_field',
  'body_1' => 'body_1',
);
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Countries';
$handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'name_list';
$handler->display->display_options['filters']['name_list']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['name_list']['configuration'] = '1';
$handler->display->display_options['filters']['name_list']['filter'] = array(
  'enabled' => '0',
  'continents' => array(
    'EU' => 'EU',
  ),
);
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic ';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['identifier'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
/* Filter criterion: Content: Sector (field_ef_sector) */
$handler->display->display_options['filters']['field_ef_sector_tid']['id'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['table'] = 'field_data_field_ef_sector';
$handler->display->display_options['filters']['field_ef_sector_tid']['field'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_sector_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['operator_id'] = 'field_ef_sector_tid_op';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['label'] = 'Sector ';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['operator'] = 'field_ef_sector_tid_op';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['identifier'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_sector_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_sector_tid']['vocabulary'] = 'ef_sectors';
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of Publication';
$handler->display->display_options['filters']['published_at']['expose']['operator'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['identifier'] = 'published_at';
$handler->display->display_options['filters']['published_at']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_report' => 'ef_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['value'] = array(
  13188 => '13188',
);
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator_id'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['identifier'] = 'ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['error_message'] = FALSE;
$handler->display->display_options['path'] = 'observatories/eurwork/articles';
$handler->display->display_options['menu']['title'] = 'News';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Survey reports page */
$handler = $view->new_display('page', 'Survey reports page', 'page_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Survey reports';
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['type'] = 'lightbox2__lightbox__medium__medium';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Body (Summary) */
$handler->display->display_options['fields']['body_1']['id'] = 'body_1';
$handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_1']['field'] = 'body';
$handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
$handler->display->display_options['fields']['body_1']['label'] = '';
$handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body_1']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-topic">
    [field_ef_topic]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-observatory">
    [field_ef_observatory]
  </span>
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field:  Image css classes  */
$handler->display->display_options['fields']['field_ef_main_image_1']['id'] = 'field_ef_main_image_1';
$handler->display->display_options['fields']['field_ef_main_image_1']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['ui_name'] = ' Image css classes ';
$handler->display->display_options['fields']['field_ef_main_image_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_report' => 'ef_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search articles';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['value'] = array(
  12176 => '12176',
);
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator_id'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['label'] = 'Observatory (field_ef_observatory)';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['identifier'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['error_message'] = FALSE;
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/emcc/erm/survey-reports';
$handler->display->display_options['menu']['title'] = 'News';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
$view = new view();
$view->name = 'ef_car_reports';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CAR reports';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Comparative information';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear all';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
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
  'date_filter' => array(
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
  'field_ef_theme_tid' => array(
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
  'field_ef_observatory_tid_1' => array(
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
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'no-ef-image';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'changed' => 'changed',
  'type' => 'type',
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_topic' => 'field_ef_topic',
  'field_ef_observatory' => 'field_ef_observatory',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['type'] = 'lightbox2__lightbox__medium__medium';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Body (Summary) */
$handler->display->display_options['fields']['body_1']['id'] = 'body_1';
$handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_1']['field'] = 'body';
$handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
$handler->display->display_options['fields']['body_1']['label'] = '';
$handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body_1']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Topic (field_ef_topic) (selective) */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-topic">
    [field_ef_topic]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-observatory">
    [field_ef_observatory]
  </span>
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_comparative_analytical_report' => 'ef_comparative_analytical_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search reports';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Updated date (Year) */
$handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['table'] = 'node';
$handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['ui_name'] = 'Updated date (Year)';
$handler->display->display_options['filters']['date_filter']['group'] = 1;
$handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
$handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Year';
$handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
$handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
$handler->display->display_options['filters']['date_filter']['year_range'] = '-5:+5';
$handler->display->display_options['filters']['date_filter']['date_fields'] = array(
  'node.changed' => 'node.changed',
);
/* Filter criterion: Themes */
$handler->display->display_options['filters']['field_ef_theme_tid']['id'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['filters']['field_ef_theme_tid']['field'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['ui_name'] = 'Themes';
$handler->display->display_options['filters']['field_ef_theme_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_theme_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['operator_id'] = 'field_ef_theme_tid_op';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['label'] = 'Themes';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['operator'] = 'field_ef_theme_tid_op';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['identifier'] = 'ef_theme_topic';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_theme_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_theme_tid']['vocabulary'] = 'ef_themes';
$handler->display->display_options['filters']['field_ef_theme_tid']['error_message'] = FALSE;
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator_id'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['label'] = 'Observatory (field_ef_observatory)';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['identifier'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['error_message'] = FALSE;

/* Display: CAR reports page */
$handler = $view->new_display('page', 'CAR reports page', 'car_reports_page');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_comparative_analytical_report' => 'ef_comparative_analytical_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search reports';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic ';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['identifier'] = 'field_ef_topic_tid';
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
$handler->display->display_options['path'] = 'comparative-information';
$handler->display->display_options['menu']['title'] = 'News';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: EMCC CAR reports page */
$handler = $view->new_display('page', 'EMCC CAR reports page', 'emcc_car_reports_page');
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
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
  'published_at' => array(
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
  'field_ef_topic_tid_selective' => array(
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
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['type'] = 'lightbox2__lightbox__medium__medium';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Published at (selective) */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['ui_name'] = 'Published at (selective)';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'year';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Body (Summary) */
$handler->display->display_options['fields']['body_1']['id'] = 'body_1';
$handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_1']['field'] = 'body';
$handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
$handler->display->display_options['fields']['body_1']['label'] = '';
$handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body_1']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Topic (field_ef_topic) (selective) */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-topic">
    [field_ef_topic]
  </span>
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_comparative_analytical_report' => 'ef_comparative_analytical_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search reports';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of Publication';
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
);
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['value'] = array(
  12176 => '12176',
);
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator_id'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['label'] = 'Observatory (field_ef_observatory)';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['identifier'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['error_message'] = FALSE;
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic ';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/emcc/comparative-information';
$handler->display->display_options['menu']['title'] = 'News';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: EurWORK CAR reports page */
$handler = $view->new_display('page', 'EurWORK CAR reports page', 'page_1');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
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
  'field_ef_topic_tid_selective' => array(
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
  'field_ef_sector_tid_selective' => array(
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
  'published_at' => array(
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
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_topic' => 'field_ef_topic',
  'type' => 'type',
  'field_ef_observatory' => 'field_ef_observatory',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'EurWORK\'s comparative information is based on contributions from the <a href="network-of-european-correspondents">Network of Eurofound Correspondents</a> within all 28 EU Member States and Norway. Comparative analytical reports provide an EU-wide overview of a selected topic, based on national questionnaires. ';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<span class="view-header-results">@total items found</span>';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No results.Please try again.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Display Country (delta) */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display Country (delta)';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
  
  $node = node_load($data->nid);
  
  //Country delta
  $iso2 = $node->field_ef_eu_related_countries;
  $variable = $iso2[\'und\'][0][\'iso2\'];
  
  
  $sql = "SELECT DISTINCT cc.name 
             FROM node n
             INNER JOIN field_data_field_ef_eu_related_countries c on c.entity_id = n.nid
             INNER JOIN countries_country cc on c.field_ef_eu_related_countries_iso2 = cc.iso2
             WHERE n.type = \'ef_comparative_analytical_report\' 
             AND cc.iso2 = \'$variable\'"; 
  
  $country = db_query($sql)->fetchAll();
  

?>
<?php if(!empty($country)): ?>
  <li class="list-country"><?php print $country[0]->name; ?></li>
<?php endif; ?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Display deliverable kind/type and date */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Display deliverable kind/type and date';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
  
  $node = node_load($data->nid);
  
  //Content type
  $type = $node->type;

  // deliverable kinds
  $tid = $node->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);
  
  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    $name = str_replace("ef_","EF ",$name);
    $name = str_replace("_"," ",$name);
  }

  if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
    $name = \'Research in Focus\';
  }elseif($tid == 13744){
    $name = \'Comparative analytical report\';
  }elseif($tid == 13745){
    $name = \'Annual update\';
  }elseif($tid == 13746){
    $name = \'Representativeness study\';
  }



  // publication date
  $date_ts = $node->published_at;
  $date = date(\'d F Y\', $date_ts);
  

?>

<?php if(isset($name)): ?>
  <li class="list-delib-kind"><?php print $name; ?></li>
<?php endif; ?>

<?php if(isset($date)): ?>
  <li class="list-pub-date"><?php print $date; ?></li>
<?php endif; ?>
';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Eurwork link */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['ui_name'] = 'Eurwork link';
$handler->display->display_options['fields']['php_2']['label'] = '';
$handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
global $base_url;
?>
<a href="<?php print $base_url . \'/observatories/eurwork\'; ?>">Eurwork</a>';
$handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '<li class="list-country">[php_2]</li>';
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
/* Field: list info */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'list info';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="metadata-items inline-list">
  [php_1] 
  [php]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Content: Documents */
$handler->display->display_options['fields']['field_ef_documents']['id'] = 'field_ef_documents';
$handler->display->display_options['fields']['field_ef_documents']['table'] = 'field_data_field_ef_documents';
$handler->display->display_options['fields']['field_ef_documents']['field'] = 'field_ef_documents';
$handler->display->display_options['fields']['field_ef_documents']['label'] = '';
$handler->display->display_options['fields']['field_ef_documents']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_documents']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_documents']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_documents']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_documents']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_documents']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_documents']['delta_offset'] = '0';
/* Field: Body (Summary) */
$handler->display->display_options['fields']['body_1']['id'] = 'body_1';
$handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_1']['field'] = 'body';
$handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
$handler->display->display_options['fields']['body_1']['label'] = '';
$handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_1']['element_wrapper_type'] = 'p';
$handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body_1']['settings'] = array(
  'trim_length' => '200',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search comparative information';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'ef_search';
$handler->display->display_options['filters']['combine']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['combine']['fields'] = array(
  'title' => 'title',
);
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic ';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['identifier'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
/* Filter criterion: Content: Sector (field_ef_sector) */
$handler->display->display_options['filters']['field_ef_sector_tid']['id'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['table'] = 'field_data_field_ef_sector';
$handler->display->display_options['filters']['field_ef_sector_tid']['field'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_sector_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['operator_id'] = 'field_ef_sector_tid_op';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['label'] = 'Sector ';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['operator'] = 'field_ef_sector_tid_op';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['identifier'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_sector_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_sector_tid']['vocabulary'] = 'ef_sectors';
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Publication Year';
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
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_comparative_analytical_report' => 'ef_comparative_analytical_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['value'] = array(
  13188 => '13188',
);
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator_id'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['label'] = 'Observatory (field_ef_observatory)';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['operator'] = 'field_ef_observatory_tid_1_op';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['expose']['identifier'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['error_message'] = FALSE;
/* Filter criterion: Content: Deliverable kind (field_ef_deliverable_kind) */
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['id'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['table'] = 'field_data_field_ef_deliverable_kind';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['field'] = 'field_ef_deliverable_kind_tid';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['operator'] = 'not';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['value'] = array(
  13746 => '13746',
);
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['vocabulary'] = 'ef_deliverable_kinds';
/* Filter criterion: Except Representativeness */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['ui_name'] = 'Except Representativeness';
$handler->display->display_options['filters']['php']['group'] = 1;
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = '//representativeness tid 12659
$topic =12659;

$node_result = node_load($data->nid);
$topics = $node_result->field_ef_topic[\'und\'];

foreach( $topics as $valor){
  if($valor == $topic)
     $flag = true;
}

if($flag){return TRUE;}
';
$handler->display->display_options['path'] = 'observatories/eurwork/comparative-information';
$handler->display->display_options['menu']['title'] = 'News';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
$view = new view();
$view->name = 'ef_case_studies';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Case studies';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Case studies';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  1 => '1',
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
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
  'name_list' => array(
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
  'field_ef_case_study_sectors_tid' => array(
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = 'These 102 cases, dating from 2006-2007, are examples of \'win-win situations\', showing that it is possible to combine quality of work and employment with economic performance. They deal with key dimensions of the Lisbon strategy such as employability, increasing the labour market participation of underrepresented groups and people at risk of exclusion, pay, flexibility, and business creation and entrepreneurship. The involvement of the social partners at company and sectoral level is a significant aspect of the development of these policies and their outcomes.
';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found (page @current_page of @page_count)';
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['content'] = '<span class="view-footer-results">Displaying @start - @end of @total</span>';
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'Country';
/* Relationship: Content: Case study name (field_ef_case_study_name) */
$handler->display->display_options['relationships']['field_ef_case_study_name_tid']['id'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['relationships']['field_ef_case_study_name_tid']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['relationships']['field_ef_case_study_name_tid']['field'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['relationships']['field_ef_case_study_name_tid']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = '';
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Case study name */
$handler->display->display_options['fields']['field_ef_case_study_name']['id'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['field'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_wrapper_class'] = 'ef-field-metadata';
/* Field: Countries: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_wrapper_class'] = 'ef-field-metadata';
/* Field: Body (Summary or trimmed 200) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 200)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Taxonomy term: Description */
$handler->display->display_options['fields']['description_field']['id'] = 'description_field';
$handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
$handler->display->display_options['fields']['description_field']['field'] = 'description_field';
$handler->display->display_options['fields']['description_field']['relationship'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['fields']['description_field']['label'] = '';
$handler->display->display_options['fields']['description_field']['exclude'] = TRUE;
$handler->display->display_options['fields']['description_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="case-study-result">

    <h3 class="case-study-title">[title]</h3>
    
    <div class="case-study-subtitle row">
        <h6 class="cs-name large-6 columns">[field_ef_case_study_name]</h6>
        <div class="large-6 columns text-right">
            <i class="fa fa-calendar"></i>
            [published_at]
        </div>
    </div>
    
    <div class="row case-study-location-size">
        <div class="case-study-location large-6 columns">
            <ul class="cs-location-list inline-list">
                <li><i class="fa fa-globe"></i></li>
                <li class="cs-country">[field_country_case_study_term]</li>
                <li class="cs-study-region">[field_region]</li>
            </ul>
        </div>
        <div class="case-study-size large-6 columns">
            <ul class="cs-size-list inline-list">
                <li class="cs-org-size">
                    <i class="fa fa-users"></i>Organisation Size
                    <p>[field_ef_organisation_size]</p>
                </li>
                <li class="cs-est-size">
                    <i class="fa fa-user"></i>Establishment Size
                    <p>[field_affected_establishment_siz]</p>
                </li>
            </ul>
        </div> 
    </div>

    <div class="case-study-body">
        [body]
        <div class="gradient"></div>
    </div>

    <div class="case-study-features row">
        <ul class="cs-features-list-left large-4 columns">
            <li class="cs-type-restructuring">
                <span>Type of restructuring</span>
                <p>[field_type_of_restructuring]</p>
            </li>
            <li class="cs-ownership">
                <span>Ownership</span>
                <p>[field_ownership]</p>
            </li>
            <li class="cs-sectors">
                <span>Sectors</span>
                <p>[field_ef_case_study_sectors]</p>
            </li>
            <li class="cs-actors">
                <span>Involved actors</span>
                <p>[field_involved_actors]</p>
            </li>
        </ul>
        <ul class="cs-features-list-right large-6 large-offset-2 columns">
            <li class="cs-ant-changes">
                <span>Anticipation of change activities</span>
                <p>[field_anticipation_of_change_act]</p>
            </li>
            <li class="cs-mng-changes">
                <span>Management of change activities</span>
                <p>[field_management_of_change_activ]</p>
            </li>
        </ul>
    </div>

    <div class="cs-keywords">
        <div><i class="fa fa-tag"></i><span>keywords</span></div>
        <p>[field_keywords]</p>
    </div>

</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_case_study' => 'ef_case_study',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Case study name (field_ef_case_study_name) */
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['id'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['field'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['value'] = array(
  13776 => '13776',
);
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['vocabulary'] = 'ef_case_study_names';
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search case studies';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Country */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['filters']['name_list']['ui_name'] = 'Country';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'country';
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
/* Filter criterion: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['id'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['field'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['label'] = 'Sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['identifier'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Type of measure (field_ef_type_of_measure) */
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['id'] = 'field_ef_type_of_measure_tid';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['table'] = 'field_data_field_ef_type_of_measure';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['field'] = 'field_ef_type_of_measure_tid';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['expose']['operator_id'] = 'field_ef_type_of_measure_tid_op';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['expose']['label'] = 'Type of measure';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['expose']['operator'] = 'field_ef_type_of_measure_tid_op';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['expose']['identifier'] = 'field_ef_type_of_measure_tid';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['reduce_duplicates'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['vocabulary'] = 'ef_case_study_type_of_measure';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid']['error_message'] = FALSE;

/* Display: EMCC - Greening of industry */
$handler = $view->new_display('page', 'EMCC - Greening of industry', 'emcc_greening');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Greening of industry';
$handler->display->display_options['display_description'] = 'Greening of industry - Case studies - EMCC';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<div class="cs-intro">
<p>
These 48 company case studies are examples of good practice in the anticipation and management of green change in 10 sectors. <p>Analysis focuses on how to strengthen competitiveness and increase both the quantity and quality of jobs while protecting the environment. Collaborative approaches involving the social partners, public authorities, education and training providers, non-government organisations and other actors are of particular interest. It is hoped that these cases will provide useful insights and ideas to other companies in similar sectors.
</div>';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found (page @current_page of @page_count)';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Case study name */
$handler->display->display_options['fields']['field_ef_case_study_name']['id'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['field'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_case_study_name']['settings'] = array(
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
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Country filter */
$handler->display->display_options['fields']['field_country_case_study_term']['id'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['field'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['ui_name'] = 'Country filter';
$handler->display->display_options['fields']['field_country_case_study_term']['label'] = '';
$handler->display->display_options['fields']['field_country_case_study_term']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_case_study_term']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country_case_study_term']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Organisation Size (field_ef_organisation_size) (selective) */
$handler->display->display_options['fields']['field_ef_organisation_size']['id'] = 'field_ef_organisation_size';
$handler->display->display_options['fields']['field_ef_organisation_size']['table'] = 'field_data_field_ef_organisation_size';
$handler->display->display_options['fields']['field_ef_organisation_size']['field'] = 'field_ef_organisation_size';
$handler->display->display_options['fields']['field_ef_organisation_size']['ui_name'] = 'Organisation Size (field_ef_organisation_size) (selective)';
$handler->display->display_options['fields']['field_ef_organisation_size']['label'] = '';
$handler->display->display_options['fields']['field_ef_organisation_size']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_organisation_size']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_organisation_size']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_organisation_size']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Body (trimmed) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (trimmed)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
$handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Sectors */
$handler->display->display_options['fields']['field_ef_case_study_sectors']['id'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['field'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['ui_name'] = 'Sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_case_study_sectors']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="case-study-result">

    <h3 class="case-study-title">[title]</h3>
    
    <div class="case-study-subtitle row">
        <h6 class="cs-name large-6 columns">[field_ef_case_study_name]</h6>
        <div class="large-6 columns text-right">
            <i class="fa fa-calendar"></i>
            [published_at]
        </div>
    </div>
    
    <div class="row case-study-location-size">
        <div class="case-study-location large-6 columns">
            <ul class="cs-location-list inline-list">
                <li><i class="fa fa-globe"></i></li>
                <li class="cs-country">[field_country_case_study_term]</li>
            </ul>
        </div>
        <div class="case-study-size large-6 columns">
            <ul class="cs-size-list inline-list">
                <li class="cs-est-size">
                    <i class="fa fa-users"></i>Organisation Size
                    <p>[field_ef_organisation_size]</p>
                </li>
            </ul>
        </div> 
    </div>

    <div class="case-study-body">
        [body]
        <div class="gradient"></div>
    </div>

    <div class="case-study-features row">
        
       <ul class="cs-features-list-left">

            <li class="cs-sectors">
                <span>Sectors:</span>
                <p>[field_ef_case_study_sectors]</p>
            </li>

        </ul>

    </div>



</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  'ef_case_study' => 'ef_case_study',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Case study name (field_ef_case_study_name) */
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['id'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['field'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['value'] = array(
  13774 => '13774',
);
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['vocabulary'] = 'ef_case_study_names';
/* Filter criterion: Content: Title (title_field) */
$handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
$handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['group'] = 1;
$handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
$handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Case study name';
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
/* Filter criterion: Country filter */
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['id'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['field'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['ui_name'] = 'Country filter';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['identifier'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Sectors */
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['id'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['field'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['ui_name'] = 'Sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['label'] = 'Sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['identifier'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Organisation Size (field_ef_organisation_size) (selective) */
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['id'] = 'field_ef_organisation_size_tid_selective';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['table'] = 'field_data_field_ef_organisation_size';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['field'] = 'field_ef_organisation_size_tid_selective';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['ui_name'] = 'Organisation Size (field_ef_organisation_size) (selective)';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['label'] = 'Organisation Size';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['identifier'] = 'field_ef_organisation_size_tid_selective';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/emcc/case-studies/the-greening-of-industries-in-the-eu';

/* Display: EMCC - Tackling undeclared work */
$handler = $view->new_display('page', 'EMCC - Tackling undeclared work', 'emcc_tackling');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Tackling undeclared work database';
$handler->display->display_options['display_description'] = 'Tackling undeclared work - Case studies - EMCC';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<div class="cs-intro">
<p>
Undeclared work can be defined as work which is in itself legal but is not declared to the authorities for tax, social security and/or labour law purposes. Across the 28 Member States of the European Union, a great deal of effort is being invested into developing and testing policy measures that aim to tackle undeclared work.
</p>
</div>';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found (page @current_page of @page_count)';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Case study name */
$handler->display->display_options['fields']['field_ef_case_study_name']['id'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['field'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_case_study_name']['settings'] = array(
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
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Country (field_country_case_study_term) (selective) */
$handler->display->display_options['fields']['field_country_case_study_term']['id'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['field'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['ui_name'] = 'Country (field_country_case_study_term) (selective)';
$handler->display->display_options['fields']['field_country_case_study_term']['label'] = '';
$handler->display->display_options['fields']['field_country_case_study_term']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_case_study_term']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country_case_study_term']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_case_study_term']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: body trimmed */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'body trimmed';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['fields']['field_ef_case_study_sectors']['id'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['field'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_case_study_sectors']['delta_offset'] = '0';
/* Field: Type of measure (field_ef_type_of_measure) (selective) */
$handler->display->display_options['fields']['field_ef_type_of_measure']['id'] = 'field_ef_type_of_measure';
$handler->display->display_options['fields']['field_ef_type_of_measure']['table'] = 'field_data_field_ef_type_of_measure';
$handler->display->display_options['fields']['field_ef_type_of_measure']['field'] = 'field_ef_type_of_measure';
$handler->display->display_options['fields']['field_ef_type_of_measure']['ui_name'] = 'Type of measure (field_ef_type_of_measure) (selective)';
$handler->display->display_options['fields']['field_ef_type_of_measure']['label'] = '';
$handler->display->display_options['fields']['field_ef_type_of_measure']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_type_of_measure']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_type_of_measure']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_type_of_measure']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_type_of_measure']['delta_offset'] = '0';
/* Field: DISPLAY */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'DISPLAY';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="case-study-result">

    <h3 class="case-study-title">[title]</h3>
    
    <div class="case-study-subtitle row">
        <!--<h6 class="cs-name large-6 columns">[field_ef_case_study_name]</h6>-->
        <div class="large-12 columns text-right">
            <i class="fa fa-calendar"></i>
            [published_at]
        </div>
    </div>
    
    <div class="row case-study-location-size">
        
        <div class="case-study-location large-6 columns">
            <ul class="cs-location-list inline-list">
                <li><i class="fa fa-globe"></i></li>
                <li class="cs-country">[field_country_case_study_term]</li>
            </ul>
        </div>
 
    </div>

    <div class="case-study-body">
        [body]
        <div class="gradient"></div>
    </div>

    <div class="case-study-features row">
        <ul class="cs-features-list-left large-4 columns">

            <li class="cs-sectors">
                <span>Sectors</span>
                <p>[field_ef_case_study_sectors]</p>
            </li>
            
        </ul>
        <ul class="cs-features-list-right large-6 large-offset-2 columns">
            
            <li class="cs-ant-changes">
                <span>Type of measure:</span>
                <p>[field_ef_type_of_measure]</p>
            </li>
            
        </ul>
    </div>

</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  'ef_case_study' => 'ef_case_study',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Case study name (field_ef_case_study_name) */
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['id'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['field'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['value'] = array(
  13776 => '13776',
);
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['vocabulary'] = 'ef_case_study_names';
/* Filter criterion: Content: Title (title_field) */
$handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
$handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['group'] = 1;
$handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
$handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Case study name';
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
/* Filter criterion: Country (field_country_case_study_term) (selective) */
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['id'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['field'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['ui_name'] = 'Country (field_country_case_study_term) (selective)';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['identifier'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['id'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['field'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['label'] = 'Sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['identifier'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Type of measure (field_ef_type_of_measure) (selective) */
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['id'] = 'field_ef_type_of_measure_tid_selective';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['table'] = 'field_data_field_ef_type_of_measure';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['field'] = 'field_ef_type_of_measure_tid_selective';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['ui_name'] = 'Type of measure (field_ef_type_of_measure) (selective)';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['expose']['label'] = 'Type of measure';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['expose']['identifier'] = 'field_ef_type_of_measure_tid_selective';
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_type_of_measure_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'data/tackling-undeclared-work-in-europe/database';

/* Display: EurWork - Attractive workplace for all */
$handler = $view->new_display('page', 'EurWork - Attractive workplace for all', 'eurwork_attractive');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Attractive workplace for all';
$handler->display->display_options['display_description'] = 'Attractive workplace for all - Case studies - EurWork';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<div class="cs-intro">
<p>
These 102 cases, dating from 2006-2007, are examples of \'win-win situations\', showing that it is possible to combine quality of work and employment with economic performance. They deal with key dimensions of the Lisbon strategy such as employability, increasing the labour market participation of underrepresented groups and people at risk of exclusion, pay, flexibility, and business creation and entrepreneurship. The involvement of the social partners at company and sectoral level is a significant aspect of the development of these policies and their outcomes.
</p>
</div>';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found (page @current_page of @page_count)';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Case study name */
$handler->display->display_options['fields']['field_ef_case_study_name']['id'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['field'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_case_study_name']['settings'] = array(
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
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Country (field_country_case_study_term) (selective) */
$handler->display->display_options['fields']['field_country_case_study_term']['id'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['field'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['ui_name'] = 'Country (field_country_case_study_term) (selective)';
$handler->display->display_options['fields']['field_country_case_study_term']['label'] = '';
$handler->display->display_options['fields']['field_country_case_study_term']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_case_study_term']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country_case_study_term']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_case_study_term']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Body (trimmed) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (trimmed)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['fields']['field_ef_case_study_sectors']['id'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['field'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_case_study_sectors']['delta_offset'] = '0';
/* Field: Category (field_ef_case_study_category) (selective) */
$handler->display->display_options['fields']['field_ef_case_study_category']['id'] = 'field_ef_case_study_category';
$handler->display->display_options['fields']['field_ef_case_study_category']['table'] = 'field_data_field_ef_case_study_category';
$handler->display->display_options['fields']['field_ef_case_study_category']['field'] = 'field_ef_case_study_category';
$handler->display->display_options['fields']['field_ef_case_study_category']['ui_name'] = 'Category (field_ef_case_study_category) (selective)';
$handler->display->display_options['fields']['field_ef_case_study_category']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_category']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_category']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_case_study_category']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="case-study-result">

    <h3 class="case-study-title">[title]</h3>
    
    <div class="case-study-subtitle row">
        <h6 class="cs-name large-6 columns">[field_ef_case_study_name]</h6>
        <div class="large-6 columns text-right">
            <i class="fa fa-calendar"></i>
            [published_at]
        </div>
    </div>
    
    <div class="row case-study-location-size">
        <div class="case-study-location large-6 columns">
            <ul class="cs-location-list inline-list">
                <li><i class="fa fa-globe"></i></li>
                <li class="cs-country">[field_country_case_study_term]</li>
            </ul>
        </div> 
    </div>

    <div class="case-study-body">
        [body]
        <div class="gradient"></div>
    </div>

    <div class="case-study-features row">
        <ul class="cs-features-list-left large-4 columns">

            <li class="cs-sectors">
                <span>Sectors</span>
                <p>[field_ef_case_study_sectors]</p>
            </li>

        </ul>
        <ul class="cs-features-list-right large-6 large-offset-2 columns">

            <li class="cs-ant-changes">
                <span>Category</span>
                <p>[field_ef_case_study_category]</p>
            </li>

        </ul>
    </div>

</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  'ef_case_study' => 'ef_case_study',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Case study name (field_ef_case_study_name) */
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['id'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['field'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['value'] = array(
  13777 => '13777',
);
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['vocabulary'] = 'ef_case_study_names';
/* Filter criterion: Content: Title (title_field) */
$handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
$handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['group'] = 1;
$handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
$handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Case Study Name';
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
/* Filter criterion: Country (field_country_case_study_term) (selective) */
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['id'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['field'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['ui_name'] = 'Country (field_country_case_study_term) (selective)';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['identifier'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['id'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['field'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['label'] = 'Sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['identifier'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Category (field_ef_case_study_category) (selective) */
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['id'] = 'field_ef_case_study_category_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['table'] = 'field_data_field_ef_case_study_category';
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['field'] = 'field_ef_case_study_category_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['ui_name'] = 'Category (field_ef_case_study_category) (selective)';
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['expose']['label'] = 'Category';
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['expose']['identifier'] = 'field_ef_case_study_category_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_category_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/eurwork/case-studies/attractive-workplace-for-all';

/* Display: EurWork - Ageing workforce */
$handler = $view->new_display('page', 'EurWork - Ageing workforce', 'eurwork_ageing');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Ageing workforce';
$handler->display->display_options['display_description'] = 'Ageing workforce - Case studies - EurWork';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<div class="cs-intro">
<p>
The retention of older workers in employment is an important objective not only of labour market policies but also for social protection budgets. The Foundation has gathered and analysed cases of good practice in age management, designed to improve job opportunities and working conditions for older workers. Each case study describes how the organisation approached the issue and what the results were in the medium to long term.
</p>
</div>';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found (page @current_page of @page_count)';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Case study name */
$handler->display->display_options['fields']['field_ef_case_study_name']['id'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['field'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_case_study_name']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country (field_country_case_study_term) (selective) */
$handler->display->display_options['fields']['field_country_case_study_term']['id'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['field'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['ui_name'] = 'Country (field_country_case_study_term) (selective)';
$handler->display->display_options['fields']['field_country_case_study_term']['label'] = '';
$handler->display->display_options['fields']['field_country_case_study_term']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_case_study_term']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country_case_study_term']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_case_study_term']['settings'] = array(
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
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Organisation Size (field_ef_organisation_size) (selective) */
$handler->display->display_options['fields']['field_ef_organisation_size']['id'] = 'field_ef_organisation_size';
$handler->display->display_options['fields']['field_ef_organisation_size']['table'] = 'field_data_field_ef_organisation_size';
$handler->display->display_options['fields']['field_ef_organisation_size']['field'] = 'field_ef_organisation_size';
$handler->display->display_options['fields']['field_ef_organisation_size']['ui_name'] = 'Organisation Size (field_ef_organisation_size) (selective)';
$handler->display->display_options['fields']['field_ef_organisation_size']['label'] = '';
$handler->display->display_options['fields']['field_ef_organisation_size']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_organisation_size']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_organisation_size']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_organisation_size']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Body (trimmed) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (trimmed)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['fields']['field_ef_case_study_sectors']['id'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['field'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_case_study_sectors']['delta_offset'] = '0';
/* Field: Legal Form (field_ef_legal_form) (selective) */
$handler->display->display_options['fields']['field_ef_legal_form']['id'] = 'field_ef_legal_form';
$handler->display->display_options['fields']['field_ef_legal_form']['table'] = 'field_data_field_ef_legal_form';
$handler->display->display_options['fields']['field_ef_legal_form']['field'] = 'field_ef_legal_form';
$handler->display->display_options['fields']['field_ef_legal_form']['ui_name'] = 'Legal Form (field_ef_legal_form) (selective)';
$handler->display->display_options['fields']['field_ef_legal_form']['label'] = '';
$handler->display->display_options['fields']['field_ef_legal_form']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_legal_form']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_legal_form']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_legal_form']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Initiative Types (field_ef_initiative_types) (selective) */
$handler->display->display_options['fields']['field_ef_initiative_types']['id'] = 'field_ef_initiative_types';
$handler->display->display_options['fields']['field_ef_initiative_types']['table'] = 'field_data_field_ef_initiative_types';
$handler->display->display_options['fields']['field_ef_initiative_types']['field'] = 'field_ef_initiative_types';
$handler->display->display_options['fields']['field_ef_initiative_types']['ui_name'] = 'Initiative Types (field_ef_initiative_types) (selective)';
$handler->display->display_options['fields']['field_ef_initiative_types']['label'] = '';
$handler->display->display_options['fields']['field_ef_initiative_types']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_initiative_types']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_initiative_types']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_initiative_types']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_initiative_types']['delta_offset'] = '0';
/* Field: Target Groups (field_ef_target_groups) (selective) */
$handler->display->display_options['fields']['field_ef_target_groups']['id'] = 'field_ef_target_groups';
$handler->display->display_options['fields']['field_ef_target_groups']['table'] = 'field_data_field_ef_target_groups';
$handler->display->display_options['fields']['field_ef_target_groups']['field'] = 'field_ef_target_groups';
$handler->display->display_options['fields']['field_ef_target_groups']['ui_name'] = 'Target Groups (field_ef_target_groups) (selective)';
$handler->display->display_options['fields']['field_ef_target_groups']['label'] = '';
$handler->display->display_options['fields']['field_ef_target_groups']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_target_groups']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_target_groups']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_target_groups']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_target_groups']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="case-study-result">

    <h3 class="case-study-title">[title]</h3>
    
    <div class="case-study-subtitle row">
        <h6 class="cs-name large-6 columns">[field_ef_case_study_name]</h6>
        <div class="large-6 columns text-right">
            <i class="fa fa-calendar"></i>
            [published_at]
        </div>
    </div>
    
    <div class="row case-study-location-size">
        <div class="case-study-location large-6 columns">
            <ul class="cs-location-list inline-list">
                <li><i class="fa fa-globe"></i></li>
                <li class="cs-country">[field_country_case_study_term]</li>
            </ul>
        </div>
        <div class="case-study-size large-6 columns">
            <ul class="cs-size-list inline-list">
                <li class="cs-org-size">
                    <i class="fa fa-users"></i>Organisation Size
                    <p>[field_ef_organisation_size]</p>
                </li>
            </ul>
        </div> 
    </div>

    <div class="case-study-body">
        [body]
        <div class="gradient"></div>
    </div>

    <div class="case-study-features row">
        <ul class="cs-features-list-left large-4 columns">

            <li class="cs-ownership">
                <span>Legal form</span>
                <p>[field_ef_legal_form]</p>
            </li>
            <li class="cs-sectors">
                <span>Sectors</span>
                <p>[field_ef_case_study_sectors]</p>
            </li>
            <li class="cs-actors">
                <span>Type of measure</span>
                <p>[field_ef_type_of_measure]</p>
            </li>
        </ul>
        <ul class="cs-features-list-right large-6 large-offset-2 columns">
            <li class="cs-ant-changes">
                <span>Initiative Types</span>
                <p>[field_ef_initiative_types]</p>
            </li>
            <li class="cs-mng-changes">
                <span>Target Groups</span>
                <p>[field_ef_target_groups]</p>
            </li>
        </ul>
    </div>

</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  'ef_case_study' => 'ef_case_study',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Case study name (field_ef_case_study_name) */
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['id'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['field'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['value'] = array(
  13778 => '13778',
);
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['vocabulary'] = 'ef_case_study_names';
/* Filter criterion: Content: Title (title_field) */
$handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
$handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['group'] = 1;
$handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
$handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Case Study Name';
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
/* Filter criterion: Country (field_country_case_study_term) (selective) */
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['id'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['field'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['ui_name'] = 'Country (field_country_case_study_term) (selective)';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['identifier'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['id'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['field'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['label'] = 'Sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['identifier'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Organisation Size (field_ef_organisation_size) (selective) */
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['id'] = 'field_ef_organisation_size_tid_selective';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['table'] = 'field_data_field_ef_organisation_size';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['field'] = 'field_ef_organisation_size_tid_selective';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['ui_name'] = 'Organisation Size (field_ef_organisation_size) (selective)';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['label'] = 'Organisation Size';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['identifier'] = 'field_ef_organisation_size_tid_selective';
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_organisation_size_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Initiative Types (field_ef_initiative_types) (selective) */
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['id'] = 'field_ef_initiative_types_tid_selective';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['table'] = 'field_data_field_ef_initiative_types';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['field'] = 'field_ef_initiative_types_tid_selective';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['ui_name'] = 'Initiative Types (field_ef_initiative_types) (selective)';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['label'] = 'Initiative Types';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['identifier'] = 'field_ef_initiative_types_tid_selective';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Legal Form (field_ef_legal_form) (selective) */
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['id'] = 'field_ef_legal_form_tid_selective';
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['table'] = 'field_data_field_ef_legal_form';
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['field'] = 'field_ef_legal_form_tid_selective';
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['ui_name'] = 'Legal Form (field_ef_legal_form) (selective)';
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['expose']['label'] = 'Legal Form';
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['expose']['identifier'] = 'field_ef_legal_form_tid_selective';
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_legal_form_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Target Groups (field_ef_target_groups) (selective) */
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['id'] = 'field_ef_target_groups_tid_selective';
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['table'] = 'field_data_field_ef_target_groups';
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['field'] = 'field_ef_target_groups_tid_selective';
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['ui_name'] = 'Target Groups (field_ef_target_groups) (selective)';
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['expose']['label'] = 'Target Groups';
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['expose']['identifier'] = 'field_ef_target_groups_tid_selective';
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_target_groups_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/eurwork/case-studies/ageing-workforce';

/* Display: EurWork - Workers with care responsibilities */
$handler = $view->new_display('page', 'EurWork - Workers with care responsibilities', 'eurwork_workers');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Workers with care responsibilities';
$handler->display->display_options['display_description'] = 'Workers with care responsibilities - Case studies - EurWork';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<div class="cs-intro">
<p>
The interactions between employment and caring are becoming increasingly important in the face of demographic ageing in Europe. Sustainability of long-term care systems requires an extensive contribution from informal carers,while labour market requirements and contemporary lifestyles and aspirations encourage increased participation of women - the traditional providers of the larger share of informal care - in the labour force. An added factor is the expectation of a longer working life as retirement ages seem set to rise across the EU. A multipronged approach is needed to address the challenges in this area. This database highlights some 50 company initiatives that support workers with dependent-care responsibilities in 10 Member States. The research was carried out during 2009-2010.
</p>
</div>';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found (page @current_page of @page_count)';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Case study name */
$handler->display->display_options['fields']['field_ef_case_study_name']['id'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['field'] = 'field_ef_case_study_name';
$handler->display->display_options['fields']['field_ef_case_study_name']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_name']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_case_study_name']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country (field_country_case_study_term) (selective) */
$handler->display->display_options['fields']['field_country_case_study_term']['id'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['field'] = 'field_country_case_study_term';
$handler->display->display_options['fields']['field_country_case_study_term']['ui_name'] = 'Country (field_country_case_study_term) (selective)';
$handler->display->display_options['fields']['field_country_case_study_term']['label'] = '';
$handler->display->display_options['fields']['field_country_case_study_term']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_case_study_term']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country_case_study_term']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_case_study_term']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Body (trimmed) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (trimmed)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['fields']['field_ef_case_study_sectors']['id'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['field'] = 'field_ef_case_study_sectors';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['label'] = '';
$handler->display->display_options['fields']['field_ef_case_study_sectors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_case_study_sectors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_case_study_sectors']['delta_offset'] = '0';
/* Field: Initiative Types (field_ef_initiative_types) (selective) */
$handler->display->display_options['fields']['field_ef_initiative_types']['id'] = 'field_ef_initiative_types';
$handler->display->display_options['fields']['field_ef_initiative_types']['table'] = 'field_data_field_ef_initiative_types';
$handler->display->display_options['fields']['field_ef_initiative_types']['field'] = 'field_ef_initiative_types';
$handler->display->display_options['fields']['field_ef_initiative_types']['ui_name'] = 'Initiative Types (field_ef_initiative_types) (selective)';
$handler->display->display_options['fields']['field_ef_initiative_types']['label'] = '';
$handler->display->display_options['fields']['field_ef_initiative_types']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_initiative_types']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_initiative_types']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_initiative_types']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_initiative_types']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="case-study-result">

    <h3 class="case-study-title">[title]</h3>
    
    <div class="case-study-subtitle row">
        <h6 class="cs-name large-6 columns">[field_ef_case_study_name]</h6>
        <div class="large-6 columns text-right">
            <i class="fa fa-calendar"></i>
            [published_at]
        </div>
    </div>
    
    <div class="row case-study-location-size">
        <div class="case-study-location large-6 columns">
            <ul class="cs-location-list inline-list">
                <li><i class="fa fa-globe"></i></li>
                <li class="cs-country">[field_country_case_study_term]</li>
            </ul>
        </div>
    </div>

    <div class="case-study-body">
        [body]
        <div class="gradient"></div>
    </div>

    <div class="case-study-features row">
        <ul class="cs-features-list-left large-4 columns">

            <li class="cs-sectors">
                <span>Sectors</span>
                <p>[field_ef_case_study_sectors]</p>
            </li>

        </ul>
        <ul class="cs-features-list-right large-6 large-offset-2 columns">
            <li class="cs-ant-changes">
                <span>Initiative Types </span>
                <p>[field_ef_initiative_types] </p>
            </li>

        </ul>
    </div>

</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  'ef_case_study' => 'ef_case_study',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Case study name (field_ef_case_study_name) */
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['id'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['table'] = 'field_data_field_ef_case_study_name';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['field'] = 'field_ef_case_study_name_tid';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['value'] = array(
  13775 => '13775',
);
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_case_study_name_tid']['vocabulary'] = 'ef_case_study_names';
/* Filter criterion: Content: Title (title_field) */
$handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
$handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['group'] = 1;
$handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
$handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Case study name';
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
/* Filter criterion: Country (field_country_case_study_term) (selective) */
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['id'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['table'] = 'field_data_field_country_case_study_term';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['field'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['ui_name'] = 'Country (field_country_case_study_term) (selective)';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['identifier'] = 'field_country_case_study_term_tid_selective';
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_case_study_term_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Sectors (field_ef_case_study_sectors) (selective) */
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['id'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['table'] = 'field_data_field_ef_case_study_sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['field'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['ui_name'] = 'Sectors (field_ef_case_study_sectors) (selective)';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['label'] = 'Sectors';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['identifier'] = 'field_ef_case_study_sectors_tid_selective';
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_case_study_sectors_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Initiative Types (field_ef_initiative_types) (selective) */
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['id'] = 'field_ef_initiative_types_tid_selective';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['table'] = 'field_data_field_ef_initiative_types';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['field'] = 'field_ef_initiative_types_tid_selective';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['ui_name'] = 'Initiative Types (field_ef_initiative_types) (selective)';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['label'] = 'Initiative Types';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['identifier'] = 'field_ef_initiative_types_tid_selective';
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_initiative_types_tid_selective']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'observatories/eurwork/case-studies/workers-with-care-responsibilities';

$view->save();
$view = new view();
$view->name = 'ef_national_contributions_export2';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node_revision';
$view->human_name = 'National contributions export';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'National contributions export';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  5 => '5',
  9 => '9',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 1,
    'secondary_label' => 'Select fields',
  ),
  'title_1' => array(
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
  'dynamic-field' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 1,
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
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'name' => 'name',
  'body-revision_id' => 'body-revision_id',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
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
  'body-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Revision */
$handler->display->display_options['relationships']['vid']['id'] = 'vid';
$handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['vid']['field'] = 'vid';
$handler->display->display_options['relationships']['vid']['ui_name'] = 'Revision';
$handler->display->display_options['relationships']['vid']['label'] = 'Revision';
/* Relationship: Revision node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Revision node';
$handler->display->display_options['relationships']['nid']['label'] = 'Revision node';
/* Relationship: Content (historical data): Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2_1']['id'] = 'field_ef_country_iso2_1';
$handler->display->display_options['relationships']['field_ef_country_iso2_1']['table'] = 'field_revision_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2_1']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2_1']['label'] = 'Country';
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content (historical data): Country */
$handler->display->display_options['fields']['field_ef_country-revision_id']['id'] = 'field_ef_country-revision_id';
$handler->display->display_options['fields']['field_ef_country-revision_id']['table'] = 'field_revision_field_ef_country';
$handler->display->display_options['fields']['field_ef_country-revision_id']['field'] = 'field_ef_country-revision_id';
$handler->display->display_options['fields']['field_ef_country-revision_id']['label'] = 'country';
$handler->display->display_options['fields']['field_ef_country-revision_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_country-revision_id']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): Body */
$handler->display->display_options['fields']['body-revision_id']['id'] = 'body-revision_id';
$handler->display->display_options['fields']['body-revision_id']['table'] = 'field_revision_body';
$handler->display->display_options['fields']['body-revision_id']['field'] = 'body-revision_id';
$handler->display->display_options['fields']['body-revision_id']['label'] = 'body';
$handler->display->display_options['fields']['body-revision_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body-revision_id']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['label'] = 'state';
$handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['relationship'] = 'vid';
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
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_national_contribution' => 'ef_national_contribution',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Content revision: Title */
$handler->display->display_options['filters']['title_1']['id'] = 'title_1';
$handler->display->display_options['filters']['title_1']['table'] = 'node_revision';
$handler->display->display_options['filters']['title_1']['field'] = 'title';
$handler->display->display_options['filters']['title_1']['operator'] = 'allwords';
$handler->display->display_options['filters']['title_1']['group'] = 1;
$handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['title_1']['expose']['description'] = 'Search title';
$handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
$handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
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
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_country_iso2_1';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Countries';
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
$handler->display->display_options['filters']['name_list']['configuration'] = '1';
$handler->display->display_options['filters']['name_list']['filter'] = array(
  'enabled' => '1',
  'continents' => array(
    'EU' => 'EU',
  ),
);
/* Filter criterion: Content: Dynamic Fields */
$handler->display->display_options['filters']['dynamic-field']['id'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['table'] = 'node';
$handler->display->display_options['filters']['dynamic-field']['field'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['relationship'] = 'vid';
$handler->display->display_options['filters']['dynamic-field']['exposed'] = TRUE;
$handler->display->display_options['filters']['dynamic-field']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['dynamic-field']['expose']['label'] = 'Fields';
$handler->display->display_options['filters']['dynamic-field']['expose']['description'] = 'Select the fields to display dynamically';
$handler->display->display_options['filters']['dynamic-field']['expose']['operator'] = 'dynamic-field_op';
$handler->display->display_options['filters']['dynamic-field']['expose']['identifier'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['dynamic-field']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['dynamic-field']['filterable_fields'] = array(
  'title' => 'title',
  'name' => 'name',
  'body-revision_id' => 'body-revision_id',
  'state' => 'state',
);
$handler->display->display_options['filters']['dynamic-field']['defaults_filterable_fields'] = array(
  'title' => 'title',
  'name' => 0,
  'body-revision_id' => 0,
  'state' => 0,
);
$handler->display->display_options['filters']['dynamic-field']['checkboxes'] = 1;
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
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
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
/* Field: Countries: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_ef_country_iso2_1';
$handler->display->display_options['fields']['name']['label'] = 'Country';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content (historical data): Body */
$handler->display->display_options['fields']['body-revision_id']['id'] = 'body-revision_id';
$handler->display->display_options['fields']['body-revision_id']['table'] = 'field_revision_body';
$handler->display->display_options['fields']['body-revision_id']['field'] = 'body-revision_id';
$handler->display->display_options['fields']['body-revision_id']['element_label_colon'] = FALSE;
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
$handler->display->display_options['path'] = 'national-contributions-export-old';

/* Display: Data export XLS */
$handler = $view->new_display('views_data_export', 'Data export XLS', 'views_data_export_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_xls';
$handler->display->display_options['style_options']['provide_file'] = 0;
$handler->display->display_options['style_options']['parent_sort'] = 1;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content (historical data): Country */
$handler->display->display_options['fields']['field_ef_country-revision_id']['id'] = 'field_ef_country-revision_id';
$handler->display->display_options['fields']['field_ef_country-revision_id']['table'] = 'field_revision_field_ef_country';
$handler->display->display_options['fields']['field_ef_country-revision_id']['field'] = 'field_ef_country-revision_id';
$handler->display->display_options['fields']['field_ef_country-revision_id']['label'] = 'country';
$handler->display->display_options['fields']['field_ef_country-revision_id']['element_label_colon'] = FALSE;
/* Field: Content (historical data): Body */
$handler->display->display_options['fields']['body-revision_id']['id'] = 'body-revision_id';
$handler->display->display_options['fields']['body-revision_id']['table'] = 'field_revision_body';
$handler->display->display_options['fields']['body-revision_id']['field'] = 'body-revision_id';
$handler->display->display_options['fields']['body-revision_id']['label'] = 'body';
$handler->display->display_options['fields']['body-revision_id']['element_label_colon'] = FALSE;
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
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
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Content revision: Title */
$handler->display->display_options['filters']['title_1']['id'] = 'title_1';
$handler->display->display_options['filters']['title_1']['table'] = 'node_revision';
$handler->display->display_options['filters']['title_1']['field'] = 'title';
$handler->display->display_options['filters']['title_1']['operator'] = 'allwords';
$handler->display->display_options['filters']['title_1']['group'] = 1;
$handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['title_1']['expose']['description'] = 'Search title';
$handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
$handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
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
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_country_iso2_1';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Countries';
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
/* Filter criterion: Content: Dynamic Fields */
$handler->display->display_options['filters']['dynamic-field']['id'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['table'] = 'node';
$handler->display->display_options['filters']['dynamic-field']['field'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['relationship'] = 'vid';
$handler->display->display_options['filters']['dynamic-field']['exposed'] = TRUE;
$handler->display->display_options['filters']['dynamic-field']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['dynamic-field']['expose']['label'] = 'Fields';
$handler->display->display_options['filters']['dynamic-field']['expose']['description'] = 'Select the fields to display dynamically';
$handler->display->display_options['filters']['dynamic-field']['expose']['operator'] = 'dynamic-field_op';
$handler->display->display_options['filters']['dynamic-field']['expose']['identifier'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['dynamic-field']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['dynamic-field']['filterable_fields'] = array(
  'title' => 'title',
  'field_ef_country-revision_id' => 'field_ef_country-revision_id',
  'body-revision_id' => 'body-revision_id',
  'state' => 'state',
);
$handler->display->display_options['filters']['dynamic-field']['defaults_filterable_fields'] = array(
  'title' => 'title',
  'field_ef_country-revision_id' => 0,
  'body-revision_id' => 0,
  'state' => 0,
);
$handler->display->display_options['filters']['dynamic-field']['checkboxes'] = 1;
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
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
);
$handler->display->display_options['path'] = 'views-data-export/national-contributions.xls';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);

/* Display: Data export DOC */
$handler = $view->new_display('views_data_export', 'Data export DOC', 'views_data_export_2');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_doc';
$handler->display->display_options['style_options']['provide_file'] = 0;
$handler->display->display_options['style_options']['parent_sort'] = 1;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content (historical data): Country */
$handler->display->display_options['fields']['field_ef_country-revision_id']['id'] = 'field_ef_country-revision_id';
$handler->display->display_options['fields']['field_ef_country-revision_id']['table'] = 'field_revision_field_ef_country';
$handler->display->display_options['fields']['field_ef_country-revision_id']['field'] = 'field_ef_country-revision_id';
$handler->display->display_options['fields']['field_ef_country-revision_id']['label'] = 'country';
$handler->display->display_options['fields']['field_ef_country-revision_id']['element_label_colon'] = FALSE;
/* Field: Content (historical data): Body */
$handler->display->display_options['fields']['body-revision_id']['id'] = 'body-revision_id';
$handler->display->display_options['fields']['body-revision_id']['table'] = 'field_revision_body';
$handler->display->display_options['fields']['body-revision_id']['field'] = 'body-revision_id';
$handler->display->display_options['fields']['body-revision_id']['label'] = 'body';
$handler->display->display_options['fields']['body-revision_id']['element_label_colon'] = FALSE;
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
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
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Content revision: Title */
$handler->display->display_options['filters']['title_1']['id'] = 'title_1';
$handler->display->display_options['filters']['title_1']['table'] = 'node_revision';
$handler->display->display_options['filters']['title_1']['field'] = 'title';
$handler->display->display_options['filters']['title_1']['operator'] = 'allwords';
$handler->display->display_options['filters']['title_1']['group'] = 1;
$handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['title_1']['expose']['description'] = 'Search title';
$handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
$handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
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
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_country_iso2_1';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Countries';
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
/* Filter criterion: Content: Dynamic Fields */
$handler->display->display_options['filters']['dynamic-field']['id'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['table'] = 'node';
$handler->display->display_options['filters']['dynamic-field']['field'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['relationship'] = 'vid';
$handler->display->display_options['filters']['dynamic-field']['exposed'] = TRUE;
$handler->display->display_options['filters']['dynamic-field']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['dynamic-field']['expose']['label'] = 'Fields';
$handler->display->display_options['filters']['dynamic-field']['expose']['description'] = 'Select the fields to display dynamically';
$handler->display->display_options['filters']['dynamic-field']['expose']['operator'] = 'dynamic-field_op';
$handler->display->display_options['filters']['dynamic-field']['expose']['identifier'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['dynamic-field']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['dynamic-field']['filterable_fields'] = array(
  'title' => 'title',
  'field_ef_country-revision_id' => 'field_ef_country-revision_id',
  'body-revision_id' => 'body-revision_id',
  'state' => 'state',
);
$handler->display->display_options['filters']['dynamic-field']['defaults_filterable_fields'] = array(
  'title' => 'title',
  'field_ef_country-revision_id' => 0,
  'body-revision_id' => 0,
  'state' => 0,
);
$handler->display->display_options['filters']['dynamic-field']['checkboxes'] = 1;
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
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
);
$handler->display->display_options['path'] = 'views-data-export/national-contributions.doc';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);

/* Display: Data export XML */
$handler = $view->new_display('views_data_export', 'Data export XML', 'views_data_export_3');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_xml';
$handler->display->display_options['style_options']['provide_file'] = 1;
$handler->display->display_options['style_options']['filename'] = '%view-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.xml';
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['style_options']['transform'] = 1;
$handler->display->display_options['style_options']['root_node'] = 'nodes';
$handler->display->display_options['style_options']['item_node'] = 'node';
$handler->display->display_options['style_options']['cdata_wrapper'] = array(
  'title' => 'title',
  'field_ef_country-revision_id' => 'field_ef_country-revision_id',
  'body-revision_id' => 'body-revision_id',
  'state' => 'state',
);
$handler->display->display_options['path'] = 'views-data-export/national-contributions.xml';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);

$view->save();
$view = new view();
$view->name = 'ef_network_quarterly_reports_export';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node_revision';
$view->human_name = 'Quarterly reports export';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Quarterly reports export';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view revisions';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 1,
    'secondary_label' => 'Select fields',
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
  'field_ef_quarter_value' => array(
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
  'dynamic-field' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 1,
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
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'title' => 'title',
  'type' => 'type',
  'field_ef_quartely_report_year-revision_id' => 'field_ef_quartely_report_year-revision_id',
  'field_ef_quarter-revision_id' => 'field_ef_quarter-revision_id',
  'name' => 'name',
  'last_editor' => 'last_editor',
  'timestamp' => 'timestamp',
  'state' => 'state',
  'field_ef_short_summary-revision_id' => 'field_ef_short_summary-revision_id',
  'field_ef_actors_institutions-revision_id' => 'field_ef_actors_institutions-revision_id',
  'field_ef_processes-revision_id' => 'field_ef_processes-revision_id',
  'field_ef_employment_status-revision_id' => 'field_ef_employment_status-revision_id',
  'field_ef_entitlements_obligs-revision_id' => 'field_ef_entitlements_obligs-revision_id',
  'field_ef_termination_of_employm-revision_id' => 'field_ef_termination_of_employm-revision_id',
  'field_ef_pay-revision_id' => 'field_ef_pay-revision_id',
  'field_ef_working_time_in_general-revision_id' => 'field_ef_working_time_in_general-revision_id',
  'field_ef_organisation_of_working-revision_id' => 'field_ef_organisation_of_working-revision_id',
  'field_ef_work_life_balance-revision_id' => 'field_ef_work_life_balance-revision_id',
  'field_ef_non_standard_working-revision_id' => 'field_ef_non_standard_working-revision_id',
  'field_ef_skills_and_training-revision_id' => 'field_ef_skills_and_training-revision_id',
  'field_ef_work_organisation_skill-revision_id' => 'field_ef_work_organisation_skill-revision_id',
  'field_ef_career_development-revision_id' => 'field_ef_career_development-revision_id',
  'field_ef_physical_risk_factors-revision_id' => 'field_ef_physical_risk_factors-revision_id',
  'field_ef_psychosocial_risk_fact-revision_id' => 'field_ef_psychosocial_risk_fact-revision_id',
  'field_ef_work_related_health-revision_id' => 'field_ef_work_related_health-revision_id',
  'field_ef_absenteeism_presenteeis-revision_id' => 'field_ef_absenteeism_presenteeis-revision_id',
  'field_ef_violence_and_harassment-revision_id' => 'field_ef_violence_and_harassment-revision_id',
  'field_ef_occupational_health-revision_id' => 'field_ef_occupational_health-revision_id',
  'field_ef_forms_of_work_organisat-revision_id' => 'field_ef_forms_of_work_organisat-revision_id',
  'field_ef_workplace_innovation-revision_id' => 'field_ef_workplace_innovation-revision_id',
  'field_ef_employee_involvement-revision_id' => 'field_ef_employee_involvement-revision_id',
  'field_ef_participation_at_work-revision_id' => 'field_ef_participation_at_work-revision_id',
  'field_ef_other_relevant_issues-revision_id' => 'field_ef_other_relevant_issues-revision_id',
  'field_ef_summary_commentary-revision_id' => 'field_ef_summary_commentary-revision_id',
);
$handler->display->display_options['style_options']['default'] = 'timestamp';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
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
  'field_ef_quartely_report_year-revision_id' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_quarter-revision_id' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
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
  'last_editor' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
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
  'field_ef_short_summary-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_actors_institutions-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_processes-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_employment_status-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_entitlements_obligs-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_termination_of_employm-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_pay-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_working_time_in_general-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_organisation_of_working-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_work_life_balance-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_non_standard_working-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_skills_and_training-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_work_organisation_skill-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_career_development-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_physical_risk_factors-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_psychosocial_risk_fact-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_work_related_health-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_absenteeism_presenteeis-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_violence_and_harassment-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_occupational_health-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_forms_of_work_organisat-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_workplace_innovation-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_employee_involvement-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_participation_at_work-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_other_relevant_issues-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_summary_commentary-revision_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: PHP */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['php_output'] = '<?php
if (isset($_SESSION[\'d2w\'])){
  $aux = $_SESSION[\'d2w\'];
  $_SESSION[\'d2w\'] = null;
  //header(\'location:/sites/default/files/d2w/\'.$aux);
  print "
<script>
(function ($, Drupal) {

          $(document).ready(function() {
        window.location.href = \'/sites/default/files/d2w/".$aux."\';
      });

})(jQuery, Drupal);

</script>
";
}
?>';
/* Relationship: Content revision: Content */
$handler->display->display_options['relationships']['vid']['id'] = 'vid';
$handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['vid']['field'] = 'vid';
$handler->display->display_options['relationships']['vid']['label'] = 'Content revision';
/* Relationship: Revision node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Revision node';
$handler->display->display_options['relationships']['nid']['label'] = 'Revision node';
/* Relationship: Country */
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['id'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['table'] = 'field_revision_field_ef_quarter_report_country';
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['field'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['ui_name'] = 'Country';
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['label'] = 'Country';
/* Field: Bulk operations: Content revision */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_revision';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
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
    'selected' => 0,
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
  'action::views_bulk_operations_d2w_all_revisions_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_related_contributions_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
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
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
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
    'selected' => 0,
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
    'selected' => 0,
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
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['relationship'] = 'nid';
/* Field: Year */
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['id'] = 'field_ef_quartely_report_year-revision_id';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['table'] = 'field_revision_field_ef_quartely_report_year';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['field'] = 'field_ef_quartely_report_year-revision_id';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['ui_name'] = 'Year';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['settings'] = array(
  'format_type' => 'long',
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
/* Field: Quarter */
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['id'] = 'field_ef_quarter-revision_id';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['table'] = 'field_revision_field_ef_quarter';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['field'] = 'field_ef_quarter-revision_id';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['ui_name'] = 'Quarter';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['fields']['name']['ui_name'] = 'Country';
$handler->display->display_options['fields']['name']['label'] = 'Country';
/* Field: Last edited by */
$handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['table'] = 'node';
$handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['relationship'] = 'nid';
$handler->display->display_options['fields']['last_editor']['ui_name'] = 'Last edited by';
/* Field: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['ui_name'] = 'Updated date';
$handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'ef_date_format';
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
/* Field: Content (historical data): Short summary - may be published as country update */
$handler->display->display_options['fields']['field_ef_short_summary-revision_id']['id'] = 'field_ef_short_summary-revision_id';
$handler->display->display_options['fields']['field_ef_short_summary-revision_id']['table'] = 'field_revision_field_ef_short_summary';
$handler->display->display_options['fields']['field_ef_short_summary-revision_id']['field'] = 'field_ef_short_summary-revision_id';
$handler->display->display_options['fields']['field_ef_short_summary-revision_id']['label'] = '1. Introduction';
/* Field: Content (historical data): 2. Actors, institutions and their structures */
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['id'] = 'field_ef_actors_institutions-revision_id';
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['table'] = 'field_revision_field_ef_actors_institutions';
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['field'] = 'field_ef_actors_institutions-revision_id';
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): 3. Collective employment relations - Processes */
$handler->display->display_options['fields']['field_ef_processes-revision_id']['id'] = 'field_ef_processes-revision_id';
$handler->display->display_options['fields']['field_ef_processes-revision_id']['table'] = 'field_revision_field_ef_processes';
$handler->display->display_options['fields']['field_ef_processes-revision_id']['field'] = 'field_ef_processes-revision_id';
$handler->display->display_options['fields']['field_ef_processes-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_processes-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): Employment Status (terms and conditions) */
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['id'] = 'field_ef_employment_status-revision_id';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['table'] = 'field_revision_field_ef_employment_status';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['field'] = 'field_ef_employment_status-revision_id';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['label'] = '4.1.1 Employment status';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Entitlements and obligations */
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['id'] = 'field_ef_entitlements_obligs-revision_id';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['table'] = 'field_revision_field_ef_entitlements_obligs';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['field'] = 'field_ef_entitlements_obligs-revision_id';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['label'] = '4.1.2 Entitlements and obligations';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Termination of the employment relationship */
$handler->display->display_options['fields']['field_ef_termination_of_employm-revision_id']['id'] = 'field_ef_termination_of_employm-revision_id';
$handler->display->display_options['fields']['field_ef_termination_of_employm-revision_id']['table'] = 'field_revision_field_ef_termination_of_employm';
$handler->display->display_options['fields']['field_ef_termination_of_employm-revision_id']['field'] = 'field_ef_termination_of_employm-revision_id';
$handler->display->display_options['fields']['field_ef_termination_of_employm-revision_id']['label'] = '4.1.3 Termination of the employment relationship';
$handler->display->display_options['fields']['field_ef_termination_of_employm-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_termination_of_employm-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Pay */
$handler->display->display_options['fields']['field_ef_pay-revision_id']['id'] = 'field_ef_pay-revision_id';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['table'] = 'field_revision_field_ef_pay';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['field'] = 'field_ef_pay-revision_id';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['label'] = '4.2 Pay';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Working time in general: Duration, legislation and collectively agreed changes */
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['id'] = 'field_ef_working_time_in_general-revision_id';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['table'] = 'field_revision_field_ef_working_time_in_general';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['field'] = 'field_ef_working_time_in_general-revision_id';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['label'] = '4.3.1 Working time in general: Duration, legislation and collectively agreed changes';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Organisation of working time and working time flexibility */
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['id'] = 'field_ef_organisation_of_working-revision_id';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['table'] = 'field_revision_field_ef_organisation_of_working';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['field'] = 'field_ef_organisation_of_working-revision_id';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['label'] = '4.3.2 Organisation of working time and working time flexibility';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Work-life balance in relation to working life */
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['id'] = 'field_ef_work_life_balance-revision_id';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['table'] = 'field_revision_field_ef_work_life_balance';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['field'] = 'field_ef_work_life_balance-revision_id';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['label'] = '4.3.3 Work-life balance in relation to working life';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Non-standard working hours */
$handler->display->display_options['fields']['field_ef_non_standard_working-revision_id']['id'] = 'field_ef_non_standard_working-revision_id';
$handler->display->display_options['fields']['field_ef_non_standard_working-revision_id']['table'] = 'field_revision_field_ef_non_standard_working';
$handler->display->display_options['fields']['field_ef_non_standard_working-revision_id']['field'] = 'field_ef_non_standard_working-revision_id';
$handler->display->display_options['fields']['field_ef_non_standard_working-revision_id']['label'] = '4.3.4 Non-standard working hours';
$handler->display->display_options['fields']['field_ef_non_standard_working-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_non_standard_working-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Skills and Training */
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['id'] = 'field_ef_skills_and_training-revision_id';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['table'] = 'field_revision_field_ef_skills_and_training';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['field'] = 'field_ef_skills_and_training-revision_id';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['label'] = '4.4.1 Skills and Training';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Lifelong learning, further training, learning organisation */
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['id'] = 'field_ef_work_organisation_skill-revision_id';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['table'] = 'field_revision_field_ef_work_organisation_skill';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['field'] = 'field_ef_work_organisation_skill-revision_id';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['label'] = '4.4.2 Work organisation, skills and learning';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Career development and employability */
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['id'] = 'field_ef_career_development-revision_id';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['table'] = 'field_revision_field_ef_career_development';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['field'] = 'field_ef_career_development-revision_id';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['label'] = '4.4.3 Career development and employability';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Physical risk factors */
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['id'] = 'field_ef_physical_risk_factors-revision_id';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['table'] = 'field_revision_field_ef_physical_risk_factors';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['field'] = 'field_ef_physical_risk_factors-revision_id';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['label'] = '4.5.1 Physical risk factors';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Psychosocial risk factors */
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['id'] = 'field_ef_psychosocial_risk_fact-revision_id';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['table'] = 'field_revision_field_ef_psychosocial_risk_fact';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['field'] = 'field_ef_psychosocial_risk_fact-revision_id';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['label'] = '4.5.2 Psychosocial risk factors';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Work-related health and wellbeing outcomes */
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['id'] = 'field_ef_work_related_health-revision_id';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['table'] = 'field_revision_field_ef_work_related_health';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['field'] = 'field_ef_work_related_health-revision_id';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['label'] = '4.5.3 Work-related health and wellbeing outcomes';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Absenteeism - Presenteeism */
$handler->display->display_options['fields']['field_ef_absenteeism_presenteeis-revision_id']['id'] = 'field_ef_absenteeism_presenteeis-revision_id';
$handler->display->display_options['fields']['field_ef_absenteeism_presenteeis-revision_id']['table'] = 'field_revision_field_ef_absenteeism_presenteeis';
$handler->display->display_options['fields']['field_ef_absenteeism_presenteeis-revision_id']['field'] = 'field_ef_absenteeism_presenteeis-revision_id';
$handler->display->display_options['fields']['field_ef_absenteeism_presenteeis-revision_id']['label'] = '4.5.4 Absenteeism - Presenteeism';
$handler->display->display_options['fields']['field_ef_absenteeism_presenteeis-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_absenteeism_presenteeis-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Violence and harassment at work */
$handler->display->display_options['fields']['field_ef_violence_and_harassment-revision_id']['id'] = 'field_ef_violence_and_harassment-revision_id';
$handler->display->display_options['fields']['field_ef_violence_and_harassment-revision_id']['table'] = 'field_revision_field_ef_violence_and_harassment';
$handler->display->display_options['fields']['field_ef_violence_and_harassment-revision_id']['field'] = 'field_ef_violence_and_harassment-revision_id';
$handler->display->display_options['fields']['field_ef_violence_and_harassment-revision_id']['label'] = '4.5.5 Violence and harassment at work';
$handler->display->display_options['fields']['field_ef_violence_and_harassment-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_violence_and_harassment-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Promotion of occupational health and safety, workplace health and sustainability at work */
$handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['id'] = 'field_ef_occupational_health-revision_id';
$handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['table'] = 'field_revision_field_ef_occupational_health';
$handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['field'] = 'field_ef_occupational_health-revision_id';
$handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['label'] = '4.5.6 Occupational health and safety and workplace health promotion';
/* Field: Content (historical data): How work is organised - Forms of work organisation */
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['id'] = 'field_ef_forms_of_work_organisat-revision_id';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['table'] = 'field_revision_field_ef_forms_of_work_organisat';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['field'] = 'field_ef_forms_of_work_organisat-revision_id';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['label'] = '4.6.1 Forms of work organisation';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Workplace innovation */
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['id'] = 'field_ef_workplace_innovation-revision_id';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['table'] = 'field_revision_field_ef_workplace_innovation';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['field'] = 'field_ef_workplace_innovation-revision_id';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['label'] = '4.6.2 Workplace innovation';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Employee involvement */
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['id'] = 'field_ef_employee_involvement-revision_id';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['table'] = 'field_revision_field_ef_employee_involvement';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['field'] = 'field_ef_employee_involvement-revision_id';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['label'] = '4.6.3 Employee involvement';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): Participation at work */
$handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['id'] = 'field_ef_participation_at_work-revision_id';
$handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['table'] = 'field_revision_field_ef_participation_at_work';
$handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['field'] = 'field_ef_participation_at_work-revision_id';
$handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['label'] = '4.6.4 Participation at work';
$handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): 5. Other relevant issues */
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['id'] = 'field_ef_other_relevant_issues-revision_id';
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['table'] = 'field_revision_field_ef_other_relevant_issues';
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['field'] = 'field_ef_other_relevant_issues-revision_id';
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): 6. Summary, commentary and outlook */
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['id'] = 'field_ef_summary_commentary-revision_id';
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['table'] = 'field_revision_field_ef_summary_commentary';
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['field'] = 'field_ef_summary_commentary-revision_id';
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): Policy debate, national initiative or event */
$handler->display->display_options['fields']['field_ef_activity-revision_id']['id'] = 'field_ef_activity-revision_id';
$handler->display->display_options['fields']['field_ef_activity-revision_id']['table'] = 'field_revision_field_ef_activity';
$handler->display->display_options['fields']['field_ef_activity-revision_id']['field'] = 'field_ef_activity-revision_id';
$handler->display->display_options['fields']['field_ef_activity-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_activity-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_activity-revision_id']['delta_offset'] = '0';
/* Field: Content (historical data): Dissemination */
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['id'] = 'field_ef_dissemination-revision_id';
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['table'] = 'field_revision_field_ef_dissemination';
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['field'] = 'field_ef_dissemination-revision_id';
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['delta_offset'] = '0';
/* Sort criterion: Content revision: Updated date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'nid';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'ef_ic_quarterly_report' => 'ef_ic_quarterly_report',
  'ef_network_quarterly_report' => 'ef_network_quarterly_report',
);
$handler->display->display_options['filters']['type_1']['group'] = 1;
$handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
$handler->display->display_options['filters']['type_1']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
$handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
$handler->display->display_options['filters']['type_1']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Content (historical data): Year (field_ef_quartely_report_year) */
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['id'] = 'field_ef_quartely_report_year_value';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['table'] = 'field_revision_field_ef_quartely_report_year';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['field'] = 'field_ef_quartely_report_year_value';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['operator_id'] = 'field_ef_quartely_report_year_value_op';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['label'] = 'Year';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['operator'] = 'field_ef_quartely_report_year_value_op';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['identifier'] = 'field_ef_quartely_report_year_value';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_quartely_report_year_value']['granularity'] = 'year';
/* Filter criterion: Content (historical data): Quarter (field_ef_quarter) */
$handler->display->display_options['filters']['field_ef_quarter_value']['id'] = 'field_ef_quarter_value';
$handler->display->display_options['filters']['field_ef_quarter_value']['table'] = 'field_revision_field_ef_quarter';
$handler->display->display_options['filters']['field_ef_quarter_value']['field'] = 'field_ef_quarter_value';
$handler->display->display_options['filters']['field_ef_quarter_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_quarter_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_quarter_value']['expose']['operator_id'] = 'field_ef_quarter_value_op';
$handler->display->display_options['filters']['field_ef_quarter_value']['expose']['label'] = 'Quarter';
$handler->display->display_options['filters']['field_ef_quarter_value']['expose']['operator'] = 'field_ef_quarter_value_op';
$handler->display->display_options['filters']['field_ef_quarter_value']['expose']['identifier'] = 'quarter';
$handler->display->display_options['filters']['field_ef_quarter_value']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_ef_quarter_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_quarter_value']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['filters']['name_list']['group'] = 1;
$handler->display->display_options['filters']['name_list']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list']['expose']['operator_id'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['name_list']['expose']['operator'] = 'name_list_op';
$handler->display->display_options['filters']['name_list']['expose']['identifier'] = 'name_list';
$handler->display->display_options['filters']['name_list']['expose']['remember'] = TRUE;
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
$handler->display->display_options['filters']['name_list']['configuration'] = '1';
$handler->display->display_options['filters']['name_list']['filter'] = array(
  'enabled' => '1',
  'continents' => array(
    'EU' => 'EU',
  ),
);
/* Filter criterion: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['ui_name'] = 'State';
$handler->display->display_options['filters']['state']['group'] = 1;
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
$handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
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
/* Filter criterion: Dynamic fields */
$handler->display->display_options['filters']['dynamic-field']['id'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['table'] = 'node';
$handler->display->display_options['filters']['dynamic-field']['field'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['relationship'] = 'vid';
$handler->display->display_options['filters']['dynamic-field']['ui_name'] = 'Dynamic fields';
$handler->display->display_options['filters']['dynamic-field']['group'] = 1;
$handler->display->display_options['filters']['dynamic-field']['exposed'] = TRUE;
$handler->display->display_options['filters']['dynamic-field']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['dynamic-field']['expose']['label'] = 'Fields';
$handler->display->display_options['filters']['dynamic-field']['expose']['description'] = 'Select the fields to display dynamically';
$handler->display->display_options['filters']['dynamic-field']['expose']['operator'] = 'dynamic-field_op';
$handler->display->display_options['filters']['dynamic-field']['expose']['identifier'] = 'dynamic-field';
$handler->display->display_options['filters']['dynamic-field']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['dynamic-field']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['dynamic-field']['filterable_fields'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'title' => 'title',
  'type' => 'type',
  'field_ef_quartely_report_year-revision_id' => 'field_ef_quartely_report_year-revision_id',
  'field_ef_quarter-revision_id' => 'field_ef_quarter-revision_id',
  'name' => 'name',
  'last_editor' => 'last_editor',
  'timestamp' => 'timestamp',
  'state' => 'state',
  'field_ef_short_summary-revision_id' => 'field_ef_short_summary-revision_id',
  'field_ef_actors_institutions-revision_id' => 'field_ef_actors_institutions-revision_id',
  'field_ef_processes-revision_id' => 'field_ef_processes-revision_id',
  'field_ef_employment_status-revision_id' => 'field_ef_employment_status-revision_id',
  'field_ef_entitlements_obligs-revision_id' => 'field_ef_entitlements_obligs-revision_id',
  'field_ef_termination_of_employm-revision_id' => 'field_ef_termination_of_employm-revision_id',
  'field_ef_pay-revision_id' => 'field_ef_pay-revision_id',
  'field_ef_working_time_in_general-revision_id' => 'field_ef_working_time_in_general-revision_id',
  'field_ef_organisation_of_working-revision_id' => 'field_ef_organisation_of_working-revision_id',
  'field_ef_work_life_balance-revision_id' => 'field_ef_work_life_balance-revision_id',
  'field_ef_non_standard_working-revision_id' => 'field_ef_non_standard_working-revision_id',
  'field_ef_skills_and_training-revision_id' => 'field_ef_skills_and_training-revision_id',
  'field_ef_work_organisation_skill-revision_id' => 'field_ef_work_organisation_skill-revision_id',
  'field_ef_career_development-revision_id' => 'field_ef_career_development-revision_id',
  'field_ef_physical_risk_factors-revision_id' => 'field_ef_physical_risk_factors-revision_id',
  'field_ef_psychosocial_risk_fact-revision_id' => 'field_ef_psychosocial_risk_fact-revision_id',
  'field_ef_work_related_health-revision_id' => 'field_ef_work_related_health-revision_id',
  'field_ef_absenteeism_presenteeis-revision_id' => 'field_ef_absenteeism_presenteeis-revision_id',
  'field_ef_violence_and_harassment-revision_id' => 'field_ef_violence_and_harassment-revision_id',
  'field_ef_occupational_health-revision_id' => 'field_ef_occupational_health-revision_id',
  'field_ef_forms_of_work_organisat-revision_id' => 'field_ef_forms_of_work_organisat-revision_id',
  'field_ef_workplace_innovation-revision_id' => 'field_ef_workplace_innovation-revision_id',
  'field_ef_employee_involvement-revision_id' => 'field_ef_employee_involvement-revision_id',
  'field_ef_participation_at_work-revision_id' => 'field_ef_participation_at_work-revision_id',
  'field_ef_other_relevant_issues-revision_id' => 'field_ef_other_relevant_issues-revision_id',
  'field_ef_summary_commentary-revision_id' => 'field_ef_summary_commentary-revision_id',
  'field_ef_activity-revision_id' => 'field_ef_activity-revision_id',
  'field_ef_dissemination-revision_id' => 'field_ef_dissemination-revision_id',
);
$handler->display->display_options['filters']['dynamic-field']['defaults_filterable_fields'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'title' => 'title',
  'type' => 'type',
  'field_ef_quartely_report_year-revision_id' => 'field_ef_quartely_report_year-revision_id',
  'field_ef_quarter-revision_id' => 'field_ef_quarter-revision_id',
  'name' => 'name',
  'last_editor' => 'last_editor',
  'timestamp' => 'timestamp',
  'state' => 'state',
  'field_ef_short_summary-revision_id' => 'field_ef_short_summary-revision_id',
  'field_ef_actors_institutions-revision_id' => 'field_ef_actors_institutions-revision_id',
  'field_ef_processes-revision_id' => 'field_ef_processes-revision_id',
  'field_ef_employment_status-revision_id' => 'field_ef_employment_status-revision_id',
  'field_ef_entitlements_obligs-revision_id' => 'field_ef_entitlements_obligs-revision_id',
  'field_ef_termination_of_employm-revision_id' => 'field_ef_termination_of_employm-revision_id',
  'field_ef_pay-revision_id' => 'field_ef_pay-revision_id',
  'field_ef_working_time_in_general-revision_id' => 'field_ef_working_time_in_general-revision_id',
  'field_ef_organisation_of_working-revision_id' => 'field_ef_organisation_of_working-revision_id',
  'field_ef_work_life_balance-revision_id' => 'field_ef_work_life_balance-revision_id',
  'field_ef_non_standard_working-revision_id' => 'field_ef_non_standard_working-revision_id',
  'field_ef_skills_and_training-revision_id' => 'field_ef_skills_and_training-revision_id',
  'field_ef_work_organisation_skill-revision_id' => 'field_ef_work_organisation_skill-revision_id',
  'field_ef_career_development-revision_id' => 'field_ef_career_development-revision_id',
  'field_ef_physical_risk_factors-revision_id' => 'field_ef_physical_risk_factors-revision_id',
  'field_ef_psychosocial_risk_fact-revision_id' => 'field_ef_psychosocial_risk_fact-revision_id',
  'field_ef_work_related_health-revision_id' => 'field_ef_work_related_health-revision_id',
  'field_ef_absenteeism_presenteeis-revision_id' => 'field_ef_absenteeism_presenteeis-revision_id',
  'field_ef_violence_and_harassment-revision_id' => 'field_ef_violence_and_harassment-revision_id',
  'field_ef_occupational_health-revision_id' => 'field_ef_occupational_health-revision_id',
  'field_ef_forms_of_work_organisat-revision_id' => 'field_ef_forms_of_work_organisat-revision_id',
  'field_ef_workplace_innovation-revision_id' => 'field_ef_workplace_innovation-revision_id',
  'field_ef_employee_involvement-revision_id' => 'field_ef_employee_involvement-revision_id',
  'field_ef_participation_at_work-revision_id' => 'field_ef_participation_at_work-revision_id',
  'field_ef_other_relevant_issues-revision_id' => 'field_ef_other_relevant_issues-revision_id',
  'field_ef_summary_commentary-revision_id' => 'field_ef_summary_commentary-revision_id',
  'field_ef_activity-revision_id' => 'field_ef_activity-revision_id',
  'field_ef_dissemination-revision_id' => 'field_ef_dissemination-revision_id',
);
$handler->display->display_options['filters']['dynamic-field']['checkboxes'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_ic_quarterly_report' => 'ef_ic_quarterly_report',
  'ef_network_quarterly_report' => 'ef_network_quarterly_report',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  5 => '5',
  9 => '9',
);
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content revision */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_revision';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
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
    'selected' => 0,
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
  'action::views_bulk_operations_d2w_all_revisions_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_related_contributions_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
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
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
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
    'selected' => 0,
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
    'selected' => 0,
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
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['relationship'] = 'nid';
/* Field: Year */
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['id'] = 'field_ef_quartely_report_year-revision_id';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['table'] = 'field_revision_field_ef_quartely_report_year';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['field'] = 'field_ef_quartely_report_year-revision_id';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['ui_name'] = 'Year';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['settings'] = array(
  'format_type' => 'long',
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
/* Field: Quarter */
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['id'] = 'field_ef_quarter-revision_id';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['table'] = 'field_revision_field_ef_quarter';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['field'] = 'field_ef_quarter-revision_id';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['ui_name'] = 'Quarter';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['fields']['name']['ui_name'] = 'Country';
$handler->display->display_options['fields']['name']['label'] = 'Country';
/* Field: Last edited by */
$handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['table'] = 'node';
$handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['relationship'] = 'nid';
$handler->display->display_options['fields']['last_editor']['ui_name'] = 'Last edited by';
/* Field: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['ui_name'] = 'Updated date';
$handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'ef_date_format';
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
/* Field: Content (historical data): Short summary - may be published as country update */
$handler->display->display_options['fields']['field_ef_short_summary-revision_id']['id'] = 'field_ef_short_summary-revision_id';
$handler->display->display_options['fields']['field_ef_short_summary-revision_id']['table'] = 'field_revision_field_ef_short_summary';
$handler->display->display_options['fields']['field_ef_short_summary-revision_id']['field'] = 'field_ef_short_summary-revision_id';
$handler->display->display_options['fields']['field_ef_short_summary-revision_id']['label'] = '1. Introduction';
/* Field: Content (historical data): 2. Actors, institutions and their structures */
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['id'] = 'field_ef_actors_institutions-revision_id';
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['table'] = 'field_revision_field_ef_actors_institutions';
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['field'] = 'field_ef_actors_institutions-revision_id';
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_actors_institutions-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): 3. Collective employment relations - Processes */
$handler->display->display_options['fields']['field_ef_processes-revision_id']['id'] = 'field_ef_processes-revision_id';
$handler->display->display_options['fields']['field_ef_processes-revision_id']['table'] = 'field_revision_field_ef_processes';
$handler->display->display_options['fields']['field_ef_processes-revision_id']['field'] = 'field_ef_processes-revision_id';
$handler->display->display_options['fields']['field_ef_processes-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_processes-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): Employment Status (terms and conditions) */
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['id'] = 'field_ef_employment_status-revision_id';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['table'] = 'field_revision_field_ef_employment_status';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['field'] = 'field_ef_employment_status-revision_id';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['label'] = '4.1.1 Employment status';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_employment_status-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Entitlements and obligations */
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['id'] = 'field_ef_entitlements_obligs-revision_id';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['table'] = 'field_revision_field_ef_entitlements_obligs';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['field'] = 'field_ef_entitlements_obligs-revision_id';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['label'] = '4.1.2 Entitlements and obligations';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_entitlements_obligs-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Pay */
$handler->display->display_options['fields']['field_ef_pay-revision_id']['id'] = 'field_ef_pay-revision_id';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['table'] = 'field_revision_field_ef_pay';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['field'] = 'field_ef_pay-revision_id';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['label'] = '4.2 Pay';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_pay-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Working time in general: Duration, legislation and collectively agreed changes */
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['id'] = 'field_ef_working_time_in_general-revision_id';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['table'] = 'field_revision_field_ef_working_time_in_general';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['field'] = 'field_ef_working_time_in_general-revision_id';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['label'] = '4.3.1 Working time in general: Duration, legislation and collectively agreed changes';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_working_time_in_general-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Organisation of working time and working time flexibility */
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['id'] = 'field_ef_organisation_of_working-revision_id';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['table'] = 'field_revision_field_ef_organisation_of_working';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['field'] = 'field_ef_organisation_of_working-revision_id';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['label'] = '4.3.2 Organisation of working time and working time flexibility';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_organisation_of_working-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Work-life balance in relation to working life */
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['id'] = 'field_ef_work_life_balance-revision_id';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['table'] = 'field_revision_field_ef_work_life_balance';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['field'] = 'field_ef_work_life_balance-revision_id';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['label'] = '4.3.3 Work-life balance in relation to working life';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_work_life_balance-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Skills and Training */
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['id'] = 'field_ef_skills_and_training-revision_id';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['table'] = 'field_revision_field_ef_skills_and_training';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['field'] = 'field_ef_skills_and_training-revision_id';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['label'] = '4.4.1 Skills and Training';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_skills_and_training-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Lifelong learning, further training, learning organisation */
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['id'] = 'field_ef_work_organisation_skill-revision_id';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['table'] = 'field_revision_field_ef_work_organisation_skill';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['field'] = 'field_ef_work_organisation_skill-revision_id';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['label'] = '4.4.2 Work organisation, skills and learning';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_work_organisation_skill-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Career development and employability */
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['id'] = 'field_ef_career_development-revision_id';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['table'] = 'field_revision_field_ef_career_development';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['field'] = 'field_ef_career_development-revision_id';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['label'] = '4.4.3 Career development and employability';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_career_development-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Physical risk factors */
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['id'] = 'field_ef_physical_risk_factors-revision_id';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['table'] = 'field_revision_field_ef_physical_risk_factors';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['field'] = 'field_ef_physical_risk_factors-revision_id';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['label'] = '4.5.1 Physical risk factors';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_physical_risk_factors-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Psychosocial risk factors */
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['id'] = 'field_ef_psychosocial_risk_fact-revision_id';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['table'] = 'field_revision_field_ef_psychosocial_risk_fact';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['field'] = 'field_ef_psychosocial_risk_fact-revision_id';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['label'] = '4.5.2 Psychosocial risk factors';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_psychosocial_risk_fact-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Work-related health and wellbeing outcomes */
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['id'] = 'field_ef_work_related_health-revision_id';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['table'] = 'field_revision_field_ef_work_related_health';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['field'] = 'field_ef_work_related_health-revision_id';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['label'] = '4.5.3 Work-related health and wellbeing outcomes';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_work_related_health-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Promotion of occupational health and safety, workplace health and sustainability at work */
$handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['id'] = 'field_ef_occupational_health-revision_id';
$handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['table'] = 'field_revision_field_ef_occupational_health';
$handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['field'] = 'field_ef_occupational_health-revision_id';
$handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['label'] = '4.5.6 Occupational health and safety and workplace health promotion';
/* Field: Content (historical data): How work is organised - Forms of work organisation */
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['id'] = 'field_ef_forms_of_work_organisat-revision_id';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['table'] = 'field_revision_field_ef_forms_of_work_organisat';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['field'] = 'field_ef_forms_of_work_organisat-revision_id';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['label'] = '4.6.1 Forms of work organisation';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_forms_of_work_organisat-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Workplace innovation */
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['id'] = 'field_ef_workplace_innovation-revision_id';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['table'] = 'field_revision_field_ef_workplace_innovation';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['field'] = 'field_ef_workplace_innovation-revision_id';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['label'] = '4.6.2 Workplace innovation';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_workplace_innovation-revision_id']['settings'] = array(
  'view_mode' => 'full',
);
/* Field: Content (historical data): Employee involvement */
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['id'] = 'field_ef_employee_involvement-revision_id';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['table'] = 'field_revision_field_ef_employee_involvement';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['field'] = 'field_ef_employee_involvement-revision_id';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['label'] = '4.6.3 Employee involvement';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_employee_involvement-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): 5. Other relevant issues */
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['id'] = 'field_ef_other_relevant_issues-revision_id';
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['table'] = 'field_revision_field_ef_other_relevant_issues';
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['field'] = 'field_ef_other_relevant_issues-revision_id';
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): 6. Summary, commentary and outlook */
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['id'] = 'field_ef_summary_commentary-revision_id';
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['table'] = 'field_revision_field_ef_summary_commentary';
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['field'] = 'field_ef_summary_commentary-revision_id';
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content (historical data): Policy debate, national initiative or event */
$handler->display->display_options['fields']['field_ef_activity-revision_id']['id'] = 'field_ef_activity-revision_id';
$handler->display->display_options['fields']['field_ef_activity-revision_id']['table'] = 'field_revision_field_ef_activity';
$handler->display->display_options['fields']['field_ef_activity-revision_id']['field'] = 'field_ef_activity-revision_id';
$handler->display->display_options['fields']['field_ef_activity-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_activity-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_activity-revision_id']['delta_offset'] = '0';
/* Field: Content (historical data): Dissemination */
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['id'] = 'field_ef_dissemination-revision_id';
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['table'] = 'field_revision_field_ef_dissemination';
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['field'] = 'field_ef_dissemination-revision_id';
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['settings'] = array(
  'view_mode' => 'full',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_dissemination-revision_id']['delta_offset'] = '0';
$handler->display->display_options['path'] = 'quarterly-reports-export';

$view->save();
$view = new view();
$view->name = 'ef_publications_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Publications';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Publications';
$handler->display->display_options['use_ajax'] = TRUE;
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
  'published_at' => array(
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
  'field_ef_theme_tid_1' => array(
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
  'field_ef_topic_tid_selective' => array(
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
  'field_ef_document_type_tid' => array(
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
  'field_ef_publ_contributors_tid' => array(
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'field_ef_theme';
$handler->display->display_options['style_options']['label'] = 'Choose one of these';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
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
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
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
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Document Type */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
/* Field: Publication date - type */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Publication date - type';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = '<div class="view-publ-date-type">
  <span class="views-field views-field-changed">
    [published_at]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-document-type">
    [field_ef_document_type]
  </span>
</div>';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Body (Summary or trimmed 200) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 200)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Author */
$handler->display->display_options['fields']['field_ef_publ_contributors']['id'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['field'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['label'] = '';
$handler->display->display_options['fields']['field_ef_publ_contributors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['delta_offset'] = '0';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
  <span class="views-field views-field-field-ef-publ-contributors">
    [field_ef_publ_contributors]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-observatory">
    [field_ef_observatory]
  </span>
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Image css classes */
$handler->display->display_options['fields']['field_ef_document_1']['id'] = 'field_ef_document_1';
$handler->display->display_options['fields']['field_ef_document_1']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['ui_name'] = 'Image css classes';
$handler->display->display_options['fields']['field_ef_document_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document_1']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
  'show_description' => 0,
  'tag' => 'span',
);
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search publications';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Content: Theme (field_ef_theme) */
$handler->display->display_options['filters']['field_ef_theme_tid_1']['id'] = 'field_ef_theme_tid_1';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['field'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_theme_tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid_1']['expose']['operator_id'] = 'field_ef_theme_tid_1_op';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['expose']['label'] = 'Themes';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['expose']['operator'] = 'field_ef_theme_tid_1_op';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['expose']['identifier'] = 'ef_theme_topic';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid_1']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_theme_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['vocabulary'] = 'ef_themes';
$handler->display->display_options['filters']['field_ef_theme_tid_1']['error_message'] = FALSE;
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_document_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator_id'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['label'] = 'Publication types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['identifier'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_document_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['error_message'] = FALSE;
/* Filter criterion: Entity translation: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'entity_translation';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
);
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Select Language';
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'view-language';
$handler->display->display_options['filters']['language']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['multiple'] = TRUE;
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
);
/* Filter criterion: Content: Author (field_ef_publ_contributors) */
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['id'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['field'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator_id'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['label'] = 'Authors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['identifier'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['vocabulary'] = 'ef_publication_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['error_message'] = FALSE;

/* Display: All publications page */
$handler = $view->new_display('page', 'All publications page', 'page');
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
  'published_at' => array(
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
  'field_ef_theme_tid_1' => array(
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
  'field_ef_topic_tid_selective' => array(
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
  'field_ef_document_type_tid' => array(
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
  'field_ef_publ_contributors_tid' => array(
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
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'view-list-pdfpreview';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<span class="view-header-results">@total items found</span>';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<p>No results were found. Please try again.</p>';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'publications-view-155-220',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'publications-view-155-220',
  'image_link' => '',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Overwrite publication image */
$handler->display->display_options['fields']['field_overwrite_thumbnail']['id'] = 'field_overwrite_thumbnail';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['table'] = 'field_data_field_overwrite_thumbnail';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['field'] = 'field_overwrite_thumbnail';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_overwrite_thumbnail']['alter']['text'] = '[field_ef_main_image] ';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_overwrite_thumbnail']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_overwrite_thumbnail']['type'] = 'list_key';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Language link */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Language link';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_value'] = '$link = drupal_get_path_alias(\'node/\' . $data->nid);
return $link;';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Entity translation: Title: translated */
$handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['label'] = '';
$handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_field_et']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[php]';
$handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_field_et']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['label'] = '';
$handler->display->display_options['fields']['state']['exclude'] = TRUE;
$handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Title (PHP) */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['ui_name'] = 'Title (PHP)';
$handler->display->display_options['fields']['php_2']['label'] = '';
$handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php

$link = $data->views_php_3;

$title = \'<a href="\' . $link . \'">\' . $data->field_title_field_et[0][\'rendered\'][\'#markup\'] . \'</a>\';
$state = $data->workbench_moderation_node_history_state;

if ($state == \'forthcoming\')
{
   $title = $title . \'<span class="forthcoming-label">Forthcoming</span>\';
}

print \'<h2 class="publications-title">\'.$title.\'</h2>\';
?>';
$handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'short';
/* Field: Published On (PHP) */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Published On (PHP)';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php

if ($data->publication_date_published_at != 0)
{
   if ($data->workbench_moderation_node_history_state == \'forthcoming\'){
        $published_on = date("F Y", $data->publication_date_published_at);
   } else {
        $published_on = date("d F Y", $data->publication_date_published_at);
   }

  print $published_on;
}
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Document Type  */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['ui_name'] = 'Document Type ';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_type']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Entity translation: Body: translated */
$handler->display->display_options['fields']['body_et']['id'] = 'body_et';
$handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body_et']['field'] = 'body_et';
$handler->display->display_options['fields']['body_et']['label'] = '';
$handler->display->display_options['fields']['body_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body_et']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body_et']['settings'] = array(
  'trim_length' => '600',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Author */
$handler->display->display_options['fields']['field_ef_publ_contributors']['id'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['field'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['label'] = '';
$handler->display->display_options['fields']['field_ef_publ_contributors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['alter']['path'] = '/author/[field_ef_publ_contributors]';
$handler->display->display_options['fields']['field_ef_publ_contributors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['type'] = 'taxonomy_term_reference_link';
$handler->display->display_options['fields']['field_ef_publ_contributors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_publ_contributors']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_ef_publ_contributors']['separator'] = '; ';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Content: Organisation */
$handler->display->display_options['fields']['field_ef_origin_organisation']['id'] = 'field_ef_origin_organisation';
$handler->display->display_options['fields']['field_ef_origin_organisation']['table'] = 'field_data_field_ef_origin_organisation';
$handler->display->display_options['fields']['field_ef_origin_organisation']['field'] = 'field_ef_origin_organisation';
$handler->display->display_options['fields']['field_ef_origin_organisation']['label'] = '';
$handler->display->display_options['fields']['field_ef_origin_organisation']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_origin_organisation']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_origin_organisation']['alter']['text'] = '<span>Requested by: [field_ef_origin_organisation]</span>';
$handler->display->display_options['fields']['field_ef_origin_organisation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_origin_organisation']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_origin_organisation']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Global: PHP */
$handler->display->display_options['fields']['php_3']['id'] = 'php_3';
$handler->display->display_options['fields']['php_3']['table'] = 'views';
$handler->display->display_options['fields']['php_3']['field'] = 'php';
$handler->display->display_options['fields']['php_3']['label'] = '';
$handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_3']['php_output'] = '<?php 
    $node = node_load($data->nid);

    if (isset($node->field_overwrite_thumbnail["und"][0]["value"]) && $node->field_overwrite_thumbnail["und"][0]["value"] == 1) {

        if (isset($node->field_ef_main_image[\'und\'][0][uri])) {
           print  \'<div class="img-publications-list"><a href="/\' . $node->path[\'alias\'] . \'"><img src="\' .  image_style_url(\'publications-view-155-220\',$node->field_ef_main_image[\'und\'][0][uri]) .\'" ></a></div>\'; 
       }  

    } else {

        if (isset($node->field_ef_document[\'en\'][0])) {
            print \'<div class="img-publications-list"><a href="/\' . $node->path[\'alias\'] . \'"><img src="\' . image_style_url(\'publications-view-155-220\', _pdfpreview_create_preview($node->field_ef_document[\'en\'][0])) .\'" ></a></div>\';
        } else {

            if($node->type == \'blog\'){

                if (isset($node->field_ef_main_image[\'und\'][0][uri])) {
                    print  \'<div class="img-publications-list"><a href="/\' . $node->path[\'alias\'] . \'"><img src="\' .  image_style_url(\'publications_list_blog_img\',$node->field_ef_main_image[\'und\'][0][uri]) .\'" ></a></div>\';
                } 
            }else{
                if (isset($node->field_ef_main_image[\'und\'][0][uri])) {
                    print  \'<div class="img-publications-list"><a href="/\' . $node->path[\'alias\'] . \'"><img src="\' .  image_style_url(\'publications-view-155-220\',$node->field_ef_main_image[\'und\'][0][uri]) .\'" ></a></div>\'; 
                }
            }
   
       }

    }
?>';
$handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
/* Field: Calculate abstract body */
$handler->display->display_options['fields']['php_4']['id'] = 'php_4';
$handler->display->display_options['fields']['php_4']['table'] = 'views';
$handler->display->display_options['fields']['php_4']['field'] = 'php';
$handler->display->display_options['fields']['php_4']['ui_name'] = 'Calculate abstract body';
$handler->display->display_options['fields']['php_4']['label'] = '';
$handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_4']['php_output'] = '<?php

$node = node_load($data->nid);

if($node->body[\'en\'][0][\'summary\'] != ""){
	print $node->body[\'en\'][0][\'summary\'];
}else{
	$out = strlen(strip_tags($node->body[\'en\'][0][\'value\'])) > 240 ? substr(strip_tags($node->body[\'en\'][0][\'value\']),0,240)."..." : strip_tags($node->body[\'en\'][0][\'value\']);
	print strip_tags($out);
}

?>';
$handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="item-content">
[php_2]
<ul class="metadata-list-type">
      <li>[php_1]</li>
      <li>[field_ef_document_type]</li>
</ul>
[php_4]
<ul class="metadata-list">
   <li>
     <span class="field-contributors">[field_ef_publ_contributors]</span>
      <span class="field-observatory">[field_ef_observatory]</span>
      <span class="field-topic">[field_ef_topic]</span>
   </li>
</ul>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog' => 'blog',
  'presentation' => 'presentation',
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search publications';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  17 => 0,
  18 => 0,
);
$handler->display->display_options['filters']['combine']['fields'] = array(
  'title_field_et' => 'title_field_et',
  'body_et' => 'body_et',
);
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic ';
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
  17 => 0,
  18 => 0,
);
$handler->display->display_options['filters']['field_ef_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatory ';
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
  17 => 0,
  18 => 0,
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
/* Filter criterion: Content: Author (field_ef_publ_contributors) */
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['id'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['field'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator_id'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['label'] = 'Authors ';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['identifier'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['vocabulary'] = 'ef_publication_contributors';
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
  'published' => 'published',
);
$handler->display->display_options['filters']['state']['group'] = 1;
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
$handler->display->display_options['path'] = 'publications';
$handler->display->display_options['menu']['title'] = 'Publications';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Annual reports page */
$handler = $view->new_display('page', 'Annual reports page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Annual reports';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_document_1]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Entity translation: Title: translated */
$handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['label'] = '';
$handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_node']['alter']['text'] = '[title_field_et]';
$handler->display->display_options['fields']['view_node']['element_class'] = 'views-field-title';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = '';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Document Type */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Publication date - type */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Publication date - type';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = '<div class="view-publ-date-type">
  <span class="views-field views-field-changed">
    [published_at]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-document-type">
    [field_ef_document_type]
  </span>
</div>';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Body (Summary or trimmed 200) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 200)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Author */
$handler->display->display_options['fields']['field_ef_publ_contributors']['id'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['field'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['label'] = '';
$handler->display->display_options['fields']['field_ef_publ_contributors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_publ_contributors']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_ef_publ_contributors']['separator'] = '; ';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
  <span class="views-field views-field-field-ef-publ-contributors">
    [field_ef_publ_contributors]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-observatory">
    [field_ef_observatory]
  </span>
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Image css classes */
$handler->display->display_options['fields']['field_ef_document_1']['id'] = 'field_ef_document_1';
$handler->display->display_options['fields']['field_ef_document_1']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['ui_name'] = 'Image css classes';
$handler->display->display_options['fields']['field_ef_document_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document_1']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
  'show_description' => 0,
  'tag' => 'span',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search publications';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['value'] = array(
  11299 => '11299',
);
$handler->display->display_options['filters']['field_ef_document_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_document_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator_id'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['label'] = 'Publication types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['identifier'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_document_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Author (field_ef_publ_contributors) */
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['id'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['field'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator_id'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['label'] = 'Authors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['identifier'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['vocabulary'] = 'ef_publication_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['error_message'] = FALSE;
$handler->display->display_options['path'] = 'about-eurofound/what-we-do/annual-reports-list';
$handler->display->display_options['menu']['title'] = 'Publications';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Work programmes page */
$handler = $view->new_display('page', 'Work programmes page', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Work programmes';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_document_1]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<span class="view-header-results">@total items found</span>';
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Every four years Eurofound reviews its strategy and the orientation to be given to its work and after widespread consultation prepares a four-year rolling programme.  Within the context of the four-year programme, a detailed annual programme of work is prepared and proposed for adoption by the Governing Board.

The programmes are the outcome of detailed deliberations of the groups making up the Governing Board as well as with the Institutions of the Union.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Entity translation: Title: translated */
$handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['label'] = '';
$handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_node']['alter']['text'] = '[title_field_et]';
$handler->display->display_options['fields']['view_node']['element_class'] = 'views-field-title';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = '';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Document Type */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Publication date - type */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Publication date - type';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = '<div class="view-publ-date-type">
  <span class="views-field views-field-changed">
    [published_at]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-document-type">
    [field_ef_document_type]
  </span>
</div>';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Body (Summary or trimmed 200) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 200)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Author */
$handler->display->display_options['fields']['field_ef_publ_contributors']['id'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['field'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['label'] = '';
$handler->display->display_options['fields']['field_ef_publ_contributors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['alter']['text'] = '  <span class="views-field views-field-field-ef-publ-contributors">
    [field_ef_publ_contributors]
  </span>';
$handler->display->display_options['fields']['field_ef_publ_contributors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_publ_contributors']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_ef_publ_contributors']['separator'] = '; ';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['alter']['text'] = '  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>';
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-observatory">
    [field_ef_observatory]
  </span>';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
    [field_ef_publ_contributors]
    [field_ef_theme]
    [field_ef_observatory]
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Image css classes */
$handler->display->display_options['fields']['field_ef_document_1']['id'] = 'field_ef_document_1';
$handler->display->display_options['fields']['field_ef_document_1']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['ui_name'] = 'Image css classes';
$handler->display->display_options['fields']['field_ef_document_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document_1']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
  'show_description' => 0,
  'tag' => 'span',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search publications';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['value'] = array(
  13767 => '13767',
);
$handler->display->display_options['filters']['field_ef_document_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_document_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator_id'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['label'] = 'Publication types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['identifier'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_document_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Author (field_ef_publ_contributors) */
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['id'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['field'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator_id'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['label'] = 'Authors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['identifier'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['vocabulary'] = 'ef_publication_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['error_message'] = FALSE;
$handler->display->display_options['path'] = 'about-eurofound/what-we-do/work-programmes-list';
$handler->display->display_options['menu']['title'] = 'Publications';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: ERM annual reports page */
$handler = $view->new_display('page', 'ERM annual reports page', 'page_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'ERM annual reports';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_document_1]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Entity translation: Title: translated */
$handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['label'] = '';
$handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_node']['alter']['text'] = '[title_field_et]';
$handler->display->display_options['fields']['view_node']['element_class'] = 'views-field-title';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = '';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Document Type */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Publication date - type */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Publication date - type';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = '<div class="view-publ-date-type">
  <span class="views-field views-field-changed">
    [published_at]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-document-type">
    [field_ef_document_type]
  </span>
</div>';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Body (Summary or trimmed 200) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 200)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Author */
$handler->display->display_options['fields']['field_ef_publ_contributors']['id'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['field'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['label'] = '';
$handler->display->display_options['fields']['field_ef_publ_contributors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_publ_contributors']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_ef_publ_contributors']['separator'] = '; ';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
  <span class="views-field views-field-field-ef-publ-contributors">
    [field_ef_publ_contributors]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-observatory">
    [field_ef_observatory]
  </span>
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Image css classes */
$handler->display->display_options['fields']['field_ef_document_1']['id'] = 'field_ef_document_1';
$handler->display->display_options['fields']['field_ef_document_1']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['ui_name'] = 'Image css classes';
$handler->display->display_options['fields']['field_ef_document_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document_1']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
  'show_description' => 0,
  'tag' => 'span',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search publications';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
  12176 => '12176',
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'ef_observatory';
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
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['value'] = array(
  11299 => '11299',
);
$handler->display->display_options['filters']['field_ef_document_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_document_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator_id'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['label'] = 'Document Type (field_ef_document_type)';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['identifier'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Author (field_ef_publ_contributors) */
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['id'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['field'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator_id'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['label'] = 'Authors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['identifier'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['vocabulary'] = 'ef_publication_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['error_message'] = FALSE;
$handler->display->display_options['path'] = 'observatories/emcc/erm/annual-reports';
$handler->display->display_options['menu']['title'] = 'Publications';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: ERM quarterly reports page */
$handler = $view->new_display('page', 'ERM quarterly reports page', 'page_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'ERM quarterly';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_document_1]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Entity translation: Title: translated */
$handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['label'] = '';
$handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_node']['alter']['text'] = '[title_field_et]';
$handler->display->display_options['fields']['view_node']['element_class'] = 'views-field-title';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = '';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Document Type */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Publication date - type */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Publication date - type';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = '<div class="view-publ-date-type">
  <span class="views-field views-field-changed">
 [published_at]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-document-type">
    [field_ef_document_type]
  </span>
</div>';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Body (Summary or trimmed 200) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 200)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Author */
$handler->display->display_options['fields']['field_ef_publ_contributors']['id'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['field'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['label'] = '';
$handler->display->display_options['fields']['field_ef_publ_contributors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_publ_contributors']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_ef_publ_contributors']['separator'] = '; ';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
  <span class="views-field views-field-field-ef-publ-contributors">
    [field_ef_publ_contributors]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-observatory">
    [field_ef_observatory]
  </span>
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Image css classes */
$handler->display->display_options['fields']['field_ef_document_1']['id'] = 'field_ef_document_1';
$handler->display->display_options['fields']['field_ef_document_1']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['ui_name'] = 'Image css classes';
$handler->display->display_options['fields']['field_ef_document_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document_1']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
  'show_description' => 0,
  'tag' => 'span',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search publications';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['value'] = array(
  11311 => '11311',
);
$handler->display->display_options['filters']['field_ef_document_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator_id'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['label'] = 'Publication types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['identifier'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_document_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Author (field_ef_publ_contributors) */
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['id'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['field'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator_id'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['label'] = 'Authors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['identifier'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['vocabulary'] = 'ef_publication_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['error_message'] = FALSE;
$handler->display->display_options['path'] = 'observatories/emcc/erm/erm-quarterly-newsletters';
$handler->display->display_options['menu']['title'] = 'Publications';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Publications block EMCC landing page */
$handler = $view->new_display('block', 'Publications block EMCC landing page', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'EMCC Publications';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_document_1]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Document Type */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_type']['element_wrapper_class'] = 'ef-field-metadata';
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document_1']['id'] = 'field_ef_document_1';
$handler->display->display_options['fields']['field_ef_document_1']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['click_sort_column'] = 'fid';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Nid */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
  12176 => '12176',
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
/* Filter criterion: Global: PHP */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = 'if($static == $data->nid){return TRUE;}
$static = $data->nid;';

/* Display: Publications block EurWORK landing page */
$handler = $view->new_display('block', 'Publications block EurWORK landing page', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'EurWORK publications';
$handler->display->display_options['field_language_add_to_query'] = 0;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_document_1]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Css class image. */
$handler->display->display_options['fields']['field_ef_document_1']['id'] = 'field_ef_document_1';
$handler->display->display_options['fields']['field_ef_document_1']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['ui_name'] = 'Css class image.';
$handler->display->display_options['fields']['field_ef_document_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['click_sort_column'] = 'fid';
/* Field: Display Country (delta) */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display Country (delta)';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
  
  $node = node_load($data->nid);
  
  //Country delta
  $iso2 = $node->field_ef_eu_related_countries;
  $variable = $iso2[\'und\'][0][\'iso2\'];
  
  
  $sql = "SELECT DISTINCT cc.name 
             FROM node n
             INNER JOIN field_data_field_ef_eu_related_countries c on c.entity_id = n.nid
             INNER JOIN countries_country cc on c.field_ef_eu_related_countries_iso2 = cc.iso2
             WHERE n.type = \'ef_comparative_analytical_report\' 
             AND cc.iso2 = \'$variable\'"; 
  
  $country = db_query($sql)->fetchAll();
  

?>
<?php if(!empty($country)): ?>
  <li class="list-country"><?php print $country[0]->name; ?></li>
<?php endif; ?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Display deliverable kind/type and date */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Display deliverable kind/type and date';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
  
  $node = node_load($data->nid);
  
  //Content type
  $type = $node->type;

  // deliverable kinds
  $tid = $node->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);
  
  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    $name = str_replace("ef_","EF ",$name);


  }

  if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
    $name = \'Research in Focus\';
  }elseif($tid == 13744){
    $name = \'Comparative analytical report\';
  }elseif($tid == 13745){
    $name = \'Annual update\';
  }elseif($tid == 13746){
    $name = \'Representativeness study\';
  }



  // publication date
  $date_ts = $node->published_at;
  $date = date(\'d F Y\', $date_ts);
  

?>

<?php if(isset($name)): ?>
  <li class="list-delib-kind"><?php print $name; ?></li>
<?php endif; ?>

<?php if(isset($date)): ?>
  <li class="list-pub-date"><?php print $date; ?></li>
<?php endif; ?>
';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Eurwork link */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['ui_name'] = 'Eurwork link';
$handler->display->display_options['fields']['php_2']['label'] = '';
$handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
global $base_url;
?>
<a href="<?php print $base_url . \'/observatories/eurwork\'; ?>">EurWORK</a>';
$handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '<li class="list-observatory">[php_2]</li>';
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
/* Field: List info */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'List info';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="metadata-items inline-list">
  [php_1]
  [php]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
  13188 => '13188',
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['operator'] = 'not';
$handler->display->display_options['filters']['field_ef_document_type_tid']['value'] = array(
  11310 => '11310',
  11305 => '11305',
);
$handler->display->display_options['filters']['field_ef_document_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';

/* Display: Latest publications on topic(s) block */
$handler = $view->new_display('block', 'Latest publications on topic(s) block', 'block_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest publications on topic(s)';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'has-ef-image';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Document Type */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_type']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
  'ef_topics' => 'ef_topics',
);
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
$handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
/* Contextual filter: Exclude node with id */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['ui_name'] = 'Exclude node with id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Year Jump Menu */
$handler = $view->new_display('block', 'Year Jump Menu', 'block_4');
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search publications';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_document_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator_id'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['label'] = 'Publication types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['identifier'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_document_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Author (field_ef_publ_contributors) */
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['id'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['field'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator_id'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['label'] = 'Authors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['identifier'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['vocabulary'] = 'ef_publication_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['error_message'] = FALSE;

/* Display: EurWORK publications */
$handler = $view->new_display('page', 'EurWORK publications', 'page_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'EurWORK publications';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
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
  'published_at' => array(
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
  'field_ef_theme_tid_1' => array(
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
  'field_ef_topic_tid_selective' => array(
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
  'field_ef_document_type_tid' => array(
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
  'field_ef_publ_contributors_tid' => array(
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
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_document_1]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_document' => 'field_ef_document',
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Entity translation: Title: translated */
$handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['label'] = '';
$handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['view_node']['alter']['text'] = '[title_field_et]';
$handler->display->display_options['fields']['view_node']['element_class'] = 'views-field-title';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['view_node']['node_in_colorbox_rel'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = '';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Document Type */
$handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
$handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Publication date - type */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Publication date - type';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = '<div class="view-publ-date-type">
  <span class="views-field views-field-changed">
    [published_at]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-document-type">
    [field_ef_document_type]
  </span>
</div>';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
/* Field: Body (Summary or trimmed 200) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 200)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Author */
$handler->display->display_options['fields']['field_ef_publ_contributors']['id'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['field'] = 'field_ef_publ_contributors';
$handler->display->display_options['fields']['field_ef_publ_contributors']['label'] = '';
$handler->display->display_options['fields']['field_ef_publ_contributors']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_publ_contributors']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_publ_contributors']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_ef_publ_contributors']['separator'] = '; ';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Metadata */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['ui_name'] = 'Metadata';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="view-item-metadata">
  <span class="views-field views-field-field-ef-publ-contributors">
    [field_ef_publ_contributors]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-theme">
    [field_ef_theme]
  </span>
  <span class="view-field-separator"> | </span>
  <span class="views-field views-field-field-ef-observatory">
    [field_ef_observatory]
  </span>
</div>';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Image css classes */
$handler->display->display_options['fields']['field_ef_document_1']['id'] = 'field_ef_document_1';
$handler->display->display_options['fields']['field_ef_document_1']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document_1']['ui_name'] = 'Image css classes';
$handler->display->display_options['fields']['field_ef_document_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_document_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_document_1']['alter']['text'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['empty'] = 'no-ef-image';
$handler->display->display_options['fields']['field_ef_document_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_document_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document_1']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
  'show_description' => 0,
  'tag' => 'span',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Title/Body (Combined) */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search publications';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title, body';
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
  'body' => 'body',
);
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = 'not empty';
$handler->display->display_options['filters']['published_at']['group'] = 1;
$handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
$handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
$handler->display->display_options['filters']['published_at']['expose']['label'] = 'Year of publication';
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
);
/* Filter criterion: Topic (field_ef_topic) (selective) */
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['id'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['field'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['identifier'] = 'field_ef_topic_tid_selective';
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Observatories */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['ui_name'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
  13188 => '13188',
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'ef_observatory';
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
  17 => 0,
  18 => 0,
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['value'] = array(
  11299 => '11299',
  11310 => '11310',
  11307 => '11307',
  11309 => '11309',
);
$handler->display->display_options['filters']['field_ef_document_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_document_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator_id'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['label'] = 'Publication types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['identifier'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_document_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';
$handler->display->display_options['filters']['field_ef_document_type_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Author (field_ef_publ_contributors) */
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['id'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['table'] = 'field_data_field_ef_publ_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['field'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator_id'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['label'] = 'Authors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['operator'] = 'field_ef_publ_contributors_tid_op';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['identifier'] = 'field_ef_publ_contributors_tid';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['vocabulary'] = 'ef_publication_contributors';
$handler->display->display_options['filters']['field_ef_publ_contributors_tid']['error_message'] = FALSE;
$handler->display->display_options['path'] = 'observatories/eurwork/publications';
$handler->display->display_options['menu']['title'] = 'Publications';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
$view = new view();
$view->name = 'ef_quarterly_reports';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node_revision';
$view->human_name = 'Quarterly reports';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Quarterly reports';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view revisions';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
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
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'type' => 'type',
  'field_ef_quartely_report_year-revision_id' => 'field_ef_quartely_report_year-revision_id',
  'field_ef_quarter-revision_id' => 'field_ef_quarter-revision_id',
  'name' => 'name',
  'last_editor' => 'last_editor',
  'timestamp' => 'timestamp',
  'state' => 'state',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'timestamp';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
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
  'field_ef_quartely_report_year-revision_id' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_ef_quarter-revision_id' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
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
  'last_editor' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
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
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Content revision: Content */
$handler->display->display_options['relationships']['vid']['id'] = 'vid';
$handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['vid']['field'] = 'vid';
$handler->display->display_options['relationships']['vid']['label'] = 'Content revision';
/* Relationship: Revision node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Revision node';
$handler->display->display_options['relationships']['nid']['label'] = 'Revision node';
/* Relationship: Country */
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['id'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['table'] = 'field_revision_field_ef_quarter_report_country';
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['field'] = 'field_ef_quarter_report_country_iso2';
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['ui_name'] = 'Country';
$handler->display->display_options['relationships']['field_ef_quarter_report_country_iso2']['label'] = 'Country';
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['relationship'] = 'nid';
/* Field: Content (historical data): Year */
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['id'] = 'field_ef_quartely_report_year-revision_id';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['table'] = 'field_revision_field_ef_quartely_report_year';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['field'] = 'field_ef_quartely_report_year-revision_id';
$handler->display->display_options['fields']['field_ef_quartely_report_year-revision_id']['settings'] = array(
  'format_type' => 'ef_date_format',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content (historical data): Quarter */
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['id'] = 'field_ef_quarter-revision_id';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['table'] = 'field_revision_field_ef_quarter';
$handler->display->display_options['fields']['field_ef_quarter-revision_id']['field'] = 'field_ef_quarter-revision_id';
/* Field: Country */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['fields']['name']['ui_name'] = 'Country';
$handler->display->display_options['fields']['name']['label'] = 'Country';
/* Field: Content: Last edited by */
$handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['table'] = 'node';
$handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['relationship'] = 'nid';
/* Field: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'ef_date_format';
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['relationship'] = 'nid';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Sort criterion: Content revision: Updated date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'nid';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'ef_ic_quarterly_report' => 'ef_ic_quarterly_report',
  'ef_network_quarterly_report' => 'ef_network_quarterly_report',
);
$handler->display->display_options['filters']['type_1']['group'] = 1;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_ic_quarterly_report' => 'ef_ic_quarterly_report',
  'ef_network_quarterly_report' => 'ef_network_quarterly_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
/* Filter criterion: Content (historical data): Year (field_ef_quartely_report_year) */
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['id'] = 'field_ef_quartely_report_year_value_2';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['table'] = 'field_revision_field_ef_quartely_report_year';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['field'] = 'field_ef_quartely_report_year_value';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['group'] = 1;
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['expose']['operator_id'] = 'field_ef_quartely_report_year_value_2_op';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['expose']['label'] = 'Year';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['expose']['operator'] = 'field_ef_quartely_report_year_value_2_op';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['expose']['identifier'] = 'field_ef_quartely_report_year_value_2';
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_quartely_report_year_value_2']['granularity'] = 'year';
/* Filter criterion: Content (historical data): Quarter (field_ef_quarter) */
$handler->display->display_options['filters']['field_ef_quarter_value_1']['id'] = 'field_ef_quarter_value_1';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['table'] = 'field_revision_field_ef_quarter';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['field'] = 'field_ef_quarter_value';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_quarter_value_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['operator_id'] = 'field_ef_quarter_value_1_op';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['label'] = 'Quarter';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['operator'] = 'field_ef_quarter_value_1_op';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['identifier'] = 'field_ef_quarter_value_1';
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_quarter_value_1']['expose']['remember_roles'] = array(
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
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_quarter_report_country_iso2';
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
/* Filter criterion: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['ui_name'] = 'State';
$handler->display->display_options['filters']['state']['value'] = array(
  'draft' => 'draft',
  'submitted_qr' => 'submitted_qr',
  'under_revision_request' => 'under_revision_request',
  'approved' => 'approved',
);
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
  17 => 0,
  18 => 0,
);
$handler->display->display_options['filters']['state']['expose']['reduce'] = TRUE;

/* Display: Quarterly reports (Quality Managers) */
$handler = $view->new_display('page', 'Quarterly reports (Quality Managers)', 'page');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  5 => '5',
  9 => '9',
  17 => '17',
);
$handler->display->display_options['path'] = 'quarterly-reports';

/* Display: Quarterly reports (Authors) */
$handler = $view->new_display('page', 'Quarterly reports (Authors)', 'authors');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  7 => '7',
  18 => '18',
);
$handler->display->display_options['path'] = 'quarterly-reports';

$view->save();
$view = new view();
$view->name = 'latest_publications';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Latest Publications';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Latest publications';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '3600';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '3600';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => '',
  'show_description' => 0,
  'tag' => 'div',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_publication' => 'ef_publication',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'menu_publications',
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'div',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Overwrite publication image */
$handler->display->display_options['fields']['field_overwrite_thumbnail']['id'] = 'field_overwrite_thumbnail';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['table'] = 'field_data_field_overwrite_thumbnail';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['field'] = 'field_overwrite_thumbnail';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_overwrite_thumbnail']['type'] = 'list_key';
$handler->display->display_options['fields']['field_overwrite_thumbnail']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
    $node = node_load($data->nid);


    if (isset($node->field_overwrite_thumbnail["und"][0]["value"]) && $node->field_overwrite_thumbnail["und"][0]["value"] == 1) {

        if (isset($node->field_ef_main_image[\'und\'][0][uri])) {
           print  \'<div class="views-field-field-ef-document"><a href="/\' . $node->path[\'alias\'] . \'"><img src="\' .  image_style_url(\'menu_publications\',$node->field_ef_main_image[\'und\'][0][uri]) .\'" ></a></div>\'; 
       }  

    } else {

        if (isset($node->field_ef_document[\'en\'][0])) {
            print \'<div class="views-field-field-ef-document"><a href="/\' . $node->path[\'alias\'] . \'"><img src="\' . image_style_url(\'menu_publications\', _pdfpreview_create_preview($node->field_ef_document[\'en\'][0])) .\'" ></a></div>\';
        } else {
            if (isset($node->field_ef_main_image[\'und\'][0][uri])) {
               print  \'<div class="views-field-field-ef-document"><a href="/\' . $node->path[\'alias\'] . \'"><img src="\' .  image_style_url(\'publication_field_main_image\',$node->field_ef_main_image[\'und\'][0][uri]) .\'" ></a></div>\'; 
           }     
       }

    }
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;

$view->save();
}
