<?php

require_once 'db_functions.inc';


/*
*  Form building function
*/
function topics_page($contextual_term = ''){
  
  // Call defined theme for ef_topics_page
  return theme('ef_topics_page',array('contextual_term' => $contextual_term,'main_image' => NULL, 'summary' => NULL,'subscription' => NULL,
    'description' => NULL,'related_topic1_image' => NULL, 'related_topic1_name' => NULL,'related_topic2_image' => NULL, 'related_topic2_name' => NULL,
    'related_topic3_image' => NULL, 'related_topic3_name' => NULL,'results_block' => NULL,'featured_block' => NULL, 'related_links_block' => NULL,
    'ef_activities' => NULL,'url_1' => NULL,'url_2' => NULL,'url_3' => NULL, 'subscription_url' => NULL));
}



function add_main_image_to_variables($variables, $term){

	if( isset($term->field_ef_main_image['und'][0]['uri']) ) 
	{ 
      
      $variables['main_image'] = theme('image_style', 
        array(
          'style_name' => 'topic-page-image',
          'path' => $term->field_ef_main_image['und'][0]['uri'],
        )
      );
    
    }

    return $variables;
}

function add_subscription_to_variables($variables, $term){

	if( $term->field_ef_subscription_msg['und'][0]['value'] != 0 )
      $variables['subscription'] = $term->field_ef_subscription_msg['und'][0]['value'];

    if( isset($term->field_term_subscription_url['und'][0]['value']) )
    {
      if( strpos($term->field_term_subscription_url['und'][0]['value'], "http://") === FALSE
        && strpos($term->field_term_subscription_url['und'][0]['value'], "https://") === FALSE ) 
      {

        $variables['subscription_url'] = "https://" . $term->field_term_subscription_url['und'][0]['value'];
      
      }
      else
      {
       
        $variables['subscription_url'] = $term->field_term_subscription_url['und'][0]['value'];
      
      }
    }

    return $variables;
}



function add_topics_to_variables($variables, $term){

    
 	if( isset($term->field_ef_related_topics['und'][0]['target_id']) )
 	{
    	
    	$topic1 = taxonomy_term_load($term->field_ef_related_topics['und'][0]['target_id']);

    	// Topic 1
		if(isset($topic1->field_ef_main_image['und'][0]['uri']))
		{
	    
	    	$variables['related_topic1_image'] = theme('image_style', 
	      		array(
						'style_name' => 'topic-page-image',
	        		'path' => $topic1->field_ef_main_image['und'][0]['uri'],
	      		)
	    	);

	  	}
	  
		// Need to check what's the alias of the received tid as the URL can be changed with URL_ALIAS and not follow the pattern: topic/name
		$data1 = return_url_alias_data($topic1->tid); 
	  
		// Always follows the rule: 'taxonomy/term/id' 
		$variables['url_1'] = $data1[0]->alias;
		$variables['related_topic1_name'] = $topic1->name;
 	
 	}
 	
    
    // Topic 2
    if( isset($term->field_ef_related_topics['und'][1]['target_id']) )
    {

    	$topic2 = taxonomy_term_load($term->field_ef_related_topics['und'][1]['target_id']);

		if( isset($topic2->field_ef_main_image['und'][0]['uri']) ) 
		{    
	    
			$variables['related_topic2_image'] = theme('image_style', 
	      		array(
	        		'style_name' => 'topic-page-image',
	        		'path' => $topic2->field_ef_main_image['und'][0]['uri'],
	      		)
	    	);        
	  
		}
		
		$data2 = return_url_alias_data($topic2->tid);

		// Always follows the rule: 'taxonomy/term/id' 
		$variables['url_2'] = $data2[0]->alias;
		$variables['related_topic2_name'] = $topic2->name;
    
    }
	
    
	if( isset($term->field_ef_related_topics['und'][2]['target_id']) )
	{
    	
    	$topic3 = taxonomy_term_load($term->field_ef_related_topics['und'][2]['target_id']);

    	if( isset($topic3->field_ef_main_image['und'][0]['uri']) ) 
    	{
        
        	$variables['related_topic3_image'] = theme('image_style', 
          		array(
            		'style_name' => 'topic-page-image',
            		'path' => $topic3->field_ef_main_image['und'][0]['uri'],
          		)
        	);
      
      	}
    	
    	$data3 = return_url_alias_data($topic2->tid);
    	
    	// Always follows the rule: 'taxonomy/term/id' 
    	$variables['url_3'] = $result3[0]->alias;
    	$variables['related_topic3_name'] = $topic3->name;
    
    }    
	

    return $variables;

}  

function add_metatag_to_variables($variables, $term, $string_ef_activities){

	if( !empty($string_ef_activities) ){
		
		$metatag = array(
	    	'#type' => 'html_tag',
	    	'#tag' => 'meta', // The #tag is the html tag - 
	    	'#attributes' => 
	    		array( // Set up an array of attributes inside the tag 
	    			'name' => 'ef-activities',
	    			'content' => $string_ef_activities,
	        	),
	      	'#weight' => '-99999',
	    );

    
    	$variables['ef_activities'] = $metatag;
    
    }

    return $variables;
}

function build_activities_string($term){

	$string_ef_activities = ""; 

    if( !empty($term->field_ef_activities['und']) )
    {
		foreach ($term->field_ef_activities['und'] as $key => $value) 
		{

			$ef_activity_term = taxonomy_term_load($value['tid']);
			$string_ef_activities = $string_ef_activities . "," . $ef_activity_term->name; 

		}
    
    $string_ef_activities = substr($string_ef_activities, 1, strlen($string_ef_activities));
    
    }
    

    return $string_ef_activities;
}