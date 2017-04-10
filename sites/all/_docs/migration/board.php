<?php 
include '_migration.inc';
include_once('parsers/simple_html_dom.php');
$action=isset($_GET['action'])?$_GET['action']:NULL;
$from=isset($_GET['from'])?$_GET['from']:NULL;
$to=isset($_GET['to'])?$_GET['to']:NULL;
$uniqueMetadata=array();

$months = array(
    'jan', 'january',
    'feb', 'febuary',
    'mar', 'march',
    'apr', 'april',
    'may',
    'june',
    'july',
    'aug', 'august',
    'sept', 'september',
    'oct', 'october',
    'nov', 'november',
    'dec', 'december',
);






if ($action==NULL) {
	die("</pre>menu:<br/>- <a href=\"?action=del\">del all</a><br/>- <a href=\"?action=test\">test migrate</a><br/>- <a href=\"?action=migrate\">migrate</a>");
}

$time_start = microtime(true); 
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
		db_query("SET SESSION sql_mode='ALLOW_INVALID_DATES'");
		$results = db_query("SELECT * from efpages where type_id = '113' and lang='en' order by page_id asc");
		
		foreach ($results as $index=>$data) {
		  $pagesId = explode(".",  $data->page_name);
		  $translations = db_query("select * from efpages where type_id = '113' and page_name like '".$pagesId[0]."%\___.htm%' and path='$data->path'");
		  //die("select * from efpages where type_id = '105' and page_name like '".$pagesId[0]."%\___.htm%' and path='$data->path'");
		  $translationPageIds = db_query("select * from efpages where type_id = '113' and page_name like '".$pagesId[0]."%\___.htm%' and path='$data->path'");
		  $row++;
		  //echo "processing row: $row";
		  $node = _createDrupalNode($nodeType, $data);
				$node = processNode($node, $data, $translations);
		  $node = _saveAndReturnNode($node, $action);
		  $node_path=str_replace("/EFWEB", "", $data->path);
		  $node->old_url="http://eurofound.europa.eu".$node_path.$data->page_name;
		  $query = db_update('efpages')->condition('page_id', $data->page_id)->fields(array('new_url' => "/ef/".drupal_get_path_alias('node/'. $node->nid)))->execute();
		  $query = db_update('efpages')->condition('page_id', $data->page_id)->fields(array('migrated' =>1,'node_id'=> $node->nid))->execute();
		  if($translationPageIds->rowCount()>0){
			foreach($translationPageIds as $translationPage){
				$translationPage->lang = substr($translationPage->page_name, strpos($translationPage->page_name, ".htm") -2,2);
				$query = db_update('efpages')->condition('page_id', $translationPage->page_id)->fields(array('new_url' => "/ef/".$translationPage->lang."/".drupal_get_path_alias('node/'. $node->nid)))->execute();
				$query = db_update('efpages')->condition('page_id', $translationPage->page_id)->fields(array('migrated' =>1,'node_id'=> $node->nid))->execute();
		    }
		 }
		  $savedNodesCount = $savedNodesCount + 1;
				$result = $result . getSavedNodeInformation($savedNodesCount, $node);
		  //echo '<br/>';
		  //cache_clear_all();
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
  //$changed = $node->created;
  $node->date = $created;
  $node->status = NODE_PUBLISHED;
  $node->revision_operation = 'REVISIONING_NEW_REVISION_NO_MODERATION';
  //$node->revision_moderation = TRUE;
  //$node->workbench_moderation['updating_live_revision'] = 1;
  $node->revision_moderation = TRUE;
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
		

  $alias=drupal_get_path_alias('node/'. $node->nid);
  $languages = language_list();
  foreach ($languages as $langcode => $language) {
	// Insert or update the alias.
	db_merge('url_alias')
	  ->key(array(
		'source' => 'node/' . $node->nid,
		'language' => $langcode
	  ))
	  ->fields(array('alias' => $alias))
	  ->execute();

  }

	//$node->revision_timestamp=$node->created;
	//workbench_moderation_moderate($node, 'published');
	//$query = db_update('workbench_moderation_node_history')->condition('nid', $node->nid)->fields(array('stamp' => $created))->execute();
  }
  cache_clear_all();
 return $node;
}


// http://stackoverflow.com/questions/8274815/how-to-set-custom-field-value-for-node-in-drupal-7
function _createDrupalNode($nodeType, $legacyId) {
	$node = new stdClass();
  $node->language = "en";  // hardcoded
  $node->name = "eworx";     // $node->uid is brutally overriden by node_object_prepare, but node_submit overrides again using the $node->name
  $node->type = $nodeType;
  $node->created = time();
  $node->old_url = "-";
  return $node;
}

