
(function ($, Drupal) {
	
	var run_once = 0;

  Drupal.behaviors.effoundationtheme = {
    attach: function(context, settings) {
      // Get your Yeti started.

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

      var $filter_rows = Math.floor($num_filters/3);
      if( ($filter_rows % $num_filters) > 0 ){$filter_rows++;}
            
      for (var i = 0; i <= $filter_rows; i++) {
        var first = 3 * i;
        var last = 3 * (i + 1);
        $('.view-filter').slice(first, last).wrapAll('<div class="wrap-row-filters"></div>');
      }

      $('.view-button').wrapAll('<div class="wrap-row-buttons"></div>');
      // end wrap filters and buttons in views      

      /* --- erm regulation --- */
      	
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

      	$('#webform-component-ef-webform-daily-allowance .fieldset-wrapper .webform-component-radios').slice(0,3)
  			.wrapAll('<div class="webform-daily-day large-4 columns"></div>');
  		$('#webform-component-ef-webform-daily-allowance .fieldset-wrapper .webform-component-radios').slice(3,6)
  			.wrapAll('<div class="webform-daily-day large-4 columns"></div>');
  		$('#webform-component-ef-webform-daily-allowance .fieldset-wrapper .webform-component-radios').slice(6,9)
  			.wrapAll('<div class="webform-daily-day large-4 columns"></div>');



	    $('#webform-component-meeting-secretary').addClass('assistant-form');
		$('#webform-component-remarks-from-meeting-secretary').addClass('assistant-form');
		$('#webform-component-expert-fee').addClass('assistant-form');
		$('#webform-component-validate').addClass('assistant-form');
		$('#webform-component-assistant-comment').addClass('assistant-form');

		$('.assistant-form').wrapAll('<div class="assistant-form-wrap"></div>');
		$('.assistant-form-wrap').prepend('<h3 class="assistant-form-title">Assistant webform</h3>');

		/* -- End assistant --- */


      	/* --- Case studies custom (Bilbomatica) --- */

      	$('.page-case-studies-emcc #views-exposed-form-case-studies-page .views-submit-button').before('<div style="clear:both;"></div>');

      	// 5 displays - case studies //
      	// 1 of 5 emcc(1)
      	$('.page-observatories-emcc-case-studies-the-greening-of-industries-in-the-eu #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');	
      	// 2 of 5 emcc(2)
      	$('.page-observatories-emcc-case-studies-tackling-undeclared-work-in-europe #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');
      	// 3 of 5 eurwork(1)	
      	$('.page-observatories-eurwork-case-studies-attractive-workplace-for-all #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');
      	// 4 of 5 eurwork(2)	
      	$('.page-observatories-eurwork-case-studies-ageing-workforce #views-exposed-form-case-studies-page .views-submit-button')
      		.before('<div style="clear:both;"></div>');
      	// 5 of 5 eurwork(3)
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
			}); 
			$("a.user-top-bar").blur(function(){
			  $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").removeClass("active");
			  
			}); 
			
			$("a.search-top-bar").click(function(){
			  $(".ef-top-bar #search-block-form").toggleClass("active");
			  $(".top-bar").removeClass("expanded");
			}); 
			$("a.search-top-bar").blur(function(){
			  $(".ef-top-bar #search-block-form").removeClass("active");
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
			if ($(".pagination-centered").length) {
				$(".ef-main .view-content").first().after("<div class='view-footer-wrapper'></div>");
				$(".view-footer-wrapper").prepend($(".view-footer"));
				$(".view-footer-wrapper").prepend($(".pagination-centered"));
				//$(".view-footer-wrapper").prepend($(".view h2"));
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
				console.log("clicked");
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
