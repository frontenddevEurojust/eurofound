(function ($) {
  Drupal.behaviors.efsailabel = {
  attach: function (context, settings) {

    $sai_labels = Drupal.settings.ef_sai_label.sai_labels;
    $lang = Drupal.settings.ef_sai_label.sai_labels_lang;

    $sai_label_input = 'input#edit-field-ef-sai-label-' + $lang + '-0-value';

    $('input#edit-field-ef-sai-label-display-und').once().change(function(){
      $('input#edit-field-ef-sai-label-override-und').val($(this).is(':checked'));
      $('input#edit-field-ef-sai-label-override-und').prop("disabled", !$(this).is(':checked'));
    });

    $('input#edit-field-ef-sai-label-override-und').once().change(function(){
      $($sai_label_input).prop("disabled", !$(this).is(':checked'));
      if (!$(this).is(':checked')) {
        $tid = $('#edit-field-ef-activities option:selected').val();
        $($sai_label_input).val($sai_labels[$tid]);
      }
    });

    $('#edit-field-ef-activities-und').once().change(function(){
      if (!$('input#edit-field-ef-sai-label-override-und').is(':checked')) {
        $tid = $('option:selected',this).val();
        $($sai_label_input).val($sai_labels[$tid]);
      }
    });

  }};
})(jQuery);

(function ($) {
  $(document).ready(function(){

    $sai_labels = Drupal.settings.ef_sai_label.sai_labels;
    $lang = Drupal.settings.ef_sai_label.sai_labels_lang;

    $sai_label_input = 'input#edit-field-ef-sai-label-' + $lang + '-0-value';

    if ($('input#edit-field-ef-sai-label-display-und').is(':checked')) {
      $('input#edit-field-ef-sai-label-override-und').prop('disabled', false);
    } 
    else {
      $('input#edit-field-ef-sai-label-override-und').prop('disabled', true);
    }

    if ($('input#edit-field-ef-sai-label-override-und').is(':checked')) {
      $($sai_label_input).prop('disabled', false);
    } 
    else {
      $($sai_label_input).prop('disabled', true);
    }

    if ($($sai_label_input).val() == '' && $('#edit-field-ef-activities option:selected') != '_none') {
      $tid = $('#edit-field-ef-activities option:selected').val();
      $($sai_label_input).val($sai_labels[$tid]);
    }

  });
})(jQuery);