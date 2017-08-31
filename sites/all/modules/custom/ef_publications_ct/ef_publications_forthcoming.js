
(function($) {
    $(document).ready(function(){
		
		var title = $('.breadcrumbs .current').text().replace('Forthcoming','');

		$('.breadcrumbs .current a').text(title);
		
	});
})(jQuery)