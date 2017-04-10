/*********************************************************
* Eworx S.A. - 2012 / 2013 / 2014
* @Author kp at eworx.gr
* time-series / outcomes related js code
**********************************************************/

jQuery(document).ready(function($) {

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


		$.each( $inputVariables, function() {
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
			if(hasBeenInitiated){
				return false;
			}
			var $edit_variables_wrapper = jQuery("#edit-field-variables-tid");
			var $inputVariables = jQuery("input[name='field_variables_tid']");
			var $validVariables = jQuery(".valid_variables");
			var $footerMF = jQuery(".ef-footer");

			if($edit_variables_wrapper.size() == 0 || $inputVariables.size() == 0 || $validVariables.size() == 0 || $footerMF.size()==0){

				return false;
			}

			hasBeenInitiated = true;

			abreviateRetainValidVariables();

			if($edit_variables_wrapper.find("input[name='field_variables_tid']:checked").size() == 0){
				//ensure at least one variable, the first, is always selected
				$inputVariables.first().click();
			}
				 
			// retain the first two, remove the rest			
			$("#edit-field-variables-tid div:gt(2)").remove();
			
			$inputVariables = jQuery("input[name='field_variables_tid']");


			$edit_variables_wrapper
				.css("display", "inline") //from original state display:none
				.css("opacity", 1);
				//.animate({opacity: 1}, 600, function() { });

			// Add respective tooltips
			var valid_variables_index = -1;
			$.each($inputVariables , function() {
				valid_variables_index++;
				var $tooltipHtml = $(".valid_variables_tooltip_" + valid_variables_index).first();
				//$tooltipHtml = jQuery($tooltipHtml);
				$tooltipHtml.find(".valid_variables a").text($tooltipHtml.find(".valid_variables a").text().replace("(",", ").replace(")", "").replace( new RegExp("\\[.*\\]","gm"),"") );
				Tipped.create($(this).parent(), $tooltipHtml[0], getTopTooltipSkin());
			});

			$("#edit-field-variables-tid-wrapper").css("opacity","1");
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
		if(jQuery(".tablefield tbody .nonEmpty:not(.country)").size()<=5){
			jQuery(".view-cwb-outcomes .view-content section, .dataSource").remove();
			jQuery(".view-cwb-outcomes .view-content .tablefield").before('<h4 class=\"noDataMessage\">No information available  <span>(entries below 5)</span></h4>');
			jQuery("#visualization").css("display","none");
			
			jQuery(".exportOptions").remove();
			jQuery("#loadingSVG").remove();
		}

	}

	var hasBeenInitiated = false;
	function time_series_generalFixes(){
		
		if(!variablesInitialization()  && !hasBeenInitiated){
			setTimeout(time_series_generalFixes, 300);
			return;			
		} 
 		time_series_delayedFixes();
	 

	}

	setTimeout(time_series_generalFixes, 300);


});
