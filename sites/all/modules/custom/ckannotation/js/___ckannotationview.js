function scramble(plain) {
   var scrambled = "";

   for ( var i=0; i < plain.length; i++ ) {
      var chr = plain.charCodeAt(i);

      // replace LF with tilde (~) and vv.
      if ( chr==10 ) {
         chr = 126;
      }
      else
      if ( chr== 126 )
         chr = 13;

      scrambled += ( chr >= 61 && chr <= 122 ) ?  // Process only from 'a' to 'z'
          String.fromCharCode(122-chr+61):
          String.fromCharCode(chr);
   }
   return scrambled;
}

(function ($) {
  Drupal.behaviors.ckannotation = {
    attach: function (context, settings) {

      $('body.logged-in .annotation').not('.page-node-edit').qtip({
         content: {
            title: function() { return('By ' + scramble(this.attr('username')) + ' on ' + this.attr('created'));},
            text: function() {
               var str = scramble(this.attr('annotation'));
               return str.replace(/\r/g, '</br>');
            },
         },
         events: {
            render: function(event, api) {
               color = api.target.attr('color');
               api.tooltip.qtip('options', 'style.classes', 'qtip-'+color);

            }
         },
      });

      $('body.not-logged-in .annotation').each(function(index) {
        $(this).removeAttr('annotation');
        $(this).removeAttr('created');
        $(this).removeAttr('username');
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
  jQuery("iframe").each(function(index) {
    jQuery(this).addClass('qiframe'+index);

    jQuery('iframe.qiframe'+index).contents().mousemove(function(e){
    //Get the mouse position, add the distance from the frame to the left and the position of scroll inside the frame
      var left = e.pageX + jQuery('iframe.qiframe'+index).offset().left - jQuery('iframe.qiframe'+index).contents().scrollLeft();
   //Get the mouse position, add the distance from the frame to the top and the position of scroll inside the frame
      var top = e.pageY + jQuery('iframe.qiframe'+index).offset().top - jQuery('iframe.qiframe'+index).contents().scrollTop() + 12.5;
      jQuery('.qtip').css('left', left);
      jQuery('.qtip').css('top', top);
    });
  });


    jQuery("span.annotation", jQuery("iframe").contents()).hover(function(){
        var idQtip = jQuery(this).attr("aria-describedby");
        jQuery("#" + idQtip).css('position', 'absolute');
      });

  }, 3000);

});
