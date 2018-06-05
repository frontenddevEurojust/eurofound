(function ($) {
  Drupal.behaviors.efsailabel = {
  attach: function (context, settings) {
    $('input#edit-field-ef-sai-label-override-und').once().change(function(){
      $("input#edit-field-ef-sai-label-en-0-value").prop("disabled", !$(this).is(':checked'));
    });

    $('input#edit-field-ef-observatory-und-13188').once().change(function(){
      if ($("input#edit-field-ef-observatory-und-13188").is(':checked')) {
        $(".group-ef-sai-page-label").show();
      } 
      else {
        $(".group-ef-sai-page-label").hide();
      }
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
    if ($("input#edit-field-ef-observatory-und-13188").is(':checked')) {
      $(".group-ef-sai-page-label").show();
    } 
    else {
      $(".group-ef-sai-page-label").hide();
    }
  });
})(jQuery);