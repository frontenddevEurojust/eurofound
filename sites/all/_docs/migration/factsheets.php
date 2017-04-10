<?php 
include '_migration.inc';
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
		
		$disctinctResults = db_query("select distinct(factsheetKey) from eferm order by factsheetKey asc limit $from,$to")->fetchAll();
		foreach ($disctinctResults as $factsheetKey) {
		    $results = db_query("select * from eferm where factsheetKey='$factsheetKey->factsheetKey' order by ModificationDate asc limit 1");	
			foreach ($results as $data) {
			  $row++;
			  //echo "processing row: $row";
			  $node = _createDrupalNode($nodeType, $data);
					$node = processNode($node, $data, $translations);
					
			  $revisions = db_query("select * from eferm where factsheetKey='$data->factsheetKey' and FactSheetID!='$data->FactSheetID' order by ModificationDate asc");	
			  $node = _saveAndReturnNode($node, $action, $revisions);
			  $query = db_update('eferm')->condition('factsheetKey', $data->factsheetKey)->fields(array('new_url' => "/ef/".drupal_get_path_alias('node/'. $node->nid)))->execute();
			  $query = db_update('eferm')->condition('factsheetKey', $data->factsheetKey)->fields(array('migrated' =>1,'node_id'=> $node->nid))->execute();
			  
			  $savedNodesCount = $savedNodesCount + 1;
					$result = $result . getSavedNodeInformation($savedNodesCount, $node);
			  //echo '<br/>';
			  //cache_clear_all();
			}
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


function _saveAndReturnNode($node, $action, $revisions=null) {
  $created = $node->created;
  //$changed = $node->created;
  $node->date = $created;
  $collections=$node->collections;
  $workflowsStatuses=array("Approved"=>"published","Draft"=>"draft","Submitted"=>"submitted_qr","Refused"=>"rejected");
  //$node->status = NODE_PUBLISHED;
	if($node->workflowStatus=="published"){
		$node->status = NODE_PUBLISHED;
	}
  //$node->revision_operation = 'REVISIONING_NEW_REVISION_NO_MODERATION';
  //$node->revision_moderation = TRUE;
  //$node->workbench_moderation['updating_live_revision'] = 1;
  node_object_prepare($node);
  $node = node_submit($node); // node_submit overrides $node->created, but we need it to set the appropriate $node->uid
  if ($created) {
    $node->created = $created;  // override $node->created again with our custom migration value
	$node->changed = $created;
	$node->revision_timestamp = $created;
  }
  if ($action=='migrate') {
	$workflowStatus=$node->workflowStatus;
	if($workflowStatus=="published"){
		$node->status = NODE_PUBLISHED;
	}
	
    node_save($node);
	//kprint_r($node);
	$query = db_update('node')->condition('nid', $node->nid)->fields(array('changed' => $created))->execute();
	$query = db_update('node_revision')->condition('nid', $node->nid)->fields(array('timestamp' => $created))->execute();
	$node->changed=$node->created;
	$node->revision_timestamp=$node->created;
	//workbench_moderation_moderate($node, $workflowStatus);
	$backupRevision=array();
	
	foreach($revisions as $key=>$revision){	
	  $status=$revision->WorkflowStatus;
	  $date=strtotime($revision->ModificationDate);
	  $backupWorkflowStatus[]=array('date'=>$date,'status'=>$status);
	  $nodeRevision = node_load($node->nid);
	  // Make this change a new revision
	  $nodeRevision = processRevisionNode($nodeRevision, $revision);
	  $revisionCollections=$nodeRevision->collections;
	  $nodeRevision->revision = 1;
	  $revisionStatus=$nodeRevision->workflowStatus;
		if($revisionStatus=="published"){
			$nodeRevision->status = NODE_PUBLISHED;
		}
	  node_save($nodeRevision);   
	}
	$revisionsList=node_revision_list($node);
	$reversed = array_reverse($revisionsList);
    //$firstVersion=entity_load('node', array(), array('vid' => $reversed[0]->vid));// deprecated
	$firstVersion=node_load($node->nid,$reversed[0]->vid);
	workbench_moderation_moderate($firstVersion, $workflowStatus);
	$query = db_update('node_revision')->condition('vid', $firstVersion->vid)->fields(array('timestamp' => $node->created))->execute();
	$query = db_update('workbench_moderation_node_history')->condition('vid', $firstVersion->vid)->fields(array('stamp' => $node->created))->execute();
	foreach($backupWorkflowStatus as $key=>$workflow){	
		$revisionModeration=node_load($node->nid,$reversed[$key+1]->vid);
		workbench_moderation_moderate($revisionModeration,$workflowsStatuses[$workflow['status']]);
		$query = db_update('node_revision')->condition('vid', $reversed[$key+1]->vid)->fields(array('timestamp' => $workflow['date']))->execute();
		$query = db_update('workbench_moderation_node_history')->condition('vid',$reversed[$key+1]->vid)->fields(array('stamp' => $workflow['date']))->execute();
	}
	
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


function getTermId($term_name,$vocabulary) {
  $tid=null;
  $arr_terms = taxonomy_get_term_by_name($term_name, $vocabulary);
  if (!empty($arr_terms)) {
    $arr_terms = array_values($arr_terms);
    $tid = $arr_terms[0]->tid;
  }
  return $tid;
}




function processNode($node, $data, $translations=null) {
  global $countriesToIsoCodes;
  global $action;
  global $metadataToVocabulary;
  global $caseStudiesTypesAndObservatoryFromPath;
  $workflowsStatuses=array("Approved"=>"published","Draft"=>"draft","Submitted"=>"submitted_qr","Refused"=>"rejected");

  if (shouldImportValue($data->Company)) {
	$node->title = truncate_utf8(trim($data->Company),255,true);
	//$node->title_field['en'][0]['value'] = truncate_utf8(trim($data->page_content_title),255);
  }
  
  if (shouldImportValue($data->AdditionalInformation)) {
	$node->field_ef_additional_information[LANGUAGE_NONE][0] = array('value'=>$data->AdditionalInformation,'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data->CompanyGroup)) {
	$node->field_ef_group[LANGUAGE_NONE][0] = array('value'=>$data->CompanyGroup);
  }
  
  if (shouldImportValue($data->CompanyCase)) {
	$node->field_ef_case_name[LANGUAGE_NONE][0] = array('value'=>$data->CompanyCase);
  }
  
  
 /*if (shouldImportValue($data->AnnouncementDate)) {
	$node->field_ef_announcement_date[LANGUAGE_NONE][0] = array('value'=>$data->AnnouncementDate);
  }*/
  
  
  if(shouldImportValue($data->AnnouncementDate) && (strtotime($data->AnnouncementDate)!==FALSE)){
		$node->field_ef_announcement_date[LANGUAGE_NONE][0] = array('value'=>$data->AnnouncementDate);
  }
 
  //if(!strtotime($data->ModificationDate)){
		$node->created=strtotime($data->ModificationDate);
  //} else {
		//$node->created=strtotime($data->CreationDate);
  //}
   
  
  if (shouldImportValue($data->PersonalComment)) {
	$node->field_ef_comment[LANGUAGE_NONE][0] = array('value'=>$data->PersonalComment,'format'=>'filtered_html');
  }
  
  
   if (shouldImportValue($data->OnlineSources) || shouldImportValue($data->Sources)) {
	$node->field_ef_full_text_source[LANGUAGE_NONE][0] = array('value'=>$data->Sources."<br/>".$data->OnlineSources,'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data->SourceLinks)) {
	$node->field_ef_sources_links[LANGUAGE_NONE][0] = array('value'=>$data->SourceLinks,'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data->RestructuringName)) {
	$restructuringId=getTermIdFromTermName($data->RestructuringName,'ef_restructuring_types');
	$node->field_ef_type_of_restructuring[LANGUAGE_NONE][0]['tid']=$restructuringId;
  }
  
  if (shouldImportValue($data->NewLocation)) {
	$newLocationId=getTermIdFromTermName($data->NewLocation,'ef_factsheet_new_location');
	$node->field_ef_new_location[LANGUAGE_NONE][0]['tid']=$newLocationId;
  }
  
  if (shouldImportValue($data->DirectDismissals)  && !empty($data->DirectDismissals) ) {
	$node->field_ef_direct_dismissals[LANGUAGE_NONE][0] = array('value'=>$data->DirectDismissals);
  }
  
  if (shouldImportValue($data->NbrEmployed) && !empty($data->NbrEmployed)) {
	$node->field_ef_number_employed[LANGUAGE_NONE][0] = array('value'=>$data->NbrEmployed);
  }
  
  if (shouldImportValue($data->AffectedUnits)) {
	$node->field_ef_affected_units[LANGUAGE_NONE][0] = array('value'=>$data->AffectedUnits);
  }
 
  
  if (shouldImportValue($data->ThreatenedJobsMax) && !empty($data->ThreatenedJobsMax) ) {
	$node->field_ef_job_reductions_max[LANGUAGE_NONE][0] = array('value'=>$data->ThreatenedJobsMax);
  }
  
   if (shouldImportValue($data->ThreatenedJobsMin) && !empty($data->ThreatenedJobsMin)) {
	$node->field_ef_job_reductions_min[LANGUAGE_NONE][0] = array('value'=>$data->ThreatenedJobsMin);
  }
  
  
  if (shouldImportValue($data->LayoffStart) && $data->LayoffStart!='0000-00-00 00:00:00') {
	$node->field_ef_employment_effect_start[LANGUAGE_NONE][0] = array('value'=>$data->LayoffStart);
  }
  
  /*if (shouldImportValue($data->LayoffTimeline)) {
	$node->field_ef_foreseen_end_date[LANGUAGE_NONE][0] = array('value'=>$data->LayoffTimeline);
  }*/
  
  
  if(shouldImportValue($data->LayoffTimeline) && $data->LayoffTimeline!='0000-00-00 00:00:00'){
		$node->field_ef_foreseen_end_date[LANGUAGE_NONE][0] = array('value'=>$data->LayoffTimeline);
  }
    
  if (shouldImportValue($data->nace_code_rev2_title)) {
	$taxonomyId=getTermId($data->nace_code_rev2_code." - ".$data->nace_code_rev2_title,'ef_nace_codes');
	if ($taxonomyId) {
	  $node->field_ef_nace[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} 
  }
    
  if (shouldImportValue($data->VeiledDismissals) && !empty($data->VeiledDismissals)) {
	$node->field_ef_other_job_reduction[LANGUAGE_NONE][0] = array('value'=>$data->VeiledDismissals);
  }
  
  if (shouldImportValue($data->EmploymentEffects) && !empty($data->EmploymentEffects)) {
	$node->field_ef_planned_job_creation[LANGUAGE_NONE][0] = array('value'=>$data->EmploymentEffects);
  }
  
  if(!empty($data->Province)){
	$taxonomyId=getTermId($data->Province,'ef_nuts');
	if ($taxonomyId) {
	  $node->field_ef_nuts[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} 
  } 
  
   if(empty($data->Province) && !empty($data->Region)){
	$taxonomyId=getTermId($data->Region,'ef_nuts');
	if ($taxonomyId) {
	  $node->field_ef_nuts[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} 
  } 
 
  if(empty($data->Province) && empty($data->Region) && !empty($data->Country)){
	$taxonomyId=getTermId($data->Country,'ef_nuts');
	if ($taxonomyId) {
	  $node->field_ef_nuts[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} 
  } 
  $node->workflowStatus=$workflowsStatuses[$data->WorkflowStatus];

  
   
  $node->field_ef_migration_datetime['und'][0]=array('value'=>date('Y-m-d h:i:s'));
  $node->field_ef_migration_old_url['und'][0]=array('title'=>$data->Company,'url'=>"http://eurofound.europa.eu/emcc/erm/factsheets/".$data->factsheetKey);
  $node->field_ef_migration_details['und'][0]=array('value'=>"Factsheet Key Id: ".$data->factsheetKey);
  
  $node->field_ef_migration_old_user['und'][0]=array('value'=>$data->user_name."-".$data->user_mail."-".$data->user_country."-".$data->UsrID);
  $node->field_ef_migration_factsheet_id['und'][0]=array('value'=>$data->FactSheetID);
  $node->field_ef_migration_factsheet_key['und'][0]=array('value'=>$data->factsheetKey);
  $node->field_ef_migration_fact_base_id['und'][0]=array('value'=>$data->FactSheetBaseID);
  
  
  $sourcesData=explode("~", $data->factsheet_source);
  foreach($sourcesData as $source){
	if(!empty($source)){
			$sources=explode("|", $source);
			$mediaTermId=getTermIdFromTermName($sources[0],'ef_factsheet_media_sources');
			/*$field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_ef_factsheet_sources'));
			$field_collection_item->setHostEntity('node', $node);		
			$mediaTermId=getTermIdFromTermName($sources[0],'ef_factsheet_media_sources');
			$field_collection_item->field_ef_factsheet_media[LANGUAGE_NONE][0]['tid']=$mediaTermId;
			$field_collection_item->field_ef_facsheet_media_date[LANGUAGE_NONE][0]['value'] = $sources[1];
			$field_collection_item->save(TRUE);*/
			//$node->field_ef_fact_sources['und'][]=array('');
			$node->collections[]=array('media'=>$mediaTermId,'date'=>$sources[1]);
	}
  }
  
  if(!empty($node->collections)){
	foreach($node->collections as $key=>$collection){
		$node->field_ef_fact_sources['und'][$key]['field_ef_factsheet_media']['und'][0]['tid']=$collection['media'];
		$node->field_ef_fact_sources['und'][$key]['field_ef_facsheet_media_date']['und'][0]['value']=$collection['date'];
	}
  }
 
   
  return $node;
 
}


function processRevisionNode($node, $data, $translations=null) {
  global $countriesToIsoCodes;
  global $action;
  global $metadataToVocabulary;
  global $caseStudiesTypesAndObservatoryFromPath;
  $workflowsStatuses=array("Approved"=>"published","Draft"=>"draft","Submitted"=>"submitted_qr","Refused"=>"rejected");
 
  if (shouldImportValue($data->AdditionalInformation)) {
	$node->field_ef_additional_information[LANGUAGE_NONE][0] = array('value'=>$data->AdditionalInformation,'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data->CompanyGroup)) {
	$node->field_ef_group[LANGUAGE_NONE][0] = array('value'=>$data->CompanyGroup);
  }
  
  if (shouldImportValue($data->CompanyCase)) {
	$node->field_ef_case_name[LANGUAGE_NONE][0] = array('value'=>$data->CompanyCase);
  }
  
  
 /*if (shouldImportValue($data->AnnouncementDate)) {
	$node->field_ef_announcement_date[LANGUAGE_NONE][0] = array('value'=>$data->AnnouncementDate);
  }*/
  
   if(shouldImportValue($data->AnnouncementDate) && (strtotime($data->AnnouncementDate)!==FALSE)){
		$node->field_ef_announcement_date[LANGUAGE_NONE][0] = array('value'=>$data->AnnouncementDate);
  }
 
  //if(!strtotime($data->ModificationDate)){
		$node->created=strtotime($data->ModificationDate);
  //} else {
		//$node->created=strtotime($data->CreationDate);
  //}
   
  
  if (shouldImportValue($data->PersonalComment)) {
	$node->field_ef_comment[LANGUAGE_NONE][0] = array('value'=>$data->PersonalComment,'format'=>'filtered_html');
  }
  
  
   if (shouldImportValue($data->OnlineSources) || shouldImportValue($data->Sources)) {
	$node->field_ef_full_text_source[LANGUAGE_NONE][0] = array('value'=>$data->Sources.$data->OnlineSources,'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data->SourceLinks)) {
	$node->field_ef_sources_links[LANGUAGE_NONE][0] = array('value'=>$data->SourceLinks,'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data->RestructuringName)) {
	$restructuringId=getTermIdFromTermName($data->RestructuringName,'ef_restructuring_types');
	$node->field_ef_type_of_restructuring[LANGUAGE_NONE][0]['tid']=$restructuringId;
  }
  
  if (shouldImportValue($data->NewLocation)) {
	$newLocationId=getTermIdFromTermName($data->NewLocation,'ef_factsheet_new_location');
	$node->field_ef_new_location[LANGUAGE_NONE][0]['tid']=$newLocationId;
  }
  
  if (shouldImportValue($data->DirectDismissals)  && !empty($data->DirectDismissals) ) {
	$node->field_ef_direct_dismissals[LANGUAGE_NONE][0] = array('value'=>$data->DirectDismissals);
  }
  
  if (shouldImportValue($data->NbrEmployed) && !empty($data->NbrEmployed)) {
	$node->field_ef_number_employed[LANGUAGE_NONE][0] = array('value'=>$data->NbrEmployed);
  }
  
  if (shouldImportValue($data->AffectedUnits)) {
	$node->field_ef_affected_units[LANGUAGE_NONE][0] = array('value'=>$data->AffectedUnits);
  }
 
  
  if (shouldImportValue($data->ThreatenedJobsMax) && !empty($data->ThreatenedJobsMax) ) {
	$node->field_ef_job_reductions_max[LANGUAGE_NONE][0] = array('value'=>$data->ThreatenedJobsMax);
  }
  
   if (shouldImportValue($data->ThreatenedJobsMin) && !empty($data->ThreatenedJobsMin)) {
	$node->field_ef_job_reductions_min[LANGUAGE_NONE][0] = array('value'=>$data->ThreatenedJobsMin);
  }
  
  
  if (shouldImportValue($data->LayoffStart) && $data->LayoffStart!='0000-00-00 00:00:00') {
	$node->field_ef_employment_effect_start[LANGUAGE_NONE][0] = array('value'=>$data->LayoffStart);
  }
  
  /*if (shouldImportValue($data->LayoffTimeline)) {
	$node->field_ef_foreseen_end_date[LANGUAGE_NONE][0] = array('value'=>$data->LayoffTimeline);
  }*/
  
  if(shouldImportValue($data->LayoffTimeline) && $data->LayoffTimeline!='0000-00-00 00:00:00'){
		$node->field_ef_foreseen_end_date[LANGUAGE_NONE][0] = array('value'=>$data->LayoffTimeline);
  }
  
  
  
  if (shouldImportValue($data->nace_code_rev2_title)) {
	$taxonomyId=getTermId($data->nace_code_rev2_code." - ".$data->nace_code_rev2_title,'ef_nace_codes');
	if ($taxonomyId) {
	  $node->field_ef_nace[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} 
  }
    
  if (shouldImportValue($data->VeiledDismissals) && !empty($data->VeiledDismissals)) {
	$node->field_ef_other_job_reduction[LANGUAGE_NONE][0] = array('value'=>$data->VeiledDismissals);
  }
  
  if (shouldImportValue($data->EmploymentEffects) && !empty($data->EmploymentEffects)) {
	$node->field_ef_planned_job_creation[LANGUAGE_NONE][0] = array('value'=>$data->EmploymentEffects);
  }
  
  if(!empty($data->Province)){
	$taxonomyId=getTermId($data->Province,'ef_nuts');
	if ($taxonomyId) {
	  $node->field_ef_nuts[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} 
  } 
  
   if(empty($data->Province) && !empty($data->Region)){
	$taxonomyId=getTermId($data->Region,'ef_nuts');
	if ($taxonomyId) {
	  $node->field_ef_nuts[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} 
  } 
 
  if(empty($data->Province) && empty($data->Region) && !empty($data->Country)){
	$taxonomyId=getTermId($data->Country,'ef_nuts');
	if ($taxonomyId) {
	  $node->field_ef_nuts[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} 
  } 
  $node->workflowStatus=$workflowsStatuses[$data->WorkflowStatus];

  
   
  $node->field_ef_migration_datetime['und'][0]=array('value'=>date('Y-m-d h:i:s'));
  $node->field_ef_migration_old_url['und'][0]=array('title'=>$data->Company,'url'=>"http://eurofound.europa.eu/emcc/erm/factsheets/".$data->factsheetKey);
  $node->field_ef_migration_details['und'][0]=array('value'=>"Factsheet Key Id: ".$data->factsheetKey);

  
  $node->field_ef_migration_old_user['und'][0]=array('value'=>$data->user_name."-".$data->user_mail."-".$data->user_country."-".$data->UsrID);
  $node->field_ef_migration_factsheet_id['und'][0]=array('value'=>$data->FactSheetID);
  $node->field_ef_migration_factsheet_key['und'][0]=array('value'=>$data->factsheetKey);
  $node->field_ef_migration_fact_base_id['und'][0]=array('value'=>$data->FactSheetBaseID);
 
  $sourcesDataRevisions=explode("~", $data->factsheet_source);
  foreach($sourcesDataRevisions as $mediaRevisions){
	if(!empty($mediaRevisions)){
			$mediaRevisionSource=explode("|", $mediaRevisions);
			/*$field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_ef_factsheet_sources'));
			$field_collection_item->setHostEntity('node', $node);*/		
			$mediaTermId=getTermIdFromTermName($mediaRevisionSource[0],'ef_factsheet_media_sources');
			/*$field_collection_item->field_ef_factsheet_media[LANGUAGE_NONE][0]['tid']=$mediaTermId;
			$field_collection_item->field_ef_facsheet_media_date[LANGUAGE_NONE][0]['value'] = $mediaRevisionSource[1];
			$field_collection_item->save(TRUE);*/
			$node->collections[]=array('media'=>$mediaTermId,'date'=>$mediaRevisionSource[1]);
	}
  }
  
  if(!empty($node->collections)){
	foreach($node->collections as $key=>$collection){
		$node->field_ef_fact_sources['und'][$key]['field_ef_factsheet_media']['und'][0]['tid']=$collection['media'];
		$node->field_ef_fact_sources['und'][$key]['field_ef_facsheet_media_date']['und'][0]['value']=$collection['date'];
	}
   }
  
  
  return $node;
 
}
cache_clear_all();
_migrate("ef_factsheet", $action,$from,$to);
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