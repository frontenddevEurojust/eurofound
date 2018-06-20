<?php

/**
 * Unlink ef_surveys_unlink_1_views_view().
 */
function ef_surveys_unlink_1_views_view() {
$view = new view();
$view->name = 'ef_survey_family_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Survey Family';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
);
/* Header: Global: PHP */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['php_output'] = '<?php
$breadcrumb[] = l(\'Home\', null);
$breadcrumb[] .= l(\'Surveys\', \'surveys\');
drupal_set_breadcrumb($breadcrumb);
?>';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'h2';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Rendered Taxonomy term */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Taxonomy term: Abbreviation */
$handler->display->display_options['fields']['field_ef_abbreviation']['id'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['table'] = 'field_data_field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['field'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['label'] = '';
$handler->display->display_options['fields']['field_ef_abbreviation']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_abbreviation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_abbreviation']['group_columns'] = array(
  'value' => 'value',
);
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'ef_surveys_view';
$handler->display->display_options['fields']['view']['display'] = 'attachment_1';
$handler->display->display_options['fields']['view']['arguments'] = '[%field_ef_abbreviation]';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Contextual filter: Taxonomy term: Abbreviation (field_ef_abbreviation) */
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['id'] = 'field_ef_abbreviation_value';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['table'] = 'field_data_field_ef_abbreviation';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['field'] = 'field_ef_abbreviation_value';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['limit'] = '0';
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
  'ef_survey_families' => 'ef_survey_families',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;

/* Display: Surveys by Family Page */
$handler = $view->new_display('page', 'Surveys by Family Page', 'page');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: PHP */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['php_output'] = '<?php
$breadcrumb[] = l(\'Home\', null);
$breadcrumb[] .= l(\'Surveys\', \'surveys\');
drupal_set_breadcrumb($breadcrumb);
?>';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<h1>Surveys</h1>
<p>Eurofound has developed three regularly repeated surveys to contribute to the planning and establishment of better living and working conditions. The surveys offer a unique source of comparative information on the quality of living and working conditions across the EU. Detailed analysis of the survey data allows Eurofound to identify new and emerging trends, as well as to gain deeper insight in the issues central to European policy. The results provide a strong basis for policy makers to identify opportunities for improvement and to develop forward looking perspectives. The surveys are a key element in Eurofound’s mission to provide high quality information and advice for EU and national level policy makers, social partners, researchers and European citizens alike.</p>
';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['empty'] = TRUE;
$handler->display->display_options['footer']['area']['content'] = '<p>The three Eurofound surveys share the following features:</p>
<ul>
<li>Representative samples</li>
<li>Coverage of all EU Member States as well as (potential) Candidate Countries and EFTA countries</li>
<li>Cross-country comparability</li>
<li>Multiple waves (enabling trend analysis)</li>
<li>Questionnaires covering a wide range of topics designed to meet European policy needs</li>
<li>Developed in close cooperation with Eurofound’s tripartite stakeholders and experts in the field</li>
<li>Questionnaires built on an inter-disciplinary scientific basis</li>
<li>Elaborate strategy for quality assurance</li>
<li>Timely availability of results, in policy relevant reports, the online survey mapping tool, and through the UK Data Archive.</li>
</ul>';
$handler->display->display_options['footer']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Logo */
$handler->display->display_options['fields']['field_ef_survey_family_logo']['id'] = 'field_ef_survey_family_logo';
$handler->display->display_options['fields']['field_ef_survey_family_logo']['table'] = 'field_data_field_ef_survey_family_logo';
$handler->display->display_options['fields']['field_ef_survey_family_logo']['field'] = 'field_ef_survey_family_logo';
$handler->display->display_options['fields']['field_ef_survey_family_logo']['label'] = '';
$handler->display->display_options['fields']['field_ef_survey_family_logo']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_survey_family_logo']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_ef_survey_family_logo']['element_wrapper_class'] = 'ef-survey-family-logo';
$handler->display->display_options['fields']['field_ef_survey_family_logo']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_survey_family_logo']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => '',
);
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'h2';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Abbreviation */
$handler->display->display_options['fields']['field_ef_abbreviation']['id'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['table'] = 'field_data_field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['field'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['label'] = '';
$handler->display->display_options['fields']['field_ef_abbreviation']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_abbreviation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_abbreviation']['group_columns'] = array(
  'value' => 'value',
);
/* Field: Taxonomy term: Short description */
$handler->display->display_options['fields']['field_ef_short_description']['id'] = 'field_ef_short_description';
$handler->display->display_options['fields']['field_ef_short_description']['table'] = 'field_data_field_ef_short_description';
$handler->display->display_options['fields']['field_ef_short_description']['field'] = 'field_ef_short_description';
$handler->display->display_options['fields']['field_ef_short_description']['label'] = '';
$handler->display->display_options['fields']['field_ef_short_description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_short_description']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_ef_short_description']['element_wrapper_class'] = 'ef-survey-family-description';
/* Field: Global: View */
$handler->display->display_options['fields']['view_1']['id'] = 'view_1';
$handler->display->display_options['fields']['view_1']['table'] = 'views';
$handler->display->display_options['fields']['view_1']['field'] = 'view';
$handler->display->display_options['fields']['view_1']['label'] = '';
$handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_1']['view'] = 'ef_surveys_view';
$handler->display->display_options['fields']['view_1']['display'] = 'ef_survey_years_for_family_dropdown_block';
$handler->display->display_options['fields']['view_1']['arguments'] = '[%field_ef_abbreviation]';
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
$handler->display->display_options['path'] = 'surveys_view';
$handler->display->display_options['menu']['title'] = 'Surveys';
$handler->display->display_options['menu']['weight'] = '5';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Survey Family Overview Page */
$handler = $view->new_display('page', 'Survey Family Overview Page', 'page_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: PHP */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['php_output'] = '<?php
$breadcrumb[] = l(\'Home\', null);
$breadcrumb[] .= l(\'Surveys\', \'surveys\');
$breadcrumb[] .= l(drupal_get_title(), $_GET[\'q\']);
drupal_set_breadcrumb($breadcrumb);
?>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'h1';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Rendered Taxonomy term */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Taxonomy term: Abbreviation */
$handler->display->display_options['fields']['field_ef_abbreviation']['id'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['table'] = 'field_data_field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['field'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['label'] = '';
$handler->display->display_options['fields']['field_ef_abbreviation']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_abbreviation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_abbreviation']['group_columns'] = array(
  'value' => 'value',
);
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'ef_surveys_view';
$handler->display->display_options['fields']['view']['display'] = 'attachment_1';
$handler->display->display_options['fields']['view']['arguments'] = '[%field_ef_abbreviation]';
$handler->display->display_options['path'] = 'surveys_view/%/overview';

$view->save();
$view = new view();
$view->name = 'ef_surveys_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Surveys';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['path'] = 'field_ef_abbreviation';
$handler->display->display_options['style_options']['text'] = 'View';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Survey Family (field_ef_survey_family) */
$handler->display->display_options['relationships']['field_ef_survey_family_tid']['id'] = 'field_ef_survey_family_tid';
$handler->display->display_options['relationships']['field_ef_survey_family_tid']['table'] = 'field_data_field_ef_survey_family';
$handler->display->display_options['relationships']['field_ef_survey_family_tid']['field'] = 'field_ef_survey_family_tid';
$handler->display->display_options['relationships']['field_ef_survey_family_tid']['required'] = TRUE;
/* Field: Taxonomy term: Abbreviation */
$handler->display->display_options['fields']['field_ef_abbreviation']['id'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['table'] = 'field_data_field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['field'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['relationship'] = 'field_ef_survey_family_tid';
$handler->display->display_options['fields']['field_ef_abbreviation']['label'] = '';
$handler->display->display_options['fields']['field_ef_abbreviation']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_abbreviation']['element_label_colon'] = FALSE;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Sort criterion: Content: Survey Year (field_ef_survey_year) */
$handler->display->display_options['sorts']['field_ef_survey_year_value']['id'] = 'field_ef_survey_year_value';
$handler->display->display_options['sorts']['field_ef_survey_year_value']['table'] = 'field_data_field_ef_survey_year';
$handler->display->display_options['sorts']['field_ef_survey_year_value']['field'] = 'field_ef_survey_year_value';
$handler->display->display_options['sorts']['field_ef_survey_year_value']['order'] = 'DESC';
/* Contextual filter: Taxonomy term: Abbreviation (field_ef_abbreviation) */
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['id'] = 'field_ef_abbreviation_value';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['table'] = 'field_data_field_ef_abbreviation';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['field'] = 'field_ef_abbreviation_value';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['relationship'] = 'field_ef_survey_family_tid';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['validate']['fail'] = 'ignore';
$handler->display->display_options['arguments']['field_ef_abbreviation_value']['limit'] = '0';
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
  'ef_survey' => 'ef_survey',
);

/* Display: Surveys for Family Attachment */
$handler = $view->new_display('attachment', 'Surveys for Family Attachment', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Survey Years for Family Block */
$handler = $view->new_display('block', 'Survey Years for Family Block', 'ef_survey_years_for_family_dropdown_block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['path'] = 'path';
$handler->display->display_options['style_options']['text'] = 'View';
$handler->display->display_options['style_options']['choose'] = '';
$handler->display->display_options['style_options']['default_value'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Abbreviation */
$handler->display->display_options['fields']['field_ef_abbreviation']['id'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['table'] = 'field_data_field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['field'] = 'field_ef_abbreviation';
$handler->display->display_options['fields']['field_ef_abbreviation']['relationship'] = 'field_ef_survey_family_tid';
$handler->display->display_options['fields']['field_ef_abbreviation']['label'] = '';
$handler->display->display_options['fields']['field_ef_abbreviation']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_abbreviation']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Survey Year */
$handler->display->display_options['fields']['field_ef_survey_year']['id'] = 'field_ef_survey_year';
$handler->display->display_options['fields']['field_ef_survey_year']['table'] = 'field_data_field_ef_survey_year';
$handler->display->display_options['fields']['field_ef_survey_year']['field'] = 'field_ef_survey_year';
$handler->display->display_options['fields']['field_ef_survey_year']['label'] = '';
$handler->display->display_options['fields']['field_ef_survey_year']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_ef_survey_year']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_ef_survey_year']['alter']['replace_spaces'] = TRUE;
$handler->display->display_options['fields']['field_ef_survey_year']['alter']['path_case'] = 'lower';
$handler->display->display_options['fields']['field_ef_survey_year']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_survey_year']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 0,
);

$view->save();
}
