<?php 
include '_migration.inc';
include_once('parsers/simple_html_dom.php');
$action=isset($_GET['action'])?$_GET['action']:NULL;
$to=isset($_GET['to'])?$_GET['to']:NULL;
$from=isset($_GET['from'])?$_GET['from']:NULL;
$uniqueMetadata=array();
if ($action==NULL) {
	die("</pre>menu:<br/>- <a href=\"?action=del\">del all</a><br/>- <a href=\"?action=test\">test migrate</a><br/>- <a href=\"?action=migrate\">migrate</a>");
}

function _migrate($nodeType,$action,$from,$to) {
	  if ($action=='del') {
		delete($nodeType);
		die;
	  }
	  global $script_dir;
	  $savedNodesCount = 0;
	  $result = "<table><tr><th>No.</th><th>Title</th><th>Url</th><th>Old url</th></tr>";
	  
	    global $errors_count;
		$row = 0;
	    $results = db_query("SELECT * from efpages where type_id = '104' order by page_id asc limit $from,$to");
		foreach ($results as $data) {
		  $row++;
		  echo "processing row: $row";
		  $node = _createDrupalNode($nodeType, $data);
				$node = processNode($node, $data);
		  $node = _saveAndReturnNode($node, $action);
		  $node_path=str_replace("/EFWEB", "", $data->path);
		  $node->old_url="http://eurofound.europa.eu".$node_path.$data->page_name;
		  $query = db_update('efpages')->condition('page_id', $data->page_id)->fields(array('new_url' => "/ef/".drupal_get_path_alias('node/'. $node->nid)))->execute();
		  $query = db_update('efpages')->condition('page_id', $data->page_id)->fields(array('migrated' =>1,'node_id'=> $node->nid))->execute();
		  $savedNodesCount = $savedNodesCount + 1;
				$result = $result . getSavedNodeInformation($savedNodesCount, $node);
		  echo '<br/>';
			
		}
 
  echo '<br/><br/>';
  echo '----------------------------------------------<br />';
	echo '<strong>'.$nodeType.'</strong><br />';
  echo '  <em>'.$fileName.'</em><br />';
	echo '  <em>'.($row-1).' items found!</em><br />';
	echo '----------------------------------------------<br /><br />';

  $result = $result.'<tr><td colspan="4">Total: '.$savedNodesCount.' nodes saved!</td></tr>';
	$result = $result.'</table>';
  echo '<br /><br />'; 
	echo '<strong>RESULTS</strong>';
	echo '<br />'; 
	echo $result;
	echo '<br /><br />';
	echo "errors: $errors_count";
}

// http://stackoverflow.com/questions/8274815/how-to-set-custom-field-value-for-node-in-drupal-7
function _createDrupalNode($nodeType, $legacyId) {
	$node = new stdClass();
  $node->language = "en";  // hardcoded
  $node->name = "eworx";     // $node->uid is brutally overriden by node_object_prepare, but node_submit overrides again using the $node->name
  $node->type = $nodeType;
	return $node;
}



function _saveAndReturnNode($node, $action) {
  $created = $node->created;
  //$changed = $node->created;
  $node->date = $created;
  $node->status = NODE_PUBLISHED;
  $node->revision_operation = 'REVISIONING_NEW_REVISION_NO_MODERATION';
  $node->revision_moderation = TRUE;
  $node->workbench_moderation['updating_live_revision'] = 1;
  node_object_prepare($node);
  $node = node_submit($node); // node_submit overrides $node->created, but we need it to set the appropriate $node->uid
  if ($created) {
    $node->created = $created;  // override $node->created again with our custom migration value
	$node->changed = $created;
	$node->revision_timestamp = $created;
  }
  if ($action=='migrate') {
    node_save($node);
	$query = db_update('node')->condition('nid', $node->nid)->fields(array('changed' => $created))->execute();
	$query = db_update('node_revision')->condition('nid', $node->nid)->fields(array('timestamp' => $created))->execute();
	$node->changed=$node->created;
	$node->revision_timestamp=$node->created;
	workbench_moderation_moderate($node, 'published');
	$query = db_update('workbench_moderation_node_history')->condition('nid', $node->nid)->fields(array('stamp' => $created))->execute();
  }
  cache_clear_all();
 return $node;
}


function parseRightColumn($data){
  global $uniqueMetadata;
	if($data){
		$html = str_get_html($data);
		foreach($html->find('li') as $e) {
			$innerHtml=explode(":",$e->plaintext);
			$metadata[trim($innerHtml[0])]=trim($innerHtml[1]);
			$uniqueMetadata;
			if(!array_key_exists(trim($innerHtml[0]), $uniqueMetadata))
			{
				$uniqueMetadata[trim($innerHtml[0])] = 0;
			}
		}
		
		print_r($metadata);
	  return $metadata;
	}	
}


