
function getCountryMouseOverHTMLTooltip(country){
	var countryRelator = jQuery(".countryRelator."+country);
	if(countryRelator.length==0)return country;
	var countryName = countryRelator.text();
	var countryId = countryRelator.attr("class");
	countryId = countryId.substring(countryId.indexOf("country_tid_")+12);
	//--------
	var yearValue = jQuery("#edit-field-year-value-value-year").val();
	

	var countryValue = jQuery(".country."+stringToID(countryName));
	var sectorValue = jQuery("#edit-sector option:selected").text(); 
	
	var result = "<h3>"+countryName + " - " + yearValue +"</h3>";
	result += "<h4 class='sectorValue'>" + sectorValue + "</h4>";

	var valueName = jQuery("#edit-field-variables-tid-wrapper label:first").text();
	var valueType = jQuery(".form-item-field-variables-tid.checked label").text();
	countryValue = countryValue.next().text()  ;


	result += "<dl>"+
		"	<dt class='variableName'> "+valueName +" <span>"+valueType+ "</span></dt>" +
		"	<dd class='variableValue'>" +countryValue+ "</dd>" +
		"</dl>";

	result += "<a class='timeSeriesLink tooltipLink' href="+countryRelator.find("a").attr("href")+">View "+countryName+"'s time series</a>";

	return result;
}

function stringToID(input){
	return input.trim().toLowerCase().replace(" ", "-");
}