(function ($) {
  Drupal.behaviors.efsailabel = {
  attach: function (context, settings) {
    $('input#edit-field-ef-sai-label-override-und').once().change(function(){
      $("input#edit-field-ef-sai-label-en-0-value").prop("disabled", !$(this).is(':checked'));
    });
  }};
})(jQuery);

(function ($) {
  $(document).ready(function(){
    if ($("input#edit-field-ef-sai-label-override-und").is(':checked')) {
      $("input#edit-field-ef-sai-label-en-0-value").prop("disabled", false);
    } 
    else {
      $("input#edit-field-ef-sai-label-en-0-value").prop("disabled", true);
    }
  });
})(jQuery);