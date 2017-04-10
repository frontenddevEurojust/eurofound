<?php
/**
 * @file
 * ef_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ef_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ef_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News articles';
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
    'ef_news' => 'ef_news',
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search for news';
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

  /* Display: News articles page */
  $handler = $view->new_display('page', 'News articles page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'news/news-articles';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: All news page */
  $handler = $view->new_display('page', 'All news page', 'news_page_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['display_description'] = 'This is a view aggregating: News, Spotlight On, Press Releases, Newsletters, Photogalleries and Videos';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '[field_ef_main_image_1] [field_ef_photo_gallery_images_1]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['id'] = 'field_ef_photo_gallery_images';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['table'] = 'field_data_field_ef_photo_gallery_images';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['field'] = 'field_ef_photo_gallery_images';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['label'] = '';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['element_wrapper_class'] = 'view-field-ef-image';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['type'] = 'lightbox2__lightbox__medium__medium';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images']['separator'] = '';
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '300',
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
  /* Field: Image css classes (photogallery) */
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['id'] = 'field_ef_photo_gallery_images_1';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['table'] = 'field_data_field_ef_photo_gallery_images';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['field'] = 'field_ef_photo_gallery_images';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['ui_name'] = 'Image css classes (photogallery)';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['alter']['text'] = 'has-photogallery-ef-image has-ef-image';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['empty'] = 'no-photogallery-ef-image';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['separator'] = '';
  /* Field: Image css classes (main) */
  $handler->display->display_options['fields']['field_ef_main_image_1']['id'] = 'field_ef_main_image_1';
  $handler->display->display_options['fields']['field_ef_main_image_1']['table'] = 'field_data_field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image_1']['field'] = 'field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image_1']['ui_name'] = 'Image css classes (main)';
  $handler->display->display_options['fields']['field_ef_main_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_ef_main_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_main_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ef_main_image_1']['alter']['text'] = 'has-main-ef-image has-ef-image';
  $handler->display->display_options['fields']['field_ef_main_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_main_image_1']['empty'] = 'no-main-ef-image';
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
    'ef_news' => 'ef_news',
    'ef_photo_gallery' => 'ef_photo_gallery',
    'simplenews' => 'simplenews',
    'ef_spotlight_entry' => 'ef_spotlight_entry',
    'ef_video' => 'ef_video',
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search for News';
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
  $handler->display->display_options['path'] = 'news';
  $export['ef_news'] = $view;

  $view = new view();
  $view->name = 'ef_newsletters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newsletters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newsletters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
    'simplenews' => 'simplenews',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news/newsletters';
  $export['ef_newsletters'] = $view;

  return $export;
}
