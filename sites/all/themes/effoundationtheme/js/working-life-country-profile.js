    //alert('aaaaaaa');
/** working live country profiles  **/

  jQuery(document).ready(function(){
    console.log('aaaaaaa');
    //if(window.location.href.indexOf('country') > -1){
    if(jQuery('body.node-type-ef-working-life-country-profiles')){

      var anchor_found = window.location.href.indexOf('#');

      if(anchor_found != -1){

        jQuery('html, body').animate({
            scrollTop: jQuery("#content-tabs").offset().top
        }, 800);


        var active = window.location.href.match(/#+[a-z\-]+/g);
        active = active[0].substr(1);

        if(jQuery('section.' + active).length > 0)
        {
          jQuery('section.active').removeClass('active');

          jQuery('section.' + active).addClass('active');
        }



      }

      jQuery('section > h2').click(function(){

        anchor_found = window.location.href.indexOf('#');

        active = jQuery(this).parent().attr('class');

        if(anchor_found != -1) {
          // Replace #title value for the clicked one
          window.location.href = window.location.href.replace(/#+[a-z\-]+/g,'#' + active) ;
        }
        else {
           window.location.href =  window.location.href + '#' + active;
        }

      });



      jQuery(window).on("load resize", function(event) {
        var screenWidth;
        if( /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
         screenWidth = 990;
        } else {
          screenWidth = 973;
        }
        // mobile resolutions
        if( jQuery(window).width()<=screenWidth){
          jQuery('.section-container.vertical-tabs h2.title').click(function () {

            if(jQuery(this).parent().attr('class') != undefined && jQuery(this).parent().attr('class').length > 0){
              if(jQuery(this).parent().hasClass('active2') == false ){
                jQuery(this).parent().addClass('active2');
              }else{
                jQuery(this).parent().removeClass('active2');
              }
            }
          });
        }
      });


      jQuery('.section-container.vertical-tabs h2.title').click(function () {
        jQuery('html, body').animate({
            scrollTop: jQuery("#content-tabs").offset().top
        }, 0);
      });

     jQuery(window).scroll(function () {
        if (jQuery(this).scrollTop() >1300) {
           jQuery(".go-top-wrapper").css('display','block');
           jQuery(".go-top-wrapper").fadeIn();
           jQuery(".ef-to-top-nav").css('display','none');
        } else {
            jQuery(".go-top-wrapper").fadeOut();
            jQuery(".go-top-wrapper").css('display','none');
            jQuery(".ef-to-top-nav").css('display','block');
        }
      });

      jQuery("a[href='#content-tabs']").click(function () {
        jQuery('html, body').animate({
            scrollTop: jQuery("#content-tabs").offset().top
        }, 800);
      });
    }
  });

/** END working live country profiles  **/
