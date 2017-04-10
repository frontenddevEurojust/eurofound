<?php


/** 
  * Modify the already existing nodes whose term references we want to delete and update into several seperate ones.
  * We get all nodes and their revisions based on the $id1 and replace it with $id2 , $id3 , $id4 . 
 */


//First Change//
		
$id1 = get_term_tid('Companies; Employees','ef_regulation_fundings');
$id2 = get_term_tid('Companies','ef_regulation_fundings');
$id3 = get_term_tid('Employee','ef_regulation_fundings');
change_terms($id1,$id2,$id3,0);
// Delete the term that will not be used any more.
taxonomy_term_delete($id1);
	
//Second Change//	
$id1 = get_term_tid('National; Companies','ef_regulation_fundings');
$id2 = get_term_tid('National','ef_regulation_fundings');
$id3 = get_term_tid('Companies','ef_regulation_fundings');
change_terms($id1,$id2,$id3,0);
// Delete the term that will not be used any more.
taxonomy_term_delete($id1);



//Third Change//
$id1 = get_term_tid('National; Companies; Employees','ef_regulation_fundings');
$id2 = get_term_tid('National','ef_regulation_fundings');
$id3 = get_term_tid('Companies','ef_regulation_fundings');
$id4 = get_term_tid('Employee','ef_regulation_fundings');
change_terms($id1,$id2,$id3,$id4);
// Delete the term that will not be used any more.
taxonomy_term_delete($id1);


//Fourth Change//
$id1 = get_term_tid('National; Employer','ef_regulation_fundings');
$id2 = get_term_tid('Employer','ef_regulation_fundings');
$id3 = get_term_tid('National','ef_regulation_fundings');
change_terms($id1,$id2,$id3,0);
// Delete the term that will not be used any more.
taxonomy_term_delete($id1);


//Fifth Change//
$id1 = get_term_tid('Employer; National Government','ef_regulation_fundings');
$id2 = get_term_tid('Employer','ef_regulation_fundings');
$id3 = get_term_tid('National Government','ef_regulation_fundings');
change_terms($id1,$id2,$id3,0);
// Delete the term that will not be used any more.
taxonomy_term_delete($id1);


function change_terms($id1,$id2,$id3,$id4){
	$query = new EntityFieldQuery();
	$query->entityCondition('entity_type', 'node')
	->entityCondition('bundle', 'ef_regulation')
	->fieldCondition('field_ef_regulation_funding', 'tid', $id1);
	$result = $query->execute();
	if (isset($result['node'])) {
      $news_items_nids = array_keys($result['node']);
	  foreach ($news_items_nids as $term_id){
	    //Fetch all  nodes + revision of  ef_regulation type and the speficic  ef_regulation_funding term id .
		$entity_type = 'node';
		$value = $term_id;
		$entity_info = entity_get_info($entity_type);
		$query = db_select($entity_info['revision table'], 'revision');
        $query->fields('revision', array($entity_info['entity keys']['id'], $entity_info['entity keys']['revision']))
		->condition('revision.' . $entity_info['entity keys']['id'], $value);
		$revisions = $query
		->execute()
		->fetchAllAssoc($entity_info['entity keys']['revision']);
        // Creation of nodes and revisions in the array entities
        $entities = array();
		foreach ($revisions as $key => $revision) {
		  $entities[] = entity_revision_load($entity_type, $key);
        }
		foreach ($entities as $my_term) {
		  $temp_id =$my_term->nid;
		  $temp_vid = $my_term ->vid;
		  $my_node = node_load($term_id,$temp_vid);
		  //Extra check in case the revisions have different term reference from each other.
		  if($my_node->field_ef_regulation_funding[LANGUAGE_NONE][0]['tid']=$id1){
		    $my_node->field_ef_regulation_funding[LANGUAGE_NONE][0]['tid']=$id2;
			$my_node->field_ef_regulation_funding[LANGUAGE_NONE][1]['tid']=$id3;
			if($id4!=0){
			  $my_node->field_ef_regulation_funding[LANGUAGE_NONE][2]['tid']=$id4;
			}
			$my_node = node_submit($my_node); // Prepare node for saving
			node_save($my_node);
		  }
	    }
	  }

    }	
}

/**
	*Function to get the term id based on the $name of the term and the specific vocabulary( $voc_name) 
**/
function get_term_tid($name,$voc_name){
	$vocabulary = taxonomy_vocabulary_machine_name_load($voc_name);
	$vid = $vocabulary->vid;
	$tree = taxonomy_get_tree($vid);
	foreach($tree as $term){
	  if ($term->name==$name) {
	    return $term->tid;
	  }
	}
	echo "Error Wrong vocabulary term name";
	return -1;
}