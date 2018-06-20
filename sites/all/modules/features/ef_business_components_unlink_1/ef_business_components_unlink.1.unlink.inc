<?php

/**
 * Unlink ef_business_components_unlink_1_views_view().
 */
function ef_business_components_unlink_1_views_view() {
$view = new view();
$view->name = 'ef_call_for_tenders';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Call For Tenders';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Call For Tenders';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = 'no-ef-image';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_tender_publication_date' => 'field_ef_tender_publication_date',
  'field_ef_procurement_status' => 'field_ef_procurement_status',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['label'] = 'Expression of interest forms';
$handler->display->display_options['header']['area']['content'] = 'Are you interested in tendering for Eurofound contracts? Fill in a short form to express your interest:
<ul>
<li>Research services</li>
<li>Research services</li>
<li>Research services</li>
<li>Research services</li>
</ul>';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Publication Date */
$handler->display->display_options['fields']['field_ef_tender_publication_date']['id'] = 'field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['table'] = 'field_data_field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['field'] = 'field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_tender_publication_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_tender_publication_date']['settings'] = array(
  'format_type' => 'ef_date_format',
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
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Procurement Status */
$handler->display->display_options['fields']['field_ef_procurement_status']['id'] = 'field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['table'] = 'field_data_field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['field'] = 'field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['label'] = '';
$handler->display->display_options['fields']['field_ef_procurement_status']['alter']['text'] = '[field_ef_procurement_status] procedure';
$handler->display->display_options['fields']['field_ef_procurement_status']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_procurement_status']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_procurement_status']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Body (Summary or trimmed 600) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 600)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
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
  'ef_call_for_tender' => 'ef_call_for_tender',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Call For Tenders */
$handler = $view->new_display('page', 'Call For Tenders', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Call for tenders';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'Eurofound uses a variety of means to select contractors to assist it in carrying out its Programme of Work, in accordance with the public procurement rules of the European Union institutions. All information necessary for tendering is included either in the published notices in the Official Journal of the European Union or in the Tender Specifications provided directly to invited candidates.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Publication Date */
$handler->display->display_options['fields']['field_ef_tender_publication_date']['id'] = 'field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['table'] = 'field_data_field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['field'] = 'field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_tender_publication_date']['settings'] = array(
  'format_type' => 'ef_date_format',
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
/* Field: Content: Procurement Status */
$handler->display->display_options['fields']['field_ef_procurement_status']['id'] = 'field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['table'] = 'field_data_field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['field'] = 'field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['label'] = '';
$handler->display->display_options['fields']['field_ef_procurement_status']['alter']['text'] = '[field_ef_procurement_status] procedure';
$handler->display->display_options['fields']['field_ef_procurement_status']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_procurement_status']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_procurement_status']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Body (Summary or trimmed 600) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 600)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Publication Date (field_ef_tender_publication_date) */
$handler->display->display_options['sorts']['field_ef_tender_publication_date_value']['id'] = 'field_ef_tender_publication_date_value';
$handler->display->display_options['sorts']['field_ef_tender_publication_date_value']['table'] = 'field_data_field_ef_tender_publication_date';
$handler->display->display_options['sorts']['field_ef_tender_publication_date_value']['field'] = 'field_ef_tender_publication_date_value';
$handler->display->display_options['sorts']['field_ef_tender_publication_date_value']['order'] = 'DESC';
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
$handler->display->display_options['path'] = 'about-eurofound/procurement/opportunities';

/* Display: Open procedures */
$handler = $view->new_display('page', 'Open procedures', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Procurement opportunities';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area_1']['id'] = 'area_1';
$handler->display->display_options['header']['area_1']['table'] = 'views';
$handler->display->display_options['header']['area_1']['field'] = 'area';
$handler->display->display_options['header']['area_1']['label'] = 'Expression of interest forms';
$handler->display->display_options['header']['area_1']['empty'] = TRUE;
$handler->display->display_options['header']['area_1']['content'] = '<b>This page lists Eurofound\'s open calls for tender with a value over €144,000.</b>

Eurofound is part of an <a href=https://etendering.ted.europa.eu/general/page.html?name=home>eTendering platform</a> for managing calls for tender, which consists of the publication of tender documents and the <b>management of questions and answers</b> concerning the specifications and the procedure.

A list of ongoing calls for tender (if any) is provided below.

Please follow the relevant links to gain access to all tender documents. The documents will be visible and downloadable, but in order to use some options on the eTendering website, users will need to log in. Once logged in, users have the option to \'subscribe\' to a call for tender which will mean they <b>receive notifications</b> for events such as the publication of new documents. Moreover, this will allow users to ask questions related to the call for tender.

Thank you for your interest in our calls for tender.

It is the tenderer\'s responsibility to <b>check for updates</b> and modifications to the tendering documentation during the tendering period. These changes will be made available in the <a href=https://etendering.ted.europa.eu/general/page.html?name=home>eTendering platform</a>.

