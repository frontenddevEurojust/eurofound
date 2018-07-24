/**
* EWORX S.A.
* @author kp//eworx.gr
* Template file observs the results of an elementsQuery and performs a fix once they exist
* override/implement generalFixes functions and set elementsQuery variable
*/

jQuery(document).ready(function($) {

	var elementsQuery = "#edit-field-cwb-level-tid-selective .option";
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

		$.each($elementsResults , function() {
			var $this = $(this);
			var addClassName = $.trim($this.text().replace('-',''));
			$this.addClass(addClassName);			
		});
	}

});
