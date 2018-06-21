<?php

/**
 * Unlink ef_basics_unlink_1_views_view().
 */
function ef_basics_unlink_1_views_view() {
$view = new view();
$view->name = '_extranet_for_the_governing_board';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = ' Extranet for the Governing Board';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = ' Extranet for the Governing Board';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  4 => '4',
  5 => '5',
  15 => '15',
);
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
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
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
  'board_member_page' => 'board_member_page',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_type'] = 'p';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
$handler->display->display_options['fields']['body']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['path'] = 'extranet/board-members-extranet';

$view->save();
$view = new view();
$view->name = 'browse_by';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Browse By';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Browse By';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
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
/* Sort criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['sorts']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['sorts']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['sorts']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['sorts']['field_ef_topic_tid']['expose']['label'] = 'Topic';
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
);
$handler->display->display_options['filters']['field_ef_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
/* Filter criterion: Content: Sector (field_ef_publ_sector) */
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['id'] = 'field_ef_publ_sector_tid';
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['table'] = 'field_data_field_ef_publ_sector';
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['field'] = 'field_ef_publ_sector_tid';
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['expose']['operator_id'] = 'field_ef_publ_sector_tid_op';
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['expose']['label'] = 'Sector';
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['expose']['operator'] = 'field_ef_publ_sector_tid_op';
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['expose']['identifier'] = 'field_ef_publ_sector_tid';
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['expose']['remember_roles'] = array(
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
);
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_publ_sector_tid']['vocabulary'] = 'ef_publication_sectors';
/* Filter criterion: Field: Country (field_ef_eu_related_countries) */
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['id'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['table'] = 'field_data_field_ef_eu_related_countries';
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['field'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['expose']['operator_id'] = 'field_ef_eu_related_countries_iso2_op';
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['expose']['label'] = 'Country (field_ef_eu_related_countries)';
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['expose']['operator'] = 'field_ef_eu_related_countries_iso2_op';
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['expose']['identifier'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['filters']['field_ef_eu_related_countries_iso2']['expose']['remember_roles'] = array(
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
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'browse-by';

$view->save();
$view = new view();
$view->name = 'browse_by_sector';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Browse By Sector';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'nothing';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<label class="ef-icon_sector">Sector</label>';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['text'] = 'sectors/[name]';
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'observatories/eurwork/content?field_ef_sector_tid[]=[tid]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_sectors' => 'ef_sectors',
);
/* Filter criterion: Selective sectors */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['ui_name'] = 'Selective sectors';
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = '	$sectors = array();

	$query = \'SELECT distinct t.tid as sector_tid, t.name as name
		from node n
		inner join field_data_field_ef_sector s on s.entity_id = n.nid
		inner join taxonomy_term_data t on t.tid = s.field_ef_sector_tid
		inner join taxonomy_term_hierarchy h on h.tid = t.tid
		inner join field_data_field_ef_observatory o on o.entity_id = n.nid 
		where t.tid not in (SELECT distinct h.parent as parent
		from node n
		inner join field_data_field_ef_sector s on s.entity_id = n.nid
		inner join taxonomy_term_data t on t.tid = s.field_ef_sector_tid
		inner join taxonomy_term_hierarchy h on h.tid = t.tid
		where h.parent != 0)
		and o.field_ef_observatory_tid = 13188
		and n.status = 1
		order by name asc\';

	$result = db_query($query)->fetchAll();

	foreach ($result as $key => $value) {
		$sectors[] = $value->sector_tid;
	}

	if( in_array($data->tid, $sectors) == 0){
		return TRUE;
	} ';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_sectors' => 'ef_sectors',
);
/* Filter criterion: Selective sectors */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['ui_name'] = 'Selective sectors';
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = '        $sectors = array();

	$query = \'SELECT distinct t.tid as sector_tid, t.name as name
		from node n
		inner join field_data_field_ef_sector s on s.entity_id = n.nid
		inner join taxonomy_term_data t on t.tid = s.field_ef_sector_tid
		inner join taxonomy_term_hierarchy h on h.tid = t.tid
		inner join field_data_field_ef_observatory o on o.entity_id = n.nid 
		where t.tid not in (SELECT distinct h.parent as parent
		from node n
		inner join field_data_field_ef_sector s on s.entity_id = n.nid
		inner join taxonomy_term_data t on t.tid = s.field_ef_sector_tid
		inner join taxonomy_term_hierarchy h on h.tid = t.tid
		where h.parent != 0)
		and o.field_ef_observatory_tid = 13188
		and n.status = 1
		order by name asc\';

	$result = db_query($query)->fetchAll();

	foreach ($result as $key => $value) {
		$sectors[] = $value->sector_tid;
	}

	if( in_array($data->tid, $sectors) == 0){
		return TRUE;
	} 
';

$view->save();
$view = new view();
$view->name = 'browse_by_topics';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Browse By Topics';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Browse by:';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'seletc';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'nothing';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
);
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<label  class="ef-icon_topic">Topic</label> ';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['path'] = 'topics/[name]';
$handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_type'] = 'span';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['text'] = 'taxonomy/term/[tid]';
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'observatories/eurwork/content?field_ef_topic_tid[]=[tid]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_topics' => 'ef_topics',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;

/* Display: Block Browse By Topics of Theme */
$handler = $view->new_display('block', 'Block Browse By Topics of Theme', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'nothing';
$handler->display->display_options['style_options']['label'] = 'Find info by topic:';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Entity translation: Title: translated */
$handler->display->display_options['fields']['field_term_title_et']['id'] = 'field_term_title_et';
$handler->display->display_options['fields']['field_term_title_et']['table'] = 'field_data_field_term_title';
$handler->display->display_options['fields']['field_term_title_et']['field'] = 'field_term_title_et';
$handler->display->display_options['fields']['field_term_title_et']['label'] = '';
$handler->display->display_options['fields']['field_term_title_et']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_term_title_et']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['text'] = 'taxonomy/term/[tid]';
$handler->display->display_options['fields']['tid']['alter']['path'] = 'topics/[name]';
$handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['path_case'] = 'lower';
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'taxonomy/term/[tid]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_topics' => 'ef_topics',
);

$view->save();
$view = new view();
$view->name = 'country';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'countries_country';
$view->human_name = 'Country';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Country: Body */
$handler->display->display_options['fields']['field_ef_country_body']['id'] = 'field_ef_country_body';
$handler->display->display_options['fields']['field_ef_country_body']['table'] = 'field_data_field_ef_country_body';
$handler->display->display_options['fields']['field_ef_country_body']['field'] = 'field_ef_country_body';
$handler->display->display_options['fields']['field_ef_country_body']['label'] = '';
$handler->display->display_options['fields']['field_ef_country_body']['element_label_colon'] = FALSE;
/* Contextual filter: Countries: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'countries_country';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['default_action'] = 'not found';
$handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['title'] = '<span class="[iso2]">%1</span>';
$handler->display->display_options['arguments']['name']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Country: Body */
$handler->display->display_options['fields']['field_ef_country_body']['id'] = 'field_ef_country_body';
$handler->display->display_options['fields']['field_ef_country_body']['table'] = 'field_data_field_ef_country_body';
$handler->display->display_options['fields']['field_ef_country_body']['field'] = 'field_ef_country_body';
$handler->display->display_options['fields']['field_ef_country_body']['label'] = '';
$handler->display->display_options['fields']['field_ef_country_body']['element_label_colon'] = FALSE;
/* Field: Countries: ISO2 */
$handler->display->display_options['fields']['iso2']['id'] = 'iso2';
$handler->display->display_options['fields']['iso2']['table'] = 'countries_country';
$handler->display->display_options['fields']['iso2']['field'] = 'iso2';
$handler->display->display_options['fields']['iso2']['label'] = '';
$handler->display->display_options['fields']['iso2']['exclude'] = TRUE;
$handler->display->display_options['fields']['iso2']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Countries: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'countries_country';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['default_action'] = 'not found';
$handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['title'] = '<span class="[iso2]">%1</span>';
$handler->display->display_options['arguments']['name']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
$handler->display->display_options['argument_input'] = array(
  'name' => array(
    'type' => 'panel',
    'context' => 'entity:comment.author',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Countries: Name',
  ),
);

/* Display: Right Promo Area */
$handler = $view->new_display('block', 'Right Promo Area', 'block_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Country: Quality of society */
$handler->display->display_options['fields']['field_ef_quality_of_society']['id'] = 'field_ef_quality_of_society';
$handler->display->display_options['fields']['field_ef_quality_of_society']['table'] = 'field_data_field_ef_quality_of_society';
$handler->display->display_options['fields']['field_ef_quality_of_society']['field'] = 'field_ef_quality_of_society';
$handler->display->display_options['fields']['field_ef_quality_of_society']['label'] = '';
$handler->display->display_options['fields']['field_ef_quality_of_society']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Countries: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'countries_country';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['default_action'] = 'not found';
$handler->display->display_options['arguments']['name']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
$handler->display->display_options['block_description'] = 'Right Promo Area';

/* Display: Country More  */
$handler = $view->new_display('block', 'Country More ', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'More';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Country: More */
$handler->display->display_options['fields']['field_ef_country_more']['id'] = 'field_ef_country_more';
$handler->display->display_options['fields']['field_ef_country_more']['table'] = 'field_data_field_ef_country_more';
$handler->display->display_options['fields']['field_ef_country_more']['field'] = 'field_ef_country_more';
$handler->display->display_options['fields']['field_ef_country_more']['label'] = '';
$handler->display->display_options['fields']['field_ef_country_more']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Countries: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'countries_country';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['default_action'] = 'default';
$handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['title'] = 'Want to know more about %1 and...?';
$handler->display->display_options['arguments']['name']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
$handler->display->display_options['block_description'] = 'Country More Block';

/* Display: Specific Information */
$handler = $view->new_display('block', 'Specific Information', 'block_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Country: Specific information */
$handler->display->display_options['fields']['field_ef_specific_information']['id'] = 'field_ef_specific_information';
$handler->display->display_options['fields']['field_ef_specific_information']['table'] = 'field_data_field_ef_specific_information';
$handler->display->display_options['fields']['field_ef_specific_information']['field'] = 'field_ef_specific_information';
$handler->display->display_options['fields']['field_ef_specific_information']['label'] = '';
$handler->display->display_options['fields']['field_ef_specific_information']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Countries: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'countries_country';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['default_action'] = 'default';
$handler->display->display_options['arguments']['name']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
$handler->display->display_options['block_description'] = 'Country Specific Infomration Block';

/* Display: External Links */
$handler = $view->new_display('block', 'External Links', 'block_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'External Links';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Country: External links */
$handler->display->display_options['fields']['field_ef_external_links']['id'] = 'field_ef_external_links';
$handler->display->display_options['fields']['field_ef_external_links']['table'] = 'field_data_field_ef_external_links';
$handler->display->display_options['fields']['field_ef_external_links']['field'] = 'field_ef_external_links';
$handler->display->display_options['fields']['field_ef_external_links']['label'] = '';
$handler->display->display_options['fields']['field_ef_external_links']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Countries: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'countries_country';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['default_action'] = 'default';
$handler->display->display_options['arguments']['name']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
$handler->display->display_options['block_description'] = 'Country External Links Block';

/* Display: Countries Landing Page */
$handler = $view->new_display('page', 'Countries Landing Page', 'page_1');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Countries: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = 'countries/[name]';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['path'] = 'countries-list';

$view->save();
$view = new view();
$view->name = 'custom_taxonomy_term_display';
$view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Custom Taxonomy Term  Display';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'node';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
/* Contextual filter: Content: Has taxonomy term ID depth modifier */
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: PHP */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php

 $term = taxonomy_term_load($view->args[0]);

 switch($term->name){
  case \'Research in focus - extended\':
    print "<p>These Research in Focus articles are summaries of national working life survey findings. Results from these surveys provide an 

              interesting complement to the results of <em>Eurofound’s  own European <a href=\'http://www.eurofound.europa.eu/european-working-

              conditions-surveys-ewcs\'>working conditions surveys</a></em> and <em><a href=\'http://www.eurofound.europa.eu/surveys/european-company-

              surveys\'>company surveys</a></em>. These national articles (formerly also known as ‘survey data reports’) can be read in conjunction with 

              the Eurofound 2014 report on ‘<em><a href=\'http://www.eurofound.europa.eu/publications/report/2014/eu-member-states/working-

              conditions/national-working-conditions-surveys-in-europe-a-compilation\'>National working conditions surveys in Europe</a></em>.’ Further 

<a href=\'http://www.eurofound.europa.eu/working-life-surveys\'>international working life survey findings</a> are available.</p>";
    break;
  case \'Topical update\':
    print "<p><strong>Topical updates</strong> summarise and update developments around selected topics, which are relevant across a number of Member States at the same time. They are mainly based on reporting from Eurofound’s <a href=\'http://www.eurofound.europa.eu/network-of-european-correspondents\'>network of European correspondents</a>.</p>";
    break;
  case \'Country update\':
    print "<p><Strong>Country updates</strong> summarise developments at national level and are published 4 times a year. They are based on reporting from Eurofound’s <a href=\'http://www.eurofound.europa.eu/network-of-european-correspondents\'>network of European correspondents</a>.</p>";
    break;
 }
?>
';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'item-list-view';
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_type'] = 'p';
$handler->display->display_options['fields']['field_ef_main_image']['element_class'] = 'img-country-update';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
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
/* Field: Abstract php */
$handler->display->display_options['fields']['php_3']['id'] = 'php_3';
$handler->display->display_options['fields']['php_3']['table'] = 'views';
$handler->display->display_options['fields']['php_3']['field'] = 'php';
$handler->display->display_options['fields']['php_3']['ui_name'] = 'Abstract php';
$handler->display->display_options['fields']['php_3']['label'] = '';
$handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_3']['element_wrapper_type'] = 'p';
$handler->display->display_options['fields']['php_3']['element_wrapper_class'] = 'summary-country-update';
$handler->display->display_options['fields']['php_3']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_3']['php_output'] = '<?php
        global $language;
  $node = node_load($data->nid);
        print $node->body[$language->language][0][\'summary\'];
?>';
$handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
/* Field: Display country */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display country';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$node = node_load($data->nid);

$type = $node->type;

if(($type == \'ef_report\') || ($type == \'ef_case_study\')){
  $ef_country = $node->field_ef_country[\'und\'][0][\'iso2\'];

  if(!empty($ef_country)){
    $sql = "SELECT DISTINCT c.name
      FROM field_data_field_ef_country t
      INNER JOIN countries_country c ON t.field_ef_country_iso2 = c.iso2
      WHERE c.iso2 =\'$ef_country\'";

    $result = db_query($sql)->fetchAll();
    $country = $result[0]->name;

  }
}elseif(($type == \'ef_comparative_analytical_report\') || ($type == \'ef_publication\')){
  $iso2 = $node->field_ef_eu_related_countries[\'und\'][0][\'iso2\'];
  if(!empty($iso2)){
    $sql = "SELECT DISTINCT c.name
    FROM field_data_field_ef_eu_related_countries t
    INNER JOIN countries_country c ON t.field_ef_eu_related_countries_iso2 = c.iso2
    WHERE t.field_ef_eu_related_countries_iso2 =\'$iso2\'";

    $result = db_query($sql)->fetchAll();
    $country = $result[0]->name;
  }

}


?>
<li class="list-country"><?php print $country; ?></li>';
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
    $name = \'Comparative Analytical Report\';
  }elseif($tid == 13745){
    $name = \'Annual Update\';
  }elseif($tid == 13746){
    $name = \'Representativeness Study\';
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
/* Field: Display observatory */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['ui_name'] = 'Display observatory';
$handler->display->display_options['fields']['php_2']['label'] = '';
$handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
global $base_url;
$node = node_load($row->field_ef_observatory);
$tid = $node->field_ef_observatory[\'und\'][0][\'tid\'];
if($tid == 13188){
  $observatory = \'EurWORK\';
}else{
  $observatory = \'EMCC\';
}
$observatory_url = strtolower($observatory);
?>
<a href="<?php print $base_url . \'/observatories/\' . $observatory_url; ?>"><?php print $observatory; ?></a>';
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
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'field-ef-metadata';
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
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
  'country' => 'country',
  'cwb_sector' => 'cwb_sector',
  'cwb_working_class' => 'cwb_working_class',
  'cwb_outcome_variables_units' => 'cwb_outcome_variables_units',
  'cwb_variables_type' => 'cwb_variables_type',
  'cwb_outcome_variables' => 'cwb_outcome_variables',
  'cwb_timeline_category' => 'cwb_timeline_category',
  'cwb_timeline_level' => 'cwb_timeline_level',
  'case_study_anticipation_of_change_activities' => 'case_study_anticipation_of_change_activities',
  'ef_case_study_categories' => 'ef_case_study_categories',
  'ef_company_sizes' => 'ef_company_sizes',
  'ef_activities' => 'ef_activities',
  'erm_regulation_fundings' => 'erm_regulation_fundings',
  'erm_support_instrument_fundings' => 'erm_support_instrument_fundings',
  'erm_support_instrument_types' => 'erm_support_instrument_types',
  'ef_factsheet_media_sources' => 'ef_factsheet_media_sources',
  'ef_factsheet_new_location' => 'ef_factsheet_new_location',
  'ef_instrument_categories' => 'ef_instrument_categories',
  'ef_instrument_fundings' => 'ef_instrument_fundings',
  'ef_instrument_involvement_types' => 'ef_instrument_involvement_types',
  'ef_instrument_phases' => 'ef_instrument_phases',
  'involved_actors' => 'involved_actors',
  'ef_nace_codes' => 'ef_nace_codes',
  'ef_nuts' => 'ef_nuts',
  'ef_regulation_fundings' => 'ef_regulation_fundings',
  'ef_regulation_involvements' => 'ef_regulation_involvements',
  'ef_regulation_phases' => 'ef_regulation_phases',
  'ef_regulation_thresholds' => 'ef_regulation_thresholds',
  'ef_regulation_types' => 'ef_regulation_types',
  'ef_restructuring_keywords' => 'ef_restructuring_keywords',
  'ef_restructuring_types' => 'ef_restructuring_types',
  'ef_case_study_initiative_types' => 'ef_case_study_initiative_types',
  'ef_case_study_legal_forms' => 'ef_case_study_legal_forms',
  'ef_case_study_names' => 'ef_case_study_names',
  'ef_case_study_organisation_sizes' => 'ef_case_study_organisation_sizes',
  'ef_case_study_scopes' => 'ef_case_study_scopes',
  'ef_case_study_sectors' => 'ef_case_study_sectors',
  'ef_case_study_social_dialogue_types' => 'ef_case_study_social_dialogue_types',
  'ef_case_study_social_dialogues' => 'ef_case_study_social_dialogues',
  'ef_case_study_target_groups' => 'ef_case_study_target_groups',
  'case_study_involved_actors' => 'case_study_involved_actors',
  'case_study_keywords' => 'case_study_keywords',
  'case_study_management_of_change_activities' => 'case_study_management_of_change_activities',
  'case_study_ownership' => 'case_study_ownership',
  'case_study_size_of_the_affected_establishment' => 'case_study_size_of_the_affected_establishment',
  'ef_case_study_type_of_measure' => 'ef_case_study_type_of_measure',
  'ef_contracts' => 'ef_contracts',
  'ef_deliverable_kinds' => 'ef_deliverable_kinds',
  'ef_report_types' => 'ef_report_types',
  'erm_regulation_phase_type' => 'erm_regulation_phase_type',
  'eurwork_landing_pages' => 'eurwork_landing_pages',
  'ef_event_types' => 'ef_event_types',
  'ef_industrial_relations_terms' => 'ef_industrial_relations_terms',
  'newsletter' => 'newsletter',
  'ef_observatories' => 'ef_observatories',
  'ef_procurement_statuses' => 'ef_procurement_statuses',
  'ef_procurement_types' => 'ef_procurement_types',
  'ef_publication_contributors' => 'ef_publication_contributors',
  'ef_publication_keywords' => 'ef_publication_keywords',
  'ef_publication_sectors' => 'ef_publication_sectors',
  'ef_publication_types' => 'ef_publication_types',
  'ef_sectors' => 'ef_sectors',
  'ef_spotlight_themes' => 'ef_spotlight_themes',
  'ef_survey_families' => 'ef_survey_families',
  'tags' => 'tags',
  'ef_themes' => 'ef_themes',
  'ef_units' => 'ef_units',
  'ef_vendor_service_types' => 'ef_vendor_service_types',
  'webform_type' => 'webform_type',
  'ef_work_programme_areas' => 'ef_work_programme_areas',
);
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
/* Contextual filter: Content: Has taxonomy term ID depth modifier */
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['path'] = 'taxonomy/term/%';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 15;
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);

/* Display: Country updates */
$handler = $view->new_display('page', 'Country updates', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Country updates';
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'Eurofound publishes a brief round-up of recent developments in the area of working life, for each country, about 4 times a year. ';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p><a><strong><img>';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Display country */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display country';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'summary';
$handler->display->display_options['fields']['php_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$node = node_load($data->nid);

$type = $node->type;

if(($type == \'ef_report\') || ($type == \'ef_case_study\')){
  $ef_country = $node->field_ef_country[\'und\'][0][\'iso2\'];

  if(!empty($ef_country)){
    $sql = "SELECT DISTINCT c.name
      FROM field_data_field_ef_country t
      INNER JOIN countries_country c ON t.field_ef_country_iso2 = c.iso2
      WHERE c.iso2 =\'$ef_country\'";

    $result = db_query($sql)->fetchAll();
    $country = $result[0]->name;

  }
}elseif(($type == \'ef_comparative_analytical_report\') || ($type == \'ef_publication\')){
  $iso2 = $node->field_ef_eu_related_countries[\'und\'][0][\'iso2\'];
  if(!empty($iso2)){
    $sql = "SELECT DISTINCT c.name
    FROM field_data_field_ef_eu_related_countries t
    INNER JOIN countries_country c ON t.field_ef_eu_related_countries_iso2 = c.iso2
    WHERE t.field_ef_eu_related_countries_iso2 =\'$iso2\'";

    $result = db_query($sql)->fetchAll();
    $country = $result[0]->name;
  }

}


?>
<li class="list-country"><?php print $country; ?></li>';
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
    $name = \'Comparative Analytical Report\';
  }elseif($tid == 13745){
    $name = \'Annual Update\';
  }elseif($tid == 13746){
    $name = \'Representativeness Study\';
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
/* Field: Display observatory */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['ui_name'] = 'Display observatory';
$handler->display->display_options['fields']['php_2']['label'] = '';
$handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
global $base_url;
$node = node_load($row->field_ef_observatory);
$tid = $node->field_ef_observatory[\'und\'][0][\'tid\'];
if($tid = 13188){
  $observatory = \'EurWORK\';
}else{
  $observatory = \'EMCC\';
}
$observatory_url = strtolower($observatory);
?>
<a href="<?php print $base_url . \'/observatories/\' . $observatory_url; ?>"><?php print $observatory; ?></a>';
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
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'field-ef-metadata';
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
/* Filter criterion: Content: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['path'] = 'observatories/eurwork/articles/country-updates';

$view->save();
$view = new view();
$view->name = 'ef_administration_nodes';
$view->description = 'Find and manage content.';
$view->tag = 'admin, content, find';
$view->base_table = 'node';
$view->human_name = 'EF Administration Nodes';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Find content';
$handler->display->display_options['css_class'] = 'admin-views-view';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'title' => array(
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
  'uid' => array(
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
  'last_updated' => array(
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
  'language' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
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
  'field_ef_theme_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
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
  'field_ef_topic_tid' => array(
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
  'field_ef_observatory_tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
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
  'type' => array(
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
  'state' => array(
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
  'field_ef_flag_value' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 1,
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
$handler->display->display_options['pager']['options']['items_per_page'] = 50;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'title' => 'title',
  'timestamp' => 'title',
  'type' => 'type',
  'name' => 'name',
  'status' => 'status',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'changed';
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
    'separator' => '&nbsp;',
    'empty_column' => 0,
  ),
  'timestamp' => array(
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
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '&emsp;',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['empty_table'] = TRUE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'No content available.';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['label'] = 'Country';
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Change author',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Delete',
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
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Stick',
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unstick',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Change value',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
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
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Promote to front page',
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Publish',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Demote from front page',
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
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unpublish',
  ),
  'action::node_unpublish_by_keyword_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::pathauto_node_update_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Author';
$handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['element_type'] = 'span';
$handler->display->display_options['fields']['status']['element_class'] = '[status]';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
$handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
/* Filter criterion: Content: Theme (field_ef_theme) */
$handler->display->display_options['filters']['field_ef_theme_tid']['id'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['filters']['field_ef_theme_tid']['field'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_theme_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['operator_id'] = 'field_ef_theme_tid_op';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['label'] = 'Theme';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['operator'] = 'field_ef_theme_tid_op';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['identifier'] = 'field_ef_theme_tid';
$handler->display->display_options['filters']['field_ef_theme_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_ef_theme_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_theme_tid']['vocabulary'] = 'ef_themes';
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['value'] = '';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['identifier'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
$handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['relationship'] = 'nid';
$handler->display->display_options['filters']['state']['group'] = 1;
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
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
/* Filter criterion: Content: Flag (field_ef_flag) */
$handler->display->display_options['filters']['field_ef_flag_value']['id'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['table'] = 'field_data_field_ef_flag';
$handler->display->display_options['filters']['field_ef_flag_value']['field'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_flag_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['operator_id'] = 'field_ef_flag_value_op';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['label'] = 'Flag';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['operator'] = 'field_ef_flag_value_op';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['identifier'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Updated/commented date */
$handler->display->display_options['filters']['last_updated']['id'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['table'] = 'node_comment_statistics';
$handler->display->display_options['filters']['last_updated']['field'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['operator'] = '>=';
$handler->display->display_options['filters']['last_updated']['group'] = 1;
$handler->display->display_options['filters']['last_updated']['exposed'] = TRUE;
$handler->display->display_options['filters']['last_updated']['expose']['operator_id'] = 'last_updated_op';
$handler->display->display_options['filters']['last_updated']['expose']['label'] = 'Updated after';
$handler->display->display_options['filters']['last_updated']['expose']['operator'] = 'last_updated_op';
$handler->display->display_options['filters']['last_updated']['expose']['identifier'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);

/* Display: Admin Nodes System */
$handler = $view->new_display('system', 'Admin Nodes System', 'system_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
$handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'field_ef_observatory_tid';
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
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['identifier'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
$handler->display->display_options['filters']['field_ef_topic_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
$handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
/* Filter criterion: Content: Flag (field_ef_flag) */
$handler->display->display_options['filters']['field_ef_flag_value']['id'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['table'] = 'field_data_field_ef_flag';
$handler->display->display_options['filters']['field_ef_flag_value']['field'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_flag_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['operator_id'] = 'field_ef_flag_value_op';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['label'] = 'Flag';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['operator'] = 'field_ef_flag_value_op';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['identifier'] = 'field_ef_flag_value';
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_flag_value']['expose']['remember_roles'] = array(
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
  5 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  7 => 0,
  4 => 0,
  3 => 0,
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
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Updated/commented date */
$handler->display->display_options['filters']['last_updated']['id'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['table'] = 'node_comment_statistics';
$handler->display->display_options['filters']['last_updated']['field'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['operator'] = 'between';
$handler->display->display_options['filters']['last_updated']['group'] = 1;
$handler->display->display_options['filters']['last_updated']['exposed'] = TRUE;
$handler->display->display_options['filters']['last_updated']['expose']['operator_id'] = 'last_updated_op';
$handler->display->display_options['filters']['last_updated']['expose']['label'] = 'Updated between';
$handler->display->display_options['filters']['last_updated']['expose']['description'] = 'YYYY-MM-DD';
$handler->display->display_options['filters']['last_updated']['expose']['operator'] = 'last_updated_op';
$handler->display->display_options['filters']['last_updated']['expose']['identifier'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Body (body) */
$handler->display->display_options['filters']['body_value']['id'] = 'body_value';
$handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
$handler->display->display_options['filters']['body_value']['field'] = 'body_value';
$handler->display->display_options['filters']['body_value']['operator'] = 'word';
$handler->display->display_options['filters']['body_value']['group'] = 1;
$handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
$handler->display->display_options['filters']['body_value']['expose']['label'] = 'Content';
$handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
$handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
$handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Spotlight Theme (field_ef_spotlight_theme) */
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['id'] = 'field_ef_spotlight_theme_tid';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['table'] = 'field_data_field_ef_spotlight_theme';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['field'] = 'field_ef_spotlight_theme_tid';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['value'] = '';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['operator_id'] = 'field_ef_spotlight_theme_tid_op';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['label'] = 'Spotlight Theme';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['operator'] = 'field_ef_spotlight_theme_tid_op';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['identifier'] = 'field_ef_spotlight_theme_tid';
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_spotlight_theme_tid']['vocabulary'] = 'ef_spotlight_themes';
/* Filter criterion: Content: Unit (field_ef_unit) */
$handler->display->display_options['filters']['field_ef_unit_tid']['id'] = 'field_ef_unit_tid';
$handler->display->display_options['filters']['field_ef_unit_tid']['table'] = 'field_data_field_ef_unit';
$handler->display->display_options['filters']['field_ef_unit_tid']['field'] = 'field_ef_unit_tid';
$handler->display->display_options['filters']['field_ef_unit_tid']['value'] = '';
$handler->display->display_options['filters']['field_ef_unit_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_unit_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['operator_id'] = 'field_ef_unit_tid_op';
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['label'] = 'Unit';
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['operator'] = 'field_ef_unit_tid_op';
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['identifier'] = 'field_ef_unit_tid';
$handler->display->display_options['filters']['field_ef_unit_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_unit_tid']['vocabulary'] = 'ef_units';
$handler->display->display_options['path'] = 'admin/content';

$view->save();
$view = new view();
$view->name = 'ef_countries_jump_block';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'countries_country';
$view->human_name = 'Countries Jump Block';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '3600';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '3600';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'nothing';
$handler->display->display_options['style_options']['choose'] = '-Select a country-';
$handler->display->display_options['style_options']['inline'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<label class="ef-icon_country">Country</label>';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Field: Countries: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'countries/[name]';
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

/* Display: Countries Jump Block */
$handler = $view->new_display('block', 'Countries Jump Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'php_1';
$handler->display->display_options['style_options']['choose'] = '';
$handler->display->display_options['style_options']['default_value'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Translated label */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Translated label';
$handler->display->display_options['header']['php']['php_output'] = '<?php global $language; ?>

<?php if ($language->language == \'bg\'): ?>
	<label for="edit-jump"><?php print t(\'Търсене по държави:\'); ?></label>
<?php elseif ($language->language == \'cs\'): ?>
	<label for="edit-jump"><?php print t(\'Procházet stránky o zemlji:\'); ?></label>
<?php elseif ($language->language == \'da\'): ?>
	<label for="edit-jump"><?php print t(\'Browse landesider:\'); ?></label>
<?php elseif ($language->language == \'de\'): ?>
	<label for="edit-jump"><?php print t(\'Länderseiten durchsuchen:\'); ?></label>
<?php elseif ($language->language == \'el\'): ?>
	<label for="edit-jump"><?php print t(\'Φυλλομέτρηση σελίδων χωρών:\'); ?></label>
<?php elseif ($language->language == \'en\'): ?>
	<label for="edit-jump"><?php print t(\'Browse country pages:\'); ?></label>
<?php elseif ($language->language == \'es\'): ?>
	<label for="edit-jump"><?php print t(\'Buscar páginas por país:\'); ?></label>
<?php elseif ($language->language == \'et\'): ?>
	<label for="edit-jump"><?php print t(\'Sirvige riikide lehekülgi:\'); ?></label>
<?php elseif ($language->language == \'fi\'): ?>
	<label for="edit-jump"><?php print t(\'Selaa maita koskevia sivuja:\'); ?></label>
<?php elseif ($language->language == \'fr\'): ?>
	<label for="edit-jump"><?php print t(\'Parcourir par pages nationales:\'); ?></label>
<?php elseif ($language->language == \'ga\'): ?>
	<label for="edit-jump"><?php print t(\'Brabhsáil leathnaigh na dtíortha:\'); ?></label>
<?php elseif ($language->language == \'hr\'): ?>
	<label for="edit-jump"><?php print t(\'Pregledaj stranice o pojedinoj zemlji:\'); ?></label>
<?php elseif ($language->language == \'hu\'): ?>
	<label for="edit-jump"><?php print t(\'Országoldalak böngészése:\'); ?></label>
<?php elseif ($language->language == \'is\'): ?>
	<label for="edit-jump"><?php print t(\'Browse by theme:\'); ?></label>
<?php elseif ($language->language == \'it\'): ?>
	<label for="edit-jump"><?php print t(\'Sfoglia le pagine per paese:\'); ?></label>
<?php elseif ($language->language == \'lt\'): ?>
	<label for="edit-jump"><?php print t(\'Paieška šalies puslapiuose:\'); ?></label>
<?php elseif ($language->language == \'lv\'): ?>
	<label for="edit-jump"><?php print t(\'Pārlūkot valstu lappuses:\'); ?></label>
<?php elseif ($language->language == \'mk\'): ?>
	<label for="edit-jump"><?php print t(\'Browse by theme:\'); ?></label>
<?php elseif ($language->language == \'mt\'): ?>
	<label for="edit-jump"><?php print t(\'Ibbrawżja l-paġni tal-pajjiżi: \'); ?></label>
<?php elseif ($language->language == \'nl\'): ?>
	<label for="edit-jump"><?php print t("Landenpagina\'s doorbladeren:"); ?></label>
<?php elseif ($language->language == \'pl\'): ?>
	<label for="edit-jump"><?php print t(\'Przeglądaj strony o krajach:\'); ?></label>
<?php elseif ($language->language == \'pt\'): ?>
	<label for="edit-jump"><?php print t(\'Navegar nas páginas dos países:\'); ?></label>
<?php elseif ($language->language == \'ro\'): ?>
	<label for="edit-jump"><?php print t(\'Răsfoire pagini naționale:\'); ?></label>
<?php elseif ($language->language == \'sk\'): ?>
	<label for="edit-jump"><?php print t(\'Prehľadávať stránky o krajine:\'); ?></label>
<?php elseif ($language->language == \'sl\'): ?>
	<label for="edit-jump"><?php print t(\'Brskaj po straneh držav:\'); ?></label>
<?php elseif ($language->language == \'sq\'): ?>
	<label for="edit-jump"><?php print t(\'Browse by theme:\'); ?></label>
<?php elseif ($language->language == \'sr\'): ?>
	<label for="edit-jump"><?php print t(\'Browse by theme:\'); ?></label>
<?php elseif ($language->language == \'sv\'): ?>
	<label for="edit-jump"><?php print t(\'Sök landsspecifika sidor:\'); ?></label>
<?php elseif ($language->language == \'tr\'): ?>
	<label for="edit-jump"><?php print t(\'Browse by theme:\'); ?></label>
<?php endif; ?>
';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Countries: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Translated Country name */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Translated Country name';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
print t($row->name);
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$path = \'/country/\' . strtolower(str_replace(" ","-",$row->name));
print $path;
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Country: EU Member (field_ef_eu_member) */
$handler->display->display_options['filters']['field_ef_eu_member_value']['id'] = 'field_ef_eu_member_value';
$handler->display->display_options['filters']['field_ef_eu_member_value']['table'] = 'field_data_field_ef_eu_member';
$handler->display->display_options['filters']['field_ef_eu_member_value']['field'] = 'field_ef_eu_member_value';
$handler->display->display_options['filters']['field_ef_eu_member_value']['value'] = array(
  1 => '1',
);
/* Filter criterion: Remove some options */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['ui_name'] = 'Remove some options';
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = 'if( $row->name == \'EU Level\' || $row->name == \'EU Member States\'){
  return TRUE;
}';

/* Display: Country Browse by */
$handler = $view->new_display('block', 'Country Browse by', 'block_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Countries: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Countries: ISO2 */
$handler->display->display_options['fields']['iso2']['id'] = 'iso2';
$handler->display->display_options['fields']['iso2']['table'] = 'countries_country';
$handler->display->display_options['fields']['iso2']['field'] = 'iso2';
$handler->display->display_options['fields']['iso2']['label'] = '';
$handler->display->display_options['fields']['iso2']['exclude'] = TRUE;
$handler->display->display_options['fields']['iso2']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'observatories/eurwork/content?name_list[]=[iso2]';
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Country: EU Member (field_ef_eu_member) */
$handler->display->display_options['filters']['field_ef_eu_member_value']['id'] = 'field_ef_eu_member_value';
$handler->display->display_options['filters']['field_ef_eu_member_value']['table'] = 'field_data_field_ef_eu_member';
$handler->display->display_options['filters']['field_ef_eu_member_value']['field'] = 'field_ef_eu_member_value';
$handler->display->display_options['filters']['field_ef_eu_member_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['block_description'] = 'Country Browse By';

$view->save();
$view = new view();
$view->name = 'ef_eurwork_content';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'EurWORK content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'EurWORK content';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'field_ef_topic_tid' => array(
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
  'field_ef_sector_tid' => array(
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
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Content: Sector */
$handler->display->display_options['fields']['field_ef_sector']['id'] = 'field_ef_sector';
$handler->display->display_options['fields']['field_ef_sector']['table'] = 'field_data_field_ef_sector';
$handler->display->display_options['fields']['field_ef_sector']['field'] = 'field_ef_sector';
$handler->display->display_options['fields']['field_ef_sector']['hide_empty'] = TRUE;
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
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
  13188 => '13188',
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic';
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
);
$handler->display->display_options['filters']['field_ef_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_topic_tid']['vocabulary'] = 'ef_topics';
$handler->display->display_options['filters']['field_ef_topic_tid']['hierarchy'] = 1;
/* Filter criterion: Content: Sector (field_ef_sector) */
$handler->display->display_options['filters']['field_ef_sector_tid']['id'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['table'] = 'field_data_field_ef_sector';
$handler->display->display_options['filters']['field_ef_sector_tid']['field'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_sector_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['operator_id'] = 'field_ef_sector_tid_op';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['label'] = 'Sector';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['operator'] = 'field_ef_sector_tid_op';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['identifier'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_sector_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_sector_tid']['vocabulary'] = 'ef_sectors';
$handler->display->display_options['filters']['field_ef_sector_tid']['hierarchy'] = 1;
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list']['id'] = 'name_list';
$handler->display->display_options['filters']['name_list']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list']['relationship'] = 'field_ef_country_iso2';
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
);
$handler->display->display_options['filters']['name_list']['configuration'] = '1';
$handler->display->display_options['filters']['name_list']['filter'] = array(
  'enabled' => '1',
  'continents' => array(),
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'list-eurwork';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '5';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No results were found. Try a new approach please, press reset for it.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<table>';
$handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Name (selective) */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'countries_country';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['fields']['name']['ui_name'] = 'Name (selective)';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Display Country */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Display Country';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php  
$node = node_load($data->nid);

$type = $node->type;

if(($type == \'ef_report\') || ($type == \'ef_case_study\')){
  $ef_country = $node->field_ef_country[\'und\'][0][\'iso2\'];

  if(!empty($ef_country)){
    $sql = "SELECT DISTINCT c.name
      FROM field_data_field_ef_country t
      INNER JOIN countries_country c ON t.field_ef_country_iso2 = c.iso2
      WHERE c.iso2 =\'$ef_country\'";

    $result = db_query($sql)->fetchAll();
    $country = $result[0]->name;
  
  }
}elseif(($type == \'ef_comparative_analytical_report\') || ($type == \'ef_publication\')){
  $iso2 = $node->field_ef_eu_related_countries[\'und\'][0][\'iso2\'];
  if(!empty($iso2)){
    $sql = "SELECT DISTINCT c.name
    FROM field_data_field_ef_eu_related_countries t
    INNER JOIN countries_country c ON t.field_ef_eu_related_countries_iso2 = c.iso2
    WHERE t.field_ef_eu_related_countries_iso2 =\'$iso2\'";

    $result = db_query($sql)->fetchAll();
    $country = $result[0]->name;
  }
  
}


?> 
<?php if(isset($country)): ?>
<li class="list-country"><?php print $country; ?></li>
<?php endif; ?>
';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Display deliverable kind/type and date */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display deliverable kind/type and date';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
  
  $node = node_load($row->field_ef_observatory);

  //Content type
  $type = $node->type;

  // deliverable kinds
  $tid = $node->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);
  
  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    if($name == \'page\'){
        $name = \'Page\';
    }
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
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Topic (field_ef_topic) (selective) */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['ui_name'] = 'Topic (field_ef_topic) (selective)';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_topic']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Field: Display observatory */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['ui_name'] = 'Display observatory';
$handler->display->display_options['fields']['php_2']['label'] = '';
$handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php
global $base_url; 
$node = node_load($row->field_ef_observatory);
$tid = $node->field_ef_observatory[\'und\'][0][\'tid\'];
if($tid = 13188){
  $observatory = \'EurWORK\';
}else{
  $observatory = \'EMCC\';
}
$observatory_url = strtolower($observatory);
?>
<a href="<?php print $base_url . \'/observatories/\' . $observatory_url; ?>"><?php print $observatory; ?></a>';
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
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'field-ef-metadata';
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
  [php]
  [php_1]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Title/Body */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['ui_name'] = 'Title/Body';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Title/Body';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'Title/Body';
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
  'body' => 'body',
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
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topic';
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
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['label'] = 'Sector';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['operator'] = 'field_ef_sector_tid_op';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['identifier'] = 'field_ef_sector_tid';
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_sector_tid']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_ef_sector_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_sector_tid']['vocabulary'] = 'ef_sectors';
$handler->display->display_options['filters']['field_ef_sector_tid']['hierarchy'] = 1;
/* Filter criterion: Node: Published at */
$handler->display->display_options['filters']['published_at']['id'] = 'published_at';
$handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
$handler->display->display_options['filters']['published_at']['field'] = 'published_at';
$handler->display->display_options['filters']['published_at']['operator'] = '>=';
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
);
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['id'] = 'field_ef_observatory_tid_1';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['value'] = array(
  13188 => '13188',
);
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid_1']['vocabulary'] = 'ef_observatories';
$handler->display->display_options['path'] = 'observatories/eurwork/content';
$handler->display->display_options['menu']['title'] = 'EurWORK Content';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
$view = new view();
$view->name = 'ef_eurwork_landing_page_view_nodequeue';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'EurWORK Landing Page View Nodequeue';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'EurWORK Landing Page View Nodequeue';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'quicktabs';
$handler->display->display_options['style_options']['tab_style'] = 'Basic';
$handler->display->display_options['style_options']['tab_title_field'] = 'title_1';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_observatory' => 'field_ef_observatory',
);
$handler->display->display_options['row_options']['separator'] = '|';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Relationship: Nodequeue: Queue */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'eurwork_landing_page_nodequeue' => 'eurwork_landing_page_nodequeue',
  'emcc_landing_page_nodequeue' => 0,
);
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => '',
);
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
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
$handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
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
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_ef_topic] | [field_ef_observatory]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Document Type (field_ef_document_type) */
$handler->display->display_options['filters']['field_ef_document_type_tid']['id'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['table'] = 'field_data_field_ef_document_type';
$handler->display->display_options['filters']['field_ef_document_type_tid']['field'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator_id'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['label'] = 'Document Type (field_ef_document_type)';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['operator'] = 'field_ef_document_type_tid_op';
$handler->display->display_options['filters']['field_ef_document_type_tid']['expose']['identifier'] = 'field_ef_document_type_tid';
$handler->display->display_options['filters']['field_ef_document_type_tid']['vocabulary'] = 'ef_publication_types';

/* Display: EurWORK Landing Page Nodequeue Block */
$handler = $view->new_display('block', 'EurWORK Landing Page Nodequeue Block', 'block');
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

$view->save();
$view = new view();
$view->name = 'ef_home_page_media_nodequeue';
$view->description = 'Display a list of all nodes in queue \'Home Page Media\'';
$view->tag = 'nodequeue';
$view->base_table = 'node';
$view->human_name = 'Home Page Media Nodequeue';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Media';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Nodequeue: Queue */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'ef_home_page_media' => 'ef_home_page_media',
);
/* Field: Content: Images */
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['id'] = 'field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['table'] = 'field_data_field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['field'] = 'field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['label'] = '';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['settings'] = array(
  'image_style' => 'ef_photo_gallery_thumb',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['delta_offset'] = '0';
/* Field: Content: Videos */
$handler->display->display_options['fields']['field_ef_videos']['id'] = 'field_ef_videos';
$handler->display->display_options['fields']['field_ef_videos']['table'] = 'field_data_field_ef_videos';
$handler->display->display_options['fields']['field_ef_videos']['field'] = 'field_ef_videos';
$handler->display->display_options['fields']['field_ef_videos']['label'] = '';
$handler->display->display_options['fields']['field_ef_videos']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_videos']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_videos']['type'] = 'file_rendered';
$handler->display->display_options['fields']['field_ef_videos']['settings'] = array(
  'file_view_mode' => 'default',
);
$handler->display->display_options['fields']['field_ef_videos']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_ef_videos']['delta_offset'] = '0';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
/* Filter criterion: Content: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

/* Display: Home Page Media Nodequeue Pane */
$handler = $view->new_display('panel_pane', 'Home Page Media Nodequeue Pane', 'panel_pane_1');

$view->save();
$view = new view();
$view->name = 'ef_home_page_view_nodequeue';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Home Page View Nodequeue';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'quicktabs';
$handler->display->display_options['style_options']['tab_style'] = 'Basic';
$handler->display->display_options['style_options']['tab_title_field'] = 'title_1';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'created' => 'created',
  'type' => 'type',
);
$handler->display->display_options['row_options']['separator'] = '|';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Relationship: Nodequeue: Queue */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'ef_home_page_nodequeue' => 'ef_home_page_nodequeue',
  'emcc_landing_page_nodequeue' => 0,
  'eurwork_landing_page_nodequeue' => 0,
);
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'pdf-thumbnail-wrapper';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'ef_featured_thumbnail',
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
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'ef_featured_thumbnail',
  'image_link' => 'content',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['max_length'] = '30';
$handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
$handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'ef_date_format';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Home Page Nodequeue Pane */
$handler = $view->new_display('panel_pane', 'Home Page Nodequeue Pane', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'quicktabs';
$handler->display->display_options['style_options']['tab_style'] = 'Basic';
$handler->display->display_options['style_options']['tab_title_field'] = 'title_1';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'created' => 'created',
  'type' => 'type',
);
$handler->display->display_options['row_options']['separator'] = '|';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_document']['element_wrapper_class'] = 'pdf-thumbnail-wrapper';
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'home_publications_block',
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
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_class'] = 'non-publication-nodequeue';
$handler->display->display_options['fields']['field_ef_main_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'ef_featured_thumbnail',
  'image_link' => 'content',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['link_class'] = 'highlighted-element-featured';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'margin-after ';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['max_length'] = '30';
$handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['html'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
$handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'ef_date_format';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
    $node = node_load($row->field_ef_document);
    
    switch ($node->type) {
        case \'ef_event\': 
                 $source = image_style_url(\'event-nodequeue-panel\', $node->field_image[\'und\'][0][\'uri\']);
                 break;
        
        default:
        
            if (isset($node->field_overwrite_thumbnail["und"][0]["value"]) && $node->field_overwrite_thumbnail["und"][0]["value"] == 1) {
                $source = image_style_url(\'home_publications_block\', $node->field_ef_main_image[\'und\'][0][\'uri\']);
            } else {
                if($node->field_ef_document[\'en\'][0]){
                    $source = image_style_url(\'home_publications_block\', _pdfpreview_create_preview($node->field_ef_document[\'en\'][0]));
                }else{
                    $source = image_style_url(\'home_publications_block\', $node->field_ef_main_image[\'und\'][0][\'uri\']);
                }
            }                

         break;
    }
    
    if ($node->type != \'ef_publication\') {
      print "<a href=\'node/" . $node->nid . "\'><img src=\'" .  $source . "\' width=\'438\' height=\'319\'></a>";
    } else {
        print "<div class=\'pdfpreview\'><a href=\'node/" . $node->nid . "\'><img src=\'" .  $source . "\'></a></div>";
    }
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Videos */
$handler->display->display_options['fields']['field_ef_videos']['id'] = 'field_ef_videos';
$handler->display->display_options['fields']['field_ef_videos']['table'] = 'field_data_field_ef_videos';
$handler->display->display_options['fields']['field_ef_videos']['field'] = 'field_ef_videos';
$handler->display->display_options['fields']['field_ef_videos']['label'] = '';
$handler->display->display_options['fields']['field_ef_videos']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_videos']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_videos']['type'] = 'file_rendered';
$handler->display->display_options['fields']['field_ef_videos']['settings'] = array(
  'file_view_mode' => 'default',
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_videos']['delta_offset'] = '0';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>[php]</div>
<h2>[title]</h2>
<ul class="metadata-items">
<li>[type]</li>
<li>[published_at]</li>
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'nodequeue-panel';
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;

$view->save();
$view = new view();
$view->name = 'ef_latest_content';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Latest Content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Latest Content';
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
$handler->display->display_options['row_options']['inline'] = array(
  'type' => 'type',
  'field_ef_theme' => 'field_ef_theme',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
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
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
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
  'ef_spotlight_entry' => 'ef_spotlight_entry',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'node';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = '1';
$handler->display->display_options['filters']['status_1']['group'] = 2;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'ef_news' => 'ef_news',
);
$handler->display->display_options['filters']['type_1']['group'] = 2;
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['operator'] = 'empty';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 2;
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['class'] = 'latest-news-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'type' => 'type',
  'field_ef_theme' => 'field_ef_theme',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
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
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->node_type == \'blog\' || $data->node_type == \'presentation\')
  $author = $data->field_field_ef_publ_contributors[0][\'rendered\'][\'#title\'];

if(isset($author)){
  print \'<li>\' . $author . \'</li>\';
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<ul class="metadata-items">
<li>[type]</li>
<li>[published_at]</li>
[php]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
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
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
  3 => 'AND',
  4 => 'AND',
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
  'blog' => 'blog',
  'presentation' => 'presentation',
  'ef_publication' => 'ef_publication',
  'ef_spotlight_entry' => 'ef_spotlight_entry',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'node';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = '1';
$handler->display->display_options['filters']['status_1']['group'] = 2;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'ef_news' => 'ef_news',
);
$handler->display->display_options['filters']['type_1']['group'] = 2;
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['operator'] = 'empty';
$handler->display->display_options['filters']['field_ef_observatory_tid']['group'] = 2;
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_2']['id'] = 'type_2';
$handler->display->display_options['filters']['type_2']['table'] = 'node';
$handler->display->display_options['filters']['type_2']['field'] = 'type';
$handler->display->display_options['filters']['type_2']['value'] = array(
  'blog' => 'blog',
);
$handler->display->display_options['filters']['type_2']['group'] = 3;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_3']['id'] = 'type_3';
$handler->display->display_options['filters']['type_3']['table'] = 'node';
$handler->display->display_options['filters']['type_3']['field'] = 'type';
$handler->display->display_options['filters']['type_3']['value'] = array(
  'presentation' => 'presentation',
);
$handler->display->display_options['filters']['type_3']['group'] = 4;
$handler->display->display_options['path'] = 'latest-content';

$view->save();
$view = new view();
$view->name = 'ef_latest_eurwork_articles';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Latest EurWORK Articles';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Latest articles';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'type' => 'type',
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_country' => 'field_ef_country',
);
$handler->display->display_options['row_options']['separator'] = '|';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
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
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_theme']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
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
  'ef_report' => 'ef_report',
  'ef_news' => 'ef_news',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
  13188 => '13188',
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatory (field_ef_observatory)';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'field_ef_observatory_tid';
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
$handler->display->display_options['filters']['field_ef_observatory_tid']['hierarchy'] = 1;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['current']['id'] = 'current';
$handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['current']['field'] = 'current';
/* Filter criterion: Workbench Moderation: Published */
$handler->display->display_options['filters']['published']['id'] = 'published';
$handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['published']['field'] = 'published';

/* Display: Latest Articles */
$handler = $view->new_display('panel_pane', 'Latest Articles', 'panel_pane_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['type']['element_wrapper_class'] = 'ef-field-metadata';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_theme']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Content: Country */
$handler->display->display_options['fields']['field_ef_country']['id'] = 'field_ef_country';
$handler->display->display_options['fields']['field_ef_country']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['fields']['field_ef_country']['field'] = 'field_ef_country';
$handler->display->display_options['fields']['field_ef_country']['label'] = '';
$handler->display->display_options['fields']['field_ef_country']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_country']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_country']['alter']['text'] = '<li class="list-country">[field_ef_country]</li>';
$handler->display->display_options['fields']['field_ef_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_country']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_ef_country']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_country']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Deliverable kind php rewrite */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Deliverable kind php rewrite';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
  
  $node = node_load($data->nid);
    
  // deliverable kinds
  $tid = $node->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);
  $name = $term->name;

  if($tid == 13742 || $tid == 13743){
  	$name = \'Research in Focus\';
  }

  print $name;
  
?>
';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Deliverable kind */
$handler->display->display_options['fields']['field_ef_deliverable_kind']['id'] = 'field_ef_deliverable_kind';
$handler->display->display_options['fields']['field_ef_deliverable_kind']['table'] = 'field_data_field_ef_deliverable_kind';
$handler->display->display_options['fields']['field_ef_deliverable_kind']['field'] = 'field_ef_deliverable_kind';
$handler->display->display_options['fields']['field_ef_deliverable_kind']['label'] = '';
$handler->display->display_options['fields']['field_ef_deliverable_kind']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_deliverable_kind']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_deliverable_kind']['alter']['text'] = '<li class="list-delib-kind">[php]</li>';
$handler->display->display_options['fields']['field_ef_deliverable_kind']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_deliverable_kind']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_ef_deliverable_kind']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_deliverable_kind']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_deliverable_kind']['settings'] = array(
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
$handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['published_at']['alter']['text'] = '<li class="list-pub-date">[published_at]</li>';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['published_at']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: DISPLAY metadata */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'DISPLAY metadata';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="metadata-items inline-list">
  [field_ef_country]
  [field_ef_deliverable_kind]
  [published_at]
</ul>
';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
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
  'ef_report' => 'ef_report',
  'ef_news' => 'ef_news',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Observatory (field_ef_observatory) */
$handler->display->display_options['filters']['field_ef_observatory_tid']['id'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['filters']['field_ef_observatory_tid']['field'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['value'] = array(
  13188 => '13188',
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator_id'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatory (field_ef_observatory)';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'field_ef_observatory_tid';
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
$handler->display->display_options['filters']['field_ef_observatory_tid']['hierarchy'] = 1;
/* Filter criterion: Workbench Moderation: Published */
$handler->display->display_options['filters']['published']['id'] = 'published';
$handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['published']['field'] = 'published';
$handler->display->display_options['filters']['published']['value'] = '1';

$view->save();
$view = new view();
$view->name = 'ef_latest_for_country';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Latest for country';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Latest Publication for Country';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_topic' => 'field_ef_topic',
);
$handler->display->display_options['row_options']['separator'] = '|';
/* Relationship: Field: Country (field_ef_eu_related_countries) */
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['id'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['table'] = 'field_data_field_ef_eu_related_countries';
$handler->display->display_options['relationships']['field_ef_eu_related_countries_iso2']['field'] = 'field_ef_eu_related_countries_iso2';
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_class'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
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
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_publication_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['element_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['element_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
/* Contextual filter: Countries: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'countries_country';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'field_ef_eu_related_countries_iso2';
$handler->display->display_options['arguments']['name']['default_action'] = 'empty';
$handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['title'] = 'Latest for %1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['limit'] = '0';
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

/* Display: Latest Publications for Country */
$handler = $view->new_display('panel_pane', 'Latest Publications for Country', 'latest_country_publications');
$handler->display->display_options['display_description'] = 'Publications';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_class'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
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
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_publication_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
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
$handler->display->display_options['fields']['field_ef_topic']['element_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
$handler->display->display_options['pane_title'] = 'Latest Publications for Country';
$handler->display->display_options['argument_input'] = array(
  'name' => array(
    'type' => 'panel',
    'context' => 'entity:comment.author',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Countries: Name',
  ),
);

/* Display: Latest Articles for Country */
$handler = $view->new_display('panel_pane', 'Latest Articles for Country', 'latest_country_ef_articles_and_others');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest Articles for Country';
$handler->display->display_options['display_description'] = 'Articles and National contributions';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Document */
$handler->display->display_options['fields']['field_ef_document']['id'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['table'] = 'field_data_field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['field'] = 'field_ef_document';
$handler->display->display_options['fields']['field_ef_document']['label'] = '';
$handler->display->display_options['fields']['field_ef_document']['element_class'] = 'has-ef-image';
$handler->display->display_options['fields']['field_ef_document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_document']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_document']['type'] = 'pdfpreview';
$handler->display->display_options['fields']['field_ef_document']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
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
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_publication_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
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
$handler->display->display_options['fields']['field_ef_topic']['element_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Countries: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'countries_country';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['arguments']['name']['default_action'] = 'empty';
$handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['title'] = 'Latest for %1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['limit'] = '0';
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
  'ef_report' => 'ef_report',
  'ef_national_contribution' => 'ef_national_contribution',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['pane_title'] = 'Latest Articles for Country';
$handler->display->display_options['argument_input'] = array(
  'name' => array(
    'type' => 'panel',
    'context' => 'entity:comment.author',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Countries: Name',
  ),
);

$view->save();
$view = new view();
$view->name = 'ef_latest_related_content_on_theme';
$view->description = '';
$view->tag = 'latest content themes';
$view->base_table = 'node';
$view->human_name = 'Latest content on theme(s)';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Latest content on theme(s)';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'created' => 'created',
  'type' => 'type',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
  'ef_themes' => 'ef_themes',
);
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
$handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
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
  'page' => 'page',
  'ef_comparative_analytical_report' => 'ef_comparative_analytical_report',
  'ef_report' => 'ef_report',
  'ef_event' => 'ef_event',
  'ef_factsheet' => 'ef_factsheet',
  'ef_national_contribution' => 'ef_national_contribution',
  'ef_news' => 'ef_news',
  'ef_photo_gallery' => 'ef_photo_gallery',
  'ef_project' => 'ef_project',
  'ef_publication' => 'ef_publication',
  'ef_spotlight_entry' => 'ef_spotlight_entry',
  'ef_video' => 'ef_video',
);

/* Display: Latest content on theme(s) (Block) */
$handler = $view->new_display('block', 'Latest content on theme(s) (Block)', 'latest_content_on_theme');
$handler->display->display_options['display_description'] = 'Latest content based on current node\'s theme(s). Displays 5 items.';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Entity translation: Title: translated */
$handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
$handler->display->display_options['fields']['title_field_et']['label'] = '';
$handler->display->display_options['fields']['title_field_et']['element_label_class'] = 'views-field-title';
$handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_field_et']['element_wrapper_class'] = 'views-field-title';
$handler->display->display_options['fields']['title_field_et']['type'] = 'title_linked';
$handler->display->display_options['fields']['title_field_et']['settings'] = array(
  'title_style' => 'div',
  'title_link' => 'content',
  'title_class' => 'views-field-title',
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
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
/* Contextual filter: Content: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['tid']['title'] = 'Latest content on \'%2\'';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
  'ef_themes' => 'ef_themes',
);
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
$handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'type' => 'type',
  'field_ef_topic' => 'field_ef_topic',
);
$handler->display->display_options['row_options']['separator'] = '|';
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
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = '';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_publication_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_value'] = '$query = db_select(\'workbench_moderation_node_history\', \'h\');
  $query->fields(\'h\', array(\'stamp\'));
  $query->condition(\'h.nid\', $row->nid, \'=\');
  $query->condition(\'h.state\', \'published\', \'=\');
  $query->orderBy(\'h.stamp\', \'DESC\');
  $last_revision = $query->execute()->fetchObject();
  if (!empty($last_revision)) {
    return $last_revision->stamp;
  }  elseif (!empty($row->field_ef_publication_date)) {
     return $row->field_ef_publication_date;
   } else {
  return $row->changed;
}';
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
print $row->php == 0 ? \'\' : format_date($row->php, \'ef_date_format\');
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['type']['element_wrapper_class'] = 'ef-field-metadata';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_topic']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
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
$handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['tid']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
  'ef_themes' => 'ef_themes',
);
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  'ef_themes' => 'ef_themes',
);
$handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
$handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
$handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
$handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
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
  'page' => 'page',
  'ef_case_study' => 'ef_case_study',
  'ef_comparative_analytical_report' => 'ef_comparative_analytical_report',
  'ef_report' => 'ef_report',
  'ef_event' => 'ef_event',
  'ef_factsheet' => 'ef_factsheet',
  'ef_ic_quarterly_report' => 'ef_ic_quarterly_report',
  'ef_ir_dictionary' => 'ef_ir_dictionary',
  'ef_input_to_erm' => 'ef_input_to_erm',
  'ef_national_contribution' => 'ef_national_contribution',
  'ef_news' => 'ef_news',
  'ef_photo_gallery' => 'ef_photo_gallery',
  'ef_project' => 'ef_project',
  'ef_publication' => 'ef_publication',
  'ef_quarterly_report' => 'ef_quarterly_report',
  'ef_regulation' => 'ef_regulation',
  'ef_restructuring_in_smes' => 'ef_restructuring_in_smes',
  'ef_spotlight_entry' => 'ef_spotlight_entry',
  'ef_support_instrument' => 'ef_support_instrument',
  'ef_video' => 'ef_video',
);
$handler->display->display_options['argument_input'] = array(
  'tid' => array(
    'type' => 'panel',
    'context' => 'entity:comment.author',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Has taxonomy term ID',
  ),
);

$view->save();
$view = new view();
$view->name = 'ef_publication_contributors';
$view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'EF Publication contributors';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Publication contributors';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
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
  'image_link' => 'content',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
/* Contextual filter: Content: Has taxonomy term ID depth modifier */
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
/* Filter criterion: Content: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

/* Display: EF Publication contributors */
$handler = $view->new_display('page', 'EF Publication contributors', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'has-ef-image';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'type' => 'type',
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_observatory' => 'field_ef_observatory',
  'field_ef_topic' => 'field_ef_topic',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['defaults']['row_options'] = FALSE;
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
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_ef_publication_date']['id'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['table'] = 'field_data_field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['field'] = 'field_ef_publication_date';
$handler->display->display_options['fields']['field_ef_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_publication_date']['element_label_colon'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['label'] = '';
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
$handler->display->display_options['path'] = 'taxonomy/term/%';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 15;
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);

$view->save();
$view = new view();
$view->name = 'ef_sectors';
$view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'EF Sectors';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Sectors';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
$handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
/* Contextual filter: Content: Has taxonomy term ID depth modifier */
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
/* Filter criterion: Content: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

/* Display: EF Sectors */
$handler = $view->new_display('page', 'EF Sectors', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'type' => 'type',
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_observatory' => 'field_ef_observatory',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
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
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
$handler->display->display_options['path'] = 'taxonomy/term/%';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 15;
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);

$view->save();
$view = new view();
$view->name = 'ef_themes_jump_block';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Topic Jump Block';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '3600';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '3600';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'nothing';
$handler->display->display_options['style_options']['label'] = 'Find info by theme:';
$handler->display->display_options['style_options']['default_value'] = TRUE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['text'] = 'taxonomy/term/[tid]';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_1']['convert_spaces'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '/ef-themes/[name_1]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_themes' => 'ef_themes',
);

/* Display: Topic Jump Block */
$handler = $view->new_display('block', 'Topic Jump Block', 'block');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'php';
$handler->display->display_options['style_options']['choose'] = '';
$handler->display->display_options['style_options']['default_value'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Translated label */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Translated label';
$handler->display->display_options['header']['php']['php_output'] = '<label for="edit-jump"><?php print t(\'Browse by topic:\'); ?></label>
';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '/topic/[name]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['label'] = '';
$handler->display->display_options['fields']['name_field_et']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_field_et']['settings'] = array(
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
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
   $tid = $data->tid;
   $term = taxonomy_term_load($tid);
   echo \'/taxonomy/term/\' . $tid;
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_topics' => 'ef_topics',
);

$view->save();
$view = new view();
$view->name = 'ef_view_emcc_landing_page_view_nodequeue';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'EMCC Landing Page View Nodequeue';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'EMCC Landing Page View Nodequeue';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'quicktabs';
$handler->display->display_options['style_options']['tab_style'] = 'Basic';
$handler->display->display_options['style_options']['tab_title_field'] = 'title_1';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_theme' => 'field_ef_theme',
  'field_ef_observatory' => 'field_ef_observatory',
);
$handler->display->display_options['row_options']['separator'] = '|';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Relationship: Nodequeue: Queue */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'emcc_landing_page_nodequeue' => 'emcc_landing_page_nodequeue',
);
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
  'tag' => 'span',
);
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'medium',
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
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
$handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_ef_theme] | [field_ef_observatory]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: EMCC Landing Page Nodequeue Block */
$handler = $view->new_display('block', 'EMCC Landing Page Nodequeue Block', 'block');
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
  'image_style' => 'medium',
  'image_link' => '',
  'show_description' => 0,
  'tag' => 'span',
);
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'medium',
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
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'margin-after';
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
$handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
/* Field: Content: Theme */
$handler->display->display_options['fields']['field_ef_theme']['id'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['table'] = 'field_data_field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['field'] = 'field_ef_theme';
$handler->display->display_options['fields']['field_ef_theme']['label'] = '';
$handler->display->display_options['fields']['field_ef_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_theme']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_theme']['delta_offset'] = '0';
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_ef_topic']['id'] = 'field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['fields']['field_ef_topic']['field'] = 'field_ef_topic';
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
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'ef-field-metadata';
$handler->display->display_options['fields']['field_ef_observatory']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_ef_topic] | [field_ef_observatory]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

$view->save();
$view = new view();
$view->name = 'emire_dictionary';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Emire Dictionary';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Emire Dictionary';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
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
);
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'The EMIRE database is the online version of the European Employment and Industrial Relations Glossaries, which explain the national industrial relations systems of the EU member states through their terminology. These national industrial relations glossaries were compiled between 1991 and 2003. The definitions are still helpful in understanding the different national industrial relations systems but are not updated to reflect recent developments.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Relationship: Content: Country (field_ef_country) */
$handler->display->display_options['relationships']['field_ef_country_iso2']['id'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['table'] = 'field_data_field_ef_country';
$handler->display->display_options['relationships']['field_ef_country_iso2']['field'] = 'field_ef_country_iso2';
$handler->display->display_options['relationships']['field_ef_country_iso2']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Contextual filter: Content: Title */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'summary';
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
$handler->display->display_options['arguments']['title']['summary_options']['separator'] = '|';
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
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
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
  'ef_emire_dictionary' => 'ef_emire_dictionary',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list_2']['id'] = 'name_list_2';
$handler->display->display_options['filters']['name_list_2']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list_2']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list_2']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['filters']['name_list_2']['value'] = array(
  'all' => 'all',
  'AT' => 'AT',
  'BE' => 'BE',
  'BG' => 'BG',
  'HR' => 'HR',
  'CY' => 'CY',
  'CZ' => 'CZ',
  'DK' => 'DK',
  'EE' => 'EE',
  'EU' => 'EU',
  'EM' => 'EM',
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
  'NO' => 'NO',
  'PL' => 'PL',
  'PT' => 'PT',
  'RO' => 'RO',
  'SK' => 'SK',
  'SI' => 'SI',
  'ES' => 'ES',
  'SE' => 'SE',
  'GB' => 'GB',
);
$handler->display->display_options['filters']['name_list_2']['group'] = 2;
$handler->display->display_options['filters']['name_list_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list_2']['expose']['operator_id'] = 'name_list_2_op';
$handler->display->display_options['filters']['name_list_2']['expose']['label'] = 'Country :';
$handler->display->display_options['filters']['name_list_2']['expose']['operator'] = 'name_list_2_op';
$handler->display->display_options['filters']['name_list_2']['expose']['identifier'] = 'name_list_2';
$handler->display->display_options['filters']['name_list_2']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Title (title_field) */
$handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
$handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
$handler->display->display_options['filters']['title_field_value']['group'] = 2;
$handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
$handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title (title_field)';
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
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
  'ef_emire_dictionary' => 'ef_emire_dictionary',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Countries: Name - list */
$handler->display->display_options['filters']['name_list_2']['id'] = 'name_list_2';
$handler->display->display_options['filters']['name_list_2']['table'] = 'countries_country';
$handler->display->display_options['filters']['name_list_2']['field'] = 'name_list';
$handler->display->display_options['filters']['name_list_2']['relationship'] = 'field_ef_country_iso2';
$handler->display->display_options['filters']['name_list_2']['value'] = array(
  'AT' => 'AT',
  'BE' => 'BE',
  'BG' => 'BG',
  'HR' => 'HR',
  'CY' => 'CY',
  'CZ' => 'CZ',
  'DK' => 'DK',
  'EE' => 'EE',
  'EU' => 'EU',
  'EM' => 'EM',
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
  'NO' => 'NO',
  'PL' => 'PL',
  'PT' => 'PT',
  'RO' => 'RO',
  'SK' => 'SK',
  'SI' => 'SI',
  'ES' => 'ES',
  'SE' => 'SE',
  'GB' => 'GB',
);
$handler->display->display_options['filters']['name_list_2']['group'] = 1;
$handler->display->display_options['filters']['name_list_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_list_2']['expose']['operator_id'] = 'name_list_2_op';
$handler->display->display_options['filters']['name_list_2']['expose']['label'] = 'Country :';
$handler->display->display_options['filters']['name_list_2']['expose']['operator'] = 'name_list_2_op';
$handler->display->display_options['filters']['name_list_2']['expose']['identifier'] = 'name_list_2';
$handler->display->display_options['filters']['name_list_2']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['name_list_2']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Title (title_field) */
$handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
$handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
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
);
$handler->display->display_options['path'] = 'emire-dictionary';

$view->save();
$view = new view();
$view->name = 'most_popular_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'MOST POPULAR';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Most Popular';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
/* Sort criterion: Content statistics: Total views */
$handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
$handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
$handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
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

$view->save();
$view = new view();
$view->name = 'my_recent_content';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'My recent content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My recent content';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'status' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'created' => array(
    'bef_format' => 'bef_datepicker',
    'more_options' => array(
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'type' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = 'Content Type';
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = 'Status';
$handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
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
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
$handler->display->display_options['filters']['uid_current']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);
/* Filter criterion: Content: Post date */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'node';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['operator'] = 'between';
$handler->display->display_options['filters']['created']['group'] = 1;
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['label'] = 'Post date is between';
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
$handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  5 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'my-recent-content';

$view->save();
$view = new view();
$view->name = 'related_content_rev';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node_revision';
$view->human_name = 'Related content field rev';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Related content';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Node';
$handler->display->display_options['relationships']['nid']['label'] = 'Node';
/* Field: Field (historical data): Related Content */
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['id'] = 'field_ef_related_content-revision_id';
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['table'] = 'field_revision_field_ef_related_content';
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['field'] = 'field_ef_related_content-revision_id';
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['label'] = '';
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['settings'] = array(
  'link' => 1,
);
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_ef_related_content-revision_id']['delta_offset'] = '0';
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['relationship'] = 'nid';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content revision: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'node_revision';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  1 => '1',
);
/* Filter criterion: Field: Related Content (field_ef_related_content) */
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['id'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator_id'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['label'] = 'Related Content ';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['identifier'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['remember_roles'] = array(
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

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'related_content_field_rev_block');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Node';
$handler->display->display_options['relationships']['nid']['label'] = 'Node';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['id'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['relationship'] = 'nid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_field']['id'] = 'title_field';
$handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field']['field'] = 'title_field';
$handler->display->display_options['fields']['title_field']['relationship'] = 'field_ef_related_content_target_id';
$handler->display->display_options['fields']['title_field']['label'] = '';
$handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_field']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
$handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
/* Field: Field: Related Content (field_ef_related_content:delta) */
$handler->display->display_options['fields']['delta']['id'] = 'delta';
$handler->display->display_options['fields']['delta']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['fields']['delta']['field'] = 'delta';
$handler->display->display_options['fields']['delta']['relationship'] = 'nid';
$handler->display->display_options['fields']['delta']['label'] = '';
$handler->display->display_options['fields']['delta']['exclude'] = TRUE;
$handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delta']['separator'] = '';
/* Field: Countries */
$handler->display->display_options['fields']['php_4']['id'] = 'php_4';
$handler->display->display_options['fields']['php_4']['table'] = 'views';
$handler->display->display_options['fields']['php_4']['field'] = 'php';
$handler->display->display_options['fields']['php_4']['ui_name'] = 'Countries';
$handler->display->display_options['fields']['php_4']['label'] = '';
$handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_4']['php_output'] = '<?php 
  
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  $array = array(\'ef_restructuring_in_smes\',\'ef_report\',\'ef_case_study\',\'ef_emire_dictionary\',\'ef_event\',\'ef_news\',\'ef_regulation\',\'ef_national_contribution\');
  
  //Country 
  

  if(($related->type == \'ef_comparative_analytical_report\') || $related->type == \'ef_publication\'){
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];
   
    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_eu_related_countries\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_ef_eu_related_countries_iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();


    
    $country = $sql->execute()->fetchAll();  

    
  }
  elseif (($related->type == \'ef_ic_quarterly_report\') || ($related->type == \'ef_network_quarterly_report\')) {
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];

    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_quarter_report_country\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_data_field_ef_quarter_report_country.iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();
    
    $country = $sql->execute()->fetchAll(); 
  }
  
  elseif (in_array($related->type,$array)){
  
    $iso2 = $related->field_ef_country;
  
    $variable = $iso2[\'und\'][0][\'iso2\'];
    
    $sql = db_select(\'node\',\'n\');
    $sql->join(\'field_data_field_ef_country\',\'c\',\'c.entity_id = n.nid\');
    $sql->join(\'countries_country\',\'cc\',\'c.field_ef_country_iso2 = cc.iso2\');
    $sql->fields(\'cc\',array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\',$variable,\'=\');
    $sql->distinct();

    $country = $sql->execute()->fetchAll(); 
    
  }  
 

?>
<?php if(!empty($country)): ?>
  <li class="list-country"><?php print $country[0]->name; ?></li>
<?php endif; ?>';
$handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
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
 
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);

  //Content type
  $type = $related->type;

  // deliverable kinds
  $tid = $related->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);

  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    if($name == \'page\'){
      $name = \'Page\';
    }
    $name = str_replace("ef_","EF ",$name);
    $name = str_replace("_"," ",$name);
  }

  if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
    $name = \'Research in Focus\';
  }elseif($tid == 13744){
    $name = \'Comparative Analytical Report\';
  }elseif($tid == 13745){
    $name = \'Annual Update\';
  }elseif($tid == 13746){
    $name = \'Representativeness Study\';
  }
  // publication date
  $date_ts = $related->published_at;
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
/* Field: Display observatory */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display observatory';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = ' 


<?php
global $base_url; 
$node = node_load($row->field_ef_observatory);
$delta = $row->delta;
$related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);


$tid = $related->field_ef_observatory[\'und\'][0][\'tid\'];

$term = taxonomy_term_load($tid);
$observatory = $term->name;

$observatory_url = strtolower($observatory);
?>
<a href="<?php print $base_url . \'/observatories/\' . $observatory_url; ?>"><?php print $observatory; ?></a>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '<li class="list-observatory">[php_1]</li>';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'field-ef-metadata';
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
  [php_4]
  [php]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['relationship'] = 'field_ef_related_content_target_id';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
$handler->display->display_options['block_description'] = 'Related content field rev';

/* Display: Block Network Extranet Roles */
$handler = $view->new_display('block', 'Block Network Extranet Roles', 'related_content_field_network_extranet_roles');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  7 => '7',
  17 => '17',
  8 => '8',
);
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Node';
$handler->display->display_options['relationships']['nid']['label'] = 'Node';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['id'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['relationship'] = 'nid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Title */
$handler->display->display_options['fields']['php_3']['id'] = 'php_3';
$handler->display->display_options['fields']['php_3']['table'] = 'views';
$handler->display->display_options['fields']['php_3']['field'] = 'php';
$handler->display->display_options['fields']['php_3']['ui_name'] = 'Title';
$handler->display->display_options['fields']['php_3']['label'] = '';
$handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_3']['php_output'] = '<?php
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  
  $title = $related->title;
  $nid =  $related->nid;

?>
<a href="<?php print $base_url . \'/node/\' . $nid; ?>"><?php print $title; ?></a>';
$handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
/* Field: Field: Related Content (field_ef_related_content:delta) */
$handler->display->display_options['fields']['delta']['id'] = 'delta';
$handler->display->display_options['fields']['delta']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['fields']['delta']['field'] = 'delta';
$handler->display->display_options['fields']['delta']['relationship'] = 'nid';
$handler->display->display_options['fields']['delta']['label'] = '';
$handler->display->display_options['fields']['delta']['exclude'] = TRUE;
$handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delta']['separator'] = '';
/* Field: Countries */
$handler->display->display_options['fields']['php_4']['id'] = 'php_4';
$handler->display->display_options['fields']['php_4']['table'] = 'views';
$handler->display->display_options['fields']['php_4']['field'] = 'php';
$handler->display->display_options['fields']['php_4']['ui_name'] = 'Countries';
$handler->display->display_options['fields']['php_4']['label'] = '';
$handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_4']['php_output'] = '<?php 
  
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  $array = array(\'ef_restructuring_in_smes\',\'ef_report\',\'ef_case_study\',\'ef_emire_dictionary\',\'ef_event\',\'ef_news\',\'ef_regulation\',\'ef_national_contribution\');
  
  //Country 
  

  if(($related->type == \'ef_comparative_analytical_report\') || $related->type == \'ef_publication\'){
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];
   
    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_eu_related_countries\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_ef_eu_related_countries_iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();


    
    $country = $sql->execute()->fetchAll();  

    
  }
  elseif (($related->type == \'ef_ic_quarterly_report\') || ($related->type == \'ef_network_quarterly_report\')) {
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];

    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_quarter_report_country\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_data_field_ef_quarter_report_country.iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();
    
    $country = $sql->execute()->fetchAll(); 
  }
  
  elseif (in_array($related->type,$array)){
  
    $iso2 = $related->field_ef_country;
  
    $variable = $iso2[\'und\'][0][\'iso2\'];
    
    $sql = db_select(\'node\',\'n\');
    $sql->join(\'field_data_field_ef_country\',\'c\',\'c.entity_id = n.nid\');
    $sql->join(\'countries_country\',\'cc\',\'c.field_ef_country_iso2 = cc.iso2\');
    $sql->fields(\'cc\',array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\',$variable,\'=\');
    $sql->distinct();

    $country = $sql->execute()->fetchAll(); 
    
  }  
 

?>
<?php if(!empty($country)): ?>
  <li class="list-country"><?php print $country[0]->name; ?></li>
<?php endif; ?>';
$handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
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
 
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);

  //Content type
  $type = $related->type;

  // deliverable kinds
  $tid = $related->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);

  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    if($name == \'page\'){
      $name = \'Page\';
    }
    $name = str_replace("ef_","EF ",$name);
    $name = str_replace("_"," ",$name);
  }

  if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
    $name = \'Research in Focus\';
  }elseif($tid == 13744){
    $name = \'Comparative Analytical Report\';
  }elseif($tid == 13745){
    $name = \'Annual Update\';
  }elseif($tid == 13746){
    $name = \'Representativeness Study\';
  }
  // publication date
  $date_ts = $related->published_at;
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
/* Field: Display observatory */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display observatory';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '
 


<?php
global $base_url; 
$node = node_load($row->field_ef_observatory);
$delta = $row->delta;
$related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);


$tid = $related->field_ef_observatory[\'und\'][0][\'tid\'];

if($tid == 13188){
  $observatory = \'EurWORK\';
}else{
  $observatory = \'EMCC\';
}

$observatory_url = strtolower($observatory);
?>
<a href="<?php print $base_url . \'/observatories/\' . $observatory_url; ?>"><?php print $observatory; ?></a>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '<li class="list-observatory">[php_1]</li>';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'field-ef-metadata';
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
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[php_3]
<ul class="metadata-items inline-list">
  [php_4]
  [php]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['relationship'] = 'field_ef_related_content_target_id';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content revision: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'node_revision';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  1 => '1',
);
/* Filter criterion: Field: Related Content (field_ef_related_content) */
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['id'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator_id'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['label'] = 'Related Content ';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['identifier'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Finished (field_ef_finished_status) */
$handler->display->display_options['filters']['field_ef_finished_status_value']['id'] = 'field_ef_finished_status_value';
$handler->display->display_options['filters']['field_ef_finished_status_value']['table'] = 'field_data_field_ef_finished_status';
$handler->display->display_options['filters']['field_ef_finished_status_value']['field'] = 'field_ef_finished_status_value';
$handler->display->display_options['filters']['field_ef_finished_status_value']['relationship'] = 'field_ef_related_content_target_id';
$handler->display->display_options['filters']['field_ef_finished_status_value']['operator'] = 'and';
$handler->display->display_options['filters']['field_ef_finished_status_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['block_description'] = 'Related content field Network Extranet Roles';

/* Display: Block network extranet page */
$handler = $view->new_display('block', 'Block network extranet page', 'block_network_extranet_page');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  6 => '6',
  4 => '4',
  5 => '5',
  9 => '9',
  18 => '18',
);
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Node';
$handler->display->display_options['relationships']['nid']['label'] = 'Node';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['id'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['relationship'] = 'nid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Title */
$handler->display->display_options['fields']['php_3']['id'] = 'php_3';
$handler->display->display_options['fields']['php_3']['table'] = 'views';
$handler->display->display_options['fields']['php_3']['field'] = 'php';
$handler->display->display_options['fields']['php_3']['ui_name'] = 'Title';
$handler->display->display_options['fields']['php_3']['label'] = '';
$handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_3']['php_output'] = '<?php
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  
  $title = $related->title;
  $nid =  $related->nid;

?>
<a href="<?php print $base_url . \'/node/\' . $nid; ?>"><?php print $title; ?></a>';
$handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
/* Field: Field: Related Content (field_ef_related_content:delta) */
$handler->display->display_options['fields']['delta']['id'] = 'delta';
$handler->display->display_options['fields']['delta']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['fields']['delta']['field'] = 'delta';
$handler->display->display_options['fields']['delta']['relationship'] = 'nid';
$handler->display->display_options['fields']['delta']['label'] = '';
$handler->display->display_options['fields']['delta']['exclude'] = TRUE;
$handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delta']['separator'] = '';
/* Field: Countries */
$handler->display->display_options['fields']['php_4']['id'] = 'php_4';
$handler->display->display_options['fields']['php_4']['table'] = 'views';
$handler->display->display_options['fields']['php_4']['field'] = 'php';
$handler->display->display_options['fields']['php_4']['ui_name'] = 'Countries';
$handler->display->display_options['fields']['php_4']['label'] = '';
$handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_4']['php_output'] = '<?php 
  
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  $array = array(\'ef_restructuring_in_smes\',\'ef_report\',\'ef_case_study\',\'ef_emire_dictionary\',\'ef_event\',\'ef_news\',\'ef_regulation\',\'ef_national_contribution\');
  
  //Country 
  

  if(($related->type == \'ef_comparative_analytical_report\') || $related->type == \'ef_publication\'){
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];
   
    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_eu_related_countries\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_ef_eu_related_countries_iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();


    
    $country = $sql->execute()->fetchAll();  

    
  }
  elseif (($related->type == \'ef_ic_quarterly_report\') || ($related->type == \'ef_network_quarterly_report\')) {
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];

    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_quarter_report_country\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_data_field_ef_quarter_report_country.iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();
    
    $country = $sql->execute()->fetchAll(); 
  }
  
  elseif (in_array($related->type,$array)){
  
    $iso2 = $related->field_ef_country;
  
    $variable = $iso2[\'und\'][0][\'iso2\'];
    
    $sql = db_select(\'node\',\'n\');
    $sql->join(\'field_data_field_ef_country\',\'c\',\'c.entity_id = n.nid\');
    $sql->join(\'countries_country\',\'cc\',\'c.field_ef_country_iso2 = cc.iso2\');
    $sql->fields(\'cc\',array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\',$variable,\'=\');
    $sql->distinct();

    $country = $sql->execute()->fetchAll(); 
    
  }  
 

?>
<?php if(!empty($country)): ?>
  <li class="list-country"><?php print $country[0]->name; ?></li>
<?php endif; ?>';
$handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
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
 
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);

  //Content type
  $type = $related->type;

  // deliverable kinds
  $tid = $related->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);

  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    if($name == \'page\'){
      $name = \'Page\';
    }
    $name = str_replace("ef_","EF ",$name);
    $name = str_replace("_"," ",$name);
  }

  if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
    $name = \'Research in Focus\';
  }elseif($tid == 13744){
    $name = \'Comparative Analytical Report\';
  }elseif($tid == 13745){
    $name = \'Annual Update\';
  }elseif($tid == 13746){
    $name = \'Representativeness Study\';
  }
  // publication date
  $date_ts = $related->published_at;
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
/* Field: Display observatory */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display observatory';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '
 


<?php
global $base_url; 
$node = node_load($row->field_ef_observatory);
$delta = $row->delta;
$related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);


$tid = $related->field_ef_observatory[\'und\'][0][\'tid\'];

if($tid == 13188){
  $observatory = \'EurWORK\';
}else{
  $observatory = \'EMCC\';
}

$observatory_url = strtolower($observatory);
?>
<a href="<?php print $base_url . \'/observatories/\' . $observatory_url; ?>"><?php print $observatory; ?></a>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '<li class="list-observatory">[php_1]</li>';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'field-ef-metadata';
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
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[php_3]
<ul class="metadata-items inline-list">
  [php_4]
  [php]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['relationship'] = 'field_ef_related_content_target_id';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content revision: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'node_revision';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  1 => '1',
);
$handler->display->display_options['filters']['state']['group'] = 1;
/* Filter criterion: Field: Related Content (field_ef_related_content) */
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['id'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator_id'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['label'] = 'Related Content ';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['identifier'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['remember_roles'] = array(
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
$handler->display->display_options['block_description'] = 'Related content network extranet page';

/* Display: Block GBMember */
$handler = $view->new_display('block', 'Block GBMember', 'related_content_field_gbmember');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  15 => '15',
);
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Node';
$handler->display->display_options['relationships']['nid']['label'] = 'Node';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['id'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['relationship'] = 'nid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Title */
$handler->display->display_options['fields']['php_3']['id'] = 'php_3';
$handler->display->display_options['fields']['php_3']['table'] = 'views';
$handler->display->display_options['fields']['php_3']['field'] = 'php';
$handler->display->display_options['fields']['php_3']['ui_name'] = 'Title';
$handler->display->display_options['fields']['php_3']['label'] = '';
$handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_3']['php_output'] = '<?php
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  
  $title = $related->title;
  $nid =  $related->nid;

?>
<a href="<?php print $base_url . \'/node/\' . $nid; ?>"><?php print $title; ?></a>';
$handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
/* Field: Field: Related Content (field_ef_related_content:delta) */
$handler->display->display_options['fields']['delta']['id'] = 'delta';
$handler->display->display_options['fields']['delta']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['fields']['delta']['field'] = 'delta';
$handler->display->display_options['fields']['delta']['relationship'] = 'nid';
$handler->display->display_options['fields']['delta']['label'] = '';
$handler->display->display_options['fields']['delta']['exclude'] = TRUE;
$handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delta']['separator'] = '';
/* Field: Countries */
$handler->display->display_options['fields']['php_4']['id'] = 'php_4';
$handler->display->display_options['fields']['php_4']['table'] = 'views';
$handler->display->display_options['fields']['php_4']['field'] = 'php';
$handler->display->display_options['fields']['php_4']['ui_name'] = 'Countries';
$handler->display->display_options['fields']['php_4']['label'] = '';
$handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_4']['php_output'] = '<?php 
  
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  $array = array(\'ef_restructuring_in_smes\',\'ef_report\',\'ef_case_study\',\'ef_emire_dictionary\',\'ef_event\',\'ef_news\',\'ef_regulation\',\'ef_national_contribution\');
  
  //Country 
  

  if(($related->type == \'ef_comparative_analytical_report\') || $related->type == \'ef_publication\'){
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];
   
    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_eu_related_countries\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_ef_eu_related_countries_iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();


    
    $country = $sql->execute()->fetchAll();  

    
  }
  elseif (($related->type == \'ef_ic_quarterly_report\') || ($related->type == \'ef_network_quarterly_report\')) {
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];

    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_quarter_report_country\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_data_field_ef_quarter_report_country.iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();
    
    $country = $sql->execute()->fetchAll(); 
  }
  
  elseif (in_array($related->type,$array)){
  
    $iso2 = $related->field_ef_country;
  
    $variable = $iso2[\'und\'][0][\'iso2\'];
    
    $sql = db_select(\'node\',\'n\');
    $sql->join(\'field_data_field_ef_country\',\'c\',\'c.entity_id = n.nid\');
    $sql->join(\'countries_country\',\'cc\',\'c.field_ef_country_iso2 = cc.iso2\');
    $sql->fields(\'cc\',array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\',$variable,\'=\');
    $sql->distinct();

    $country = $sql->execute()->fetchAll(); 
    
  }  
 

?>
<?php if(!empty($country)): ?>
  <li class="list-country"><?php print $country[0]->name; ?></li>
<?php endif; ?>';
$handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
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
 
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);

  //Content type
  $type = $related->type;

  // deliverable kinds
  $tid = $related->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);

  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    if($name == \'page\'){
      $name = \'Page\';
    }
    $name = str_replace("ef_","EF ",$name);
    $name = str_replace("_"," ",$name);
  }

  if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
    $name = \'Research in Focus\';
  }elseif($tid == 13744){
    $name = \'Comparative Analytical Report\';
  }elseif($tid == 13745){
    $name = \'Annual Update\';
  }elseif($tid == 13746){
    $name = \'Representativeness Study\';
  }
  // publication date
  $date_ts = $related->published_at;
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
/* Field: Display observatory */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display observatory';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '
 


<?php
global $base_url; 
$node = node_load($row->field_ef_observatory);
$delta = $row->delta;
$related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);


$tid = $related->field_ef_observatory[\'und\'][0][\'tid\'];

if($tid == 13188){
  $observatory = \'EurWORK\';
}else{
  $observatory = \'EMCC\';
}

$observatory_url = strtolower($observatory);
?>
<a href="<?php print $base_url . \'/observatories/\' . $observatory_url; ?>"><?php print $observatory; ?></a>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '<li class="list-observatory">[php_1]</li>';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'field-ef-metadata';
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
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[php_3]
<ul class="metadata-items inline-list">
  [php_4]
  [php]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['relationship'] = 'field_ef_related_content_target_id';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content revision: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'node_revision';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  1 => '1',
);
/* Filter criterion: Field: Related Content (field_ef_related_content) */
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['id'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator_id'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['label'] = 'Related Content ';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['identifier'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['remember_roles'] = array(
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
/* Filter criterion: Content: Finished (field_ef_finished_status) */
$handler->display->display_options['filters']['field_ef_finished_status_value']['id'] = 'field_ef_finished_status_value';
$handler->display->display_options['filters']['field_ef_finished_status_value']['table'] = 'field_data_field_ef_finished_status';
$handler->display->display_options['filters']['field_ef_finished_status_value']['field'] = 'field_ef_finished_status_value';
$handler->display->display_options['filters']['field_ef_finished_status_value']['relationship'] = 'field_ef_related_content_target_id';
$handler->display->display_options['filters']['field_ef_finished_status_value']['operator'] = 'and';
$handler->display->display_options['filters']['field_ef_finished_status_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['block_description'] = 'Related content field GBmember';

/* Display: Block board member page */
$handler = $view->new_display('block', 'Block board member page', 'related_content_board_member_page');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  16 => '16',
  6 => '6',
  4 => '4',
  5 => '5',
  8 => '8',
);
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'item-list';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['ui_name'] = 'Node';
$handler->display->display_options['relationships']['nid']['label'] = 'Node';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['id'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['relationships']['field_ef_related_content_target_id']['relationship'] = 'nid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Title */
$handler->display->display_options['fields']['php_3']['id'] = 'php_3';
$handler->display->display_options['fields']['php_3']['table'] = 'views';
$handler->display->display_options['fields']['php_3']['field'] = 'php';
$handler->display->display_options['fields']['php_3']['ui_name'] = 'Title';
$handler->display->display_options['fields']['php_3']['label'] = '';
$handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_3']['php_output'] = '<?php
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  
  $title = $related->title;
  $nid =  $related->nid;

?>
<a href="<?php print $base_url . \'/node/\' . $nid; ?>"><?php print $title; ?></a>';
$handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
/* Field: Field: Related Content (field_ef_related_content:delta) */
$handler->display->display_options['fields']['delta']['id'] = 'delta';
$handler->display->display_options['fields']['delta']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['fields']['delta']['field'] = 'delta';
$handler->display->display_options['fields']['delta']['relationship'] = 'nid';
$handler->display->display_options['fields']['delta']['label'] = '';
$handler->display->display_options['fields']['delta']['exclude'] = TRUE;
$handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delta']['separator'] = '';
/* Field: Countries */
$handler->display->display_options['fields']['php_4']['id'] = 'php_4';
$handler->display->display_options['fields']['php_4']['table'] = 'views';
$handler->display->display_options['fields']['php_4']['field'] = 'php';
$handler->display->display_options['fields']['php_4']['ui_name'] = 'Countries';
$handler->display->display_options['fields']['php_4']['label'] = '';
$handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_4']['php_output'] = '<?php 
  
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);
  $array = array(\'ef_restructuring_in_smes\',\'ef_report\',\'ef_case_study\',\'ef_emire_dictionary\',\'ef_event\',\'ef_news\',\'ef_regulation\',\'ef_national_contribution\');
  
  //Country 
  

  if(($related->type == \'ef_comparative_analytical_report\') || $related->type == \'ef_publication\'){
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];
   
    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_eu_related_countries\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_ef_eu_related_countries_iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();


    
    $country = $sql->execute()->fetchAll();  

    
  }
  elseif (($related->type == \'ef_ic_quarterly_report\') || ($related->type == \'ef_network_quarterly_report\')) {
    $iso2 = $related->field_ef_eu_related_countries;
    $variable = $iso2[\'und\'][0][\'iso2\'];

    $sql = db_select(\'node\', \'n\');
    $sql->join(\'field_data_field_ef_quarter_report_country\', \'c\', \'c.entity_id = n.nid\');
    $sql->join(\'countries_country\', \'cc\', \'c.field_data_field_ef_quarter_report_country.iso2 = cc.iso2\');
    $sql->fields(\'cc\', array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\', $variable, \'=\');
    $sql->distinct();
    
    $country = $sql->execute()->fetchAll(); 
  }
  
  elseif (in_array($related->type,$array)){
  
    $iso2 = $related->field_ef_country;
  
    $variable = $iso2[\'und\'][0][\'iso2\'];
    
    $sql = db_select(\'node\',\'n\');
    $sql->join(\'field_data_field_ef_country\',\'c\',\'c.entity_id = n.nid\');
    $sql->join(\'countries_country\',\'cc\',\'c.field_ef_country_iso2 = cc.iso2\');
    $sql->fields(\'cc\',array(\'name\'));
    $sql->condition(\'n.nid\', $related->nid, \'=\');
    $sql->condition(\'cc.iso2\',$variable,\'=\');
    $sql->distinct();

    $country = $sql->execute()->fetchAll(); 
    
  }  
 

?>
<?php if(!empty($country)): ?>
  <li class="list-country"><?php print $country[0]->name; ?></li>
<?php endif; ?>';
$handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
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
 
  $node = node_load($row->field_ef_observatory);
  $delta = $row->delta;
  $related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);

  //Content type
  $type = $related->type;

  // deliverable kinds
  $tid = $related->field_ef_deliverable_kind[\'und\'][0][\'tid\'];
  $term = taxonomy_term_load($tid);

  if(!empty($tid)){
    $name = $term->name;
  }else{
    $name = $type;
    if($name == \'page\'){
      $name = \'Page\';
    }
    $name = str_replace("ef_","EF ",$name);
    $name = str_replace("_"," ",$name);
  }

  if($tid == 13742 || $tid == 13743 || $tid  == 13770 || $tid == 20209 || $tid == 13159 ){
    $name = \'Research in Focus\';
  }elseif($tid == 13744){
    $name = \'Comparative Analytical Report\';
  }elseif($tid == 13745){
    $name = \'Annual Update\';
  }elseif($tid == 13746){
    $name = \'Representativeness Study\';
  }
  // publication date
  $date_ts = $related->published_at;
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
/* Field: Display observatory */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Display observatory';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '
 


<?php
global $base_url; 
$node = node_load($row->field_ef_observatory);
$delta = $row->delta;
$related = node_load($node->field_ef_related_content[\'und\'][$delta][\'target_id\']);


$tid = $related->field_ef_observatory[\'und\'][0][\'tid\'];

if($tid == 13188){
  $observatory = \'EurWORK\';
}else{
  $observatory = \'EMCC\';
}

$observatory_url = strtolower($observatory);
?>
<a href="<?php print $base_url . \'/observatories/\' . $observatory_url; ?>"><?php print $observatory; ?></a>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Field: Observatory */
$handler->display->display_options['fields']['field_ef_observatory']['id'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['table'] = 'field_data_field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['field'] = 'field_ef_observatory';
$handler->display->display_options['fields']['field_ef_observatory']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_ef_observatory']['label'] = '';
$handler->display->display_options['fields']['field_ef_observatory']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_observatory']['alter']['text'] = '<li class="list-observatory">[php_1]</li>';
$handler->display->display_options['fields']['field_ef_observatory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_observatory']['element_wrapper_class'] = 'field-ef-metadata';
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
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[php_3]
<ul class="metadata-items inline-list">
  [php_4]
  [php]
  [field_ef_observatory]
</ul>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['relationship'] = 'field_ef_related_content_target_id';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content revision: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'node_revision';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  1 => '1',
);
$handler->display->display_options['filters']['state']['group'] = 1;
/* Filter criterion: Field: Related Content (field_ef_related_content) */
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['id'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['table'] = 'field_data_field_ef_related_content';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['field'] = 'field_ef_related_content_target_id';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['group'] = 1;
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator_id'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['label'] = 'Related Content ';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['operator'] = 'field_ef_related_content_target_id_1_op';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['identifier'] = 'field_ef_related_content_target_id_1';
$handler->display->display_options['filters']['field_ef_related_content_target_id_1']['expose']['remember_roles'] = array(
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
$handler->display->display_options['block_description'] = 'Related content board member page';

$view->save();
$view = new view();
$view->name = 'sector_landing_page';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Sector Landing Page';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Browse by sector';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
  'nid' => 'nid',
);
/* Relationship: Taxonomy term: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['label'] = 'node-taxonomy';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_sectors' => 'ef_sectors',
);
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'word';
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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
$handler->display->display_options['path'] = 'sectors';

$view->save();
$view = new view();
$view->name = 'topic_landing_page';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Topic Landing Page';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Browse by topic';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Taxonomy term: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['label'] = 'node-taxonomy';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'ef_topics' => 'ef_topics',
);
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'word';
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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

/* Display: Topics */
$handler = $view->new_display('page', 'Topics', 'page');
$handler->display->display_options['path'] = 'topics';

$view->save();
}
