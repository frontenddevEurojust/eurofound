<?php
/***
* EFDR-627 kp eworx
* ---------------------------------
*
* time drush -r /var/www/ef scr sites/all/_docs/php-scripts/fix-efpages-encoding.php
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

			FROM efpages 
				where 				
				new_url is null and /*already processed */
				page_id not in (
					755, 789, 790, 937, 2636, 4849, 6140, 6849, 6871, 6891, 7016,
					7483, 7789, 7802, 8556, 8586, 8589, 8598, 8875, 8943, 9068, 9658,
					9664, 9768, 10010, 10026, 10388, 10469, 10779, 11223, 11628,
					11675, 11731, 12074, 13337, 15516, 17048, 20033, 20278, 23944,
					35049, 35070, 35833, 36052, 36117, 37207, 37918, 38033, 38116,
					40661, 40724, 40908, 41243, 41685, 42087, 42107, 42865, 47172,
					47212, 48543, 48557, 48661, 50847, 55129, 55227, 55315, 55393,
					55395, 55459, 55509, 55565, 60488



				) /* error thrown on these pages*/
				/* page_id='2063' limit 1 */
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
		
		$num_updated = db_update('efpages') -> fields(array(


			'page_content_title' => $page_content_title,
			'page_content_text' => $page_content_text,
			'page_content_right_column' => $page_content_right_column,
			'new_url' => "encoding fixed",

		))->condition('page_id', $page_id, '=') ->execute();

		echo ": $num_updated\n";

	}
	echo "--------------\n";
	echo "$count number of pages where fixed"; 