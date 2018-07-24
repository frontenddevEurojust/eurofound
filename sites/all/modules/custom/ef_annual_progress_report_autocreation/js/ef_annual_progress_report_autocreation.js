(function ($) {
  $(document).ready(function(){

  	$('#edit-deliverable-kind-parent').prop('disabled', true);
  	$('#edit-requested-on-datepicker-popup-0').prop('disabled', true);
    $('#edit-remove-all-countries').css('display', 'none');
    $('#edit-add-all-countries').css('display', 'none');

  	$('#edit-type-of-report').change(function(){

  		if (!$('.form-item-national-countries').hasClass('form-disabled')) {
  			$('.form-item-national-countries').slideDown();
        $('#edit-remove-all-countries').delay(300).fadeIn(300);
        $('#edit-add-all-countries').delay(300).fadeIn(300);
  			$('.form-item-eu-level > input').prop('checked', false);
  		}else {
        $('#edit-remove-all-countries').fadeOut();
        $('#edit-add-all-countries').fadeOut();
        $('.form-item-national-countries').delay(300).slideUp();
  			$('.form-item-eu-level > input').prop('checked', true);
  			
  		}

  	});


    $('#edit-metadata-fieldset .form-item-national-countries label').each(function(index, element){

    	if( $(element).prev('input').is(":checked") ){
    		$(element).removeClass('unchecked').addClass('checked');
    	}else {
    		$(element).removeClass('checked').addClass('unchecked');
    	}

    	$(element).on('click', function(e){

    		e.preventDefault();

	    	if($(element).prev('input').is( ":checked" )){

	    		$(this).prev('input').trigger('click');
	    		$(this).addClass('unchecked');
	    		$(this).removeClass('checked');
	    		
	    	}else{
	    		
          		$(this).prev('input').trigger('click');
          		$(this).addClass('checked');
	    		$(this).removeClass('unchecked');
	    		
	    	}
	    	
    	});

    });

    // Remove all
    $('#edit-remove-all-countries').on('click', function(){

      $('#edit-metadata-fieldset .form-item-national-countries label').each(function(index, element){

        if( $(element).prev('input').is(":checked") ){
          $(element).removeClass('checked');
          $(element).addClass('unchecked');
          $(element).prev('input').trigger('click');
        }else {
          //$(element).removeClass('checked').addClass('unchecked');
        }

      });      

    }); 

    // Select all
    $('#edit-add-all-countries').on('click', function(){

      $('#edit-metadata-fieldset .form-item-national-countries label').each(function(index, element){

        if( $(element).prev('input').is(":checked") ){

        }else {
          $(element).removeClass('unchecked');
          $(element).addClass('checked');
          $(element).prev('input').trigger('click');
        }

      });      

    });

  



  });
})(jQuery);


(function ($) {
  Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
        


  }
  };
})(jQuery);