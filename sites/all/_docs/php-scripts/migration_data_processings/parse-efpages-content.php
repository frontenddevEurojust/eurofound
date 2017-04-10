<?php
/***
* EFDR-596 kp eworx 
* ---------------------------------
* drush -r /var/www/ef scr sites/all/_docs/php-scripts/migration_data_processings/parse-efpages-links.php
*
*/

	function parseEfPagesContent(
		$insert = false,	
		$regexp = "href[^=]*=\s*[\"\'](.*)[\"\']",		
		$insertTo = "efpages_links",
		$doesNotStartWith = array("mailto", "#"),
		$ef_pages_table = "efpages"
	){

		echo "Parsing ef pages html...\n";

		if(!$insert)
			print("preview mode");		

		$result = db_query("SELECT page_id, page_content_text html FROM {" . $ef_pages_table . "} /*limit 5*/");
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

		    	 	$link = $match[1];
					$links_counter++;

					$validLink = true;

					foreach($doesNotStartWith as $checkString) {
						if(startsWith($link, $checkString)){
							$validLink = false;
						}
					}

					if($validLink){						
						$valid_links_counter++;
						echo "   - " . $link . "\n";				

						if($insert){

							 
							db_insert($insertTo)->fields(
								array(
									'page_id' => $page_id,
									'link' => $link
								)								 
							) -> execute();

							echo("+");
					    }
					}
		    	 }
			}     

		}

		echo "=====================\n";
		echo "done\n";

		echo "Detected and parsed " . $links_counter .
			 " matches in " . $pages_counter .
			 " pages. Matches not starting with " .
			 $doesNotStartWith . " : ".
			 $valid_links_counter . 
			 "   \n";

	}


	function startsWith($haystack, $needle){return $needle === "" || strpos($haystack, $needle) === 0;}
	function endsWith($haystack, $needle){return $needle === "" || substr($haystack, -strlen($needle)) === $needle;}
 