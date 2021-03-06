<?php
/***
* EFDR-648 kp eworx
* ---------------------------------
*
* time drush -r /var/www/ef scr sites/all/_docs/php-scripts/migration_data_processings/fix-efpages-file-links.php
* the script fixes all migrated pages internal file references to the new ones
*/
	
	$result = db_query("select page_id, link, replace_with from efpages_links where category = 'file' group by page_id, link order by page_id");
	$count = 0;

	$page_id =-1;
	$page_content_text = "";

	//fetch tha data from the database
	foreach ($result as $row) {

		$count++;

		if($page_id != $row->page_id){

			if($page_id!=-1){ // previous 
				// update with fixed content - having replaced all images with the correct ones
				if(true){
					$num_updated = db_update('efpages') -> fields(array(		
						'page_content_text' => $page_content_text			
					))->condition('page_id', $page_id, '=') ->execute();
					echo "$page_id: $num_updated \n";
				}
			}

			$page_id = $row->page_id;
			echo "New page : $page_id \n";

			$page_result = db_query("SELECT page_content_text FROM {efpages} where page_id = ". $page_id );
			foreach ($page_result as $tupple) {
				$page_content_text = $tupple->page_content_text;
			}
		}

		$link = $row->link;
		$replace_with = $row->replace_with;
		//echo "    fixing: $replace_with";
		$page_content_text = str_replace($link, $replace_with, $page_content_text);
 
	}

	echo "--------------\n";