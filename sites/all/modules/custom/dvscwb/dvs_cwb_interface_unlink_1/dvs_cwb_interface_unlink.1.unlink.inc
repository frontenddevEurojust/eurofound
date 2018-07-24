<?php

/**
 * Unlink dvs_cwb_interface_unlink_1_views_view().
 */
function dvs_cwb_interface_unlink_1_views_view() {
$view = new view();
$view->name = 'context';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CWB Context';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Collective wage bargaining';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
  'edit_node' => 'edit_node',
);
/* Header: Tabs navigation */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Tabs navigation';
$handler->display->display_options['header']['php']['php_output'] = '<?php
  $country_tid = 11;
  if(isset($_GET["country_tid"])){
    $country_tid = $_GET["country_tid"];
  }
  
  //----------

  $year = 2012;
  $yearParamA = "year"; 
  $yearParamB = "year[value][year]";
  $yearParam = $yearParamA;
 

  //$temp = $_GET[\'year\'];
  $temp = $_GET[$yearParam]["value"]["year"];
  if(isset($temp)){
      $year = $temp;
  } 
  //if(isset($_GET[$yearParam]["value"]["year"]) && is_int($_GET[$yearParam]["value"]["year"]) ){
  //      $year =  $_GET[$yearParam]["value"]["year"];
  //}
?>

<div class="horizontal-tabs"><ul class="horizontal-tabs-list">
    <li tabindex="-1" class="contextTab horizontal-tab-button horizontal-tab-button-0 first selected"><a href="context?<?php print($yearParamB);?>=<?php print($year);?>"><strong>Context</strong></a></li>    
    <li tabindex="-1" class="outcomesTab horizontal-tab-button horizontal-tab-button-1"><a href="outcomes?<?php print($yearParamA);?>=<?php print($year);?>&field_variables_tid=91"><strong>Outcomes</strong></a></li>  
    <li tabindex="-1" class="timeLineTab horizontal-tab-button horizontal-tab-button-2"><a href="eiro-timeline?country_tid=<?php print($country_tid);?>"><strong>Time line</strong></a></li>  
    <li tabindex="-1" class="countryInfoTab countriesMetaDataTab horizontal-tab-button horizontal-tab-button-3"><a href="sources"><strong>Sources</strong></a></li>  
</ul></div>
';
/* Header: Global: PHP */
$handler->display->display_options['header']['php_1']['id'] = 'php_1';
$handler->display->display_options['header']['php_1']['table'] = 'views';
$handler->display->display_options['header']['php_1']['field'] = 'php';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<h4 class="noDataMessage">No information available</h4>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Field: Content revision: Vid */
$handler->display->display_options['fields']['vid']['id'] = 'vid';
$handler->display->display_options['fields']['vid']['table'] = 'node_revision';
$handler->display->display_options['fields']['vid']['field'] = 'vid';
$handler->display->display_options['fields']['vid']['label'] = '';
$handler->display->display_options['fields']['vid']['exclude'] = TRUE;
$handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
/* Field: Content: Year */
$handler->display->display_options['fields']['field_year']['id'] = 'field_year';
$handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
$handler->display->display_options['fields']['field_year']['field'] = 'field_year';
$handler->display->display_options['fields']['field_year']['label'] = '';
$handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_year']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_type'] = '0';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Anual data */
$handler->display->display_options['fields']['field_data_table']['id'] = 'field_data_table';
$handler->display->display_options['fields']['field_data_table']['table'] = 'field_data_field_data_table';
$handler->display->display_options['fields']['field_data_table']['field'] = 'field_data_table';
$handler->display->display_options['fields']['field_data_table']['label'] = '';
$handler->display->display_options['fields']['field_data_table']['element_label_colon'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_level_coordination' => 'cwb_level_coordination',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Year (field_year) */
$handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
$handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
$handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
$handler->display->display_options['filters']['field_year_value']['value']['value'] = '2013';
$handler->display->display_options['filters']['field_year_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_year_value']['expose']['operator_id'] = 'field_year_value_op';
$handler->display->display_options['filters']['field_year_value']['expose']['label'] = 'Year';
$handler->display->display_options['filters']['field_year_value']['expose']['operator'] = 'field_year_value_op';
$handler->display->display_options['filters']['field_year_value']['expose']['identifier'] = 'year';
$handler->display->display_options['filters']['field_year_value']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['field_year_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
$handler->display->display_options['filters']['field_year_value']['group_info']['label'] = 'Year (field_year)';
$handler->display->display_options['filters']['field_year_value']['group_info']['identifier'] = 'field_year_value';
$handler->display->display_options['filters']['field_year_value']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_year_value']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['field_year_value']['granularity'] = 'year';
$handler->display->display_options['filters']['field_year_value']['year_range'] = '1999:+0';

/* Display: Context */
$handler = $view->new_display('page', 'Context', 'page');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Intro text */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Intro text';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<p>Explore Eurofound’s  quantitative and qualitative information on collectively agreed pay developments from 1999 onwards and other related pay data. The context of the pay bargaining system in the different EU Member States  is also explained.</p>

<p>The bargaining system in the EU Member States is depicted in the map below, drawing on two central indicators: the primary level at which pay is set in the respective country and the degree of coordination. These data stem mainly from Jelle Visser’s ICTWSS (4.0) database, but have been updated and in some cases also slightly revised by the Network of Eurofound Correspondents.</p>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Header: Tabs navigation */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Tabs navigation';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php

	global $base_url;

	$country_tid = ""; 
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'country\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$country_tid = $term->tid;
		break;
	}

	if(isset($_GET["country_tid"])){
		$country_tid = $_GET["country_tid"];
	}

	$year = "2012";
	$yearParamA = "year"; 
	$yearParamB = "year[value][year]";
	$yearParam = $yearParamA;

	//$temp = ;

	 //$_GET[$yearParamA]["value"]["year"];

	if(isset($_GET[$yearParamA]) && !is_array($_GET[$yearParamA]) ){
		$year = isset($_GET[$yearParamA]);
	}else{
		if(isset($_GET[$yearParamA]) && is_array($_GET[$yearParamA])){
			$year = $_GET[$yearParamA]["value"]["year"];
		}
	}

 
	$field_variables_tid = ""; 
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_outcome_variables\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$field_variables_tid = $term->tid;
		break;
	}

?>

<div class="horizontal-tabs">
  <ul class="horizontal-tabs-list">
    <li tabindex="0" class="contextTab horizontal-tab-button horizontal-tab-button-0 first selected">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/context?<?php print($yearParamB);?>=<?php print($year);?>">
        <strong><?php echo t("Context");?></strong>
      </a>
    </li>
    <li tabindex="1" class="outcomesTab horizontal-tab-button horizontal-tab-button-1">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/outcomes?<?php print($yearParamA);?>=<?php print($year);?>&field_variables_tid=<?php echo $field_variables_tid;?>">
        <strong><?php echo t("Outcomes");?></strong></a>
    </li>  
    <li tabindex="2" class="timeLineTab horizontal-tab-button horizontal-tab-button-2">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/eiro-timeline?country_tid=<?php print($country_tid);?>">
        <strong><?php echo t("Time line");?></strong>
      </a>
    </li>  
    <li tabindex="3" class="countryInfoTab countriesMetaDataTab horizontal-tab-button horizontal-tab-button-3">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/sources?country_tid=<?php print($country_tid);?>">
        <strong><?php echo t("Sources");?></strong>
      </a>
    </li>
  </ul>

</div>
';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'minute';
$handler->display->display_options['path'] = 'observatories/eurwork/collective-wage-bargaining/context';

$view->save();
$view = new view();
$view->name = 'cwb_countries_meta_data';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CWB Country Info page - Sources';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Collective wage bargaining';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Intro text */
$handler->display->display_options['header']['area_1']['id'] = 'area_1';
$handler->display->display_options['header']['area_1']['table'] = 'views';
$handler->display->display_options['header']['area_1']['field'] = 'area';
$handler->display->display_options['header']['area_1']['ui_name'] = 'Intro text';
$handler->display->display_options['header']['area_1']['empty'] = TRUE;
$handler->display->display_options['header']['area_1']['content'] = '<p>Explore Eurofound’s  quantitative and qualitative information on collectively agreed pay developments from 1999 onwards and other related pay data. The context of the pay bargaining system in the different EU Member States  is also explained.</p>
<p>Information about the sources used can be found here for the time series on collectively agreed pay reported under ‘Outcomes’ (see ‘Outcomes’ tab). The sources vary  in many respects, such as the extent to which the data cover all collective agreements or just parts (for example, bargaining outcomes achieved by certain actors or at certain bargaining levels), whether they cover all types of employees or just some (for example, only white-collar workers), or whether the data have been weighted. All time series data should be read in conjunction with the source information. </p>';
$handler->display->display_options['header']['area_1']['format'] = 'full_html';
/* Header: Display filters */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Display filters';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<style>
#edit-country-tid-wrapper, #edit-field-country-tid-wrapper {
    display: inline-block !important;
}
</style>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Header: Tabs navigation */
$handler->display->display_options['header']['php_selective']['id'] = 'php_selective';
$handler->display->display_options['header']['php_selective']['table'] = 'views';
$handler->display->display_options['header']['php_selective']['field'] = 'php_selective';
$handler->display->display_options['header']['php_selective']['ui_name'] = 'Tabs navigation';
$handler->display->display_options['header']['php_selective']['empty'] = TRUE;
$handler->display->display_options['header']['php_selective']['php_output'] = '<?php	
       global $base_url;

	$country_tid = ""; 
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'country\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$country_tid = $term->tid;
		break;
	}
	if(isset($_GET["country_tid"])){
		$country_tid = $_GET["country_tid"];
	}
  
  //----------

  $year = 2012;
  $yearParamA = "year"; $yearParamB = "year[value][year]";
  $yearParam = $yearParamA;
  if(isset($_GET[$yearParamA]) && is_int($_GET[$yearParamA]) ){
    	$year = $_GET[$yearParam];
  }else
  if(isset( $_GET[$yearParam]["value"]["year"] ) && is_int( $_GET[$yearParam]["value"]["year"]) ){
    		$year =  $_GET[$yearParam]["value"]["year"];
  }
	$field_variables_tid = ""; 
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_outcome_variables\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$field_variables_tid = $term->tid;
		break;
	}
