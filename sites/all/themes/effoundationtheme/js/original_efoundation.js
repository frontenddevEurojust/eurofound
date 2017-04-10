(function ($, Drupal) {

  Drupal.behaviors.effoundationtheme = {
    attach: function(context, settings) {
      // Get your Yeti started.
	
		function applyTopBarStyling() {
			$('.ef-top-bar #lang-dropdown-select-language option').each(function() {
				$(this).text($(this).val());
			});
			$( ".ef-top-bar .block-menu-menu-ef-user-login-links-menu" ).prepend( "<a class='user-top-bar' href='#'>User</a>" );
			$( ".ef-top-bar .block-search").prepend( "<a class='search-top-bar' href='#'>Search</a>" );
			$("a.user-top-bar").click(function(){
			  $(".ef-top-bar .block-menu-menu-ef-user-login-links-menu .menu ").toggleClass("active");
			}); 
			
			$("a.search-top-bar").click(function(){
			  $(".ef-top-bar #search-block-form").toggleClass("active");
			}); 
			
			$(".ef-top-bar #main-menu li a").each(function() {
			    var $link = $(this);
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
		}

		/**
		 ** Adds css class to menu links based on the link text
		 ** e.g. About Eurofound => icon-ef_about_eurofound
		 ** Adds css class to log-in and sing up links. 
		**/
		function applyMenuCssClasses() {
			$(".block-menu-menu-ef-user-login-links-menu .first a").addClass('icon-ef_login');
			$(".block-menu-menu-ef-user-login-links-menu .last a").addClass('icon-ef_signup');		
			$("#main-menu-links li a, .block-main-menu-sub-menu li a").each(function() {
			    var $link = $(this);
			    var $used_link = $link.attr('href');
			    var $ready_link = $used_link.substr(4);
			    var $test = $ready_link.toLowerCase();
			    var $match = $used_link.match(/\//g);
			    var $length = $match.length;
			    console.log($ready_link);
			    console.log($link.html());
			    //gets the link's text and transforms it to lowercase and replaces all non alpharithmetic characters to underscore
			    //prefix of the css class is icon-ef_
			    if($length>1){
			    	if($ready_link=='ef-themes')
			    		$link.addClass('icon-ef_' + 'themes'.toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
					if($ready_link=='about')
						$link.addClass('icon-ef_' + 'about_eurofound'.toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
					else
						$link.addClass('icon-ef_' + $ready_link.toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
				}
				else
					$link.addClass('icon-ef_' + $link.html().toLowerCase().trim().replace(/[^a-z0-9]+/gi, '_').replace(/^_+/, '').replace(/_+$/, ''));
			
			});
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
			$("#node_ef_event_full_group_venue_details").wrap('<a name="venue" />');
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

		function addFlags(){
			$('.lang_dropdown_form').last().each(function(){
					$(this).children().first().addClass('dropdown-language-parent');
				});
				$('.lang-dropdown-select-element').last().each(function(){
						$(this).children().each(function(){
							var flag_value= $(this).attr('value');
							$(this).attr('data-imagesrc','\/sites\/all\/modules\/contrib\/languageicons\/flags\/'+flag_value+'.png');
						});
				});
				var ddData = [];
				$('.dropdown-language-parent').ddslick({
						    data: ddData,
						    width: 300,
						    imagePosition: "right",
						    selectText: "Choose your language",
	  					    onSelected: function (data) {
	  					    	var my_link = data['selectedData']['value'];
	  					    	if(my_link=='en')
	  					    		window.location ='/';
		 		      			else
	  					    		window.location = my_link;
						    }
						   
				});
			}
		addFlags();
		venueAnchor();
		applyTogglesForNextElements();
		applyViewsExposedFiltersStyling();
		applyRemoveClassesFromBreadcrumbs();
		applyMenuCssClasses();
		fixPopupLayoutTables();
		applyShortcutLinksCssClasses();
		applySearchInputPlaceholder();
		applyTopBarStyling();
		

    }
  };

})(jQuery, Drupal);
