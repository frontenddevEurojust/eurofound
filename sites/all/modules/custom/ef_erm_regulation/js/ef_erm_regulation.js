(function ($) {
  $(document).ready(function(){

    if (typeof Drupal.settings.ef_erm_regulation !== 'undefined') {
      var $allow_to_edit_notes = Drupal.settings.ef_erm_regulation.allow_to_edit_notes;
      var $key_anticipation = Drupal.settings.ef_erm_regulation.key_anticipation;
      var $key_management = Drupal.settings.ef_erm_regulation.key_management;
    } else {
      var $allow_to_edit_notes = false;
      var $key_anticipation = 20864;
      var $key_management = 20871;
    }

    localStorage.setItem('key_anticipation', $key_anticipation);
    localStorage.setItem('key_management', $key_management);    
    

    /* --- EDIT MODE --- */

  	// --- Display Cost covered by in columns
  	$('#edit-field-erm-fundings-erm-reg-und .form-type-checkbox')
  		.slice(0,4).wrapAll('<div class="fundings-col"></div>');
    
    // --- INVOLVED ACTORS
    // --- Show/Hide textArea - Checked/Unchecked 'OTHER' option
    var check = $('#edit-field-involved-actors-erm-reg-und-13050');
    var other = $('#edit-field-involvement-other-erm-reg');

    if( other.not( ":checked") ){
    	other.css('display', 'none');
    }

    var other_val = $('#edit-field-involvement-other-erm-reg-und-0-value').val();
    if( other_val != '' ){
        check.prop('checked', true);
        other.css('display', 'block');
    }

    check.on('click', function(){
    	if( $(this).is(":checked") ){
    		other.fadeIn();
    	}else{
    		$('#edit-field-involvement-other-erm-reg-und-0-value').val('');
    		other.fadeOut();
    	}
    });

    // --- Hierarchical select
    // - Anticipation
    $('#edit-field-type-phase-erm-reg option').each(function(index, element){
        if ($(element).val() == $key_management || $(element).val() == $key_anticipation) {
            $(element).addClass('phase-erm-reg');
            $(element).attr('disabled', 'true');
        } 
    });

    // --- Internal notes
    // NOTES
    $('#edit-field-native-name-com-erm-reg').addClass('erm-notes');
    $('#edit-field-involvedactors-com-erm-reg').addClass('erm-notes');
    $('#edit-field-article-notes').addClass('erm-notes');
    $('#edit-field-cost-covered-by-notes').addClass('erm-notes');
    $('#edit-field-thresholds-notes').addClass('erm-notes');
    $('#edit-field-sources-notes').addClass('erm-notes');

    $('.erm-notes .form-textarea-wrapper').css('display', 'none');
    $('.erm-notes label').addClass('closed');

    $('.erm-notes label').each(function(i){
        
        $(this).on('click', function(){
            if($(this).hasClass('closed')){
                $(this).next().next('.description').fadeOut();
                $(this).removeClass('closed');
                $(this).addClass('opened');
                $(this).next('.form-textarea-wrapper').slideDown();
             }else{
                $(this).removeClass('opened');
                $(this).addClass('closed');
                $(this).next('.form-textarea-wrapper').slideUp();
                $(this).next().next('.description').fadeIn();
             }            
        });
    });  

    // MEMORIES
    $('#edit-field-name-notes-memory-erm-reg').addClass('erm-notes-memo');
    $('#edit-field-article-notes-memo-erm-reg').addClass('erm-notes-memo');
    $('#edit-field-invol-notes-memo-erm-reg').addClass('erm-notes-memo');
    $('#edit-field-costcov-notes-memo-erm-reg').addClass('erm-notes-memo');
    $('#edit-field-thres-notes-memo-erm-reg').addClass('erm-notes-memo');
    $('#edit-field-sources-notes-memo-erm-reg').addClass('erm-notes-memo');

    // CHECK IF IT'S EMPTY
    $('.erm-notes-memo textarea').each(function(i){
        if($(this).val() == ''){
            $(this).parents().eq(3).css('display', 'none'); 
        }
    });    

    // ADD NEW CONTENT PAGE
    $('.page-node-add-ef-erm-regulation .erm-notes-memo').each(function(i){
        $(this).css('display', 'none');
    });
    $('.page-group-node-add-ef-erm-regulation .erm-notes-memo').each(function(i){
        $(this).css('display', 'none');
    });    
    // EDIT CONTENT PAGE
    if ($allow_to_edit_notes === false) {
      $('.page-node-edit.node-type-ef-erm-regulation .erm-notes-memo textarea').each(function(i){
           $(this).attr('disabled', 'disabled').css('cursor', 'not-allowed');
      });
      $('.page-group-node-edit.node-type-ef-erm-regulation .erm-notes-memo textarea').each(function(i){
          $(this).attr('disabled', 'disabled').css('cursor', 'not-allowed');
      });      
    } else {
      $('.page-node-edit.node-type-ef-erm-regulation .erm-notes-memo textarea').each(function(i){
           $(this).removeAttr('disabled').css('opacity', '1');
      });
      $('.page-group-node-edit.node-type-ef-erm-regulation .erm-notes-memo textarea').each(function(i){
          $(this).removeAttr('disabled').css('opacity', '1');
      });      
    }




    // add new item dialog
    var new_term_dialog = $('<div id="new-type-dialog" class="taxonomy-dialog"></div>');
    
    new_term_dialog.append('<label for="select-phase">Phase:</label>');
    new_term_dialog.append('<select class="form-select" name="select_phase" id="select-phase"></select>');
    new_term_dialog.children('select').append('<option value="">- Select -</option>');
    new_term_dialog.children('select').append('<option value="20864">Anticipation</option>');
    new_term_dialog.children('select').append('<option value="20871">Management</option>');
    new_term_dialog.append('<label for="add-new-term">New type:</label>');
    new_term_dialog.append('<input type="text" class="form-text" maxlength="128" size="40" value="" name="add_new_term" id="add-new-term">');

    new_term_dialog.dialog({
      title: "Add new Category",
      modal: true,
      autoOpen: false,
      width: 600,
      dialogClass: 'ui-dialog-new-type',
      open: function( event, ui ) {
        $(this).children('#add-new-term').prev('label').css('visibility', 'hidden');
        $(this).children('#add-new-term').css('visibility', 'hidden');
        $(this).children('#select-phase').change(function(){
          $('#add-new-term').prev('label').css('visibility', 'visible').fadeIn();
          $('#add-new-term').css('visibility', 'visible').fadeIn();
        });
      },
      buttons: {
        "Cancel": function() {
            $(this).dialog( "close" );
        },
        "Save": function() {
          new_phase = $(this).children('#select-phase').val();
          new_term = $(this).children('#add-new-term').val();
          save_new_term(new_phase, new_term);
          $(this).dialog( "close" );
        }
      }
    });
    // end new item dialog

    // list items dialog
    var list_term_dialog = $('<div id="list-types-dialog" class="taxonomy-dialog"></div>');
    
    list_term_dialog.dialog({
      title: "Edit types",
      modal: true,
      autoOpen: false,
      dialogClass: 'ui-dialog-list-types',
      width: 1000,
      position: { 
        my: "center top+20", 
        at: "center top+20"
      },
      open: function (event, ui) {

        var terms = $(this).data('terms');
        
        $(this).children('#list-terms').remove();
        $(this).children('.edit-term-form').remove();

        $(this).append('<div id="list-terms"></div>');
        var flag = 0;
        for (var index in terms) {
          var item = terms[index];
          for (var k in item) {
            var tid = k;
            var name = item[k];
            if (k == $key_anticipation) {
              flag = 1;
              $(this).children('#list-terms').append('<div class="list-terms-phase"><p><span>'+name+'</span></p><ul class="anticipation"></ul></div>');
            } else if (flag == 1 && k != $key_management) {
              $(this).children('#list-terms').children('.list-terms-phase').children('ul.anticipation').append('<li value="'+tid+'">'+name+'</li>');
            } else if (k == $key_management) {
              flag = 2;
              $(this).children('#list-terms').append('<div class="list-terms-phase"><p><span>'+name+'</span></p><ul class="management"></ul></div>');
            } else if (flag == 2 && k != $key_management) {
              $(this).children('#list-terms').children('.list-terms-phase').children('ul.management').append('<li value="'+tid+'">'+name+'</li>');
            }
          }
        }
        $(this).append('<div class="edit-term-form"></div>');
        $(this).children('.edit-term-form').append('<label for="edit-term">Name:</label>');
        $(this).children('.edit-term-form').append('<input type="text" class="form-text" maxlength="128" size="80" value="" name="edit_term" id="edit-term">');
        $(this).children('.edit-term-form').append('<input type="text" class="form-text" maxlength="128" size="30" value="" name="tid_term" id="tid-term" style="display:none">');

        $('.list-terms-phase li').on('click', function(){
          $('.list-terms-phase li').removeClass('selected').addClass('no-selected');
          $(this).removeClass('no-selected').addClass('selected');
          $('#edit-term').attr('value', $(this).text());
          $('#tid-term').attr('value', $(this).attr('value'));
        });

      },
      buttons: {
        "Cancel": function() {
          $(this).dialog('close');
        },
        "Save": function() {
          var new_name = $(this).children('.edit-term-form').children('#edit-term').val();
          var tid = $(this).children('.edit-term-form').children('#tid-term').val();
          edit_term(new_name, tid);  
          $(this).dialog('close');
        }
      },
    });

    // end list items dialog     

    // Opening the interface to create new type
    var $new_type_button = $('#new-type-popup').on('click', function(){

      $('#edit-select-phase').removeAttr('value');
      $('#edit-add-new-term').removeAttr('value');
      $('#edit-edit-term').removeAttr('value');
      $('#edit-edit-tid').removeAttr('value');

      var new_term = '';
      var new_phase = '';

      new_term_dialog.dialog('open');

    });

    // Opening the interface to edit types
    $('#edit-type-popup').on('click', function(){

      $('#edit-select-phase').removeAttr('value');
      $('#edit-add-new-term').removeAttr('value');
      $('#edit-edit-term').removeAttr('value');
      $('#edit-edit-tid').removeAttr('value');      

      var terms = new Array();
            
      $('#edit-field-type-phase-erm-reg select > option').each(function(index, element){
        if ($(element).val() != '_none') {
          var key = $(element).val();
          var value = $(element).text();
          value = value.replace('-', '');
          var item = {};
          item[key] = value;
          terms.push(item);

        }
      });

      list_term_dialog.data('terms', terms);
      list_term_dialog.dialog('open');

    });       
    
    // Sending information from javascript to PHP and submiting it
    function save_new_term(phase,term){
      
      $('#edit-select-phase').removeAttr('value').attr('value', phase);
      $('#edit-add-new-term').removeAttr('value').attr('value', term);
      $('#edit-term-submit').click();
    }

    function edit_term(name, tid){

      $('#edit-edit-term').removeAttr('value').attr('value', name);
      $('#edit-edit-tid').removeAttr('value').attr('value', tid);
      $('#edit-term-submit').click();      

    }    

                      
    
  });
})(jQuery);




// AJAX
(function ($) {
  Drupal.behaviors.ermregulations = {
  attach: function (context, settings) {

    if (typeof Drupal.settings.ef_erm_regulation !== 'undefined') {
      var $key_anticipation = Drupal.settings.ef_erm_regulation.key_anticipation;
      var $key_management = Drupal.settings.ef_erm_regulation.key_management;
      var $new_name = Drupal.settings.ef_erm_regulation.new_name;
      var $phase = Drupal.settings.ef_erm_regulation.phase;
      var $updated_tid = Drupal.settings.ef_erm_regulation.updated_tid;
    } else {
      var $key_anticipation = localStorage.getItem("key_anticipation");
      var $key_management = localStorage.getItem("key_management");
    }


    /**********************************************************************************/

    // --- Hierarchical select
    // - Anticipation
    $('#edit-field-type-phase-erm-reg option').each(function(index, element){
        if ($(element).val() == $key_management || $(element).val() == $key_anticipation) {
            $(element).addClass('phase-erm-reg');
            $(element).attr('disabled', 'true');
        } 
    });

          
  

  }};
})(jQuery);


