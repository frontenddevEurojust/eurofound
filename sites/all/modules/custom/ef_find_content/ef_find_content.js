(function ($) {
	$(document).ready(function(){

		 $("#edit-changed").datepicker('option', 'dateFormat', 'dd/mm/yy');

	});
})(jQuery);


// First time only FIND-CONTENT
(function ($) {
  $(document).ready(function(){

      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[form_pages.length-1];
      if(pathname_form =='find-content'){

         // Form elements that each fieldset
         $('.page-find-content fieldset').each(function(j){
              var indice=j+1;
              if(this.id!='edit-date-fieldset-search-date'){
                  $('.page-find-content fieldset#'+this.id+' .fieldset-wrapper > div').each(function(i){
                    var $fieldsetClass = 'form-item-wrap-'+(j+1);
                    $(this).addClass($fieldsetClass);
                  });
              }else{
                  $('.page-find-content fieldset#'+this.id+' .fieldset-wrapper > div').each(function(i){
                    var $fieldsetClass = 'form-item-wrap-'+(j+1);
                    $(this).addClass($fieldsetClass);
                  });

             }

              // intervals form elements that make up each row
              var $num_form_divisor;
              if(indice==1){
                $num_form_divisor=[3,4];
              }else if(indice==2){
                $num_form_divisor=[3,3,3];
              }else if(indice==3){
                $num_form_divisor=[3,3];
              }else{
                $num_form_divisor=[4,4];
              }

              //Group items layered form
              for (var i=0; i< $num_form_divisor.length; i++) {
                var numElements = $num_form_divisor[i];
                $('.fieldset-wrapper > .form-item-wrap-'+(j+1)).slice(0, numElements).wrapAll('<div class="wrap-row-filters"></div>');
              }
        });

        $('.page-find-content #edit-date-fieldset-search-date .wrap-row-filters > .form-item-wrap-4').each(function(z){
          $('.wrap-row-filters > div.form-item-wrap-4').slice(0, 2).wrapAll('<div class="date-first-end group-'+(z+1)+'"></div>');
        });

          // write label for groups
          $( ".group-1" ).prepend( "<label>Requested</label>" );
          $( ".group-2" ).prepend( "<label>Submitted</label>" );
          $( ".group-3" ).prepend( "<label>Approved for payment</label>" );
          $( ".group-4" ).prepend( "<label>Scheduled record delivery date</label>" );
      };

  });
})(jQuery);
/* END FIND CONTENT */