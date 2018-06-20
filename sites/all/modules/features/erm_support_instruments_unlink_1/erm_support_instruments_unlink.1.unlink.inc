<?php

/**
 * Unlink erm_support_instruments_unlink_1_views_view().
 */
function erm_support_instruments_unlink_1_views_view() {
$view = new view();
$view->name = 'erm_support_instruments';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'ERM Support Instruments';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Restructuring support instruments';
$handler->display->display_options['css_class'] = 'form-support-instruments';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  7 => '7',
  18 => '18',
  9 => '9',
  17 => '17',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
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
  'field_native_name_erm_si_value' => array(
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
  'field_ef_english_name_value' => array(
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
  'field_country_erm_si_tid' => array(
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
  'field_type_erm_si_tid' => array(
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
  'published' => array(
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
  'field_updated_date_erm_si_value' => array(
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
$handler->display->display_options['style_plugin'] = 'mediatable';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'field_english_name_erm_si' => 'field_english_name_erm_si',
  'path' => 'path',
  'field_native_name_erm_si' => 'field_native_name_erm_si',
  'field_country_erm_si' => 'field_country_erm_si',
  'field_type_erm_si' => 'field_type_erm_si',
  'last_editor' => 'last_editor',
  'field_ef_assign_to_user' => 'field_ef_assign_to_user',
  'field_updated_date_erm_si' => 'field_updated_date_erm_si',
  'state' => 'state',
  'published' => 'published',
  'edit_node_1' => 'edit_node_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_english_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'path' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_native_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_country_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_type_erm_si' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'last_editor' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_ef_assign_to_user' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_updated_date_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
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
  'published' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'edit_node_1' => array(
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
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = 'Download data export';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
/* Relationship: Content: Country (field_country_erm_si) */
$handler->display->display_options['relationships']['field_country_erm_si_tid']['id'] = 'field_country_erm_si_tid';
$handler->display->display_options['relationships']['field_country_erm_si_tid']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['relationships']['field_country_erm_si_tid']['field'] = 'field_country_erm_si_tid';
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
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'ID';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content: English name */
$handler->display->display_options['fields']['field_english_name_erm_si']['id'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['field'] = 'field_english_name_erm_si';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'erm_support_instrument' => 'erm_support_instrument',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
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
  17 => 0,
  18 => 0,
);
/* Filter criterion: Content: Native name (field_native_name_erm_si) */
$handler->display->display_options['filters']['field_native_name_erm_si_value']['id'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['field'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator_id'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['label'] = 'Native name (field_native_name_erm_si)';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['identifier'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: English name (field_ef_english_name) */
$handler->display->display_options['filters']['field_ef_english_name_value']['id'] = 'field_ef_english_name_value';
$handler->display->display_options['filters']['field_ef_english_name_value']['table'] = 'field_data_field_ef_english_name';
$handler->display->display_options['filters']['field_ef_english_name_value']['field'] = 'field_ef_english_name_value';
$handler->display->display_options['filters']['field_ef_english_name_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_english_name_value']['expose']['operator_id'] = 'field_ef_english_name_value_op';
$handler->display->display_options['filters']['field_ef_english_name_value']['expose']['label'] = 'English name (field_ef_english_name)';
$handler->display->display_options['filters']['field_ef_english_name_value']['expose']['operator'] = 'field_ef_english_name_value_op';
$handler->display->display_options['filters']['field_ef_english_name_value']['expose']['identifier'] = 'field_ef_english_name_value';
$handler->display->display_options['filters']['field_ef_english_name_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Updated date (field_updated_date_erm_si) */
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['id'] = 'field_updated_date_erm_si_value';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['table'] = 'field_data_field_updated_date_erm_si';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['field'] = 'field_updated_date_erm_si_value';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['operator'] = 'between';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['operator_id'] = 'field_updated_date_erm_si_value_op';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['label'] = 'Updated date (field_updated_date_erm_si)';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['operator'] = 'field_updated_date_erm_si_value_op';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['identifier'] = 'field_updated_date_erm_si_value';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['form_type'] = 'date_text';
/* Filter criterion: Content: Country (field_country_erm_si) */
$handler->display->display_options['filters']['field_country_erm_si_tid']['id'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['filters']['field_country_erm_si_tid']['field'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['operator_id'] = 'field_country_erm_si_tid_op';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['label'] = 'Country (field_country_erm_si)';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['operator'] = 'field_country_erm_si_tid_op';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['identifier'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['vocabulary'] = 'country';

/* Display: ERM Front-end */
$handler = $view->new_display('page', 'ERM Front-end', 'support_instrument_frontend');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Restructuring support instruments';
$handler->display->display_options['display_description'] = 'ERM qualitative databases front end';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
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
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'mediatable';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'field_english_name_erm_si' => 'field_english_name_erm_si',
  'field_native_name_erm_si' => 'field_native_name_erm_si',
  'field_country_erm_si' => 'field_country_erm_si',
  'weight' => 'weight',
  'field_phase_erm_si' => 'field_phase_erm_si',
  'field_type_erm_si' => 'field_type_erm_si',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_english_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_native_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_country_erm_si' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'weight' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_phase_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_type_erm_si' => array(
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
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<p>Eurofound’s ERM database on support instruments for restructuring provides information on about 400 measures in the Member States of the European Union and Norway. National governments, employers’ organisations and trade unions are among the bodies providing support for companies that need to restructure and the affected employees.

<p>The support instruments are described in terms of their characteristics, involved actors, funding sources, strengths, weaknesses and outcomes. The aim is to inform governments, social partners and others involved about what kinds of support can be offered.
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
$handler->display->display_options['header']['area_1']['content'] = '<div class="filter-description-more">
  <span>Help</span>
</div>
<div class="filter-description">
  <h4>Make your selection by using the filters:</h4>
    <ul>

  <li><span>Country</span>EU 28 and Norway</li>
  <li><span>Phase</span>Either anticipation or management
    <ul>
      <li><span>Anticipation</span>refers to activities that help to prepare workers or companies for change.</li>
      <li><span>Management</span>covers activities required to handle a current restructuring event while minimising social costs. It refers to the steps involved in implementing an organisational change process.</li>
    </ul>
  </li>
  <li><span>Type</span>the range includes training, advice, help with access to finance, matching activities and other supports for companies and workers affected by restructuring </li>
  <li><span>Funding</span>by national, local or regional governments; the European Union; social partners jointly or individually; companies in general or the specific employer undergoing restructuring
</li>
  <li><span>Involved actors</span>including national, regional or local government; social partners and public employment services.</li>

  </ul>
</div>';
$handler->display->display_options['header']['area_1']['format'] = 'filtered_html';
/* Header: Select any filter message */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Select any filter message';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php if( empty($results) ): ?>
  <div class="view-empty">
    <p><?php print t(\'Select any filter and click on Apply to see results\'); ?></p>
  </div>
<?php endif; ?>';
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
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
  'action::ef_draft_to_submitted_to_qr' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_published_to_draft' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_submitted_to_qr_to_published' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_submitted_to_qr_to_under_revision_request' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_under_revision_request_to_submitted_to_qr' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_editor_to_ee' => array(
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
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_related_contributions_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_action' => array(
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
  'action::ef_assign_to_user_by_country' => array(
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
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Display selected instruments',
    'settings' => array(
      'url' => 'restructuring-support-instruments',
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
  'action::ef_contract_update_country_group_and_contract' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::empty_network' => array(
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
  'action::ef_contract_upload_contract' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_contract_upload_NA_contract' => array(
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
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['max_length'] = '6';
$handler->display->display_options['fields']['nid']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content: English name */
$handler->display->display_options['fields']['field_english_name_erm_si']['id'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['field'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Native name */
$handler->display->display_options['fields']['field_native_name_erm_si']['id'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['field'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['path'] = '/node/[nid]';
$handler->display->display_options['fields']['field_native_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country (selective) */
$handler->display->display_options['fields']['field_country_erm_si']['id'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['field'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['ui_name'] = 'Country (selective)';
$handler->display->display_options['fields']['field_country_erm_si']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: Weight */
$handler->display->display_options['fields']['weight']['id'] = 'weight';
$handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['weight']['field'] = 'weight';
$handler->display->display_options['fields']['weight']['relationship'] = 'field_country_erm_si_tid';
$handler->display->display_options['fields']['weight']['label'] = 'Country';
$handler->display->display_options['fields']['weight']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['weight']['alter']['text'] = '[field_country_erm_si]';
/* Field: Phase (field_phase_erm_si) (selective) */
$handler->display->display_options['fields']['field_phase_erm_si']['id'] = 'field_phase_erm_si';
$handler->display->display_options['fields']['field_phase_erm_si']['table'] = 'field_data_field_phase_erm_si';
$handler->display->display_options['fields']['field_phase_erm_si']['field'] = 'field_phase_erm_si';
$handler->display->display_options['fields']['field_phase_erm_si']['ui_name'] = 'Phase (field_phase_erm_si) (selective)';
$handler->display->display_options['fields']['field_phase_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Type (selective) */
$handler->display->display_options['fields']['field_type_erm_si']['id'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['field'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['ui_name'] = 'Type (selective)';
$handler->display->display_options['fields']['field_type_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_type_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_type_erm_si']['delta_offset'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
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
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'erm_support_instrument' => 'erm_support_instrument',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: English name (field_english_name_erm_si) */
$handler->display->display_options['filters']['field_english_name_erm_si_value']['id'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['field'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['group'] = 1;
$handler->display->display_options['filters']['field_english_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator_id'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['label'] = 'English name';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['identifier'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Native name (field_native_name_erm_si) */
$handler->display->display_options['filters']['field_native_name_erm_si_value']['id'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['field'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['group'] = 1;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator_id'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['label'] = 'Native name';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['identifier'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Country (selective) */
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['id'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['field'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['ui_name'] = 'Country (selective)';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['identifier'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Type (selective) */
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['id'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['field'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['ui_name'] = 'Type (selective)';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['identifier'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Funding (field_funding_erm_si) */
$handler->display->display_options['filters']['field_funding_erm_si_tid']['id'] = 'field_funding_erm_si_tid';
$handler->display->display_options['filters']['field_funding_erm_si_tid']['table'] = 'field_data_field_funding_erm_si';
$handler->display->display_options['filters']['field_funding_erm_si_tid']['field'] = 'field_funding_erm_si_tid';
$handler->display->display_options['filters']['field_funding_erm_si_tid']['group'] = 1;
$handler->display->display_options['filters']['field_funding_erm_si_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_funding_erm_si_tid']['expose']['operator_id'] = 'field_funding_erm_si_tid_op';
$handler->display->display_options['filters']['field_funding_erm_si_tid']['expose']['label'] = 'Funding';
$handler->display->display_options['filters']['field_funding_erm_si_tid']['expose']['operator'] = 'field_funding_erm_si_tid_op';
$handler->display->display_options['filters']['field_funding_erm_si_tid']['expose']['identifier'] = 'field_funding_erm_si_tid';
$handler->display->display_options['filters']['field_funding_erm_si_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_funding_erm_si_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_funding_erm_si_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_funding_erm_si_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_funding_erm_si_tid']['vocabulary'] = 'erm_support_instrument_fundings';
/* Filter criterion: Content: Involved Actors (field_ef_involved_actors_tax) */
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['id'] = 'field_ef_involved_actors_tax_tid';
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['table'] = 'field_data_field_ef_involved_actors_tax';
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['field'] = 'field_ef_involved_actors_tax_tid';
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['value'] = array(
  21311 => '21311',
  21312 => '21312',
  21313 => '21313',
  21314 => '21314',
  21315 => '21315',
);
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['expose']['operator_id'] = 'field_ef_involved_actors_tax_tid_op';
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['expose']['label'] = 'Involved actors  ';
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['expose']['operator'] = 'field_ef_involved_actors_tax_tid_op';
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['expose']['identifier'] = 'field_ef_involved_actors_tax_tid';
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_involved_actors_tax_tid']['vocabulary'] = 'involved_actors';
$handler->display->display_options['path'] = 'observatories/emcc/erm/support-instrument';
$handler->display->display_options['menu']['title'] = 'Regulations';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: ERM Back-end */
$handler = $view->new_display('page', 'ERM Back-end', 'support_instrument_admin_view');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
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
  'field_native_name_erm_si_value' => array(
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
  'field_english_name_erm_si_value' => array(
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
  'field_country_erm_si_tid_selective' => array(
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
  'field_type_erm_si_tid_selective' => array(
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
  'php_1' => 'php_1',
  'field_english_name_erm_si' => 'field_english_name_erm_si',
  'field_native_name_erm_si' => 'field_native_name_erm_si',
  'field_country_erm_si' => 'field_country_erm_si',
  'weight' => 'weight',
  'field_type_erm_si' => 'field_type_erm_si',
  'last_editor' => 'last_editor',
  'php' => 'php',
  'field_ef_assign_to_user' => 'field_ef_assign_to_user',
  'changed' => 'changed',
  'state' => 'state',
  'status' => 'status',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'php_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_english_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_native_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_country_erm_si' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'weight' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_type_erm_si' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'last_editor' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_ef_assign_to_user' => array(
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
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found';
/* Header: Add new one */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Add new one';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php
  global $base_url;
  global $user;
?>
<?php if (in_array(\'Author\', $user->roles) || in_array(\'Author +\', $user->roles)): ?>
  <div id="add-new-content-wrap">
    <span class="add-new-content">
      <a href="<?php print $base_url; ?>/my-dashboard">Add new content</a>
    </span>
  </div>
<?php else: ?>
  <div id="add-new-content-wrap">
    <span class="add-new-content">
      <a href="<?php print $base_url; ?>/node/add/erm-support-instrument">Add new content</a>
    </span>
  </div>
<?php endif; ?>';
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Eurofound’s ERM database on support instruments for restructuring provides information on about 400 measures in the Member States of the European Union and Norway. National governments, employers’ organisations and trade unions are among the bodies providing support for companies that need to restructure and the affected employees.

The support instruments are described in terms of their characteristics, involved actors, funding sources, strengths, weaknesses and outcomes. The aim is to inform governments, social partners and others involved about what kinds of support can be offered.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Global: Text area */
$handler->display->display_options['header']['area_1']['id'] = 'area_1';
$handler->display->display_options['header']['area_1']['table'] = 'views';
$handler->display->display_options['header']['area_1']['field'] = 'area';
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
/* Header: Bulk Submit link */
$handler->display->display_options['header']['php_1']['id'] = 'php_1';
$handler->display->display_options['header']['php_1']['table'] = 'views';
$handler->display->display_options['header']['php_1']['field'] = 'php';
$handler->display->display_options['header']['php_1']['ui_name'] = 'Bulk Submit link';
$handler->display->display_options['header']['php_1']['empty'] = TRUE;
$handler->display->display_options['header']['php_1']['php_output'] = '<?php
  global $base_url;
  global $user;

  $url = $base_url . \'/observatories/emcc/erm/support-instrument/admin/bulk-submit\';
        $url2 = $base_url . \'/observatories/emcc/erm/support-instrument/admin/assignment-by-country\';
  $url = $url . get_support_instrument_user_variable_url_parameters();

  if ( in_array(\'Quality Manager\', $user->roles) || in_array(\'Quality Manager +\', $user->roles) ) {

    $url = str_replace(\'&state[]=draft\', \'\', $url);
    $url = str_replace(\'&state[]=requested\', \'\', $url);
    $url = str_replace(\'&state[]=rejected\', \'\', $url);
    $url = str_replace(\'&state[]=published\', \'\', $url);
    $url = str_replace(\'&state[]=unpublished\', \'\', $url);
    $url = str_replace(\'&state[]=under_revision_request\', \'\', $url);

  } else {

    $url = str_replace(\'&state[]=submitted_qr\', \'\', $url);
    $url = str_replace(\'&state[]=requested\', \'\', $url);
    $url = str_replace(\'&state[]=rejected\', \'\', $url);
    $url = str_replace(\'&state[]=published\', \'\', $url);
    $url = str_replace(\'&state[]=unpublished\', \'\', $url);

  }

?>

<a href="<?php print $url; ?>">
  <i class="fa fa-reply-all fa-6 fa-flip-horizontal"></i> <?php print t(\'Bulk Submit\'); ?>
</a>
<a href="<?php print $url2; ?>">
  <i class="fa fa-reply-all fa-5 fa-flip-horizontal"></i> <?php print t(\'Assignment by Country\'); ?>
</a>';
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'ID';
$handler->display->display_options['fields']['nid']['alter']['max_length'] = '6';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Assign to author */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Assign to author';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$node = node_load($row->field_english_name_erm_si);

$mid = $node->field_ef_assign_to_author[\'und\'][0][\'target_id\'];

$sql = "SELECT DISTINCT u.name
            FROM users u
            INNER JOIN group_membership g ON u.uid = g.uid
            WHERE g.mid = \'$mid\'";

$result = db_query($sql)->fetchAll();

$name = $result[0]->name;

$updated_name = str_replace("_"," ",$name);

print($updated_name);
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Content: English name */
$handler->display->display_options['fields']['field_english_name_erm_si']['id'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['field'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Native name */
$handler->display->display_options['fields']['field_native_name_erm_si']['id'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['field'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['path'] = '/node/[nid]';
$handler->display->display_options['fields']['field_native_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country (selective) */
$handler->display->display_options['fields']['field_country_erm_si']['id'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['field'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['ui_name'] = 'Country (selective)';
$handler->display->display_options['fields']['field_country_erm_si']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: Weight */
$handler->display->display_options['fields']['weight']['id'] = 'weight';
$handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['weight']['field'] = 'weight';
$handler->display->display_options['fields']['weight']['relationship'] = 'field_country_erm_si_tid';
$handler->display->display_options['fields']['weight']['label'] = 'Country';
$handler->display->display_options['fields']['weight']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['weight']['alter']['text'] = '[field_country_erm_si]';
/* Field: Type (selective) */
$handler->display->display_options['fields']['field_type_erm_si']['id'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['field'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['ui_name'] = 'Type (selective)';
$handler->display->display_options['fields']['field_type_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_type_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_type_erm_si']['delta_offset'] = '0';
/* Field: Content: Last edited by */
$handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['table'] = 'node';
$handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['label'] = 'Assign to User';
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
  $node = node_load($row->nid);
  $node = node_load($node->nid, $node->workbench_moderation[\'current\']->vid);
  $assigned_user = user_load($node->field_ef_assign_to_user[\'und\'][0][\'target_id\']);
  print $assigned_user->name;
?>';
$handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
/* Field: Assign to Author */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Assign to Author';
$handler->display->display_options['fields']['php']['label'] = 'Assign to Author';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php

  // Loading node
  $nid = $data->nid;
  $node = node_load($nid);

        if (isset($node->workbench_moderation[\'current\']->vid) && $node->workbench_moderation[\'current\']->vid != $node->vid) {
          $node = node_load($nid, $node->workbench_moderation[\'current\']->vid);
        }

  // Getting Group membership ID
  $mid = $node->field_ef_assign_to_author[\'und\'][0][\'target_id\'];

  // Creating db query
  $query = db_select(\'users\', \'u\');
  $query->fields(\'u\', array(\'uid\'));
  $query->join(\'group_membership\', \'gm\', \'gm.uid = u.uid\');
  $query->condition(\'gm.mid\', $mid, \'=\');

  $result = $query->execute()->fetchAll();

  // Loading user (assigned Author)
  $author_uid = $result[0]->uid;
  $user = user_load($author_uid);

  // Painting User\'s name
  print $user->name;

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
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_minimal';
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'erm_support_instrument' => 'erm_support_instrument',
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
/* Filter criterion: Content: Native name (field_native_name_erm_si) */
$handler->display->display_options['filters']['field_native_name_erm_si_value']['id'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['field'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['group'] = 1;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator_id'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['label'] = 'Native name';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['identifier'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: English name (field_english_name_erm_si) */
$handler->display->display_options['filters']['field_english_name_erm_si_value']['id'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['field'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['group'] = 1;
$handler->display->display_options['filters']['field_english_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator_id'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['label'] = 'English name';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['identifier'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Country (selective) */
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['id'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['field'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['ui_name'] = 'Country (selective)';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['identifier'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Type (selective) */
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['id'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['field'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['ui_name'] = 'Type (selective)';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['identifier'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
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
$handler->display->display_options['path'] = 'observatories/emcc/erm/support-instrument/admin';

/* Display: Bulk Submit - Author/Author+ */
$handler = $view->new_display('page', 'Bulk Submit - Author/Author+', 'support_instrument_bulk_authors');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'php';
$handler->display->display_options['access']['php_access'] = 'if((in_array(\'Author\', $account->roles)) || (in_array(\'Author +\', $account->roles)) || (in_array(\'administrator\', $account->roles)))
  return TRUE;';
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
  'field_native_name_erm_si_value' => array(
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
  'field_english_name_erm_si_value' => array(
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
  'field_country_erm_si_tid_selective' => array(
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
  'field_type_erm_si_tid_selective' => array(
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
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'mediatable';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'nid' => 'nid',
  'php_1' => 'php_1',
  'field_english_name_erm_si' => 'field_english_name_erm_si',
  'field_native_name_erm_si' => 'field_native_name_erm_si',
  'field_country_erm_si' => 'field_country_erm_si',
  'weight' => 'weight',
  'field_type_erm_si' => 'field_type_erm_si',
  'last_editor' => 'last_editor',
  'php' => 'php',
  'field_ef_assign_to_user' => 'field_ef_assign_to_user',
  'changed' => 'changed',
  'state' => 'state',
  'status' => 'status',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'php_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_english_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_native_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_country_erm_si' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'weight' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_type_erm_si' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'last_editor' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_ef_assign_to_user' => array(
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
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found';
/* Header: Add new content */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Add new content';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php
  global $base_url;
  global $user;
?>
<?php if (in_array(\'Author\', $user->roles) || in_array(\'Author +\', $user->roles)): ?>
  <div id="add-new-content-wrap">
    <span class="add-new-content">
      <a href="<?php print $base_url; ?>/my-dashboard">Add new content</a>
    </span>
  </div>
<?php else: ?>
  <div id="add-new-content-wrap">
    <span class="add-new-content">
      <a href="<?php print $base_url; ?>/node/add/erm-support-instrument">Add new content</a>
    </span>
  </div>
<?php endif; ?>
';
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Eurofound’s ERM database on support instruments for restructuring provides information on about 400 measures in the Member States of the European Union and Norway. National governments, employers’ organisations and trade unions are among the bodies providing support for companies that need to restructure and the affected employees.

The support instruments are described in terms of their characteristics, involved actors, funding sources, strengths, weaknesses and outcomes. The aim is to inform governments, social partners and others involved about what kinds of support can be offered.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Global: Text area */
$handler->display->display_options['header']['area_1']['id'] = 'area_1';
$handler->display->display_options['header']['area_1']['table'] = 'views';
$handler->display->display_options['header']['area_1']['field'] = 'area';
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
/* Header: Go back button */
$handler->display->display_options['header']['php_1']['id'] = 'php_1';
$handler->display->display_options['header']['php_1']['table'] = 'views';
$handler->display->display_options['header']['php_1']['field'] = 'php';
$handler->display->display_options['header']['php_1']['ui_name'] = 'Go back button';
$handler->display->display_options['header']['php_1']['label'] = 'Go back';
$handler->display->display_options['header']['php_1']['empty'] = TRUE;
$handler->display->display_options['header']['php_1']['php_output'] = '<?php
  global $base_url;
  global $user;

  $url = $base_url . \'/observatories/emcc/erm/support-instrument/admin/\';
  $url = $url . get_support_instrument_user_variable_url_parameters();

?>

<a href="<?php print $url; ?>">
  <i class="fa fa-undo"></i> <?php print t(\'Go back\'); ?>
</a>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
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
  'action::ef_draft_to_submitted_to_qr' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_published_to_draft' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_submitted_to_qr_to_published' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_submitted_to_qr_to_under_revision_request' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_under_revision_request_to_submitted_to_qr' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_editor_to_ee' => array(
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
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_related_contributions_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_action' => array(
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
  'action::ef_contract_update_country_group_and_contract' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::empty_network' => array(
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
  'action::ef_contract_upload_contract' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_contract_upload_NA_contract' => array(
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
$handler->display->display_options['fields']['nid']['label'] = 'ID';
$handler->display->display_options['fields']['nid']['alter']['max_length'] = '6';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Assign to author */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Assign to author';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$node = node_load($row->field_english_name_erm_si);

$mid = $node->field_ef_assign_to_author[\'und\'][0][\'target_id\'];

$sql = "SELECT DISTINCT u.name
            FROM users u
            INNER JOIN group_membership g ON u.uid = g.uid
            WHERE g.mid = \'$mid\'";

$result = db_query($sql)->fetchAll();

$name = $result[0]->name;

$updated_name = str_replace("_"," ",$name);

print($updated_name);
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Content: English name */
$handler->display->display_options['fields']['field_english_name_erm_si']['id'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['field'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Native name */
$handler->display->display_options['fields']['field_native_name_erm_si']['id'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['field'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['path'] = '/node/[nid]';
$handler->display->display_options['fields']['field_native_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country (selective) */
$handler->display->display_options['fields']['field_country_erm_si']['id'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['field'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['ui_name'] = 'Country (selective)';
$handler->display->display_options['fields']['field_country_erm_si']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: Weight */
$handler->display->display_options['fields']['weight']['id'] = 'weight';
$handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['weight']['field'] = 'weight';
$handler->display->display_options['fields']['weight']['relationship'] = 'field_country_erm_si_tid';
$handler->display->display_options['fields']['weight']['label'] = 'Country';
$handler->display->display_options['fields']['weight']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['weight']['alter']['text'] = '[field_country_erm_si]';
/* Field: Type (selective) */
$handler->display->display_options['fields']['field_type_erm_si']['id'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['field'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['ui_name'] = 'Type (selective)';
$handler->display->display_options['fields']['field_type_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_type_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_type_erm_si']['delta_offset'] = '0';
/* Field: Content: Last edited by */
$handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['table'] = 'node';
$handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['label'] = 'Assign to User';
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
  $node = node_load($row->nid);
  $node = node_load($node->nid, $node->workbench_moderation[\'current\']->vid);
  $assigned_user = user_load($node->field_ef_assign_to_user[\'und\'][0][\'target_id\']);
  print $assigned_user->name;
?>';
$handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
/* Field: Assign to Author */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Assign to Author';
$handler->display->display_options['fields']['php']['label'] = 'Assign to Author';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php

  // Loading node
  $nid = $data->nid;
  $node = node_load($nid);

        if (isset($node->workbench_moderation[\'current\']->vid) && $node->workbench_moderation[\'current\']->vid != $node->vid) {
          $node = node_load($nid, $node->workbench_moderation[\'current\']->vid);
        }
  // Getting Group membership ID
  $mid = $node->field_ef_assign_to_author[\'und\'][0][\'target_id\'];

  // Creating db query
  $query = db_select(\'users\', \'u\');
  $query->fields(\'u\', array(\'uid\'));
  $query->join(\'group_membership\', \'gm\', \'gm.uid = u.uid\');
  $query->condition(\'gm.mid\', $mid, \'=\');

  $result = $query->execute()->fetchAll();

  // Loading user (assigned Author)
  $author_uid = $result[0]->uid;
  $user = user_load($author_uid);

  // Painting User\'s name
  print $user->name;

?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_minimal';
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'erm_support_instrument' => 'erm_support_instrument',
);
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
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
/* Filter criterion: Content: Native name (field_native_name_erm_si) */
$handler->display->display_options['filters']['field_native_name_erm_si_value']['id'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['field'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator_id'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['label'] = 'Native name';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['identifier'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: English name (field_english_name_erm_si) */
$handler->display->display_options['filters']['field_english_name_erm_si_value']['id'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['field'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator_id'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['label'] = 'English name';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['identifier'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Country (selective) */
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['id'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['field'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['ui_name'] = 'Country (selective)';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['identifier'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Type (selective) */
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['id'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['field'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['ui_name'] = 'Type (selective)';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['identifier'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  'draft' => 'draft',
  'under_revision_request' => 'under_revision_request',
);
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
/* Filter criterion: Content: Updated date */
$handler->display->display_options['filters']['changed']['id'] = 'changed';
$handler->display->display_options['filters']['changed']['table'] = 'node';
$handler->display->display_options['filters']['changed']['field'] = 'changed';
$handler->display->display_options['filters']['changed']['operator'] = 'between';
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
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state_1']['id'] = 'state_1';
$handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state_1']['field'] = 'state';
$handler->display->display_options['filters']['state_1']['value'] = array(
  'draft' => 'draft',
  'under_revision_request' => 'under_revision_request',
);
$handler->display->display_options['path'] = 'observatories/emcc/erm/support-instrument/admin/bulk-submit';

/* Display: Bulk Submit - QM/QM+ */
$handler = $view->new_display('page', 'Bulk Submit - QM/QM+', 'support_instrument_bulk_qm');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'php';
$handler->display->display_options['access']['php_access'] = 'if((in_array(\'Quality Manager\', $account->roles)) || (in_array(\'Quality Manager +\', $account->roles)))
  return TRUE;';
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
  'field_native_name_erm_si_value' => array(
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
  'field_english_name_erm_si_value' => array(
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
  'field_country_erm_si_tid_selective' => array(
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
  'field_type_erm_si_tid_selective' => array(
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
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'mediatable';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'nid' => 'nid',
  'php_1' => 'php_1',
  'field_english_name_erm_si' => 'field_english_name_erm_si',
  'field_native_name_erm_si' => 'field_native_name_erm_si',
  'field_country_erm_si' => 'field_country_erm_si',
  'weight' => 'weight',
  'field_type_erm_si' => 'field_type_erm_si',
  'last_editor' => 'last_editor',
  'php' => 'php',
  'field_ef_assign_to_user' => 'field_ef_assign_to_user',
  'changed' => 'changed',
  'state' => 'state',
  'status' => 'status',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'php_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_english_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_native_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_country_erm_si' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'weight' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_type_erm_si' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'last_editor' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_ef_assign_to_user' => array(
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
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found';
/* Header: Add new content */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Add new content';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php
  global $base_url;
  global $user;
?>
<?php if (in_array(\'Author\', $user->roles) || in_array(\'Author +\', $user->roles)): ?>
  <div id="add-new-content-wrap">
    <span class="add-new-content">
      <a href="<?php print $base_url; ?>/my-dashboard">Add new content</a>
    </span>
  </div>
<?php else: ?>
  <div id="add-new-content-wrap">
    <span class="add-new-content">
      <a href="<?php print $base_url; ?>/node/add/erm-support-instrument">Add new content</a>
    </span>
  </div>
<?php endif; ?>
';
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Eurofound’s ERM database on support instruments for restructuring provides information on about 400 measures in the Member States of the European Union and Norway. National governments, employers’ organisations and trade unions are among the bodies providing support for companies that need to restructure and the affected employees.

The support instruments are described in terms of their characteristics, involved actors, funding sources, strengths, weaknesses and outcomes. The aim is to inform governments, social partners and others involved about what kinds of support can be offered.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Global: Text area */
$handler->display->display_options['header']['area_1']['id'] = 'area_1';
$handler->display->display_options['header']['area_1']['table'] = 'views';
$handler->display->display_options['header']['area_1']['field'] = 'area';
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
/* Header: Go back button */
$handler->display->display_options['header']['php_1']['id'] = 'php_1';
$handler->display->display_options['header']['php_1']['table'] = 'views';
$handler->display->display_options['header']['php_1']['field'] = 'php';
$handler->display->display_options['header']['php_1']['ui_name'] = 'Go back button';
$handler->display->display_options['header']['php_1']['label'] = 'Go back';
$handler->display->display_options['header']['php_1']['empty'] = TRUE;
$handler->display->display_options['header']['php_1']['php_output'] = '<?php
  global $base_url;
  global $user;

  $url = $base_url . \'/observatories/emcc/erm/support-instrument/admin/\';
  $url = $url . get_support_instrument_user_variable_url_parameters();

?>

<a href="<?php print $url; ?>">
  <i class="fa fa-undo"></i> <?php print t(\'Go back\'); ?>
</a>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
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
  'action::ef_draft_to_submitted_to_qr' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_published_to_draft' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_submitted_to_qr_to_published' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_submitted_to_qr_to_under_revision_request' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_under_revision_request_to_submitted_to_qr' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_editor_to_ee' => array(
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
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_related_contributions_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_action' => array(
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
  'action::ef_contract_update_country_group_and_contract' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::empty_network' => array(
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
  'action::ef_contract_upload_contract' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_contract_upload_NA_contract' => array(
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
$handler->display->display_options['fields']['nid']['label'] = 'ID';
$handler->display->display_options['fields']['nid']['alter']['max_length'] = '6';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Assign to author */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Assign to author';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$node = node_load($row->field_english_name_erm_si);

$mid = $node->field_ef_assign_to_author[\'und\'][0][\'target_id\'];

$sql = "SELECT DISTINCT u.name
            FROM users u
            INNER JOIN group_membership g ON u.uid = g.uid
            WHERE g.mid = \'$mid\'";

$result = db_query($sql)->fetchAll();

$name = $result[0]->name;

$updated_name = str_replace("_"," ",$name);

print($updated_name);
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Content: English name */
$handler->display->display_options['fields']['field_english_name_erm_si']['id'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['field'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Native name */
$handler->display->display_options['fields']['field_native_name_erm_si']['id'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['field'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['path'] = '/node/[nid]';
$handler->display->display_options['fields']['field_native_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country (selective) */
$handler->display->display_options['fields']['field_country_erm_si']['id'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['field'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['ui_name'] = 'Country (selective)';
$handler->display->display_options['fields']['field_country_erm_si']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: Weight */
$handler->display->display_options['fields']['weight']['id'] = 'weight';
$handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['weight']['field'] = 'weight';
$handler->display->display_options['fields']['weight']['relationship'] = 'field_country_erm_si_tid';
$handler->display->display_options['fields']['weight']['label'] = 'Country';
$handler->display->display_options['fields']['weight']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['weight']['alter']['text'] = '[field_country_erm_si]';
/* Field: Type (selective) */
$handler->display->display_options['fields']['field_type_erm_si']['id'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['field'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['ui_name'] = 'Type (selective)';
$handler->display->display_options['fields']['field_type_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_type_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_type_erm_si']['delta_offset'] = '0';
/* Field: Content: Last edited by */
$handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['table'] = 'node';
$handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['label'] = 'Assign To User';
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
  $node = node_load($row->nid);
  $node = node_load($node->nid, $node->workbench_moderation[\'current\']->vid);
  $assigned_user = user_load($node->field_ef_assign_to_user[\'und\'][0][\'target_id\']);
  print $assigned_user->name;
?>';
$handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
/* Field: Assign to Author */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Assign to Author';
$handler->display->display_options['fields']['php']['label'] = 'Assign to Author';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php

  // Loading node
  $nid = $data->nid;
  $node = node_load($nid);

        if (isset($node->workbench_moderation[\'current\']->vid) && $node->workbench_moderation[\'current\']->vid != $node->vid) {
          $node = node_load($nid, $node->workbench_moderation[\'current\']->vid);
        }
  // Getting Group membership ID
  $mid = $node->field_ef_assign_to_author[\'und\'][0][\'target_id\'];

  // Creating db query
  $query = db_select(\'users\', \'u\');
  $query->fields(\'u\', array(\'uid\'));
  $query->join(\'group_membership\', \'gm\', \'gm.uid = u.uid\');
  $query->condition(\'gm.mid\', $mid, \'=\');

  $result = $query->execute()->fetchAll();

  // Loading user (assigned Author)
  $author_uid = $result[0]->uid;
  $user = user_load($author_uid);

  // Painting User\'s name
  print $user->name;

?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_minimal';
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'erm_support_instrument' => 'erm_support_instrument',
);
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
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
/* Filter criterion: Content: Native name (field_native_name_erm_si) */
$handler->display->display_options['filters']['field_native_name_erm_si_value']['id'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['field'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator_id'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['label'] = 'Native name';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['identifier'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: English name (field_english_name_erm_si) */
$handler->display->display_options['filters']['field_english_name_erm_si_value']['id'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['field'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator_id'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['label'] = 'English name';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['identifier'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Country (selective) */
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['id'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['field'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['ui_name'] = 'Country (selective)';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['identifier'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Type (selective) */
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['id'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['field'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['ui_name'] = 'Type (selective)';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['identifier'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  'submitted_qr' => 'submitted_qr',
  'published' => 'published',
);
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
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
/* Filter criterion: Content: Updated date */
$handler->display->display_options['filters']['changed']['id'] = 'changed';
$handler->display->display_options['filters']['changed']['table'] = 'node';
$handler->display->display_options['filters']['changed']['field'] = 'changed';
$handler->display->display_options['filters']['changed']['operator'] = 'between';
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
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state_1']['id'] = 'state_1';
$handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state_1']['field'] = 'state';
$handler->display->display_options['filters']['state_1']['value'] = array(
  'submitted_qr' => 'submitted_qr',
  'published' => 'published',
);
$handler->display->display_options['path'] = 'observatories/emcc/erm/support-instrument/admin/bulk-submit';

/* Display: Bulk Submit - Assignment by Country */
$handler = $view->new_display('page', 'Bulk Submit - Assignment by Country', 'assign_by_country');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  9 => '9',
  18 => '18',
);
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
  'field_native_name_erm_si_value' => array(
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
  'field_english_name_erm_si_value' => array(
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
  'field_country_erm_si_tid_selective' => array(
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
  'field_type_erm_si_tid_selective' => array(
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
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'mediatable';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'nid' => 'nid',
  'php_1' => 'php_1',
  'field_english_name_erm_si' => 'field_english_name_erm_si',
  'field_native_name_erm_si' => 'field_native_name_erm_si',
  'field_country_erm_si' => 'field_country_erm_si',
  'weight' => 'weight',
  'field_type_erm_si' => 'field_type_erm_si',
  'last_editor' => 'last_editor',
  'php' => 'php',
  'field_ef_assign_to_user' => 'field_ef_assign_to_user',
  'changed' => 'changed',
  'state' => 'state',
  'status' => 'status',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'php_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_english_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_native_name_erm_si' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_country_erm_si' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'weight' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_type_erm_si' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'last_editor' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
  'field_ef_assign_to_user' => array(
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
    'empty_column' => 0,
    'responsive' => 'persist',
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@total items found';
/* Header: Add new content */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Add new content';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php
  global $base_url;
  global $user;
?>
<?php if (in_array(\'Author\', $user->roles) || in_array(\'Author +\', $user->roles)): ?>
  <div id="add-new-content-wrap">
    <span class="add-new-content">
      <a href="<?php print $base_url; ?>/my-dashboard">Add new content</a>
    </span>
  </div>
<?php else: ?>
  <div id="add-new-content-wrap">
    <span class="add-new-content">
      <a href="<?php print $base_url; ?>/node/add/erm-support-instrument">Add new content</a>
    </span>
  </div>
<?php endif; ?>
';
/* Header: Introduction */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Introduction';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = 'Eurofound’s ERM database on support instruments for restructuring provides information on about 400 measures in the Member States of the European Union and Norway. National governments, employers’ organisations and trade unions are among the bodies providing support for companies that need to restructure and the affected employees.

The support instruments are described in terms of their characteristics, involved actors, funding sources, strengths, weaknesses and outcomes. The aim is to inform governments, social partners and others involved about what kinds of support can be offered.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Global: Text area */
$handler->display->display_options['header']['area_1']['id'] = 'area_1';
$handler->display->display_options['header']['area_1']['table'] = 'views';
$handler->display->display_options['header']['area_1']['field'] = 'area';
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
/* Header: Go back button */
$handler->display->display_options['header']['php_1']['id'] = 'php_1';
$handler->display->display_options['header']['php_1']['table'] = 'views';
$handler->display->display_options['header']['php_1']['field'] = 'php';
$handler->display->display_options['header']['php_1']['ui_name'] = 'Go back button';
$handler->display->display_options['header']['php_1']['label'] = 'Go back';
$handler->display->display_options['header']['php_1']['empty'] = TRUE;
$handler->display->display_options['header']['php_1']['php_output'] = '<?php
  global $base_url;
  global $user;

  $url = $base_url . \'/observatories/emcc/erm/support-instrument/admin/\';
  $url = $url . get_support_instrument_user_variable_url_parameters();

?>

<a href="<?php print $url; ?>">
  <i class="fa fa-undo"></i> <?php print t(\'Go back\'); ?>
</a>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
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
  'action::ef_assign_to_user_by_country' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_draft_to_submitted_to_qr' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_published_to_draft' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_submitted_to_qr_to_published' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_submitted_to_qr_to_under_revision_request' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_under_revision_request_to_submitted_to_qr' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_editor_to_ee' => array(
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
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_related_contributions_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_d2w_action' => array(
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
  'action::views_bulk_operations_move_to_book_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
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
  'action::views_bulk_operations_remove_from_book_action' => array(
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
  'action::ef_contract_update_country_group_and_contract' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::empty_network' => array(
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
  'action::ef_contract_upload_contract' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::ef_contract_upload_NA_contract' => array(
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
$handler->display->display_options['fields']['nid']['label'] = 'ID';
$handler->display->display_options['fields']['nid']['alter']['max_length'] = '6';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content: English name */
$handler->display->display_options['fields']['field_english_name_erm_si']['id'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['field'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Native name */
$handler->display->display_options['fields']['field_native_name_erm_si']['id'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['field'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['path'] = '/node/[nid]';
$handler->display->display_options['fields']['field_native_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Country (selective) */
$handler->display->display_options['fields']['field_country_erm_si']['id'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['field'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['ui_name'] = 'Country (selective)';
$handler->display->display_options['fields']['field_country_erm_si']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_country_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: Weight */
$handler->display->display_options['fields']['weight']['id'] = 'weight';
$handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['weight']['field'] = 'weight';
$handler->display->display_options['fields']['weight']['relationship'] = 'field_country_erm_si_tid';
$handler->display->display_options['fields']['weight']['label'] = 'Country';
$handler->display->display_options['fields']['weight']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['weight']['alter']['text'] = '[field_country_erm_si]';
/* Field: Type (selective) */
$handler->display->display_options['fields']['field_type_erm_si']['id'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['field'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['ui_name'] = 'Type (selective)';
$handler->display->display_options['fields']['field_type_erm_si']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_type_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_type_erm_si']['delta_offset'] = '0';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = 'Assign to User';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
  $node = node_load($row->nid);
  $node = node_load($node->nid, $node->workbench_moderation[\'current\']->vid);
  $assigned_user = user_load($node->field_ef_assign_to_user[\'und\'][0][\'target_id\']);
  print $assigned_user->name;
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_minimal';
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'erm_support_instrument' => 'erm_support_instrument',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
$handler->display->display_options['filters']['current']['group'] = 1;
/* Filter criterion: Content: Country (field_country_erm_si) */
$handler->display->display_options['filters']['field_country_erm_si_tid']['id'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['filters']['field_country_erm_si_tid']['field'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['value'] = array(
  13816 => '13816',
  21295 => '21295',
  13875 => '13875',
  13877 => '13877',
  13856 => '13856',
  13876 => '13876',
  13837 => '13837',
  13831 => '13831',
  13862 => '13862',
  13879 => '13879',
  13825 => '13825',
  13824 => '13824',
  13855 => '13855',
  13857 => '13857',
  20742 => '20742',
  13863 => '13863',
  13869 => '13869',
  13874 => '13874',
  13872 => '13872',
  13839 => '13839',
  20748 => '20748',
  13814 => '13814',
  20747 => '20747',
  13847 => '13847',
  13834 => '13834',
  13841 => '13841',
  13830 => '13830',
  13826 => '13826',
  13868 => '13868',
  13823 => '13823',
  13820 => '13820',
  13861 => '13861',
  20746 => '20746',
  13873 => '13873',
);
$handler->display->display_options['filters']['field_country_erm_si_tid']['group'] = 1;
$handler->display->display_options['filters']['field_country_erm_si_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['operator_id'] = 'field_country_erm_si_tid_op';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['operator'] = 'field_country_erm_si_tid_op';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['identifier'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_country_erm_si_tid']['vocabulary'] = 'country';
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  'draft' => 'draft',
  'submitted_qr' => 'submitted_qr',
  'rejected' => 'rejected',
  'under_revision_request' => 'under_revision_request',
);
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'Moderation State';
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
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state_1']['id'] = 'state_1';
$handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state_1']['field'] = 'state';
$handler->display->display_options['filters']['state_1']['value'] = array(
  'draft' => 'draft',
  'submitted_qr' => 'submitted_qr',
  'rejected' => 'rejected',
  'under_revision_request' => 'under_revision_request',
);
$handler->display->display_options['path'] = 'observatories/emcc/erm/support-instrument/admin/assignment-by-country';

/* Display: CSV Data export */
$handler = $view->new_display('views_data_export', 'CSV Data export', 'views_data_export_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Restructuring support instruments data export';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_csv';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'ID';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content: English name */
$handler->display->display_options['fields']['field_english_name_erm_si']['id'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['field'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Native name */
$handler->display->display_options['fields']['field_native_name_erm_si']['id'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['field'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Country */
$handler->display->display_options['fields']['field_country_erm_si']['id'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['field'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Type */
$handler->display->display_options['fields']['field_type_erm_si']['id'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['field'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_type_erm_si']['delta_offset'] = '0';
/* Field: Content: Last edited by */
$handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['table'] = 'node';
$handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
/* Field: Content: Assign to User */
$handler->display->display_options['fields']['field_ef_assign_to_user']['id'] = 'field_ef_assign_to_user';
$handler->display->display_options['fields']['field_ef_assign_to_user']['table'] = 'field_data_field_ef_assign_to_user';
$handler->display->display_options['fields']['field_ef_assign_to_user']['field'] = 'field_ef_assign_to_user';
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
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'custom';
$handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
$handler->display->display_options['fields']['changed']['timezone'] = 'Europe/Dublin';
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
$handler->display->display_options['filters']['type']['value'] = array(
  'erm_support_instrument' => 'erm_support_instrument',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
$handler->display->display_options['filters']['current']['value'] = '1';
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
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
  17 => 0,
  18 => 0,
);
/* Filter criterion: Content: Native name (field_native_name_erm_si) */
$handler->display->display_options['filters']['field_native_name_erm_si_value']['id'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['field'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator_id'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['label'] = 'Native name (field_native_name_erm_si)';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['identifier'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
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
/* Filter criterion: Content: English name (field_english_name_erm_si) */
$handler->display->display_options['filters']['field_english_name_erm_si_value']['id'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['field'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['operator'] = 'word';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator_id'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['label'] = 'English name (field_english_name_erm_si)';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['operator'] = 'field_english_name_erm_si_value_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['identifier'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
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
  17 => 0,
  18 => 0,
);
/* Filter criterion: Country (field_country_erm_si) (selective) */
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['id'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['field'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['ui_name'] = 'Country (field_country_erm_si) (selective)';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['label'] = 'Country (field_country_erm_si) (selective)';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['identifier'] = 'field_country_erm_si_tid_selective';
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Type (field_type_erm_si) (selective) */
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['id'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['field'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['ui_name'] = 'Type (field_type_erm_si) (selective)';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['label'] = 'Type (field_type_erm_si) (selective)';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['identifier'] = 'field_type_erm_si_tid_selective';
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid_selective']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Updated date */
$handler->display->display_options['filters']['changed']['id'] = 'changed';
$handler->display->display_options['filters']['changed']['table'] = 'node';
$handler->display->display_options['filters']['changed']['field'] = 'changed';
$handler->display->display_options['filters']['changed']['operator'] = 'between';
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
  17 => 0,
  18 => 0,
);
$handler->display->display_options['path'] = 'support-instruments-data-export/supportinstruments.csv';
$handler->display->display_options['displays'] = array(
  'support_instrument_admin_view' => 'support_instrument_admin_view',
  'default' => 0,
  'support_instrument_frontend' => 0,
  'support_instrument_bulk_authors' => 0,
  'support_instrument_bulk_qm' => 0,
  'assign_by_country' => 0,
  'page_1' => 0,
);
$handler->display->display_options['sitename_title'] = 0;
$handler->display->display_options['use_batch'] = 'batch';
$handler->display->display_options['segment_size'] = '100';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Restructuring support instruments data export';
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = 'Download data export';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'ID';
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content: English name */
$handler->display->display_options['fields']['field_english_name_erm_si']['id'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['field'] = 'field_english_name_erm_si';
$handler->display->display_options['fields']['field_english_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
/* Field: Content: Native name */
$handler->display->display_options['fields']['field_native_name_erm_si']['id'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['field'] = 'field_native_name_erm_si';
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_native_name_erm_si']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_native_name_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Country */
$handler->display->display_options['fields']['field_country_erm_si']['id'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['field'] = 'field_country_erm_si';
$handler->display->display_options['fields']['field_country_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Type */
$handler->display->display_options['fields']['field_type_erm_si']['id'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['field'] = 'field_type_erm_si';
$handler->display->display_options['fields']['field_type_erm_si']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_type_erm_si']['delta_offset'] = '0';
/* Field: Content: Last edited by */
$handler->display->display_options['fields']['last_editor']['id'] = 'last_editor';
$handler->display->display_options['fields']['last_editor']['table'] = 'node';
$handler->display->display_options['fields']['last_editor']['field'] = 'last_editor';
/* Field: Content: Assign to User */
$handler->display->display_options['fields']['field_ef_assign_to_user']['id'] = 'field_ef_assign_to_user';
$handler->display->display_options['fields']['field_ef_assign_to_user']['table'] = 'field_data_field_ef_assign_to_user';
$handler->display->display_options['fields']['field_ef_assign_to_user']['field'] = 'field_ef_assign_to_user';
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
/* Field: Content: Updated date */
$handler->display->display_options['fields']['field_updated_date_erm_si']['id'] = 'field_updated_date_erm_si';
$handler->display->display_options['fields']['field_updated_date_erm_si']['table'] = 'field_data_field_updated_date_erm_si';
$handler->display->display_options['fields']['field_updated_date_erm_si']['field'] = 'field_updated_date_erm_si';
$handler->display->display_options['fields']['field_updated_date_erm_si']['settings'] = array(
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
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Workbench Moderation: Published */
$handler->display->display_options['fields']['published']['id'] = 'published';
$handler->display->display_options['fields']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['published']['field'] = 'published';
$handler->display->display_options['fields']['published']['not'] = 0;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
$handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'erm_support_instrument' => 'erm_support_instrument',
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
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
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
  17 => 0,
  18 => 0,
);
/* Filter criterion: Content: Native name (field_native_name_erm_si) */
$handler->display->display_options['filters']['field_native_name_erm_si_value']['id'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['table'] = 'field_data_field_native_name_erm_si';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['field'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['group'] = 1;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator_id'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['label'] = 'Native name';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['operator'] = 'field_native_name_erm_si_value_op';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['identifier'] = 'field_native_name_erm_si_value';
$handler->display->display_options['filters']['field_native_name_erm_si_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: English name (field_english_name_erm_si) */
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['id'] = 'field_english_name_erm_si_value_1';
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['table'] = 'field_data_field_english_name_erm_si';
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['field'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['operator'] = 'contains';
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['group'] = 1;
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['expose']['operator_id'] = 'field_english_name_erm_si_value_1_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['expose']['label'] = 'English name';
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['expose']['operator'] = 'field_english_name_erm_si_value_1_op';
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['expose']['identifier'] = 'field_english_name_erm_si_value';
$handler->display->display_options['filters']['field_english_name_erm_si_value_1']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Country (field_country_erm_si) */
$handler->display->display_options['filters']['field_country_erm_si_tid']['id'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['table'] = 'field_data_field_country_erm_si';
$handler->display->display_options['filters']['field_country_erm_si_tid']['field'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['value'] = '';
$handler->display->display_options['filters']['field_country_erm_si_tid']['group'] = 1;
$handler->display->display_options['filters']['field_country_erm_si_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['operator_id'] = 'field_country_erm_si_tid_op';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['operator'] = 'field_country_erm_si_tid_op';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['identifier'] = 'field_country_erm_si_tid';
$handler->display->display_options['filters']['field_country_erm_si_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_country_erm_si_tid']['vocabulary'] = 'country';
/* Filter criterion: Content: Type (field_type_erm_si) */
$handler->display->display_options['filters']['field_type_erm_si_tid']['id'] = 'field_type_erm_si_tid';
$handler->display->display_options['filters']['field_type_erm_si_tid']['table'] = 'field_data_field_type_erm_si';
$handler->display->display_options['filters']['field_type_erm_si_tid']['field'] = 'field_type_erm_si_tid';
$handler->display->display_options['filters']['field_type_erm_si_tid']['value'] = '';
$handler->display->display_options['filters']['field_type_erm_si_tid']['group'] = 1;
$handler->display->display_options['filters']['field_type_erm_si_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_type_erm_si_tid']['expose']['operator_id'] = 'field_type_erm_si_tid_op';
$handler->display->display_options['filters']['field_type_erm_si_tid']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_type_erm_si_tid']['expose']['operator'] = 'field_type_erm_si_tid_op';
$handler->display->display_options['filters']['field_type_erm_si_tid']['expose']['identifier'] = 'field_type_erm_si_tid';
$handler->display->display_options['filters']['field_type_erm_si_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_type_erm_si_tid']['vocabulary'] = 'erm_support_instrument_types';
/* Filter criterion: Workbench Moderation: Published */
$handler->display->display_options['filters']['published']['id'] = 'published';
$handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['published']['field'] = 'published';
$handler->display->display_options['filters']['published']['group'] = 1;
$handler->display->display_options['filters']['published']['exposed'] = TRUE;
$handler->display->display_options['filters']['published']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['published']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['published']['expose']['operator'] = 'published_op';
$handler->display->display_options['filters']['published']['expose']['identifier'] = 'published';
$handler->display->display_options['filters']['published']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['published']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Updated date (field_updated_date_erm_si) */
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['id'] = 'field_updated_date_erm_si_value';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['table'] = 'field_data_field_updated_date_erm_si';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['field'] = 'field_updated_date_erm_si_value';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['operator'] = 'between';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['group'] = 1;
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['operator_id'] = 'field_updated_date_erm_si_value_op';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['label'] = 'Updated date';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['operator'] = 'field_updated_date_erm_si_value_op';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['identifier'] = 'field_updated_date_erm_si_value';
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_updated_date_erm_si_value']['form_type'] = 'date_text';
$handler->display->display_options['path'] = 'support-instruments-data-export';

$view->save();
}