';
$handler->display->display_options['header']['area_1']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Publication Date */
$handler->display->display_options['fields']['field_ef_tender_publication_date']['id'] = 'field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['table'] = 'field_data_field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['field'] = 'field_ef_tender_publication_date';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['label'] = '';
$handler->display->display_options['fields']['field_ef_tender_publication_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_tender_publication_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_tender_publication_date']['settings'] = array(
  'format_type' => 'ef_date_format',
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
/* Field: Node: Published at */
$handler->display->display_options['fields']['published_at']['id'] = 'published_at';
$handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
$handler->display->display_options['fields']['published_at']['field'] = 'published_at';
$handler->display->display_options['fields']['published_at']['label'] = '';
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Procurement Status */
$handler->display->display_options['fields']['field_ef_procurement_status']['id'] = 'field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['table'] = 'field_data_field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['field'] = 'field_ef_procurement_status';
$handler->display->display_options['fields']['field_ef_procurement_status']['label'] = '';
$handler->display->display_options['fields']['field_ef_procurement_status']['alter']['text'] = '[field_ef_procurement_status] procedure';
$handler->display->display_options['fields']['field_ef_procurement_status']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_procurement_status']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_ef_procurement_status']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Body (Summary or trimmed 600) */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['ui_name'] = 'Body (Summary or trimmed 600)';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
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
  'ef_call_for_tender' => 'ef_call_for_tender',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Procurement Status (field_ef_procurement_status) */
$handler->display->display_options['filters']['field_ef_procurement_status_tid']['id'] = 'field_ef_procurement_status_tid';
$handler->display->display_options['filters']['field_ef_procurement_status_tid']['table'] = 'field_data_field_ef_procurement_status';
$handler->display->display_options['filters']['field_ef_procurement_status_tid']['field'] = 'field_ef_procurement_status_tid';
$handler->display->display_options['filters']['field_ef_procurement_status_tid']['value'] = array(
  13179 => '13179',
);
$handler->display->display_options['filters']['field_ef_procurement_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_procurement_status_tid']['vocabulary'] = 'ef_procurement_statuses';
$handler->display->display_options['path'] = 'about-eurofound/procurement/opportunities/open';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Open procedures';
$handler->display->display_options['menu']['weight'] = '1';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Express your interest */
$handler = $view->new_display('page', 'Express your interest', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  1 => '1',
  2 => '2',
);
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_tender_publication_date' => 'field_ef_tender_publication_date',
  'field_ef_procurement_status' => 'field_ef_procurement_status',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Workbench Moderation: Published */
