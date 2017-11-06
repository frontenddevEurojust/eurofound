// First time only
(function ($) {
  $(document).ready(function(){
    $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-choices').bind('click', function(){
      var $children = $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-choices').contents();

      if($children.length == 2){

        $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-drop').addClass('done');
        $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-drop').hide();

      }else{
        if($('#edit_field_ef_type_of_restructuring_und_chosen .chosen-drop').hasClass('done')){

          $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-drop').show();
        }
      }

    });

    //Min job loss or job creation –cannot submit if both are empty 

    
    //New location: cannot be blank if “offshoring/ delocalisation” is selected in restructuring type

    $( "#edit-field-ef-type-of-restructuring-und" ).change(function() {
      $('.chosen-container-multi .search-choice span').each(function () {
          if ($(this).once().text() == 'Offshoring/Delocalisation') {
              if ($('#edit_field_ef_new_location_und_chosen .chosen-single span').text() == '- None -') {
                $('#edit-submit').attr("disabled","disabled");
                $('#edit-save-edit').attr("disabled","disabled");

                $("#edit-field-ef-new-location div label").once().append("<div id='alertLocation' class='reveal-modal' class='reveal-modal' data-reveal='' aria-labelledby='modalTitle' aria-hidden='false' role='dialog'><p class='lead'>New location cannot be none if 'offshoring/delocalisation' is selected in Type of Restructuring</p><a id='accept-button' class='btn-payment'>Accept</a></div></div>" );
                $("body").once().append("<div class='reveal-modal-bg payment' style='display: block;'></div>");
                $('#alertLocation').show();
                $('.reveal-modal-bg').show();


                $('#accept-button').click(function() {
                  $('#alertLocation').hide();
                  $('.reveal-modal-bg').hide();
                });
                $('#go-to').click(function() {
                  $('#alertLocation').hide();
                  $('.reveal-modal-bg').hide();
                  $('#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0').focus().click();
                });

              }
          }else{
            $('#edit-submit').removeAttr("disabled");
            $('#edit-save-edit').removeAttr("disabled","disabled");
          }
      });
    });

    $( "#edit-field-ef-new-location-und" ).change(function() {

      $('.chosen-single span').each(function () {
          if ($(this).text() == '- None -') {
              if ($('#edit_field_ef_type_of_restructuring_und_chosen .search-choice span').text() == 'Offshoring/Delocalisation') {
                $('#edit-submit').attr("disabled","disabled");
                $('#edit-save-edit').attr("disabled","disabled");
                $("#edit-field-ef-new-location div label").once().append("<div id='alertLocation' class='reveal-modal' class='reveal-modal' data-reveal='' aria-labelledby='modalTitle' aria-hidden='false' role='dialog'><p class='lead'>New location cannot be none if 'offshoring/delocalisation' is selected in Type of Restructuring</p><a id='accept-button' class='btn-payment'>Accept</a></div></div>" );
                $("body").once().append("<div class='reveal-modal-bg payment' style='display: block;'></div>");
                $('#alertLocation').show();
                $('.reveal-modal-bg').show();


                $('#accept-button').click(function() {
                  $('#alertLocation').hide();
                  $('.reveal-modal-bg').hide();
                });
                $('#go-to').click(function() {
                  $('#alertLocation').hide();
                  $('.reveal-modal-bg').hide();
                  $('#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0').focus().click();
                });
                
               }
          }else{
            $('#edit-submit').removeAttr("disabled");
            $('#edit-save-edit').removeAttr("disabled","disabled");
          }
      });
    });
  });
})(jQuery);



//Only when the node is moved to published and the Approved for payment field is empty, show a dialog box warning user about this situation.

(function ($) {
  Drupal.behaviors.mynewsdesk = {
  attach: function (context, settings) {
      $('#edit-field-ef-moderation-state').on('change', function () {
        
    var isDirty = !this.options[this.selectedIndex].defaultSelected;

    if (isDirty) {
        if ($(this).val() == 'published'){
          if ($("#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0").val() === "") {
            $(".form-item-field-ef-moderation-state").once().append("<div id='payment' class='reveal-modal' class='reveal-modal' data-reveal='' aria-labelledby='modalTitle' aria-hidden='false' role='dialog'><p class='lead'>Approved for payment field is empty</p><a id='accept-button' class='btn-payment'>Accept</a> <a id='go-to' class='btn-payment'>Go to the Approved for payment field</a></div></div>" );
            $("body").once().append("<div class='reveal-modal-bg payment' style='display: block;'></div>");
            $('#payment').show();
            $('.reveal-modal-bg').show();
            $('#edit-save-edit').prop("disabled", false);
            $('#edit-save-edit').addClass("form-submit");
            $('#edit-save-edit').removeClass("form-submit-disabled");
            $('#edit-submit').prop("disabled", false);
            $('#edit-submit').addClass("form-submit primary");
            $('#edit-submit').removeClass("form-submit-disabled");
            
            
            $('#accept-button').click(function() {
              $('#payment').hide();
              $('.reveal-modal-bg').hide();
            });
            $('#go-to').click(function() {
              $('#payment').hide();
              $('.reveal-modal-bg').hide();
              $('#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0').focus().click();
            });
          }
        } 
    }
    });

  }};
})(jQuery);