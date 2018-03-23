//Change h3 to h1
(function ($) {
  $(document).ready(function(){

    var wrapper = $('.view-grouping');         
    $(wrapper).each(function( index ) {
      $('.view-grouping-content > h3', this).replaceWith('<h1 class="print-h1">' + $('.view-grouping-content > h3', this).html() +'</h1>')
    });
      
  });
})(jQuery);