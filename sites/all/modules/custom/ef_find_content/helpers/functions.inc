<?php

/*
* retrieves all existent country groups naturally ordered
*/
function getExistentCountryGroupsId(){

  $sql = "SELECT DISTINCT gid
          FROM groups g
          ORDER BY g.title ASC";

  $result = db_query($sql)->fetchAll();

  return $result;
}
/*
* retrieves all authors by receiving a country group id
*/
function getAuthorsbyCountryGroup($country_group_id){

  $sql = "SELECT go.title, g.mid, u.name
          FROM users u
          INNER JOIN group_membership g ON u.uid = g.uid
          INNER JOIN groups go ON g.gid = go.gid
          INNER JOIN group_membership_role gmr ON gmr.mid = g.mid
          WHERE g.gid = '$country_group_id'
          AND gmr.role = 'country_group_member'";

  $result = db_query($sql)->fetchAll();

  return $result;
}

function getCountries() {

  $sql = "SELECT * from countries_country";
  $countries = db_query($sql)->fetchAll();

  return $countries;
}


function getAuthors() {

    $sql = "SELECT distinct(field_ef_assign_to_target_id) from field_data_field_ef_assign_to";
    $authors = db_query($sql)->fetchAll();

    return $authors;
}

function getAuthorNames($uid) {

  $sql = "SELECT * from users where uid = :uid";
  $name = db_query($sql, array(':uid' => $uid))->fetchAll();

  return $name;
}

function getArrayAuthors($authors) {

//$authors_list[0] = '- Any -';

foreach ($authors as $key => $value) {
    $user = user_load($key);
    $name = $user->field_ef_first_name['und'][0]['value'];
    $surname = $user->field_ef_last_name['und'][0]['value'];
    $username = $user->name;

    $authors_list[$key] = $name." ".$surname." - ".$username;
  }

  return $authors_list;
}

function getArrayCountries($countries) {

  $size = sizeof($countries);

  for($i = 0; $i < $size; $i++) {

      $country_list[$countries[$i]->iso2] = $countries[$i]->name;

    }

    return $country_list;
}

// funtion for collpased true or false
function get_current_fieldset_state($param){
  foreach ($param as $key => $value) {

      if( empty($value)){

        return true;
      }else{
        if($value=='All'){

          return true;
        }else{

          return false;
          break;
        }
      }
  }
}
function nuts_find_content(){


  $sql = "SELECT a.name
          FROM taxonomy_term_data a
          INNER JOIN taxonomy_term_hierarchy b ON a.tid = b.tid
          WHERE a.vid = (SELECT a.vid
            FROM taxonomy_vocabulary a
            WHERE a.name LIKE '%nuts%')
          AND b.parent = 0";


  $result = db_query($sql)->fetchAll();


  $options = array();

  foreach ($result as $key => $value) {

      $options[$value->name] = $value->name;
  }

  return $options;

}
