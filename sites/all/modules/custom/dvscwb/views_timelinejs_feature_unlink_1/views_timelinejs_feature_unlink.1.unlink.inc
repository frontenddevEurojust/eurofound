<?php

/**
 * Unlink views_timelinejs_feature_unlink_1_views_view().
 */
function views_timelinejs_feature_unlink_1_views_view() {
$view = new view();
$view->name = 'timeline';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CWB Timeline view';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'field_country_tid' => array(
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
  'field_cwb_level_tid_selective' => array(
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
  'field_cwb_timeline_category_tid_selective' => array(
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
);
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '300';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'timelinejs';
$handler->display->display_options['style_options']['timeline_theme'] = array(
  'width' => '925',
  'width_unit' => '0',
  'height' => '590',
  'height_unit' => '0',
);
$handler->display->display_options['style_options']['timeline_fields'] = array(
  'headline' => 'title',
  'bodytext' => 'body',
  'date' => 'field_publication_date',
  'media' => '0',
  'credit' => 'field_cmslink',
  'caption' => 'field_cmscode',
  'tag' => 'field_cwb_level',
);
$handler->display->display_options['style_options']['timeline_config'] = array(
  'link_to_entity' => 0,
  'link_text_enabled' => 0,
  'link_text' => '',
  'strip_tags' => '1',
  'hash_bookmark' => '1',
  'start_at_end' => '1',
  'start_zoom_adjust' => '-2',
);
/* Header: Tab navigation */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Tab navigation';
$handler->display->display_options['header']['php']['empty'] = TRUE;
$handler->display->display_options['header']['php']['php_output'] = '<?php
$parametersUrl = "";
 {

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
$countryTid=11;
$countryName = "";

if(isset($_GET["country_tid"])){
$countryTid=$_GET["country_tid"];

$countryTaxonomy = taxonomy_term_load($_GET["country_tid"]);
$countryName = "in ". $countryTaxonomy -> name;
}

 
?>

<div class="horizontal-tabs">
  <ul class="horizontal-tabs-list">
		<li tabindex="-1" class="timeSeriesTab horizontal-tab-button horizontal-tab-button-0 first"><a href="time-series?country_tid=<?php print $countryTid."&".$parametersUrl.$variablesUrl;?>"><strong>Time series</strong></a></li>		
		<li tabindex="-1" class="timeLineTab horizontal-tab-button horizontal-tab-button-1 selected"><a href="timeline?country_tid=<?php print($countryTid);?>"><strong>Time line</strong></a></li>	
		<li tabindex="-1" class="countryInfoTab horizontal-tab-button horizontal-tab-button-2 "><a href="country-info?country_tid=<?php print($countryTid);?>"><strong>On wage bargaining</strong></a></li>	
  </ul>
</div>
';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No information available';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
/* Field: Content: CMSLink */
$handler->display->display_options['fields']['field_cmslink']['id'] = 'field_cmslink';
$handler->display->display_options['fields']['field_cmslink']['table'] = 'field_data_field_cmslink';
$handler->display->display_options['fields']['field_cmslink']['field'] = 'field_cmslink';
$handler->display->display_options['fields']['field_cmslink']['alter']['alter_text'] = TRUE;
/* Field: Content: Caption Text */
$handler->display->display_options['fields']['field_timeline_caption_text']['id'] = 'field_timeline_caption_text';
$handler->display->display_options['fields']['field_timeline_caption_text']['table'] = 'field_data_field_timeline_caption_text';
$handler->display->display_options['fields']['field_timeline_caption_text']['field'] = 'field_timeline_caption_text';
$handler->display->display_options['fields']['field_timeline_caption_text']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_timeline_caption_text']['alter']['text'] = '[field_cmslink]';
/* Field: Content: Credit Text */
$handler->display->display_options['fields']['field_timeline_credit_text']['id'] = 'field_timeline_credit_text';
$handler->display->display_options['fields']['field_timeline_credit_text']['table'] = 'field_data_field_timeline_credit_text';
$handler->display->display_options['fields']['field_timeline_credit_text']['field'] = 'field_timeline_credit_text';
/* Field: Content: Media Image */
$handler->display->display_options['fields']['field_timeline_media_image']['id'] = 'field_timeline_media_image';
$handler->display->display_options['fields']['field_timeline_media_image']['table'] = 'field_data_field_timeline_media_image';
$handler->display->display_options['fields']['field_timeline_media_image']['field'] = 'field_timeline_media_image';
/* Field: Content: Media Link */
$handler->display->display_options['fields']['field_timeline_media_link']['id'] = 'field_timeline_media_link';
$handler->display->display_options['fields']['field_timeline_media_link']['table'] = 'field_data_field_timeline_media_link';
$handler->display->display_options['fields']['field_timeline_media_link']['field'] = 'field_timeline_media_link';
$handler->display->display_options['fields']['field_timeline_media_link']['label'] = '';
$handler->display->display_options['fields']['field_timeline_media_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_timeline_media_link']['click_sort_column'] = 'url';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['path'] = '[field_timeline_credit_text]';
$handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Category */
$handler->display->display_options['fields']['field_cwb_timeline_category']['id'] = 'field_cwb_timeline_category';
$handler->display->display_options['fields']['field_cwb_timeline_category']['table'] = 'field_data_field_cwb_timeline_category';
$handler->display->display_options['fields']['field_cwb_timeline_category']['field'] = 'field_cwb_timeline_category';
$handler->display->display_options['fields']['field_cwb_timeline_category']['delta_offset'] = '0';
/* Field: Content: CMSCode */
$handler->display->display_options['fields']['field_cmscode']['id'] = 'field_cmscode';
$handler->display->display_options['fields']['field_cmscode']['table'] = 'field_data_field_cmscode';
$handler->display->display_options['fields']['field_cmscode']['field'] = 'field_cmscode';
$handler->display->display_options['fields']['field_cmscode']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_cmscode']['alter']['path'] = '[field_cmslink]';
$handler->display->display_options['fields']['field_cmscode']['alter']['external'] = TRUE;
/* Field: Content: Level */
$handler->display->display_options['fields']['field_cwb_level']['id'] = 'field_cwb_level';
$handler->display->display_options['fields']['field_cwb_level']['table'] = 'field_data_field_cwb_level';
$handler->display->display_options['fields']['field_cwb_level']['field'] = 'field_cwb_level';
/* Field: Content: Publication Date */
$handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
$handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
$handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
$handler->display->display_options['fields']['field_publication_date']['settings'] = array(
  'format_type' => 'month_year',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Sort criterion: Content: Publication Date (field_publication_date) */
$handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
$handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
$handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
$handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
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
  'timeline_date' => 'timeline_date',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Country (field_country) */
$handler->display->display_options['filters']['field_country_tid']['id'] = 'field_country_tid';
$handler->display->display_options['filters']['field_country_tid']['table'] = 'field_data_field_country';
$handler->display->display_options['filters']['field_country_tid']['field'] = 'field_country_tid';
$handler->display->display_options['filters']['field_country_tid']['value'] = array(
  13815 => '13815',
);
$handler->display->display_options['filters']['field_country_tid']['group'] = 1;
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
$handler->display->display_options['filters']['field_country_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Level (field_cwb_level) (selective) */
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['id'] = 'field_cwb_level_tid_selective';
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['table'] = 'field_data_field_cwb_level';
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['field'] = 'field_cwb_level_tid_selective';
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['expose']['operator_id'] = 'field_cwb_level_tid_selective_op';
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['expose']['label'] = 'Level';
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['expose']['operator'] = 'field_cwb_level_tid_selective_op';
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['expose']['identifier'] = 'field_cwb_level_tid_selective';
$handler->display->display_options['filters']['field_cwb_level_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
);
/* Filter criterion: Content: Category (field_cwb_timeline_category) (selective) */
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['id'] = 'field_cwb_timeline_category_tid_selective';
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['table'] = 'field_data_field_cwb_timeline_category';
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['field'] = 'field_cwb_timeline_category_tid_selective';
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['group'] = 1;
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['expose']['operator_id'] = 'field_cwb_timeline_category_tid_selective_op';
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['expose']['label'] = 'Info for';
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['expose']['operator'] = 'field_cwb_timeline_category_tid_selective_op';
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['expose']['identifier'] = 'field_cwb_timeline_category_tid_selective';
$handler->display->display_options['filters']['field_cwb_timeline_category_tid_selective']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Tab navigation */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Tab navigation';
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
		"variable-unit" =>  $field_variables_units_tid ,
		"variables" => array( 0 => $field_variables_tid )
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

$country_tid = ""; 
$vocabulary = taxonomy_vocabulary_machine_name_load(\'country\');
$terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
foreach ($terms as $term) {
	$country_tid = $term->tid;
	break;
}

$countryTid=$country_tid;
$countryName = "";

if(isset($_GET["country_tid"])){
$countryTid=$_GET["country_tid"];

$countryTaxonomy = taxonomy_term_load($_GET["country_tid"]);
$countryName = "in ". $countryTaxonomy -> name;
}

 
?>

<div class="horizontal-tabs">
  <ul class="horizontal-tabs-list">
		<li tabindex="1" class="timeSeriesTab horizontal-tab-button horizontal-tab-button-0 first">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/time-series?country_tid=<?php print $countryTid."&".$parametersUrl.$variablesUrl;?>">
				<strong><?php echo t("Time series");?></strong>
			</a>
		</li>		
		<li tabindex="2" class="timeLineTab horizontal-tab-button horizontal-tab-button-1 selected">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/timeline?country_tid=<?php print($countryTid);?>">
				<strong><?php echo t("Time line");?></strong>
			</a>
		</li>	
		<li tabindex="3" class="countryInfoTab horizontal-tab-button horizontal-tab-button-2 ">
			<a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/country-info?country_tid=<?php print($countryTid);?>">
				<strong><?php echo t("On wage bargaining");?></strong>
			</a>
		</li>	
  </ul>
</div>
';
$handler->display->display_options['path'] = 'observatories/eurwork/collective-wage-bargaining/timeline';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Collective wage bargaining';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Tab navigation */
$handler->display->display_options['header']['php']['id'] = 'php';
$handler->display->display_options['header']['php']['table'] = 'views';
$handler->display->display_options['header']['php']['field'] = 'php';
$handler->display->display_options['header']['php']['ui_name'] = 'Tab navigation';
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


  $field_variables_tid = "";
  $vocabulary = taxonomy_vocabulary_machine_name_load(\'cwb_outcome_variables\');
  $terms = entity_load(\'taxonomy_term\', FALSE, array(\'vid\' => $vocabulary->vid));
  foreach ($terms as $term) {
    $field_variables_tid = $term->tid;
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
?>

<div class="horizontal-tabs"><ul class="horizontal-tabs-list">
		<li tabindex="-1" class="contextTab horizontal-tab-button horizontal-tab-button-0 first">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/context?<?php print($yearParamB);?>=<?php print($year);?>">
        <strong><?php echo t("Context");?></strong>
      </a>
    </li>		
		<li tabindex="0" class="outcomesTab horizontal-tab-button horizontal-tab-button-1">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/outcomes?<?php print($yearParamA);?>=<?php print($year);?>&field_variables_tid=<?php echo  $field_variables_tid;?>">
        <strong><?php echo t("Outcomes");?></strong>
      </a>
    </li>	
		<li tabindex="1" class="timeLineTab horizontal-tab-button horizontal-tab-button-2 selected">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/eiro-timeline?country_tid=<?php print($country_tid);?>">
        <strong><?php echo t("Time line");?></strong>
      </a>
    </li>	
		<li tabindex="2" class="countryInfoTab countriesMetaDataTab horizontal-tab-button horizontal-tab-button-3">
      <a href="<?php echo $base_url;?>/observatories/eurwork/collective-wage-bargaining/sources?country_tid=<?php print( $country_tid);?>">
        <strong><?php echo t("Sources");?></strong>
      </a>
    </li>	
</ul></div>
';
$handler->display->display_options['path'] = 'observatories/eurwork/collective-wage-bargaining/eiro-timeline';

$view->save();
}
