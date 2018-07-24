<?php 
include '_migration.inc';

$action=isset($_GET['action'])?$_GET['action']:NULL;
if ($action==NULL) {
	die("</pre>menu:<br/>- <a href=\"?action=del\">del all</a><br/>- <a href=\"?action=test\">test migrate</a><br/>- <a href=\"?action=migrate\">migrate</a>");
}

function processNode($node, $data) {
  global $countriesToIsoCodes;
  global $action;
  
  $oldThemesTaxonomy=array(9=>"Youth",6=>"Employment",5=>"Quality of life",2=>"Quality of work",7=>"Older people");
  foreach($data as $key=>$value){
	$data[$key]= str_replace(array('\r', '\r\n', '\n'), '', $data[$key]);
  }

 if (shouldImportValue($data[0])) {
	$node->title = truncate_utf8(trim($data[0]),255);
  }
  
 if (shouldImportValue($data[1])) {
	$node->created = trim($data[1]);
 }

 if (shouldImportValue($data[2])) {
	$node->changed  = trim($data[2]);
 }

 if (shouldImportValue($data[3])) {
	$node->body[LANGUAGE_NONE][0] = array('value'=>trim($data[3]),'format'=>'filtered_html','summary'=>trim($data[4]));
 }

 $filename=trim($data[5]);
  // now deal with the physical file
  $uri = 'public://blog-resources/images/'. $filename;
    
  // check if file exists
  $fid = getFileIdByName($filename);
  if ($fid==0) {
    $drupalFile = createDrupalFile($filename, $uri);
    if ($action=='migrate') {
      $drupalFile = file_save($drupalFile);
      $files_count = $files_count + 1;
    }
  } else {
    warning("File with name '$filename' exists with fid $fid . Will load and use existing file.");
    $drupalFile = file_load($fid);
  }
  $fileArray = array (
    'fid' => $drupalFile->fid,
      'display' => 1,
      'description' => $title,
      'uid' => 1
  );

 if (shouldImportValue($data[5])) {
   $node->field_ef_main_image[LANGUAGE_NONE][0]=$fileArray;
 }
  
 if (shouldImportValue($data[6])) {
	$termOldName=$oldThemesTaxonomy[$data[6]];
	$taxonomyId=getSpotlightThemeId($termOldName);
	if ($taxonomyId) {
	  $node->field_ef_spotlight_theme[LANGUAGE_NONE][0] = array('tid'=>$taxonomyId);
	} else {
		error("missing spotlight_theme '$data[6]'\n");
	}
 }
 
 if (shouldImportValue($data[7])) {
   $node->field_ef_highlight[LANGUAGE_NONE][0]=trim($data[7]);
 }
 
 return $node;
 
}

migrate("ef_spotlight_entry", "spotlight.csv", "~", 8, $action);

echo '<br /><br />';