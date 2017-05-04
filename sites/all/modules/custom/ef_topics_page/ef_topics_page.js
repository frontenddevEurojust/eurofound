(function($) {
    Drupal.behaviors.ef_topics_page = {
        'attach': function(context) {

        	if (typeof Drupal.settings.ef_topics_page !== 'undefined') 
        	{
		    	tid = Drupal.settings.ef_topics_page.tid;
		    } 
        }
    }
})(jQuery);

function get_next_page(element){

	var page_number = element.innerHTML - 1;
	var tab = jQuery('section.active').attr('id');
	var url = "/get_topic/ajax/" + tid + "/" + tab + "/page=" + page_number;
	
	jQuery.get(url, function(response){

		if(response.status == 200)
		{
			$html = build_HTML_output(response);
			jQuery('section.active .content').replaceWith($html);

			
		}

	});
	
}

function build_HTML_output(response){

	var arrayLength = response.data.length;
	var output = '<div class="content" data-section-content>';
	output += '<ul class="latest-news-list">';
	
	for (var i = 0; i < arrayLength; i++) 
	{

	    output += '<li class=""><a href="/node/' + response.data[i].node_id + '">' + response.data[i].title + '</a>';
	    output += '<ul class="metadata-items">';
	    output += '<li>' + response.data[i].ct_name + '</li>';

	    if(response.data[i].ct_name == 'EF publications')
	    {
	    	
	    	output += '<li>' + response.data[i].publication_date + '</li>';
	    
	    }
	    else if(response.data[i].ct_name == 'EF events')
	    {

	    	output += '<li>' + response.data[i].event_start_date + '</li>';

	    }
	    else
	    {
	    	output += '<li>' + response.data[i].published_at + '</li>';
	    }
	    output += '</ul></li>';
	}
	
	output +='</ul></div>';

	//falta el paginador
	return output;
}
/*
 <div class="content" data-section-content>
                        <?php foreach ($tab_data as $node_data): ?>
                            <ul class="latest-news-list">
                                <li class=""><a href="url-title"><?= $node_data->title; ?></a>
                                    <ul class="metadata-items">
                                        <li><?= $node_data->ct_name; ?></li>
                                        <?php if($tab_name == 'Publications'): ?>
                                            <li><?= $node_data->publication_date; ?></li>
                                        <?php elseif($tab_name == 'Events'): ?>
                                            <li><?= $node_data->event_start_date; ?></li>
                                        <?php else: ?>
                                            <li><?= $node_data->published_at; ?></li>
                                        <?php endif; ?>
                                    </ul>
                                </li>
                            </ul>
                             <div class="pagination-centered">
                            <div class="item-list">
                                <ul class="pagination pager">
                                    <li class="current first"><a href="">1</a></li>
                                    <li><a title="Go to page 2" href="get">2</a></li>
                                    <li><a title="Go to page 3" href="/get_topic/ajax/<?= $term->tid; ?>/<?= $tab_name; ?>/page=2">3</a></li>
                                    <li><a title="Go to page 4" href="/get_topic/ajax/<?= $term->tid; ?>/<?= $tab_name; ?>/page=3">4</a></li>
                                    <li class="arrow"><a title="Go to next page" href="javascript:" onclick="get_next_page()">next ›</a></li>
                                    <li class="arrow last"><a title="Go to last page" href="/ef-my-todo-list?page=3">last »</a></li>
                                </ul>
                            </div>
                        </div>
                        </div> 
                            */