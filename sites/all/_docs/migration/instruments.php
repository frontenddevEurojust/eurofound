<?php 
include '_migration.inc';

$action=isset($_GET['action'])?$_GET['action']:NULL;
if ($action==NULL) {
	die("</pre>menu:<br/>- <a href=\"?action=del\">del all</a><br/>- <a href=\"?action=test\">test migrate</a><br/>- <a href=\"?action=migrate\">migrate</a>");
}



function _migrate($nodeType, $fileName, $separator, $fields_count, $action) {
  if ($action=='del') {
    delete($nodeType);
    die;
  }
  global $script_dir;
  $savedNodesCount = 0;
  $file = $script_dir . "/files/" . $fileName;
	$result = "<table><tr><th>No.</th><th>Title</th><th>Url</th><th>Old url</th></tr>";
  
  echo $fileName . ' processing<br/>' . '----------<br/>';
  global $errors_count;
	$row = 0;
	if (($handle = fopen($file, "r")) !== FALSE) {
		while (($data = fgetcsv($handle, 100000000, $separator)) !== FALSE) {
			$row++;
			if ($row==1) {
				echo "skipping row $row. header\n";
				continue;
			}
			if (count($data)!=$fields_count) {
				echo "skipping row $row. " . count($data) . " fields found instead of $fields_count\n";
				continue;
			}
      echo "processing row: $row";
      $node = createDrupalNode($nodeType, trim($data[0]));
			$node = processNode($node, $data);
      $node = _saveAndReturnNode($node, $action);
      $savedNodesCount = $savedNodesCount + 1;
			$result = $result . getSavedNodeInformation($savedNodesCount, $node);
      echo '<br/>';
		}
		fclose($handle);
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


function _saveAndReturnNode($node, $action) {
  $created = $node->created;
  $changed = $node->changed;
  $node->date = $created;
  // if revision_operation is set, then processing of the node has set an explicit unpublish operation (related to old db 'online' flag) - if not set, then auto-publish node
  if (!isset($node->revision_operation)) {
    // nodes are published with no moderation enabled
	$node->status = NODE_PUBLISHED;
	$node->revision_operation = 'REVISIONING_NEW_REVISION_NO_MODERATION';
	$node->revision_moderation = TRUE;
	$node->workbench_moderation['updating_live_revision'] = 1;
  }
	node_object_prepare($node);
  $node = node_submit($node); // node_submit overrides $node->created, but we need it to set the appropriate $node->uid
  if ($created) {
    $node->created = $created;  // override $node->created again with our custom migration value
  }

  if ($action=='migrate') {
    node_save($node);
  }
	return $node;
}

function processNode($node, $data) {
  global $countriesToIsoCodes;
  global $instrumentsPhasesToDrupalTaxonomyIds;
  global $instrumentsCategoriesToDrupalTaxonomyIds;
  global $instrumentsFundingsToDrupalTaxonomyIds;
  global $instrumentsInvolvementsToDrupalTaxonomyIds;
  global $action;
  
 foreach($data as $key=>$value){
	$data[$key]= str_replace(array('\r', '\r\n', '\n'), '', $data[$key]);
 }

  if (shouldImportValue($data[0])) {
	$node->title = trim($data[0]);
  }
  
  if (shouldImportValue($data[1])) {
	 $node->field_ef_english_name[LANGUAGE_NONE][0] = array('value'=>trim($data[1]),'format'=>'filtered_html');
  }

 if (shouldImportValue($data[2])) {
	$country = $countriesToIsoCodes[trim($data[2])];
	if ($country) {
	  $node->field_ef_country[LANGUAGE_NONE][0] = array('iso2'=>$country);
	} else {
	  error("missing iso code for country '$data[2]'\n");
	}
  }

  if (shouldImportValue($data[3])) {
	 $node->field_ef_coverage_eligibility[LANGUAGE_NONE][0] = array('value'=>trim($data[3]),'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data[4])) {
	 $node->field_ef_main_characteristics[LANGUAGE_NONE][0] = array('value'=>trim($data[4]),'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data[5])) {
	 $node->field_ef_effectiveness[LANGUAGE_NONE][0] = array('value'=>trim($data[5]),'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data[6])) {
	 $node->field_ef_strengths[LANGUAGE_NONE][0] = array('value'=>trim($data[6]),'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data[7])) {
	 $node->field_ef_weaknesses[LANGUAGE_NONE][0] = array('value'=>trim($data[7]),'format'=>'filtered_html');
  }
  
  if (shouldImportValue($data[8])) {
	 $node->field_ef_instrument_examples[LANGUAGE_NONE][0] = array('value'=>trim($data[8]),'format'=>'filtered_html');
  }
  
if (shouldImportValue($data[9])) {
	$value=strtolower(trim($data[9]));
	$taxonomyId=$instrumentsPhasesToDrupalTaxonomyIds[$value];
	if ($taxonomyId) {
	  $node->field_ef_instrument_cat_phases[LANGUAGE_NONE][0] = array('tid'=>$taxonomyId);
	} else {
	  error("missing iso code for country '$data[9]'\n");
	}
 }
  
  
if (shouldImportValue($data[10])) {
	$categories = explode("*", trim($data[10]));
	$categoriesImport=array();
	foreach ($categories as $category) {
		if(!$instrumentsCategoriesToDrupalTaxonomyIds[$category]) {
			echo("<b>missing category '$category'\n</b>");
		} else {
			$categoriesImport[]['tid']=$instrumentsCategoriesToDrupalTaxonomyIds[$category];
		}
	}
	 $node->field_ef_instrument_categories[LANGUAGE_NONE]= $categoriesImport;
 }
 
 
 if (shouldImportValue($data[11])) {
	$fundings = explode("*", trim($data[11]));
	$fundingsImport=array();
	foreach ($fundings as $funding) {
		if(!$instrumentsFundingsToDrupalTaxonomyIds[$funding]) {
			echo("<b>missing funing '$funding'\n</b>");
		} else {
			$fundingsImport[]['tid']=$instrumentsFundingsToDrupalTaxonomyIds[$funding];
		}
	}
	 $node->field_ef_instrument_fundings[LANGUAGE_NONE]= $fundingsImport;
}
  
if (shouldImportValue($data[12])) {
	$involvements = explode("*", trim($data[12]));
	$involvementsSelectForImport=array();
	$involvementsTextForImport=array();
	foreach ($involvements as $involvement) {
		$explodedInvolvements = explode("#", $involvement);
			$taxonomy=trim($explodedInvolvements[0]);
			$taxonomyText=$explodedInvolvements[1];
			if(empty($taxonomyText)){
				continue;
			}
			if(!$instrumentsInvolvementsToDrupalTaxonomyIds[$taxonomy]) {
				echo("<b>missing involvement '$taxonomy'\n</b>");
			} else {
				$involvementsSelectForImport[]['tid']=$instrumentsInvolvementsToDrupalTaxonomyIds[$taxonomy];
				$involvementsTextForImport[]=array('value'=>trim($taxonomy.": ".$taxonomyText),'format'=>'filtered_html');
			}
   }
	$node->field_ef_involvement_types[LANGUAGE_NONE]= $involvementsSelectForImport;
	$node->field_ef_involvement_texts[LANGUAGE_NONE]= $involvementsTextForImport;
}

 if (shouldImportValue($data[13])) {
	 $node->field_ef_source['en'][0] = array('value'=>trim($data[13]),'format'=>'filtered_html');
 }
 
 
if (shouldImportValue($data[14])) {
	$hrefs=extractHrefs($data[14]);
	if(!empty($hrefs)){
		foreach($hrefs as $href){
			$node->field_ef_source[LANGUAGE_NONE][]=array('title'=>$href['title'],'url'=>$href['link']);
		}
	}
 }
 
	return $node;
}

_migrate("ef_support_instrument", "instruments.csv", "~", 15, $action);

echo '<br /><br />';