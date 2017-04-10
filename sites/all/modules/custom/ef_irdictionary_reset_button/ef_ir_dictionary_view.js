// AJAX
(function ($) {
  Drupal.behaviors.irdictionary = {
  attach: function (context, settings) {

    if (typeof Drupal.settings.ef_irdictionary_reset_button !== 'undefined') {
      //Variables passed by PHP. Defined in submit function.
      var combine = Drupal.settings.ef_irdictionary_reset_button.title;
      var date = Drupal.settings.ef_irdictionary_reset_button.date;
      var check = Drupal.settings.ef_irdictionary_reset_button.checkbox;
    }


    // Adjust checkbox placement for filtering by title
    $('.form-item-checkbox-title').detach().appendTo('#edit-combine-wrapper div.views-widget');

    // Layer for searched elements. Every search will create a tag in this layer
    $('.view-display-id-page > div.attachment').after("<div class='search-items'></div>");

     // Replace problematic URL in glossary
    $('.glossary .view-content > span').each(function(index,value){
      var href = $(this).find('a').attr('href');
      href = href.replace('checkbox_title=0','');
      $(this).find('a').attr('href',href);
    })

     // Replace problematic URL in pager 
     var previous_pager_item = $('.pager-previous.first a');
     if(typeof previous_pager_item[0] != 'undefined'){
      var previous_pager_href = $('.pager-previous.first a').attr('href');
      previous_pager_href = previous_pager_href.replace('checkbox_title=0','');
      $('.pager-previous.first a').attr('href',previous_pager_href);
     }

     var next_pager_item = $('.pager-next.last a');
     if(typeof next_pager_item[0] != 'undefined'){
      var next_pager_href = $('.pager-next.last a').attr('href');
      next_pager_href = next_pager_href.replace('checkbox_title=0','');
      $('.pager-next.last a').attr('href',next_pager_href);
     }

    // Titles for each way of searching in the view
    // Search
    $('#views-exposed-form-ef-ir-dictionary-page > div').prepend('<p class="search-panel">Search</p>');
    //Browse
    $('.view-id-ef_ir_dictionary .attachment').prepend('<p class="browse-panel">Browse</p>');


    // Variable definition
    var pathname = window.location.pathname;
    var url = window.location.href;
    if(url.indexOf("/observatories/eurwork/industrial-relations-dictionary/") != -1){
      var letter  = url.substring(url.indexOf("?") - 1,url.indexOf("?"));
      //Set active letter
      $('.view-content span').each(function(index,value){
        if($(this).find('a').text() === letter.toUpperCase())
          $(this).find('a').addClass('active');
      });
    }
    var parameters = url.substring(url.indexOf('?') + 1,url.length);

    if( combine || date || letter){
      $('.search-items').text('Search terms:');
    }

    if(letter){
      $('div.search-items').append("<span>" + letter.toUpperCase() + "<a class='close-letter-tag' id='" + letter + "' href='javascript:'>x</a></span>");
    }
    if(combine){
      $('div.search-items').append("<span>" + combine + "<a class='close-tag' id='" + combine + "' href='javascript:'>x</a></span>");
    }

    if(date){
      var d1 = 2016 - date;
      $('div.search-items').append("<span>" + d1 + "<a class='close-date-tag' id = '" + d1 +"' href='javascript:'>x</a></span>");
    }

    // Add 'All' element to the glossary and delete each letter's number of results
    $('div.view-display-id-attachment .view-content').append("<span class='views-summary all'><a class='close-letter-tag' href='javascript:'>All</a></span>");
    $('.views-summary.views-summary-unformatted').each(function(index,value){
      var text = $(this).html();
      var result = text.substring(0, text.indexOf('('));
      $(this).html(result);
    });

    // Title event
    $('span .close-tag').click(function(){
      // Replace all blank spaces with + for multiple words searches
      var term = $(this).attr('id').replace(/\s/g,'+');
      parameters = parameters.replace(term, '');

      if(parameters.indexOf('&page=')){
        window.location.href = 'http://' + window.location.host + pathname + '?' + parameters;
      }
    })

    // Glossary event
    $('span .close-letter-tag').click(function(){
      pathname = pathname.substring(0,pathname.length - 2);
      if(parameters.indexOf('&page=')){
        window.location.href = 'http://' + window.location.host + pathname + '?' + parameters;
      }
    })

    // Dates event
    $('span .close-date-tag').click(function(){
      var published_at = 2016 - $(this).attr('id');

      parameters = parameters.replace(published_at,'');

      if(parameters.indexOf('&page=')){
        window.location.href = 'http://' + window.location.host + pathname + '?' + parameters;
      }
    })
  }};
})(jQuery);



