<?php
/**
 * @file
 * ef_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ef_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ef_events';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_ef_event_start_date']['id'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['field'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ef_event_start_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['delta_offset'] = '0';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_ef_event_end_date']['id'] = 'field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['table'] = 'field_data_field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['field'] = 'field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Start Date (field_ef_event_start_date) */
  $handler->display->display_options['sorts']['field_ef_event_start_date_value']['id'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['sorts']['field_ef_event_start_date_value']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['sorts']['field_ef_event_start_date_value']['field'] = 'field_ef_event_start_date_value';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ef_event_start_date' => 'field_ef_event_start_date',
    'field_ef_event_end_date' => 'field_ef_event_end_date',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'ef_event' => '#ffffff',
    'ef_factsheet' => '#ffffff',
    'ef_news' => '#ffffff',
    'ef_publication' => '#ffffff',
    'ef_regulation' => '#ffffff',
    'ef_restructuring_in_smes' => '#ffffff',
    'ef_support_instrument' => '#ffffff',
    'test_content_type' => '#ffffff',
    'ef_venue' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ef_event_start_date.field_ef_event_start_date_value' => 'field_data_field_ef_event_start_date.field_ef_event_start_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-ef-event-start-date/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-ef-events-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Events';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-ef-events-menu';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ef_event_start_date' => 'field_ef_event_start_date',
    'field_ef_event_end_date' => 'field_ef_event_end_date',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'ef_event' => '#ffffff',
    'ef_factsheet' => '#ffffff',
    'ef_news' => '#ffffff',
    'ef_publication' => '#ffffff',
    'ef_regulation' => '#ffffff',
    'ef_restructuring_in_smes' => '#ffffff',
    'ef_support_instrument' => '#ffffff',
    'test_content_type' => '#ffffff',
    'ef_venue' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ef_event_start_date.field_ef_event_start_date_value' => 'field_data_field_ef_event_start_date.field_ef_event_start_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-ef-event-start-date/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ef_event_start_date' => 'field_ef_event_start_date',
    'field_ef_event_end_date' => 'field_ef_event_end_date',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'ef_event' => '#ffffff',
    'ef_factsheet' => '#ffffff',
    'ef_news' => '#ffffff',
    'ef_publication' => '#ffffff',
    'ef_regulation' => '#ffffff',
    'ef_restructuring_in_smes' => '#ffffff',
    'ef_support_instrument' => '#ffffff',
    'test_content_type' => '#ffffff',
    'ef_venue' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ef_event_start_date.field_ef_event_start_date_value' => 'field_data_field_ef_event_start_date.field_ef_event_start_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-ef-event-start-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_ef_event_start_date']['id'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['field'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_ef_event_start_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ef_event_start_date.field_ef_event_start_date_value' => 'field_data_field_ef_event_start_date.field_ef_event_start_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-ef-event-start-date/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ef_event_start_date.field_ef_event_start_date_value' => 'field_data_field_ef_event_start_date.field_ef_event_start_date_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ef_event_start_date' => 'field_ef_event_start_date',
    'field_ef_event_end_date' => 'field_ef_event_end_date',
  );
  $handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ef_event_start_date.field_ef_event_start_date_value' => 'field_data_field_ef_event_start_date.field_ef_event_start_date_value',
  );
  $export['ef_events'] = $view;

  $view = new view();
  $view->name = 'ef_events_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events list';
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
    'field_ef_observatory_tid_1' => array(
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
    'field_ef_event_start_date_value' => array(
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
    'nid_1' => 'nid_1',
    'field_ef_venue_title' => 'field_ef_venue_title',
    'field_ef_event_type' => 'field_ef_event_type',
    'field_ef_organised_by' => 'field_ef_organised_by',
    'field_ef_theme' => 'field_ef_theme',
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
  /* Sort criterion: Content: Start Date (field_ef_event_start_date) */
  $handler->display->display_options['sorts']['field_ef_event_start_date_value']['id'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['sorts']['field_ef_event_start_date_value']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['sorts']['field_ef_event_start_date_value']['field'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['sorts']['field_ef_event_start_date_value']['order'] = 'DESC';
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
    'ef_event' => 'ef_event',
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search for events';
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
    10 => 0,
    12 => 0,
    11 => 0,
    13 => 0,
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
  /* Filter criterion: Upcoming events */
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['id'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['field'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['ui_name'] = 'Upcoming events';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['expose']['operator_id'] = 'field_ef_event_start_date_value_op';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['expose']['label'] = 'Upcoming only';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['expose']['operator'] = 'field_ef_event_start_date_value_op';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['expose']['identifier'] = 'upcoming';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
    10 => 0,
    12 => 0,
    11 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['group_info']['identifier'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Upcoming only',
      'operator' => '>=',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => 'now',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'relative',
          'min' => NULL,
          'default_date' => 'now',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['default_date'] = 'now';
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

  /* Display: Events page */
  $handler = $view->new_display('page', 'Events page', 'events_page_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '[field_ef_main_image_1] [field_ef_photo_gallery_images_1]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ef_venue_title' => 'field_ef_venue_title',
    'nid_1' => 'nid_1',
    'field_ef_event_type' => 'field_ef_event_type',
    'field_ef_organised_by' => 'field_ef_organised_by',
    'field_ef_theme' => 'field_ef_theme',
    'field_ef_observatory' => 'field_ef_observatory',
  );
  $handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_ef_event_start_date']['id'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['field'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['settings'] = array(
    'format_type' => 'dmy_for_durations',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_ef_event_end_date']['id'] = 'field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['table'] = 'field_data_field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['field'] = 'field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_event_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_end_date']['settings'] = array(
    'format_type' => 'dmy_for_durations',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Start - End date */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Start - End date';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[field_ef_event_start_date] - [field_ef_event_end_date]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Field: Venue title */
  $handler->display->display_options['fields']['field_ef_venue_title']['id'] = 'field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['table'] = 'field_data_field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['field'] = 'field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['ui_name'] = 'Venue title';
  $handler->display->display_options['fields']['field_ef_venue_title']['label'] = '';
  $handler->display->display_options['fields']['field_ef_venue_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ef_venue_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ef_venue_title']['element_class'] = 'views-field-field-ef-venue';
  $handler->display->display_options['fields']['field_ef_venue_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_venue_title']['hide_empty'] = TRUE;
  /* Field: Body (Summary) */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['preserve_tags'] = '<p> <br>';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_wrapper_class'] = 'margin-after';
  $handler->display->display_options['fields']['body_1']['empty'] = '<span></span>';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_ef_event_type']['id'] = 'field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['table'] = 'field_data_field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['field'] = 'field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_type']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_event_type']['type'] = 'taxonomy_term_reference_link';
  /* Field: Content: Organised by */
  $handler->display->display_options['fields']['field_ef_organised_by']['id'] = 'field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['table'] = 'field_data_field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['field'] = 'field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['element_wrapper_class'] = 'ef-field-metadata';
  /* Field: Field: Theme */
  $handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['label'] = '';
  $handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_theme']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
  /* Field: Content: Observatory */
  $handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
  $handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_observatory']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
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
    'ef_event' => 'ef_event',
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search for events';
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
    10 => 0,
    12 => 0,
    11 => 0,
    13 => 0,
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
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['title'] = 'All events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'All events';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Upcoming events page */
  $handler = $view->new_display('page', 'Upcoming events page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '[field_ef_main_image_1] [field_ef_photo_gallery_images_1]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nid_1' => 'nid_1',
    'field_ef_venue_title' => 'field_ef_venue_title',
    'field_ef_event_type' => 'field_ef_event_type',
    'field_ef_organised_by' => 'field_ef_organised_by',
    'field_ef_theme' => 'field_ef_theme',
    'field_ef_observatory' => 'field_ef_observatory',
  );
  $handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_ef_event_start_date']['id'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['field'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['settings'] = array(
    'format_type' => 'dmy_for_durations',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_ef_event_end_date']['id'] = 'field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['table'] = 'field_data_field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['field'] = 'field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_event_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_end_date']['settings'] = array(
    'format_type' => 'dmy_for_durations',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Start - End date */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Start - End date';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[field_ef_event_start_date] - [field_ef_event_end_date]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Field: Venue Title */
  $handler->display->display_options['fields']['field_ef_venue_title']['id'] = 'field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['table'] = 'field_data_field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['field'] = 'field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['ui_name'] = 'Venue Title';
  $handler->display->display_options['fields']['field_ef_venue_title']['label'] = '';
  $handler->display->display_options['fields']['field_ef_venue_title']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_ef_venue_title']['element_label_class'] = 'views-field-field-ef-venue';
  $handler->display->display_options['fields']['field_ef_venue_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_venue_title']['hide_empty'] = TRUE;
  /* Field: Body (Summary) */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['preserve_tags'] = '<p> <br>';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_wrapper_class'] = 'margin-after';
  $handler->display->display_options['fields']['body_1']['empty'] = '<span></span>';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_ef_event_type']['id'] = 'field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['table'] = 'field_data_field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['field'] = 'field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_type']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_event_type']['type'] = 'taxonomy_term_reference_link';
  /* Field: Content: Organised by */
  $handler->display->display_options['fields']['field_ef_organised_by']['id'] = 'field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['table'] = 'field_data_field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['field'] = 'field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['element_wrapper_class'] = 'ef-field-metadata';
  /* Field: Field: Theme */
  $handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['label'] = '';
  $handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_theme']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
  /* Field: Content: Observatory */
  $handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
  $handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_observatory']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
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
    'ef_event' => 'ef_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Upcoming events */
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['id'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['field'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['ui_name'] = 'Upcoming events';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['year_range'] = '-10:+10';
  /* Filter criterion: Title/Body (Combined) */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search for events';
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
    10 => 0,
    12 => 0,
    11 => 0,
    13 => 0,
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
  $handler->display->display_options['path'] = 'events/upcoming';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Upcoming';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Past events page */
  $handler = $view->new_display('page', 'Past events page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past events';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_ef_event_start_date']['id'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['field'] = 'field_ef_event_start_date';
  $handler->display->display_options['fields']['field_ef_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_start_date']['settings'] = array(
    'format_type' => 'dmy_for_durations',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_ef_event_end_date']['id'] = 'field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['table'] = 'field_data_field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['field'] = 'field_ef_event_end_date';
  $handler->display->display_options['fields']['field_ef_event_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_event_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_end_date']['settings'] = array(
    'format_type' => 'dmy_for_durations',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Start - End date */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Start - End date';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[field_ef_event_start_date] - [field_ef_event_end_date]';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Field: Venue Title */
  $handler->display->display_options['fields']['field_ef_venue_title']['id'] = 'field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['table'] = 'field_data_field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['field'] = 'field_ef_venue_title';
  $handler->display->display_options['fields']['field_ef_venue_title']['ui_name'] = 'Venue Title';
  $handler->display->display_options['fields']['field_ef_venue_title']['label'] = '';
  $handler->display->display_options['fields']['field_ef_venue_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ef_venue_title']['element_class'] = 'views-field-field-ef-venue';
  $handler->display->display_options['fields']['field_ef_venue_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_venue_title']['hide_empty'] = TRUE;
  /* Field: Body (Summary) */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['ui_name'] = 'Body (Summary)';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['preserve_tags'] = '<p> <br>';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_wrapper_class'] = 'margin-after';
  $handler->display->display_options['fields']['body_1']['empty'] = '<span></span>';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_ef_event_type']['id'] = 'field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['table'] = 'field_data_field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['field'] = 'field_ef_event_type';
  $handler->display->display_options['fields']['field_ef_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_ef_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_event_type']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_event_type']['type'] = 'taxonomy_term_reference_link';
  /* Field: Content: Organised by */
  $handler->display->display_options['fields']['field_ef_organised_by']['id'] = 'field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['table'] = 'field_data_field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['field'] = 'field_ef_organised_by';
  $handler->display->display_options['fields']['field_ef_organised_by']['element_wrapper_class'] = 'ef-field-metadata';
  /* Field: Field: Theme */
  $handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
  $handler->display->display_options['fields']['field_ef_theme']['label'] = '';
  $handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_theme']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
  /* Field: Content: Observatory */
  $handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
  $handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
  $handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
  $handler->display->display_options['fields']['field_ef_observatory']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
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
    'ef_event' => 'ef_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Past events */
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['id'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['table'] = 'field_data_field_ef_event_start_date';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['field'] = 'field_ef_event_start_date_value';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['ui_name'] = 'Past events';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_ef_event_start_date_value']['year_range'] = '-10:+10';
  /* Filter criterion: Title/Body (Combined) */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body (Combined)';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search for events';
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
    10 => 0,
    12 => 0,
    11 => 0,
    13 => 0,
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
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
  $handler->display->display_options['path'] = 'events/past';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Past';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ef_events_list'] = $view;

  return $export;
}
