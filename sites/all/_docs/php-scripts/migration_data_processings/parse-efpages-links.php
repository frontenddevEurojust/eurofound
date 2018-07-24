<?php
/***
* EFDR-596 kp eworx 
* ---------------------------------
* drush -r /var/www/ef scr sites/all/_docs/php-scripts/migration_data_processings/parse-efpages-links.php
*
*/

require_once('parse-efpages-content.php'); 

parseEfPagesContent(
	$insert = true,
	$regexp = "href[^=]*=\s*[\"\'](.*)[\"\']",		
	$insertTo = "efpages_links", // table where the links will be stored
	$doesNotStartWith = array(
		"mailto", 
		"#",
		"http://www.genderequality.com.cy/"
	),
	$ef_pages_table = "efpages"
);