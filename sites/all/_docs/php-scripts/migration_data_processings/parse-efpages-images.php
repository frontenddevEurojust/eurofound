<?php
/* EFDR-596 kp eworx */
//
// drush -r /var/www/ef scr sites/all/_docs/php-scripts/migration_data_processings/parse-efpages-images.php

require_once('parse-efpages-content.php'); 

parseEfPagesContent(
	$insert = true,	
	$regexp = "src[^=]*=\s*[\"\'](.*)[\"\']",		
	$insertTo = "efpages_images",
	$doesNotStartWith = array(),
	$ef_pages_table = "efpages"
);