
var qText;

(function ($) {
  Drupal.behaviors.ef_qrr = {
    attach: function (context, settings) {

      jQuery('.page-admin-content-ef-qrr input#select-all').click(function() {
         var newstatus = jQuery(this).prop('checked');
         jQuery("form#ef-qrr-quality-rating input[type='checkbox'][id^='select_']").prop('checked', newstatus);
         jQuery("form#ef-qrr-quality-rating input[type='hidden'][name='allnodes']").val(newstatus ? 1:0);
         jQuery("form#ef-qrr-status-actions input[type='checkbox'][id^='select_']:enabled").prop('checked', newstatus);
         jQuery("form#ef-qrr-comments-documents input[type='checkbox'][id^='select_']:enabled").prop('checked', newstatus);
         jQuery("form#ef-qrr-view-attachments input[type='checkbox'][id^='select_']:enabled").prop('checked', newstatus);
         _ef_qrr_update_afp_button();
         _ef_qrr_update_qr_buttons();
         _ef_qrr_update_comdoc_buttons();
      });

      // Disable on load dynamic buttons
      _ef_qrr_set_button('download', false );
      _ef_qrr_set_button('download_selected', false);
      _ef_qrr_set_button('bulk_rating', false);
      _ef_qrr_set_button('bulk_afp', false);

      // Tooltips
      qText = settings.ef_qrr.qrrTooltip;
    }

  };
})(jQuery);

jQuery(document).ready(function(){

  var form_pages=window.location.pathname.split("/");
  var pathname_form=form_pages[form_pages.length-2];

  if(pathname_form != "survey-data"){
    jQuery('fieldset.qrr-fieldset .qrr-info, '+
      '.page-admin-content-ef-qrr form#ef-qrr-quality-rating table.sticky-table .qrr-info, '+
      '.page-admin-content-ef-qrr form#ef-qrr-quality-rating table.sticky-header .qrr-info'
      ).qtip({
        content: {
          text: qText,
        },
        position: {
          my: 'top right',
          at: 'bottom left',
        }
    });

    // Add event handlers
    jQuery("form#ef-qrr-quality-rating input[type='checkbox'][id^='select_']").once().click(function() {
        _ef_qrr_update_qr_buttons();
    });

    jQuery("form#ef-qrr-status-actions input[type='checkbox'][id^='select_']").once().click(function() {
        _ef_qrr_update_afp_button();
    });

    jQuery("form#ef-qrr-comments-documents input[type='checkbox'][id^='select_']").once().click(function() {
        _ef_qrr_update_comdoc_buttons();
    });

    jQuery("form#ef-qrr-view-attachments input[type='checkbox'][id^='select_']").once().click(function() {
        _ef_qrr_update_comdoc_buttons();
    });
  }
});

  function _ef_qrr_update_qr_buttons() {
      var checked = jQuery("form#ef-qrr-quality-rating input[type='checkbox'][id^='select_']:checked").size();
      _ef_qrr_set_button('download', (checked >=1 ));
      _ef_qrr_set_button('bulk_rating', (checked >= 2));
  }

  function _ef_qrr_update_comdoc_buttons() {

     if ( jQuery('body').hasClass('page-admin-content-ef-qrr-view-attachments') ) {
         var checked = jQuery("form#ef-qrr-view-attachments input[type='checkbox'][id^='select_']:checked").size();
         _ef_qrr_set_button('download_selected', (checked >= 1));
     }

     if ( jQuery('body').hasClass('page-admin-content-ef-qrr-comments') ) {
         var checked = jQuery("form#ef-qrr-comments-documents input[type='checkbox'][id^='select_']:checked").size();
         _ef_qrr_set_button('download_selected', (checked >= 1));
     }
  }

  function _ef_qrr_update_afp_button() {
      var checked = jQuery("form#ef-qrr-status-actions input[type='checkbox'][id^='select_']:checked").size();
      _ef_qrr_set_button('bulk_afp', (checked >= 2));
  }

  function _ef_qrr_set_button( id, enabled ) {
     if ( enabled ) {
         jQuery("input#" + id + ", button#" + id ).removeAttr('disabled');
         jQuery("input#" + id + ", button#" + id ).removeClass('form-button-disabled');
     }
     else {
         jQuery("input#" + id + ", button#" + id ).attr('disabled', 'disabled');
         jQuery("input#" + id + ", button#" + id ).addClass('form-button-disabled');
     }
  }



