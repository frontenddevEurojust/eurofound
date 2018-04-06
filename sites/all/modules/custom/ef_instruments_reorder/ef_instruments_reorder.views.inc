<?php

/**
* Implements hook_field_views_query_alter().
*/
function ef_instruments_reorder_views_query_alter(&$view, &$query)
{
	//View table reorders country using its TID. In order to sort using country name, the default tid order is replaced by the term name.
	if($view->name === 'erm_support_instruments' && $view->query->orderby[0]['field'] == 'field_data_field_country_erm_si.field_country_erm_si_tid')
	{
		$view->query->orderby[0]['field'] = 'taxonomy_term_data_field_data_field_country_erm_si.name';
	}
}