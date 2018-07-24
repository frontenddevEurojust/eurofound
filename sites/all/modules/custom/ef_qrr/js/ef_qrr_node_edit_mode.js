
jQuery(document).ready(function(){
// ISSUE #3590

  // Disable Approve for payment field
  jQuery("#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0").attr('disabled', 'disabled');
  
  var pathname = window.location.pathname;
  var aux = pathname.replace("/node/", "");
  var nid = aux.replace("/edit",""); 
  
  // Array to check if any of the ratings exist. one position per row.
  var clicked = [false,false,false,false,false];

  for (var i = 0; i <= clicked.length; i++) {
    // Control if node rating value exists or not and act accordingly.
    jQuery('.form-item-qrr-rating-' + i +' .fivestar-widget-5').children().each(function(index,element){ 
      if(jQuery(element).hasClass('on')){
        var classname = jQuery(element)[0].parentElement.parentElement.className;
        var selected = classname.substr(classname.length - 1,classname.length);
        clicked[selected-1] = true;
        jQuery("#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0").removeAttr('disabled');
        jQuery('div.form-item-qrr-comments').once().before("<div id='qrr-form'><i>Go to <a href='#field-ef-approved-for-payment-add-more-wrapper'>Approved for Payment</a>.</i></div>");   
      }
    });
  }  
  if(clicked.indexOf(true) == -1){
    if(jQuery('#edit-field-ef-approved-for-payment-und-0-value .description .has-tip'))
      jQuery('#edit-field-ef-approved-for-payment-und-0-value .description .has-tip').replaceWith("<div id='approved-for-payment-form'><i>The content needs to be rated before approving it for payment. Go to <a href='#qrr_rating_fs_" + nid + "'>Quality Assessment</a>.</i></div>");
    }
  for (var i = 0; i <= clicked.length; i++) {
    // Add click event to starts and update array for chosen rows
    jQuery('.form-item-qrr-rating-' + i +' .fivestar-widget-5').find('a[title^="Give"]').click(function(event){
      var classname = jQuery(this)[0].parentElement.parentElement.parentElement.className;
      var selected = classname.substr(classname.length - 1,classname.length); 
      clicked[selected-1] = true;
      if(clicked.indexOf(true) > -1){  
        jQuery("#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0").removeAttr('disabled');
        jQuery('#approved-for-payment-form').remove();
        if(jQuery('#qrr-form').length == 0)
          jQuery('div.form-item-qrr-comments').before("<div id='qrr-form'><i>Go to <a href='#field-ef-approved-for-payment-add-more-wrapper'>Approved for Payment</a>.</i></div>");
      }
    });

    // Add click even to cancel button and update array for chosen rows
  jQuery('.form-item-qrr-rating-' + i +' .fivestar-widget-5').find('a[title^="Cancel"]').click(function(event){
    var classname = jQuery(this)[0].parentElement.parentElement.parentElement.className;
    var selected = classname.substr(classname.length - 1,classname.length);
    clicked[selected-1] = false;
    if(clicked.indexOf(true) == -1){
      jQuery("#edit-field-ef-approved-for-payment-und-0-value-datepicker-popup-0").attr('disabled', 'disabled');
      jQuery('#qrr-form').remove();
      jQuery('#edit-field-ef-approved-for-payment-und-0-value .description').append("<div id='approved-for-payment-form'><i>The content needs to be rated before approving it for payment. Go to <a href='#qrr_rating_fs_" + nid + "'>Quality Assessment</a>.</i></div>");
      }
  });        
  }
});