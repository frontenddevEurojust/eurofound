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
      var checkExist = setInterval(function() {
        if ($("#edit-field-ef-assign-to-user-und--2").length || $("#edit-field-ef-assign-to-user-und--3").length) {
          $('#edit-submit').prop( "disabled", false );
          $('#edit-submit').prop( "class", "form-submit" );
          $('#edit-save-edit').prop( "disabled", false );
          $('#edit-save-edit').prop( "class", "form-submit" );
          $('#edit-field-ef-assign-to-user-und--2').attr('id','edit-field-ef-assign-to-user-und');
          $('#edit-field-ef-assign-to-user-und--3').attr('id','edit-field-ef-assign-to-user-und');
          $('#edit-field-ef-assign-to-user-und').prop( "disabled", false );
          clearInterval(checkExist);
        }
      }, 100);
    });

   // Review and repair contracts
    $('.contract-correct-link').on('click', function(e){

      e.preventDefault();

      var full_link = $(this).attr('href');
      var contract_link = full_link.replace("correct-groups-and-contracts", "correct-contracts");

      correct_dialog.data('full_link', full_link);
      correct_dialog.data('contract_link', contract_link);
      correct_dialog.dialog('open');

    });

  }};
})(jQuery);
