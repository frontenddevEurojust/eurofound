<?php
/*  EFDR-915 kp eworx */
//
// drush -r /var/www/ef scr sites/all/_docs/php-scripts/migration_data_processings/parse-efpages2-images.php

require_once('parse-efpages-content.php'); 

parseEfPagesContent(
	$insert = true,	
	$regexp = "src[^=]*=\s*[\"\'](.*)[\"\']",		
	$insertTo = "efpages_images2",
	$doesNotStartWith = array(),
	$ef_pages_table = "efpages2"
);