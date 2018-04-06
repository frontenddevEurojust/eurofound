(function ($) {
$(document).ready(function(){
      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[1];


    $('.block-menu-menu-extranet-menu .menu li').each(function( index ) {
     if($('a',this).attr('href') == window.location.pathname){
      $(this).addClass('active');
     }
    });

    if(pathname_form =='extranet'){
      $('main .main .ef-main').addClass('board-member-main');
    };
  });
})(jQuery);