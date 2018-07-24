<?php

echo 'Adding Terms...';

/*
 ** populates prexisting vocabularies
 */
set_time_limit(5400);
define('DRUPAL_ROOT', getcwd() . "/../../../../");
require_once DRUPAL_ROOT . 'includes/bootstrap.inc';
set_include_path(get_include_path() . PATH_SEPARATOR . DRUPAL_ROOT);
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);



/**
* Helper function
*
* Assumes Drupal 7.14 or later (for second parameter of taxonomy_get_term_by_name).
*/
function ef_features_safe_add_terms($vocabulary_machine_name, $vocabulary_name, $term_names) {
  //  Make sure the vocabulary exists.  This won't apply all desired options
  //  (description, etc.) but that's okay.  Features will do that later. 
  //  For now, we just need somewhere to stuff the terms.
  $vocab = taxonomy_vocabulary_machine_name_load($vocabulary_machine_name);
  if ($vocab === FALSE) {
    $vocab = (object)array('name' => $vocabulary_name,
                           'machine_name' => $vocabulary_machine_name);
    $vocab = taxonomy_vocabulary_machine_name_load($vocabulary_machine_name);
  }
  $vid = $vocab->vid;
  $vocab_tree = taxonomy_get_tree($vid);
  foreach($vocab_tree as $term){
	  taxonomy_term_delete($term->tid);
  }

  if (is_object($vocab) && property_exists($vocab, 'vid') && $vocab->vid > 0) {
    //  Load each term.
    foreach ($term_names as $term_name) {
      $term = taxonomy_get_term_by_name($term_name, $vocabulary_machine_name);
      if (count($term) == 0) {
        $term = (object)array('name' => $term_name,
                              'vid' => $vocab->vid);
        taxonomy_term_save($term);
      }
    }
  } 
}


echo 'Terms added successfully.';

?>