$handler->display->display_options['filters']['published']['id'] = 'published';
$handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['published']['field'] = 'published';
$handler->display->display_options['filters']['published']['value'] = '1';
$handler->display->display_options['filters']['published']['group'] = 1;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '86618';
$handler->display->display_options['filters']['nid']['group'] = 1;
$handler->display->display_options['path'] = 'about-eurofound/procurement/opportunities/express_your_interest';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Procurement opportunities: Express your interest';
$handler->display->display_options['menu']['weight'] = '2';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Contracts awarded */
$handler = $view->new_display('page', 'Contracts awarded', 'page_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  1 => '1',
  2 => '2',
);
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['label'] = 'Expression of interest forms';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '91824';
/* Filter criterion: Workbench Moderation: Published */
$handler->display->display_options['filters']['published']['id'] = 'published';
$handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['published']['field'] = 'published';
$handler->display->display_options['filters']['published']['value'] = '1';
$handler->display->display_options['path'] = 'about-eurofound/procurement/opportunities/contracts_awarded';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Contracts awarded';
$handler->display->display_options['menu']['weight'] = '3';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
$view = new view();
$view->name = 'ef_projects';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Projects';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Projects';
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
  'field_ef_theme_tid' => array(
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
  'field_ef_topic_tid' => array(
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
  'field_ef_observatory_tid' => array(
    'bef_format' => 'bef',
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
  'field_ef_delivery_date_value' => array(
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
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_ef_delivery_date' => 'field_ef_delivery_date',
  'field_ef_observatory' => 'field_ef_observatory',
  'field_ef_theme' => 'field_ef_theme',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator">|</span>';
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
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Delivery Date */
$handler->display->display_options['fields']['field_ef_delivery_date']['id'] = 'field_ef_delivery_date';
$handler->display->display_options['fields']['field_ef_delivery_date']['table'] = 'field_data_field_ef_delivery_date';
$handler->display->display_options['fields']['field_ef_delivery_date']['field'] = 'field_ef_delivery_date';
$handler->display->display_options['fields']['field_ef_delivery_date']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
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
$handler->display->display_options['fields']['field_ef_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_topic']['delta_offset'] = '0';
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
  'ef_project' => 'ef_project',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Global: Combine fields filter */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['operator'] = 'word';
$handler->display->display_options['filters']['combine']['group'] = 1;
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Search for Projects';
$handler->display->display_options['filters']['combine']['expose']['description'] = 'Search title or body';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'ef_search';
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['combine']['fields'] = array(
  'title' => 'title',
  'body' => 'body',
);
/* Filter criterion: Content: Topic (field_ef_topic) */
$handler->display->display_options['filters']['field_ef_topic_tid']['id'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['table'] = 'field_data_field_ef_topic';
$handler->display->display_options['filters']['field_ef_topic_tid']['field'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_ef_topic_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator_id'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['label'] = 'Topics';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['operator'] = 'field_ef_topic_tid_op';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['identifier'] = 'field_ef_topic_tid';
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_topic_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
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
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['label'] = 'Observatories';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['operator'] = 'field_ef_observatory_tid_op';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['identifier'] = 'field_ef_observatory_tid';
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_ef_observatory_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['field_ef_observatory_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ef_observatory_tid']['vocabulary'] = 'ef_observatories';
/* Filter criterion: Content: Delivery Date (field_ef_delivery_date) */
$handler->display->display_options['filters']['field_ef_delivery_date_value']['id'] = 'field_ef_delivery_date_value';
$handler->display->display_options['filters']['field_ef_delivery_date_value']['table'] = 'field_data_field_ef_delivery_date';
$handler->display->display_options['filters']['field_ef_delivery_date_value']['field'] = 'field_ef_delivery_date_value';
$handler->display->display_options['filters']['field_ef_delivery_date_value']['operator'] = 'between';
$handler->display->display_options['filters']['field_ef_delivery_date_value']['group'] = 1;
$handler->display->display_options['filters']['field_ef_delivery_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_ef_delivery_date_value']['expose']['operator_id'] = 'field_ef_delivery_date_value_op';
$handler->display->display_options['filters']['field_ef_delivery_date_value']['expose']['label'] = 'Delivery Date';
$handler->display->display_options['filters']['field_ef_delivery_date_value']['expose']['operator'] = 'field_ef_delivery_date_value_op';
$handler->display->display_options['filters']['field_ef_delivery_date_value']['expose']['identifier'] = 'field_ef_delivery_date_value';
$handler->display->display_options['filters']['field_ef_delivery_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
);
$handler->display->display_options['filters']['field_ef_delivery_date_value']['form_type'] = 'date_popup';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['path'] = 'projects';
$handler->display->display_options['menu']['title'] = 'Projects';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
$view = new view();
$view->name = 'ef_vacancies';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Vacancies';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Closed Vacancies';
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
$handler->display->display_options['style_options']['row_class'] = 'no-ef-image';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'changed' => 'changed',
  'field_ef_reference_number' => 'field_ef_reference_number',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
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
$handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['published_at']['date_format'] = 'ef_date_format';
/* Field: Content: Reference number */
$handler->display->display_options['fields']['field_ef_reference_number']['id'] = 'field_ef_reference_number';
$handler->display->display_options['fields']['field_ef_reference_number']['table'] = 'field_data_field_ef_reference_number';
$handler->display->display_options['fields']['field_ef_reference_number']['field'] = 'field_ef_reference_number';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
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
  'ef_vacancy' => 'ef_vacancy',
);
/* Filter criterion: Content: Application deadline (field_ef_application_deadline) */
$handler->display->display_options['filters']['field_ef_application_deadline_value']['id'] = 'field_ef_application_deadline_value';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['table'] = 'field_data_field_ef_application_deadline';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['field'] = 'field_ef_application_deadline_value';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['default_date'] = 'now';

/* Display: Vacancies */
$handler = $view->new_display('page', 'Vacancies', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Open Vacancies';
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
  'ef_vacancy' => 'ef_vacancy',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Application deadline (field_ef_application_deadline) */
$handler->display->display_options['filters']['field_ef_application_deadline_value']['id'] = 'field_ef_application_deadline_value';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['table'] = 'field_data_field_ef_application_deadline';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['field'] = 'field_ef_application_deadline_value';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['default_date'] = 'now';
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
$handler->display->display_options['path'] = 'about/vacancies/positions';

/* Display: Open Vacancies */
$handler = $view->new_display('page', 'Open Vacancies', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Open Vacancies';
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
  'ef_vacancy' => 'ef_vacancy',
);
/* Filter criterion: Content: Application deadline (field_ef_application_deadline) */
$handler->display->display_options['filters']['field_ef_application_deadline_value']['id'] = 'field_ef_application_deadline_value';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['table'] = 'field_data_field_ef_application_deadline';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['field'] = 'field_ef_application_deadline_value';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['default_date'] = 'now';
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
$handler->display->display_options['path'] = 'about/vacancies/positions/open';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Open Vacancies';
$handler->display->display_options['menu']['weight'] = '3';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Closed Vacancies */
$handler = $view->new_display('page', 'Closed Vacancies', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Closed Vacancies';
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
  'ef_vacancy' => 'ef_vacancy',
);
/* Filter criterion: Content: Application deadline (field_ef_application_deadline) */
$handler->display->display_options['filters']['field_ef_application_deadline_value']['id'] = 'field_ef_application_deadline_value';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['table'] = 'field_data_field_ef_application_deadline';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['field'] = 'field_ef_application_deadline_value';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['operator'] = '<';
$handler->display->display_options['filters']['field_ef_application_deadline_value']['default_date'] = 'now';
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
$handler->display->display_options['path'] = 'about/vacancies/positions/closed';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Closed Vacancies';
$handler->display->display_options['menu']['weight'] = '6';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
}
