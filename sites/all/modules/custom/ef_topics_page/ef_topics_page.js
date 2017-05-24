(function($) {
    Drupal.behaviors.ef_topics_page = {
        'attach': function(context) {

        	if (typeof Drupal.settings.ef_topics_page !== 'undefined') 
        	{
		    	tid = Drupal.settings.ef_topics_page.tid;
		    	pages = Drupal.settings.ef_topics_page.pages;
		    	
		    } 
        }
    }
})(jQuery);

function get_next_page(element){

	var page_number;
	tab = jQuery('section.active').attr('id');


	if(element.innerHTML.indexOf('Next') !== -1)
	{
		
		// We select the first next sibling's <a> of the current <li>
		element = jQuery('section.active li.current').next().children()[0];
		page_number = element.innerHTML - 1;
	
	}
	else
	{

		if(element.innerHTML.indexOf('Previous') !== -1)
		{
		
			// We select the first next sibling's <a> of the current <li>
			element = jQuery('section.active li.current').children()[0]; 
			page_number = element.innerHTML - 2;
		
		}
		else
		{
		
			element = element;
			page_number = element.innerHTML - 1;
		
		}
				
	}
	
	var url = "/get_topic/ajax/" + tid + "/" + tab + "/page=" + page_number;
	
	jQuery.get(url, function(response){

		if(response.status == 200)
		{

			$html = build_HTML_output(response);
			jQuery('section.active .latest-news-list').replaceWith($html);
			update_pager(element, page_number);
			
		}

	});
	
}

function build_HTML_output(response){

	
	var arrayLength = response.data.length;
	var tabs = '<ul class="latest-news-list">';

	for (var i = 0; i < arrayLength; i++) 
	{

	    tabs += '<li class=""><a href="/node/' + response.data[i].node_id + '">' + response.data[i].title + '</a>';
	    tabs += '<ul class="metadata-items">';
	    tabs += '<li>' + response.data[i].ct_name + '</li>';

	    if(response.data[i].ct_name == 'Publication')
	    {
	    	
	    	tabs += '<li>' + response.data[i].publication_date + '</li>';
	    
	    }
	    else if(response.data[i].ct_name == 'Event')
	    {

	    	tabs += '<li>' + response.data[i].event_start_date + '</li>';

	    }
	    else
	    {
	    	tabs += '<li>' + response.data[i].published_at + '</li>';
	    }
	    tabs += '</ul></li>';
	}
	
	tabs +='</ul>';

	return tabs;
}

function update_pager(element, page_number){

	var links =  Math.ceil(pages[tab] / 8);
	
	var difference = links - (page_number + 1);
	
	if(difference >= 0)
	{
		var  html = '<ul class="pagination pager">';
		
		// Insert previous tag if the page selected is not the first		
		if(page_number != 0)
		{
			html += '<li class=""><a href="javascript:" onclick="get_next_page(this)">< Previous</a></li>';
		}
		
		for(var i = 0; i <= difference; i++)
		{
			if( i <= 4)
			{
				// First element will always be active
				if( i == 0)
				{
					html += '<li class="current first"><a href="">' + (parseInt(page_number) + 1) + '</a></li>';
				}
				else
				{
					html += '<li><a class="" href="javascript:" onclick="get_next_page(this)">' + (parseInt(page_number) + i + 1) + '</a></li>';
				}
			
			}
			
		}
		// Add next element if there are more pagers available
		if (difference > 0)
		{
			html += '<li class=""><a href="javascript:" onclick="get_next_page(this)">Next ></a></li>';
		}

		html += '</ul>';
		
	}

	jQuery('section.active .pagination.pager').replaceWith(html);
	
}

(function($) {
	$(document).ready(function() {

		if( /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) 
		{

			var deviceMobile = true;

		}
		else
		{

			var deviceMobile = false;

		}

		if (deviceMobile == true)
		{
		  $('h3.title').on('click', function () {
				$(this).parent().toggleClass( "active2" );		 
		  });
		}

	});
})(jQuery);
