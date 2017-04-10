(function ($) {
  $(document).ready(function(){

      /* --- APR JS --- */
      // ---link transitions
      $('.node-type-ef-annual-progress-report .view-mode-full a[href^="#"]').on('click',function (e) {
            e.preventDefault();

            var target = this.hash;
            var $target = $(target);

            $('html, body').stop().animate({
                'scrollTop': $target.offset().top
            }, 900, 'swing', function () {
                window.location.hash = target;
            });
        });


      // --- toggle effects
      $('.apr-field-content .content .subsection.default > div').css('display', 'none');
      $('.apr-field-content .content .subsection h3').on('click', function(){

        if ( $(this).parent().hasClass('collapsed-on') ){
          $(this).parent().removeClass('collapsed-on').addClass('collapsed-off');
          $(this).parent().children('div').slideDown();
          if ( $(this).parent().hasClass('default') ) {
            $(this).parent().removeClass('default');
          }
        }
        else if ( $(this).parent().hasClass('collapsed-off')) {
          $(this).parent().removeClass('collapsed-off').addClass('collapsed-on');
          $(this).parent().children('div').slideUp();
        }

      });

      // --- APR FORM
      $('#node_ef_annual_progress_report_form_group_ef_deliverables_page .summary').remove();
      $('#node_ef_annual_progress_report_form_group_ef_promoting_ef_work_page .summary').remove();
      $('#node_ef_annual_progress_report_form_group_meeting_members_page .summary').remove();
      $('#node_ef_annual_progress_report_form_group_working_methods_page .summary').remove();
      $('#node_ef_annual_progress_report_form_group_additional_info_page .summary').remove();

      /* --- Hide fields depends on Type of report --- */
      var $type_of_report = Drupal.settings.ef_annual_progress_report_autocreation.type_of_report;
      var $tab_vertical_list = $('#node_ef_annual_progress_report_form_group_ef_deliverables_page ul.vertical-tabs-list > li');
      if ($type_of_report == 0) {
        // EU level
        $tab_vertical_list.each(function(index, element){
          
          if (index == 0 || index == 1 || index == 7 || index == 8 || index == 13 || index == 14) {
            $(element).addClass('element-invisible');
            if (index == 0){
              $(element).removeClass('selected');
            }
          }
          if (index == 2) {
            $(element).addClass('selected');
            $('#node_ef_annual_progress_report_form_group_ef_deliverables_page .vertical-tabs-panes > input')
              .attr('value', 'node_ef_annual_progress_report_form_group_erm_annual_report');
            $('#node_ef_annual_progress_report_form_group_quarterly_reporting_part1').css('display', 'none');
            $('#node_ef_annual_progress_report_form_group_erm_annual_report').css('display', 'block');
          }
        });
      } else {
        // National
        $tab_vertical_list.each(function(index, element){
          if (index == 2 || index == 3 || index == 4) {
            $(element).addClass('element-invisible');
          }
        });

      }
      /* --- end --- */

      /* -- disabled fields -- */
      $('#node_ef_annual_progress_report_form_group_ef_metadata #edit-field-country select').attr('disabled', 'disabled');      

      // Rating
      $('#edit-field-ef-working-methods-rating-und > div').each(function(i,e){
        if( $(e).children('input').is(':checked') ) {
          $('.node-form.node-ef_annual_progress_report-form #methods-rating li').each(function(key, item){
            if($(item).text() == $(e).children('input').val()) {
              $(item).siblings().children('span').removeClass('rating-selected');
              $(item).children('span').addClass('rating-selected');
              $(item).prevAll().children('span').addClass('rating-selected');
            }
          });
        }
      });

      $('.node-form.node-ef_annual_progress_report-form #methods-rating li').each(function(index, element){

        $(element).hover(
          function(){
            $(this).children('span').addClass('rating-hover');
            $(this).prevAll().children('span').addClass('rating-hover');
          }, function(){
            $(this).children('span').removeClass('rating-hover');
            $(this).nextAll().children('span').removeClass('rating-hover');
          });
        $(element).parent().hover(function(){},function(){
          $(this).children().children('span').removeClass('rating-hover');
        });

        $(element).on('click', function(){
          var $this = $(this);

          $('#edit-field-ef-working-methods-rating-und input').each(function(i,e){
            if( $(e).val() == $this.text() ){
              $(e).trigger('click');
              $('.node-form.node-ef_annual_progress_report-form #methods-rating li span').each(function(key, item){
                $(element).siblings().children('span').removeClass('rating-selected');
                $(element).children('span').addClass('rating-selected');
                $(element).prevAll().children('span').addClass('rating-selected');
              });
            }
          });
        });

      });
      // end rating


      // ADDITIONAL INFO Check-box form
      $('#node_ef_annual_progress_report_form_group_additional_info_page .form-type-checkbox > label')
        .each(function(index, element){ function_apr_checkbox(index, element); });

      $('#node_ef_annual_progress_report_form_group_additional_info_page .form-type-radio > label')
        .each(function(index, element){ function_apr_radios(index, element); });          
      // end ADDITIONAL INFO Check-box form


      // Mandatory fields
      if (typeof Drupal.settings.ef_annual_progress_report_autocreation.empty_fields == undefined) {
        
      } else {
        var $empty_fields = Drupal.settings.ef_annual_progress_report_autocreation.empty_fields;
        $.each($empty_fields, function(key, value){

          var $this_field = $('[name="'+value+'[und][0][value]"]');
          $this_field.addClass('apr-mandatory-textarea');
          $this_field.parents(':eq(2)').prepend('<div class="apr-mandatory-field"><span>Mandatory</span></div>');

          $new_value = value.replace(/_/g , "-");

          var $this_list = $('[id="edit-'+$new_value+'-und"]');
          $this_list.addClass('apr-mandatory-list').before('<div class="apr-mandatory-field"><span>Mandatory</span></div>');

          if(value == 'field_ef_date_and_partici_bm' || value == 'field_ef_working_methods_rating') {
            if(value == 'field_ef_date_and_partici_bm') {
              $('.node-form.node-ef_annual_progress_report-form ul.horizontal-tabs-list .horizontal-tab-button-2 strong').addClass('apr-tab-required');
            }
            if(value == 'field_ef_working_methods_rating') {
              $('.node-form.node-ef_annual_progress_report-form ul.horizontal-tabs-list .horizontal-tab-button-3 strong').addClass('apr-tab-required');
              $('#node_ef_annual_progress_report_form_group_working_methods_page .vertical-tabs-list li:eq(3) strong').addClass('apr-tab-required');
            }
          } else if(value != ''){
            $('.node-form.node-ef_annual_progress_report-form ul.horizontal-tabs-list .horizontal-tab-button-4 strong').addClass('apr-tab-required');
            switch(value) {
                case 'field_ef_general_kind_access':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(0) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_related_acess':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(0) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_general_kind_useful':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(1) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_related_deliv_useful':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(1) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_support_admin_rating':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(2) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_support_deliver_rating':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(3) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_invoicing_policy_rating':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(4) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_ef_adherence_rating':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(5) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_yammer_rating':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(6) strong')
                      .addClass('apr-tab-required');
                    break;
                case 'field_ef_cms_system_rating':
                    $('#node_ef_annual_progress_report_form_group_additional_info_page .vertical-tabs-list li:eq(7) strong')
                      .addClass('apr-tab-required');
                    break;
            }

          }


        });        
      }

      /* --- end --- */

  function function_apr_checkbox(index, element) {

    if ( $(element).siblings('input').is(':checked') ) {
      $(element).addClass('apr-checkbox-selected');
    } else {
      $(element).removeClass('apr-checkbox-selected');
    }

    $(element).on('click', function(){
      if ( $(this).siblings('input').is(':checked') ) {
        $(this).removeClass('apr-checkbox-selected');
      } else {
        $(this).addClass('apr-checkbox-selected');
      }
    });

  }

  function function_apr_radios(index, element) {

    if ( $(element).siblings('input').is(':checked') ) {
      $(element).addClass('apr-checkbox-selected');
    } else {
      $(element).removeClass('apr-checkbox-selected');
    }

    $(element).on('click', function(){
      if ( $(this).siblings('input').is(':checked') ) {
        $(this).removeClass('apr-checkbox-selected');
      } else {
        $(this).parent().siblings().children('label').removeClass('apr-checkbox-selected');
        $(this).addClass('apr-checkbox-selected');
      }
    });

  }         


  });
})(jQuery);


(function ($) {
  Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {

    var $date = new Date();
    var $today = $date.getFullYear() + '-' + ("0" + ($date.getMonth() + 1)).slice(-2) + '-' + $date.getDate();  

    $('#edit-field-ef-new-contract-date input.date-clear').attr('placeholder', 'Format: ' + $today);


  }
  };
})(jQuery);