?>



<div class="horizontal-tabs"><ul class="horizontal-tabs-list">
		<li tabindex="-1" class="contextTab horizontal-tab-button horizontal-tab-button-0 first">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/context?<?php print($yearParamB);?>=<?php print($year);?>">
				<strong>Context</strong>
			</a>
		</li>		
		<li tabindex="-1" class="outcomesTab horizontal-tab-button horizontal-tab-button-1">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/outcomes?<?php print($yearParamA);?>=<?php print($year);?>&field_variables_tid=<?php echo $field_variables_tid;?>">
				<strong><?php echo t("Outcomes");?></strong>
			</a>
		</li>	
		<li tabindex="-1" class="timeLineTab horizontal-tab-button horizontal-tab-button-2">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/eiro-timeline?country_tid=<?php print($country_tid);?>">
				<strong><?php echo t("Time line");?></strong>
			</a>
		</li>	
		<li tabindex="-1" class="countryInfoTab countriesMetaDataTab horizontal-tab-button horizontal-tab-button-3 selected">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/sources?country_tid=<?php print($country_tid);?>">
				<strong><?php echo t("Sources");?></strong>
			</a>
		</li>	
	</ul></div>';
/* Field: Content: Country */
$handler->display->display_options['fields']['field_country']['id'] = 'field_country';
$handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
$handler->display->display_options['fields']['field_country']['field'] = 'field_country';
$handler->display->display_options['fields']['field_country']['label'] = '';
$handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country']['element_wrapper_type'] = 'h1';
$handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Abstract */
$handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
$handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['label'] = '';
$handler->display->display_options['fields']['field_abstract']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_abstract']['element_class'] = 'abstract';
$handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
/* Field: Content: Total economy */
$handler->display->display_options['fields']['field_total_economy']['id'] = 'field_total_economy';
$handler->display->display_options['fields']['field_total_economy']['table'] = 'field_data_field_total_economy';
$handler->display->display_options['fields']['field_total_economy']['field'] = 'field_total_economy';
$handler->display->display_options['fields']['field_total_economy']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_total_economy']['element_label_type'] = 'h3';
$handler->display->display_options['fields']['field_total_economy']['element_label_colon'] = FALSE;
/* Field: Content: Banking sector */
$handler->display->display_options['fields']['field_banking_sector']['id'] = 'field_banking_sector';
$handler->display->display_options['fields']['field_banking_sector']['table'] = 'field_data_field_banking_sector';
$handler->display->display_options['fields']['field_banking_sector']['field'] = 'field_banking_sector';
$handler->display->display_options['fields']['field_banking_sector']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_banking_sector']['element_label_type'] = 'h3';
$handler->display->display_options['fields']['field_banking_sector']['element_label_colon'] = FALSE;
/* Field: Content: Chemical sector */
$handler->display->display_options['fields']['field_chemical_sector']['id'] = 'field_chemical_sector';
$handler->display->display_options['fields']['field_chemical_sector']['table'] = 'field_data_field_chemical_sector';
$handler->display->display_options['fields']['field_chemical_sector']['field'] = 'field_chemical_sector';
$handler->display->display_options['fields']['field_chemical_sector']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_chemical_sector']['element_label_type'] = 'h3';
$handler->display->display_options['fields']['field_chemical_sector']['element_label_colon'] = FALSE;
/* Field: Content: Civil service sector */
$handler->display->display_options['fields']['field_civil_service_sector']['id'] = 'field_civil_service_sector';
$handler->display->display_options['fields']['field_civil_service_sector']['table'] = 'field_data_field_civil_service_sector';
$handler->display->display_options['fields']['field_civil_service_sector']['field'] = 'field_civil_service_sector';
$handler->display->display_options['fields']['field_civil_service_sector']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_civil_service_sector']['element_label_type'] = 'h3';
$handler->display->display_options['fields']['field_civil_service_sector']['element_label_colon'] = FALSE;
/* Field: Content: Local government sector */
$handler->display->display_options['fields']['field_local_government_sector']['id'] = 'field_local_government_sector';
$handler->display->display_options['fields']['field_local_government_sector']['table'] = 'field_data_field_local_government_sector';
$handler->display->display_options['fields']['field_local_government_sector']['field'] = 'field_local_government_sector';
$handler->display->display_options['fields']['field_local_government_sector']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_local_government_sector']['element_label_type'] = 'h3';
$handler->display->display_options['fields']['field_local_government_sector']['element_label_colon'] = FALSE;
/* Field: Content: Metal sector */
$handler->display->display_options['fields']['field_metal_sector']['id'] = 'field_metal_sector';
$handler->display->display_options['fields']['field_metal_sector']['table'] = 'field_data_field_metal_sector';
$handler->display->display_options['fields']['field_metal_sector']['field'] = 'field_metal_sector';
$handler->display->display_options['fields']['field_metal_sector']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_metal_sector']['element_label_type'] = 'h3';
$handler->display->display_options['fields']['field_metal_sector']['element_label_colon'] = FALSE;
/* Field: Content: Retail sector */
$handler->display->display_options['fields']['field_retail_sector']['id'] = 'field_retail_sector';
$handler->display->display_options['fields']['field_retail_sector']['table'] = 'field_data_field_retail_sector';
$handler->display->display_options['fields']['field_retail_sector']['field'] = 'field_retail_sector';
$handler->display->display_options['fields']['field_retail_sector']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_retail_sector']['element_label_type'] = 'h3';
$handler->display->display_options['fields']['field_retail_sector']['element_label_colon'] = FALSE;
/* Field: Dynamic Sector meta-data */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Dynamic Sector meta-data';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['element_wrapper_class'] = 'cwbCountryMetaDataTabContent';
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php

$sector = "";
if(isset($_GET["sector_"]))
  $sector = $_GET["sector_"];


