(function ($) {
  $(document).ready(function(){
    $('select#edit-deliver').change(function() {
      
      var checkExist = setInterval(function() {

        if( $('#edit_deliver_chosen > a > span').text() == "Questionnaire based national contribution to comparative work"){
          if( $('.form-item-service select option').length == "3" ){
              $(".form-item-service select option:selected").prop("selected", false);
              $(".form-item-service select option:nth-child(1)").prop("selected", true);
            clearInterval(checkExist);
          }
        }

        if( $('#edit_deliver_chosen > a > span').text() == "Questionnaire based national contribution to sectoral representativeness studies"){
          if( $('.form-item-service select option').length == "3" ){
              $(".form-item-service select option:selected").prop("selected", false);
              $(".form-item-service select option:nth-child(1)").prop("selected", true);
            clearInterval(checkExist);
          }
        }

      }, 100);
    });

    $('select#edit-deliver').change(function() {
        if( $('#edit_deliver_chosen > a > span').text() == "Questionnaire based national contribution to comparative work"){
          if($('.form-item-service select option:selected').val() != 0 ){
              $(".form-item-service select option:selected").prop("selected", false);
              
          }
        }

        if( $('#edit_deliver_chosen > a > span').text() == "Questionnaire based national contribution to sectoral representativeness studies"){
          if($('.form-item-service select option:selected').val() != 0 ){
              $(".form-item-service select option:selected").prop("selected", false);
              
          }
        }
    });

    // Select all
    $('#edit-addallbutton').on('click', function(){
      
      $('#edit-country2 .form-item input').each(function(i){

        if($(this).is( ":checked" )){
          //is checked
          
        }else{
          //check it
          $(this).trigger('click');

          var label = $(this).next('label').children('i');

          if(label.attr('class') == 'fa fa-circle-thin'){
            label.removeClass('fa-circle-thin');
            label.addClass('fa-check-circle');
          }

        }

      });

      $(this).prop('disabled', true);
      $('#edit-quitallbutton').prop('disabled', false);
    });


    // Diselect all
    $('#edit-quitallbutton').on('click', function(){
      
      $('#edit-country2 .form-item input').each(function(i){

        if($(this).is( ":checked" )){
          //is checked
          $(this).trigger('click');

          var label = $(this).next('label').children('i');

          if(label.attr('class') == 'fa fa-check-circle'){
            label.removeClass('fa-check-circle');
            label.addClass('fa-circle-thin');
          }

        }else{
          //check it

        } 

      });

      $(this).prop('disabled', true);
      $('#edit-addallbutton').prop('disabled', false);

    });
    
    $('#edit-country2 .form-item label').each(function(index, element){

      $(element).on('click', function(e){

        e.preventDefault();

        if($(element).prev('input').is( ":checked" )){

          $(this).children('i').removeClass('fa-check-circle').addClass('fa-circle-thin');
          $(this).prev('input').trigger('click');
          
        }else{
          
          $(this).children('i').removeClass('fa-circle-thin').addClass('fa-check-circle');
          $(this).prev('input').trigger('click');
          
        }

        $('#edit-quitallbutton').prop('disabled', false);
        $('#edit-addallbutton').prop('disabled', false);
        
      });

    });
            


    $('.page-car-nc-autocreation #edit-country2 .form-type-checkbox').slice(0,8).wrapAll('<div class="large-3 column countries-col"></div>');
    $('.page-car-nc-autocreation #edit-country2 .form-type-checkbox').slice(8,16).wrapAll('<div class="large-3 column countries-col"></div>');
    $('.page-car-nc-autocreation #edit-country2 .form-type-checkbox').slice(16,24).wrapAll('<div class="large-3 column countries-col"></div>');
    $('.page-car-nc-autocreation #edit-country2 .form-type-checkbox').slice(24,32).wrapAll('<div class="large-3 column countries-col"></div>');


    $('.page-car-nc-autocreation #edit-country2 .form-type-checkbox > label').each(function(i){
      $(this).prepend('<i class="fa fa-circle-thin"></i>');
    });

    //Check if the country is checked when there is a Validation error.
    $('#edit-country2 .form-item label').each(function(index, element){
      if($(this).prev('input').is(":checked")){
        $(this).children('i').removeClass('fa-circle-thin').addClass('fa-check-circle');
      }
    });

  });
})(jQuery);