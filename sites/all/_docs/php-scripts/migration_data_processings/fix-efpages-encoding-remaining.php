<?php
/***
* EFDR-627 kp eworx
* ---------------------------------
* 
* time drush -r /var/www/ef scr sites/all/_docs/php-scripts/fix-efpages-encoding-remaining.php
*
* A painfull task to find its solution. This function should run only once, fixing the problematic encoding of the newcms related content 
*/

/*
* to connections are needed one in latin1 to fetch the data and one in utf-8 to insert the data as they were fetched. 
*/

// CONECTION A


function fixString($page_content_text){
		$problematicCharacter = "\xF4";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "o", $page_content_text);
			echo "xF4 replaced\n";
		}
		//---------
		//---------
		$problematicCharacter = "\x80";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#128; &#x0080;", $page_content_text);
			echo "x80 replaced\n";
		} 
		//---------
		$problematicCharacter = "\xE2";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "a", $page_content_text);
			echo "xE2 replaced\n";
		} 
		$problematicCharacter = "\xE2";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "a", $page_content_text);
			echo "xE2 replaced\n";
		} 		
		//---------
		$problematicCharacter = "\x99";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "TM", $page_content_text);
			echo "x99 replaced\n";
		} 

		$problematicCharacter = "\x82";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , ",", $page_content_text);
			echo "x82 replaced\n";
		} 

		$problematicCharacter = "\x83";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "f", $page_content_text);
			echo "x83 replaced\n";
		} 
		$problematicCharacter = "\x93";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "\"", $page_content_text);
			echo "x93 replaced\n";
		}


		$problematicCharacter = "\xE7";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&ccedil;", $page_content_text);
			echo "xE7 replaced\n";
		}

		$problematicCharacter = "\xF5";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "O", $page_content_text);
			echo "xF5 replaced\n";
		}
 
 		$problematicCharacter = "\x98";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "~", $page_content_text);
			echo "x98 replaced\n";
		}
 		$problematicCharacter = "\x94";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "\"", $page_content_text);
			echo "x94 replaced\n";
		}

 		$problematicCharacter = "\x9C";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "oe", $page_content_text);
			echo "x9c replaced\n";
		}

 		$problematicCharacter = "\xE5";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "a", $page_content_text);
			echo "xE5 replaced\n";
		}


 		$problematicCharacter = "\x9D";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "", $page_content_text);
			echo "x9D replaced\n";
		}


 		$problematicCharacter = "\xE6";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "ae", $page_content_text);
			echo "xE6 replaced\n";
		}
 		$problematicCharacter = "\xA6";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "|", $page_content_text);
			echo "xA6 replaced\n";
		}		
 		$problematicCharacter = "\xC3";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "A", $page_content_text);
			echo "xC3 replaced\n";
		}

 		$problematicCharacter = "\xB8";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&cedil;", $page_content_text);
			echo "xB8 replaced\n";
		}	

 		$problematicCharacter = "\xAA";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "a", $page_content_text);
			echo "xAA replaced\n";
		}	


 		$problematicCharacter = "\xA8";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&uml;", $page_content_text);
			echo "xA8 replaced\n";
		}	



 		$problematicCharacter = "\xA9";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&copy;", $page_content_text);
			echo "xA9 replaced\n";
		}	



 		$problematicCharacter = "\xA0";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&nbsp;", $page_content_text);
			echo "xA0 replaced\n";
		}	
 		$problematicCharacter = "\xAB";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&laquo;", $page_content_text);
			echo "xAB replaced\n";
		}	
 		$problematicCharacter = "\xE9";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&eacute;", $page_content_text);
			echo "xE9 replaced\n";
		}	
 		$problematicCharacter = "\xA7";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&sect;", $page_content_text);
			echo "xA7 replaced\n";
		}

		$problematicCharacter = "\xB4";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&acute;", $page_content_text);
			echo "xB4 replaced\n";
		}


		$problematicCharacter = "\xAC";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&not;", $page_content_text);
			echo "xAC replaced\n";
		}

		$problematicCharacter = "\xB6";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&para;", $page_content_text);
			echo "xB6 replaced\n";
		}		
		$problematicCharacter = "\xB5";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&micro;", $page_content_text);
			echo "xB5 replaced\n";
		}		


		$problematicCharacter = "\xF6";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&ouml;", $page_content_text);
			echo "xF6 replaced\n";
		}	
 
 		$problematicCharacter = "\xA4";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&curren;", $page_content_text);
			echo "xA4 replaced\n";
		}	


 		$problematicCharacter = "\x84";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#132; &#x0084;", $page_content_text);
			echo "x84 replaced\n";
		}	

 		$problematicCharacter = "\xA1";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&iexcl;", $page_content_text);
			echo "xA1 replaced\n";
		}	

 		$problematicCharacter = "\xBD";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&frac12;", $page_content_text);
			echo "xBD replaced\n";
		}

 		$problematicCharacter = "\xC5";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&Aring;", $page_content_text);
			echo "xC5 replaced\n";
		}

 		$problematicCharacter = "\xBE";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&frac34;", $page_content_text);
			echo "xBE replaced\n";
		}
  		$problematicCharacter = "\xBC";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&frac14;", $page_content_text);
			echo "xBC replaced\n";
		}

  		$problematicCharacter = "\xE4";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&auml;", $page_content_text);
			echo "\xE4 replaced\n";
		}	

		$problematicCharacter = "\xC2";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&Acirc;", $page_content_text);
			echo "\xC2 replaced\n";
		}	
 

		$problematicCharacter = "\xA5";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&yen;", $page_content_text);
			echo "xA5replaced\n";
		}	

		$problematicCharacter = "\xB3";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&sup3;", $page_content_text);
			echo "xB3 replaced\n";
		}

		$problematicCharacter = "\xF3";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&oacute;", $page_content_text);
			echo "xF3 replaced\n";
		}



		$problematicCharacter = "\xB1";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&plusmn;", $page_content_text);
			echo "xB1 replaced\n";
		}

		$problematicCharacter = "\xAD";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&shy;", $page_content_text);
			echo "xAD replaced\n";
		}


		$problematicCharacter = "\x89";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#137; &#x0089;", $page_content_text);
			echo "x89 replaced\n";
		}

		$problematicCharacter = "\xBA";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&ordm;", $page_content_text);
			echo "xBA replaced\n";
		}


		$problematicCharacter = "\xA3";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&pound;", $page_content_text);
			echo "xA3 replaced\n";
		}		
		$problematicCharacter = "\x96";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#150; &#x0096;", $page_content_text);
			echo "x96 replaced\n";
		}	
		$problematicCharacter = "\xC4";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#150; &#x0096;", $page_content_text);
			echo "x96 replaced\n";
		}	
		$problematicCharacter = "\x81";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , " ", $page_content_text);
			echo "x81 replaced\n";
		}	
		$problematicCharacter = "\x86";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#134; &#x0086;", $page_content_text);
			echo "x86 replaced\n";
		}	
		$problematicCharacter = "\x87";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#135; &#x0087;", $page_content_text);
			echo "x87 replaced\n";
		}	


		$problematicCharacter = "\xF8";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&oslash;", $page_content_text);
			echo "xF8 replaced\n";
		}	

		$problematicCharacter = "\xEA";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&ecirc;", $page_content_text);
			echo "xEA replaced\n";
		}
		$problematicCharacter = "\xBB";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&raquo;", $page_content_text);
			echo "xBB replaced\n";
		}
		$problematicCharacter = "\xA2";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&cent;", $page_content_text);
			echo "xA2 replaced\n";
		}


		$problematicCharacter = "\xD8";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&cent;", $page_content_text);
			echo "xA2 replaced\n";
		}		
		$problematicCharacter = "\xFC";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&uuml;", $page_content_text);
			echo "xFC replaced\n";
		}


		$problematicCharacter = "\xCE";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&Icirc;", $page_content_text);
			echo "xCE replaced\n";
		}
		$problematicCharacter = "\xB9";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&sup1;", $page_content_text);
			echo "xB9 replaced\n";
		}		

		$problematicCharacter = "\xCF";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&Iuml;", $page_content_text);
			echo "xCF replaced\n";
		}		


		$problematicCharacter = "\x8C";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#140; &#x008c;", $page_content_text);
			echo "xCF replaced\n";
		}	

		$problematicCharacter = "\xB7";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&iquest;", $page_content_text);
			echo "xBF replaced\n";
		}	

		/////////////////////////////////////
		// 35049 xB7 for some reason this characters is not being displayed
		// and 37918 and see not in  - in sql
		/////////////////////////////////////
		$problematicCharacter = "\x9A";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#154; &#x009a;", $page_content_text);
			echo "x9A replaced\n";
		}	



		$problematicCharacter = "\x8D";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#141; &#x008d;", $page_content_text);
			echo "x8D replaced\n";
		}	
 



		$problematicCharacter = "\xB0";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&deg;", $page_content_text);
			echo "xB0 replaced\n";
		}	

 		$problematicCharacter = "\x9F";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#159; &#x009f;", $page_content_text);
			echo "x9F replaced\n";
		}

 		$problematicCharacter = "\xEF";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&iuml;", $page_content_text);
			echo "xEF replaced\n";
		}
  		$problematicCharacter = "\xE8";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&egrave;", $page_content_text);
			echo "xE8 replaced\n";
		}
  		$problematicCharacter = "\x92";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#146; &#x0092;", $page_content_text);
			echo "x92 replaced\n";
		}
  		$problematicCharacter = "\x85";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#133; &#x0085;", $page_content_text);
			echo "x85 replaced\n";
		}		
  		$problematicCharacter = "\x97";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#151; &#x0097;", $page_content_text);
			echo "x97 replaced\n";
		}
  		$problematicCharacter = "\xD0";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&ETH;", $page_content_text);
			echo "xD0 replaced\n";
		}
  		$problematicCharacter = "\xD1";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&Ntilde;", $page_content_text);
			echo "xD0 replaced\n";
		}		
  		$problematicCharacter = "\x88";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&#136; &#x0088;", $page_content_text);
			echo "x88 replaced\n";
		}	
  		$problematicCharacter = "\xDA";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&Uacute;", $page_content_text);
			echo "xDA replaced\n";
		}
  		$problematicCharacter = "\xAE";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&reg;", $page_content_text);
			echo "xAE replaced\n";
		}
  		$problematicCharacter = "\xB2";
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , "&sup2;", $page_content_text);
			echo "xB2 replaced\n";
		}		


		return $page_content_text;

}



