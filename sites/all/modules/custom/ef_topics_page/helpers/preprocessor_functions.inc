<?php 


function build_content_pagers($variables, $term, $page, $limit = 500000){

	$variables['pager'] = retrieve_total_results_per_tab($term, $limit);	

	$variables = build_pager_html($variables);

	return $variables;
}

function build_content_tabs($variables, $term, $page = ''){
	// Hide higlights tab
	/* Not set -> show both
	*  0 -> hide Highlights
	*  1 -> hide All
	*/
	if(!isset($term->field_ef_term_hide_tabs['und'][0]['value']) && $term->field_ef_term_hide_tabs['und'][0]['value'] !== '1')
	{      
     	$variables['tabs']['Highlights'] = add_highlights_tab($term->tid, $page);
    }
    
    if(!isset($term->field_ef_term_hide_tabs['und'][0]['value']) && $term->field_ef_term_hide_tabs['und'][0]['value'] !== '0')
    {
    	$variables['tabs']['All'] = add_all_tab($term->tid, $page);
    }


	$variables['tabs']['Publications'] = add_publications_tab($term->tid, $page);

	$variables['tabs']['Articles'] = add_articles_tab($term->tid, $page);

	$variables['tabs']['News'] = add_news_tab($term->tid, $page);

	$variables['tabs']['Events'] = add_events_tab($term->tid, $page);


	return $variables;

}

function retrieve_total_results_per_tab($term, $limit){

    $results['Highlights'] = count(add_highlights_tab($term->tid, $page, $limit));

    $results['All'] = count(add_all_tab($term->tid, $page, $limit));

    $results['Publications'] = count(add_publications_tab($term->tid, $page, $limit));

    $results['Articles'] = count(add_articles_tab($term->tid, $page, $limit));

    $results['News'] = count(add_news_tab($term->tid, $page, $limit));

    $results['Events'] = count(add_events_tab($term->tid, $page, $limit));

    return $results;
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

    // Maximum number of related topics is set to 3 in field configuration
 	for ($i = 0; $i < 3; $i++)
 	{
 		if( isset($term->field_ef_related_topics['und'][$i]['target_id']) )
 		{
    	
	    	$topic = taxonomy_term_load($term->field_ef_related_topics['und'][$i]['target_id']);

			if(isset($topic->field_ef_main_image['und'][0]['uri']))
			{
		    
		    	$variables['topics']['topic_' . $i]['related_topic_image'] = theme('image_style', 
		      		array(
						'style_name' => 'topic-page-image',
		        		'path' => $topic->field_ef_main_image['und'][0]['uri'],
		      		)
		    	);

		  	}
		  
			// Need to check what's the alias of the received tid as the URL can be changed with URL_ALIAS and not follow the pattern: topic/name
			$data = return_url_alias_data($topic->tid); 
		  
			// Always follows the rule: 'taxonomy/term/id' 
			$variables['topics']['topic_' . $i]['url'] = $data[0]->alias;
			$variables['topics']['topic_' . $i]['related_topic_name'] = $topic->name;
	 	
	 	}
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

function add_administrator_menu($variables, $term){
	
	$variables['admin_menu']['View'] = '/taxonomy/term/' . $term->tid; 

	$variables['admin_menu']['Edit'] = '/taxonomy/term/' . $term->tid . '/edit';
	
	$variables['admin_menu']['Term_merge'] = '/admin/config/ef-term-merge';

	return $variables;
}

function build_pager_html($variables){

	foreach ($variables['pager'] as $type => $total) 
	{
		$html = '';
		$links = (int)floor($total / 8);

		$html .= '<div class="pagination-centered">';
		$html .= '<div class="item-list">';
		$html .= '<ul class="pagination pager">';
                            
        if($links != 0)
        {

			for ($i = 0; $i <= $links; $i++)
			{
				$number = $i +1;

				// Max number of number links is 5
				if( $i <= 4)
				{
					// Set 'current first' class to the first one
					if( $i == 0)
					{
						$html .= '<li class="current first"><a href="javascript:" >' . $number . '</a></li>';
					}
					else
					{
						$html .= '<li><a href="javascript:" onclick="get_next_page(this);">' . $number . '</a></li>';
					}
					
				}
				else
				{
					break;
				}
				
			}

			$html .= '<li class="arrow"><a href="javascript:" onclick="get_next_page(this);">Next ></a></li>';
			$html .= '</ul></div></div>';
			$variables['pager'][$type] = $html;

		}
		else
		{
			$variables['pager'][$type] = 0;
		}
	}

	return $variables;

}

function check_current_user(){

	global $user;

	if(in_array('administrator', $user->roles) || in_array('Metadata Manager', $user->roles))
	{
		return TRUE;
	}
}