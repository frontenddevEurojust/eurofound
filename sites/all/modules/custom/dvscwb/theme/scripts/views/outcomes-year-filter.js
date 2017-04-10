/**
* EWORX S.A.
* Eworx S.A. - 2012 / 2013 / 2014
* @author kp//eworx.gr
* Template file observs the results of an elementsQuery and performs a fix once they exist
* override/implement generalFixes functions and set elementsQuery variable
*/
 

jQuery(document).ready(function($) {


	var elementsQuery = ".views-exposed-widgets";
	//----------------------------------------
	var $elementsResults;
	var loaded = false;	
	var trial = 0;	
	var trialsMax = 300;	
	var retryDelay = 300;

	function elementsExits(){
		trial++;
		$elementsResults = $(elementsQuery);
		if($elementsResults.length>0)
			return true;
		return false;
	}

	function initialize(){
		if(!loaded && trial < trialsMax){
			if(elementsExits()){
				generalFixes();
				loaded = true;
			}else
				setTimeout(initialize, retryDelay);
		}
	}

	setTimeout(initialize, 100);
 

	//----------------------------------------

	function generalFixes(){			
			var yearFilterHtml =

"			<div class=\"views-exposed-widget views-widget-filter-tid_1\" id=\"edit-year-wrapper\">" +

"				<div class=\"views-widget\">"+
"					<div class=\"form-item form-type-select form-item-year\">" +
" 				<label for=\"edit-field-year-value-value-year\">Year" + 
				"</label>" +
"						<select class=\"form-select chosen-single\" name=\"year\" id=\"edit-field-year-value-value-year\">";
						var i = 1999;
						var selectedYear = getURLParameter("year");
						if(selectedYear==null)
							selectedYear = new Date().getFullYear();
						for(i=1999;i<=new Date().getFullYear();i++){
							yearFilterHtml+=
"							<option " + (selectedYear==i?"selected":"") + " value=\""+i+"\">"+i+"</option>";
						}

			yearFilterHtml +=
"						</select>"+
//"<div class=\"yearNextPrev\"><a class=\"yearPrev\" href=\"javascript:\">&lt; Prev</a> <a class=\"yearNext inline\" href=\"javascript:\">Next &gt;</a></div>"+

"					</div>"+
"				</div>"+

"			</div>" 
;

		$elementsResults.prepend(yearFilterHtml);
		$(".yearPrev").click(function(){prevYear("#edit-field-year-value-value-year", "#views-exposed-form-cwb-outcomes-page");});
		$(".yearNext").click(function(){nextYear("#edit-field-year-value-value-year", "#views-exposed-form-cwb-outcomes-page");});

		$year = $('#edit-field-year-value-value-year');
		
		if(getURLParameter("year") != $year.val()){
			$year.val('2000');
			$year.change();
		}

	}


	function nextYear(yearFilter, formFilter){
		$questions = $(yearFilter)[0];
		questionIndex = $questions.selectedIndex;
		questionsLength = $questions.length;
		$questions.selectedIndex = questionIndex < questionsLength -1 ? questionIndex + 1 : 0;
		$(formFilter)[0].submit();
	}

	function prevYear(yearFilter, formFilter){
		$questions = $(yearFilter)[0];
		questionIndex = $questions.selectedIndex;
		questionsLength = $questions.length;
		$questions.selectedIndex = questionIndex > 0 ?questionIndex-1:questionsLength-1;
		//$("#question").trigger("change");
		$(formFilter)[0].submit();
	}

});


