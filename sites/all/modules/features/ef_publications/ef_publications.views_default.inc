<?php
/**
 * @file
 * ef_publications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ef_publications_views_default_views() {
  $export = array();

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
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_publication_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ef_publication_date']['alter']['text'] = '[field_ef_publication_date]';
  $handler->display->display_options['fields']['field_ef_publication_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ef_publication_date']['alter']['path'] = 'publications?date_filter[value][year]=[field_ef_publication_date]';
  $handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_publication_date']['settings'] = array(
    'format_type' => 'ef_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ef_publication_date']['group_columns'] = array(
    'value' => 'value',
  );
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
  $export['date_jump_menu'] = $view;

  $view = new view();
  $view->name = 'ef_articles';
  $view->description = '';
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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
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
  /* Field: Field: Theme */
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
  /* Field: Content: Observatory */
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
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
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
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Select Language';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
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
  /* Field: Field: Theme */
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
  /* Field: Content: Observatory */
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
</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Image css classes */
  $handler->display->display_options['fields']['field_ef_main_image_1']['id'] = 'field_ef_main_image_1';
  $handler->display->display_options['fields']['field_ef_main_image_1']['table'] = 'field_data_field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image_1']['field'] = 'field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image_1']['ui_name'] = 'Image css classes';
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
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Select Language';
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
  );
  $handler->display->display_options['path'] = 'observatories/emcc/articles';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: EOWL articles page */
  $handler = $view->new_display('page', 'EOWL articles page', 'page_2');
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
  $handler->display->display_options['filters']['field_ef_observatory_tid_1']['value'] = array(
    12174 => '12174',
    13188 => '13188',
    12175 => '12175',
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
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Select Language';
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
  );
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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
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
  /* Field: Field: Theme */
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
  /* Field: Content: Observatory */
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
</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Image css classes */
  $handler->display->display_options['fields']['field_ef_main_image_1']['id'] = 'field_ef_main_image_1';
  $handler->display->display_options['fields']['field_ef_main_image_1']['table'] = 'field_data_field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image_1']['field'] = 'field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image_1']['ui_name'] = 'Image css classes';
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
  /* Filter criterion: Content: Deliverable kind (field_ef_deliverable_kind) */
  $handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['id'] = 'field_ef_deliverable_kind_tid';
  $handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['table'] = 'field_data_field_ef_deliverable_kind';
  $handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['field'] = 'field_ef_deliverable_kind_tid';
  $handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['value'] = array(
    13854 => '13854',
    13855 => '13855',
  );
  $handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_deliverable_kind_tid']['vocabulary'] = 'ef_deliverable_kinds';
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Select Language';
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
  );
  $handler->display->display_options['path'] = 'observatories/emcc/erm/survey-reports';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ef_articles'] = $view;

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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
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
  /* Field: Field: Theme */
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
  /* Field: Content: Observatory */
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
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
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
  $handler->display->display_options['path'] = 'comparative-information';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: EMCC CAR reports page */
  $handler = $view->new_display('page', 'EMCC CAR reports page', 'emcc_car_reports_page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
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
  /* Field: Field: Theme */
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
  /* Field: Content: Observatory */
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
  $handler->display->display_options['path'] = 'observatories/emcc/comparative-information';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: EurWORK CAR reports page */
  $handler = $view->new_display('page', 'EurWORK CAR reports page', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
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
  /* Field: Field: Theme */
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
  /* Field: Content: Observatory */
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
  $handler->display->display_options['path'] = 'observatories/eurwork/comparative-information';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ef_car_reports'] = $view;

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
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
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
  /* Relationship: Content: Country (field_ef_country) */
  $handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'Country';
  $handler->display->display_options['relationships']['field_ef_country_iso2']['required'] = TRUE;
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
  /* Field: Field: Theme */
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
  /* Field: Content: Observatory */
  $handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
  $handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Content: Observatory (field_ef_observatory) */
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['validate_options']['vocabularies'] = array(
    'ef_observatories' => 'ef_observatories',
  );
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_ef_observatory_tid']['validate_options']['transform'] = TRUE;
  /* Contextual filter: Case study name */
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['id'] = 'field_ef_case_study_name_tid';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['table'] = 'field_data_field_ef_case_study_name';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['field'] = 'field_ef_case_study_name_tid';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['ui_name'] = 'Case study name';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['title'] = 'Case studies of name: %2';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['validate_options']['vocabularies'] = array(
    'ef_case_study_names' => 'ef_case_study_names',
  );
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_ef_case_study_name_tid']['validate_options']['transform'] = TRUE;
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
    'ef_case_study' => 'ef_case_study',
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
  /* Filter criterion: Field: Theme (field_ef_theme) */
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

  /* Display: Case studies page */
  $handler = $view->new_display('page', 'Case studies page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '[field_ef_document_1]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'changed' => 'changed',
    'field_ef_case_study_name' => 'field_ef_case_study_name',
    'name' => 'name',
    'field_ef_theme' => 'field_ef_theme',
    'field_ef_topic' => 'field_ef_topic',
    'field_ef_observatory' => 'field_ef_observatory',
  );
  $handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'observatories/%/case-studies/%';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ef_case_studies'] = $view;

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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Countries: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'countries_country';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_ef_country_iso2_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content (historical data): Body */
  $handler->display->display_options['fields']['body-revision_id']['id'] = 'body-revision_id';
  $handler->display->display_options['fields']['body-revision_id']['table'] = 'field_revision_body';
  $handler->display->display_options['fields']['body-revision_id']['field'] = 'body-revision_id';
  $handler->display->display_options['fields']['body-revision_id']['label'] = '';
  $handler->display->display_options['fields']['body-revision_id']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'vid';
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
  $handler->display->display_options['path'] = 'national-contributions-export';

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
  $export['ef_national_contributions_export2'] = $view;

  $view = new view();
  $view->name = 'ef_network_quarterly_reports_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'Network quarterly reports export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Network quarterly reports export';
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
    'title' => 'title',
    'type' => 'type',
    'field_ef_quartely_report_year' => 'field_ef_quartely_report_year',
    'field_ef_quarter' => 'field_ef_quarter',
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
    'field_ef_quartely_report_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ef_quarter' => array(
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
  );
  /* Field: Quarter */
  $handler->display->display_options['fields']['field_ef_quarter-revision_id']['id'] = 'field_ef_quarter-revision_id';
  $handler->display->display_options['fields']['field_ef_quarter-revision_id']['table'] = 'field_revision_field_ef_quarter';
  $handler->display->display_options['fields']['field_ef_quarter-revision_id']['field'] = 'field_ef_quarter-revision_id';
  $handler->display->display_options['fields']['field_ef_quarter-revision_id']['ui_name'] = 'Quarter';
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
  /* Field: Content (historical data): Short summary */
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
  );
  /* Field: Content (historical data): 3. Processes */
  $handler->display->display_options['fields']['field_ef_processes-revision_id']['id'] = 'field_ef_processes-revision_id';
  $handler->display->display_options['fields']['field_ef_processes-revision_id']['table'] = 'field_revision_field_ef_processes';
  $handler->display->display_options['fields']['field_ef_processes-revision_id']['field'] = 'field_ef_processes-revision_id';
  $handler->display->display_options['fields']['field_ef_processes-revision_id']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_ef_processes-revision_id']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content (historical data): Employment Status */
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
  /* Field: Content (historical data): Work organisation, skills and learning */
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
  /* Field: Content (historical data): Occupational health and safety and workplace health promotion */
  $handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['id'] = 'field_ef_occupational_health-revision_id';
  $handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['table'] = 'field_revision_field_ef_occupational_health';
  $handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['field'] = 'field_ef_occupational_health-revision_id';
  $handler->display->display_options['fields']['field_ef_occupational_health-revision_id']['label'] = '4.5.6 Occupational health and safety and workplace health promotion';
  /* Field: Content (historical data): Forms of work organisation */
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
  );
  /* Field: Content (historical data): Participation at work */
  $handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['id'] = 'field_ef_participation_at_work-revision_id';
  $handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['table'] = 'field_revision_field_ef_participation_at_work';
  $handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['field'] = 'field_ef_participation_at_work-revision_id';
  $handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['label'] = '4.6.4 Participation at work';
  $handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_ef_participation_at_work-revision_id']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content (historical data): 5. Other relevant issues */
  $handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['id'] = 'field_ef_other_relevant_issues-revision_id';
  $handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['table'] = 'field_revision_field_ef_other_relevant_issues';
  $handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['field'] = 'field_ef_other_relevant_issues-revision_id';
  $handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_ef_other_relevant_issues-revision_id']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content (historical data): 6. Summary, commentary and outlook */
  $handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['id'] = 'field_ef_summary_commentary-revision_id';
  $handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['table'] = 'field_revision_field_ef_summary_commentary';
  $handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['field'] = 'field_ef_summary_commentary-revision_id';
  $handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_ef_summary_commentary-revision_id']['settings'] = array(
    'view_mode' => 'full',
  );
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
    'ef_network_quarterly_report' => 'ef_network_quarterly_report',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
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
  $handler->display->display_options['filters']['field_ef_quartely_report_year_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_quarter_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_quarter_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
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
    5 => 0,
    8 => 0,
    9 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['dynamic-field']['filterable_fields'] = array(
    'title' => 'title',
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
  $handler->display->display_options['filters']['dynamic-field']['defaults_filterable_fields'] = array(
    'title' => 'title',
    'field_ef_quartely_report_year-revision_id' => 0,
    'field_ef_quarter-revision_id' => 0,
    'name' => 0,
    'last_editor' => 0,
    'timestamp' => 0,
    'state' => 0,
    'field_ef_short_summary-revision_id' => 0,
    'field_ef_actors_institutions-revision_id' => 0,
    'field_ef_processes-revision_id' => 0,
    'field_ef_employment_status-revision_id' => 0,
    'field_ef_entitlements_obligs-revision_id' => 0,
    'field_ef_termination_of_employm-revision_id' => 0,
    'field_ef_pay-revision_id' => 0,
    'field_ef_working_time_in_general-revision_id' => 0,
    'field_ef_organisation_of_working-revision_id' => 0,
    'field_ef_work_life_balance-revision_id' => 0,
    'field_ef_non_standard_working-revision_id' => 0,
    'field_ef_skills_and_training-revision_id' => 0,
    'field_ef_work_organisation_skill-revision_id' => 0,
    'field_ef_career_development-revision_id' => 0,
    'field_ef_physical_risk_factors-revision_id' => 0,
    'field_ef_psychosocial_risk_fact-revision_id' => 0,
    'field_ef_work_related_health-revision_id' => 0,
    'field_ef_absenteeism_presenteeis-revision_id' => 0,
    'field_ef_violence_and_harassment-revision_id' => 0,
    'field_ef_occupational_health-revision_id' => 0,
    'field_ef_forms_of_work_organisat-revision_id' => 0,
    'field_ef_workplace_innovation-revision_id' => 0,
    'field_ef_employee_involvement-revision_id' => 0,
    'field_ef_participation_at_work-revision_id' => 0,
    'field_ef_other_relevant_issues-revision_id' => 0,
    'field_ef_summary_commentary-revision_id' => 0,
  );
  $handler->display->display_options['filters']['dynamic-field']['checkboxes'] = 1;

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
  $handler->display->display_options['path'] = 'network-quarterly-reports-export';

  /* Display: Data export XLS */
  $handler = $view->new_display('views_data_export', 'Data export XLS', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'views-data-export/network-quarterly-reports-qm.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'authors' => 0,
  );

  /* Display: Data export DOC */
  $handler = $view->new_display('views_data_export', 'Data export DOC', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['attach_text'] = 'DOC';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'views-data-export/network-quarterly-reports-qm.doc';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'authors' => 0,
  );
  $export['ef_network_quarterly_reports_export'] = $view;

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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
  );
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
  /* Relationship: Field: Country (field_ef_eu_related_countries) */
  $handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['id'] = 'field_ef_eu_related_countries_iso2';
  $handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['table'] = 'field_data_field_ef_eu_related_countries';
  $handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['field'] = 'field_ef_eu_related_countries_iso2';
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
    [changed]
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
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_ef_publ_contributors']['id'] = 'field_ef_publ_contributors';
  $handler->display->display_options['fields']['field_ef_publ_contributors']['table'] = 'field_data_field_ef_publ_contributors';
  $handler->display->display_options['fields']['field_ef_publ_contributors']['field'] = 'field_ef_publ_contributors';
  $handler->display->display_options['fields']['field_ef_publ_contributors']['label'] = '';
  $handler->display->display_options['fields']['field_ef_publ_contributors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_publ_contributors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_publ_contributors']['delta_offset'] = '0';
  /* Field: Field: Theme */
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
  /* Field: Content: Observatory */
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
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
  /* Filter criterion: Content: Publication Date (field_ef_publication_date) */
  $handler->display->display_options['filters']['field_ef_publication_date_value']['id'] = 'field_ef_publication_date_value';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['table'] = 'field_data_field_ef_publication_date';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['field'] = 'field_ef_publication_date_value';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['operator_id'] = 'field_ef_publication_date_value_op';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['operator'] = 'field_ef_publication_date_value_op';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_publication_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['year_range'] = '1991:+0';
  /* Filter criterion: Field: Theme (field_ef_theme) */
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
  /* Filter criterion: Content: Authors (field_ef_publ_contributors) */
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
  /* Filter criterion: Content: Publication Date (field_ef_publication_date) */
  $handler->display->display_options['filters']['field_ef_publication_date_value']['id'] = 'field_ef_publication_date_value';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['table'] = 'field_data_field_ef_publication_date';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['field'] = 'field_ef_publication_date_value';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['operator_id'] = 'field_ef_publication_date_value_op';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['operator'] = 'field_ef_publication_date_value_op';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_publication_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['year_range'] = '1991:+0';
  /* Filter criterion: Field: Theme (field_ef_theme) */
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
  /* Filter criterion: Content: Authors (field_ef_publ_contributors) */
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
  $handler->display->display_options['path'] = 'about/what-we-do/annual-reports';
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
  /* Filter criterion: Content: Publication Date (field_ef_publication_date) */
  $handler->display->display_options['filters']['field_ef_publication_date_value']['id'] = 'field_ef_publication_date_value';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['table'] = 'field_data_field_ef_publication_date';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['field'] = 'field_ef_publication_date_value';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['operator_id'] = 'field_ef_publication_date_value_op';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['operator'] = 'field_ef_publication_date_value_op';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_ef_publication_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_ef_publication_date_value']['year_range'] = '1991:+0';
  /* Filter criterion: Field: Theme (field_ef_theme) */
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
  /* Filter criterion: Content: Authors (field_ef_publ_contributors) */
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
  $handler->display->display_options['path'] = 'about/what-we-do/work-programmes';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: ERM annual reports page */
  $handler = $view->new_display('page', 'ERM annual reports page', 'page_3');
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
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_publication_date']['element_wrapper_class'] = 'margin-after';
  $handler->display->display_options['fields']['field_ef_publication_date']['settings'] = array(
    'format_type' => 'ef_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Document Type */
  $handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_document_type']['element_wrapper_class'] = 'ef-field-metadata';
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
  /* Filter criterion: Content: Observatory (field_ef_observatory) */
  $handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
  $handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
  $handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
  $handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
    12176 => '12176',
  );
  $handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';

  /* Display: Publications block EurWORK landing page */
  $handler = $view->new_display('block', 'Publications block EurWORK landing page', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'EurWORK Publications';
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
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_publication_date']['element_wrapper_class'] = 'margin-after';
  $handler->display->display_options['fields']['field_ef_publication_date']['settings'] = array(
    'format_type' => 'ef_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Document Type */
  $handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_document_type']['element_wrapper_class'] = 'ef-field-metadata';
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
  /* Filter criterion: Content: Observatory (field_ef_observatory) */
  $handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
  $handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
  $handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
  $handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
    13188 => '13188',
  );
  $handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';

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
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
  $handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_publication_date']['element_wrapper_class'] = 'margin-after';
  $handler->display->display_options['fields']['field_ef_publication_date']['settings'] = array(
    'format_type' => 'ef_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Document Type */
  $handler->display->display_options['fields']['field_ef_document_type']['id'] = 'field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['table'] = 'field_data_field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['field'] = 'field_ef_document_type';
  $handler->display->display_options['fields']['field_ef_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_ef_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_document_type']['element_wrapper_class'] = 'ef-field-metadata';
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
  $export['ef_publications_view'] = $view;

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
    5 => 0,
    8 => 0,
    9 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Quarterly reports (Quality Managers) */
  $handler = $view->new_display('page', 'Quarterly reports (Quality Managers)', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    9 => '9',
  );
  $handler->display->display_options['path'] = 'quarterly-reports';

  /* Display: Quarterly reports (Authors) */
  $handler = $view->new_display('page', 'Quarterly reports (Authors)', 'authors');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['path'] = 'quarterly-reports';
  $export['ef_quarterly_reports'] = $view;

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
  $handler->display->display_options['title'] = 'Latest Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ef_publication' => 'ef_publication',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['latest_publications'] = $view;

  $view = new view();
  $view->name = 'publication_theme';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Publication Theme';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publication Theme';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'publications?ef_search=&ef_theme_topic[]=[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ef_themes' => 'ef_themes',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['publication_theme'] = $view;

  return $export;
}
