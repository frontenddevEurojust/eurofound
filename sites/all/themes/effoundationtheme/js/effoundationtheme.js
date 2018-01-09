
(function ($, Drupal) {

	var run_once = 0;

  Drupal.behaviors.effoundationtheme = {
    attach: function(context, settings) {
      // Get your Yeti started.

       /* --- Network Quarterly Report JS --- */
      //---'AUTHORS, INSTITUTIONS AND THEIR PROCESSES' Fieldset

      //Field 1
      if($('#field-ef-actors-institutions-und-0-field-ef-quarterly-report-1-add-more-wrapper .description .has-tip'))
        $('#field-ef-actors-institutions-und-0-field-ef-quarterly-report-1-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-trade-unions-and-employers-organisations'>More information on the focus of this section can be found here</a>");
      //Field 2
      if($('#field-ef-actors-institutions-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip'))
        $('#field-ef-actors-institutions-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-trade-unions-and-employers-organisations'>More information on the focus of this section can be found here</a>");
      //Field 3
      if($('#field-ef-actors-institutions-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip'))
        $('#field-ef-actors-institutions-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-other-relevant-institutions'>More information on the focus of this section can be found here</a>");


      //---'COLLECTIVE EMPLOYMENT RELATIONS - PROCESSES' fieldset

      //Field 1
      if($('#field-ef-processes-und-0-field-ef-quarterly-report-1-add-more-wrapper .description .has-tip'))
        $('#field-ef-processes-und-0-field-ef-quarterly-report-1-add-more-wrapper .description .has-tip').replaceWith("<p>Please report important changes in any labour related legislation</p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-collective-employment-relations-labour-related-legislation'>More information on the focus of this section can be found here</a>");
      //Field 2
      if($('#field-ef-processes-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip'))
        $('#field-ef-processes-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip').replaceWith("<p>Please report important changes to the industrial relations system, and particularly to the structures and processes of negotiation, with a focus on the collective bargaining processes (which set pay, working time or other features) and social dialogue in general. Please also report on the main outcomes of collective bargaining/social dialogue if they are not captured within the outcome-related sections.</p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-collective-bargaining-and-social-dialogue'>More information on the focus of this section can be found here</a>");
      //Field 3
      if($('#field-ef-processes-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip'))
        $('#field-ef-processes-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip').replaceWith("<p>Please report on disputes and conflicts between unions and employers. Summarise the official data on strikes or lock-outs when available, and qualitative information on the same issues, such as the regulation of collective action.</p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-disputes-and-dispute-resolution'>More information on the focus of this section can be found here</a>");
      //Field 4
      if($('#field-ef-processes-und-0-field-ef-quarterly-report-4-add-more-wrapper .description .has-tip'))
        $('#field-ef-processes-und-0-field-ef-quarterly-report-4-add-more-wrapper .description .has-tip').replaceWith("<p>Please report on major conflicts and disagreements, in general, and their effects. This could include: conflicts between government, unions and employers’ organisations, conflicts between organisations within each side of industry or intra-organisational conflicts. Include data, insofar as they are available</p>");
      //Field 5
      if($('#field-ef-processes-und-0-field-ef-quarterly-report-5-add-more-wrapper .description .has-tip'))
        $('#field-ef-processes-und-0-field-ef-quarterly-report-5-add-more-wrapper .description .has-tip').replaceWith("<p>Please report on any recent changes in the conciliation, mediation, arbitration, and other dispute resolution mechanisms that are in place. </p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-mediation-conciliation-arbitration'>More information on the focus of this section can be found here</a>");

      //---'Entitlements and obligations' fieldset
      if($('#field-ef-entitlements-obligs-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-entitlements-obligs-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/to-be-added'>More information on the focus of this section can be found here</a>");

      //---'PAY' Fieldset

      //Field 1
      if($('#field-ef-pay-und-0-field-ef-quarterly-report-1-add-more-wrapper .description .has-tip'))
        $('#field-ef-pay-und-0-field-ef-quarterly-report-1-add-more-wrapper .description .has-tip').replaceWith("<p>Please report here main developments regarding pay in general, including overtime payments, 13th or 14th salary...The reporting should include related wage policies and concepts (living wage, working poor, wage moderation, wage pacts, wage guarantees...)</p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-pay-in-general'>More information on the focus of this section can be found here</a>");
      //Field 2
      if($('#field-ef-pay-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip'))
        $('#field-ef-pay-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip').replaceWith("<p>Please report about changes in wage-setting mechanisms (level where the agreements are made, the articulation between the levels, extension mechanisms, opening and opt-out clauses, implications for bargaining coverage, degree of coordination, indexation mechanisms, government intervention…)</p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-wage-setting-and-wage-bargaining-mechanisms'>More information on the focus of this section can be found here</a>");
      //Field 3
      if($('#field-ef-pay-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip'))
        $('#field-ef-pay-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip').replaceWith("<p>Please report on major outcomes of negotiation on important collective agreements, covering major parts of the labour force or being pace-setting agreements for other sectors; including on-going processes of negotiation of important agreements</p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-collectively-agreed-pay'>More information on the focus of this section can be found here</a>");
      //Field 4
      if($('#field-ef-pay-und-0-field-ef-quarterly-report-4-add-more-wrapper .description .has-tip'))
        $('#field-ef-pay-und-0-field-ef-quarterly-report-4-add-more-wrapper .description .has-tip').replaceWith("<p>Please report on social partners and other actors’ debates and negotiations on the level of minimum wages or their increases; introduction of statutory minimum wages, research on their impacts, compliance issues… </p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-statutory-minimum-wages'>More information on the focus of this section can be found here</a>");
      //Field 5
      if($('#field-ef-pay-und-0-field-ef-quarterly-report-5-add-more-wrapper .description .has-tip'))
        $('#field-ef-pay-und-0-field-ef-quarterly-report-5-add-more-wrapper .description .has-tip').replaceWith("<p>Please report on policies, legislation or research on performance-related pay or financial participation schemes, such as profit sharing or share ownership schemes. </p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-variable-pay'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-pay-und-0-field-ef-quarterly-report-6-add-more-wrapper .description .has-tip'))
        $('#field-ef-pay-und-0-field-ef-quarterly-report-6-add-more-wrapper .description .has-tip').replaceWith("<p>For example policies and studies in relation to the principle of equal pay for equal work, reclassification, job re-evaluation, (gender) pay gaps, pay discrimination… </p><a href='http://www.eurofound.europa.eu/quarterlies-instructions-equal-pay'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-working-time-in-general-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-working-time-in-general-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-working-time-in-general'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-organisation-of-working-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-organisation-of-working-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-the-organisation-of-working-time-and-working-time-flexibility'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-work-life-balance-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-work-life-balance-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-work-life-balance-in-relation-to-working-time'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-skills-and-training-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-skills-and-training-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-skills-and-training'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-work-organisation-skill-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-work-organisation-skill-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-lifelong-learning-further-training-learning-organisation'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-career-development-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-career-development-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-career-development'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-physical-risk-factors-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-physical-risk-factors-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-physical-risk-factors'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-psychosocial-risk-fact-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-psychosocial-risk-fact-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-psychosocial-risk-factors'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-work-related-health-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-work-related-health-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-work-related-health-and-wellbeing-outcomes'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-occupational-health-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-occupational-health-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-work-related-health-and-wellbeing-outcomes'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-forms-of-work-organisat-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-forms-of-work-organisat-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-how-work-is-organised'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-workplace-innovation-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-workplace-innovation-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-workplace-innovation'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-employee-involvement-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-employee-involvement-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instruction-employee-involvement-in-work-organisation'>More information on the focus of this section can be found here</a>");

      if($('#field-ef-changes-at-work-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip'))
        $('#field-ef-changes-at-work-und-0-field-ef-research-findings-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/quarterlies-instructions-changes-at-work-and-their-impact-on-health-and-well-being'>More information on the focus of this section can be found here</a>");


      //'OTHER RELEVANT ISSUES' Fieldset
      if($('#field-ef-other-relevant-issues-und-0-field-ef-quarterly-report-1-add-more-wrapper .description .has-tip'))
        $('#field-ef-other-relevant-issues-und-0-field-ef-quarterly-report-1-add-more-wrapper .description .has-tip').replaceWith("Please report here about research or issues covering multiples areas, for instance: “working conditions” in general or ‘job quality’ in general, future of work, digitalisation of work….");

      if($('#field-ef-other-relevant-issues-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip'))
        $('#field-ef-other-relevant-issues-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip').replaceWith("Please report here any major issues about social protection, insofar as they are linked to work. For instance: unemployment benefits, pensions, minimum income, invalidity pension, health insurance, social security contributions… etc. As this is not the main focus of EurWORK, please only briefly refer to major changes in regulations.");

      if($('#field-ef-other-relevant-issues-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip'))
        $('#field-ef-other-relevant-issues-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip').replaceWith("Please report here any issues in relation to equality and equal opportunities insofar as they are linked to work and how governments and social partners address these issues. This could be, for instance, measures and policies tackling gender gaps and discrimination, diversity policies, quotas etc.");

      //'SUMMARY' Fieldset
      if($('#field-ef-summary-commentary-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip'))
        $('#field-ef-summary-commentary-und-0-field-ef-quarterly-report-2-add-more-wrapper .description .has-tip').replaceWith("<a href='http://www.eurofound.europa.eu/sites/default/files/page/field_ef_documents/eurwork_article_based_products_-_info_for_correspondents_-_in-brief_or_spotlight_reports_-_1_october_2015.docx'>More information regarding the processes and formats of the different articles can be found here.</a><br>Please include your fully developed proposals for articles in CMS. We will look into them in conjunction with the quarterly reports.");

      if($('#field-ef-summary-commentary-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip'))
        $('#field-ef-summary-commentary-und-0-field-ef-quarterly-report-3-add-more-wrapper .description .has-tip').replaceWith("Please include the main references as links directly in the text. If there is a need to further reference, please use this box here.");


      /* --- end Network Quarterly Report JS --- */

      //Documents explanation
      if($('.form-item-field-ef-documents-und-0 .description .has-tip'))
        $('.form-item-field-ef-documents-und-0 .description .has-tip').replaceWith("Add documents here.");

      if($('.form-item-field-ef-source-documents-und-1 .description .has-tip'))
        $('.form-item-field-ef-source-documents-und-1 .description .has-tip').replaceWith("For use by Eurofound");


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
      $('.apr-field-content .content .subsection h3.apr-accordion').on('click', function(event){
        event.preventDefault();

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

      $('.view-display-id-annual_progress_report_view #edit-field-ef-report-delivery-date-value-min-wrapper input')
        .attr('placeholder', 'From');
        $('.view-display-id-annual_progress_report_view #edit-field-ef-report-delivery-date-value-max-wrapper input')
        .attr('placeholder', 'To');
      /* --- end APR JS --- */

      // wrap filters and buttons in views
      var $num_filters = 0;
      var $num_buttons = 0;

      $('.view-filters .views-exposed-form .views-exposed-widgets .views-exposed-widget').each(function(i){
        if( $(this).hasClass('views-submit-button') || $(this).hasClass('views-reset-button') ){
          $(this).addClass('view-button');
          $num_buttons++;
        }else{
          $(this).addClass('view-filter');
          $num_filters++;
        }

      });

      var num_divisor;
      var form_pages=window.location.pathname.split("/");

      var pathname_form=form_pages[form_pages.length-1];


      if(pathname_form =='the-greening-of-industries-in-the-eu'
        || pathname_form =='attractive-workplace-for-all'
        || pathname_form=='ageing-workforce'
        || pathname_form=='workers-with-care-responsibilities'){
        num_divisor=parseInt(2);
      }
      else if(pathname_form=='factsheets'
        || pathname_form=='database'
        || pathname_form=='support-instrument'){
        num_divisor=parseInt(4);
      }else if(pathname_form=='osu-contract-reporting-test'
        || pathname_form=='osu-contracts-reporting'
        || pathname_form=='osu-contract-reporting'
        || pathname_form=='quarterly-reports'
        || pathname_form=='restructuring-case-studies'
        || pathname_form=='network-quarterly-reports-export'
        || pathname_form=='quarterly-reports-export'){
        num_divisor=parseInt(5);
      }else{
        num_divisor=parseInt(3);
      }

      var $filter_rows = Math.floor($num_filters/num_divisor);

      if( ($filter_rows % $num_filters) > 0 ){$filter_rows++;}

      for (var i = 0; i <= $filter_rows; i++) {
        var first = num_divisor * i;
        var last = num_divisor * (i + 1);
        $('.view-filter').slice(first, last).wrapAll('<div class="wrap-row-filters"></div>');
      }

      $('.view-button').wrapAll('<div class="wrap-row-buttons"></div>');


      // end wrap filters and buttons in views



      /* --- erm regulation --- */
      	/* --- VIEWS --- */
        /*
      $('.view-id-erm_regulations.view-display-id-page .views-exposed-widget').slice(0,3).wrapAll('<div class="wrap-row-filters"></div>');
      $('.view-id-erm_regulations.view-display-id-page .views-exposed-widget').slice(3,6).wrapAll('<div class="wrap-row-filters"></div>');
      $('.view-id-erm_regulations.view-display-id-page .views-exposed-widget').slice(6,9).wrapAll('<div class="wrap-row-filters"></div>');
      $('.view-id-erm_regulations.view-display-id-page .views-exposed-widget').slice(9,11).wrapAll('<div class="wrap-row-buttons"></div>');

      $('.view-id-erm_regulations.view-display-id-page_admin .views-exposed-widget').slice(0,3).wrapAll('<div class="wrap-row-filters"></div>');
      $('.view-id-erm_regulations.view-display-id-page_admin .views-exposed-widget').slice(3,6).wrapAll('<div class="wrap-row-filters"></div>');
      $('.view-id-erm_regulations.view-display-id-page_admin .views-exposed-widget').slice(6,8).wrapAll('<div class="wrap-row-filters"></div>');
      $('.view-id-erm_regulations.view-display-id-page_admin .views-exposed-widget').slice(8,10).wrapAll('<div class="wrap-row-buttons"></div>');
      */

      	/* --- HELP --- */

      $('.filter-description').css('display', 'none');
      $('.filter-description-more span').addClass('closed');
      $('.filter-description-more span').on('click', function(){

      	if($(this).hasClass('closed')){
      		$('.filter-description').slideDown();
      		$(this).removeClass('closed');
        	$(this).addClass('opened');
      	}else if($(this).hasClass('opened')){
      		$('.filter-description').slideUp();
      		$(this).removeClass('opened');
        	$(this).addClass('closed');
      	}

      });



      $('.node-ef-erm-regulation .erm-reg-notes-icon .fa-comments').each(function(index){
        $(this).hover(function(){
          $(this).parent().next('.node-ef-erm-regulation .erm-reg-notes').fadeIn();
        },function(){
          $(this).parent().next('.node-ef-erm-regulation .erm-reg-notes').fadeOut();
        });
      });

      $('.node-erm-support-instrument .erm-si-notes-icon .fa-comments').each(function(index){
        $(this).hover(function(){
          $(this).parent().next('.node-erm-support-instrument .erm-si-notes').fadeIn();
        },function(){
          $(this).parent().next('.node-erm-support-instrument .erm-si-notes').fadeOut();
        });
      });

      /* --- end erm regulation --- */


      	/* --- search effects --- */
      	$('.page-search .view-display-id-page .views-field-body span').append('<div class="search-hide"></div>');

      	$('.page-search aside section li > a.facetapi-active').each(function(){
      		$leaf_clean = $(this).html().split('(-) ').join('');
      		$(this).empty();
      		$(this).append($leaf_clean);
      	});

      	/* --- end search --- */

      	/* --- assistant forms --- */
/*
      	$('#webform-component-ef-webform-daily-allowance .fieldset-wrapper .webform-component-radios').slice(0,3)
  			.wrapAll('<div class="webform-daily-day large-4 columns"></div>');
  		$('#webform-component-ef-webform-daily-allowance .fieldset-wrapper .webform-component-radios').slice(3,6)
  			.wrapAll('<div class="webform-daily-day large-4 columns"></div>');
  		$('#webform-component-ef-webform-daily-allowance .fieldset-wrapper .webform-component-radios').slice(6,9)
  			.wrapAll('<div class="webform-daily-day large-4 columns"></div>');
*/


	    $('#webform-component-meeting-secretary').addClass('assistant-form');
		$('#webform-component-remarks-from-meeting-secretary').addClass('assistant-form');
		$('#webform-component-expert-fee').addClass('assistant-form');
		$('#webform-component-validate').addClass('assistant-form');
		$('#webform-component-assistant-comment').addClass('assistant-form');

		$('.assistant-form').wrapAll('<div class="assistant-form-wrap"></div>');
		$('.assistant-form-wrap').prepend('<h3 class="assistant-form-title">Assistant webform</h3>');

		/* -- End assistant --- */


      	/* --- Case studies custom (Bilbomatica) --- */
/*
      	$('.page-observatories-emcc-case-studies-restructuring-case-studies .views-exposed-widget')
      		.slice(0,3).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-emcc-case-studies-restructuring-case-studies .views-exposed-widget')
      		.slice(3,6).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-emcc-case-studies-restructuring-case-studies .views-exposed-widget')
      		.slice(6,9).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-emcc-case-studies-restructuring-case-studies .views-exposed-widget')
      		.slice(9,11).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-emcc-case-studies-restructuring-case-studies .views-exposed-widget')
      		.slice(11,13).wrapAll('<div class="wrap-row-buttons"></div>');
*/
      	$('.page-observatories-emcc-case-studies-restructuring-case-studies #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');

      	// 5 displays - case studies //
      	// 1 of 5 emcc(1)
        /*
      	$('.page-observatories-emcc-case-studies-the-greening-of-industries-in-the-eu .views-exposed-widget')
      		.slice(0,3).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-emcc-case-studies-the-greening-of-industries-in-the-eu .views-exposed-widget')
      		.slice(3,4).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-emcc-case-studies-the-greening-of-industries-in-the-eu .views-exposed-widget')
      		.slice(4,6).wrapAll('<div class="wrap-row-buttons"></div>');
          */
      	$('.page-observatories-emcc-case-studies-the-greening-of-industries-in-the-eu #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');
      	// 2 of 5 emcc(2)
        /*
      	$('.page-observatories-emcc-case-studies-tackling-undeclared-work-in-europe .views-exposed-widget')
      		.slice(0,3).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-emcc-case-studies-tackling-undeclared-work-in-europe .views-exposed-widget')
      		.slice(3,4).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-emcc-case-studies-tackling-undeclared-work-in-europe .views-exposed-widget')
      		.slice(4,6).wrapAll('<div class="wrap-row-buttons"></div>');
          */
      	$('.page-observatories-emcc-case-studies-tackling-undeclared-work-in-europe #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');
      	// 3 of 5 eurwork(1)
        /*
      	$('.page-observatories-eurwork-case-studies-attractive-workplace-for-all .views-exposed-widget')
      		.slice(0,3).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-eurwork-case-studies-attractive-workplace-for-all .views-exposed-widget')
      		.slice(3,4).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-eurwork-case-studies-attractive-workplace-for-all .views-exposed-widget')
      		.slice(4,6).wrapAll('<div class="wrap-row-buttons"></div>');
          */
      	$('.page-observatories-eurwork-case-studies-attractive-workplace-for-all #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');
      	// 4 of 5 eurwork(2)
        /*
      	$('.page-observatories-eurwork-case-studies-ageing-workforce .views-exposed-widget')
      		.slice(0,3).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-eurwork-case-studies-ageing-workforce .views-exposed-widget')
      		.slice(3,6).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-eurwork-case-studies-ageing-workforce .views-exposed-widget')
      		.slice(6,7).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-eurwork-case-studies-ageing-workforce .views-exposed-widget')
      		.slice(7,9).wrapAll('<div class="wrap-row-buttons"></div>');
          */
      	$('.page-observatories-eurwork-case-studies-ageing-workforce #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');
          /*
      	// 5 of 5 eurwork(3)
      	$('.page-observatories-eurwork-case-studies-workers-with-care-responsibilities .views-exposed-widget')
      		.slice(0,3).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-eurwork-case-studies-workers-with-care-responsibilities .views-exposed-widget')
      		.slice(3,4).wrapAll('<div class="wrap-row-filters"></div>');
      	$('.page-observatories-eurwork-case-studies-workers-with-care-responsibilities .views-exposed-widget')
      		.slice(4,6).wrapAll('<div class="wrap-row-buttons"></div>');
          */
      	$('.page-observatories-eurwork-case-studies-workers-with-care-responsibilities #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');

      	/* --- end case studies (Bilbomatica) --- */

      	/* --- erm-data-export accordion --- */

      	$('#edit-dynamic-field-wrapper table').hide();
      	$('#edit-dynamic-field-wrapper > label').on('click', function(){
      		$('#edit-dynamic-field-wrapper table').toggle('fast');
      	});

		/* --- hide/display social icons (bilbomatica) --- */
    	if (!$('body').hasClass('page-node-add-ef-factsheet')) {
        var socialIcon = $('.block-easy-social i');
    	$('.block-easy-social .easy-social-markup').css('display','none');


    	socialIcon.each(function(i){
    		var on = false;


    		$(this).hover(function(e){
    			e.preventDefault();
    			if(on == false){
    				$(this).css('color','#2663A7');
    			}
    			$(this).prev().css({'display':'block', 'opacity':'0'}).animate({'opacity':'1','left':'+=10px','bottom':'+=10px'});

    		}, function(ev){
    			if(on == false){
    				$(this).css('color','#F99E35');
    			}
    			$(this).prev().animate({'opacity':'0','left':'-=10px','bottom':'-=10px'}).fadeOut(200);
    		});


    		$(this).on('click',function(e){
    			e.preventDefault();
    			if(on == false){

    				switch($(this).attr('class')) {
					    case 'fa fa-facebook-square':
					        $(this).css('color','#5674CB');
					        break;
					    case 'fa fa-twitter-square':
					        $(this).css('color','#00ACEE');
					        break;
					    case 'fa fa-google-plus-square':
					        $(this).css('color','#DD4B39');
					        break;
					    case 'fa fa-linkedin-square':
					        $(this).css('color','#0077B5');
					        break;
					}

    				$(this).next().next().fadeIn(500);
    				on = true;

    			}else if(on== true){

    				$(this).css('color',  '#DAE3EC');
    				$(this).next().next().fadeOut(500);
    				on = false;

    			}
    		});
    	});
}
    	/* --- end --- */


		function applyTopBarStyling() {
			$('.ef-top-bar #lang-dropdown-select-language option').each(function() {
				$(this).text($(this).val());
			});
			$( ".ef-top-bar .block-menu-menu-ef-user-login-links-menu" ).prepend( "<a class='user-top-bar' href='#'>User</a>" );
			$( ".ef-top-bar .block-search").prepend( "<a class='search-top-bar' href='#'>Search</a>" );
			$("a.user-top-bar").click(function(){
			  $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").toggleClass("active");
			  $(".top-bar").removeClass("expanded");
        $("#search-block-form").removeClass("active");
			});
			$("a.user-top-bar").blur(function(){
			  //$(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").removeClass("active");

			});


      $(".menu-icon a").click(function(){
        $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").removeClass("active");
        $("#search-block-form").removeClass("active");
      });


			$("a.search-top-bar").click(function(){
			  $(".ef-top-bar #search-block-form").toggleClass("active");
			  $(".top-bar").removeClass("expanded");
        $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").removeClass("active");
			});
			$("a.search-top-bar").blur(function(){
			 // $(".ef-top-bar #search-block-form").removeClass("active");
			});

			$(".ef-top-bar #main-menu li a").each(function() {
			    var $link = $(this);
			    $link.parent('li').removeClass('icon-ef_' + $link.html().toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
			    $link.addClass('icon-ef_' + $link.html().toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
			});
		}

		function applyTogglesForNextElements() {
			//toggle funcionality on next element
			$(".toggler").each(function() {
			    var $toggler = $(this);
			    $toggler.click(function () {
			        $toggler.next().slideToggle("slow");
			        $toggler.find('.show-text').toggle();
			        $toggler.find('.hide-text').toggle();
			        return false;
			    });
			    $toggler.next().hide();
			    $toggler.find('.hide-text').hide();
			});
		}

		function applyViewsExposedFiltersStyling() {
			// search filters
			//$(".views-exposed-form #edit-ef-search-wrapper label").addClass('icon-ef_search');
			//$("#views-exposed-form-ef-news-page #edit-ef-search-wrapper label").addClass('icon-ef_news');
			//other filters
			//$(".views-exposed-form #edit-ef-observatory-wrapper label").addClass('icon-ef_observatoriesBD');
			//$(".views-exposed-form #edit-ef-theme-topic-wrapper label").addClass('icon-ef_themesBD');
			//$('.views-submit-button, .views-reset-button').wrapAll('<div class="exposed-filter-buttons-wrapper">');
		}

		function applyRemoveClassesFromBreadcrumbs() {
			$('.breadcrumbs li>a').removeClass();
			$(".section-ef-themes" ).find('.breadcrumbs li:last').remove();
			$(".section-ef-themes" ).find('.breadcrumbs li:last').addClass('current');

			$(".section-countries" ).find('.breadcrumbs li:last').remove();
			$(".section-countries" ).find('.breadcrumbs li:last').addClass('current');
		}

		/**
		 ** Adds css class to menu links based on the link text
		 ** e.g. About Eurofound => icon-ef_about_eurofound
		 ** Adds css class to log-in and sing up links.
		 ** Adds css class to survey sub menu.
		**/
		function applyCssClasses() {
			if($("#ef-factsheet-node-form").hasClass("author-role")){
				$(".ef-edit-links").hide();
				$(".field-name-field-ef-factsheet-sources").hide();
				//$(".vertical-tabs-list li").first().hide();

			}

			/*var class_array = new Array( "icon-ef_european_company_surveys_ecs", "icon-ef_european_quality_of_life_surveys_eqls", "icon-ef_european_working_conditions_surveys_ewcs","icon-ef_data_visualisation" );
			$index =0 ;*/
			$(".block-menu-menu-ef-user-login-links-menu .first a").each(function(){
				$(this).addClass('icon-ef_login');
			});
			$(".block-menu-menu-ef-user-login-links-menu .last a").each(function(){
				$(this).addClass('icon-ef_signup');

			});
			if($("#page-title").hasClass("parent_emcc")){
				$(".block-panels-mini-browse-by").addClass("parent_emcc");
			}
			if($("#page-title").hasClass("parent_eurwork")){
				$(".block-panels-mini-browse-by").addClass("parent_eurwork");
			}

			$(".section-surveys").find('.menu-block-1 > .menu > .menu-mlid-16488 > a').addClass('icon-ef_european_company_surveys_ecs');
			$(".section-surveys").find('.menu-block-1 > .menu > .menu-mlid-16489 > a').addClass('icon-ef_european_quality_of_life_surveys_eqls');
			$(".section-surveys").find('.menu-block-1 > .menu > .menu-mlid-16490 > a').addClass('icon-ef_european_working_conditions_surveys_ewcs');
			$(".section-surveys").find('.menu-block-1 > .menu > .menu-mlid-16491 > a').addClass('icon-ef_data_visualisation');

			/*if($(".html").hasClass( "section-surveys" )){
				$(".menu-block-1 > .menu > li").each(function(){
					$to_change = $(this).find("a").first();
					$to_change.addClass(class_array[$index]);
					$index++;
				})
			}*/
		}


		function addSocialMedia(){

			/*
			if($(".page-node")[0] && !$(".page-node-edit")[0]){
			$(".ef-main").append((" <div id=\"socialshareprivacy\"></div>"));
			$('#socialshareprivacy').socialSharePrivacy({
					 services : {
						    facebook : {
						      'dummy_img' : Drupal.settings.basePath+'sites\/all\/libraries\/socialshareprivacy\/socialshareprivacy\/images\/dummy_facebook_like.png'
						    },
						    twitter : {
						      'dummy_img' : Drupal.settings.basePath+'sites\/all\/libraries\/socialshareprivacy\/socialshareprivacy\/images\/dummy_twitter.png'

						    },
						    gplus : {
						      'dummy_img' : Drupal.settings.basePath+'sites\/all\/libraries\/socialshareprivacy\/socialshareprivacy\/images\/dummy_gplus.png'
						    }
						  },
					  'css_path'      : Drupal.settings.basePath+'sites\/all\/libraries\/socialshareprivacy\/socialshareprivacy\/socialshareprivacy.css',
					  'lang_path'     : Drupal.settings.basePath+'sites\/all\/libraries\/socialshareprivacy\/socialshareprivacy\/lang',
					  'language'      : 'en',
					  'cookie_domain' : 'heise.de'
					});
			}
			*/

		}

		/**
		 ** Fixes popup layout tables to show center left and center right cells
		 **/
		function fixPopupLayoutTables() {
			//global popups overlay element
			var $rootPopUp = $("#popup-active-overlay");
			//check if exists
			if ($rootPopUp.length > 0) {
				//hide it before clicking it to hide the effect hack
				$rootPopUp.css("opacity",0);
				//click the popup links to load their content to get computed height
				$(".popup-element-title").click();

				//the middle row of the layout table where the height for left and right columns need setting
				var midTable = $rootPopUp.find(".popup-element-body .center td");
				var midTableHeight = $(midTable.get(1)).css("height");
				midTable.each(function(){
					$(this).css("height", midTableHeight);
				});

				//click again to close the popups
				$(".popup-element-title").click();
				//show the overlay again
				$rootPopUp.css("opacity",1);
			}
		};


		/**
		 ** Adds css class to menu links based on the link text
		 **
		**/
	   function applyShortcutLinksCssClasses() {
			$(".popup-layout .menu li a:contains('profile')").parent().addClass('profile');
			$(".popup-layout .menu li a:contains('Logout')").parent().addClass('logout');

		}

		function venueAnchor(){
			$(".field-name-field-ef-venue-title").wrapInner('<a href="#venue" />');
			$("#node_ef_event_full_group_venue_details").before('<a name="venue" />');
		}
		function applySearchInputPlaceholder() {

			$('#edit-ef-search-wrapper').each(function () {
			    var $wrapper = $(this);
			    var $description = $wrapper.find('.description');
			    var $searchInput = $wrapper.find('.form-item-ef-search input');
			    $searchInput.attr('placeholder', $.trim($description.html()));
			    $description.html('');
			});
		}
		function iframeFix(){
			$("iframe").each(function(){
				$(this).parent('div').first().addClass('flex-video');

				/* --- Avoid class flex-video on Facebook link (Bilbomatica) --- */

				if($(this).parent('div').first().hasClass('easy-social-markup')){
					$(this).parent('div').first().removeClass('flex-video');
				}

				/* --- end bilbomatica --- */

			})
		}

		function applyFooterDiv(){
      if (!$(".page-observatories-emcc .view").hasClass("view-factsheet-geolocation-view")) {
  			if ($(".pagination-centered").length) {
  				$(".ef-main .view-content").first().after("<div class='view-footer-wrapper'></div>");
  				$(".view-footer-wrapper").prepend($(".view-footer"));
  				$(".view-footer-wrapper").prepend($(".pagination-centered"));
  				//$(".view-footer-wrapper").prepend($(".view h2"));
  			}
      }
		}

		function addFlags(){

			if(run_once==0){
				run_once++;
				var language_redirect = {};
				$('.lang_dropdown_form').last().children().first().addClass('dropdown-language-parent');
				$('.lang-dropdown-select-element').last().each(function(){
						$(this).children().each(function(){
				  				var flag_value= $(this).attr('value');
						  				$('.dropdown-language-parent input').each(function(){

												var language_value = $(this).attr('name');
												if(language_value==flag_value){
													var language_link = $(this).attr('value');
													language_redirect[language_value]=language_link;
												}

										});
						$(this).attr('data-imagesrc',Drupal.settings.basePath+'sites\/all\/themes\/effoundationtheme\/images\/flags\/'+flag_value+'.png');
						});
				});
				var ddData = [];


				$('.dropdown-language-parent').last().ddslick({
									    data: ddData,
									    width: 200,
									    imagePosition: "right",
									    selectText: "Choose your language",
				  					    onSelected: function (data) {
				  					    	var my_link = data['selectedData']['value'];
				  					    	window.location = language_redirect[my_link]
					  					}

							});

				$('.dd-selected-text').css("line-height","20px");
				$('.lang_dropdown_form').last().each(function(){
				$(this).children().first().addClass('dropdown-language-parent-1');
				});
			}
			$(".dd-pointer").click(function(){
				if($(this).hasClass("dd-pointer-up")){
					$(".dd-selected").removeClass("expanded");
				}
				else{
					$(".dd-selected").addClass("expanded");
				}
			});

		}

		if (context == document) {
			iframeFix();
			if (!$('body').hasClass('page-node-add-ef-factsheet')) {
                         addFlags();
                        }
			venueAnchor();
			addSocialMedia();
			applyTogglesForNextElements();
			applyViewsExposedFiltersStyling();
			applyRemoveClassesFromBreadcrumbs();
			applyCssClasses();
			fixPopupLayoutTables();
			applyShortcutLinksCssClasses();
			applySearchInputPlaceholder();
			applyTopBarStyling();
			applyFooterDiv();
		}

    }
  };

})(jQuery, Drupal);

/* SURVEY EWCS2015 */
(function ($) {
  $(document).ready(function(){
      if($("form.graphControls" ).is(".surveyEWCS2016" )){
        $('section.visualizationFilters ul.visualisationSelections a.icon-euCompass').parent().css("display","none");
        $('section.visualizationFilters ul.visualisationSelections a.icon-wordMap').parent().css("display","none");
      }
      if($("form.graphControls" ).is(".surveyEWCS2017" )){
        $('section.visualizationFilters ul.visualisationSelections a.icon-euCompass').parent().css("display","none");
        $('section.visualizationFilters ul.visualisationSelections a.icon-wordMap').parent().css("display","none");
      }
  });
})(jQuery);



/* Data visualisation enhancement */



(function ($) {
$(document).ready(function(){

      var state = true;


      $("ul.visualisationSelections").click(function() {


      if(state==true){
        $(this).addClass("visualisationSelectionshover", 1000);
        $( "#visualizationSection" ).addClass("showOptionsFilterSelections", 1000).removeClass("showOptionsFilterSelectionsOut",1000);
         state = false;
      } else{
        $(this).removeClass("visualisationSelectionshover", 1000);
        $( "#visualizationSection" ).removeClass("showOptionsFilterSelections", 1000).addClass("showOptionsFilterSelectionsOut", 1000);
         state = true;
      }


      });

  });
})(jQuery);



// Revision log messages
(function ($) {
$(document).ready(function(){

      $('section.revision-log-summary > div.view-revision-log-summary').css('display', 'none').addClass('no-visible');
      $('section.revision-log-summary > h2.block-title').addClass('closed');
      $('section.revision-log-summary > h2.block-title').on('click', function(){
        if ($(this).parent().children('div.view-revision-log-summary').hasClass('no-visible')) {
          $(this).parent().children('div.view-revision-log-summary').removeClass('no-visible').addClass('visible').slideDown();
          $(this).parent().children('h2.block-title').removeClass('closed').addClass('opened');
        } else {
          $(this).parent().children('div.view-revision-log-summary').removeClass('visible').addClass('no-visible').slideUp();
          $(this).parent().children('h2.block-title').removeClass('opened').addClass('closed');
        }

      });
      $('section.revision-log-summary > div.view-revision-log-summary table tr td.views-field-published').each(function(index, element){
        if (index == 0) {
          $(element).addClass('last-one');
        }
        var new_class = $(element).text();
        $(element).addClass(new_class);
        if($(element).hasClass('Yes')) {
          $(element).parent('tr').css('background-color', '#AAFFAA');
        } else if($(element).hasClass('last-one')){
          $(element).parent('tr').css('background-color', '#FAAFBE');
        }
      });

  });
})(jQuery);
// end Revi log messages


// delete flex-video class for mynewsdesk
(function ($) {
  $(document).ready(function(){
      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[form_pages.length-1];

      if(pathname_form =='my-news-desk-test'){
        $('.ds-node-content .flex-video').removeClass('flex-video');
      };
  });
})(jQuery);

// menu mynewsdesk
(function ($) {
  $(document).ready(function(){


      $('li.newsroom-nav-item:nth-child(1)').removeClass("active");

      var form_pages=document.location.href.split("/");
      var pathname_form=form_pages[form_pages.length-1];


      if(pathname_form =='newsroom' || pathname_form =='' ){
        $('li.newsroom-nav-item:nth-child(1)').addClass("active");
        $( "div.field-type-text-with-summary" ).removeClass( "flex-video" );
      }else if(pathname_form =='latest_news'){
        $('li.newsroom-nav-item:nth-child(2)').addClass("active");
        $( "div.field-type-text-with-summary" ).removeClass( "flex-video" );
      }else if(pathname_form =='latest_media'){
        $('li.newsroom-nav-item:nth-child(3)').addClass("active");
        $( "div.field-type-text-with-summary" ).removeClass( "flex-video" );
      }else if(pathname_form =='contact_people'){
        $('li.newsroom-nav-item:nth-child(4)').addClass("active");
        $( "div.field-type-text-with-summary" ).removeClass( "flex-video" );
      }


    $('li.newsroom-nav-item a').click(function(){
          $( ".newsroom-nav-collapse" ).removeClass("in", 1000);
          $('.toggle-menu i').removeClass("icon-chevron-up", 1000);
          $('.toggle-menu i').addClass("icon-chevron-down", 1000);
           state = true;
    });


      var state = true;
      $(".toggle-menu").click(function() {
        if(state==true){
          $('.newsroom-nav-collapse').addClass("in", 1000);
          $('.toggle-menu i').removeClass("icon-chevron-down", 1000);
          $('.toggle-menu i').addClass("icon-chevron-up", 1000);
          state = false;
        } else{
          $( ".newsroom-nav-collapse" ).removeClass("in", 1000);
          $('.toggle-menu i').removeClass("icon-chevron-up", 1000);
          $('.toggle-menu i').addClass("icon-chevron-down", 1000);
           state = true;
        }
      });



  });
})(jQuery);



//Center align images in case their alignment is left

jQuery(document).ready(function(){
  var t = jQuery('div.media');
  if (t.length > 1){
    t.each(function(){
      if (jQuery(this).prev().is('p') && (jQuery(this).prev().attr('style') == 'text-align:center' || jQuery(this).prev().attr('style') == 'text-align: center;') && jQuery(this).prev().text().length == 0){
        jQuery(this).attr("style", "text-align:center");
      }
    })
  }else if (t.length == 1){
    if (jQuery(t).prev().is('p') && (jQuery(t).prev().attr('style') == 'text-align:center' || jQuery(t).prev().attr('style') == 'text-align: center;') && jQuery(t).prev().text().length == 0){
      jQuery(t).attr("style", "text-align:center");
    }
  }
});

//active theme in topics/term
(function ($) {
$(document).ready(function(){
    $('div.menu-block-1 ul.menu li').each(function (i){
         var valorTheme = $("a", this).html();
        if(valorTheme == $("p.ef-theme").html()){
           $("a", this).addClass("active-trail");
        }
    });
  });
})(jQuery);
//END active theme in topics/term


// acordion surveys export options
(function ($) {
$(document).ready(function(){
      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[form_pages.length-2];

      if(pathname_form =='data-visualisation'){
        var hiddenDivs = $('.exportOptions  div.export-options-group').addClass('hide');


        $('.exportOptions > h2.title-export-options').click(function() {
          var divOptions = $(this).next();
          $(this).toggleClass( "active" );
          if(divOptions.is(':visible')){
            divOptions.slideUp();
            divOptions.addClass('hide');
          }else{
            divOptions.slideDown();
            divOptions.removeClass('hide');
          }

        });
      };
  });
})(jQuery);
// end acordion surveys export options


//  BUILDING RESPONSIVE MENU

(function ($) {
  $( document ).ready(function() {
    $('#main-menu').removeClass('top-bar');
    $('#main-menu ul.title-area').css('display','none');
    // doing transparent the menu
    //$('#main-menu').css('opacity','0');
    $(".block-menu-menu-ef-user-login-links-menu .first a").each(function(){
      $(this).addClass('icon-ef_login');
    });
    $(".block-menu-menu-ef-user-login-links-menu .last a").each(function(){
      $(this).addClass('icon-ef_signup');

    });


    // We collect in a variable the menu without modification.
    localStorage['menu'] = $('.ef-navigation-menus').html();



    $(window).on("load resize", function(event) {

    if( /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
     screenWidth = 767;
    } else {
      screenWidth = 750;
    }

      // mobile resolutions
      if( $(window).width()<=screenWidth){

        var goBack = '<li class="title back js-generated"><a href="#">« Back</a></li>';

        // Delete contextual configuration menu for resaponsive menu
        $('#main-menu .contextual-links-wrapper').remove();

        // adaptamos el menu para dispositivos moviles con las clases de foundation
        $('#main-menu').addClass('top-bar');
        $('#main-menu ul.title-area').css('display','block');
        $('.ef-navigation-menus  ul').removeClass();
        $('.ef-navigation-menus  li').removeClass();
        $('.ef-navigation-menus  div').removeClass();
        $('.ef-navigation-menus ul#main-menu-links').removeClass();
        $('.ef-navigation-menus').addClass('top-bar-section');
        $('.ef-navigation-menus ul li:has(ul)').removeClass();
        $('.ef-navigation-menus ul li:has(ul)').addClass('has-dropdown no-click');
        $('.ef-navigation-menus ul li.has-dropdown ul').addClass('dropdown');
        $('.ef-navigation-menus ul.dropdown li:has(h5)').addClass('title back js-generated');


        // the option of publications must not have children to show
        $('#main-menu-links > li > a[href*="publications"]').each(function() {
            $(this).parent().removeClass();
            $(this).parent().removeAttr("class");
        });

        // We create the asset item section
        $('#main-menu-links li.has-dropdown > a').each(function() {
          strHref =  $(this).attr('href');
          strClass =  $(this).attr('class');
          if(strClass == undefined){
            strItem = '<li><a href="'+strHref+'" class="parent-link js-generated icon-ef">'+$(this).html()+'</a></li>';
          }else{
            strItem = '<li><a href="'+strHref+'" class="parent-link '+ strClass+'">'+$(this).html()+'</a></li>';
          }
          $(this).parent().find('ul.dropdown').first().prepend(strItem);
        });

        // Delete elements id to not generate the elements again
        removeIdMenu('#main-menu-links');

        // Building items sublist correctly for foundation menu
        localStorage['submenuAbout'] = $('#mini-panel-about_eurofound_mini_panel ul.dropdown').html();
        $('#mini-panel-about_eurofound_mini_panel').parent().parent().append(localStorage['submenuAbout']) ;
        removeIdMenu('#mini-panel-about_eurofound_mini_panel');

        localStorage['submenuThemmes'] = $('#mini-panel-themes_mini_panel ul.dropdown').html();
        $('#mini-panel-themes_mini_panel').parent().parent().append(localStorage['submenuThemmes']);
        removeIdMenu('#mini-panel-themes_mini_panel');

        localStorage['submenuDataExplorer'] = $('#mini-panel-data_explorer ul.dropdown').html();
        $('#mini-panel-data_explorer').parent().parent().append(localStorage['submenuDataExplorer']);
        removeIdMenu('#mini-panel-data_explorer');

        localStorage['submenuSurveys'] = $('#mini-panel-surveys_mini_panel ul.dropdown').html();
        $('#mini-panel-surveys_mini_panel').parent().parent().append(localStorage['submenuSurveys']);
        removeIdMenu('#mini-panel-surveys_mini_panel');

        localStorage['submenuObs'] = $('#mini-panel-observations ul.dropdown').html();
        $('#mini-panel-observations').parent().parent().append(localStorage['submenuObs']) ;
        removeIdMenu('#mini-panel-observations');

        localStorage['submenuNews'] = $('#mini-panel-news_mini_panel ul.dropdown').html();
        $('#mini-panel-news_mini_panel').parent().parent().append(localStorage['submenuNews']);
        removeIdMenu('#mini-panel-news_mini_panel');

        // Add the back button for each menu responsive screen
        $('.ef-navigation-menus ul.dropdown').prepend(goBack);

        // Delete minipanels divs

        if($('li.has-dropdown > div').length > 0){
          $('li.has-dropdown > div').parent().remove();
        }



        $('.ef-navigation-menus').css( "left", 0 ).removeClass('ef-navigation-menus');

        $('#main-menu').css('height','');

        // when the page is displayed on mobile device section with class=ef-top  shall have class = ef-top-bar
        $('section.ef-top').removeClass('ef-top').addClass('ef-top-bar');

        // Insert magnifyglass icon for responsive menu
        if($('section.block-search-form a.search-top-bar').length == 0){
          applyTopBarStyling();
        }else{
          $("a.user-top-bar").css('display','block');
          $("a.search-top-bar").css('display','block');
        }

        // show the menu
        $('#main-menu').css('opacity','1');

      }else{

          // DESKTOP
          // Clear classes we have add for responsive menu and hide elements
          $('#main-menu').removeClass('top-bar expanded');
          $('.top-bar-section').removeClass('top-bar-section').addClass('ef-navigation-menus').css( "left", 0 ).html(localStorage['menu']);

          $('#main-menu ul.title-area').css('display','none');
          $('#main-menu').css('height','auto');
          $("a.user-top-bar").css('display','none');
          $("a.search-top-bar").css('display','none');

          // rename the section ef-top-bar  to ef-top
           $('section.ef-top-bar').removeClass('ef-top-bar').addClass('ef-top');
           $('#main-menu').css('opacity','1');
      }
    });


    // delete elements id
    function removeIdMenu(idMainMenu){
     $(idMainMenu).removeAttr( "id" );
    }

    function hideOptionsMenu(){
        $('#main-menu').removeAttr("style");
        $('#main-menu .top-bar-section').removeAttr("style");
        $('#main-menu').removeClass('expanded');
    }

    function hideItemsMainMenu(itemMenu){
      //console.log(itemMenu);
      if(itemMenu == "Menu"){
        $("#search-block-form").removeClass("active");
        $('.dd-click-off-close').css('display','none');
        $("a.user-top-bar").removeClass("selected");
        $("a.search-top-bar").removeClass("selected");
      }
      if(itemMenu == "Search"){
        $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").removeClass("active");
        $('.dd-click-off-close').css('display','none');
        $("a.user-top-bar").removeClass("selected");
      }
      if(itemMenu == "User"){
        $("#search-block-form").removeClass("active");
        $('.dd-click-off-close').css('display','none');
        $("a.search-top-bar").removeClass("selected");
      }
    }
    function applyTopBarStyling() {
      // Actions USER icon
      $( ".ef-top-bar .block-menu-menu-ef-user-login-links-menu" ).prepend( "<a class='user-top-bar' href='#'>User</a>");
      $("a.user-top-bar").click(function(){
        $(this).toggleClass("selected");
        $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").toggleClass("active");
        hideOptionsMenu();
        hideItemsMainMenu($(this).text());
      });

      // Actions BRUGER icon
      $(".menu-icon a").click(function(){
        $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").removeClass("active");
        hideItemsMainMenu($(this).text());
      });

      // Actions SEARCH icon
      $( ".ef-top-bar .block-search").prepend( "<a class='search-top-bar' href='#'>Search</a>" );
      $("a.search-top-bar").click(function(){
        $(this).toggleClass("selected");
        $(".ef-top-bar #search-block-form").toggleClass("active");
        hideOptionsMenu();
        hideItemsMainMenu($(this).text());
      });

      // Actions LANGUAGE DROPDOWN
      $('a.dd-selected').click(function(){
        $(".ef-top-bar #search-block-form").removeClass("active");
        $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").removeClass("active");
        $("a.user-top-bar").removeClass("selected");
        $("a.search-top-bar").removeClass("selected");
        hideOptionsMenu();
      });

/*
      $(".ef-top-bar #main-menu li a").each(function() {
          var $link = $(this);
          $link.parent('li').removeClass('icon-ef_' + $link.html().toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
          $link.addClass('icon-ef_' + $link.html().toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
      });
*/
    }
  });
})(jQuery);

//  END BUILDING RESPONSIVE MENU


/* HOME PAGE NEW BLOCK */

(function ($) {
$(document).ready(function(){
      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[form_pages.length-2];

      if(pathname_form ==''){
        if($(".home-block-video .pane-content div").hasClass("media")){
          var mediaBlock =  $(".home-block-video .pane-content .media").html();
          $(".home-block-video .pane-content .media").remove();
          $( '<div class="media">').insertBefore( ".home-block-video .pane-content" );
          $( '.home-block-video  .media').html(mediaBlock);

          var linkmedia = $('.home-block-video  .media .file-image > a').attr('href');
          if(linkmedia != undefined){
             $('.home-block-video  .media .content > img').css('cursor','pointer');
          }

          // if we have selected displays as teaser
          if($('.home-block-video  .media .content  img').hasClass('file-teaser')){
            $('.home-block-video  .media .content > a').attr('href', linkmedia);
          }else{
            // if we have selected displays as default
            $('.home-block-video  .media .content > img').click(function(){
             if(linkmedia != undefined){
               window.location.href = linkmedia;
             }
            });
          }

        }

        if($(".home-block-video .pane-content p iframe").length > 0){
          var mediaBlockVideo = $(".home-block-video .pane-content p").html();

          $(".home-block-video .pane-content  p iframe").remove();
          $( '<div class="media">').insertBefore( ".home-block-video .pane-content" );
          $( '.home-block-video .media').html(mediaBlockVideo);
        }

      };
  });
})(jQuery);

/* END HOME PAGE NEW BLOCK */

/** IMPORTANT KEY TOPCIS HOME  **/
(function ($) {
$(document).ready(function(){
      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[form_pages.length-1];


      if($('.pane-ef-key-topics-home') || pathname_form == 'topic'){

        var importantKeyTopics = '<div class="important-key-topics-group"></div>';
        var notImportantKeyTopics = '<div class="not-important-key-topics-group"></div>';
        $( ".view-id-ef_key_topics_home .view-content").prepend(notImportantKeyTopics);
        $( ".view-id-ef_key_topics_home .view-content").prepend(importantKeyTopics);


        $('.key-topics-list p.not-important-key-topics').parent().appendTo($('.not-important-key-topics-group'));
        $('.key-topics-list p.important-key-topics').parent().appendTo($('.important-key-topics-group'));


      };
  });
})(jQuery);

/** END IMPORTANT KEY TOPCIS HOME **/

/** QRR ADMIN  **/
(function ($) {
$(document).ready(function(){
      var form_pages=window.location.pathname.split("/");
      var pathname_form=form_pages[form_pages.length-2];
      var pathname_form1=form_pages[form_pages.length-1];

      if(pathname_form =='ef-qrr' || pathname_form1 =='ef-qrr'){
        $("div.form-wrapper").wrapAll( "<div class='filters-wrapper' />");
      };
  });
})(jQuery);

/** END QRR ADMIN **/






/** PUBLICATIONS MAIN MENU LARGE-6 TO LARGE-9 **/
(function ($) {
$(document).ready(function(){
    $('.ef-navigation-menus .menu-minipanel-publication-mini-panel #mini-panel-publication_mini_panel .large-6').removeClass('large-6').addClass('large-10');
    $('.ef-navigation-menus .menu-minipanel-publication-mini-panel #mini-panel-publication_mini_panel .large-3').removeClass('large-3').addClass('large-2');
  });
})(jQuery);
/** END PUBLICATIONS MAIN MENU LARGE-6 TO LARGE-9 **/
/** HOVER AFTER MAIN MENU FOR SUBMENU **/
(function ($) {
$(document).ready(function(){

  $('#main-menu-links > li').each(function( index ) {
    if($( '> ul',this ).attr('class') == undefined){
       var classLinkMenu = $( '> a',this ).attr('class');
       $( '> a',this ).attr('class',classLinkMenu + ' noSubmenu');
    }
  
});

  });
})(jQuery);
/** END HOVER AFTER MAIN MENU FOR SUBMENU **/

/** BREADCRUMBS FOR Tackling undeclared work database **/
(function ($) {
  $(document).ready(function(){
    $('.page-data-tackling-undeclared-work-in-europe-database ul.breadcrumbs li.current').text('Database');
  });
})(jQuery);
/** END BREADCRUMBS FOR Tackling undeclared work database **/

/** BREADCRUMBS FOR country profile **/
(function ($) {
  $(document).ready(function(){
    $('.page-node.section-country.page-node-56423 ul.breadcrumbs li.current').text('Country');
  });
})(jQuery);
/** END BREADCRUMBS FOR country profile **/
