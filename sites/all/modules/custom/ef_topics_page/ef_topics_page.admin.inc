<?php

/*
*  Form building function
*/
function topics_page($contextual_term = ''){
  
  	// Call defined theme for ef_topics_page
	return theme('ef_topics_page',
  		array(
  			'contextual_term' => $contextual_term,
	  		'main_image' => NULL, 
	  		'summary' => NULL,
	  		'subscription' => NULL,
	    	'description' => NULL,
	    	'topics' => NULL,
	    	'tabs' => NULL,
	    	'featured_block' => NULL, 
	    	'related_links_block' => NULL,
	    	'ef_activities' => NULL,
	    )
  	);
}
