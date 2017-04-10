/**
* EWORX S.A.
* @author kp//eworx.gr
* Template file observs the results of an elementsQuery and performs a fix once they exist
* override/implement generalFixes functions and set elementsQuery variable
*/

(function ($) {

	var elementsQuery = ".tablefield";
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
		makeTableFieldsSortable();
	}

	function makeTableFieldsSortable(){	
		$elementsResults.tablesorter( {sortList: [[0, 0]] } ); //sort by the first column
	}

})(jQuery);