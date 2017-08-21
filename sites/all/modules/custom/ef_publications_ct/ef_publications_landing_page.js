/** PUBLICATIONS LIST  **/
(function ($) {
$(document).ready(function(){
      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[form_pages.length-1];
      if(pathname_form =='publications'){
        $('#views-exposed-form-ef-publications-view-page .form-item-checkbox-forthcoming-filtering').appendTo($('.views-exposed-form > .views-exposed-widgets'));
        $('#views-exposed-form-ef-publications-view-page .views-submit-button').appendTo($('.views-exposed-form > .views-exposed-widgets'));
        $('#views-exposed-form-ef-publications-view-page .views-reset-button').appendTo($('.views-exposed-form > .views-exposed-widgets'));

      };
      
      $('.field-contributors a').each(function(index, element){

      	var href = $(element).attr('href');
        href = href.replace('%20', '_');
        href = href.replace('%2C', '[');

        $(element).attr('href', href);
      
      });
        
  });
})(jQuery);

/** END PUBLICATIONS LIST **/