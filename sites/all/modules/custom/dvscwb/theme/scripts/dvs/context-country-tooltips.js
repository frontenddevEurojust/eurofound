
function getCountryMouseOverHTMLTooltip(country){
	
	var countryRelator = jQuery(".countryRelator."+country);
	if(countryRelator.length==0)return country;
	
	var countryName = countryRelator.text();
	var countryId = countryRelator.attr("class");
	countryId = countryId.substring(countryId.indexOf("country_tid_")+12);
	//--------
	var yearValue = jQuery("#edit-year-value-year").val();
	
	var countryValue = jQuery(".country."+stringToID(countryName));
	countryValue = "<dl><dt class='level'>Level</dt><dd class='levelValue'>" + countryValue.next().text() + "</dd><dt class='coordination'>Coordination</dt><dd class='coordinationValue'>" + countryValue.next().next().text() + "</dd></dl>"

	var result = "<h3>"+countryName + " - " + yearValue +"</h3>"; 	
	result += countryValue;

	result += "<a class='timeSeriesLink tooltipLink' href="+countryRelator.find("a").attr("href")+">View"+countryName+"'s time series</a>";

	return result;
}

function stringToID(input){
	return input.trim().toLowerCase().replace(" ", "-");
}