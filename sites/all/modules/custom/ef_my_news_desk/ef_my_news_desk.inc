<?php
/*
  Form building function
*/
function mynewsdesk_form($form,&$form_state){
  dpm('a');
  // Create FORM elements 
  $form['type'] = array(
    '#type' => 'select',
    '#title' => 'Choose Content type',
    '#options' =>
      array(
        'blog_post' => 'blog post',
        'pressrelease' => 'press release',
        'news' => 'news',
      ),
    '#multiple' => TRUE,
    //'#required' => TRUE,
    '#default_value' => array('news','blog_post','pressrelease'),
    '#attributes' => array(
      'class' => array('chosen-widget'),
    ),
  );
  
  $form['limit'] = array(
    '#type' => 'select',
    '#title' => t('Number of elements to show'), 
    '#options' => 
      array(
        50 => t('All'),
        5 => t('5'),
        10 => t('10'),
        20 => t('20'),
        30 => t('30'),
      ),
    '#description' => 'By default 20 is selected',
    );

  $form['date_start'] = array(
    '#type' => 'date_popup',
    '#title' => 'Start Date',
    '#date_format' => 'd-m-Y',
    '#element_validate' => array('date_checking'),
    '#default_value' => 0,
    );

  $form['date_end'] = array(
    '#type' => 'date_popup',
    '#title' => 'End Date',
    '#date_format' => 'd-m-Y',
    '#default_value' => 0,
    );
  
  $form['update'] = array(
   '#type' => 'submit',
   '#value' => t('Update table'),
   '#prefix' => '<div class="form-submit-button">',
   '#suffix' => '</div>',
   );

  $form['import'] = array(
   '#type' => 'submit',
   '#value' => t('Import'),
   '#prefix' => '<div class="form-submit-button">',
   '#suffix' => '</div>',
   );

  $form['information'] = array(
    '#markup' => 'Select the nodes before pressing Import button. If a existing node is selected, 
    it will be updated according to the last version provided by MyNewsDesk.');
  
  // Get All the data from MyNewsDesk  
  // this will require php.ini to be setup to allow fopen over URLs
  // Make one request per content type involved. Not possible to request all nodes.
  $news_data = json_decode(file_get_contents("http://www.mynewsdesk.com/services/pressroom/search/QyV_cMTUnQb_GEKta7cd0Q/?type_of_media=news&format=json")); 
  $blog_post_data = json_decode(file_get_contents("http://www.mynewsdesk.com/services/pressroom/search/QyV_cMTUnQb_GEKta7cd0Q/?type_of_media=blog_post&format=json")); 
  $pressrelease_data = json_decode(file_get_contents("http://www.mynewsdesk.com/services/pressroom/search/QyV_cMTUnQb_GEKta7cd0Q/?type_of_media=pressrelease&format=json")); 
    
  $news_array = $news_data->search_result->items->item;
  $blog_post_array = $blog_post_data->search_result->items->item;
  $pressrelease_array = $pressrelease_data->search_result->items->item;

  //Merge obtained data sets into one array
  $imported_results = array_merge($news_array, $blog_post_array, $pressrelease_array);
 
  // Build header for tableselect. Header keys need to be the same as option keys for correspondence.
  $header = array(
    'title' => t('Title'),
    'type' => t('Media type'),
    'published_at' => t('Published at'),
    'existing' => t('Existing'),
  );
  // Modify array before saving it as session variable. Change key value to MyNewsDeskId for easier manipulation
  change_key($imported_results);
  
  $options = array();
  // Create table structure with received data from MyNewsDesk
  $options = create_table($imported_results);
  
  $form['table'] = array
  (
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
    '#multiple' => TRUE,
  );
    
  $form['#submit'][] = 'table_submit'; 

  return $form;
}
/*
  Callback function for Update table button. A new request URL will be created based on provided values through filters.
*/
function table_submit($form,&$form_state){
  if($form_state['clicked_button']['#value'] == 'Update table'){
    //$form_state['rebuild'] = TRUE;
    dpm($form_state);
  
    $chosen_types = $form_state['values']['type'];

    foreach ($chosen_types as $key => $value) {

      $request = 'http://www.mynewsdesk.com/services/pressroom/search/QyV_cMTUnQb_GEKta7cd0Q/?';
      if(!empty($form_state['values']['type'])){
        $request = $request . 'type_of_media=' . $value . '&';
      }
      if($form_state['values']['limit'] != 0){
        $request = $request . 'limit=' . $form_state['values']['limit'] . '&';
      }
      if(strlen($form_state['input']['date_start']['date']) > 0 && strlen($form_state['input']['date_end']['date']) > 0){
        $request = $request . 'date_start=' . $form_state['input']['date_start']['date'] . '&date_end=' . $form_state['input']['date_end']['date'] . '&';
      }
      $request = $request . 'format=json';
      dpm($request);
      $data_json = file_get_contents($request);
      $data = json_decode($data_json);
      

      $data_array[] = $data->search_result->items->item;
    }
    $complete_dataset = array_merge($data_array[0],$data_array[1],$data_array[2]);

    $options = array();

    $options = create_table($complete_dataset);
    
    $form_state['table']['#options'] = $options;
    $form_state['#rebuild'] = TRUE;
  }
  if($form_state['clicked_button']['#value'] == 'Import'){

    global $user;
    foreach ($form_state['values']['table'] as $key => $value) {
      if($value != 0){
        dpm($_SESSION);
        // Create the node will all values
        $node = new stdClass();
        $node->uid = $user->uid;    
        $node->type = 'ef_news';
        $node->field_ef_mynewsdesk_id = $value;
        $node->title = $_SESSION['mynewsdesk'][$value]->header;
        $node->body['en'][0]['value'] = $_SESSION['mynewsdesk'][$value]->body;
        $node->body['en'][0]['summary'] = $_SESSION['mynewsdesk'][$value]->summary;
        $node->body['en'][0]['format'] = 'filtered_html';
        // Published by default
        $node->status = 1;
        // Promoted to front page by default
        $node->promote = 1;
        //Necesito hacer que corresponda con la taxonomia
        //Metemos el iso2
        //$node->field_ef_country = $_SESSION['mynewsdesk'][$value]->pressroom;
        
        //Saving
        node_object_prepare($node);
        $node = node_submit($node); // Prepare node for saving
        node_save($node);
        
      }
    }
    
  
    /*
 // Saving
    node_object_prepare($node);
    $node = node_submit($node); // Prepare node for saving
    node_save($node);
*/
  }

  // This line makes the form remember introduced values
}

// Form Validate function
function date_checking($form,&$form_state){
  
  if(strlen($form_state['input']['date_start']['date']) > 0 && strlen($form_state['input']['date_end']['date']) == 0){
    form_set_error('date_end','Both values are needed for filtering by date.');
  }
  if(strlen($form_state['input']['date_end']['date']) > 0 && strlen($form_state['input']['date_start']['date']) == 0){
    form_set_error('date_start','Both values are needed for filtering by date.');
  }
}

// Function to create the tableselect structure. Receives converted json data and an empty array to fill in
function create_table($complete_dataset){
  $options = array();
  foreach($complete_dataset as $key => $value)
  {
    //Check if the node exists in DB
    $query = "SELECT *
              FROM node a
              INNER JOIN field_data_field_ef_mynewsdesk_id b ON a.nid = b.entity_id
              WHERE b.field_ef_mynewsdesk_id_value =" . $value->id;
    $result = db_query($query)->fetchAll();
       
    if(!empty($result)){
      $existing = 'Yes';
    }else
      $existing = 'No';
      
    $options[$value->id] = array(
        'title' => $value->header,
        'type' => $value->type_of_media,
        'published_at' => $value->published_at,
        'existing' => $existing,
      );
  }
  return $options;
}
function change_key($array){
  foreach ($array as $key => $value) {
    $final_array[$value->id] = $array[$key];
  }
  // Store imported results for importing data later on
  $_SESSION['mynewsdesk'] = $final_array;
}
  
/*
$node = new stdClass();
    $node = node_basic_conf($node);

    // title
    $node->title = $type_of_report . ": " . $form_state['values']['title'];

    // user
    $node->uid = $user->uid;

    // Type of report
    $node->field_ef_type_of_report['und'][0]['value'] = 0;

    // Year
    $year = $form_state['values']['year'].'-10-02';
    $node->field_ef_year['und'][0]['value'] = strtotime($year);

    // Dates
    //$node->field_ef_approved_for_payment['und'][0]['value'] = $form_state['values']['approved_for_payment_from'];
    $node->field_ef_report_delivery_date['und'][0]['value'] = $form_state['values']['scheduled_date_from'];
    $node->field_ef_requested_on['und'][0]['value'] = strtotime($form_state['values']['requested_on']);
    // Country
    $country_EU_tid = taxonomy_get_term_by_name('EU level', $vocabulary = 'country');
    $node->field_country['und'][0]['tid'] = key($country_EU_tid);

    $group = group_load_by_name($type_of_report);
    $node = node_contract($node, $group);

    // Saving
    node_object_prepare($node);
    $node = node_submit($node); // Prepare node for saving
    node_save($node);

    workbench_moderation_moderate($node, 'requested');

    $node_url = url(drupal_get_path_alias('node/'. $node->nid),array('absolute' => TRUE));

    drupal_set_message( "Annual Progress Report -> '" . $node->title . "' saved!\n");
    drupal_set_message(l("View APR: " . $node->title, $node_url));

    */