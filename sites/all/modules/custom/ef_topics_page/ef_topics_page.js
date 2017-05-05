(function($) {
    Drupal.behaviors.ef_topics_page = {
        'attach': function(context) {

        	if (typeof Drupal.settings.ef_topics_page !== 'undefined') 
        	{
		    	tid = Drupal.settings.ef_topics_page.tid;
		    	pages = Drupal.settings.ef_topics_page.pages;
		    	tab = jQuery('section.active').attr('id');
		    } 
        }
    }
})(jQuery);

function get_next_page(element){

	var page_number = element.innerHTML - 1;
	
	var url = "/get_topic/ajax/" + tid + "/" + tab + "/page=" + page_number;
	
	jQuery.get(url, function(response){

		if(response.status == 200)
		{
			$html = build_HTML_output(response);
			jQuery('section.active .latest-news-list').replaceWith($html);
			update_pager(element);
			
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

	    if(response.data[i].ct_name == 'EF publications')
	    {
	    	
	    	tabs += '<li>' + response.data[i].publication_date + '</li>';
	    
	    }
	    else if(response.data[i].ct_name == 'EF events')
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

	//falta el paginador
	return tabs;
}

function update_pager(element){
	//$().prepend();
	console.log(element);
	console.log(tid);
	console.log(pages);
	//jQuery('section.active pagination pager').replaceWith($html);
	console.log(tab);
	//$i = element.innerHTML;
	var links = pages[tab] / 8;
	console.log(links);
	var difference = links - element.innerHTML;
	if(difference > 0)
	{
		var  html = '<ul class="pagination pager">';
		for(var i = 0; i < difference; i++)
		{
			if( i <= 4)
			{
				if( i == 0)
				{
					html += '<li class="current first"><a href="">' + element.innerHTML + '</a></li>';
				}
				else
				{
					html += '<li><a class="" href="javascript:" onclick="get_next_page()">' + (parseInt(element.innerHTML) + i) + '</a></li>';
				}
			
			}
			
		}
	}
	console.log(html);
	jQuery('section.active .pagination.pager').replaceWith(html);
	//replaceWith(html);
}

/*

                             <div class="pagination-centered">
                            <div class="item-list">
                                <ul class="pagination pager">
                                    <li class="current first"><a href="">1</a></li>
                                    <li><a href="get">2</a></li>
                                    <li><a href="/get_topic/ajax/<?= $term->tid; ?>/<?= $tab_name; ?>/page=2">3</a></li>
                                    <li><a href="/get_topic/ajax/<?= $term->tid; ?>/<?= $tab_name; ?>/page=3">4</a></li>
                                    <li class="arrow"><a title="Go to next page" href="javascript:" onclick="get_next_page()">next ›</a></li>
                                    <li class="arrow last"><a title="Go to last page" href="/ef-my-todo-list?page=3">last »</a></li>
                                </ul>
                            </div>
                        </div>
                        </div>


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

			$html .= '</ul></div></div>';
			$variables['pager'][$type] = $html;

		} 
                            */