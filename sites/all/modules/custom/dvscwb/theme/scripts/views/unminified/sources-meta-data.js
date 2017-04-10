/**
* EWORX S.A.
* @author kp//eworx.gr
* Template file observs the results of an elementsQuery and performs a fix once they exist
* override/implement generalFixes functions and set elementsQuery variable
*/

(function ($) {

	var elementsQuery = ".view-cwb-countries-meta-data .views-exposed-widgets";
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
			var sectorFilterHtml =
"			<div class=\"views-exposed-widget \" id=\"edit-sector-wrapper\">"+
"				<div class=\"views-widget\">"+
"					<div class=\"form-item form-type-select form-item-sector\">"+
" 				<label for=\"edit-field-year-value-value-year\">Sector</label> " +

"						<select class=\"form-select\" name=\"sector_\" id=\"edit-field-sector\">";

						var selectedSector = getURLParameter("sector_");
							sectorFilterHtml+=
"							<option " + ("totalEconomy" == selectedSector?"selected":"") + " value=\"totalEconomy\">Total economy</option>" +
"							<option " + ("banking" == selectedSector?"selected":"") + " value=\"banking\">Banking</option>"+
"							<option " + ("chemical" == selectedSector?"selected":"") + " value=\"chemical\">Chemical</option>"+
"							<option " + ("civilService" == selectedSector?"selected":"") + " value=\"civilService\">Civil service</option>"+
"							<option " + ("localGovernment" == selectedSector?"selected":"") + " value=\"localGovernment\">Local government</option>"+
"							<option " + ("metal" == selectedSector?"selected":"") + " value=\"metal\">Metal</option>"+
"							<option " + ("retail" == selectedSector?"selected":"") + " value=\"retail\">Retail</option>";

			sectorFilterHtml +=
"						</select>"+
"					</div>"+
"				</div>"+

"			</div>";
		$elementsResults.prepend(sectorFilterHtml);
		$(".cwbCountryMetaDataTabContent table").attr("border", 0);
	}


})(jQuery);