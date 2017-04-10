<?php

require_once 'functions/ef_my_news_desk.auxiliar_functions.inc';
/*
  Form building function
*/
function mynewsdesk_form($form,&$form_state){
  // Create FORM elements 
  $form['filters'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('mynewsdesk-filter'
        ),
      ),
    );
  $form['filters']['type'] = array(
    '#type' => 'select',
    '#title' => 'Choose Content Type',
    '#options' =>
      array(
        'blog_post' => 'blog post',
        'pressrelease' => 'press release',
        'news' => 'news',
      ),
    '#multiple' => TRUE,
    '#attributes' => array(
      'class' => array('chosen-widget'),
    ),
  );
  
  $form['filters']['limit'] = array(
    '#type' => 'select',
    '#title' => t('nº of elements'), 
    '#options' => 
      array(
        100 => t('All'),
        5 => t('5'),
        10 => t('10'),
        20 => t('20'),
        30 => t('30'),
      ),
    '#attributes' => array(
      'title' => array(' Number of elements to show per Content Type'),
      )
    );

  $form['filters']['date_start'] = array(
    '#type' => 'date_popup',
    '#title' => 'Start Date',
    '#date_format' => 'd-m-Y',
    '#element_validate' => array('date_checking'),
    '#default_value' => 0,
    );

  $form['filters']['date_end'] = array(
    '#type' => 'date_popup',
    '#title' => 'End Date',
    '#date_format' => 'd-m-Y',
    '#default_value' => 0,
    );
  
  $form['filters']['update'] = array(
   '#type' => 'submit',
   '#value' => t('Update table'),
   '#prefix' => '<div class="form-submit-button">',
   '#suffix' => '</div>',
   );

  $form['table_title'] = array(
    '#markup' => '<h2>Content Table</h2>');
  $form['information'] = array(
    '#markup' => '
      <ul>
        <li>This tool should only be used by one person at the same time.</li>
        <li>Select the nodes before pressing Import button.<br>If a existing node is selected, 
          it will be updated according to the last version provided by MyNewsDesk.</li>
      </ul>');
    
  // Build header for tableselect. Header keys need to be the same as option keys for correspondence.
  $header = array(
    'title' => t('Title'),
    'type' => t('Media type'),
    'published_at' => t('Published at'),
    'language' => t('Language'),
    'imported' => t('Imported'),
  );

  // Get Data stored in the DB
  $imported_results = variable_get('mynewsdesk_data');
 
  $options = array();
  // Create table structure with received data from MyNewsDesk
  $options = create_table($imported_results);
  
  // Existing references to mynewsdesk nodes
  $existing_db = check_existing_nodes();
  // Variable for JavaScript
  $settings['table_data'] = $existing_db;
 
  drupal_add_js(drupal_get_path('module','ef_my_news_desk') . '/ef_my_news_desk.js');
  // Add variable for JavaScript
  drupal_add_js(array('ef_my_news_desk' => $settings), 'setting');
  drupal_add_css(drupal_get_path('module', 'ef_my_news_desk') . '/ef_my_news_desk.css');
  
  $form['table'] = array
  (
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
    '#multiple' => TRUE,
    '#empty' => t('No Content available.'),
  );

  $form['import'] = array(
   '#type' => 'submit',
   '#value' => t('Import'),
   '#prefix' => '<div class="form-submit-button">',
   '#suffix' => '</div>',
   );
  
  $form['#submit'][] = 'table_submit'; 
  
  return $form;
}
/*
  Callback function for Form submit.
*/
function table_submit($form,&$form_state){
  // Update table button
  if($form_state['clicked_button']['#value'] == 'Update table') {
    if(!empty($form_state['values']['type'])){


      $chosen_types = $form_state['values']['type'];

      foreach ($chosen_types as $key => $value) {
        // Build up the request depending on the filter input
        $request = 'http://www.mynewsdesk.com/services/pressroom/search/QyV_cMTUnQb_GEKta7cd0Q/?';
        if(!empty($form_state['values']['type'])){
          $request = $request . 'type_of_media=' . $value . '&';
        }
        if($form_state['values']['limit'] != 0){
          $request = $request . 'limit=' . $form_state['values']['limit'] . '&';
        }
        if(strlen($form_state['input']['date_start']['date']) > 0 && strlen($form_state['input']['date_end']['date']) > 0) {
          $request = $request . 'date_start=' . $form_state['input']['date_start']['date'] . '&date_end=' . $form_state['input']['date_end']['date'] . '&';
        }
        $request = $request . 'format=json';
        $data_json = file_get_contents($request);
        $data = json_decode($data_json);
        
        $data_array[] = $data->search_result->items->item; 
      }
      // Manage all possible cases to create the complete dataset
      if (sizeof($data_array) == 1) {
        $complete_dataset = $data_array[0];
      } elseif(sizeof($data_array) == 2) {
        $complete_dataset = array_merge($data_array[0],$data_array[1]); 
      } elseif (sizeof($data_array == 3)) {
        $complete_dataset = array_merge($data_array[0],$data_array[1],$data_array[2]);
      }

      $complete_dataset = change_key($complete_dataset);
      variable_set('mynewsdesk_data',$complete_dataset);
      
      $form_state['rebuild'] = TRUE;
    }else{
      form_set_error("type","Select at least one value for Content Type");
    }
  }
  
  // Import button
  if($form_state['clicked_button']['#value'] == 'Import') {
    $counter = 0;
    global $user;
    $imported_results = variable_get('mynewsdesk_data');
    if(!checkbox_selected($form_state['values']['table'])){
      form_error($form['table'],"Select at least one node to Import.");
    }
    foreach ($form_state['values']['table'] as $key => $value) {
      if($value != 0) {
        $counter++;
        $flag_id = exists($value);
        if(empty($flag_id)) {
          // Create new node
          $node = new stdClass();
          $node->uid = $user->uid;
          $node->type = 'ef_news';
          $node->title = $imported_results[$value]->header;
          $node->field_ef_mynewsdesk_id['und'][0]['value'] = $value;
        } else {
          // Update existing node
          $node = node_load($flag_id);
        }    
        $node->body[$imported_results[$value]->language][0]['value'] = $imported_results[$value]->body;
        $node->body[$imported_results[$value]->language][0]['summary'] = $imported_results[$value]->summary;
        $node->body[$imported_results[$value]->language][0]['format'] = 'filtered_html';
        
        // Image creation and assigning
        if(isset($imported_results[$value]->image)){
          $image = system_retrieve_file($imported_results[$value]->image,NULL,TRUE);
          $node->field_ef_main_image['und'][0] = (array)$image;
        }
        
        // Links
        foreach ($imported_results[$value]->links->link as $k => $v) { 
          if(is_array($imported_results[$value]->links->link)){    
            $node->field_ef_ext_reference['und'][$k]['url'] = $v->url;
            $node->field_ef_ext_reference['und'][$k]['title'] = $v->text;
          }else{
            $node->field_ef_ext_reference['und'][0]['url'] = $imported_results[$value]->links->link->url;
            $node->field_ef_ext_reference['und'][0]['title'] = $imported_results[$value]->links->link->text; 
          }
        }
        //Field ef_themes
        foreach ($imported_results[$value]->tags->tag as $index => $val) {
          $found_values = taxonomy_get_term_by_name($val);
          foreach ($found_values as $a => $b) {
            // 4 value refers to the vid of ef_themes taxonomy
            if($b->vid === '4')
              $node->field_ef_theme['und'][]['tid'] = $b->tid;
          }
        }  
        // Related Content field
        foreach ($imported_results[$value]->related_items->related_item as $c => $d) {
          if($d->type_of_media === 'blog_post' || $d->type_of_media === 'pressrelease' || $d->type_of_media === 'news'){
            // Check if the mynewsdesk id is related to a node in the DB
            $node_id = exists($d->item_id);
            if(!empty($node_id))
            $node->field_ef_related_content['und'][]['target_id'] = $node_id;
          }
        }
        // Published at MyNewsDesk value
        $node->published_at = strtotime($imported_results[$value]->published_at);
        // Published automatically
        $node->status = 1;
        // Promoted to front page
        $node->promote = 1;
        //Saving
        node_object_prepare($node);
        $node = node_submit($node); // Prepare node for saving
        node_save($node);
        drupal_set_message("'" . $imported_results[$value]->header . "' has been saved successfully with " . "<a href='/node/"
          . $node->nid . "'>" . $node->nid . "</a> ID.");
      }
    }
    if($counter != 0){
      drupal_set_message("\n\n" . $counter . " nodes have been saved");    
    }
    //$form_state['rebuild'] = TRUE;
  }
}