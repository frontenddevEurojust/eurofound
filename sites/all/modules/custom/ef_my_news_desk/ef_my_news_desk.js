// AJAX
(function ($) {
  Drupal.behaviors.mynewsdesk = {
  attach: function (context, settings) {
    if (typeof Drupal.settings.ef_my_news_desk !== 'undefined') {
      //Variables passed by PHP. Defined in submit function.
      var imported_values = Drupal.settings.ef_my_news_desk.table_data;
    }
    for (var property in imported_values) {
      if (imported_values.hasOwnProperty(property)) {
        var imported_cell = $('.form-item-table-' + imported_values[property].field_ef_mynewsdesk_id_value).parent().parent().children().last();
        $(imported_cell).addClass("fa fa-check checked-news");
      }
    }
  }};
})(jQuery);


