<?php
/***
* EFDR-799 kp eworx
* ---------------------------------
*
* time drush -r /var/www/ef scr sites/all/_docs/php-scripts/migration_data_processings/fix-eferm-encoding.php
* fixes encoding issues found in factsheets
*/



function fixString($page_content_text){

	$page_content_text = htmlspecialchars($page_content_text);

	
if(false){
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

		//----
  		
  		$problematicCharacter = "\xB2";
  		$replaceWith = "&sup2;";

  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		

		//------------------------


  		$problematicCharacter = "\xAF";
  		$replaceWith = "&macr;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x9B";
  		$replaceWith = "&#155; &#x009b;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x8A";
  		$replaceWith = "&#138; &#x008a;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x91";
  		$replaceWith = "&#145; &#x0091;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xE0";
  		$replaceWith = "&agrave;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x9E";
  		$replaceWith = "&#158; &#x009e;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x8E";
  		$replaceWith = "&#142; &#x008e;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x90";
  		$replaceWith = "&#144; &#x0090;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x8F";
  		$replaceWith = "";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x0D";
  		$replaceWith = "";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x0A";
  		$replaceWith = "";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xBF";
  		$replaceWith = "&iquest;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xE1";
  		$replaceWith = "&aacute;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xDF";
  		$replaceWith = "&szlig;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xD6";
  		$replaceWith = "&Ouml;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xEB";
  		$replaceWith = "&euml;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xF0";
  		$replaceWith = "&eth;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x8B";
  		$replaceWith = "&#139; &#x008b;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xE3";
  		$replaceWith = "&atilde;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xC8";
  		$replaceWith = "&Egrave;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\x95";
  		$replaceWith = "&#149; &#x0095;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xC9";
  		$replaceWith = "&Eacute;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xEE";
  		$replaceWith = "&icirc;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


//-------------


  		$problematicCharacter = "\xFD";
  		$replaceWith = "&yacute;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		

  		$problematicCharacter = "\xCB";
  		$replaceWith = "&Euml;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		

  		$problematicCharacter = "\xF9";
  		$replaceWith = "&ugrave;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		

  		$problematicCharacter = "\xCA";
  		$replaceWith = "&Ecirc;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		

  		$problematicCharacter = "\xDC";
  		$replaceWith = "&Uuml;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		
//-------
 


  		$problematicCharacter = "\xEC";
  		$replaceWith = "&igrave;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "\xED";
  		$replaceWith = "&iacute;";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}		


  		$problematicCharacter = "  ";
  		$replaceWith = " ";
  		
  		$message = substr($problematicCharacter, 1) . " replaced with " . $replaceWith;
		$pos = strrpos($page_content_text, $problematicCharacter );
		if (!($pos === false)) {		
			$page_content_text = str_replace($problematicCharacter , $replaceWith, $page_content_text);
			echo $message ."\n";
		}
	}

		return $page_content_text;

}



// CONECTION A 

$link = mysql_connect('localhost', 'root', 'dvspassword');
if (!$link) {die('Could not connect: ' . mysql_error());}
$charset = mysql_client_encoding($link); echo "The character set for the first connection is : $charset\n";
mysql_select_db("ef-drupal", $link) or die("Could not connect to the db using the first connection. Exiting");

$result = mysql_query(
	"
		select 
		    FactSheetID,
		    PersonalComment,
		    SourceLinks,
		    OnlineSources,
		    CompanyGroup,

			Company,
			CompanyCase,
			AdditionalInformation,
			Country,
			Region,
			Province,
			RestructuringName,
			Sector_basic,
			sector_title,
			AffectedUnits,
			Sources,
			DescriptionText,
			nace_code_rev2_title,
			factsheet_source,
			nace_sub_sector_title,
			RegionCode,
			user_name

		from
		    eferm where encoding is null 
  
	"
	);

	$count = 0;
	$didntFix = 0;

	//fetch tha data from the database
	$FactSheetID = -1;
	while ($row = mysql_fetch_array($result)) {

			try {

			$FactSheetID = $row['FactSheetID'];
			$PersonalComment = fixString($row['PersonalComment']);
			$SourceLinks = fixString($row['SourceLinks']);
			$OnlineSources = fixString($row['OnlineSources']);
			$CompanyGroup = fixString($row['CompanyGroup']);

			$Company = fixString($row['Company']);
			$CompanyCase = fixString($row['CompanyCase']);
			$AdditionalInformation = fixString($row['AdditionalInformation']);
			$Country = fixString($row['Country']);
			$Region = fixString($row['Region']);
			$Province = fixString($row['Province']);
			$RestructuringName = fixString($row['RestructuringName']);
			$Sector_basic = fixString($row['Sector_basic']);
			$sector_title = fixString($row['sector_title']);
			$AffectedUnits = fixString($row['AffectedUnits']);
			$Sources = fixString($row['Sources']);
			$DescriptionText = fixString($row['DescriptionText']);
			$nace_code_rev2_title = fixString($row['nace_code_rev2_title']);
			$factsheet_source = fixString($row['factsheet_source']);
			$nace_sub_sector_title = fixString($row['nace_sub_sector_title']);
			$RegionCode = fixString($row['RegionCode']);
			$user_name = fixString($row['user_name']);


			echo "$FactSheetID "; 

			//echo $page_id;
			//echo $page_content_title;
			//echo $page_content_text;
			//echo $page_content_right_column;		
			
			$num_updated = db_update('eferm') -> fields(array(


				'PersonalComment' => $PersonalComment,
				'SourceLinks' => $SourceLinks,
				'OnlineSources' => $OnlineSources,
				'CompanyGroup' => $CompanyGroup,

				'Company' => $Company,
				'CompanyCase' => $CompanyCase,
				'AdditionalInformation' => $AdditionalInformation,
				'Country' => $Country,
				'Region' => $Region,
				'Province' => $Province,
				'RestructuringName' => $RestructuringName,
				'Sector_basic' => $Sector_basic,
				'sector_title' => $sector_title,
				'AffectedUnits' => $AffectedUnits,
				'Sources' => $Sources,
				'DescriptionText' => $DescriptionText,
				'nace_code_rev2_title' => $nace_code_rev2_title,
				'factsheet_source' => $factsheet_source,
				'nace_sub_sector_title' => $nace_sub_sector_title,
				'RegionCode' => $RegionCode,
				'user_name' => $user_name,


				'encoding' => "encoded"

			))->condition('FactSheetID', $FactSheetID, '=') ->execute();
				$count++;

		} catch (Exception $e) {
		    $error = $e->getMessage();
		    echo 'Caught exception: ', $error, "\n";


			file_put_contents(
		    	"/web-pub/ef/sites/all/_docs/php-scripts/migration_data_processings/characters.log",
		     	$error,
		     	FILE_APPEND | LOCK_EX
		    );

		    $didntFix++;

		    file_put_contents(
		    	"/web-pub/ef/sites/all/_docs/php-scripts/migration_data_processings/efermIDproblem.log",
		     	", $FactSheetID".($didntFix%10==1?"\n":""),
		     	FILE_APPEND | LOCK_EX
		    );
		} 
		echo ": $num_updated\n";

	}
	echo "--------------\n";
	echo "$count number of pages where fixed and $didntFix didnt"; 