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
  });
})(jQuery);

jQuery( window ).load(function() {
   if (window.location.href.indexOf("field-ef-approved-for-payment-add-more-wrapper") > -1) {
     jQuery('#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0').focus();
    }
});


//Geolocation
(function ($) {
  $(document).ready(function(){

    //When hover the button we change the value to display none field in the map to geolocate, we complete the field with the nuts values
    $( "#getlocations_geocodebutton_key_1" ).hover(function() {
      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(3) option:selected" ).text() != '- None -'){
        var $select1 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(3) option:selected" ).text() + " ";
      }else{
        var $select1 = "";
      }

      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(4) option:selected" ).text() != '- None -'){
        var $select2 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(4) option:selected" ).text() + " ";
      }else{
        var $select2 = "";
      }

      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(5) option:selected" ).text() != '- None -'){
        var $select3 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(5) option:selected" ).text() + " ";
      }else{
        var $select3 = "";
      }

      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(6) option:selected" ).text() != '- None -'){
        var $select4 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(6) option:selected" ).text() + " ";
      }else{
        var $select4 = "";
      }

      $("#edit-field-address-und-0-province").val($select1 + $select2 + $select3 + $select4 );

      var $location = $("#edit-field-ef-affected-units-und-0-value").val();
      $("#edit-field-address-und-0-additional").val($location);

    });

    //When focus the button "Geocode with Nuts values" we change the value to display none field in the map to geolocate, we complete the field with the nuts values
    $( "#getlocations_geocodebutton_key_1" ).focus(function() {
      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(3) option:selected" ).text() != '- None -'){
        var $select1 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(3) option:selected" ).text() + " ";
      }else{
        var $select1 = "";
      }

      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(4) option:selected" ).text() != '- None -'){
        var $select2 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(4) option:selected" ).text() + " ";
      }else{
        var $select2 = "";
      }

      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(5) option:selected" ).text() != '- None -'){
        var $select3 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(5) option:selected" ).text() + " ";
      }else{
        var $select3 = "";
      }

      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(6) option:selected" ).text() != '- None -'){
        var $select4 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(6) option:selected" ).text() + " ";
      }else{
        var $select4 = "";
      }

      $("#edit-field-address-und-0-province").val($select1 + $select2 + $select3 + $select4 );

      var $location = $("#edit-field-ef-affected-units-und-0-value").val();
      $("#edit-field-address-und-0-additional").val($location);

    });


    //When hover the button "Geocode with Coordenates"  we change the value to display none field in the map to geolocate, we complete the field with the latitude and longitude values
    $( ".getlocations_geocodebutton_key_2" ).hover(function() {
        var $latitude = $( "#edit-field-address-und-0-latitude" ).val() + " , ";
        var $longitude = $( "#edit-field-address-und-0-longitude" ).val();
        $("#edit-field-address-und-0-province").val($latitude + $longitude);
    });

    //When focus the button "Geocode with Coordenates"  we change the value to display none field in the map to geolocate, we complete the field with the latitude and longitude values
    $( ".getlocations_geocodebutton_key_2" ).focus(function() {
        var $latitude = $( "#edit-field-address-und-0-latitude" ).val() + " ";
        var $longitude = $( "#edit-field-address-und-0-longitude" ).val();
        $("#edit-field-address-und-0-province").val($latitude + $longitude);
    });

    $( ".getlocations_geocodebutton_key_2" ).click(function() {
        $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
    });




    //Append de message if the geographical coordinates hasn't value - We verify that there is no value with the value "Check this box to delete this location."
    if (!$(".field-type-getlocations-fields .description")[0]){
      $(".getlocations_fields_country_wrapper").once().prepend("<div id='message-location'>Please, make sure you click on the Save button to save the geographical coordinates related to this factsheet.</div>" );
      //Click the button 'Geocode this address' to apply the geolocation in the map if we haven't value en Latitude y Long 
      //$("#getlocations_geocodebutton_key_1" ).trigger( "click" );
    }
    
    
    
      
      
    
  });
})(jQuery);


//Only when the node is moved to published and the Approved for payment field is empty, show a dialog box warning user about this situation.

(function ($) {
  Drupal.behaviors.ef_factsheet = {
  attach: function (context, settings) {
   
      $('#edit-field-ef-moderation-state').on('change', function () {
        
    var isDirty = !this.options[this.selectedIndex].defaultSelected;

    if (isDirty) {
        if ($(this).val() == 'published'){
          if ($("#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0").val() === "") {
            $(".form-item-field-ef-moderation-state").once().append("<div id='payment' class='reveal-modal' class='reveal-modal' data-reveal='' aria-labelledby='modalTitle' aria-hidden='false' role='dialog'><p class='lead'>The 'Approved for payment' field is empty. Are you sure you want to publish this factsheet?</p><a id='accept-button' class='btn-payment'>Yes, I want to publish</a> <a id='go-to' class='btn-payment'>No, I want to fill-in the 'Approved for payment' field</a></div></div>" );
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
              $('#edit-submit').trigger( "click" );
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


//Mode View check payment field
(function ($) {
    Drupal.behaviors.ef_factsheet_view = 
    {
      attach: function (context, settings) {
      $('#edit-state').on('change', function () 
      {
        if (typeof Drupal.settings.ef_factsheet !== 'undefined') 
        {
          var $checkPayment = Drupal.settings.ef_factsheet.field_ef_approved_for_payment;
          var $nodeID = Drupal.settings.ef_factsheet.nid;
          var $baseURL = Drupal.settings.ef_factsheet.baseURL;
          var isDirty = !this.options[this.selectedIndex].defaultSelected;
          if (isDirty) 
            if ($(this).val() == 'published'){
              {

                if ($checkPayment == null)
                  {
                    $(".workbench-info-block").once().append("<div id='payment' class='reveal-modal' class='reveal-modal' data-reveal='' aria-labelledby='modalTitle' aria-hidden='false' role='dialog'><p class='lead'>The 'Approved for payment' field is empty. Are you sure you want to publish this factsheet?</p><a id='accept-button' class='btn-payment'>Yes, I want to publish</a> <a id='go-to' class='btn-payment'>No, I want to fill-in the 'Approved for payment' field</a> <a id='cancel' class='btn-payment'>Cancel</a></div></div>" );
                    $("body").once().append("<div class='reveal-modal-bg payment' style='display: block;'></div>");
                    $('#payment').show();
                    $('.reveal-modal-bg').show();   
                    
                    $('#accept-button').click(function() {
                      $('#payment').hide();
                      $('.reveal-modal-bg').hide();
                      $('#edit-button').trigger( "click" );
                    });
                    $('#go-to').click(function() {
                      $('#payment').hide();
                      $('.reveal-modal-bg').hide();
                      window.location.replace($baseURL + "/node/" + $nodeID + "/edit" + "#field-ef-approved-for-payment-add-more-wrapper");
                    });
                    $('#cancel').click(function() {
                      $('#payment').hide();
                      $('.reveal-modal-bg').hide();
                    });
                  }
              } 
            }
        }
      });
    }
  }
})(jQuery);