function parseMetadata($data){
  global $uniqueMetadata;
	if($data){
		$html = str_get_html($data);
		foreach($html->find("div[class=leftdivpub] table tr") as $e) {
			$label=$e->find("td",0)->plaintext;

			if(!empty($label)){
				$label=trim(str_replace(":","",$label));
			}
			$value=$e->find("td",1)->plaintext;
			if(!empty($value)){
				$value=trim($value);
			}
			$uniqueMetadata;
			if(!array_key_exists($label, $uniqueMetadata))
			{
				$uniqueMetadata[$label] = 0;
			}
			$metadata[]=$value;
		}
		$html->clear();
		unset($html);
		unset($e);
	  return $metadata;
	}	
}


function getBody($data){
	if($data){
		$html = str_get_html($data);
		$pdfLink=$html->find("div[class=leftdivpub] table tr",6);
		$bodyTr=$html->find("div[class=leftdivpub] table tr",1);
		$body=$bodyTr->find("td",1);
		$thumbnail=$html->find("div[class=rigttextpub]",0);
		$content= (string) $thumbnail.$body."<br/>".$pdfLink;
		$html->clear();
		unset($thumbnail);
		unset($html);
		unset($body);
	  return (string) $content;
	}	
}

function parseParentPageMainContent($data){
 if($data){
	$html = str_get_html($data);
	$html->find("p",2)->outertext = '';
	$content=(string) $html;
	$html->clear();
	unset($html);
	return $content;
 }	
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


function parseAndRemoveMetadataFromMainContent($data){
 if($data){
	 $html = str_get_html($data);
	 $ret = $html->find('div[id=printdiv]'); 
	 $html->find('div[id=printdiv]',0)->outertext = '';
	 $content=(string) $html;
	 $html->clear();
	 unset($html);
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
	 $content=(string)$html;
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
    //[Type of Measure] => 0
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



function processNode($node, $data, $translations=null) {
  global $countriesToIsoCodes;
  global $months;
  global $action;
  global $metadataToVocabulary;
  global $caseStudiesTypesAndObservatoryFromPath;
  if (shouldImportValue($data->page_content_title)) {
	$node->title = truncate_utf8(trim($data->page_content_title),255,true);
	//$node->title_field['en'][0]['value'] = truncate_utf8(trim($data->page_content_title),255);
  }
 
 	$explodedPath=explode("/",$data->path);
	if(strtolower(trim($explodedPath[2]))=='emcc'){
		$observatoryId=getObservatoryId('emcc');
	} else {
		$observatoryId=getObservatoryId('eurwork');
	}
	
	$node->field_ef_observatory[LANGUAGE_NONE][0]=array('tid'=>$observatoryId);
 

     
   	if(!strtotime($data->page_content_date_modified)){
		$node->created=strtotime($data->page_content_date_created);
	} else {
		$node->created=strtotime($data->page_content_date_modified);
	}
	
    $countriesMapping=array("c and e europe"=>"EU Member States","frace"=>"France","romanian"=>"Romania","transnational"=>"EU Member States","czech.republic"=>"Czech Republic","slovak.republic"=>"Slovakia","eu countries"=>"EU Level","eulevel"=>"EU Level","eu level"=>"EU Level","italia"=>"Italy","slovak republic"=>"Slovakia","Former yugoslav republic of macedonia"=>"Macedonia");
	/*$undefinedTermId=getTermIdFromTermName('Undefined','ef_themes');
	$themesIds[]['tid']=$undefinedTermId;
	$node->field_ef_theme[LANGUAGE_NONE]=$themesIds;*/
	
		//$body=getBody($data->page_content_text);
        $node->body[$data->lang][0] = array('value'=>trim($data->page_content_text),'format'=>'filtered_html');
		//$nodeBasePath=str_replace("/EFWEB/", "", $data->path);
		//$nodePageName=str_replace(".htm", "", $data->page_name);
	
		foreach($translations as $trans){
			$trans->lang = substr($trans->page_name, strpos($trans->page_name, ".htm") -2,2);
			echo $trans->lang."<br/>";
			/*$metadata=parseMetadata($trans->page_content_text);
			 foreach($metadata as $key=>$value){
				if($key==1){
				  if (shouldImportValue($value)) {
					$summary=trim($value);
				  }
				}
				if($key==5){
					$content=str_replace(",", "", $value);
					$node->field_ef_publication_date[$trans->lang][0] = array('value'=>timestampToString(strtotime($content)));
				}
		     }*/
			//$body=getBody($trans->page_content_text);
			$node->body[$trans->lang][0] = array('value'=>$trans->page_content_text,'format'=>'filtered_html');
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
_migrate("board_member_page", $action,$from,$to);
/*$exportResutls=db_query("select page_content_title,CONCAT_WS('',SUBSTRING(path,7),page_name) as old,new_url from efpages where type_id='101'");
echo "<br/>";
echo  "Title"."\t"."Old Url"."\t"."New Url"."<br/>";
foreach($exportResutls as $export){
	echo  $export->page_content_title."\t".$export->old."\t".$export->new_url."<br/>";
}*/

$time_end = microtime(true);

//dividing with 60 will give the execution time in minutes other wise seconds
$execution_time = ($time_end - $time_start)/60;

//execution time of the script
echo '<b>Total Execution Time:</b> '.$execution_time.' Mins';
die('<br /><br />');