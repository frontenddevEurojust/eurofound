(function ($, Drupal) {

  	Drupal.behaviors.efTaxonomyFieldOptgroup = {
    	attach: function(context, settings) {
      	// Get your Yeti started.
      	
	      	$(document).ready(function() {

				function applyParentChildCascadeDropdown(parentSelectId, childSelectId, childChosenSelectId) {
					$("#" + parentSelectId + " input[type=checkbox]").click(function () {toggleParentChildren($(this));});
					
					toggleAllParentChildren();
					$("#" + childChosenSelectId + " .chosen-choices input").focusin(toggleAllParentChildren);
					$("#" + childChosenSelectId + " .chosen-choices").click(toggleAllParentChildren).focus(toggleAllParentChildren).keyup(toggleAllParentChildren);
					
					function toggleAllParentChildren() {
						$("#" + parentSelectId + " input[type=checkbox]").each(function () {
							toggleParentChildren($(this));
						});
					}	

					function toggleParentChildren($parentCheckbox) {
						var $chosen_results = $("#" + childChosenSelectId + " .chosen-results");
			
					    var label = $.trim($parentCheckbox.parent().find('label').html());

					    var checked = $parentCheckbox.attr('checked') !== undefined;
					    var $optgroup = $("#" + childSelectId + ' optgroup[label="' + label + '"]');
					    $optgroup.toggle(true);
					    
					    var $chosen_group = $chosen_results.find('.group-result:contains("' + label +'")');
					    $chosen_group.toggle(true).nextUntil('.group-result').toggle(true);
					}
				}

				//apply for theme->topic selects
				applyParentChildCascadeDropdown('edit-field-ef-theme-und', 'edit-field-ef-topic-und', 'edit_field_ef_topic_und_chosen');
				
			});

    	}
  	};

})(jQuery, Drupal);
