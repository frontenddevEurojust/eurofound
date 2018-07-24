  (function ($) {
  $(document).ready(function(){

    if (typeof Drupal.settings.ef_erm_support_instrument !== 'undefined') {
      var $allow_to_edit_notes = Drupal.settings.ef_erm_support_instrument.allow_to_edit_notes;
      var $key_anticipation = Drupal.settings.ef_erm_support_instrument.key_anticipation;
      var $key_management = Drupal.settings.ef_erm_support_instrument.key_management;
    } else {
      var $allow_to_edit_notes = false;
      var $key_anticipation = 20932;
      var $key_management = 20933;
    }



    localStorage.setItem('key_anticipation', $key_anticipation);
    localStorage.setItem('key_management', $key_management);    
    
    //Strange behavior: phase filter does not work unless we have both(standard and selective)
    //obviously, one of them, selective, will be hidden
    $('#edit-field-phase-erm-si-value-selective-wrapper').css('display','none');

    // type depends of the phase
    var phase = '';
    var num_types = 0;

    $('.anticipation-items-wrapper input.form-checkbox').each(function(index, element){

      if ($(element).is(":checked")) { 
        phase = 'Anticipation';
        $('.management-items-wrapper').addClass('disabled'); 
        num_types++;
        
      }
      $(element).on('click', function(){

        if ($(this).is(":checked")) {
          num_types++;
          
        } else {
          num_types--;
          
        }
        
        if ( num_types == 0 ) {
          $('.management-items-wrapper input.form-checkbox').prop('disabled', false).parents(".management-items-wrapper").removeClass('disabled');
          phase = '';
        } else {
          $('.management-items-wrapper input.form-checkbox').prop('disabled', true).parents(".management-items-wrapper").addClass('disabled');
          phase = 'Anticipation';
        }

        localStorage.setItem('phase', phase);
        localStorage.setItem('num_types', num_types);
                

      });

    });
    $('.management-items-wrapper input.form-checkbox').each(function(index, element){

      if ($(element).is(":checked")) { 
        phase = 'Management';
        $('.anticipation-items-wrapper').addClass('disabled'); 
        num_types++;
        
      }
      $(element).on('click', function(){

        if ($(this).is(":checked")) {
          num_types++;
          
        } else {
          num_types--;
          
        }
        
        if ( num_types == 0 ) {
          $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', false).parents(".anticipation-items-wrapper").removeClass('disabled');
          phase = '';
        } else {
          $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', true).parents(".anticipation-items-wrapper").addClass('disabled');
          phase = 'Management';
        }

        localStorage.setItem('phase', phase);
        localStorage.setItem('num_types', num_types);
        

      });

    });

    localStorage.setItem('phase', phase);
    localStorage.setItem('num_types', num_types);    

    if ( phase === 'Anticipation' ) {
      $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', false).parents('anticipation-items-wrapper').removeClass('disabled');
      $('.management-items-wrapper input.form-checkbox').prop('disabled', true).parents('management-items-wrapper').addClass("disabled");
    } else if ( phase === 'Management' ) {
      $('.management-items-wrapper input.form-checkbox').prop('disabled', false).parents('management-items-wrapper').removeClass('disabled');
      $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', true).parents('anticipation-items-wrapper').addClass("disabled");
    } else {
      $('.management-items-wrapper input.form-checkbox').prop('disabled', false).parents('management-items-wrapper').removeClass('disabled');
      $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', false).parents('anticipation-items-wrapper').removeClass('disabled');
    }


    /* igarcia hardcoding */
    // --- Funding
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20938').addClass('european-funds-options');
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20939').addClass('european-funds-options');
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20940').addClass('european-funds-options');
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20941').addClass('european-funds-options');
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20942').addClass('european-funds-options');
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20943').addClass('european-funds-options');
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20944').addClass('european-funds-options');
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20945').addClass('european-funds-options');

    $('.european-funds-options').wrapAll('<div class="european-funds-options-wrap"></div>');
    // check second level selected
    $('.european-funds-options-wrap .european-funds-options input').each(function(i){
      if( $(this).is(':checked') ){
        $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20937').prop('checked', true);
      }

    });
    // hide or display childrens
    if( $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20937 > input').is(":checked") ){
      $('.european-funds-options-wrap').css('display', 'block');
    }else{
      $('.european-funds-options-wrap').css('display', 'none');
      $('.european-funds-options-wrap input').prop('checked', false);
    }
    // check event
    $('#edit-field-funding-erm-si .form-item-field-funding-erm-si-und-20937').on('click', function(){
      if($(this).children('input').is(":checked")){
        $(this).next('.european-funds-options-wrap').slideDown();
      }else{
        $(this).next('.european-funds-options-wrap').slideUp();
        $('.european-funds-options-wrap input').prop('checked', false);
      }
    });
    /* end igarcia hardcoding */



    // --- Involved actors
    $('#node_erm_support_instrument_form_group_involved_actors_erm_si .form-item .form-textarea-wrapper').each(function(i){
      var $text = $(this).children('.text-full').val();
      if( $text == '' ){
        $(this).css('display', 'none');
        $(this).prev('label').addClass('inv-act-closed');
      }else{
         $(this).prev('label').addClass('inv-act-open');
      }

    });
    $('#node_erm_support_instrument_form_group_involved_actors_erm_si .form-item label').on('click', function(){
      $(this).next('.form-textarea-wrapper').slideToggle();
      if($(this).hasClass('inv-act-closed')){
        $(this).removeClass('inv-act-closed');
        $(this).addClass('inv-act-open');
      }else{
        $(this).removeClass('inv-act-open');
        $(this).addClass('inv-act-closed');
      }
    });


    // --- Internal notes
    
    $('#edit-field-name-notes-erm-si').addClass('erm-notes');
    $('#edit-field-involved-actors-notes').addClass('erm-notes');
    $('#edit-field-funding-notes-erm-si').addClass('erm-notes');
    $('#edit-field-sources-notes-erm-si').addClass('erm-notes');

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
    $('#edit-field-name-notes-memory-erm-si').addClass('erm-notes-memo');
    $('#edit-field-involved-actors-notes-memo').addClass('erm-notes-memo');
    $('#edit-field-funding-notes-memo-si').addClass('erm-notes-memo');
    $('#edit-field-sources-notes-memory').addClass('erm-notes-memo');

    // CHECK IF IT'S EMPTY
    $('.erm-notes-memo').each(function(index, element){
      if($(this).children().children().children().children().val() == ''){
        $(element).css('display', 'none');
      }
    });

    // ADD NEW CONTENT PAGE
    $('.page-node-add-erm-support-instrument .erm-notes-memo').each(function(i){
        $(this).css('display', 'none');
    });
    $('.page-group-node-add-erm-support-instrument .erm-notes-memo').each(function(i){
        $(this).css('display', 'none');
    });    
    // EDIT CONTENT PAGE
    if ($allow_to_edit_notes === false) {
      $('.page-node-edit.node-type-erm-support-instrument .erm-notes-memo textarea').each(function(i){
          $(this).attr('disabled', 'disabled').css('cursor', 'not-allowed');
      });
      $('.page-group-node-edit.node-type-erm-support-instrument .erm-notes-memo textarea').each(function(i){
          $(this).attr('disabled', 'disabled').css('cursor', 'not-allowed');
      });      
    } 
 

  /* 
   * new edit/add 
   */

    // add new item dialog
    var new_term_dialog = $('<div id="new-type-dialog" class="taxonomy-dialog"></div>');
    
    new_term_dialog.append('<label for="select-phase">Phase:</label>');
    new_term_dialog.append('<select class="form-select" name="select_phase" id="select-phase"></select>');
    new_term_dialog.children('select').append('<option value="">- Select -</option>');
    new_term_dialog.children('select').append('<option value="20932">Anticipation</option>');
    new_term_dialog.children('select').append('<option value="20933">Management</option>');
    new_term_dialog.append('<label for="add-new-term">New type:</label>');
    new_term_dialog.append('<input type="text" class="form-text" maxlength="128" size="40" value="" name="add_new_term" id="add-new-term">');

    new_term_dialog.dialog({
      title: "Add new Type",
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

    // edit item dialog
    var edit_term_dialog = $('<div id="edit-type-dialog" class="taxonomy-dialog"></div>');

    edit_term_dialog.dialog({
      title: "Edit term",
      modal: true,
      autoOpen: false,
      dialogClass: 'ui-dialog-edit-type',
      width: 500,
      open: function(event, ui ) {
        var name = $(this).data('name');
        var tid = $(this).data('tid');

        $(this).children('label').remove();
        $(this).children('input').remove();
        $(this).append('<label for="edit-term">Name:</label>');
        $(this).append('<input type="text" class="form-text" maxlength="128" size="40" value="'+name+'" name="edit_term" id="edit-term">');
        $(this).append('<input type="text" class="form-text" maxlength="128" size="40" value="'+tid+'" name="tid_term" id="tid-term" style="display:none">');        

      },
      buttons: {
        "Cancel": function() {
            $('#edit-type-popup').removeClass('edit-mode-on').addClass('edit-mode-off');
            $('#edit-field-type-erm-si-und .form-type-checkbox').removeClass('edit-mode-on').addClass('edit-mode-off');
            $('#edit-field-type-erm-si-und .form-type-checkbox.edit-mode-off label.option').each(function(index, element){
              $(element).prev().css('display', 'inline');
              $(element).css('display', 'inline');
              $(element).next().remove();
            });                
            $(this).dialog( "close" );
        },
        "Save": function() {
          var new_name = $(this).children('#edit-term').val();
          var tid = $(this).data('tid');
          edit_term(new_name, tid);
          $('#edit-type-popup').removeClass('edit-mode-on').addClass('edit-mode-off');
          $(this).dialog( "close" );
        }
      }
    });
    // end edit item dialog       

    var $new_type_button = $('#new-type-popup').on('click', function(){

      $('#edit-select-phase').removeAttr('value');
      $('#edit-add-new-term').removeAttr('value');
      $('#edit-edit-term').removeAttr('value');
      $('#edit-edit-tid').removeAttr('value');

      var new_term = '';
      var new_phase = '';

      new_term_dialog.dialog('open');

    });

    var $edit_type_button = $('#edit-type-popup').on('click', function(){

      $('#edit-select-phase').removeAttr('value');
      $('#edit-add-new-term').removeAttr('value');
      $('#edit-edit-term').removeAttr('value');
      $('#edit-edit-tid').removeAttr('value');

       if ($('.anticipation-items-wrapper').hasClass('edit-mode-on')) {
            $('.anticipation-items-wrapper').removeClass('edit-mode-on');
       }else{
            $('.anticipation-items-wrapper').addClass('edit-mode-on');
       }

       if ($('.management-items-wrapper').hasClass('edit-mode-on')) {
            $('.management-items-wrapper').removeClass('edit-mode-on');
       }else{
            $('.management-items-wrapper').addClass('edit-mode-on');
       }



      if ($(this).hasClass('edit-mode-off')) {
        $(this).prepend( '<b class="mode-active">Mode </b>');
        $(this).removeClass('edit-mode-off').addClass('edit-mode-on');
        $('#edit-field-type-erm-si-und .form-type-checkbox').removeClass('edit-mode-off').addClass('edit-mode-on');
      } else {
        $('.mode-active').remove();  
        $(this).removeClass('edit-mode-on').addClass('edit-mode-off');
        $('#edit-field-type-erm-si-und .form-type-checkbox').removeClass('edit-mode-on').addClass('edit-mode-off');
      }

      if ($('#edit-field-type-erm-si-und .form-type-checkbox').hasClass('edit-mode-on')) {
        $('#edit-field-type-erm-si-und .form-type-checkbox.edit-mode-on label.option').each(function(index, element){
          var term = $(element).text();
          term = term.replace('-', '');
          $(element).prev().css('display', 'none');
          $(element).css('display', 'none');
          $(element).after('<span class="edit-type-term">' + term + '</span>');

        }); 
      }

      if ($('#edit-field-type-erm-si-und .form-type-checkbox').hasClass('edit-mode-off')) {

        $('#edit-field-type-erm-si-und .form-type-checkbox.edit-mode-off label.option').each(function(index, element){
          $(element).prev().css('display', 'inline');
          $(element).css('display', 'inline');
          $(element).next().remove();
        });

      }

      $('#edit-field-type-erm-si-und .form-type-checkbox.edit-mode-on .edit-type-term').on('click', function(){

        $('#edit-field-type-erm-si-und .form-type-checkbox.edit-mode-on .edit-type-term').each(function(i,e){
          $(e).removeClass('active');
        });
        
        var name = $(this).text();
        var tid = $(this).parent().children('.form-checkbox').val();
                        
        $(this).addClass('active');

        edit_term_dialog.data('name', name);
        edit_term_dialog.data('tid', tid);
        edit_term_dialog.dialog('open');

      });            


    });

     

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

  // end new


  });

})(jQuery);

// AJAX
(function ($) {
  Drupal.behaviors.supportinstruments = {
  attach: function (context, settings) {

    if (typeof Drupal.settings.ef_erm_support_instrument !== 'undefined') {
      var $key_anticipation = Drupal.settings.ef_erm_support_instrument.key_anticipation;
      var $key_management = Drupal.settings.ef_erm_support_instrument.key_management;
      var $new_name = Drupal.settings.ef_erm_support_instrument.new_name;
      var $phase = Drupal.settings.ef_erm_support_instrument.phase;
      var $updated_tid = Drupal.settings.ef_erm_support_instrument.updated_tid;
    } else {
      var $key_anticipation = localStorage.getItem("key_anticipation");
      var $key_management = localStorage.getItem("key_management");
    }

    var split = -1;

    /**********************************************************************************/

    if (localStorage.getItem("phase") !== null) {
      var phase = localStorage.getItem("phase");
      if (phase == 'Anticipation') {
        $('#edit-field-type-erm-si-und .management-items-wrapper').addClass('disabled'); 
      } else if (phase == 'Management') {
        $('#edit-field-type-erm-si-und .anticipation-items-wrapper').addClass('disabled'); 
      } else {
        $('#edit-field-type-erm-si-und .anticipation-items-wrapper').removeClass('disabled'); 
        $('#edit-field-type-erm-si-und .management-items-wrapper').removeClass('disabled'); 
      }
      
    }
    if (localStorage.getItem("num_types") !== null) {
      var num_types = localStorage.getItem("num_types");
    }


    $('.anticipation-items-wrapper input.form-checkbox').on('click', function(){

      if ($(this).is(":checked")) {
        num_types++;
        
      } else {
        num_types--;
       
      }
      
      if ( num_types == 0 ) {
        $('.management-items-wrapper input.form-checkbox').prop('disabled', false).parents(".management-items-wrapper").removeClass('disabled');
        phase = '';
      } else {
        $('.management-items-wrapper input.form-checkbox').prop('disabled', true).parents(".management-items-wrapper").addClass("disabled");
        phase = 'Anticipation';
      }

      localStorage.setItem('phase', phase);
      localStorage.setItem('num_types', num_types);        

    });

    $('.management-items-wrapper input.form-checkbox').on('click', function(){

      if ($(this).is(":checked")) {
        num_types++;
       
      } else {
        num_types--;
       
      }
      
      if ( num_types == 0 ) {
        $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', false).parents(".anticipation-items-wrapper").removeClass('disabled');
        phase = '';
      } else {
        $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', true).parents(".anticipation-items-wrapper").addClass("disabled");
        phase = 'Management';
      }

      localStorage.setItem('phase', phase);
      localStorage.setItem('num_types', num_types);

    });

    if ( phase === 'Anticipation' ) {
      $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', false).parents('anticipation-items-wrapper').removeClass('disabled');
      $('.management-items-wrapper input.form-checkbox').prop('disabled', true).parents('management-items-wrapper').addClass("disabled");
    } else if ( phase === 'Management' ) {
      $('.management-items-wrapper input.form-checkbox').prop('disabled', false).parents('management-items-wrapper').removeClass('disabled');
      $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', true).parents('anticipation-items-wrapper').addClass("disabled");
    } else {
      $('.management-items-wrapper input.form-checkbox').prop('disabled', false).parents('management-items-wrapper').removeClass('disabled');
      $('.anticipation-items-wrapper input.form-checkbox').prop('disabled', false).parents('anticipation-items-wrapper').removeClass('disabled');
    }

    /***************************************************************************/    


    $('#edit-field-type-erm-si-und .form-type-checkbox input').each(function(index, element){

      if ($(element).val() == $key_anticipation) {
        $(element).parent().addClass('si-phase-title');
        split = index;
        
      }
      if ($(element).val() == $key_management) {
        $(element).parent().addClass('si-phase-title');
        split = index;
      }

      if (split == 0) {
        $(element).parent().addClass('anticipation-item');
      } else {
        $(element).parent().addClass('management-item');
      }

    });

    if (!$('.anticipation-item').parent().hasClass('anticipation-items-wrapper')) {
      $('.anticipation-item').wrapAll('<div class="anticipation-items-wrapper"></div>');
      $('.management-item').wrapAll('<div class="management-items-wrapper"></div>');
    }
    
    $('.p-checkbox-title').remove();
    $('.anticipation-items-wrapper')
    .before('<p class="p-checkbox-title">Anticipation</p>');     
    $('.management-items-wrapper')
    .before('<p class="p-checkbox-title">Management</p>');
    
    if ($phase == 'Anticipation') {
      $('#edit-field-type-erm-si-und .anticipation-items-wrapper label.option').each(function(index, element){
      $(element).removeClass('new-term');
        var text = $(element).text();
        text = text.replace('-', '');
        text = text.slice(0,-1);

        if (typeof $new_name !== 'undefined') {
          if ( text == $new_name ) {
            $(element).addClass('new-term');
          }
        }      
          
      });
    } else if ($phase == 'Management' ) {
      $('#edit-field-type-erm-si-und .management-items-wrapper label.option').each(function(index, element){
        $(element).removeClass('new-term');
        var text = $(element).text();
        text = text.replace('-', '');
        text = text.slice(0,-1);

        if (typeof $new_name !== 'undefined') {
          if ( text == $new_name ) {
            $(element).addClass('new-term');
          }
        }      
          
      });
    }

    else if (typeof $updated_tid !== 'undefined') {

      $('#edit-field-type-erm-si-und input.form-checkbox').each(function(index, element){
        $(element).next('label.option').removeClass('new-term');
        if ($(element).val() == $updated_tid) {
          $(element).next('label.option').addClass('new-term');
        }

      });

    }

  }};
})(jQuery);


