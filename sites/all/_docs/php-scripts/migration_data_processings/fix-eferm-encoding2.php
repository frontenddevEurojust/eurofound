<?php
/***
* EFDR-799 kp eworx
* EFDR-915
* ---------------------------------
*
* time drush -r /var/www/ef scr sites/all/_docs/php-scripts/migration_data_processings/fix-eferm-encoding2.php
* fixes encoding issues found in factsheets
*/



function fixString($page_content_text){

	$page_content_text = htmlspecialchars_decode($page_content_text);
 	return $page_content_text;

}



// CONECTION A 


$link = mysql_connect('localhost', 'root', 'dvspassword');
if (!$link) {die('Could not connect: ' . mysql_error());}

mysql_set_charset('utf8',$link);
$charset = mysql_client_encoding($link); echo "The character set for the first connection is : $charset\n";
mysql_select_db("ef-drupal", $link) or die("Could not connect to the db using the first connection. Exiting");

$result = mysql_query(
	"
		select 
		    FactSheetID,
		    PersonalComment,
		    SourceLinks,
		    OnlineSources,
		    CompanyGroup,

			Company,
			CompanyCase,
			AdditionalInformation,
			Country,
			Region,
			Province,
			RestructuringName,
			Sector_basic,
			sector_title,
			AffectedUnits,
			Sources,
			DescriptionText,
			nace_code_rev2_title,
			factsheet_source,
			nace_sub_sector_title,
			RegionCode,
			user_name

		from
		    eferm where encoding <> 'encoded2' 
  
	"
	);

	$count = 0;
	$didntFix = 0;

	//fetch tha data from the database
	$FactSheetID = -1;
	while ($row = mysql_fetch_array($result)) {

			try {

			$FactSheetID = $row['FactSheetID'];
			$PersonalComment = fixString($row['PersonalComment']);
			$SourceLinks = fixString($row['SourceLinks']);
			$OnlineSources = fixString($row['OnlineSources']);
			$CompanyGroup = fixString($row['CompanyGroup']);

			$Company = fixString($row['Company']);
			$CompanyCase = fixString($row['CompanyCase']);
			$AdditionalInformation = fixString($row['AdditionalInformation']);
			$Country = fixString($row['Country']);
			$Region = fixString($row['Region']);
			$Province = fixString($row['Province']);
			$RestructuringName = fixString($row['RestructuringName']);
			$Sector_basic = fixString($row['Sector_basic']);
			$sector_title = fixString($row['sector_title']);
			$AffectedUnits = fixString($row['AffectedUnits']);
			$Sources = fixString($row['Sources']);
			$DescriptionText = fixString($row['DescriptionText']);
			$nace_code_rev2_title = fixString($row['nace_code_rev2_title']);
			$factsheet_source = fixString($row['factsheet_source']);
			$nace_sub_sector_title = fixString($row['nace_sub_sector_title']);
			$RegionCode = fixString($row['RegionCode']);
			$user_name = fixString($row['user_name']);


			echo "$FactSheetID "; 

			//echo $page_id;
			//echo $page_content_title;
			//echo $page_content_text;
			//echo $page_content_right_column;		
			
			$num_updated = db_update('eferm') -> fields(array(


				'PersonalComment' => $PersonalComment,
				'SourceLinks' => $SourceLinks,
				'OnlineSources' => $OnlineSources,
				'CompanyGroup' => $CompanyGroup,

				'Company' => $Company,
				'CompanyCase' => $CompanyCase,
				'AdditionalInformation' => $AdditionalInformation,
				'Country' => $Country,
				'Region' => $Region,
				'Province' => $Province,
				'RestructuringName' => $RestructuringName,
				'Sector_basic' => $Sector_basic,
				'sector_title' => $sector_title,
				'AffectedUnits' => $AffectedUnits,
				'Sources' => $Sources,
				'DescriptionText' => $DescriptionText,
				'nace_code_rev2_title' => $nace_code_rev2_title,
				'factsheet_source' => $factsheet_source,
				'nace_sub_sector_title' => $nace_sub_sector_title,
				'RegionCode' => $RegionCode,
				'user_name' => $user_name,


				'encoding' => "encoded2"

			))->condition('FactSheetID', $FactSheetID, '=') ->execute();
				$count++;

		} catch (Exception $e) {
		    $error = $e->getMessage();
		    echo 'Caught exception: ', $error, "\n";


			file_put_contents(
		    	"/web-pub/ef/sites/all/_docs/php-scripts/migration_data_processings/characters.log",
		     	$error,
		     	FILE_APPEND | LOCK_EX
		    );

		    $didntFix++;

		    file_put_contents(
		    	"/web-pub/ef/sites/all/_docs/php-scripts/migration_data_processings/efermIDproblem.log",
		     	", $FactSheetID".($didntFix%10==1?"\n":""),
		     	FILE_APPEND | LOCK_EX
		    );
		} 
		echo ": $num_updated\n";

	}
	echo "--------------\n";
	echo "$count number of pages where fixed and $didntFix didnt"; 
