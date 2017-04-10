(function ($) {
  $(document).ready(function(){
 
    $('.active.first').css('display','none');
    var all_selector = $('.active.first').next().children();
    $('#' + all_selector.attr('id')).triggerHandler("click");
  });
})(jQuery);
