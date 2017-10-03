/** working life country profiles  **/
(function ($) {
  $(document).ready(function(){

    //if(window.location.href.indexOf('country') > -1){
    if($('body.node-type-ef-working-life-country-profiles')){

      var anchor_found = window.location.href.indexOf('#');
      var urlLength = window.location.href.length;
      var anchorUp = window.location.href.slice(anchor_found+1, urlLength);

      $('.section-container section').each(function( index ) {
        var currentClass = unescape(escape($(this).attr('class')).replace('%A0',''));
        $(this).attr('class',currentClass);
      });

      if(anchor_found != -1 && anchorUp != 'up'){

        var active = window.location.href.match(/#+[a-z\-]+/g);

        active = active[0].substr(1);

        $('.section-container').each(function( index ) {

          var currentSection = $('section',this);


          $('section',this).each(function( i ) {    

            if(active == $(this).attr('class')){     

              if($(this).hasClass( active )){
                 //console.log(active.length +'-------------->'+ $(this).attr('class').length +'-------------->' + $(this).attr('class'));
                  currentSection.removeClass('active');
                  $(this).addClass('active');

                  $('html, body').animate({
                      scrollTop: $(this).offset().top
                  }, 800);  

              }
            }

          });  
        });
      }


      $('.section-living-working section > h2').each(function( index ) {
        if($('p',this).html() != null){
          tabs_living = $('p',this).html();
          $('p',this).remove();
          $(this).html(tabs_living);        
        }
      });

       $('.section-container').each(function( index ) {
        $('section',this).each(function( i ) {
          $('> h2', this).click(function(){          
            anchor_found = window.location.href.indexOf('#');
            active = $(this).parent().attr('class');

            if(anchor_found != -1){
              // Replace #title value for the clicked one
              window.location.href = window.location.href.replace(/#+[a-z\-]+/g,'#' + active).replace('active','');
            }else{
               window.location.href =  window.location.href + '#' + active.replace('active','');
            }
          });
        });
      });




      $(window).on("load resize", function(event) {
        var screenWidth;
        if( /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
         screenWidth = 990;
        } else {
          screenWidth = 973;
        }
        // mobile resolutions
        if( $(window).width()<=screenWidth){


              $('.section-container section > h2').click(function(){   
                console.log($(this).parent().attr('class'));
  

              });



        }
      });


      $('.section-working-life-country-profile.vertical-tabs h2.title').click(function () {
        
        $('html, body').animate({
            scrollTop: $("#content-tabs-country-profile").offset().top
        }, 0);
        
      });

      $(window).scroll(function () {
        if ($(this).scrollTop() >1300) {
           $(".go-top-wrapper").css('display','block');
           $(".go-top-wrapper").fadeIn();
           $(".ef-to-top-nav").css('display','none');
        } else {
            $(".go-top-wrapper").fadeOut();
            $(".go-top-wrapper").css('display','none');
            $(".ef-to-top-nav").css('display','block');
        }
      });

      $("a[href='#up']").click(function () {
        $('html, body').animate({
            scrollTop: $("#logo").offset().top
        }, 800);
      });
    }
  });
})(jQuery);
/** END working life country profiles  **/