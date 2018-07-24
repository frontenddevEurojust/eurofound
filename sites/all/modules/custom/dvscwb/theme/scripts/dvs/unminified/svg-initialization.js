/**
* EWORX S.A.
* @author kp//eworx.gr
* Template file observs the results of an elementsQuery and performs a fix once they exist
* override/implement generalFixes functions and set elementsQuery variable
*/

var svgSupported = false;

function supportsSvg() {
	//return false;
	var N=document.createElement("div");
	N.innerHTML="<svg></svg>";
	var O=N.firstChild&&"namespaceURI" in N.firstChild&&N.firstChild.namespaceURI=="http://www.w3.org/2000/svg";
	return O;
	//http://html5test.com/index.html
}

/**
* EWORX S.A.
* @author kp//eworx.gr
* Template file observs the results of an elementsQuery and performs a fix once they exist
* override/implement generalFixes functions and set elementsQuery variable
*/

var loadA = false;
var loadB = false;

if(supportsSvg() == true){ 
	svgSupported = true;
	jQuery.getScript("/DVS/DVT/scripts/svgoptimizer/svg-parser.js" ).done(function(script, textStatus) {loadA = true;});
	jQuery.getScript("/DVS/DVT/scripts/svgoptimizer/svg-optimiser.js" ).done(function(script, textStatus) {loadB = true});
} 


(function ($) {

	var elementsQuery = ".cwb_visualization";
	//----------------------------------------
	var $elementsResults;
	var loaded = false;	
	var trial = 0;	
	var trialsMax = 300;	
	var retryDelay = 300;

	function elementsExits(){
		trial++;
		$elementsResults = $(elementsQuery);
		if($elementsResults.length>0 && loadA && loadB)
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
		
		if(svgSupported){
			$elementsResults.remove();
			updateSVG();
		}

	}

 

})(jQuery);