function parseAndRemoveMetadataFromMainContent($data){
 if($data){
	 $html = str_get_html($data);
	 $ret = $html->find('div[id=printdiv]'); 
	 $html->find('div[id=printdiv]',0)->outertext = '';
	 $content=$html;
    return $html;
 }	
}

$metadataToDrupalFields=array(
    "Category" => "field_ef_case_study_category",
    "Country" => "field_ef_country",
    "Organisation Size" => "field_ef_organisation_size",
    "Sector" => "field_ef_case_study_sectors",
    "Legal Form" => "field_ef_legal_form",
    "Social Dialogue" => "field_ef_social_dialogue",
    "Target Groups" => "field_ef_target_groups",
    "Initiative Type" => "field_ef_initiative_types",
    "Scope" => "field_ef_scope",
    "Social Dialogue Type"  => "field_ef_social_dialogue",
    "Initiative type"  => "field_ef_initiative_types",
    //[Type of Measure] => 0
    "Org size"  => "field_ef_organisation_size",
    "Company size" => "field_ef_organisation_size");

$caseStudiesTypesAndObservatoryFromPath=array("/EFWEB/areas/qualityofwork/betterjobs/cases/"=>array("name"=>"Attractive workplace for all company cases","obs"=>"EurWork"),
"/EFWEB/areas/populationandsociety/cases/"=>array("name"=>"Ageing workforce","obs"=>"EurWork"),
"/EFWEB/areas/socialcohesion/egs/cases/"=>array("name"=>"Egs","obs"=>"EurWork"),
"/EFWEB/areas/labourmarket/tackling/cases/"=>array("name"=>"Tackling undeclared work in Europe","obs"=>"EurWork"),
"/EFWEB/areas/industrialrelations/pecs/cases/"=>array("name"=>"Pecs","obs"=>"EurWork"),
"/EFWEB/areas/populationandsociety/workingcaring/cases/"=>array("name"=>"Workers with care responsibilities","obs"=>"EurWork"),
"/EFWEB/emcc/labourmarket/greening/cases/"=>array("name"=>"The greening of industries in the EU","obs"=>"EMCC"));

$caseStudiesTypes=array("/EFWEB/areas/qualityofwork/betterjobs/cases/"=>"Attractive workplace for all company cases",
"/EFWEB/areas/populationandsociety/cases/"=>"Ageing workforce",
"/EFWEB/areas/socialcohesion/egs/cases/"=>"Egs",
"/EFWEB/areas/labourmarket/tackling/cases/"=>"Tackling undeclared work in Europe",
"/EFWEB/areas/industrialrelations/pecs/cases/"=>"Pecs",
"/EFWEB/areas/populationandsociety/workingcaring/cases/"=>"Workers with care responsibilities",
"/EFWEB/emcc/labourmarket/greening/cases/"=>"The greening of industries in the EU");

	
$metadataToVocabulary=array(
    "Category" => "ef_case_study_categories",
    "Country" => "field_ef_country",
    "Organisation Size" => "ef_case_study_organisation_sizes",
    "Sector" => "ef_case_study_sectors",
    "Legal Form" => "ef_case_study_legal_forms",
    "Social Dialogue" => "ef_case_study_social_dialogue_types",
    "Target Groups" => "ef_case_study_target_groups",
    "Initiative Type" => "ef_case_study_initiative_types",
    "Scope" => "ef_case_study_scopes",
    "Social Dialogue Type"  => "ef_case_study_social_dialogue_types",
    "Initiative type"  => "ef_case_study_initiative_types",
    //[Type of Measure] => 0
    "Org size"  => "ef_case_study_organisation_sizes",
    "Company size" => "ef_case_study_organisation_sizes");

	
	
function getTermIdFromTermName($term_name,$vocabulary) {
  $arr_terms = taxonomy_get_term_by_name($term_name, $vocabulary);
  if (!empty($arr_terms)) {
    $arr_terms = array_values($arr_terms);
    $tid = $arr_terms[0]->tid;
  }
   else {
    $vobj = taxonomy_vocabulary_machine_name_load($vocabulary);
    $term = new stdClass();
    $term->name = $term_name;
    $term->vid = $vobj->vid;
    taxonomy_term_save($term);
    $tid = $term->tid;
  }
  return $tid;
}

