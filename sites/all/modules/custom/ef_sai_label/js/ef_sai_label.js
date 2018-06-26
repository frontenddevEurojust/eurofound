(function ($) {
  Drupal.behaviors.efsailabel = {
  attach: function (context, settings) {

    var s2article = document.getElementsByClassName('node-ef_report-form');
    var s2nc = document.getElementsByClassName('node-ef_national_contribution-form');
    var s2car = document.getElementsByClassName('node-ef_comparative_analytical_report-form');

    if (s2article.length || s2nc.length || s2car.length) {
      s2 = true;
    } 
    else {
      s2 = false;
    }

    if ($('input#edit-field-ef-observatory-und-13188').length && s2) {
      $('input#edit-field-ef-observatory-und-13188').once().change(function(){
        if ($("input#edit-field-ef-observatory-und-13188").is(':checked')) {
          $(".group-ef-sai-page-label").show();
        } 
        else {
          $(".group-ef-sai-page-label").hide();
        }
      });
    }
  }};
})(jQuery);

(function ($) {
  $(document).ready(function(){
    
    var s2article = document.getElementsByClassName('node-ef_report-form');
    var s2nc = document.getElementsByClassName('node-ef_national_contribution-form');
    var s2car = document.getElementsByClassName('node-ef_comparative_analytical_report-form');

    if (s2article.length || s2nc.length || s2car.length) {
      s2 = true;
    } 
    else {
      s2 = false;
    }

    if ($('input#edit-field-ef-observatory-und-13188').length && s2) {
      if ($("input#edit-field-ef-observatory-und-13188").is(':checked')) {
        $(".group-ef-sai-page-label").show();
      } 
      else {
        $(".group-ef-sai-page-label").hide();
      }
    }

    if ($('input#edit-field-ef-sai-label-en-0-value').val().length == 0) {
      $default_sai = Drupal.settings.ef_sai_label.default_sai;
      $('input#edit-field-ef-sai-label-en-0-value').val($default_sai);
    }

  });
})(jQuery);