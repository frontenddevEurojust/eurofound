(function ($) {
$(document).ready(function(){
	
	console.log('aaaaaaaa');
	$('.field-contributors a').each(function(index, element){

      	var href = $(element).attr('href');
        href = href.replace('%20', '_');
        href = href.replace('%2C', '[');

        $(element).attr('href', href);
      
    });

  });
})(jQuery);