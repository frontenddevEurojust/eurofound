//Change h3 to h1
(function ($) {
  //Loading when the comparison load
$(window).on('load', function(){
	$('#overlay-eurofound-print').addClass('hide-overlay');
  setTimeout(function() {
      $('.title-general-comparison').show();
    }, 0);
});
})(jQuery);


