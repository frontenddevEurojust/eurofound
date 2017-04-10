<?php

function get_years_list($type){

    $select_years = "SELECT distinct from_unixtime(publication_date.published_at, '%Y')
            as fecha
            from publication_date
            inner join node on node.nid = publication_date.nid
            where node.type like :type
            and node.status = '1'
            and from_unixtime(publication_date.published_at, '%Y') is not null
            order by fecha asc";

  $results = db_query($select_years, array(':type' => '%' . $type . '%'))->fetchAll();

  $years = array();
  $min_year = $results[0]->fecha;
  $max_year = date('Y');

  foreach (range($max_year, $min_year) as $i => $year) {
    $years[] = $year;
  }


  return $years;

  $results = db_query($select_years, array(':type' => '%' . $type . '%'))->fetchAll();

  $years = array();
  $min_year = $results[0]->fecha;
  $max_year = date('Y');

  foreach (range($max_year, $min_year) as $i => $year) {
    $years[] = $year;
  }


  return $years;

}

/**
* Retrieves all selective topics of EurWork
*
*
* @return array
*/

function selective_topic_eurwork(){

  $sql = "SELECT DISTINCT t.tid,t.name
            FROM node n
            INNER JOIN field_data_field_ef_topic s ON n.nid = s.entity_id
            INNER JOIN taxonomy_term_data t ON t.tid = s.field_ef_topic_tid
            INNER JOIN field_data_field_ef_observatory obs ON n.nid = obs.entity_id 
            AND n.`status` = 1
            ORDER By t.name ASC";


  $result = db_query($sql)->fetchAll();
  
  
  $options = array();

  foreach ($result as $key => $value) {
    $options[$value->tid] = $value->name;
  }
  
  
  return $options;
  
}
/**
* Retrieves all selective sectors for Articles, Cases studies of EurWork
*
*
* @return array
*/
function selective_country_eurwork(){


  $sql = "SELECT DISTINCT cc.name, cc.name
            FROM node n
            INNER JOIN field_data_field_ef_country c ON n.nid = c.entity_id
            INNER JOIN countries_country cc ON cc.iso2 = c.field_ef_country_iso2
            INNER JOIN field_data_field_ef_observatory obs ON n.nid = obs.entity_id
            WHERE (n.`type` = 'ef_report' || n.`type` = 'ef_case_study')  
            AND obs.field_ef_observatory_tid = 13188
            AND n.`status` = 1
            ORDER BY cc.name ASC ";


  $result = db_query($sql)->fetchAll();
  

  
  $options = array();

  foreach ($result as $key => $value) {

      $options[$value->name] = $value->name;
  }
  
 
  
  return $options;
  
}
/**
* Retrieves all selective sectors for Articles, Cases studies of EurWork
*
*
* @return array
*/

function selective_sector_eurwork(){

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
