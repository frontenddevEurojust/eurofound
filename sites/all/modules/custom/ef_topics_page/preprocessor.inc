<?php

require_once 'helpers/preprocessor_functions.inc';
require_once 'helpers/db_functions.inc';


/*
  Implements template_preprocess_HOOK()
  HOOK refers to template name. Hyphens should be renamed to underscores
*/
function template_preprocess_ef_topics_page(&$variables){

    global $language;

    // Need to check what's the tid of the received string as the URL can be changed with URL_ALIAS and not follow the pattern: topic/name
    $data = check_topic_exists_by_url_and_language(strtolower($variables['contextual_term']), $language->language);

    $variables = prepare_template_content($data['term'], $data['language'], $navigation_language = $language->language);

    add_js_and_css_files($data['term']);
    // Use drupal_set_title function as hook_menu can't work with contextual values
    drupal_set_title($variables['title']);

    $variables['navigation_language'] = $language->language;

}

function prepare_template_content($term, $data_language, $navigation_language){

    // Global $language variable is used for node url updates

    $variables = [];

    // Needs to be passed for Rendering Media CKEDitors
    $variables['term'] = $term;

    // Add language for proper link rendering

    $variables['language'] = $data_language;

    // TABS DATA
    $variables = build_content_tabs($variables, $term, $page);

    $variables = build_content_pagers($variables, $term, $page, $limit = 5000000);

    // Metatag data preprocessing
    $string_ef_activities = build_activities_string($term);


    // Main image preprocessing
    $variables = add_main_image_to_variables($variables, $term);

    // Subscription fields preprocessing
    $variables = add_subscription_to_variables($variables, $term);

    // Topics preprocessing for image and name
    $variables = add_topics_to_variables($variables, $term, $data_language, $navigation_language);

    // Metatag building. <meta name="ef-activities" content='$string_ef_activities'>
    $variables = add_metatag_to_variables($variables, $term, $string_ef_activities);

    $variables = add_administrator_menu($variables, $term);

    $variables['total'] = retrieve_total_results_per_tab($term, $limit = 500000);

    // Additional variables sent to ef_topics_page.tpl.php
    $variables['summary'] = check_markup($term->field_term_summary[$data_language][0]['value'], 'filtered_html');
    $variables['description'] = check_markup($term->description, 'filtered_html');
    $variables['show_menu'] = check_current_user();
    $variables['title'] = $term->field_term_title[$data_language][0]['value'];

    $variables['ongoing'] = $term->field_ef_ongoing_work['und'][0];

    if ($term->field_term_last_updated)
    {
        $variables['last_updated'] = date('d F Y', $term->field_term_last_updated['und'][0]['value']);
    }

    if(isset($term->field_ef_featured_block_content))
    {
        $variables['featured_block'] = check_markup($term->field_ef_featured_block_content[$data_language][0]['value'], 'filtered_html');
    }

    if(isset($term->field_ef_related_links_block))
    {
        $variables['related_links_block'] = check_markup($term->field_ef_related_links_block[$data_language][0]['value'], 'filtered_html');
    }

    return $variables;

}

function add_js_and_css_files($term){

    drupal_add_css(drupal_get_path('module', 'ef_topics_page') . '/ef_topics_page.css');

    drupal_add_js(drupal_get_path('module', 'ef_topics_page') . '/ef_topics_page.js');

    $settings['tid'] = $term->tid;
    $settings['pages'] = retrieve_total_results_per_tab($term, $limit = 500000);

    drupal_add_js(array('ef_topics_page' => $settings), 'setting');
}