// First time only
(function ($) {
  $(document).ready(function(){

    var $current_state = Drupal.settings.ef_contract.current_state;
    var $assigned_user = Drupal.settings.ef_contract.assigned_user_name;
    var $service_type = Drupal.settings.ef_contract.service_type;
    var $moderation_state_description = 'Current state: ' + $current_state;
    var $revision_deadline = Drupal.settings.ef_contract.revision_deadline;
    var $rd_label = Drupal.settings.ef_contract.rd_label;
    /* --- Annual Progress Report: Pseudo Mandatory fields flag -- */
    var $apr_flag = Drupal.settings.ef_contract.apr_mandatory_warning;

    if(typeof $assigned_user != 'undefined'){
        $moderation_state_description += '<br>' + 'Assigned user: ' + $assigned_user;
    }

    // CREATE/EDIT FORM
    $('.node-form .vertical-tabs .vertical-tabs-list li:nth-child(1) .summary').append($moderation_state_description);

    $('#edit-group_ef_publishing_options .fieldset-description')
        .prepend('<h4 class="group-ef-publishing-options-label">Moderation & Assignment</h4>');

    // VIEW FORM
    if ($rd_label != undefined) {
        $('#workbench-moderation-moderate-form')
            .append('<div class="revision-deadline-wrapper"><label>'+$rd_label+': </label><span class="revision-deadline">'+$revision_deadline+'</span></div>');
    }

    if ($apr_flag != undefined && $apr_flag != false) {
        $('#workbench-moderation-moderate-form')
            .append('<p class="apr-pseudomandatory-warning"><span>T</span>here are still empty some mandatory fields. <span>P</span>lease, fill in them before changing the state to submitted.</p>');
    }
    
    if(typeof $service_type != 'undefined'){
      $('#edit-field-ef-service-type-und-' + $service_type).prop("checked", true);
    }

  });
})(jQuery);

// AJAX
(function ($) {
  Drupal.behaviors.efcontract = {
  attach: function (context, settings) {

    $('#edit-group_ef_publishing_options select option').each(function(){

        if($(this).val() == 'Editor' || $(this).val() == 'External Editor' || $(this).val() == 'Author' || $(this).val() == 'Quality Manager'){
            $(this).addClass('assign-to-user-role-label');
            $(this).attr('disabled','disabled');
        }

    });

    $('select#edit-state').change(function() {
      $('#edit-button').prop( "disabled", true );
      $('#edit-button').prop( "class", "form-submit-disabled" );
      $('#edit-field-ef-assign-to-user').prop( "disabled", true );
      var checkExist = setInterval(function() {
        if ($("#edit-field-ef-assign-to-user--2").length || $("#edit-field-ef-assign-to-user--3").length) {
          $('#edit-button').prop( "disabled", false);
          $('#edit-button').prop( "class", "form-submit" );
          $('#edit-field-ef-assign-to-user--2').attr('id','edit-field-ef-assign-to-user');
          $('#edit-field-ef-assign-to-user--3').attr('id','edit-field-ef-assign-to-user');
          $('#edit-field-ef-assign-to-user').prop( "disabled", false );
          clearInterval(checkExist);
        }
      }, 100);
    });

    // PATCH 1.1
    $('select#edit-field-ef-moderation-state').change(function(){
      $(this).children('option').each(function(index, element){
        if ($(element).attr('selected')) {
          if ($(element).val() == 'proposal' || $(element).val() == 'submitted_qr') {
            $('.proposal-warning').removeClass('element-invisible');
          } else {
            $('.proposal-warning').addClass('element-invisible');
          }
        }
      });

    });
    // PATCH 1.1

  }};
})(jQuery);

