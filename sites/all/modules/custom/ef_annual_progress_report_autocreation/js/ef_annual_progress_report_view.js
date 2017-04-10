(function ($) {
  Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
    $('#edit-secondary').addClass('collapsed');
  }};
})(jQuery);
