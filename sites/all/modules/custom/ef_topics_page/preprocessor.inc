<?php 

require_once 'helpers/preprocessor_functions.inc';
require_once 'helpers/db_functions.inc';


/*
  Implements template_preprocess_HOOK()
  HOOK refers to template name. Hyphens should be renamed to underscores
*/
function template_preprocess_ef_topics_page(&$variables){

    // Global $language variable is used for textfield translations
    global $language;
    $starttime = microtime(true);

    // Need to check what's the tid of the received string as the URL can be changed with URL_ALIAS and not follow the pattern: topic/name

    $found = check_topic_exists_by_url(strtolower($variables['contextual_term']));

    if(!$found)
    {
        drupal_not_found();
    }
    else
    {
    
    // Always follows the rule: 'taxonomy/term/id'
    $aux = explode("/",$found[0]->source);
    $tid = $aux[2];  
    // Retrieve full term for $variables populating
    $term = taxonomy_term_load($tid);
    
    dpm($_GET);
    // Needs to be passed for Rendering Media CKEDitors
    $variables['term'] = $term;

    // TABS DATA MISSING
    $variables = build_content_tabs($variables, $term, $page);



    // Metatag data preprocessing
    $string_ef_activities = build_activities_string($term);


    // Main image preprocessing
    $variables = add_main_image_to_variables($variables, $term);

    // Subscription fields preprocessing 
    $variables = add_subscription_to_variables($variables, $term);
    
    // Topics preprocessing for image and name
    $variables = add_topics_to_variables($variables, $term);

    // Metatag building. <meta name="ef-activities" content='$string_ef_activities'>
    $variables = add_metatag_to_variables($variables, $term, $string_ef_activities);

    $variables = add_administrator_menu($variables, $term);
    
    // Additional variables sent to ef_topics_page.tpl.php
    $variables['summary'] = $term->field_term_summary[$language->language][0]['value'];
    $variables['description'] = $term->description;

    if(isset($term->field_ef_featured_block_content))
    {
    	$variables['featured_block'] = $term->field_ef_featured_block_content[$language->language][0]['value'];;
    }

    if(isset($term->field_ef_related_links_block))
    {
    	$variables['related_links_block'] = $term->field_ef_related_links_block[$language->language][0]['value'];
    }
    
    
    drupal_add_css(drupal_get_path('module', 'ef_topics_page') . '/ef_topics_page.css');
    
    drupal_add_js(drupal_get_path('module', 'ef_topics_page') . '/ef_topics_page.js');

    $settings['tid'] = $term->tid;
    $settings['page'] =  retrieve_total_results_per_tab($term, $limit = 500000);
    dpm($settings);
    drupal_add_js(array('ef_topics_page' => $settings), 'setting');
    // Use drupal_set_title function as hook_menu can't work with contextual values
    drupal_set_title($term->name);


    $endtime = microtime(true);
    $timediff = $endtime - $starttime;
    dpm($timediff);
  }  
}