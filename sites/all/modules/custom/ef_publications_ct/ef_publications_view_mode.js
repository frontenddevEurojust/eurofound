(function ($) {
$(document).ready(function(){

	$('.field-contributors a').each(function(index, element){

      	var href = $(element).attr('href');
        href = href.replace('%2C%20', '_');

        $(element).attr('href', href);

    });

  });
})(jQuery);