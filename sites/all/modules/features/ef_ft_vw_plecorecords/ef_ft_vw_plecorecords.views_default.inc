<?php
/**
 * @file
 * ef_ft_vw_plecorecords.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ef_ft_vw_plecorecords_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pleco_records';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'pleco_records';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Platform economy database';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pleco_record' => 'pleco_record',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Eurofound’s platform economy database provides information on publications, articles, court cases, initiatives and other outputs related to platform work, or those forms of work that are organised and mediated through online platforms (websites and apps). This resource provides metadata for each entry, such as the name of the author, year of publication, whether it concerns an open access or subscription-based material, a brief description of the content and where available a web link to a source from which eligible users may access content.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<h2>[title_field]</h2>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_pleco_record_abstract']['id'] = 'field_pleco_record_abstract';
  $handler->display->display_options['fields']['field_pleco_record_abstract']['table'] = 'field_data_field_pleco_record_abstract';
  $handler->display->display_options['fields']['field_pleco_record_abstract']['field'] = 'field_pleco_record_abstract';
  $handler->display->display_options['fields']['field_pleco_record_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_pleco_record_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pleco_record_abstract']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_pleco_record_abstract']['settings'] = array(
    'trim_length' => '600',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_pleco_record_description']['id'] = 'field_pleco_record_description';
  $handler->display->display_options['fields']['field_pleco_record_description']['table'] = 'field_data_field_pleco_record_description';
  $handler->display->display_options['fields']['field_pleco_record_description']['field'] = 'field_pleco_record_description';
  $handler->display->display_options['fields']['field_pleco_record_description']['label'] = '';
  $handler->display->display_options['fields']['field_pleco_record_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pleco_record_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pleco_record_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
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
    'pleco_record' => 'pleco_record',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Text search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
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
    'field_pleco_record_abstract' => 'field_pleco_record_abstract',
    'field_pleco_record_description' => 'field_pleco_record_description',
    'title_field' => 'title_field',
  );
  /* Filter criterion: Content: Record types (field_pleco_record_types) */
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['id'] = 'field_pleco_record_types_tid';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['table'] = 'field_data_field_pleco_record_types';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['field'] = 'field_pleco_record_types_tid';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['operator_id'] = 'field_pleco_record_types_tid_op';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['label'] = 'Record type';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['operator'] = 'field_pleco_record_types_tid_op';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['identifier'] = 'field_pleco_record_types_tid';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['vocabulary'] = 'pleco_record_type';
  /* Filter criterion: Content: Availability (field_pleco_availability) */
  $handler->display->display_options['filters']['field_pleco_availability_tid']['id'] = 'field_pleco_availability_tid';
  $handler->display->display_options['filters']['field_pleco_availability_tid']['table'] = 'field_data_field_pleco_availability';
  $handler->display->display_options['filters']['field_pleco_availability_tid']['field'] = 'field_pleco_availability_tid';
  $handler->display->display_options['filters']['field_pleco_availability_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_availability_tid']['expose']['operator_id'] = 'field_pleco_availability_tid_op';
  $handler->display->display_options['filters']['field_pleco_availability_tid']['expose']['label'] = 'Availability (field_pleco_availability)';
  $handler->display->display_options['filters']['field_pleco_availability_tid']['expose']['operator'] = 'field_pleco_availability_tid_op';
  $handler->display->display_options['filters']['field_pleco_availability_tid']['expose']['identifier'] = 'field_pleco_availability_tid';
  $handler->display->display_options['filters']['field_pleco_availability_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_availability_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_availability_tid']['vocabulary'] = 'pleco_availability';
  /* Filter criterion: Content: Countries (field_pleco_countries) */
  $handler->display->display_options['filters']['field_pleco_countries_tid']['id'] = 'field_pleco_countries_tid';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['table'] = 'field_data_field_pleco_countries';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['field'] = 'field_pleco_countries_tid';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['operator_id'] = 'field_pleco_countries_tid_op';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['operator'] = 'field_pleco_countries_tid_op';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['identifier'] = 'field_pleco_countries_tid';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_countries_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['vocabulary'] = 'pleco_country';
  /* Filter criterion: Content: Keywords (field_pleco_keywords) */
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['id'] = 'field_pleco_keywords_tid';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['table'] = 'field_data_field_pleco_keywords';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['field'] = 'field_pleco_keywords_tid';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['operator_id'] = 'field_pleco_keywords_tid_op';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['operator'] = 'field_pleco_keywords_tid_op';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['identifier'] = 'field_pleco_keywords_tid';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['vocabulary'] = 'pleco_keyword';
  /* Filter criterion: Content: Languages (field_pleco_languages) */
  $handler->display->display_options['filters']['field_pleco_languages_tid']['id'] = 'field_pleco_languages_tid';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['table'] = 'field_data_field_pleco_languages';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['field'] = 'field_pleco_languages_tid';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_languages_tid']['expose']['operator_id'] = 'field_pleco_languages_tid_op';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['expose']['operator'] = 'field_pleco_languages_tid_op';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['expose']['identifier'] = 'field_pleco_languages_tid';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_languages_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_languages_tid']['vocabulary'] = 'pleco_language';
  /* Filter criterion: Content: Methodologies (field_pleco_methodologies) */
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['id'] = 'field_pleco_methodologies_tid';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['table'] = 'field_data_field_pleco_methodologies';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['field'] = 'field_pleco_methodologies_tid';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['expose']['operator_id'] = 'field_pleco_methodologies_tid_op';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['expose']['label'] = 'Methodology';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['expose']['operator'] = 'field_pleco_methodologies_tid_op';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['expose']['identifier'] = 'field_pleco_methodologies_tid';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_methodologies_tid']['vocabulary'] = 'pleco_methodology';
  /* Filter criterion: Content: Organisations (field_pleco_organisations) */
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['id'] = 'field_pleco_organisations_tid';
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['table'] = 'field_data_field_pleco_organisations';
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['field'] = 'field_pleco_organisations_tid';
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['expose']['operator_id'] = 'field_pleco_organisations_tid_op';
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['expose']['label'] = 'Organisation';
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['expose']['operator'] = 'field_pleco_organisations_tid_op';
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['expose']['identifier'] = 'field_pleco_organisations_tid';
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_organisations_tid']['vocabulary'] = 'pleco_organisation';
  /* Filter criterion: Content: Platform sectors (field_pleco_platform_sectors) */
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['id'] = 'field_pleco_platform_sectors_tid';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['table'] = 'field_data_field_pleco_platform_sectors';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['field'] = 'field_pleco_platform_sectors_tid';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['operator_id'] = 'field_pleco_platform_sectors_tid_op';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['label'] = 'Platform sector';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['operator'] = 'field_pleco_platform_sectors_tid_op';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['identifier'] = 'field_pleco_platform_sectors_tid';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['vocabulary'] = 'pleco_platform_sector';
  /* Filter criterion: Content: Platform work typologies (field_pleco_work_typologies) */
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['id'] = 'field_pleco_work_typologies_tid';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['table'] = 'field_data_field_pleco_work_typologies';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['field'] = 'field_pleco_work_typologies_tid';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['expose']['operator_id'] = 'field_pleco_work_typologies_tid_op';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['expose']['label'] = 'Platform work typology';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['expose']['operator'] = 'field_pleco_work_typologies_tid_op';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['expose']['identifier'] = 'field_pleco_work_typologies_tid';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_work_typologies_tid']['vocabulary'] = 'pleco_platform_work_typology';
  /* Filter criterion: Content: Platforms (field_pleco_platforms) */
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['id'] = 'field_pleco_platforms_tid';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['table'] = 'field_data_field_pleco_platforms';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['field'] = 'field_pleco_platforms_tid';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['operator_id'] = 'field_pleco_platforms_tid_op';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['label'] = 'Platform';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['operator'] = 'field_pleco_platforms_tid_op';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['identifier'] = 'field_pleco_platforms_tid';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['vocabulary'] = 'pleco_platform';
  $handler->display->display_options['path'] = 'data/platform-economy/records';

  /* Display: landing page latest */
  $handler = $view->new_display('block', 'landing page latest', 'landing_page_latest');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: landing page search */
  $handler = $view->new_display('block', 'landing page search', 'landing_page_search');
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
    'pleco_record' => 'pleco_record',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Text search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
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
    'field_pleco_record_abstract' => 'field_pleco_record_abstract',
    'field_pleco_record_description' => 'field_pleco_record_description',
    'title_field' => 'title_field',
  );
  /* Filter criterion: Content: Record types (field_pleco_record_types) */
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['id'] = 'field_pleco_record_types_tid';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['table'] = 'field_data_field_pleco_record_types';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['field'] = 'field_pleco_record_types_tid';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['operator_id'] = 'field_pleco_record_types_tid_op';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['label'] = 'Record type';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['operator'] = 'field_pleco_record_types_tid_op';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['identifier'] = 'field_pleco_record_types_tid';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_record_types_tid']['vocabulary'] = 'pleco_record_type';
  /* Filter criterion: Content: Platform sectors (field_pleco_platform_sectors) */
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['id'] = 'field_pleco_platform_sectors_tid';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['table'] = 'field_data_field_pleco_platform_sectors';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['field'] = 'field_pleco_platform_sectors_tid';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['operator_id'] = 'field_pleco_platform_sectors_tid_op';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['label'] = 'Platform sector';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['operator'] = 'field_pleco_platform_sectors_tid_op';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['identifier'] = 'field_pleco_platform_sectors_tid';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_platform_sectors_tid']['vocabulary'] = 'pleco_platform_sector';
  /* Filter criterion: Content: Platforms (field_pleco_platforms) */
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['id'] = 'field_pleco_platforms_tid';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['table'] = 'field_data_field_pleco_platforms';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['field'] = 'field_pleco_platforms_tid';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['operator_id'] = 'field_pleco_platforms_tid_op';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['label'] = 'Platform';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['operator'] = 'field_pleco_platforms_tid_op';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['identifier'] = 'field_pleco_platforms_tid';
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_platforms_tid']['vocabulary'] = 'pleco_platform';
  /* Filter criterion: Content: Countries (field_pleco_countries) */
  $handler->display->display_options['filters']['field_pleco_countries_tid']['id'] = 'field_pleco_countries_tid';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['table'] = 'field_data_field_pleco_countries';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['field'] = 'field_pleco_countries_tid';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pleco_countries_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['operator_id'] = 'field_pleco_countries_tid_op';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['operator'] = 'field_pleco_countries_tid_op';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['identifier'] = 'field_pleco_countries_tid';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_countries_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_countries_tid']['vocabulary'] = 'pleco_country';
  /* Filter criterion: Content: Keywords (field_pleco_keywords) */
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['id'] = 'field_pleco_keywords_tid';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['table'] = 'field_data_field_pleco_keywords';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['field'] = 'field_pleco_keywords_tid';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['operator_id'] = 'field_pleco_keywords_tid_op';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['operator'] = 'field_pleco_keywords_tid_op';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['identifier'] = 'field_pleco_keywords_tid';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pleco_keywords_tid']['vocabulary'] = 'pleco_keyword';
  $export['pleco_records'] = $view;

  return $export;
}
