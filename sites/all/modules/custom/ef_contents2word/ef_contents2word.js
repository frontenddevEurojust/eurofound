(function ($, Drupal) {

  	Drupal.behaviors.efcontents2word = {
    	attach: function(context, settings) {
      	// Get your Yeti started.

	      	$(document).ready(function() {
				$('#views-dynamic-fields-filters-table-sort th:first').html('<a><span class="checkall">Check / uncheck all</span></a>');
				$('#edit-dynamic-field-0-check').parents('tr').hide();
				//$('.view-ef-network-quarterly-reports-export #edit-dynamic-field-2-check').parents('tr').hide();
				if (!$( ".title-fields-1" ).length) $('.view-ef-network-quarterly-reports-export #edit-dynamic-field-0-check').parents('tr').before('<tr><td class="title-fields-1" colspan="3" style="border-top:2px solid #999;color:#fff;background:#005BAA;padding-top:10px !important;padding-left:20px !important;font-weight:bold;font-size:16px;">COMMON FIELDS</td></tr>');
				if (!$( ".title-fields-2" ).length) $('.view-ef-network-quarterly-reports-export #edit-dynamic-field-9-check').parents('tr').before('<tr><td class="title-fields-2" colspan="3" style="border-top:2px solid #999;color:#fff;background:#005BAA;padding-top:10px !important;padding-left:20px !important;font-weight:bold;font-size:16px;">NETWORK QUARTERLY REPORTS</td></tr>');
				if (!$( ".title-fields-3" ).length) $('.view-ef-network-quarterly-reports-export #edit-dynamic-field-35-check').parents('tr').before('<tr><td class="title-fields-3" colspan="3" style="border-top:2px solid #999;color:#fff;background:#005BAA;padding-top:10px !important;padding-left:20px !important;font-weight:bold;font-size:16px;">IC QUARTERLY REPORTS</td></tr>');


				var selected = 1;

				$('#views-dynamic-fields-filters-table-sort span.checkall').live('click', function() {
					//$(this).parents('table').find('input[type="checkbox"]').trigger('click');
					if (selected == 1){
						$(this).parents('table').find('input[type="checkbox"]').prop('checked', false);
						selected = 0;
					}
					else{
						$(this).parents('table').find('input[type="checkbox"]').prop('checked', true);
						selected = 1;
					}
					$('#edit-dynamic-field-0-check').prop('checked', true);

				});

			});

    	}
  	};

})(jQuery, Drupal);
