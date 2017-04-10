(function ($, Drupal) {

  Drupal.behaviors.efDeliverableKindField = {
    attach: function(context, settings) {
      // Get your Yeti started.
		$(".form-item-field-ef-deliverable-kind-und-0-tid select").first().attr('disabled', 'disabled');
    }
  };

})(jQuery, Drupal);
