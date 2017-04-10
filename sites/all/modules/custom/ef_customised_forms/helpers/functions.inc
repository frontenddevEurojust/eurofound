<?php

/**
 * Retrieves options sorted by the taxonomy weight
 *
 * @param array $options
 *   The taxonomy form options
 *
 * @return array
 *   The same options sorted by weight
 */
function sort_taxonomy_by_weight($options){

  $weights = array();
    foreach ($options as $key => $value) {
  	$term = taxonomy_term_load($key);
  	$weights[$term->weight] = $term->tid;
  }

  ksort($weights);

  $ops = array();
  foreach ($weights as $k => $v) {
  	$term = taxonomy_term_load($v);
  	$ops[$term->tid] = $term->name;
  }

  return $ops;

}
/**
* Retrieves all selective sectors for Articles, Cases studies of EurWork
*
*
* @return array
*/

function selective_sector_eurwork_view(){

   $sql = "SELECT DISTINCT t.tid,t.name
            FROM node n
            INNER JOIN field_data_field_ef_sector s ON n.nid = s.entity_id
            INNER JOIN taxonomy_term_data t ON t.tid = s.field_ef_sector_tid
            INNER JOIN field_data_field_ef_observatory obs ON n.nid = obs.entity_id 
            AND n.`status` = 1
            ORDER By t.name ASC";


  $result = db_query($sql)->fetchAll();
  
  
  $options = array();

  foreach ($result as $key => $value) {
    $options[$value->tid] = $value->name;
  }
  
  //array_unshift($options,'Any');
  
  return $options;
}