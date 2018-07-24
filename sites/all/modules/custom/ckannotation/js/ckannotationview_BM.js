(function ($) {
  Drupal.behaviors.ckannotation = {
    attach: function (context, settings) {
      $('body.logged-in .annotation').qtip({
        // select every annotation when the user is logged in 
	   content: {
                // display the following values (username, date and the value of the annotation) when the mouse goes over the annotation
			title: function() { return('By ' + (this.attr('username')) + ' on ' + (this.attr('created')));},
		    text: function() { return(this.attr('annotation')); }
	   }
      });

      //remove  meaningful attributes from the DOM for non-logged users. Therefore, avoid search engines.
      $('body.not-logged-in .annotation').each(function(index) {
	     $(this).removeAttr("annotation");
	     $(this).removeAttr("created");
	     $(this).removeAttr("username");
      });
    }
  };
})(jQuery);

//For View windows
jQuery(".annotation").hover(function(){
  var idQtip = jQuery(this).attr("aria-describedby");
  jQuery("#" + idQtip).css('position', 'absolute');
});

jQuery(document).mousemove(function(e){
  //Place the qtip where the mouse is
  jQuery('.qtip').css('left', e.pageX);
  jQuery('.qtip').css('top', e.pageY);  
});


//For edition windows
jQuery("iframe").contents().ready(function(){
  setTimeout(function(){
    jQuery("span.annotation", jQuery("iframe").contents()).hover(function(){
        var idQtip = jQuery(this).attr("aria-describedby");
        jQuery("#" + idQtip).css('position', 'absolute');
      });

      jQuery("iframe").contents().mousemove(function(e){
        //Get the mouse position, add the distance from the frame to the left and the position of scroll inside the frame
        var left = e.pageX + jQuery("iframe").offset().left - jQuery(this).scrollLeft();
       //Get the mouse position, add the distance from the frame to the top and the position of scroll inside the frame
        var top = e.pageY + jQuery("iframe").offset().top - jQuery(this).scrollTop() + 12.5;
        jQuery('.qtip').css('left', left);
        jQuery('.qtip').css('top', top);
      });
  }, 3000);
  
});