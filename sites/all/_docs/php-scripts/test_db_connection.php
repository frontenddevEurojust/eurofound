<?php
/***
* EFDR-853 kp eworx
* ---------------------------------
* time drush -r /var/www/ef scr sites/all/_docs/php-scripts/test_db_connection.php
* tests db connection time
*/
	function time_elapsed(){
		
		echo '<!-- \n index placed \n-->';
	    static $last = null;
	    $now = microtime(true);
	    if ($last != null) {
	        echo '<!-- \n' . ($now - $last) . ' \n-->';
	    }
	    $last = $now;
	}
time_elapsed();

sleep(2);
time_elapsed();
echo " should be 2 seconds";
time_elapsed();
	$result = db_query("select now() the_time_is");
time_elapsed();	

	//fetch tha data from the database
	foreach ($result as $row) {
		$count++; 
	 }

	 echo $count;
		 
 time_elapsed();

	echo "--------------\n";