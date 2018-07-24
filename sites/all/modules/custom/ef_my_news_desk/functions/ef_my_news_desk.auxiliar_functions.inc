<?php
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
    $existing = '  ';
    
    $title = $value->header;
    $nid = exists($value->id);
    if($nid){
      $title = "<a href='/node/" . $nid . "' title='new tab will be opened'>" . $title . "</a>";
    }
    $options[$value->id] = array(
        'title' => $title,
        'type' => $value->type_of_media,
        'published_at' => $value->published_at,
        'language' => $value->language,
        'imported' => $existing,
      );
  }
  return $options;
}
function change_key($array){
  foreach ($array as $key => $value) {
    $final_array[$value->id] = $array[$key];
  }
  return $final_array;
}
function check_existing_nodes(){
  $query = "SELECT DISTINCT a.field_ef_mynewsdesk_id_value
            FROM field_data_field_ef_mynewsdesk_id a
            WHERE a.field_ef_mynewsdesk_id_value IS NOT NULL";
  $result = db_query($query)->fetchAll();

  return $result;
} 
function exists($mynewsdesk_id){
  $query = "SELECT DISTINCT a.entity_id
            FROM field_data_field_ef_mynewsdesk_id a
            WHERE a.field_ef_mynewsdesk_id_value = :id";
  $result = db_query($query,array(':id' => $mynewsdesk_id))->fetchAll();

  return $result[0]->entity_id;
} 
function checkbox_selected($array){
  $found = FALSE;
 foreach ($array as $key => $value) {
   if($value != 0){
    $found = TRUE;
    break;
   }
 }
 return $found;
}