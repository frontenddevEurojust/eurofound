/*********************************************************
* Eworx S.A. - 2012 / 2013
* @Author kp at eworx.gr
* time-series / outcomes related js code
**********************************************************/

(function ($) {

	function getValidVariables(){
		/* get the valid variables from the hidden html elements */
		var valid_variables = [];
		var valid_variables_index = -1;

		jQuery.each( $(".valid_variables"), function() {
			valid_variables_index++;

			var $this = $(this);
			var $thisParentContainer = $this.parent().parent();
			$thisParentContainer.addClass("valid_variables_tooltip_" + valid_variables_index);

			valid_variables.push($this.text());
		});
		return valid_variables;
	}

	function abreviateRetainValidVariables(){
		/*
			Remove invalid variables, and abbriviate them
			based on the text contained in [...] and set the title attribute based on the remaining text.
		 */
		var valid_variables = getValidVariables();
		var valid_variables_index = -1;

		var $inputVariables = $("input[name='variables[]']");
		if($inputVariables.length == 0)
			$inputVariables = $("input[name='field_variables_tid']");


		$.each( $inputVariables  , function() {
			var $this = jQuery(this);
			var $thisNext = $this.next();
			//var thisNextText = $thisNext.text().trim();
			var thisNextText =  $.trim($thisNext.text());

			if($.inArray(thisNextText, valid_variables)!=-1){
				if(thisNextText.indexOf("[")!=-1){

					var tokens = thisNextText.split("[");

					var variableDescription = tokens[0];

					if(variableDescription.indexOf("(") !=-1 ){
						variableDescription = ucfirst(variableDescription.substring(variableDescription.indexOf("(")+1 ,variableDescription.indexOf(")")).replace(',',''), false);
					}

					var variableTitle = tokens[1].replace("]","");

					$thisNext.text(variableDescription).attr("title", variableDescription).addClass("tooltip");

					$this.attr("title", variableDescription).addClass("tooltip");
					$("." + variableTitle).attr("title", variableDescription).addClass("column_variable");

				}
			}else{
				$this.remove();
				$thisNext.remove();
			}

		});
	}

	function variablesInitialization(){

			var $edit_variables_wrapper = $("#edit-field-variables-tid");

			if($edit_variables_wrapper.length == 0){
				return false;
			}

			abreviateRetainValidVariables();



			var $inputVariables = $("input[name='variables[]']");
			if($inputVariables.length == 0)
				$inputVariables = $("input[name='field_variables_tid']");

			if($("input[name='variables[]']").length>0 && $edit_variables_wrapper.find("input[name='variables[]']:checked").size() == 0){
				//ensure at least one variable, the first, is always selected
				$("input[name='variables[]']").get(0).click();
			}else{
				if($("input[name='field_variables_tid']").length>0 ){
					if($edit_variables_wrapper.find("input[name='field_variables_tid']:checked").size() == 0){
						//ensure at least one variable, the first, is always selected
						$("input[name='field_variables_tid']").get(0).click();
					}
				}
			}

			// retain the first two, remove the rest			
			$("#edit-field-variables-tid div:gt(2)").remove();

			//

			$edit_variables_wrapper
				.css("display", "inline") //from original state display:none
				.css("opacity", 0)
				.animate({opacity: 1}, 600, function() { });

			// Add respective tooltips
			var valid_variables_index = -1;
			$.each($inputVariables , function() {
				valid_variables_index++;
				Tipped.create($(this).parent(), $(".valid_variables_tooltip_" + valid_variables_index)[0],getTopTooltipSkin());
			});

		return true;
	}

	function getTopTooltipSkin(){
		return {
				skin: 'light',
				hook: 'topright',
				target: 'mouse',
				maxWidth: 185
			 };
	}

	function time_series_delayedFixes(){
		//var $edit_variables_wrapper = $("#edit-variables-wrapper");
		//$edit_variables_wrapper.addClass("tooltip");
		Tipped.create('.column_variable', getTopTooltipSkin());
	}

	function time_series_generalFixes(){
		if(!variablesInitialization()){
			setTimeout(time_series_generalFixes, 300);
			return;			
		}
		//onCountryChange
		if($("#edit-series-id").length>0){
			$( "#edit-country" ).change(function() {
			 	$("#edit-series-id").val($("#edit-series-id option:first").val());
			});
		}
 		time_series_delayedFixes();
		//$('<br /><br /><br /><br />').insertBefore('#edit-variable-type-wrapper');//TODO REMOVETHIS

	}

	setTimeout(time_series_generalFixes, 300);


})(jQuery);
