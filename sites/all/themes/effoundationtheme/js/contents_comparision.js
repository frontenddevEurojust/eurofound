
(function ($) {
$(document).ready(function(){  

      function resetCurrent(){
        $('.page-list li').removeClass('current');
      }
      function currentPage(a,b){
        $('.current-instrument').text(a);
        $('.total-instrument').text(b);
      }

      $('.contents-comparision-list .content-comparision-item').each(function( index ) {
        if(index == 0){
          $(".page-list").append("<li class='current'><a href='javascript:'>"+Number(index+1)+"</a></li>");       
        }else{
          $(".page-list").append("<li><a href='javascript:'>"+Number(index+1)+"</a></li>");
        }
      });

    var totalPage = $('.page-list li').size();
    currentPage(1, totalPage);
       
     $('.page-list li').click(function(){
      var numberPag = Number($('a',this).text());
      currentPage(numberPag, totalPage);
      resetCurrent();
      $(this).addClass('current');
      $('.contents-comparision-list .content-comparision-item').css('display','none');
      $('.contents-comparision-list .content-comparision-item:nth-child('+numberPag+')').css('display','block');        
     });

  });
})(jQuery);


