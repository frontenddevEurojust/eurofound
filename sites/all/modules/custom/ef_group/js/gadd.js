(function ($) {
  $(document).ready(function(){

  	// wrapping additional filters 
  	$('.form-item-country').addClass('gadd-form-additional-items');
  	$('#ajax-leader-form-node').addClass('gadd-form-additional-items');
  	$('.gadd-form-additional-items').wrapAll('<div class="gadd-form-additional"></div>');

    $('#group-operation-form > div')
      .prepend('<div data-alert class="alert-box warning"></div>');


  });
})(jQuery);


(function ($) {
  Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
        
    // radios funcionality for checkboxes
    $('#ajax-user-roles .form-type-checkbox').each(function(index){
      $(this).on('click', function(){

        if(index == 0){
          if( $(this).children('.form-checkbox').is(':checked') ){
            $('.form-item-roles-country-group-member input').prop('checked', false);
          }else{
            $('.form-item-roles-country-group-member input').prop('checked', true);
          }
        }else if(index == 1){
          if( $(this).children('.form-checkbox').is(':checked') ){
            $('.form-item-roles-country-group-leader input').prop('checked', false);
          }else{
            $('.form-item-roles-country-group-leader input').prop('checked', true);
          }
        }
      });
    });


    if( $('#ajax-user-roles div div').hasClass('warning') ){
      $('.form-item-roles-country-group-member input').prop('checked', true);
      $('.form-item-roles-country-group-leader input').prop('checked', false);
      $('.form-item-roles-country-group-leader input').prop('disabled', true);
    }else{
      $('.form-item-roles-country-group-leader input').prop('disabled', false);
    }


  }
  };
})(jQuery);