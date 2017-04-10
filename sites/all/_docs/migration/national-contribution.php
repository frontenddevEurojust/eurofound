<?php 
include '_migration.inc';
ini_set('memory_limit', '-1');
include_once('parsers/simple_html_dom.php');
$action=isset($_GET['action'])?$_GET['action']:NULL;
$from=isset($_GET['from'])?$_GET['from']:NULL;
$to=isset($_GET['to'])?$_GET['to']:NULL;

$uniqueMetadata=array();
if ($action==NULL) {
	die("</pre>menu:<br/>- <a href=\"?action=del\">del all</a><br/>- <a href=\"?action=test\">test migrate</a><br/>- <a href=\"?action=migrate\">migrate</a>");
}
$time_start = microtime(true); 
function _migrate($nodeType,$action,$from,$to) {
	 if ($action=='fix_urls') {
		$results = db_query("SELECT * from efpages where type_id = '102' and lang='en' and page_name like 'tn%' and page_name not like '%\_%'");	
		foreach ($results as $page) {
			$indexesResults = db_query("SELECT * from efpages where type_id = '102' and lang='en' and path='$page->path' and page_name like 'index%'");
			foreach ($indexesResults as $indexesResult) {
				echo $page->page_id."----".$page->new_url. "||".$indexesResult->page_name."||".$indexesResult->new_url."<br/>";
				//$query = db_update('efpages')->condition('page_id', $indexesResult->page_id)->fields(array('new_url' => $page->new_url))->execute();
			 }
		}
	 }
	  if ($action=='del') {
		delete($nodeType);
		delete("ef_national_contribution");
		die;
	  }
	  global $script_dir;
	  $savedNodesCount = 0;
	  $result = "<table><tr><th>No.</th><th>Title</th><th>Url</th><th>Old url</th></tr>";
	    global $errors_count;
		$row = 0;
		//get the Comparative study page  
		db_query("SET SESSION sql_mode='ALLOW_INVALID_DATES'");
		$results = db_query("SELECT * from efpages where type_id = '102' and lang='en' and page_name like 'tn%' and page_name not like '%\_%' order by page_id asc limit $from,$to");	
		echo "SELECT * from efpages where type_id = '102' and lang='en' and page_name like 'tn%' and page_name not like '%\_%' order by page_id asc limit $from,$to";
		foreach ($results as $page) {
			$indexesResults = db_query("SELECT * from efpages where type_id = '102' and lang='en' and path='$page->path' and page_name='index.htm'")->fetchObject();
			$pageId = explode(".",  $page->page_name);
			$pagePattern=$pageId[0];
			$subPagesResults = db_query("SELECT * from efpages where type_id = '102' and lang='en' and page_name like 'tn%' and page_name like '%$pagePattern\_%' order by LENGTH(page_name), page_name");
			if($subPagesResults->rowCount()>0){
				if(!empty($indexesResults)){
					$page->page_content_text=parseIndexPage($indexesResults->page_content_text);	
					$abstract=getAbstract($indexesResults->page_content_text);
				} else {
					$page->page_content_text=removeAnchors($page->page_content_text);	
					$abstract=getAbstract($page->page_content_text);
				}
			} else {
				if(!empty($indexesResults)){
					$abstract=getAbstract($indexesResults->page_content_text);
				} else {
					$abstract=getAbstract($page->page_content_text);
				}
				$page->page_content_text=$page->page_content_text;				
			}
			$page->summary=drupal_html_to_text($abstract);
		   foreach ($subPagesResults as $key=>$node) {		
				 $newUrls[$page->page_id][]=$node->page_id;	
				$page->page_content_text.=parseAndRemoveSubsectionsFromMainContent($node->page_content_text);		
		   }
		   if(!empty($indexesResults)){
				$newUrls[$page->page_id][]=$indexesResults->page_id;	
			}
		    $newUrls[$page->page_id][]=$page->page_id;	
		  _migrateNationalContribution("ef_national_contribution", $action, $page);
		  $page->nationalContributionsIds=getNationsContributionsIds();
		  $finalResults[$page->page_id]=$page;
		}
	foreach ($finalResults as $index=>$data) {
		 $translations=null;
		  $row++;
		  echo "processing row: $row";
		  $node = _createDrupalNode($nodeType, $data);
				$node = processNode($node, $data, $translations);
		
		  $node = _saveAndReturnNode($node, $action);
		  
		  $node_path=str_replace("/EFWEB", "", $data->path);
		  $node->old_url="http://eurofound.europa.eu".$node_path.$data->page_name;
		  foreach($newUrls[$data->page_id] as $id=>$record) {
			$query = db_update('efpages')->condition('page_id', $record)->fields(array('new_url' => "/ef/".drupal_get_path_alias('node/'. $node->nid)))->execute();
			$query = db_update('efpages')->condition('page_id', $record)->fields(array('migrated' =>1,'node_id'=> $node->nid))->execute();
		  }
		  $savedNodesCount = $savedNodesCount + 1;
				$result = $result . getSavedNodeInformation($savedNodesCount, $node);
		  echo '<br/>';	
	}
  echo '<br/><br/>';
  echo '----------------------------------------------<br />';
	echo '<strong>'.$nodeType.'</strong><br />';
  //echo '  <em>'.$fileName.'</em><br />';
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

function getNationsContributionsIds(){
	global $contributionsIds;
	return $contributionsIds;
}



function _migrateNationalContribution($nodeType,$action,$page) {
	 global $contributionsIds;
	 $contributionsIds=array();
	  if ($action=='del') {
		delete($nodeType);
		die;
	  }
	  global $script_dir;
	  $savedNodesCount = 0;
	  $result = "<table><tr><th>No.</th><th>Title</th><th>Url</th><th>Old url</th></tr>";
	    global $errors_count;
		$row = 0;
		//get the Comparative study page  
		$results = db_query("SELECT * from efpages where type_id = '103' and lang='en' and path='$page->path'");	
	foreach ($results as $index=>$data) {
		$pagesId = explode(".",  $data->page_name);
		$newUrls[$data->page_id][]=$data->page_id;	
		//print_r($data);
		 $translations = db_query("select * from efpages where type_id = '103' and lang!='en' and page_name like '%".$pagesId[0]."_%'");
		 $translationPageIds = db_query("select * from efpages where type_id = '103' and lang!='en' and page_name like '%".$pagesId[0]."_%'");
		  $row++;
		  echo "processing row: $row";
		  $node = _createDrupalNode($nodeType, $data);
				$node = processNode($node, $data, $translations,true);
		  $node = _saveAndReturnNode($node, $action);
		  
		  $node_path=str_replace("/EFWEB", "", $data->path);
		  $node->old_url="http://eurofound.europa.eu".$node_path.$data->page_name;
		  foreach($newUrls[$data->page_id] as $id=>$record) {
			$query = db_update('efpages')->condition('page_id', $record)->fields(array('new_url' => "/ef/".drupal_get_path_alias('node/'. $node->nid)))->execute();
			$query = db_update('efpages')->condition('page_id', $record)->fields(array('migrated' =>1,'node_id'=> $node->nid))->execute();
		  }
		  if($translationPageIds->rowCount()>0){
			foreach($translationPageIds as $translationPage){
				$query = db_update('efpages')->condition('page_id', $translationPage->page_id)->fields(array('new_url' => "/ef/".$translationPage->lang."/".drupal_get_path_alias('node/'. $node->nid)))->execute();
				$query = db_update('efpages')->condition('page_id', $translationPage->page_id)->fields(array('migrated' =>1,'node_id'=> $node->nid))->execute();
		    }
		 }
		  $contributionsIds[]=$node->nid;
		  cache_clear_all();
		  $savedNodesCount = $savedNodesCount + 1;
				$result = $result . getSavedNodeInformation($savedNodesCount, $node);
		  echo '<br/>';	
	}
 echo '<br/><br/>';
  echo '----------------------------------------------<br />';
	echo '<strong>'.$nodeType.'</strong><br />';
  //echo '  <em>'.$fileName.'</em><br />';
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




function _saveAndReturnNode($node, $action) {
  $created = $node->created;
  $changed = $node->changed;
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

	return $node;
}

// http://stackoverflow.com/questions/8274815/how-to-set-custom-field-value-for-node-in-drupal-7
function _createDrupalNode($nodeType, $legacyId) {
	$node = new stdClass();
  $node->language = "en";  // hardcoded
  $node->name = "eworx";     // $node->uid is brutally overriden by node_object_prepare, but node_submit overrides again using the $node->name
  $node->type = $nodeType;
  $node->created = time(); // default fallback - otherwise it will be explicitely set in processNode
	$node->old_url = "-";
	$node->migrated  = TRUE;
	return $node;
}

function parseRightColumn($data){
  global $uniqueMetadata;
	if($data){
		$html = str_get_html($data);
		foreach($html->find("ul[id=aboutlist] li") as $e) {
			$innerHtml=explode(":",$e->plaintext);
			$metadata[trim($innerHtml[0])]=trim($innerHtml[1]);
			$uniqueMetadata;
			if(!array_key_exists(trim($innerHtml[0]), $uniqueMetadata))
			{
				$uniqueMetadata[trim($innerHtml[0])] = 0;
			}
		}
		$html->clear();
		unset($html);
	  return $metadata;
	}	
}

function removeAnchors($data){
	$html = str_get_html($data);
	$html->find("p",2)->outertext = '';
	$content= (string) $html;
	$html->clear();
	unset($html);
	return  $content;
}

function removeAbstract($data){
	$html = str_get_html($data);
	$html->find("p",0)->outertext = '';
	$content= (string) $html;
	$html->clear();
	unset($html);
	return  $content;
}


function getAbstract($data){
	$html = str_get_html($data);
	$p=$html->find("p",1);
	$content= (string) $p;
	$html->clear();
	unset($html);
	unset($p);
	return $content;
}


function parseIndexPage($data){
	$html = str_get_html($data);
	$p1=$html->find("p",0);
	$p2=$html->find("p",1);
	$p3=$html->find("p",2);
	$p1->find("a",0)->outertext = '';
	$content= (string) $p1.$p2.$p3;
	$html->clear();
	unset($html);
	unset($p1);
	unset($p2);
	unset($p3);
	return $content;
}


function parseAndRemoveMetadataFromMainContent($data){
 if($data){
	 $html = str_get_html($data);
	 $ret = $html->find('div[id=printdiv]'); 
	 $html->find('div[id=printdiv]',0)->outertext = '';
	 $content= (string) $html;
	 $html->clear();
	 unset($html);
	 unset($ret);
    return $content;
 }	
}

function parseAndRemoveSubsectionsFromMainContent($data){
 if($data){
	 $data='<section class="ef-subpage">'.$data.'</section>';
	 $html = str_get_html($data);
	 $html->find("br", 0)->outertext = '';
	 $html->find("table", 0)->outertext = '';
	 $html->find("table", -1)->outertext = '';
	 $html->find("br", -1)->outertext = '';
	 $content= (string) $html;
	 $html->clear();
	 unset($html);
	 return $content;
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
    "Org size"  => "field_ef_organisation_size",
    "Company size" => "field_ef_organisation_size");

$caseStudiesTypesAndObservatoryFromPath=array("/EFWEB/areas/qualityofwork/betterjobs/cases/"=>array("name"=>"Attractive workplace for all company cases","obs"=>"EurWork"),
"/EFWEB/areas/populationandsociety/cases/"=>array("name"=>"Ageing workforce","obs"=>"EurWork"),
//"/EFWEB/areas/socialcohesion/egs/cases/"=>"",
"/EFWEB/areas/labourmarket/tackling/cases/"=>array("name"=>"Tackling undeclared work in Europe","obs"=>"EurWork"),
//"/EFWEB/areas/industrialrelations/pecs/cases/"=>"",
"/EFWEB/areas/populationandsociety/workingcaring/cases/"=>array("name"=>"Workers with care responsibilities","obs"=>"EurWork"),
"/EFWEB/emcc/labourmarket/greening/cases/"=>array("name"=>"The greening of industries in the EU","obs"=>"EMCC"));

$caseStudiesTypes=array("/EFWEB/areas/qualityofwork/betterjobs/cases/"=>"Attractive workplace for all company cases",
"/EFWEB/areas/populationandsociety/cases/"=>"Ageing workforce",
"/EFWEB/areas/socialcohesion/egs/cases/"=>"",
"/EFWEB/areas/labourmarket/tackling/cases/"=>"Tackling undeclared work in Europe",
"/EFWEB/areas/industrialrelations/pecs/cases/"=>"",
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



function processNode($node, $data, $translations=null, $isNational=false) {
  global $countriesToIsoCodes;
  global $action;
  global $metadataToVocabulary;
  global $caseStudiesTypesAndObservatoryFromPath;

  if (shouldImportValue($data->page_content_title)) {
	$node->title = truncate_utf8(trim($data->page_content_title),255,true);
  }
 
 	$explodedPath=explode("/",$data->path);
	if(strtolower(trim($explodedPath[2]))=='emcc'){
		$observatoryId=getObservatoryId('emcc');
	} else {
		$observatoryId=getObservatoryId('eurwork');
	}
	
	$node->field_ef_observatory[LANGUAGE_NONE][0]=array('tid'=>$observatoryId);
 

  $metadata=parseRightColumn($data->page_content_right_column);
  
  if (shouldImportValue($data->page_content_text)) {
	  if($isNational){
		$abstract=getAbstract($data->page_content_text);
		$page->summary=drupal_html_to_text($abstract);
	  }
	$node->body[$data->lang][0] = array('value'=>$data->page_content_text,'format'=>'filtered_html','summary'=>$data->summary);
  }
  
	if(!strtotime($data->page_content_date_modified)){
		$node->created=strtotime($data->page_content_date_created);
	} else {
		$node->created=strtotime($data->page_content_date_modified);
	}
    $countriesMapping=array("transnational"=>"EU Member States","eu countries"=>"EU Member States","eulevel"=>"EU Level","eu level"=>"EU Member States","italia"=>"Italy","slovak republic"=>"Slovakia","Former yugoslav republic of macedonia"=>"Macedonia");
    foreach($metadata as $key=>$value){
		if($key=="Country"){
			$country = $countriesToIsoCodes[ucwords(strtolower(trim($value)))];
			if($isNational){
				    $countriesMapping=array("transnational"=>"EU Member States","eu countries"=>"EU Member States","eulevel"=>"EU Level","eu level"=>"EU Level","italia"=>"Italy","slovak republic"=>"Slovakia","Former yugoslav republic of macedonia"=>"Macedonia");
			}
			if ($country) {
				if($isNational){
					$node->field_ef_country[LANGUAGE_NONE][0] = array('iso2'=>$country);
				} else {			
					$node->field_ef_eu_related_countries[LANGUAGE_NONE][0] = array('iso2'=>$country);
				}
			} else {
				if(isset($countriesToIsoCodes[$countriesMapping[strtolower(trim($value))]])){
				  $country = $countriesToIsoCodes[$countriesMapping[strtolower(trim($value))]];
				  if($isNational){
					$node->field_ef_country[LANGUAGE_NONE][0] = array('iso2'=>$country);
				  } else {
					$node->field_ef_eu_related_countries[LANGUAGE_NONE][0] = array('iso2'=>$country);
				  }
				} else {
				  error("missing iso code for country '$value'\n");
				}
			}
		}
		
		if($key=="Institution"){
			$node->field_ef_institution[LANGUAGE_NONE][0] = array('value'=>trim($value));
		}
		
		if($key=="Author"){
			$node->field_ef_author[LANGUAGE_NONE][0] = array('value'=>trim($value));
		}
		
		if($key=="Topics" || $key=="EIRO Keywords" || $key=="Subjects" || $key=="Subject"){
			$taxonomyIds=array();
			$themesIds=array();
			$uniqueTerms=array();
			$taxonomies=explode(",", trim($value));
			foreach($taxonomies as $taxonomy){
				$termId=getTermIdFromTermName(trim($taxonomy),'ef_topics');
				$taxonomyIds[]['tid']=$termId;
				$term=taxonomy_term_load($termId);
				if(!isset($term->field_ef_theme[LANGUAGE_NONE][0]['tid'])){
					$undefinedTermId=getTermIdFromTermName('Other','ef_themes');
					$term->field_ef_theme[LANGUAGE_NONE][0]['tid']=$undefinedTermId;
					taxonomy_term_save($term);
					if(!in_array($undefinedTermId,$uniqueTerms)){
						$themesIds[]['tid']=$undefinedTermId;
						$uniqueTerms[]=$undefinedTermId;
					}
					
				} else {
					if(!in_array($term->field_ef_theme[LANGUAGE_NONE][0]['tid'],$uniqueTerms)){
						$themesIds[]['tid']=$term->field_ef_theme[LANGUAGE_NONE][0]['tid'];
						$uniqueTerms[]=$term->field_ef_theme[LANGUAGE_NONE][0]['tid'];
					}
				}
				
			}
			$node->field_ef_topic[LANGUAGE_NONE]=$taxonomyIds;
			$node->field_ef_theme[LANGUAGE_NONE]=$themesIds;
		}
		
		if($key=="Sector"){
		   $sectorId=getTermIdFromTermName(trim($value),'ef_sectors');
		   $node->field_ef_sector[LANGUAGE_NONE][0] = array('tid'=>$sectorId);
		}
		
		if($key=="Publication date"){
			if(!strtotime($value)){
				/*$parts=explode("-", $value);
				if(count($parts)==2){
					$setDate="1-".$parts[0].$parts[1];
					$node->created=strtotime($setDate);				
				}
				if(count($parts)==0){
					$setDate="1-1-".$parts[0];
					$node->created=strtotime($setDate);		
				}*/
				$node->created=strtotime($data->page_content_date_modified);
			} else {
				$node->created=strtotime($value);
			}
		}
		
	}
	
	if(!empty($data->nationalContributionsIds)) {
		$national=array();
		foreach($data->nationalContributionsIds as $contributorId){
			$national[]['target_id']= $contributorId;
		}
		$node->field_ef_national_contribution[LANGUAGE_NONE]= $national;
	}
	

  //$node->changed=strtotime($data->page_content_date_modified);
		foreach($translations as $trans){
		  if($isNational){
			$transAbstract=getAbstract($trans->page_content_text);
			$trans->summary=drupal_html_to_text($transAbstract);
		  }
			$node->body[$trans->lang][0]=array('value'=>$trans->page_content_text,'format'=>'filtered_html','summary'=>$trans->summary);
			$node->title_field[$trans->lang][0]['value'] = $trans->page_content_title;
			// Add other node fields translation
			$handler = entity_translation_get_handler('node', $node);
			$translation = array(
			  'translate' => 0,
			  'status' => 1,
			  'language' => $trans->lang,
			  'source' => 'en',
			  'created'=>$node->created,
			);
			$handler->setTranslation($translation, $node);
			
		}
		
		
		$node_path=str_replace("/EFWEB", "", $data->path);
	    $old_url="http://eurofound.europa.eu".$node_path.$data->page_name;
		
		$node->field_ef_migration_datetime['und'][0]=array('value'=>date('Y-m-d h:i:s'));
		$node->field_ef_migration_old_url['und'][0]=array('title'=>$data->page_content_title,'url'=>$old_url);
		$node->field_ef_migration_details['und'][0]=array('value'=>"Page Id: ".$data->page_id);
		
  return $node;
 
}
cache_clear_all();
_migrate("ef_comparative_analytical_report", $action,$from,$to);

$time_end = microtime(true);

//dividing with 60 will give the execution time in minutes other wise seconds
$execution_time = ($time_end - $time_start)/60;

//execution time of the script
echo '<b>Total Execution Time:</b> '.$execution_time.' Mins';
die('<br /><br />');