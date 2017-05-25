/*********************************************************
* Eworx S.A. - 2012 / 2014
* @Author kp at eworx.gr
* time-series related js code
**********************************************************/

jQuery(document).ready(function($) {
	var hasBeenInitiated = false;

	function getValidVariables(){
		/* get the valid variables from the hidden html elements */
		var valid_variables = [];
		var valid_variables_index = -1;

		$.each( $(".valid_variables"), function() {
			valid_variables_index++;

			var $this = $(this);

			$this.addClass("tabularNameTitle_"+getTabularColumnName($.trim($this.text())));
			var $thisParentContainer = $this.parent().parent();
			$thisParentContainer.addClass("valid_variables_tooltip_" + valid_variables_index);

			valid_variables.push($this.text());
		});
		return valid_variables;
	}

	function getTabularColumnName(title){
		if(title.indexOf("[")!=-1){
			var tokens = title.split("[");
			return tokens[1].replace("]","");
		}
		return title;
	}

	function abreviateRetainValidVariables(){
		/*
			Remove invalid variables, and abbriviate them
			based on the text contained in [...] and set the title attribute based on the remaining text.
		 */
		var valid_variables = getValidVariables();
		var valid_variables_index = -1;

		var $inputVariables = $("input[name='variables[]']");
 


		$.each( $inputVariables, function() {

			var $this = jQuery(this);
			var $thisNext = $this.next();
			//var thisNextText = $thisNext.text().trim();
			var thisNextText = $.trim($thisNext.text());

			if($.inArray(thisNextText, valid_variables)!=-1){

				if(thisNextText.indexOf("[")!=-1){

					var tokens = thisNextText.split("[");

					var variableDescription = tokens[0];

					if(variableDescription.indexOf("(")!=-1){
						variableDescription = variableDescription.substring(0, variableDescription.indexOf("("));
					}

					var variableTitle = tokens[1].replace("]","");

					$thisNext.text(variableDescription).attr("title", variableDescription).addClass("tooltip");

					$this.attr("title", variableDescription).addClass("tooltip");
					$("." + variableTitle).attr("title", variableDescription).addClass("column_variable");

				}
			}else{
				$this.parent().remove();
			}

		});
	}

	function variablesInitialization(){

			if(hasBeenInitiated){
				return false;
			}

			var removedColumns = []; 
			for(var i=1;i<4;i++)
				if(jQuery(".tablefield tbody .column_"+i+".nonEmpty").size()==0){
					if(jQuery(".tablefield .column_"+i).size()>0){
				    	jQuery(".tablefield .column_"+i).remove();
				    	removedColumns.push(i); 
					}
				}
			
			for(var i=0;i<removedColumns.length;i++){
				for(var j=removedColumns[i]+1;j<4;j++)
				$.each(jQuery(".tablefield .column_"+(j) ) , function() {
					$(this).removeClass("column_"+(j)).addClass("column_"+(j-1));
				});
			}


			var $edit_variables_wrapper = jQuery("#edit-variables-wrapper");

			$validVariables = jQuery(".valid_variables");
			$inputVariables = jQuery("input[name='variables[]']");
			$footerMF = jQuery(".ef-footer");

			if(	$edit_variables_wrapper.size() == 0 || $inputVariables.size()==0 || $validVariables.size()==0 || $footerMF.size()==0){

				return false;
			}

			hasBeenInitiated = true;

			abreviateRetainValidVariables();
			$inputVariables = jQuery("input[name='variables[]']");
  
			if($edit_variables_wrapper.find("input[name='variables[]']:checked").size() == 0){
				//ensure at least one variable, the first, is always selected
				var $firstVariable = $("input[name='variables[]']").first();
				$firstVariable.prop('checked', true);

				$('select#edit-sector').find('option:selected').removeAttr('selected');
				
				$('select#edit-sector option').each(function(index, element){
					if ($(element).attr('value') == '13845'){
						$(element).attr('selected', 'selected');
						$('select#edit-sector').trigger("chosen:updated");
					}
				});

				$('select#edit-scope').find('option:selected').removeAttr('selected');

				$('select#edit-scope option').each(function(index, element){
					if ($(element).attr('value') == '13860'){
						$(element).attr('selected', 'selected');
						$('select#edit-scope').trigger("chosen:updated");
					}
				});
				// LLAMADA A MORDOR
				jQuery("#views-exposed-form-cwb-time-series-page").submit();
			}else{
				$edit_variables_wrapper
					.css("display", "inline") //from original state display:none
					.css("opacity", 1);
					
				// Add respective tooltips

				var valid_variables_index = -1;

				$.each($inputVariables , function() {
					valid_variables_index++;

					var $tooltipHtml = $(".valid_variables_tooltip_" + valid_variables_index).first();

					$tooltipHtml = $tooltipHtml.clone();

					var abriviatedText = $tooltipHtml.find(".valid_variables a").text().replace("(",", ").replace(")", "").replace( new RegExp("\\[.*\\]","gm"),"")

					$tooltipHtml.find(".valid_variables a").text(abriviatedText);
					Tipped.create(
					 $(this).parent(),
					 	$tooltipHtml.html(), 
					 getTopTooltipSkin()
					);
				});

				return true;
			}
			return false;
	}

	function time_series_delayedFixes(){}
    
	function time_series_generalFixes(){
		jQuery(".view-filters").hide() ;
		if(variablesInitialization()==false && !hasBeenInitiated){
			setTimeout(time_series_generalFixes, 100);
			return false;
		}

		//onCountryChange
		if($("#edit-series-id").size()>0){
			$( "#edit-country" ).change(function() {
			 	$("#edit-series-id").val($("#edit-series-id option:first").val());
			});
		}

		if(jQuery(".tablefield tbody .nonEmpty:not(.year)").size()==0){
			jQuery(".tablefield").parent().html('<h4 class=\"noDataMessage\">No information available</h4>');
			jQuery("#loadingSVG").remove();
		}

		jQuery(".view-filters").show();

	}



	function getTopTooltipSkin(){
		return {
				skin: 'light',
				hook: 'topright',
				target: 'mouse',
				maxWidth: 185
			 };
	}


	setTimeout(time_series_generalFixes, 100); 

});