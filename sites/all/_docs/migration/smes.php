<?php 
include '_migration.inc';

$action=isset($_GET['action'])?$_GET['action']:NULL;
if ($action==NULL) {
	die("</pre>menu:<br/>- <a href=\"?action=del\">del all</a><br/>- <a href=\"?action=test\">test migrate</a><br/>- <a href=\"?action=migrate\">migrate</a>");
}

function processNode($node, $data) {
  global $countriesToIsoCodes;
  global $restructuringKeywordsToDrupalTaxonomyIds;
  global $restructuringTypesToDrupalTaxonomyIds;
  global $companySizesToDrupalTaxonomyIds;
  global $naceCodesToDrupalTaxonomyIds;
  
  global $action;
  
  $naceMappings=array("8 - other mining and quarrying"=>"08 - other mining and quarrying");
  $typesMappings=array("merger / acquisition"=>"merger/acquisition","(avoiding) bankruptcy"=>"bankruptcy", "offshoring / delocalisation"=>"offshoring/delocalisation");
 
 foreach($data as $key=>$value){
	$data[$key]= str_replace(array('\r', '\r\n', '\n'), '', $data[$key]);
 }

  if (shouldImportValue($data[0])) {
	$node->title = truncate_utf8(trim($data[0]),255);
  }
  
  if (shouldImportValue($data[1])) {
	 $node->field_ef_company_name[LANGUAGE_NONE][0] = array('value'=>trim($data[1]),'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data[2]) && shouldImportValue($data[3])) {
	 $node->body[LANGUAGE_NONE][0] = array('value'=>trim($data[3]),'format'=>'filtered_html','summary'=>trim($data[2]));
  }
  
 if (shouldImportValue($data[4])) {
	$country = $countriesToIsoCodes[trim($data[4])];
	if ($country) {
	  $node->field_ef_country[LANGUAGE_NONE][0] = array('iso2'=>$country);
	} else {
	  error("missing iso code for country '$data[4]'\n");
	}
  }
  
 if (shouldImportValue($data[5])) {
	$value=strtolower(trim($data[5]));
	$taxonomyId=$naceCodesToDrupalTaxonomyIds[$value];
	if ($taxonomyId) {
	  $node->field_ef_nace[LANGUAGE_NONE]=getTaxonomyTermParents($taxonomyId);
	} else {
		if(isset($naceMappings[$value])) {
			$node->field_ef_nace[LANGUAGE_NONE]= getTaxonomyTermParents($naceCodesToDrupalTaxonomyIds[$naceMappings[$value]]);
		} else {
			error("missing nace code '$data[5]'\n");
		}
	}
 }
 
 if (shouldImportValue($data[6])) {
	$value=strtolower(trim($data[6]));
	$taxonomyId=$companySizesToDrupalTaxonomyIds[$value];
	if ($taxonomyId) {
	  $node->field_ef_employees_before_restr[LANGUAGE_NONE][0] = array('tid'=>$taxonomyId);
	} else {
		error("missing company sizes '$data[6]'\n");
	}
 }
 
 if (shouldImportValue($data[7])) {
	$value=strtolower(trim($data[7]));
	$taxonomyId=$companySizesToDrupalTaxonomyIds[$value];
	if ($taxonomyId) {
	  $node->field_ef_employees_after_restr[LANGUAGE_NONE][0] = array('tid'=>$taxonomyId);
	} else {
		error("missing company sizes '$data[7]'\n");
	}
 }
 
 if (shouldImportValue($data[8])) {
	$keywords = explode("*", trim($data[8]));
	$keywordsImport=array();
	foreach ($keywords as $keyword) {
		//TODO fix null check globally
		if($keyword=="NULL") {
			continue;
		}
		if(!$restructuringKeywordsToDrupalTaxonomyIds[$keyword]) {
			echo("<b>missing keyword '$keyword'\n</b>");
		} else {
			$keywordsImport[]['tid']=$restructuringKeywordsToDrupalTaxonomyIds[$keyword];
		}
	}
	 $node->field_ef_restructuring_keywords[LANGUAGE_NONE]= $keywordsImport;
 }
 
 
  if (shouldImportValue($data[9])) {
	$types = explode("*", trim($data[9]));
	$typesImport=array();
	foreach ($types as $type) {
		//TODO fix null check globally
		if($type=="NULL") {
			continue;
		}
		if(!$restructuringTypesToDrupalTaxonomyIds[$type]) {
			if(isset($typesMappings[$type])) {
				$typesImport[]['tid']=$restructuringTypesToDrupalTaxonomyIds[$typesMappings[$type]];
			} else {
				error("missing type '$type'\n");
			}
		} else {
			$typesImport[]['tid']=$restructuringTypesToDrupalTaxonomyIds[$type];
		}
	}
	 $node->field_ef_type_of_restructuring[LANGUAGE_NONE]= $typesImport;
 }
 
 
  if (shouldImportValue($data[10])) {
	 $node->field_ef_survey_date[LANGUAGE_NONE][0] = array('value'=>trim($data[10]));
  }
 
	return $node;
}

migrate("ef_restructuring_in_smes", "smes.csv", "~", 11, $action);

echo '<br /><br />';