(function ($) {
$(document).ready(function(){
	
	$('.field-contributors a').each(function(index, element){

      	var href = $(element).attr('href');
        href = href.replace('%20', '_');
        href = href.replace('%2C', '[');
        //href = href.replace(',', '[');

        $(element).attr('href', href);
      
    });

  });
})(jQuery);