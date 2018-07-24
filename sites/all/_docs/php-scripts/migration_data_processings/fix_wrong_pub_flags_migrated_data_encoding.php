<?php
/***
* EFDR-627 kp eworx
* ---------------------------------
*
* time drush -r /var/www/ef scr sites/all/_docs/php-scripts/fix_wrong_pub_flags_migrated_data_encoding.php
*
* A painfull task to find its solution. This function should run only once, fixing the problematic encoding of the newcms related content 
*/

/*
* to connections are needed one in latin1 to fetch the data and one in utf-8 to insert the data as they were fetched. 
*/

// CONECTION A

$link = mysql_connect('localhost', 'root', 'dvspassword');
if (!$link) {die('Could not connect: ' . mysql_error());}
$charset = mysql_client_encoding($link); echo "The character set for the first connection is : $charset\n";
mysql_select_db("ef-drupal", $link) or die("Could not connect to the db using the first connection. Exiting");

$result = mysql_query(
	"
		SELECT 
			page_id,
			page_content_title,
			page_content_text,
			page_content_right_column

			FROM migrate_wrong_pages 
				where 				
				new_url is null   /*already processed */
				 
	"
	);

	$count = 0;

	//fetch tha data from the database
	while ($row = mysql_fetch_array($result)) {
		$count++;
		$page_id = $row['page_id'];
		$page_content_title = $row['page_content_title'];
		$page_content_text = $row['page_content_text'];
		$page_content_right_column = $row['page_content_right_column'];

		echo "$page_id "; 

		//echo $page_id;
		//echo $page_content_title;
		//echo $page_content_text;
		//echo $page_content_right_column;		
		
		$num_updated = db_update('migrate_wrong_pages') -> fields(array(


			'page_content_title' => $page_content_title,
			'page_content_text' => $page_content_text,
			'page_content_right_column' => $page_content_right_column,
			'new_url' => "encoding fixed",

		))->condition('page_id', $page_id, '=') ->execute();

		echo ": $num_updated\n";

	}
	echo "--------------\n";
	echo "$count number of pages where fixed"; 