function processNode($node, $data) {
  global $countriesToIsoCodes;
  global $action;
  global $metadataToVocabulary;
  global $caseStudiesTypesAndObservatoryFromPath;
 
  if (shouldImportValue($data->page_content_title)) {
	$node->title = truncate_utf8(trim($data->page_content_title),255);
  }
  
   if (shouldImportValue($data->page_content_title)) {
	$node->title = truncate_utf8(trim($data->page_content_title),255);
  }
  
  if (shouldImportValue($data->page_content_text)) {
    $content=parseAndRemoveMetadataFromMainContent(trim($data->page_content_text));
	$node->body['en'][0] = array('value'=>$content,'format'=>'filtered_html');
  }
  
  $node->created=strtotime($data->page_content_date_modified);
  $node->changed=strtotime($data->page_content_date_modified);
  $metadata=parseRightColumn($data->page_content_right_column);
  if(isset($caseStudiesTypesAndObservatoryFromPath[$data->path]['name'])){
	$taxonomyId=getTermIdFromTermName($caseStudiesTypesAndObservatoryFromPath[$data->path]['name'],'ef_case_study_names');
	$node->field_ef_case_study_name[LANGUAGE_NONE][0]=array('tid'=>$taxonomyId);
  }
  
  if(isset($caseStudiesTypesAndObservatoryFromPath[$data->path]['obs'])){
	$observatoryId=getObservatoryId($caseStudiesTypesAndObservatoryFromPath[$data->path]['obs']);
	$node->field_ef_observatory[LANGUAGE_NONE][0]=array('tid'=>$observatoryId);
  }
  
  $countriesMapping=array("Slovak republic"=>"Slovakia","Former yugoslav republic of macedonia"=>"Macedonia");
  foreach($metadata as $key=>$value){
		if($key=="Country"){
			$country = $countriesToIsoCodes[ucwords(strtolower(trim($value)))];
			if ($country) {
			  $node->field_ef_country[LANGUAGE_NONE][0] = array('iso2'=>$country);
			} else {
				if(isset($countriesToIsoCodes[$countriesMapping[trim($value)]])){
				  $country = $countriesToIsoCodes[$countriesMapping[trim($value)]];
				  $node->field_ef_country[LANGUAGE_NONE][0] = array('iso2'=>$country);
				} else {
				  error("missing iso code for country '$value'\n");
				}
			}
		} else {
			if($key!='Type of Measure' && $key!='Date Created' && trim($value)){
				$taxonomyIds=array();
				$taxonomies=explode(",", trim($value));
				foreach($taxonomies as $taxonomy){
					$taxonomyIds[]['tid']=getTermIdFromTermName($taxonomy,$metadataToVocabulary[trim($key)]);
				}
				if($key=="Category"){
					$node->field_ef_case_study_category[LANGUAGE_NONE]=$taxonomyIds;
				}
				if($key=="Organisation Size" || $key=="Org size" || $key=="Company size" ){
					$node->field_ef_organisation_size[LANGUAGE_NONE]=$taxonomyIds;
				}
				if($key=="Sector"){
					$node->field_ef_case_study_sectors[LANGUAGE_NONE]=$taxonomyIds;
				}
				if($key=="Legal Form"){
					$node->field_ef_legal_form[LANGUAGE_NONE]=$taxonomyIds;
				}
				if($key=="Social Dialogue" ||  $key=="Social Dialogue Type"){
					$node->field_ef_social_dialogue[LANGUAGE_NONE]=$taxonomyIds;
				}
				if($key=="Target Groups"){
					$node->field_ef_target_groups[LANGUAGE_NONE]=$taxonomyIds;
				}
				if($key=="Initiative Type" || $key=="Initiative type"){
					$node->field_ef_initiative_types[LANGUAGE_NONE]=$taxonomyIds;
				}
				if($key=="Scope"){
					$node->field_ef_scope[LANGUAGE_NONE]=$taxonomyIds;
				}
			}
		}
  }
  
	$node_path=str_replace("/EFWEB", "", $data->path);
	$old_url="http://eurofound.europa.eu".$node_path.$data->page_name;
	
	$node->field_ef_migration_datetime['und'][0]=array('value'=>date('Y-m-d h:i:s'));
	$node->field_ef_migration_old_url['und'][0]=array('title'=>$data->page_content_title,'url'=>$old_url);
	$node->field_ef_migration_details['und'][0]=array('value'=>"Page Id: ".$data->page_id);
  
  return $node;
 
}

_migrate("ef_case_study", $action, $from,$to);

echo '<br /><br />';