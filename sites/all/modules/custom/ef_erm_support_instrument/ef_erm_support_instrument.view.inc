<?php

function ef_erm_support_instrument_views_query_alter(&$view, &$query){

	if(isset($view->name)){
		if($view->name == 'erm_support_instruments'){
			if(isset($query->table_queue['workbench_moderation_node_history'])){
				$query->table_queue['workbench_moderation_node_history']['join']->left_field = 'nid';
				$query->table_queue['workbench_moderation_node_history']['join']->field = 'nid';

				$query->table_queue['workbench_moderation_node_history']['join']->definition['left_field'] = 'nid';
				$query->table_queue['workbench_moderation_node_history']['join']->definition['field'] = 'nid';
			}
		}
	}

}
