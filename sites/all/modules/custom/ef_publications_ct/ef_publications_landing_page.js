/** PUBLICATIONS LIST  **/
(function ($) {
$(document).ready(function(){
      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[form_pages.length-1];
      if(pathname_form =='publications'){
        $('#views-exposed-form-ef-publications-view-page .form-item-checkbox-forthcoming-filtering').appendTo($('.views-exposed-form > .views-exposed-widgets'));
        $('#views-exposed-form-ef-publications-view-page .views-submit-button').appendTo($('.views-exposed-form > .views-exposed-widgets'));
        $('#views-exposed-form-ef-publications-view-page .views-reset-button').appendTo($('.views-exposed-form > .views-exposed-widgets'));

        /** IF THE ITEMS LIST HAVE NOT IMAGE THEIR WIDTH IS 100% **/
        $( "ul.view-list-pdfpreview li" ).each(function( index ) {
	        if( $(this).find("img").length == 0){
	        	$('.item-content',this).addClass('without-image');
	        }else{
	        	$('.item-content',this).removeClass('without-image');
	        }
				});
      };
  });
})(jQuery);

/** END PUBLICATIONS LIST **/