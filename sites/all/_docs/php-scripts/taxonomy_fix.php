<?php 
$query = new EntityFieldQuery();
$query
->entityCondition('entity_type', 'taxonomy_term', '=');
$result = $query->execute();
foreach($result['taxonomy_term'] as $record) {
	   $term_to_change= taxonomy_term_load($record->tid);
	   if(empty($term->name)){
	   $original_name = $term_to_change->name_original;
	   $original_description= $term_to_change->description_original;
	   $term_to_change->name=$original_name;
	   $term_to_change->description=$original_description;
	   taxonomy_term_save($term_to_change);
	   }
}
