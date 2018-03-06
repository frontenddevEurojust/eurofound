
(function ($) {
$(document).ready(function(){






    $('.contents-comparision-list .content-comparision-item').each(function( index ) {
          $(".pagination").append("<li><h1>"+index+"</h1></li>");

      if(index == 0){
       
      }else{

      }
    });
     
     $('.pagination li').click(function(){
      var numberPag = $('a',this).text();
      $('.contents-comparision-list .content-comparision-item').css('display','none');
      $('.contents-comparision-list .content-comparision-item:nth-child('+numberPag+')').css('display','block');  


     });



  });
})(jQuery);


