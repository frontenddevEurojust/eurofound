<?php
/***
* EFDR-837 kp eworx 
* ---------------------------------
* drush -r /var/www/ef scr sites/all/_docs/php-scripts/migration_data_processings/fix_remaining_problematic_image_references.php
*
* the
*/

	function fixEfPagesContent(
		$update = false,
		$regexp = "<img[^<]*WEB_PATH([^<]*).>",
		$doesNotContain = array()
	 
	){

		echo "Parsing ef pages html...\n";

		if(!$update)
			print("preview mode");		

		$result = db_query("select page_id, page_content_text html from efpages where page_content_text  like '%WEB_PATH%' and (type_id < 200 or type_id > 299)");
		echo ".\n";

		$links_counter = 0;
		$valid_links_counter = 0;
		$pages_counter = 0;

		foreach ($result as $tupple) {
			echo "-------------------------\n";
			$page_id = $tupple->page_id;
			$html = $tupple->html;
			echo $page_id . "\n";
		    $pages_counter++;

		    if(preg_match_all("/$regexp/siU", $html, $matches, PREG_SET_ORDER)) {

		    	 foreach($matches as $match) {
 
		    	 	$link = $match[0];
					$links_counter++;

					$validLink = true;
 
					foreach($doesNotContain as $checkString) {
						if(contains($link, $checkString)){
							$validLink = false;
						}
					}

					if($validLink){				
 
						$valid_links_counter++;
						
						$fixedLink = $link;
						$fixedLink = str_replace("WEB_PATH", "/ef/sites/default/files/ef_images", $fixedLink);
						echo "   - " . $link . " = ". $fixedLink ."\n";

						$html = str_replace($link, $fixedLink, $html);
 
					}
		    	 }


//---------------------

				if($update){

				 db_update('efpages')  
				  ->fields(array(
				    'page_content_text' => $html
				  )) ->condition('page_id', $page_id, '=')
					->execute();
					  
					echo("+");
						
			    }

//---------------------					    


			}     

		}

		echo "=====================\n";
		echo "done\n";

		echo "Detected and parsed " . $links_counter .
			 " matches in " . $pages_counter .
			 " pages. Matches not containing X words " .
			 $doesNotContain . " : ".
			 $valid_links_counter . 
			 "   \n";

	}

	 
	 function contains($link, $checkString){
	 	$pos = strpos($link, $checkString);
	 	if ($pos === false) {
	 		return false;
		}
		return true;
	 }

 	fixEfPagesContent(true);