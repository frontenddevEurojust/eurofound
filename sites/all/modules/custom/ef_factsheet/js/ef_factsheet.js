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
//There are hidden fields by CSS that provide the location to the module to geolocate
//.field-type-getlocations-fields .form-item-field-address-und-0-province -> Filling by nuts values
//.field-type-getlocations-fields .form-item-field-address-und-0-additional -> Filling by Location of affected unit(s)
//#getlocations_geocodebutton_key_1 -> the module buttos, it's hidden but we trigger this
 
(function ($) {
  $(document).ready(function(){

    //Set de field null
    $("#edit-field-address-und-0-province").val("");

    //Add input hidden to find what is the nut is working
    jQuery('#node_ef_factsheet_form_group_ef_factsheet_group1').prepend('<input type="hidden" id="max-working-nut" value="1"/>');
    
    //NUT 1******************************************************************************************************************
    //When change de select nut 1
    $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0)" ).change(function() {
      
      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(3) option:selected" ).text() != '- None -'){
        var $select1 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(3) option:selected" ).text() + " ";
      }else{
        var $select1 = "";
      }

      //Complete the field hidden to geolocate the map. #edit-field-address-und-0-province is hidden by CSS
      $("#edit-field-address-und-0-province").val($select1);
      
      //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
      $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
      
      //Assing value 1 when nut 1 works
      $("#max-working-nut").val("1");


    //NUT 2******************************************************************************************************************
    $("#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1)").change(function() {
      
      if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() != '- None -'){
        var $select1 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() + " ";
      }else{
        var $select1 = "";
      }
      if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() != '- None -'){
        var $select2 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() + " ";
      }else{
        var $select2 = "";
      }

      //Complete the field hidden to geolocate the map. #edit-field-address-und-0-province is hidden by CSS
      $("#edit-field-address-und-0-province").val($select2 + $select1 );
      
      //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
      $("#getlocations_geocodebutton_key_1" ).trigger( "click" );

      //In the module js getlocations_fields.js we create a input type hidden: #wrong-location
      //If we have errors we remove de module alert 
      //If the nut can't geolocate we remove the las nut and we fill the input #edit-field-address-und-0-province with the nut correct values
      setTimeout(function(){ 
          if ($("#wrong-location").length > 0){
            $("#edit-field-address-und-0-province").val($select1);
            //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
            $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
            $("#wrong-location").remove();
        }else{
           //Assing value 2 when nut 2 works
          $("#max-working-nut").val("2");
        }
        }, 300);


      //NUT 3******************************************************************************************************************
      $("#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2)").change(function() {
        
        if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() != '- None -'){
          var $select1 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() + " ";
        }else{
          var $select1 = "";
        }
        if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() != '- None -'){
          var $select2 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() + " ";
        }else{
          var $select2 = "";
        }
        if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() != '- None -'){
          var $select3 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() + " ";
        }else{
          var $select3 = "";
        }

        //Complete the field hidden to geolocate the map. #edit-field-address-und-0-province is hidden by CSS
        $("#edit-field-address-und-0-province").val($select3 + $select1);

        if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() == '- None -'){
         $("#edit-field-address-und-0-province").val($select2 + $select1);
        }

        //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
        $("#getlocations_geocodebutton_key_1" ).trigger( "click" );

        //In the module js getlocations_fields.js we create a input type hidden: #wrong-location
        //If we have errors we remove de module alert 
        //If the nut can't geolocate we remove the las nut and we fill the input #edit-field-address-und-0-province with the nut correct values
        setTimeout(function(){ 
          if ($("#wrong-location").length > 0){
            if ($("#max-working-nut").val()==2){
              $("#edit-field-address-und-0-province").val($select3 + $select1);
            }else{
              $("#edit-field-address-und-0-province").val($select1);
            }
            //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
            $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
            $("#wrong-location").remove();
        }else{
          //Assing value 3 when nut 3 works
          $("#max-working-nut").val("3");
        }
        }, 300);
        

        //NUT 4******************************************************************************************************************
        $("#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3)").change(function() {
          
          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() != '- None -'){
            var $select1 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() + " ";
          }else{
            var $select1 = "";
          }
          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() != '- None -'){
            var $select2 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() + " ";
          }else{
            var $select2 = "";
          }
          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() != '- None -'){
            var $select3 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() + " ";
          }else{
            var $select3 = "";
          }
          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() != '- None -'){
            var $select4 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() + " ";
          }else{
            var $select4 = "";
          }

          //Complete the field hidden to geolocate the map. #edit-field-address-und-0-province is hidden by CSS
          $("#edit-field-address-und-0-province").val($select4 + $select1);

          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() == '- None -'){
            $("#edit-field-address-und-0-province").val($select3 + $select1);
          }

          //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
          $("#getlocations_geocodebutton_key_1" ).trigger( "click" );

          //In the module js getlocations_fields.js we create a input type hidden: #wrong-location
          //If we have errors we remove de module alert 
          //If the nut can't geolocate we remove the las nut and we fill the input #edit-field-address-und-0-province with the nut correct values
          setTimeout(function(){ 
          if ($("#wrong-location").length > 0){
            if ($("#max-working-nut").val()==3){
              $("#edit-field-address-und-0-province").val($select4 + $select1);
              if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() == '- None -'){
                $("#edit-field-address-und-0-province").val($select3 + $select1);
              }
            }else if ($("#max-working-nut").val()==2){
              $("#edit-field-address-und-0-province").val($select3+ $select1);
            }else{
              $("#edit-field-address-und-0-province").val($select1);
            }
            //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
            $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
            $("#wrong-location").remove();
          }
        }, 300);
          
        });
        //End NUT 4 ******************************************************************************************************
      });
      //End NUT 3 ********************************************************************************************************
    });
    //End NUT 2 **********************************************************************************************************
    });
    //End NUT 1 **********************************************************************************************************




  //If select change

  //NUT 1******************************************************************************************************************
    //When change de select nut 1
    $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0)" ).change(function() {
      
      if($( ".field-name-field-ef-nuts > div > div > select:nth-child(3) option:selected" ).text() != '- None -'){
        var $select1 = $( ".field-name-field-ef-nuts > div > div > select:nth-child(3) option:selected" ).text() + " ";
      }else{
        var $select1 = "";
      }

      //Complete the field hidden to geolocate the map. #edit-field-address-und-0-province is hidden by CSS
      $("#edit-field-address-und-0-province").val($select1);
      
      //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
      $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
      
      //Assing value 1 when nut 1 works
      $("#max-working-nut").val("1");
     });

  //NUT 2******************************************************************************************************************
    $("#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1)").change(function() {
      
      if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() != '- None -'){
        var $select1 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() + " ";
      }else{
        var $select1 = "";
      }
      if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() != '- None -'){
        var $select2 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() + " ";
      }else{
        var $select2 = "";
      }

      //Complete the field hidden to geolocate the map. #edit-field-address-und-0-province is hidden by CSS
      $("#edit-field-address-und-0-province").val($select2 + $select1 );
      
      //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
      $("#getlocations_geocodebutton_key_1" ).trigger( "click" );

      //In the module js getlocations_fields.js we create a input type hidden: #wrong-location
      //If we have errors we remove de module alert 
      //If the nut can't geolocate we remove the las nut and we fill the input #edit-field-address-und-0-province with the nut correct values
      setTimeout(function(){ 
          if ($("#wrong-location").length > 0){
            $("#edit-field-address-und-0-province").val($select1);
            //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
            $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
            $("#wrong-location").remove();
        }else{
           //Assing value 2 when nut 2 works
          $("#max-working-nut").val("2");
        }
        }, 300);
      });


  //NUT 3******************************************************************************************************************
      $("#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2)").change(function() {
        
        if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() != '- None -'){
          var $select1 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() + " ";
        }else{
          var $select1 = "";
        }
        if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() != '- None -'){
          var $select2 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() + " ";
        }else{
          var $select2 = "";
        }
        if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() != '- None -'){
          var $select3 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() + " ";
        }else{
          var $select3 = "";
        }

        //Complete the field hidden to geolocate the map. #edit-field-address-und-0-province is hidden by CSS
        $("#edit-field-address-und-0-province").val($select3 + $select1);

        if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() == '- None -'){
         $("#edit-field-address-und-0-province").val($select2 + $select1);
        }

        //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
        $("#getlocations_geocodebutton_key_1" ).trigger( "click" );

        //In the module js getlocations_fields.js we create a input type hidden: #wrong-location
        //If we have errors we remove de module alert 
        //If the nut can't geolocate we remove the las nut and we fill the input #edit-field-address-und-0-province with the nut correct values
        setTimeout(function(){ 
          if ($("#wrong-location").length > 0){
            if ($("#max-working-nut").val()==2){
              $("#edit-field-address-und-0-province").val($select3 + $select1);
            }else{
              $("#edit-field-address-und-0-province").val($select1);
            }
            //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
            $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
            $("#wrong-location").remove();
        }else{
          //Assing value 3 when nut 3 works
          $("#max-working-nut").val("3");
        }
        }, 300);
    });




  //NUT 4******************************************************************************************************************
        $("#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3)").change(function() {
          
          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() != '- None -'){
            var $select1 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() + " ";
          }else{
            var $select1 = "";
          }
          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() != '- None -'){
            var $select2 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() + " ";
          }else{
            var $select2 = "";
          }
          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() != '- None -'){
            var $select3 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() + " ";
          }else{
            var $select3 = "";
          }
          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() != '- None -'){
            var $select4 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() + " ";
          }else{
            var $select4 = "";
          }

          //Complete the field hidden to geolocate the map. #edit-field-address-und-0-province is hidden by CSS
          $("#edit-field-address-und-0-province").val($select4 + $select1);

          if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() == '- None -'){
            $("#edit-field-address-und-0-province").val($select3 + $select1);
          }

          //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
          $("#getlocations_geocodebutton_key_1" ).trigger( "click" );

          //In the module js getlocations_fields.js we create a input type hidden: #wrong-location
          //If we have errors we remove de module alert 
          //If the nut can't geolocate we remove the las nut and we fill the input #edit-field-address-und-0-province with the nut correct values
          setTimeout(function(){ 
          if ($("#wrong-location").length > 0){
            if ($("#max-working-nut").val()==3){
              $("#edit-field-address-und-0-province").val($select4 + $select1);
            }else if ($("#max-working-nut").val()==2){
              $("#edit-field-address-und-0-province").val($select3+ $select1);
            }else{
              $("#edit-field-address-und-0-province").val($select1);
            }
            //Triger the buton geolocate, the button #getlocations_geocodebutton_key_1 is hidden by CSS
            $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
            $("#wrong-location").remove();
          }
        }, 300);
          
        });
        //End NUT 4 ******************************************************************************************************





    //Geolocation by Location of affected unit(s) field. When focus out, geolocalice the poi
   $("#edit-field-ef-affected-units-und-0-value").focusout(function(){
      
      var $location = $("#edit-field-ef-affected-units-und-0-value").val();
      $("#edit-field-address-und-0-additional").val($location);
      

      if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() != '- None -'){
        var $select1 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(0) option:selected" ).text() + " ";
      }else{
        var $select1 = "";
      }
      if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() != '- None -'){
        var $select2 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(1) option:selected" ).text() + " ";
      }else{
        var $select2 = "";
      }
      if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() != '- None -'){
        var $select3 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(2) option:selected" ).text() + " ";
      }else{
        var $select3 = "";
      }
      if($( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() != '- None -'){
        var $select4 = $( "#node_ef_factsheet_form_group_ef_factsheet_group1 select:eq(3) option:selected" ).text() + " ";
      }else{
        var $select4 = "";
      }

      $("#edit-field-address-und-0-province").val($select4 + $select3 + $select2 + $select1);
      $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
    });

    //When hover the button "Geocode with Coordenates"  we change the value to display none field in the map to geolocate, we complete the field with the latitude and longitude values
    $( ".getlocations_geocodebutton_key_2" ).hover(function() {
        var $latitude = $( "#edit-field-address-und-0-latitude" ).val() + " , ";
        var $longitude = $( "#edit-field-address-und-0-longitude" ).val();
        $("#edit-field-address-und-0-additional").val("");
        $("#edit-field-address-und-0-province").val($latitude + $longitude);
    });

    //When focus the button "Geocode with Coordenates"  we change the value to display none field in the map to geolocate, we complete the field with the latitude and longitude values
    $( ".getlocations_geocodebutton_key_2" ).focus(function() {
        var $latitude = $( "#edit-field-address-und-0-latitude" ).val() + " ";
        var $longitude = $( "#edit-field-address-und-0-longitude" ).val();
        $("#edit-field-address-und-0-additional").val("");
        $("#edit-field-address-und-0-province").val($latitude + $longitude);
    });

    $( ".getlocations_geocodebutton_key_2" ).click(function() {
        if($('#edit-field-address-und-0-latitude').val() == "") {
            alert("The latitude must be has a value")
        }else if($('#edit-field-address-und-0-longitude').val() == "") {
            alert("The longitude must be has a value")
        }else if(!$.isNumeric($('#edit-field-address-und-0-latitude').val())) {
            alert("The latitude value must be numeric")
        }else if(!$.isNumeric($('#edit-field-address-und-0-longitude').val())) {
            alert("The longitude value must be numeric")
        }else{
          $("#getlocations_geocodebutton_key_1" ).trigger( "click" );
        }
       
    });

    //Append de message if the geographical coordinates hasn't value - We verify that there is no value with the value "Check this box to delete this location."
    if (!$(".field-type-getlocations-fields .description")[0]){
      $(".getlocations_fields_country_wrapper").once().prepend("<div id='message-location'>Please, make sure to click on the 'Save' button at the bottom of the page to save the geographical coordinates of this factsheet.</div>" );
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

