(function ($) {
  $(document).ready(function(){

    if( $('#edit_field_ef_deliverable_kind_tid_chosen .chosen-single span').text() == 'IR entry' ){
      $('#edit-ir-entry').addClass('visible');
    }else{
      $('#edit-ir-entry').addClass('unvisible');
      $('#edit-ir-entry').css('display', 'none');

      $('#edit-active-0').prop('checked', true);
    }


    $('#edit_field_ef_deliverable_kind_tid_chosen').children().each(function(index){
      $(this).on('click', function(){

        if( $('#edit_field_ef_deliverable_kind_tid_chosen .chosen-single span').text() == 'IR entry' ){

          $('#edit-ir-entry').removeClass('unvisible');
          $('#edit-ir-entry').addClass('visible');
          $('#edit-ir-entry').fadeIn('slow');

        }else{

          $('#edit-ir-entry').removeClass('visible');
          $('#edit-ir-entry').addClass('unvisible');
          $('#edit-ir-entry').fadeOut('slow');

          $('#edit-active-0').prop('checked', true);

        }

      });
    });
  });
  $(document).ready(function() {
    // datepicker date format
    $("#edit-created-min").datepicker('option', 'dateFormat', 'dd MM yy');
    $("#edit-created-max").datepicker('option', 'dateFormat', 'dd MM yy');

    $("#edit-field-ef-requested-on-value-min-datepicker-popup-0").datepicker('option', 'dateFormat', 'Y-m-d');
    $("#edit-field-ef-requested-on-value-max-datepicker-popup-0").datepicker('option', 'dateFormat', 'Y-m-d');

   /* $("#edit-created-min").datepicker({ dateFormat: 'dd/mm/yy' });
    $("#edit-created-max").datepicker({ dateFormat: 'dd/mm/yy' }); */
  });

   $(document).ready(function() {
    // Hide or show the data export icon depending on there are results or there isn't
    if($('.view-empty').length) {
      $('.feed-icon').addClass('hide');
    }else {
      $('.feed-icon').removeClass('hide');
    }
  });
})(jQuery);
