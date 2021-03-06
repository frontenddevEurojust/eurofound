/** working life country profiles  **/
(function ($) {
  $(document).ready(function(){

    var form_pages=window.location.pathname.split("/");
    var pathname_form=form_pages[form_pages.length-2];     
    
    if(pathname_form =='country'){
      $('h1#page-title').addClass('no-pdf');
    }

    if($('body.node-type-ef-working-life-country-profiles')){

      $('h1#page-title').addClass('no-pdf');

      var anchor_found = window.location.href.indexOf('#');
      var urlLength = window.location.href.length;
      var anchorUp = window.location.href.slice(anchor_found+1, urlLength);

      $('.section-container > section').each(function( index ) {
        var currentClass = unescape(escape($(this).attr('class')).replace('%A0',''));
        $(this).attr('class',currentClass);
        $('.content',this).addClass('inactive');
      });

      if(anchor_found != -1 && anchorUp != 'up'){

        var active = window.location.href.match(/#+[a-z0-9\-\%E2 %80 %93\%E2 %80 %94\–\%E2 %80 %9D\%E2 %80 %9C\_\/\?\*\"\"\'\(\)\¡\!']+/);
         
        active = active[0].substr(1);

        $('.section-container').each(function( index ) {

          var currentSection = $('> section',this);

          $('> section',this).each(function( i ) { 

            //if(active == $(this).attr('class')){    

              if($(this).hasClass( active )){
                
                //console.log(active.length +'-------------->'+ $(this).attr('class').length +'-------------->' + $(this).attr('class'));
                // console.log(active + '------------>' + $(this).attr('class') );
                
                  currentSection.removeClass('active');

                  $(this).addClass('active');
                  $('.content',this).removeClass('inactive');

                  $('html, body').animate({
                      scrollTop: $(this).offset().top
                  }, 800);  

              }
            //}

          });  
        });
      }


      $('.section-living-working section > h3').each(function( index ) {
        if($('p',this).html() != null){
          tabs_living = $('p',this).html();
           $('p',this).addClass('title-tabs');     
        }
      });

      $('.section-container').each(function( index ) {
        $('section',this).each(function( i ) {

          $('> h3', this).click(function(){          
            anchor_found = window.location.href.indexOf('#');
            active = $(this).parent().attr('class');

            if(anchor_found != -1){
              // Replace #title value for the clicked one
              var newURLString = window.location.href.replace(/#+[a-z0-9\-\%E2 %80 %93\%E2 %80 %94\–\%E2 %80 %9D\%E2 %80 %9C\_\/\?\*\"\"\'\(\)\¡\!']+/,'#' + active).replace('active','');
              history.pushState(null, "", newURLString);

            }else{
               var newURLString =  window.location.href + '#' + active.replace('active','');
               history.pushState(null, "", newURLString);
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

          $('.section-container section > h3').once().click(function(){
            $(this).toggleClass('active');
            var sectionActive = $(this).parent();
            sectionActive.find(".content").toggleClass('inactive');
          });

        }else{

          $('.section-working-life-country-profile.vertical-tabs h3.title').click(function () {            
            $('html, body').animate({
                scrollTop: $("#content-tabs-country-profile").offset().top
            }, 0);            
          }); 

        }
      });



          $('.main a').click(function(){
            var link = $(this).attr('href');
            var posLink = link.indexOf('#');
            var anchorName = link.slice(posLink+1, link.length);

            if( $('section.' + anchorName) ){
              parentDiv = $('section.' + anchorName).parent().attr('id');
              $( '#' + parentDiv + ' section').removeClass('active');
              $( '#' + parentDiv + ' section.' + anchorName).addClass('active');
        
            }

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

      $("a.up").click(function () {
        //console.log($(this));
        $('html, body').animate({
            scrollTop: $(".page").offset().top
        }, 800);
      });
    }
  });
})(jQuery);






/** END working life country profiles  **/