$link = mysql_connect('localhost', 'root', 'dvspassword');
if (!$link) {die('Could not connect: ' . mysql_error());}
//$charset = mysql_client_encoding($link); echo "The character set for the first connection is : $charset\n";
mysql_select_db("ef-drupal", $link) or die("Could not connect to the db using the first connection. Exiting");


echo "PHP default encoding:" .  mb_internal_encoding();


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
				page_id in (

					755, 789, 790, 937, 2636, 4849, 6140, 6849, 6871, 6891, 7016,
					7483, 7789, 7802, 8556, 8586, 8589, 8598, 8875, 8943, 9068, 9658,
					9664, 9768, 10010, 10026, 10388, 10469, 10779, 11223, 11628,
					11675, 11731, 12074, 13337, 15516, 17048, 20033, 20278, 23944,
					35049, 35070, 35833, 36052, 36117, 37207, 37918, 38033, 38116,
					40661, 40724, 40908, 41243, 41685, 42087, 42107, 42865, 47172,
					47212, 48543, 48557, 48661, 50847, 55129, 55227, 55315, 55393,
					55395, 55459, 55509, 55565, 60488

				) and type_id <200 /* error thrown on these pages*/
				and page_id not in (35049, 35070, 37918, 38116, 40908, 41685, 47172, 47212
				42865 /*title truncatd*/
					)
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

		//---------

		$page_content_title =  fixString($page_content_title);
		$page_content_text =  fixString($page_content_text);
		$page_content_right_column =  fixString($page_content_right_column);

		//---------

		try {

			$num_updated = db_update('efpages') -> fields(array(


				'page_content_title' => $page_content_title,
				'page_content_text' => $page_content_text,
				'page_content_right_column' => $page_content_right_column,
				'new_url' => "encoding fixed",

			))->condition('page_id', $page_id, '=') ->execute();

			echo ": $num_updated\n";
       
        } catch (Exception $e) {
            var_dump($e->getMessage());
            die(); 
        }

		

	}
	echo "--------------\n";
	echo "$count number of pages where fixed"; 