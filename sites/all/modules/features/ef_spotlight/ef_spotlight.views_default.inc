<?php
/**
 * @file
 * ef_spotlight.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ef_spotlight_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ef_latest_spotlight_entries_for_theme';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest Spotlight Entries for Theme';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest entries on: %1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No entries found for: !1';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'ef_date_format';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Spotlight Theme (field_ef_spotlight_theme) */
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['id'] = 'field_ef_spotlight_theme_tid';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['table'] = 'field_data_field_ef_spotlight_theme';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['field'] = 'field_ef_spotlight_theme_tid';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['validate_options']['vocabularies'] = array(
    'ef_spotlight_themes' => 'ef_spotlight_themes',
  );
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_ef_spotlight_theme_tid']['validate']['fail'] = 'empty';
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
    'ef_spotlight_entry' => 'ef_spotlight_entry',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ef_latest_spotlight_entries_for_theme'] = $view;

  $view = new view();
  $view->name = 'ef_spotlight_on';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Spotlight on';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spotlight on';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['label'] = 'Breadcrumb';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$breadcrumb = array();
$breadcrumb[] .= l(\'Home\', \'../\');
drupal_set_breadcrumb($breadcrumb);
?>
';
  /* Relationship: Taxonomy term: Content using Spotlight Theme */
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['id'] = 'reverse_field_ef_spotlight_theme_node';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['field'] = 'reverse_field_ef_spotlight_theme_node';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['required'] = TRUE;
  /* Field: Field: Main Image */
  $handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ef_main_image']['group_column'] = 'entity_id';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Full Name */
  $handler->display->display_options['fields']['field_ef_full_name']['id'] = 'field_ef_full_name';
  $handler->display->display_options['fields']['field_ef_full_name']['table'] = 'field_data_field_ef_full_name';
  $handler->display->display_options['fields']['field_ef_full_name']['field'] = 'field_ef_full_name';
  $handler->display->display_options['fields']['field_ef_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_ef_full_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ef_full_name']['alter']['path'] = 'news/spotlight-on/[name]';
  $handler->display->display_options['fields']['field_ef_full_name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_ef_full_name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_ef_full_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_ef_full_name']['element_label_colon'] = FALSE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_ef_spotlight_theme_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['suffix'] = 'article(s)';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    'ef_spotlight_themes' => 'ef_spotlight_themes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news/spotlight-on';
  $handler->display->display_options['menu']['title'] = 'Spotlight on';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Spotlight pane latest node per term */
  $handler = $view->new_display('panel_pane', 'Spotlight pane latest node per term', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Representative node */
  $handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['required'] = TRUE;
  $handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.status';
  $handler->display->display_options['relationships']['tid_representative']['subquery_view'] = '';
  $handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['relationship'] = 'tid_representative';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'ef_spotlight_themes' => 'ef_spotlight_themes',
    'country' => 0,
    'cwb_sector' => 0,
    'cwb_working_class' => 0,
    'cwb_outcome_variables_units' => 0,
    'cwb_variables_type' => 0,
    'cwb_outcome_variables' => 0,
    'cwb_timeline_category' => 0,
    'cwb_timeline_level' => 0,
    'ef_case_study_categories' => 0,
    'ef_case_study_initiative_types' => 0,
    'ef_case_study_legal_forms' => 0,
    'ef_case_study_names' => 0,
    'ef_case_study_organisation_sizes' => 0,
    'ef_case_study_scopes' => 0,
    'ef_case_study_sectors' => 0,
    'ef_case_study_social_dialogue_types' => 0,
    'ef_case_study_social_dialogues' => 0,
    'ef_case_study_target_groups' => 0,
    'ef_company_sizes' => 0,
    'ef_contracts' => 0,
    'ef_deliverable_kinds' => 0,
    'ef_report_types' => 0,
    'ef_event_types' => 0,
    'ef_industrial_relations_terms' => 0,
    'ef_instrument_categories' => 0,
    'ef_instrument_fundings' => 0,
    'ef_instrument_involvement_types' => 0,
    'ef_instrument_phases' => 0,
    'ef_nace_codes' => 0,
    'newsletter' => 0,
    'ef_nuts' => 0,
    'ef_observatories' => 0,
    'ef_procurement_statuses' => 0,
    'ef_procurement_types' => 0,
    'ef_publication_contributors' => 0,
    'ef_publication_keywords' => 0,
    'ef_publication_sectors' => 0,
    'ef_publication_types' => 0,
    'ef_regulation_fundings' => 0,
    'ef_regulation_involvements' => 0,
    'ef_regulation_phases' => 0,
    'ef_regulation_thresholds' => 0,
    'ef_regulation_types' => 0,
    'ef_restructuring_keywords' => 0,
    'ef_restructuring_types' => 0,
    'ef_sectors' => 0,
    'ef_survey_families' => 0,
    'tags' => 0,
    'ef_themes' => 0,
    'ef_topics' => 0,
    'ef_units' => 0,
    'ef_vendor_service_types' => 0,
    'ef_work_programme_areas' => 0,
  );
  /* Relationship: Taxonomy term: Content using Spotlight Theme */
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['id'] = 'reverse_field_ef_spotlight_theme_node';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['field'] = 'reverse_field_ef_spotlight_theme_node';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: MIN(Taxonomy term: Name) */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['group_type'] = 'min';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Full Name */
  $handler->display->display_options['fields']['field_ef_full_name']['id'] = 'field_ef_full_name';
  $handler->display->display_options['fields']['field_ef_full_name']['table'] = 'field_data_field_ef_full_name';
  $handler->display->display_options['fields']['field_ef_full_name']['field'] = 'field_ef_full_name';
  $handler->display->display_options['fields']['field_ef_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_ef_full_name']['alter']['path'] = 'news/spotlight-on/[field_ef_full_name]';
  $handler->display->display_options['fields']['field_ef_full_name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_ef_full_name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_ef_full_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_ef_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_full_name']['group_column'] = 'entity_id';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_ef_spotlight_theme_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['suffix'] = ' article(s)';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'ef_date_format';
  $export['ef_spotlight_on'] = $view;

  $view = new view();
  $view->name = 'ef_spotlight_theme';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotlight Theme';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '[field_ef_main_image_1]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['label'] = 'Breadcrumb';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$view = views_get_current_view();
$arg0 = $view->args[0];

$breadcrumb = array();
$breadcrumb[] .= l(\'Home\', \'../\');
$breadcrumb[] .= l(\'Spotlight on...\', \'../news/spotlight-on\');
drupal_set_breadcrumb($breadcrumb);
?>

';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php_1']['id'] = 'php_1';
  $handler->display->display_options['header']['php_1']['table'] = 'views';
  $handler->display->display_options['header']['php_1']['field'] = 'php';
  $handler->display->display_options['header']['php_1']['label'] = 'Theme Title and Image';
  $handler->display->display_options['header']['php_1']['php_output'] = '<?php
$view = views_get_current_view();
$args = $view->args;
$termUrlName = $args[0]; // %1
$termName = str_replace(\'-\',\' \',$termUrlName);
$termByName = taxonomy_get_term_by_name($termName, \'ef_spotlight_themes\');
$term = reset($termByName );
$termFullNameField=$term->field_ef_full_name;
$termImage=$term->field_ef_main_image;
$imagePath=image_style_url(\'thumbnail\', $termImage["und"][0]["filename"]);
$termTitle = $termFullNameField["und"][0]["value"];
$view-> build_info[\'title\'] = $termTitle;
 global $taxonomyImageUrl;
$taxonomyImageUrl=$imagePath;
?>

';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Highlight */
  $handler->display->display_options['fields']['field_ef_highlight']['id'] = 'field_ef_highlight';
  $handler->display->display_options['fields']['field_ef_highlight']['table'] = 'field_data_field_ef_highlight';
  $handler->display->display_options['fields']['field_ef_highlight']['field'] = 'field_ef_highlight';
  $handler->display->display_options['fields']['field_ef_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_ef_highlight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ef_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_highlight']['element_wrapper_type'] = 'div';
  /* Field: Field: Main Image */
  $handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
  $handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'spotlight-on/%1/[nid]/[title]';
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
  /* Sort criterion: Content: Highlight (field_ef_highlight) */
  $handler->display->display_options['sorts']['field_ef_highlight_value']['id'] = 'field_ef_highlight_value';
  $handler->display->display_options['sorts']['field_ef_highlight_value']['table'] = 'field_data_field_ef_highlight';
  $handler->display->display_options['sorts']['field_ef_highlight_value']['field'] = 'field_ef_highlight_value';
  $handler->display->display_options['sorts']['field_ef_highlight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'ef_spotlight_themes' => 'ef_spotlight_themes',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = TRUE;
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
    'ef_spotlight_entry' => 'ef_spotlight_entry',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news/spotlight-on/%';
  $export['ef_spotlight_theme'] = $view;

  $view = new view();
  $view->name = 'ef_spotlight_themes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Spotlight Themes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Themes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Spotlight Theme */
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['id'] = 'reverse_field_ef_spotlight_theme_node';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['field'] = 'reverse_field_ef_spotlight_theme_node';
  $handler->display->display_options['relationships']['reverse_field_ef_spotlight_theme_node']['required'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<? 
     $name = $row->name;
     $name_clean = str_replace(\' \',\'-\',$name);
     $name_clean = strtolower($name_clean);
     $name_clean =  str_replace(\'/\', \'\', $name_clean);
     echo $name_clean;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'news/spotlight-on/[php]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ef_spotlight_themes' => 'ef_spotlight_themes',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ef_spotlight_themes'] = $view;

  return $export;
}
