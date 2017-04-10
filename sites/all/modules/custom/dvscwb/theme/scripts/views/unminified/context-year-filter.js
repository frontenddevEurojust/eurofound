/**
* EWORX S.A.
* @author kp//eworx.gr
* Template file observs the results of an elementsQuery and performs a fix once they exist
* override/implement generalFixes functions and set elementsQuery variable
*/

(function ($) {

	var elementsQuery = ".date-year";
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
		$(".date-year").append($("<div class='yearNextPrev'><a href='javascript:' class='yearPrev'>< Prev</a>"+ " <a href='javascript:' class='yearNext inline'>Next ></a></div>"));
		$(".yearPrev").click(function(){prevYear("#edit-year-value-year", "#views-exposed-form-context-page");});
		$(".yearNext").click(function(){nextYear("#edit-year-value-year", "#views-exposed-form-context-page");});
		$("#edit-year-value-year option[value='']").remove();
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

})(jQuery);


