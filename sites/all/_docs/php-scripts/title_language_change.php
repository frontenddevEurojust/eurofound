<?php 


echo "title language change start\n";

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node');
$result = $query->execute();
$result_set = $result['node'];

foreach ($result_set as $key) {
	$changed = 0;
	$node = node_load($key->nid);
	$language = $node->language;
	$title = $node->title;
	if ($title == '') {
		$title = $node->title_original;
		$node->title = $title;
		$changed = 1;

	}
	if ($language =='und') {
		$node->language ='en';
		$changed = 1;
	}
	if ($changed) {
		node_save($node);
	}
}

echo "title language change finished\n";

?>