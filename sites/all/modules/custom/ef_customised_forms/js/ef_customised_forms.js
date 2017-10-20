(function ($) {
  $(document).ready(function(){
    $('.node-form').submit(function(){
      $('#edit-submit').prop( "disabled", true );
      $('#edit-submit').prop( "class", "form-submit-disabled" );
      $('#edit-save-edit').prop( "disabled", true );
      $('#edit-save-edit').prop( "class", "form-submit-disabled" );
    });
  });
})(jQuery);