$result = $view -> result[0]->_field_data[\'nid\'][\'entity\']->field_total_economy[\'und\'][0][\'value\'];

	if($sector == "banking")
		$result = $view -> result[0]->_field_data[\'nid\'][\'entity\']->field_banking_sector[\'und\'][0][\'value\'];
	else
	if($sector == "chemical")
		$result = $view -> result[0]->_field_data[\'nid\'][\'entity\']->field_chemical_sector[\'und\'][0][\'value\'];
	else
	if($sector == "civilService")
		$result = $view -> result[0]->_field_data[\'nid\'][\'entity\']->field_civil_service_sector[\'und\'][0][\'value\'];
	else
	if($sector == "localGovernment")
		$result = $view -> result[0]->_field_data[\'nid\'][\'entity\']->field_local_government_sector[\'und\'][0][\'value\'];	
	else
	if($sector == "metal")
		$result = $view -> result[0]->_field_data[\'nid\'][\'entity\']->field_metal_sector[\'und\'][0][\'value\'];
	else
	if($sector == "retail")
		$result = $view -> result[0]->_field_data[\'nid\'][\'entity\']->field_retail_sector[\'und\'][0][\'value\'];

if(empty($result)){
	print("<h4 class=\'noDataMessage\'>".t("No information available")."</h4>");
} else {
	print($result);
}	

?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_country_info' => 'cwb_country_info',
);
/* Filter criterion: Content: Country (field_country) */
$handler->display->display_options['filters']['field_country_tid']['id'] = 'field_country_tid';
$handler->display->display_options['filters']['field_country_tid']['table'] = 'field_data_field_country';
$handler->display->display_options['filters']['field_country_tid']['field'] = 'field_country_tid';
$handler->display->display_options['filters']['field_country_tid']['value'] = array(
  13815 => '13815',
);
$handler->display->display_options['filters']['field_country_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_tid']['expose']['operator_id'] = 'field_country_tid_op';
$handler->display->display_options['filters']['field_country_tid']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_tid']['expose']['operator'] = 'field_country_tid_op';
$handler->display->display_options['filters']['field_country_tid']['expose']['identifier'] = 'country_tid';
$handler->display->display_options['filters']['field_country_tid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['field_country_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_country_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_country_tid']['vocabulary'] = 'country';

/* Display: CWB Sources */
$handler = $view->new_display('page', 'CWB Sources', 'page');
$handler->display->display_options['display_description'] = 'CWB Country meta data / sources';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<h4 class="noDataMessage">No information available.</h4>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['path'] = 'observatories/eurwork/collective-wage-bargaining/sources';

$view->save();
$view = new view();
$view->name = 'cwb_country_eiro_link_block';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'CWB Country EIRO link block';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Taxonomy term: Content using Country */
$handler->display->display_options['relationships']['reverse_field_country_node']['id'] = 'reverse_field_country_node';
$handler->display->display_options['relationships']['reverse_field_country_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_country_node']['field'] = 'reverse_field_country_node';
$handler->display->display_options['relationships']['reverse_field_country_node']['label'] = 'CT using Country';
$handler->display->display_options['relationships']['reverse_field_country_node']['required'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h1';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content: Abstract */
$handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
$handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['relationship'] = 'reverse_field_country_node';
$handler->display->display_options['fields']['field_abstract']['label'] = '';
$handler->display->display_options['fields']['field_abstract']['element_class'] = 'abstract';
$handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_abstract']['type'] = 'text_plain';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'country' => 'country',
);
/* Filter criterion: Country by parameter filter */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['ui_name'] = 'Country by parameter filter';
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = '$country_tid = $_GET[\'country_tid\'];
if(!isset($country_tid))
$country_tid =11;
$country_tid = $country_tid ."";
return ($row->tid."") != $country_tid ;';

/* Display: CWB Country EIRO link block */
$handler = $view->new_display('block', 'CWB Country EIRO link block', 'block');
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h1';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: EIRO link */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'EIRO link';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
global $base_url;
$countryName = $view->result[0]->taxonomy_term_data_name;
$countryNameSEO =  strtolower($countryName);
$countryNameSEO =  str_replace(\' \', \'.\', $countryNameSEO);
$countryNameSEO = $countryName ;
?>
<a target="_blank" class="moreLink" href="<?php print($base_url ."/country/". $countryNameSEO);?>">Industrial Relations for <?php print($countryName);?></a>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';

$view->save();
$view = new view();
$view->name = 'cwb_country_info';
$view->description = 'Lists the CWB country info';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CWB countries listing menu';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Countries';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Country (field_country) */
$handler->display->display_options['relationships']['field_country_tid']['id'] = 'field_country_tid';
$handler->display->display_options['relationships']['field_country_tid']['table'] = 'field_data_field_country';
$handler->display->display_options['relationships']['field_country_tid']['field'] = 'field_country_tid';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['path']['absolute'] = TRUE;
/* Field: PageResolution */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'PageResolution';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php 
       //kp
	$base_path = "observatories/eurwork/collective-wage-bargaining/";
	$page = $_SERVER[\'REQUEST_URI\'];

	$questionMarkIndex = strrpos($page,"?");

	if($questionMarkIndex != false)
		$page = substr( $page , 0, $questionMarkIndex);

	if(strrpos($page, "/timeline") !== FALSE || strrpos($page, "country-info") !== FALSE ){
 		
 		$page =  substr( $page , strrpos($page, "/")+1 );


	}else{
 		$page = "time-series";
	}

	$page = $base_path . $page ;

	print($page) ;

	global $static;
	$static = $page;

?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'field_country_tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Country code */
$handler->display->display_options['fields']['field_code']['id'] = 'field_code';
$handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
$handler->display->display_options['fields']['field_code']['field'] = 'field_code';
$handler->display->display_options['fields']['field_code']['relationship'] = 'field_country_tid';
$handler->display->display_options['fields']['field_code']['label'] = '';
$handler->display->display_options['fields']['field_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_code']['element_label_colon'] = FALSE;
/* Field: Parameters resolution */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['ui_name'] = 'Parameters resolution';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'form-item-type-features-test';
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = 'country_tid=<?php 
print $row->tid;
global $static;

$parametersUrl = "";

if($static=="time-series"){

	$defaultParameters = array(
		"sector" => "All",
		"scope" => "All",
		"series_id" => "All",
		"variable-type" => "106",
		"variable-unit" => "89",
		"variables" => array(     0 => "91")
	);

        $parametersProvided = 0;

	foreach ($defaultParameters as $key => $value) {
	    if($key!="series_id" && isset($_GET[$key])){
	    	$parametersProvided++;
	    	$defaultParameters[$key] = $_GET[$key];	    
	    }
	    
	    if($key == "variables"){
	    
	    }else{
	    	$parametersUrl .= "&" . $key . "=" . $defaultParameters[$key];
	    }
	}
	$variablesParameter = $defaultParameters["variables"];
        $variableCount=-1;
	foreach ($variablesParameter as $value) {
                 $variableCount++;
		 $variablesUrl.= "&variables[".$variableCount."]=" . $value;
	}
	
	// default parameters generation
	//investigate if no parameters are provided
	//investigate if parameters are provided
	//investigate type and unit and provided variable match
	//investigate type and unit and provided variable does not match - add the first <- 
	
	print $parametersUrl.$variablesUrl;
}
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Content: Country */
$handler->display->display_options['fields']['field_country']['id'] = 'field_country';
$handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
$handler->display->display_options['fields']['field_country']['field'] = 'field_country';
$handler->display->display_options['fields']['field_country']['label'] = '';
$handler->display->display_options['fields']['field_country']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_country']['alter']['path'] = '[php]?[php_1]';
$handler->display->display_options['fields']['field_country']['alter']['alt'] = '[title]';
$handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country']['element_wrapper_class'] = 'countryRelator [field_code] country_tid_[tid]';
$handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_country_info' => 'cwb_country_info',
);

/* Display: CWB country info block */
$handler = $view->new_display('block', 'CWB country info block', 'block');
$handler->display->display_options['display_description'] = 'CWB country info left menu block';

$view->save();
$view = new view();
$view->name = 'cwb_country_info_page';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CWB On wage bargaining';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Tabs navigation */
$handler->display->display_options['header']['php_selective']['id'] = 'php_selective';
$handler->display->display_options['header']['php_selective']['table'] = 'views';
$handler->display->display_options['header']['php_selective']['field'] = 'php_selective';
$handler->display->display_options['header']['php_selective']['ui_name'] = 'Tabs navigation';
$handler->display->display_options['header']['php_selective']['php_output'] = '<?php 
$countryName = "";
if(isset($_GET["country_tid"])){
$countryTaxonomy = taxonomy_term_load($_GET["country_tid"]);
$countryName = "in ". $countryTaxonomy -> name;
}
?>
<div class="horizontal-tabs">
  <ul class="horizontal-tabs-list">
		<li tabindex="-1" class="timeSeriesTab horizontal-tab-button horizontal-tab-button-0 first"><a href="time-series?country_tid=<?php print($_GET["country_tid"]);?>"><strong>Time series</strong></a></li>		
		<li tabindex="-1" class="timeLineTab horizontal-tab-button horizontal-tab-button-1"><a href="timeline?country_tid=<?php print($_GET["country_tid"]);?>"><strong>Time line</strong></a></li>	
		<li tabindex="-1" class="countryInfoTab horizontal-tab-button horizontal-tab-button-2 selected"><a href="country-info?country_tid=<?php print($_GET["country_tid"]);?>"><strong>On wage bargaining</strong></a></li>	
  </ul>
</div>
';
/* Header: hide filters */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'hide filters';
$handler->display->display_options['header']['php']['php_output'] = '<style>
.view-filters{
display:none;
}
</style>';
/* Header: Global: PHP */
$handler->display->display_options['header']['php_1']['id'] = 'php_1';
$handler->display->display_options['header']['php_1']['table'] = 'views';
$handler->display->display_options['header']['php_1']['field'] = 'php';
/* Footer: Global: View area */
$handler->display->display_options['footer']['view']['id'] = 'view';
$handler->display->display_options['footer']['view']['table'] = 'views';
$handler->display->display_options['footer']['view']['field'] = 'view';
$handler->display->display_options['footer']['view']['view_to_insert'] = 'cwb_country_eiro_link_block:block';
/* Field: Content: Country */
$handler->display->display_options['fields']['field_country']['id'] = 'field_country';
$handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
$handler->display->display_options['fields']['field_country']['field'] = 'field_country';
$handler->display->display_options['fields']['field_country']['label'] = '';
$handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country']['element_wrapper_type'] = 'h1';
$handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Abstract */
$handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
$handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['label'] = '';
$handler->display->display_options['fields']['field_abstract']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_abstract']['element_class'] = 'abstract';
$handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
/* Field: Content: Bargaining system */
$handler->display->display_options['fields']['field_bargaining_system']['id'] = 'field_bargaining_system';
$handler->display->display_options['fields']['field_bargaining_system']['table'] = 'field_data_field_bargaining_system';
$handler->display->display_options['fields']['field_bargaining_system']['field'] = 'field_bargaining_system';
$handler->display->display_options['fields']['field_bargaining_system']['element_type'] = 'p';
$handler->display->display_options['fields']['field_bargaining_system']['element_label_type'] = 'h4';
$handler->display->display_options['fields']['field_bargaining_system']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_bargaining_system']['type'] = 'text_plain';
/* Field: Content: Timing */
$handler->display->display_options['fields']['field_timing']['id'] = 'field_timing';
$handler->display->display_options['fields']['field_timing']['table'] = 'field_data_field_timing';
$handler->display->display_options['fields']['field_timing']['field'] = 'field_timing';
$handler->display->display_options['fields']['field_timing']['element_label_type'] = 'h4';
$handler->display->display_options['fields']['field_timing']['element_label_colon'] = FALSE;
/* Field: Content: Derogation */
$handler->display->display_options['fields']['field_derogation']['id'] = 'field_derogation';
$handler->display->display_options['fields']['field_derogation']['table'] = 'field_data_field_derogation';
$handler->display->display_options['fields']['field_derogation']['field'] = 'field_derogation';
$handler->display->display_options['fields']['field_derogation']['element_label_type'] = 'h4';
$handler->display->display_options['fields']['field_derogation']['element_label_colon'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit country information';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_country_info' => 'cwb_country_info',
);
/* Filter criterion: Content: Country (field_country) */
$handler->display->display_options['filters']['field_country_tid']['id'] = 'field_country_tid';
$handler->display->display_options['filters']['field_country_tid']['table'] = 'field_data_field_country';
$handler->display->display_options['filters']['field_country_tid']['field'] = 'field_country_tid';
$handler->display->display_options['filters']['field_country_tid']['value'] = array(
  13816 => '13816',
);
$handler->display->display_options['filters']['field_country_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_tid']['expose']['operator_id'] = 'field_country_tid_op';
$handler->display->display_options['filters']['field_country_tid']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_tid']['expose']['operator'] = 'field_country_tid_op';
$handler->display->display_options['filters']['field_country_tid']['expose']['identifier'] = 'country_tid';
$handler->display->display_options['filters']['field_country_tid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['field_country_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['field_country_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_country_tid']['vocabulary'] = 'country';
$handler->display->display_options['filters']['field_country_tid']['error_message'] = FALSE;

/* Display: CWB Country Info Page */
$handler = $view->new_display('page', 'CWB Country Info Page', 'page');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Tabs navigation */
$handler->display->display_options['header']['php_selective']['id'] = 'php_selective';
$handler->display->display_options['header']['php_selective']['table'] = 'views';
$handler->display->display_options['header']['php_selective']['field'] = 'php_selective';
$handler->display->display_options['header']['php_selective']['ui_name'] = 'Tabs navigation';
$handler->display->display_options['header']['php_selective']['empty'] = TRUE;
$handler->display->display_options['header']['php_selective']['php_output'] = '<?php

$parametersUrl = "";
global $base_url;

 {


  $field_variables_tid = "";
  $vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_outcome_variables\');
  $terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
  foreach ($terms as $term) {
    $field_variables_tid = $term->tid;
    break;
  }


  $field_variables_type_tid = ""; 
  $vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_variables_type\');
  $terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
  foreach ($terms as $term) {
    $field_variables_type_tid = $term->tid;
    break;
  } 


  $field_variables_units_tid = "";
  $vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_outcome_variables_units\');
  $terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
  foreach ($terms as $term) {
    $field_variables_units_tid = $term->tid;
    break;
  } 

  $defaultParameters = array(
    "sector" => "All",
    "scope" => "All",
    "series_id" => "All",
    "variable-type" => $field_variables_type_tid,
    "variable-unit" => $field_variables_units_tid,
    "variables" => array( 0 => $field_variables_tid)
  );

  $parametersProvided = 0;

  foreach ($defaultParameters as $key => $value) {
      if(isset($_GET[$key])){
        $parametersProvided++;
        $defaultParameters[$key] = $_GET[$key];     
      }
      
      if($key == "variables"){
      
      }else{
        $parametersUrl .= "&" . $key . "=" . $defaultParameters[$key];
      }
  }

  $variablesParameter = $defaultParameters["variables"];
  $variablesUrl ="&test=test";
  $variableCount=-1;

  foreach ($variablesParameter as $value) {
    $variableCount++;
    $variablesUrl.= "&variables[".$variableCount."]=" . $value;
  }

}

  $countryName = "";
  if(isset($_GET["country_tid"])){
    $countryTaxonomy = taxonomy_term_load($_GET["country_tid"]);
    $countryName = "in ". $countryTaxonomy -> name;
  }

?>

<div class="horizontal-tabs">
  <ul class="horizontal-tabs-list">
    <li tabindex="0" class="timeSeriesTab horizontal-tab-button horizontal-tab-button-0 first">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/time-series?country_tid=<?php print $_GET["country_tid"] . "&" . $parametersUrl . $variablesUrl;?>">
        <strong><?php echo t("Time series");?></strong></a>
    </li>    
    <li tabindex="1" class="timeLineTab horizontal-tab-button horizontal-tab-button-1">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/timeline?country_tid=<?php print($_GET["country_tid"]);?>">
        <strong><?php echo t("Time line");?></strong>
      </a>
    </li> 
    <li tabindex="2" class="countryInfoTab horizontal-tab-button horizontal-tab-button-2 selected">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/country-info?country_tid=<?php print($_GET["country_tid"]);?>">
        <strong><?php echo t("On wage bargaining");?></strong>
      </a>
    </li>  
  </ul>
</div>';
/* Header: hide filters */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'hide filters';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<style>
.view-filters{
display:none;
}
</style>';
/* Header: Global: PHP */
$handler->display->display_options['header']['php_1']['id'] = 'php_1';
$handler->display->display_options['header']['php_1']['table'] = 'views';
$handler->display->display_options['header']['php_1']['field'] = 'php';
$handler->display->display_options['header']['php_1']['empty'] = TRUE;
$handler->display->display_options['header']['php_1']['php_output'] = '<?php
/*
$view = views_get_current_view();

$arg0 = $view->args[0];
$myNode=(array)$results[0];
$breadcrumb[] .= l(\'Eurofound\', \'../../\');
$breadcrumb[] .= l(\'EIROnline\', \'../../eiro\');
$breadcrumb[] .= l(\'Collective wage bargaining\', null);
$breadcrumb[] .= l(\'On wage bargaining\', \'country-info\');
drupal_set_breadcrumb($breadcrumb);
*/
?>';
$handler->display->display_options['path'] = 'observatories/eurwork/collective-wage-bargaining/country-info';

$view->save();
$view = new view();
$view->name = 'cwb_country_info_page_abstract_block';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'CWB - on wage bargaining - abstract block';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Taxonomy term: Content using Country */
$handler->display->display_options['relationships']['reverse_field_country_node']['id'] = 'reverse_field_country_node';
$handler->display->display_options['relationships']['reverse_field_country_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_country_node']['field'] = 'reverse_field_country_node';
$handler->display->display_options['relationships']['reverse_field_country_node']['label'] = 'CT using Country';
$handler->display->display_options['relationships']['reverse_field_country_node']['required'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h1';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content: Abstract */
$handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
$handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['relationship'] = 'reverse_field_country_node';
$handler->display->display_options['fields']['field_abstract']['label'] = '';
$handler->display->display_options['fields']['field_abstract']['element_class'] = 'abstract';
$handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_abstract']['type'] = 'text_plain';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Abstract (field_abstract:format) */
$handler->display->display_options['sorts']['field_abstract_format']['id'] = 'field_abstract_format';
$handler->display->display_options['sorts']['field_abstract_format']['table'] = 'field_data_field_abstract';
$handler->display->display_options['sorts']['field_abstract_format']['field'] = 'field_abstract_format';
$handler->display->display_options['sorts']['field_abstract_format']['relationship'] = 'reverse_field_country_node';
$handler->display->display_options['sorts']['field_abstract_format']['order'] = 'DESC';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'country' => 'country',
);
/* Filter criterion: Country by parameter filter */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['ui_name'] = 'Country by parameter filter';
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = '$country_tid = $_GET[\'country_tid\'];
if(!isset($country_tid)){
  $country_tid =13816;
}
$country_tid = $country_tid ."";
return ($row->tid."") != $country_tid ;';

/* Display: CWB Country Info page abstract block */
$handler = $view->new_display('block', 'CWB Country Info page abstract block', 'block');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using Country */
$handler->display->display_options['relationships']['reverse_field_country_node']['id'] = 'reverse_field_country_node';
$handler->display->display_options['relationships']['reverse_field_country_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_country_node']['field'] = 'reverse_field_country_node';
$handler->display->display_options['relationships']['reverse_field_country_node']['label'] = 'CT using Country';
$handler->display->display_options['relationships']['reverse_field_country_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h1';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content: Abstract */
$handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
$handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
$handler->display->display_options['fields']['field_abstract']['relationship'] = 'reverse_field_country_node';
$handler->display->display_options['fields']['field_abstract']['label'] = '';
$handler->display->display_options['fields']['field_abstract']['element_class'] = 'abstract';
$handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;

$view->save();
$view = new view();
$view->name = 'cwb_outcomes';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CWB Time series - Outcomes';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Collective wage bargaining';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'tid_1' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'field_variables_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'name',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
);
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<h4>No information available</h4>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: Time series */
$handler->display->display_options['relationships']['reverse_field_series_id_node']['id'] = 'reverse_field_series_id_node';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['field'] = 'reverse_field_series_id_node';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['ui_name'] = 'Time series';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['label'] = 'Time series';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['required'] = TRUE;
/* Relationship: Content: Variables (field_variables) */
$handler->display->display_options['relationships']['field_variables_tid']['id'] = 'field_variables_tid';
$handler->display->display_options['relationships']['field_variables_tid']['table'] = 'field_data_field_variables';
$handler->display->display_options['relationships']['field_variables_tid']['field'] = 'field_variables_tid';
$handler->display->display_options['relationships']['field_variables_tid']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['relationships']['field_variables_tid']['label'] = 'Variables';
$handler->display->display_options['relationships']['field_variables_tid']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'span';
/* Field: Content: All taxonomy terms */
$handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
$handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['fields']['term_node_tid']['label'] = '';
$handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['term_node_tid']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
  'country' => 0,
  'cwb_sector' => 0,
  'cwb_working_class' => 0,
  'cwb_outcome_variables_units' => 0,
  'cwb_variables_type' => 0,
  'cwb_outcome_variables' => 0,
  'cwb_timeline_category' => 0,
  'cwb_timeline_level' => 0,
  'tags' => 0,
);
/* Field: Content: Time Series data */
$handler->display->display_options['fields']['field_time_series_data']['id'] = 'field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['table'] = 'field_data_field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['field'] = 'field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['field_time_series_data']['label'] = '';
$handler->display->display_options['fields']['field_time_series_data']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_series' => 'cwb_series',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Country */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['ui_name'] = 'Country';
$handler->display->display_options['filters']['tid']['group'] = 1;
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['description'] = 'Country';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['tid']['group_info']['label'] = 'Has taxonomy term';
$handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'country';
/* Filter criterion: Sector */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['ui_name'] = 'Sector';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  13844 => '13844',
);
$handler->display->display_options['filters']['tid_1']['group'] = 1;
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['description'] = 'Sector';
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'sector';
$handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'cwb_sector';
/* Filter criterion: Scope Employee */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['ui_name'] = 'Scope Employee';
$handler->display->display_options['filters']['tid_2']['group'] = 1;
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['description'] = 'Scope / empoloyee';
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'scope-employee';
$handler->display->display_options['filters']['tid_2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'cwb_working_class';
/* Filter criterion: Variables */
$handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
$handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_3']['field'] = 'tid';
$handler->display->display_options['filters']['tid_3']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['filters']['tid_3']['ui_name'] = 'Variables';
$handler->display->display_options['filters']['tid_3']['value'] = array(
  13827 => '13827',
);
$handler->display->display_options['filters']['tid_3']['group'] = 1;
$handler->display->display_options['filters']['tid_3']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_3']['expose']['operator_id'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['label'] = 'Variables';
$handler->display->display_options['filters']['tid_3']['expose']['operator'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['identifier'] = 'variables';
$handler->display->display_options['filters']['tid_3']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['tid_3']['type'] = 'select';
$handler->display->display_options['filters']['tid_3']['vocabulary'] = 'cwb_outcome_variables';

/* Display: Outcomes Page Time series */
$handler = $view->new_display('page', 'Outcomes Page Time series', 'page');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '28';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_country',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['row_class'] = 'time_series_by_year';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_sector' => 'field_sector',
  'field_scope_employee' => 'field_scope_employee',
  'field_provider_of_database' => 'field_provider_of_database',
  'field_series_source' => 'field_series_source',
  'field_signatory_parties' => 'field_signatory_parties',
  'field_collective_agreement' => 'field_collective_agreement',
  'field_type_of_data' => 'field_type_of_data',
  'field_type_of_increase' => 'field_type_of_increase',
  'field_nace' => 'field_nace',
  'field_sector_covered_by_agreemen' => 'field_sector_covered_by_agreemen',
);
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Intro text */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['ui_name'] = 'Intro text';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<p>Explore Eurofound’s  quantitative and qualitative information on collectively agreed pay developments from 1999 onwards and other related pay data. The context of the pay bargaining system in the different EU Member States  is also explained</p>
<p class="expandable">The map below presents a consistent time series of collectively agreed pay outcomes from 1998 to 2012. These time series data stem from various national sources . 

Firstly, they are taken from databases that record collective agreements on an ongoing basis. These are either run by national statistical offices or private organisations. Some Member States also conduct regular surveys. Where neither of these sources are available, other proxies for collectively agreed pay over time have been reported, where feasible. Examples of such proxies are outcomes of national-level agreements, tripartite recommendations at national level or outcomes of pace-setting agreements. Data related to the six sectors reported here (metal, chemicals, retail, banking, civil service and local government) also either stem from databases or from a consistent series of individual collective agreements at the sectoral level.

Note of caution: Owing to the multitude of sources used, the data are not harmonised. They should be read in conjunction with the related sources information (see ‘Sources’ tab). 
</p>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Header: Tabs navigation */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Tabs navigation';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php

 

  global $base_url;

	$country_tid = ""; 
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'country\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$country_tid = $term->tid;
		break;
	}

  if(isset($_GET["country_tid"])){
    $country_tid = $_GET["country_tid"];
  }
  
	$field_variables_tid = ""; 
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_outcome_variables\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$field_variables_tid = $term->tid;
		break;
	}
  //----------

  $year = 2012;
  $yearParamA = "year"; 
  $yearParamB = "year[value][year]";
  $yearParam = $yearParamA;
 

  $temp = $_GET[\'year\'];
  if(isset($temp)){
      $year = $temp;
  } 

?>

<div class="horizontal-tabs">
  <ul class="horizontal-tabs-list">
    <li tabindex="0" class="contextTab horizontal-tab-button horizontal-tab-button-0 first">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/context?<?php print($yearParamB);?>=<?php print($year);?>"><strong>Context</strong></a>
    </li>    
    <li tabindex="1" class="outcomesTab horizontal-tab-button horizontal-tab-button-1 selected">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/outcomes?<?php print($yearParamA);?>=<?php print($year);?>&field_variables_tid=<?php echo $field_variables_tid;?>"><strong>Outcomes</strong></a>
    </li>  
    <li tabindex="2" class="timeLineTab horizontal-tab-button horizontal-tab-button-2">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/eiro-timeline?country_tid=<?php print($country_tid);?>"><strong>Time line</strong></a>
    </li>  
    <li tabindex="3" class="countryInfoTab countriesMetaDataTab horizontal-tab-button horizontal-tab-button-3">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/sources?country_tid=<?php print($country_tid);?>"><strong>Sources</strong></a>
    </li>  
  </ul>
</div>
';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<h4>No information available</h4>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Country */
$handler->display->display_options['fields']['field_country']['id'] = 'field_country';
$handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
$handler->display->display_options['fields']['field_country']['field'] = 'field_country';
$handler->display->display_options['fields']['field_country']['label'] = '';
$handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '[field_country] [title_1]
';
$handler->display->display_options['fields']['title']['alter']['path'] = 'time-series';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Sector */
$handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
$handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
$handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
$handler->display->display_options['fields']['field_sector']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_sector']['element_label_class'] = 'strong';
$handler->display->display_options['fields']['field_sector']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_sector']['element_wrapper_class'] = 'timeSeriesMetaData';
$handler->display->display_options['fields']['field_sector']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Scope / Employee */
$handler->display->display_options['fields']['field_scope_employee']['id'] = 'field_scope_employee';
$handler->display->display_options['fields']['field_scope_employee']['table'] = 'field_data_field_scope_employee';
$handler->display->display_options['fields']['field_scope_employee']['field'] = 'field_scope_employee';
$handler->display->display_options['fields']['field_scope_employee']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_scope_employee']['element_label_class'] = 'strong';
$handler->display->display_options['fields']['field_scope_employee']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_scope_employee']['element_wrapper_class'] = 'timeSeriesMetaData';
$handler->display->display_options['fields']['field_scope_employee']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Time Series data */
$handler->display->display_options['fields']['field_time_series_data']['id'] = 'field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['table'] = 'field_data_field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['field'] = 'field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['field_time_series_data']['label'] = '';
$handler->display->display_options['fields']['field_time_series_data']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
$handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node_1']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['view_node_1']['label'] = 'Time series CT';
$handler->display->display_options['fields']['view_node_1']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['view_node_1']['element_wrapper_class'] = 'timeSeriesMetaData faded';
/* Field: Content revision: Vid */
$handler->display->display_options['fields']['vid']['id'] = 'vid';
$handler->display->display_options['fields']['vid']['table'] = 'node_revision';
$handler->display->display_options['fields']['vid']['field'] = 'vid';
$handler->display->display_options['fields']['vid']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['vid']['label'] = '';
$handler->display->display_options['fields']['vid']['exclude'] = TRUE;
$handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_series' => 'cwb_series',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Sector */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['ui_name'] = 'Sector';
$handler->display->display_options['filters']['tid_1']['value'] = array(
  13845 => '13845',
);
$handler->display->display_options['filters']['tid_1']['group'] = 1;
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Sector';
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'sector';
$handler->display->display_options['filters']['tid_1']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'cwb_sector';
/* Filter criterion: Scope Employee */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['ui_name'] = 'Scope Employee';
$handler->display->display_options['filters']['tid_2']['value'] = array(
  13860 => '13860',
);
$handler->display->display_options['filters']['tid_2']['group'] = 1;
$handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Scope / Employee';
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'cwb_working_class';
/* Filter criterion: Content: Variables (field_variables) */
$handler->display->display_options['filters']['field_variables_tid']['id'] = 'field_variables_tid';
$handler->display->display_options['filters']['field_variables_tid']['table'] = 'field_data_field_variables';
$handler->display->display_options['filters']['field_variables_tid']['field'] = 'field_variables_tid';
$handler->display->display_options['filters']['field_variables_tid']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['filters']['field_variables_tid']['value'] = array(
  13827 => '13827',
);
$handler->display->display_options['filters']['field_variables_tid']['group'] = 1;
$handler->display->display_options['filters']['field_variables_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_variables_tid']['expose']['operator_id'] = 'field_variables_tid_op';
$handler->display->display_options['filters']['field_variables_tid']['expose']['label'] = 'Collectively agreed pay';
$handler->display->display_options['filters']['field_variables_tid']['expose']['operator'] = 'field_variables_tid_op';
$handler->display->display_options['filters']['field_variables_tid']['expose']['identifier'] = 'field_variables_tid';
$handler->display->display_options['filters']['field_variables_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_variables_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_variables_tid']['vocabulary'] = 'cwb_outcome_variables';
$handler->display->display_options['path'] = 'observatories/eurwork/collective-wage-bargaining/outcomes';

/* Display: Variables attachment */
$handler = $view->new_display('attachment', 'Variables attachment', 'variables_attachment');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Time series variables';
$handler->display->display_options['display_description'] = 'Used to list the unit, type dependent variables and their tooltips ';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '15';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['separator'] = ',';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'h4';
$handler->display->display_options['fields']['name']['element_class'] = 'valid_variables';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_type']['id'] = 'field_type';
$handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
$handler->display->display_options['fields']['field_type']['field'] = 'field_type';
$handler->display->display_options['fields']['field_type']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_type']['element_type'] = 'span';
$handler->display->display_options['fields']['field_type']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Taxonomy term: Unit */
$handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
$handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_unit']['element_type'] = 'span';
$handler->display->display_options['fields']['field_unit']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_unit']['type'] = 'taxonomy_term_reference_plain';
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_type'] = 'span';
$handler->display->display_options['fields']['description']['element_label_type'] = 'span';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Source */
$handler->display->display_options['fields']['field_source']['id'] = 'field_source';
$handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
$handler->display->display_options['fields']['field_source']['field'] = 'field_source';
$handler->display->display_options['fields']['field_source']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_source']['element_type'] = 'span';
$handler->display->display_options['fields']['field_source']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_source']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['field_source']['settings'] = array(
  'trim_length' => '600',
);
/* Field: Taxonomy term: Code AMECO */
$handler->display->display_options['fields']['field_code_ameco']['id'] = 'field_code_ameco';
$handler->display->display_options['fields']['field_code_ameco']['table'] = 'field_data_field_code_ameco';
$handler->display->display_options['fields']['field_code_ameco']['field'] = 'field_code_ameco';
$handler->display->display_options['fields']['field_code_ameco']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_code_ameco']['element_type'] = 'span';
$handler->display->display_options['fields']['field_code_ameco']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_code_ameco']['element_wrapper_class'] = 'code_AMECO';
/* Field: Taxonomy term: Tabular column name */
$handler->display->display_options['fields']['field_tabular_column_name']['id'] = 'field_tabular_column_name';
$handler->display->display_options['fields']['field_tabular_column_name']['table'] = 'field_data_field_tabular_column_name';
$handler->display->display_options['fields']['field_tabular_column_name']['field'] = 'field_tabular_column_name';
$handler->display->display_options['fields']['field_tabular_column_name']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_tabular_column_name']['element_type'] = 'span';
$handler->display->display_options['fields']['field_tabular_column_name']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_tabular_column_name']['element_wrapper_class'] = 'variable_tabular_name';
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_series' => 'cwb_series',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Country */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['ui_name'] = 'Country';
$handler->display->display_options['filters']['tid']['group'] = 1;
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['description'] = 'Country';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['tid']['group_info']['label'] = 'Has taxonomy term';
$handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'country';
/* Filter criterion: Sector */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['ui_name'] = 'Sector';
$handler->display->display_options['filters']['tid_1']['group'] = 1;
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['description'] = 'Sector';
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'sector';
$handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'cwb_sector';
/* Filter criterion: Scope Employee */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['ui_name'] = 'Scope Employee';
$handler->display->display_options['filters']['tid_2']['group'] = 1;
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['description'] = 'Scope / empoloyee';
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'scope-employee';
$handler->display->display_options['filters']['tid_2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'cwb_working_class';
/* Filter criterion: Variables */
$handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
$handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_3']['field'] = 'tid';
$handler->display->display_options['filters']['tid_3']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['filters']['tid_3']['ui_name'] = 'Variables';
$handler->display->display_options['filters']['tid_3']['value'] = array(
  13827 => '13827',
);
$handler->display->display_options['filters']['tid_3']['group'] = 1;
$handler->display->display_options['filters']['tid_3']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_3']['expose']['operator_id'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['label'] = 'Variables';
$handler->display->display_options['filters']['tid_3']['expose']['operator'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['identifier'] = 'variables';
$handler->display->display_options['filters']['tid_3']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['tid_3']['type'] = 'select';
$handler->display->display_options['filters']['tid_3']['vocabulary'] = 'cwb_outcome_variables';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);
$handler->display->display_options['inherit_exposed_filters'] = TRUE;

$view->save();
$view = new view();
$view->name = 'cwb_time_series';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CWB Time series';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'tid' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'tid_1' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'tid_2' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'field_type_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'field_unit_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'tid_3' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'is_secondary' => 1,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'name',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
);
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<h4 class="noDataMessage">No information available</h4>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: Time series */
$handler->display->display_options['relationships']['reverse_field_series_id_node']['id'] = 'reverse_field_series_id_node';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['field'] = 'reverse_field_series_id_node';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['ui_name'] = 'Time series';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['label'] = 'Time series';
$handler->display->display_options['relationships']['reverse_field_series_id_node']['required'] = TRUE;
/* Relationship: Content: Variables (field_variables) */
$handler->display->display_options['relationships']['field_variables_tid']['id'] = 'field_variables_tid';
$handler->display->display_options['relationships']['field_variables_tid']['table'] = 'field_data_field_variables';
$handler->display->display_options['relationships']['field_variables_tid']['field'] = 'field_variables_tid';
$handler->display->display_options['relationships']['field_variables_tid']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['relationships']['field_variables_tid']['label'] = 'Variables';
$handler->display->display_options['relationships']['field_variables_tid']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'span';
/* Field: Content: All taxonomy terms */
$handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
$handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['fields']['term_node_tid']['label'] = '';
$handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['term_node_tid']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
  'country' => 0,
  'cwb_sector' => 0,
  'cwb_working_class' => 0,
  'cwb_outcome_variables_units' => 0,
  'cwb_variables_type' => 0,
  'cwb_outcome_variables' => 0,
  'cwb_timeline_category' => 0,
  'cwb_timeline_level' => 0,
  'tags' => 0,
);
/* Field: Content: Time Series data */
$handler->display->display_options['fields']['field_time_series_data']['id'] = 'field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['table'] = 'field_data_field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['field'] = 'field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['field_time_series_data']['label'] = '';
$handler->display->display_options['fields']['field_time_series_data']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Scope / Employee (field_scope_employee) */
$handler->display->display_options['sorts']['field_scope_employee_tid']['id'] = 'field_scope_employee_tid';
$handler->display->display_options['sorts']['field_scope_employee_tid']['table'] = 'field_data_field_scope_employee';
$handler->display->display_options['sorts']['field_scope_employee_tid']['field'] = 'field_scope_employee_tid';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_series' => 'cwb_series',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Country */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['ui_name'] = 'Country';
$handler->display->display_options['filters']['tid']['group'] = 1;
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['description'] = 'Country';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['tid']['group_info']['label'] = 'Has taxonomy term';
$handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'country';
$handler->display->display_options['filters']['tid']['error_message'] = FALSE;
/* Filter criterion: Sector */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['ui_name'] = 'Sector';
$handler->display->display_options['filters']['tid_1']['group'] = 1;
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['description'] = 'Sector';
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'sector';
$handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'cwb_sector';
$handler->display->display_options['filters']['tid_1']['error_message'] = FALSE;
/* Filter criterion: Scope Employee */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['ui_name'] = 'Scope Employee';
$handler->display->display_options['filters']['tid_2']['group'] = 1;
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['description'] = 'Scope / empoloyee';
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'scope-employee';
$handler->display->display_options['filters']['tid_2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'cwb_working_class';
$handler->display->display_options['filters']['tid_2']['error_message'] = FALSE;
/* Filter criterion: Variable type */
$handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
$handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
$handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
$handler->display->display_options['filters']['field_type_tid']['relationship'] = 'field_variables_tid';
$handler->display->display_options['filters']['field_type_tid']['ui_name'] = 'Variable type';
$handler->display->display_options['filters']['field_type_tid']['value'] = array(
  13842 => '13842',
);
$handler->display->display_options['filters']['field_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
$handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
$handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'variable-type';
$handler->display->display_options['filters']['field_type_tid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'cwb_variables_type';
$handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
/* Filter criterion: Unit */
$handler->display->display_options['filters']['field_unit_tid']['id'] = 'field_unit_tid';
$handler->display->display_options['filters']['field_unit_tid']['table'] = 'field_data_field_unit';
$handler->display->display_options['filters']['field_unit_tid']['field'] = 'field_unit_tid';
$handler->display->display_options['filters']['field_unit_tid']['relationship'] = 'field_variables_tid';
$handler->display->display_options['filters']['field_unit_tid']['ui_name'] = 'Unit';
$handler->display->display_options['filters']['field_unit_tid']['value'] = array(
  13844 => '13844',
);
$handler->display->display_options['filters']['field_unit_tid']['group'] = 1;
$handler->display->display_options['filters']['field_unit_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_unit_tid']['expose']['operator_id'] = 'field_unit_tid_op';
$handler->display->display_options['filters']['field_unit_tid']['expose']['label'] = 'Unit';
$handler->display->display_options['filters']['field_unit_tid']['expose']['operator'] = 'field_unit_tid_op';
$handler->display->display_options['filters']['field_unit_tid']['expose']['identifier'] = 'variable-unit';
$handler->display->display_options['filters']['field_unit_tid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['field_unit_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['field_unit_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_unit_tid']['vocabulary'] = 'cwb_outcome_variables_units';
$handler->display->display_options['filters']['field_unit_tid']['error_message'] = FALSE;
/* Filter criterion: Variables */
$handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
$handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_3']['field'] = 'tid';
$handler->display->display_options['filters']['tid_3']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['filters']['tid_3']['ui_name'] = 'Variables';
$handler->display->display_options['filters']['tid_3']['group'] = 1;
$handler->display->display_options['filters']['tid_3']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_3']['expose']['operator_id'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['label'] = 'Variables';
$handler->display->display_options['filters']['tid_3']['expose']['operator'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['identifier'] = 'variables';
$handler->display->display_options['filters']['tid_3']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['tid_3']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['tid_3']['type'] = 'select';
$handler->display->display_options['filters']['tid_3']['vocabulary'] = 'cwb_outcome_variables';
$handler->display->display_options['filters']['tid_3']['error_message'] = FALSE;

/* Display: Page Time series */
$handler = $view->new_display('page', 'Page Time series', 'page');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['total_pages'] = '1';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'name',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_sector' => 'field_sector',
  'field_scope_employee' => 'field_scope_employee',
);
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Tabs navigation */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Tabs navigation';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php 


 

global $base_url;

$parametersUrl = "";

 {

	$field_variables_tid = "";
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_outcome_variables\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$field_variables_tid = $term->tid;
		break;
	}



	$field_variables_type_tid = ""; 
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_variables_type\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$field_variables_type_tid = $term->tid;
		break;
	} 


	$field_variables_units_tid = "";
	$vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_outcome_variables_units\');
	$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
	foreach ($terms as $term) {
		$field_variables_units_tid = $term->tid;
		break;
	}	

	$defaultParameters = array(
		"sector" => "13845",
		"scope" => "13860",
		"series_id" => "All",
		"variable-type" => $field_variables_type_tid,
		"variable-unit" => $field_variables_units_tid,
		"variables" => array( 0 => $field_variables_tid)
	);

    $parametersProvided = 0;

	foreach ($defaultParameters as $key => $value) {
	    if(isset($_GET[$key])){
	    	$parametersProvided++;
	    	$defaultParameters[$key] = $_GET[$key];	    
	    }
	    
	    if($key == "variables"){
	    
	    }else{
	    	$parametersUrl .= "&" . $key . "=" . $defaultParameters[$key];
	    }
	}

	$variablesParameter = $defaultParameters["variables"];
    $variablesUrl ="&test=test";
    $variableCount=-1;


	foreach ($variablesParameter as $value) {
        $variableCount++;
		$variablesUrl.= "&variables[".$variableCount."]=" . $value;
	}
}
 

$countryName = "";
if(isset($_GET["country_tid"])){
	$countryTaxonomy = taxonomy_term_load($_GET["country_tid"]);
	$countryName = "in ". $countryTaxonomy -> name;
}
	
?>
<div class="horizontal-tabs">
  <ul class="horizontal-tabs-list">
		<li tabindex="-1" class="timeSeriesTab horizontal-tab-button horizontal-tab-button-0 first selected">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/time-series?country_tid=<?php print $_GET["country_tid"]."&".$parametersUrl.$variablesUrl;?>">
				<strong><?php echo t("Time series");?></strong>
			</a>
		</li>		
		<li tabindex="-1" class="timeLineTab horizontal-tab-button horizontal-tab-button-1">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/timeline?country_tid=<?php print($_GET["country_tid"]);?>">
				<strong><?php echo t("Time line");?></strong>
			</a>
		</li>	
		<li tabindex="-1" class="countryInfoTab horizontal-tab-button horizontal-tab-button-2 ">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/country-info?country_tid=<?php print($_GET["country_tid"]);?>">
				<strong><?php echo t("On wage bargaining");?></strong>
			</a>
		</li>	
  </ul>
</div>
';
/* Header: breadcrumb - disabled */
$handler->display->display_options['header']['php_1']['id'] = 'php_1';
$handler->display->display_options['header']['php_1']['table'] = 'views';
$handler->display->display_options['header']['php_1']['field'] = 'php';
$handler->display->display_options['header']['php_1']['ui_name'] = 'breadcrumb - disabled';
$handler->display->display_options['header']['php_1']['empty'] = TRUE;
$handler->display->display_options['header']['php_1']['php_output'] = '<?php
/*
$view = views_get_current_view();
$arg0 = $view->args[0];
$myNode=(array)$results[0];
$breadcrumb[] .= l(\'Eurofound\', \'../../\');
$breadcrumb[] .= l(\'EIROnline\', \'../../eiro\');
$breadcrumb[] .= l(\'Collective wage bargaining\', null);
if(!empty($myNode["node_title"])){
$breadcrumb[] .= l($myNode["node_title"], $_GET[\'q\']);
}
drupal_set_breadcrumb($breadcrumb);
*/
?>
';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Country */
$handler->display->display_options['fields']['field_country']['id'] = 'field_country';
$handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
$handler->display->display_options['fields']['field_country']['field'] = 'field_country';
$handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_country']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_country']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
$handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
/* Field: Series ID */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['ui_name'] = 'Series ID';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '[field_country] [title_1]
';
$handler->display->display_options['fields']['title']['alter']['path'] = 'time-series';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
/* Field: Content: Sector */
$handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
$handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
$handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
$handler->display->display_options['fields']['field_sector']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_sector']['element_label_class'] = 'strong';
$handler->display->display_options['fields']['field_sector']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_sector']['element_wrapper_class'] = 'timeSeriesMetaData';
$handler->display->display_options['fields']['field_sector']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Scope / Employee */
$handler->display->display_options['fields']['field_scope_employee']['id'] = 'field_scope_employee';
$handler->display->display_options['fields']['field_scope_employee']['table'] = 'field_data_field_scope_employee';
$handler->display->display_options['fields']['field_scope_employee']['field'] = 'field_scope_employee';
$handler->display->display_options['fields']['field_scope_employee']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_scope_employee']['element_label_class'] = 'strong';
$handler->display->display_options['fields']['field_scope_employee']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_scope_employee']['element_wrapper_class'] = 'timeSeriesMetaData';
$handler->display->display_options['fields']['field_scope_employee']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Time Series data */
$handler->display->display_options['fields']['field_time_series_data']['id'] = 'field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['table'] = 'field_data_field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['field'] = 'field_time_series_data';
$handler->display->display_options['fields']['field_time_series_data']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['field_time_series_data']['label'] = '';
$handler->display->display_options['fields']['field_time_series_data']['element_label_colon'] = FALSE;
/* Field: Content: Provider of database */
$handler->display->display_options['fields']['field_provider_of_database']['id'] = 'field_provider_of_database';
$handler->display->display_options['fields']['field_provider_of_database']['table'] = 'field_data_field_provider_of_database';
$handler->display->display_options['fields']['field_provider_of_database']['field'] = 'field_provider_of_database';
$handler->display->display_options['fields']['field_provider_of_database']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_provider_of_database']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_provider_of_database']['element_wrapper_class'] = 'timeSeriesMetaData';
/* Field: Content: Source */
$handler->display->display_options['fields']['field_series_source']['id'] = 'field_series_source';
$handler->display->display_options['fields']['field_series_source']['table'] = 'field_data_field_series_source';
$handler->display->display_options['fields']['field_series_source']['field'] = 'field_series_source';
$handler->display->display_options['fields']['field_series_source']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_series_source']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_series_source']['element_wrapper_class'] = 'timeSeriesMetaData';
/* Field: Content: Signatory parties */
$handler->display->display_options['fields']['field_signatory_parties']['id'] = 'field_signatory_parties';
$handler->display->display_options['fields']['field_signatory_parties']['table'] = 'field_data_field_signatory_parties';
$handler->display->display_options['fields']['field_signatory_parties']['field'] = 'field_signatory_parties';
$handler->display->display_options['fields']['field_signatory_parties']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_signatory_parties']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_signatory_parties']['element_wrapper_class'] = 'timeSeriesMetaData';
/* Field: Content: Collective agreement */
$handler->display->display_options['fields']['field_collective_agreement']['id'] = 'field_collective_agreement';
$handler->display->display_options['fields']['field_collective_agreement']['table'] = 'field_data_field_collective_agreement';
$handler->display->display_options['fields']['field_collective_agreement']['field'] = 'field_collective_agreement';
$handler->display->display_options['fields']['field_collective_agreement']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_collective_agreement']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_collective_agreement']['element_wrapper_class'] = 'timeSeriesMetaData';
/* Field: Content: Type of data */
$handler->display->display_options['fields']['field_type_of_data']['id'] = 'field_type_of_data';
$handler->display->display_options['fields']['field_type_of_data']['table'] = 'field_data_field_type_of_data';
$handler->display->display_options['fields']['field_type_of_data']['field'] = 'field_type_of_data';
$handler->display->display_options['fields']['field_type_of_data']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_type_of_data']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_type_of_data']['element_wrapper_class'] = 'timeSeriesMetaData';
/* Field: Content: Type of increase */
$handler->display->display_options['fields']['field_type_of_increase']['id'] = 'field_type_of_increase';
$handler->display->display_options['fields']['field_type_of_increase']['table'] = 'field_data_field_type_of_increase';
$handler->display->display_options['fields']['field_type_of_increase']['field'] = 'field_type_of_increase';
$handler->display->display_options['fields']['field_type_of_increase']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_type_of_increase']['element_wrapper_class'] = 'timeSeriesMetaData';
/* Field: Content: NACE */
$handler->display->display_options['fields']['field_nace']['id'] = 'field_nace';
$handler->display->display_options['fields']['field_nace']['table'] = 'field_data_field_nace';
$handler->display->display_options['fields']['field_nace']['field'] = 'field_nace';
$handler->display->display_options['fields']['field_nace']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_nace']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_nace']['element_wrapper_class'] = 'timeSeriesMetaData';
/* Field: Content: Sector covered by agreement/database average */
$handler->display->display_options['fields']['field_sector_covered_by_agreemen']['id'] = 'field_sector_covered_by_agreemen';
$handler->display->display_options['fields']['field_sector_covered_by_agreemen']['table'] = 'field_data_field_sector_covered_by_agreemen';
$handler->display->display_options['fields']['field_sector_covered_by_agreemen']['field'] = 'field_sector_covered_by_agreemen';
$handler->display->display_options['fields']['field_sector_covered_by_agreemen']['label'] = 'Sector covered by agreement, database average';
$handler->display->display_options['fields']['field_sector_covered_by_agreemen']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_sector_covered_by_agreemen']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_sector_covered_by_agreemen']['element_wrapper_class'] = 'timeSeriesMetaData';
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
/* Field: Content revision: Vid */
$handler->display->display_options['fields']['vid']['id'] = 'vid';
$handler->display->display_options['fields']['vid']['table'] = 'node_revision';
$handler->display->display_options['fields']['vid']['field'] = 'vid';
$handler->display->display_options['fields']['vid']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['vid']['label'] = '';
$handler->display->display_options['fields']['vid']['exclude'] = TRUE;
$handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
/* Field: Edit series */
$handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
$handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node_1']['ui_name'] = 'Edit series';
$handler->display->display_options['fields']['edit_node_1']['label'] = '';
$handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node_1']['element_wrapper_class'] = 'views-field-edit-node';
$handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit series';
/* Field: Edit time series */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['fields']['edit_node']['ui_name'] = 'Edit time series';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit time series';
/* Field: Sources link */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['ui_name'] = 'Sources link';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<a class="moreLink sources" href="sources?country_tid=<?php print($_GET["country_tid"]);?>" class="moreLink">Sources for <?php print($view->result[0]->field_field_country[0][\'rendered\'][\'#markup\']);?></a>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'cwb_series' => 'cwb_series',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Country */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['ui_name'] = 'Country';
$handler->display->display_options['filters']['tid']['value'] = array(
  13816 => '13816',
);
$handler->display->display_options['filters']['tid']['group'] = 1;
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'country_tid';
$handler->display->display_options['filters']['tid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
  15 => 0,
);
$handler->display->display_options['filters']['tid']['group_info']['label'] = 'Has taxonomy term';
$handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'country';
$handler->display->display_options['filters']['tid']['error_message'] = FALSE;
/* Filter criterion: Sector */
$handler->display->display_options['filters']['field_sector_tid_selective']['id'] = 'field_sector_tid_selective';
$handler->display->display_options['filters']['field_sector_tid_selective']['table'] = 'field_data_field_sector';
$handler->display->display_options['filters']['field_sector_tid_selective']['field'] = 'field_sector_tid_selective';
$handler->display->display_options['filters']['field_sector_tid_selective']['ui_name'] = 'Sector';
$handler->display->display_options['filters']['field_sector_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_sector_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_sector_tid_selective']['expose']['operator_id'] = 'field_sector_tid_selective_op';
$handler->display->display_options['filters']['field_sector_tid_selective']['expose']['label'] = 'Sector';
$handler->display->display_options['filters']['field_sector_tid_selective']['expose']['operator'] = 'field_sector_tid_selective_op';
$handler->display->display_options['filters']['field_sector_tid_selective']['expose']['identifier'] = 'sector';
$handler->display->display_options['filters']['field_sector_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
/* Filter criterion: Scope / Employee (field_scope_employee) (selective) */
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['id'] = 'field_scope_employee_tid_selective';
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['table'] = 'field_data_field_scope_employee';
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['field'] = 'field_scope_employee_tid_selective';
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['ui_name'] = 'Scope / Employee (field_scope_employee) (selective)';
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['expose']['operator_id'] = 'field_scope_employee_tid_selective_op';
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['expose']['label'] = 'Scope / Employee';
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['expose']['operator'] = 'field_scope_employee_tid_selective_op';
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['expose']['identifier'] = 'scope';
$handler->display->display_options['filters']['field_scope_employee_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
/* Filter criterion: Series ID */
$handler->display->display_options['filters']['title_selective']['id'] = 'title_selective';
$handler->display->display_options['filters']['title_selective']['table'] = 'node';
$handler->display->display_options['filters']['title_selective']['field'] = 'title_selective';
$handler->display->display_options['filters']['title_selective']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['filters']['title_selective']['ui_name'] = 'Series ID';
$handler->display->display_options['filters']['title_selective']['group'] = 1;
$handler->display->display_options['filters']['title_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_selective']['expose']['operator_id'] = 'series_id_op';
$handler->display->display_options['filters']['title_selective']['expose']['label'] = 'Series ID';
$handler->display->display_options['filters']['title_selective']['expose']['operator'] = 'title_selective_op';
$handler->display->display_options['filters']['title_selective']['expose']['identifier'] = 'series_id';
$handler->display->display_options['filters']['title_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
/* Filter criterion: Variable type */
$handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
$handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
$handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
$handler->display->display_options['filters']['field_type_tid']['relationship'] = 'field_variables_tid';
$handler->display->display_options['filters']['field_type_tid']['ui_name'] = 'Variable type';
$handler->display->display_options['filters']['field_type_tid']['value'] = array(
  13842 => '13842',
);
$handler->display->display_options['filters']['field_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
$handler->display->display_options['filters']['field_type_tid']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
$handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'variable-type';
$handler->display->display_options['filters']['field_type_tid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'cwb_variables_type';
$handler->display->display_options['filters']['field_type_tid']['error_message'] = FALSE;
/* Filter criterion: Unit */
$handler->display->display_options['filters']['field_unit_tid']['id'] = 'field_unit_tid';
$handler->display->display_options['filters']['field_unit_tid']['table'] = 'field_data_field_unit';
$handler->display->display_options['filters']['field_unit_tid']['field'] = 'field_unit_tid';
$handler->display->display_options['filters']['field_unit_tid']['relationship'] = 'field_variables_tid';
$handler->display->display_options['filters']['field_unit_tid']['ui_name'] = 'Unit';
$handler->display->display_options['filters']['field_unit_tid']['value'] = array(
  13844 => '13844',
);
$handler->display->display_options['filters']['field_unit_tid']['group'] = 1;
$handler->display->display_options['filters']['field_unit_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_unit_tid']['expose']['operator_id'] = 'field_unit_tid_op';
$handler->display->display_options['filters']['field_unit_tid']['expose']['label'] = 'Unit';
$handler->display->display_options['filters']['field_unit_tid']['expose']['operator'] = 'field_unit_tid_op';
$handler->display->display_options['filters']['field_unit_tid']['expose']['identifier'] = 'variable-unit';
$handler->display->display_options['filters']['field_unit_tid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['field_unit_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['field_unit_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_unit_tid']['vocabulary'] = 'cwb_outcome_variables_units';
$handler->display->display_options['filters']['field_unit_tid']['error_message'] = FALSE;
/* Filter criterion: Variables */
$handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
$handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_3']['field'] = 'tid';
$handler->display->display_options['filters']['tid_3']['relationship'] = 'reverse_field_series_id_node';
$handler->display->display_options['filters']['tid_3']['ui_name'] = 'Variables';
$handler->display->display_options['filters']['tid_3']['group'] = 1;
$handler->display->display_options['filters']['tid_3']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_3']['expose']['operator_id'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['label'] = 'Variables';
$handler->display->display_options['filters']['tid_3']['expose']['operator'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['identifier'] = 'variables';
$handler->display->display_options['filters']['tid_3']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['tid_3']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  6 => 0,
  5 => 0,
  4 => 0,
  3 => 0,
  10 => 0,
  12 => 0,
  11 => 0,
  14 => 0,
  13 => 0,
);
$handler->display->display_options['filters']['tid_3']['type'] = 'select';
$handler->display->display_options['filters']['tid_3']['vocabulary'] = 'cwb_outcome_variables';
$handler->display->display_options['filters']['tid_3']['error_message'] = FALSE;
$handler->display->display_options['path'] = 'observatories/eurwork/collective-wage-bargaining/time-series';

/* Display: Variables attachment */
$handler = $view->new_display('attachment', 'Variables attachment', 'variables_attachment');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Time series variables';
$handler->display->display_options['display_description'] = 'Used to list the unit, type dependent variables and their tooltips ';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['separator'] = ',';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_type'] = 'h4';
$handler->display->display_options['fields']['name']['element_class'] = 'valid_variables';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_type']['id'] = 'field_type';
$handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
$handler->display->display_options['fields']['field_type']['field'] = 'field_type';
$handler->display->display_options['fields']['field_type']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_type']['element_type'] = 'span';
$handler->display->display_options['fields']['field_type']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_type']['type'] = 'taxonomy_term_reference_plain';
/* Field: Taxonomy term: Unit */
$handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
$handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_unit']['element_type'] = 'span';
$handler->display->display_options['fields']['field_unit']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_unit']['type'] = 'taxonomy_term_reference_plain';
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_type'] = 'span';
$handler->display->display_options['fields']['description']['element_class'] = 'italics';
$handler->display->display_options['fields']['description']['element_label_type'] = 'span';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Source */
$handler->display->display_options['fields']['field_source']['id'] = 'field_source';
$handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
$handler->display->display_options['fields']['field_source']['field'] = 'field_source';
$handler->display->display_options['fields']['field_source']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_source']['element_type'] = 'span';
$handler->display->display_options['fields']['field_source']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_source']['type'] = 'text_plain';
$handler->display->display_options['fields']['field_source']['settings'] = array(
  'trim_length' => '600',
);
/* Field: Taxonomy term: Code AMECO */
$handler->display->display_options['fields']['field_code_ameco']['id'] = 'field_code_ameco';
$handler->display->display_options['fields']['field_code_ameco']['table'] = 'field_data_field_code_ameco';
$handler->display->display_options['fields']['field_code_ameco']['field'] = 'field_code_ameco';
$handler->display->display_options['fields']['field_code_ameco']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_code_ameco']['element_type'] = 'span';
$handler->display->display_options['fields']['field_code_ameco']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_code_ameco']['element_wrapper_class'] = 'code_AMECO';
/* Field: Taxonomy term: Tabular column name */
$handler->display->display_options['fields']['field_tabular_column_name']['id'] = 'field_tabular_column_name';
$handler->display->display_options['fields']['field_tabular_column_name']['table'] = 'field_data_field_tabular_column_name';
$handler->display->display_options['fields']['field_tabular_column_name']['field'] = 'field_tabular_column_name';
$handler->display->display_options['fields']['field_tabular_column_name']['relationship'] = 'field_variables_tid';
$handler->display->display_options['fields']['field_tabular_column_name']['label'] = 'Column name';
$handler->display->display_options['fields']['field_tabular_column_name']['element_type'] = 'span';
$handler->display->display_options['fields']['field_tabular_column_name']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_tabular_column_name']['element_wrapper_class'] = 'variable_tabular_name';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['sorts']['weight']['relationship'] = 'field_variables_tid';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);
$handler->display->display_options['inherit_exposed_filters'] = TRUE;

$view->save();
$view = new view();
$view->name = 'cwb_variables';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'CWB variables';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'CWB variables';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'field_type_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
  'field_unit_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
    ),
  ),
);
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'cwb_outcome_variables' => 'cwb_outcome_variables',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;

/* Display: CWB variables */
$handler = $view->new_display('page', 'CWB variables', 'page_1');
$handler->display->display_options['path'] = 'variables';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'variables_block');

$view->save();
}
