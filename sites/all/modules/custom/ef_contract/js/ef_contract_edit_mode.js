(function ($) {
  Drupal.behaviors.efcontract = {
  attach: function (context, settings) {

  var correct_dialog = $('<div class="contract-dialog"></div>');
    correct_dialog.append('Please, if you have modified any value, click on "Cancel" button and save the content before updating the contract.');
    correct_dialog.dialog({
      autoOpen: false,
      title: "Correct contract",
      modal: true,
      draggable: false,
      resizable: false,
      position: ['center', 'center'],
      show: 'blind',
      hide: 'blind',
      width: 300,
      dialogClass: 'ui-dialog-eurofound',
      open: function(event, ui ) {
        var full_link = $(this).data('full_link');
        var contract_link = $(this).data('contract_link');
      },
      buttons: {
          "Cancel": function() {
              $(this).dialog( "close" );
          },
          "Correct both group and contract": function() {
            var full_link = $(this).data('full_link');
            window.location = full_link;
          },
          "Modify just contract": function() {
            var contract_link = $(this).data('contract_link');
            window.location = contract_link;
          },
      },
    });

    $('select#edit-field-ef-moderation-state').change(function() {
      $('#edit-submit').prop( "disabled", true );
      $('#edit-submit').prop( "class", "form-submit-disabled" );
      $('#edit-field-ef-assign-to-user-und').prop( "disabled", true );
      $('#edit-save-edit').prop( "disabled", true );
      $('#edit-save-edit').prop( "class", "form-submit-disabled" );
      $('#accept-button').addClass("disabled");
      var checkExist = setInterval(function() {
        if ($("#edit-field-ef-assign-to-user-und--2").length || $("#edit-field-ef-assign-to-user-und--3").length) {
          $('#edit-submit').prop( "disabled", false );
          $('#edit-submit').prop( "class", "form-submit primary" );
          $('#edit-save-edit').prop( "disabled", false );
          $('#edit-save-edit').prop( "class", "form-submit" );
          $('#edit-field-ef-assign-to-user-und--2').attr('id','edit-field-ef-assign-to-user-und');
          $('#edit-field-ef-assign-to-user-und--3').attr('id','edit-field-ef-assign-to-user-und');
          $('#edit-field-ef-assign-to-user-und').prop( "disabled", false );
          
          $('#accept-button').removeClass("disabled");

          clearInterval(checkExist);
        }
      }, 100);
    });

    $('#edit-field-ef-deliverable-kind-und').once().change(function() {
      $('#edit-field-ef-service-type-und').removeClass("form-disabled");
      var selectedOld = $("input[type='radio'][name='field_ef_service_type[und]']:checked").val();
      var checks = 0;
      var checkSTChange = setInterval(function() {
        var selected = $("input[type='radio'][name='field_ef_service_type[und]']:checked").val();
        if (selected != selectedOld) {
          if (selected === 'undefined') {
            $('#edit-field-ef-service-type-und--2').prop("disabled", false);
            $('#edit-field-ef-service-type-und--3').prop("disabled", false);
            $('#edit-field-ef-service-type-und--2').attr('id','edit-field-ef-service-type-und');
            $('#edit-field-ef-service-type-und--3').attr('id','edit-field-ef-service-type-und');
          }
          else {
            $('#edit-field-ef-service-type-und--2').prop("disabled", true);
            $('#edit-field-ef-service-type-und--3').prop("disabled", true);
            $('#edit-field-ef-service-type-und--2').attr('id','edit-field-ef-service-type-und');
            $('#edit-field-ef-service-type-und--3').attr('id','edit-field-ef-service-type-und');
          }
          clearInterval(checkSTChange);
        } 
        else {
          checks ++;
          if (checks == 150) {
            clearInterval(checkSTChange);
          }
        }
      }, 100);
    });

    console.log(settings.ef_contract.service_type);

    //CONTRACT select id: #edit-field-ef-author-contract-und
    //DELIVERABLE KIND select id: #edit-field-ef-deliverable-kind-und
    $('#edit-field-ef-author-contract-und').once().change(function() {
      var selected = $(':selected', this);
      var nec = selected.closest('optgroup').attr('label');
      var removed_nec = '';
      nec == 'NEC 2014-2018' ? removed_nec = 'NEC 2018-2022' : removed_nec = 'NEC 2014-2018';
      var optgroup_count = $('#edit-field-ef-author-contract-und optgroup').length;
      if (optgroup_count == 2) {
        $("#edit-field-ef-deliverable-kind-und").children().remove("optgroup[label='" + removed_nec + "']");
        $("#edit-field-ef-author-contract-und").children().remove("optgroup[label='" + removed_nec + "']");
      }
    });
  
  }};
})(jQuery);


// First time only
(function ($) {
  $(document).ready(function(){
    var selected = $("input[type='radio'][name='field_ef_service_type[und]']:checked").val();
    if (selected > 0) {
      $('#edit-field-ef-service-type-und input').prop("disabled", true);
    }
    else {
      $('#edit-field-ef-service-type-und input').prop("disabled", false);
    }
  });
})(jQuery);
