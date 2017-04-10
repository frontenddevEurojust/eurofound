//kp//eworx//gr// EWORX S.A. 2013 // derived from DVT
 
var svgOriginalWidth = 740;
var svgOriginalHeight = 740;
var svgResponsiveHeight = 740;
var resolveCountries = false;
var alertFill = false;
var colorsToIgnore = ["rgb(0, 0, 0)","rgb(255, 255, 255)", "rgb(242, 242, 242)", "none", "#ffffff", "#39a935", "black", "#000000"];
var requestedVisualizationUrl="";

var colorsTimeSeries = [
		["rgb(167, 189, 67)", "rgb(127, 173, 186)", "rgb(220, 171, 93)", "rgb(229, 220, 187)"], // firefox
		["#a7bd43", "#7fadba", "#dcab5d", "#e5dcbb"] //chrome
	]
;

function updateSVG(){
	//if(jQuery("#svgContainer").hasClass("hidden"))
	setTimeout(surfaceFadeOut, 10);
	var requestLink = jQuery("#svgExport").attr("href");
	//requestLink += "?v=1";
	jQuery.ajax({
		url:requestLink,
		success: function(response) {
			if(response.length<100){
				//alert(requestLink);
				return;
			}
			if(requestedVisualizationUrl == (requestLink + "visited"))
				return;
			
			requestedVisualizationUrl = requestLink + "visited";
			
			$svgContainer	= jQuery("#svgContainer");
			$visualization = jQuery("#visualization");
			
			//optimize svg through js 

			if(true){
				svg_tree = new SVG_Tree(response);
				svg_tree.attrDecimals = getDecimalPlaceFunction(1);
				svg_tree.useCSS = true;
				svg_string = svg_tree.toString();		
				response = svg_string;
			}
			
			
			$svgContainer.html(response).find("symbol").css("overflow", "visible");
			$svgContainerSvg = $svgContainer.find("svg");

			svgOriginalWidth = parseFloat($svgContainerSvg.attr("width").replace("pt",""));
			svgOriginalHeight = parseFloat($svgContainerSvg.attr("height").replace("pt",""));

			ewx_enhanceSVG();
			//scrollTo("#visualizationSection");
		},
		error:function (xhr, ajaxOptions, thrownError){
		}
	});
	setTimeout(checkSVGContent, 5000);
}

	function checkSVGContent(){
		if(jQuery("#svgContainer").html().length == 0 ){
			updateSVG();
		}
	}

	function calculateResponsiveHeightForAndroid(){
		$svgContainerSvg = jQuery("#svgContainer svg");

		var svgResponsiveWidth = $svgContainerSvg.width();

		if(svgResponsiveWidth != null){
			if(svgResponsiveWidth != 100){
				svgResponsiveHeight = (svgResponsiveWidth/svgOriginalWidth) * svgOriginalHeight;
				setTimeout(resizeSVGforAndroid, 100);
			}
		}else{
			setTimeout(calculateResponsiveHeightForAndroid, 200);
		}
	}

	function resizeSVGforAndroid(){
		jQuery('#svgContainer svg').css('height', svgResponsiveHeight);
		jQuery('#svgContainer svg').css('left', "0px");
		jQuery('#svgContainer svg').css('margin-left', "0px");
		//setTimeout(updateMaskMap, 1220)
	}
	
	function ewx_enhanceSVG(){

		$visualization = jQuery("#visualization");
		$svgContainer	= jQuery("#svgContainer");

		$svgContainer.css("opacity", 0);

		$svgContainerSvg = $svgContainer.find("svg");

		$svgContainerSvg.css("width","100%");
		$svgContainerSvg.css("height", "auto");
		$svgContainerSvg.css("height", "100%");

		calculateResponsiveHeightForAndroid();

		$surface = jQuery("#surface0");
		jQuery($surface.children()).css("opacity", 0);

		$svgContainer.removeClass("hidden");

 
		setTimeout(surfaceMapBodyFadeIn, 1000);

		makePathInteracrive();
		//setTimeout(changePreviousVisWidth, 900);
		//setTimeout(updateMaskMap, 1020);
		//makeTextInteracrive();
	}
	
	
	function enhanceSVG(){

		$visualization = jQuery("#visualization");
		$svgContainer	= jQuery("#svgContainer");

		$svgContainer.css("opacity", 0);

		$svgContainerSvg = $svgContainer.find("svg");

		$svgContainerSvg.css("width","100%");
		$svgContainerSvg.css("height", "auto");
		$svgContainerSvg.css("height", "100%");

		calculateResponsiveHeightForAndroid();

		$surface = jQuery("#surface0");
		jQuery($surface.children()).css("opacity", 0);

		$svgContainer.removeClass("hidden");
 
		setTimeout(surfaceMapBodyFadeIn, 1000);

		makePathInteracrive();
		//setTimeout(changePreviousVisWidth, 900);
		//setTimeout(updateMaskMap, 1020);
		//makeTextInteracrive();
	}


	function swapWithSVGContainer(){
		jQuery("#media").val("svg");
		jQuery("#svgContainer").removeClass("hidden");
		jQuery("#visualization").addClass("inv");
	}

 

	var surfaceChilds;
	var surfaceChildIndex = 1 ;

	function surfaceMapBodyFadeIn(){
		jQuery("#svgContainer").css("opacity", 1);
		$surface = jQuery("#surface0");
		surfaceChilds = $surface.children();
		surfaceChildIndex = 0;
		var speed = 80;
		var plot = jQuery("#plot").val();
		
		if(plot == "inCountry")speed = 40;
		if(plot == "crossCountry")speed = 40;
		for(var i = 0; i<=surfaceChilds.length;i++)
			setTimeout(function() {
				surfaceChildIndex++;
			jQuery(surfaceChilds[surfaceChildIndex]).fadeTo("slow", 1);
			}, i * speed);
	}

	function surfaceFadeOut(){
		$surface = jQuery("#surface0");
		surfaceChilds = $surface.children();
		surfaceChildIndex = surfaceChilds.length-2;
		var speed = 30;
		if(jQuery("#plot").val() == "inCountry")speed = 10;
		for(var i = surfaceChildIndex+1; i>=0;i--)
			setTimeout(function() {
				surfaceChildIndex--;
			jQuery(surfaceChilds[surfaceChildIndex]).fadeTo("slow", 0);
			}, i * speed);
	}


	function getMapVisTooltipTheme(){
		return {
			skin: 'light',
			hook: 'topmiddle',
			target: 'mouse',
			background: {opacity:1.0}
		};
	}

function isUndefined(aReference){
	return typeof(aReference) == 'undefined' || typeof aReference === 'undefined';
}


function getEUMapTooltipContent(currentMouseOverCountry){
	return (getCountryMouseOverHTMLTooltip(currentMouseOverCountry));
}

function getCountryMouseOverHTMLTooltip(country){
	return country;//OPA
}

	function makePathInteracrive(){

		var elementQuery = "path";

		jQuery(elementQuery).mouseenter(function(e) {

			$this = jQuery(this);

			var pageURL = window.location.pathname;
			var plot = "time-series";
			
			if(pageURL.indexOf("time-series")==-1)
				plot = "euMap";// we either have time series or map related

			var fill = $this.css("fill");

			for(var i = 0; i<colorsToIgnore.length; i++)
				if(colorsToIgnore[i] == fill)
					return "ignore color";

			var dAttr = $this.attr("d").substring(0, 21);

			if(alertFill)
				alert(fill);

			$elementsOfSameStyle = $this; // select this
			var currentClass = $elementsOfSameStyle.attr("class");				
			var isMalta = false;
			
			if(plot=="euMap"){

				if(fill == "rgb(26, 26, 26)" || fill == "#1a1a1a"){
					isMalta = true;
					currentMouseOverCountry = "MT";
				}else{
					currentMouseOverCountry = getCountryForPath(dAttr);
				}

				Tipped.create(
					$this,
					function(element) {
						return getCountryMouseOverHTMLTooltip(currentMouseOverCountry);
					},
					getMapVisTooltipTheme()
				);			

				var countryMouseOver = currentMouseOverCountry;

			}else{
				//timeSeries
				Tipped.create(
					$this,
					function(element) {
						var counter = 0;
						var $element = jQuery(element);	
						var currentColor = $element.css("fill");

						var previousElement = $element.prev();
						while(previousElement.length != 0){														
							if(previousElement.css("fill")!=fill)
								break;
							counter++;
							previousElement = previousElement.prev();
						}
						
						var timeSeriesIndex = -1;

						timeSeriesIndex = jQuery.inArray(fill, colorsTimeSeries[0]);
						if(timeSeriesIndex == -1)
							timeSeriesIndex = jQuery.inArray(fill, colorsTimeSeries[1]);

						//-------------------------
						//find selected Variables
						var $rowZero = jQuery(".row_0");
						
						var variables = [];
						for(var i = 1;i<$rowZero.children().length;i++)
							variables.push( $rowZero.find(".column_"+i).text() );		

						variables.sort();

						var nonEmptyOrderedValues = jQuery(".tablefield ."+ variables[timeSeriesIndex].toLowerCase()+".nonEmpty:not(.header)").sort(function(obj1, obj2) {							
							return jQuery(obj1).attr("cell_row") - jQuery(obj2).attr("cell_row");
						});

 						var $valueCell = jQuery(nonEmptyOrderedValues[counter]);
						var yearValue = $valueCell.parent().find(".year").text();
						var country = jQuery(".views-field-name h1").text();

						var tooltipHtml = 
							"<h3>" + country + "</h3> "+
							"<h4>"+ jQuery(".views-field-field-sector").text().trim() +
								", " + jQuery(".views-field-field-scope-employee").text().trim() +
							"</h4>"+ 
					  
							"<dl  class='major'> <dt class='variableName'>" + variables[timeSeriesIndex] + 
							"<span class='variableLargeFullName'> "+
							jQuery(".tabularNameTitle_" + variables[timeSeriesIndex] + "").first().text().replace("(",", ").replace(")", "").replace( new RegExp("\\[.*\\]","gm"),"") +
							"</span>"+	 "</dt>"+

							"<dd class='variableValue'>" + $valueCell.text() +"</dd>"+

							"</dl> <dl class=''><dt>Year</dt><dd>"+yearValue+"</dd>" +

							"</dl> <h3></h3>" ;

						var $providerOfDatabase = jQuery(".views-field-field-provider-of-database");
						var $seriesSource  = jQuery(".views-field-field-series-source");
						var $typeOfData = jQuery(".views-field-field-type-of-data");
						var $typeOfData =  jQuery(".views-field-field-type-of-data");
						var $sectorCovered = jQuery(".views-field-field-sector-covered-by-agreemen"); 

						tooltipHtml += "<dl class='minor'> " ;
						if($providerOfDatabase.length>0)
							tooltipHtml +=  "<dt>" + $providerOfDatabase.find(".views-label").text() + "</dt><dd>"+ $providerOfDatabase.find(".field-content").text() + "</dd>" ;
						if($seriesSource.length>0)
							tooltipHtml +=  "<dt>" + $seriesSource.find(".views-label").text() + "</dt><dd>"+ $seriesSource.find(".field-content").text() + "</dd>" ;
						if($typeOfData.length>0)
							tooltipHtml +=  "<dt>" + $typeOfData.find(".views-label").text() + "</dt><dd>"+ $typeOfData.find(".field-content").text() + "</dd>" ;
						if($sectorCovered.length>0)
							tooltipHtml +=  "<dt>" + $sectorCovered.find(".views-label").text() + "</dt><dd>"+ $sectorCovered.find(".field-content").text() + "</dd>" ;
						if($providerOfDatabase.length>0)
							tooltipHtml +=  "<dt>" + $providerOfDatabase.find(".views-label").text() +"</dt><dd>"+ $providerOfDatabase.find(".field-content").text() + "</dd>" ;
						tooltipHtml +=  "</dl> ";

						return tooltipHtml;
						//return "Time series in graph: " + variables[timeSeriesIndex] + " point " + $valueCell.text() ;
					},
					getMapVisTooltipTheme()
				);	

			}

			if(resolveCountries || plot == "inCountry"){
				$elementsOfSameStyle = jQuery("[class='"+ $this.attr("class") +"']");
				//jQuery("h1").text(currentMouseOverCountry);
			}

			if(plot != "euMatrix")
			if(!isMalta)
				$elementsOfSameStyle.attr("class", "visualizationElementHighlighted");
					
			$this.mouseleave(function() {
				$elementsOfSameStyle.attr("class", currentClass);
				
				if(plot == "euMatrix"){
					positionHorizontalHair("#horizontalHair", "-1");
					positionVerticalHair("#verticalHair", "-1");
				}

			});

			if(resolveCountries)
				$this.click(function(e) {
					alert($elementsOfSameStyle.length);
					var patterns="";
					for(var i=0;i<$elementsOfSameStyle.length;i++){
						patterns+= "\n" + currentMouseOverCountry + "\t" + jQuery($elementsOfSameStyle[i]).attr("d").substring(0, 21);
					}
					alert(patterns);
				});

			if(plot == "euMatrix"){
				var pathMidXY = getPathMidXY($this);
				positionHorizontalHair("#horizontalHair", pathMidXY[0]);
				positionVerticalHair("#verticalHair", pathMidXY[1]);
			}

		});
		
	}

	function makeTextInteracrive(){
			var elementQuery="use";
			jQuery(elementQuery).mouseenter(function() {
			$this = jQuery(this);
			$elementsOfSameStyle = jQuery(
				"[style='"+ $this.parent().attr("style") +"']"
			);

			$elementsOfSameStyle.css("fill-opacity", 0.5 );

			$this.mouseleave(function() {
				$elementsOfSameStyle.css("fill-opacity", 1 );
			});
		});
	}

////////////////////////////////////

function updateTooltipsJs(){
	if(!canvasSupported && !svgSupported){
		return false;
	}
	if(jQuery("#plot").val() == "heatMap")
		jQuery.getScript("/DVS/render/plots/js/"+ getPlotBodyFileName()+ ".js" ).done(
			function(script, textStatus) {
		}).fail(function(jqxhr, settings, exception) {
	});
}


function positionHorizontalHair($horizontalHair, y){

	$horizontalHair = jQuery($horizontalHair);

	$horizontalHair.attr("x1","0%");
	$horizontalHair.attr("x2","100%");

	$horizontalHair.attr("y1", y);
	$horizontalHair.attr("y2", y);
}


function positionVerticalHair($verticalHair, x){

	$verticalHair = jQuery($verticalHair);

	$verticalHair.attr("y1","0%");
	$verticalHair.attr("y2","100%");

	$verticalHair.attr("x1", x);
	$verticalHair.attr("x2", x);
}

function getPathMidXY(elementPath){
	var elementMinMaxXY = getPathMinMaxXY(elementPath);
	return [(elementMinMaxXY[0] + elementMinMaxXY[1]) / 2,  (elementMinMaxXY[2] + elementMinMaxXY[3]) / 2 ];
}

function getPathMinMaxXY(elementPath){

	var pathData = jQuery(elementPath).attr("d").split(" ");
	var pathDataNumbers = [];

	for(var i = 0 ; i < pathData.length;i++){
		if(!isNaN(parseFloat(pathData[i]))){
			pathDataNumbers[pathDataNumbers.length] = parseFloat(pathData[i]);
		}
	}

	var minX = 1000;
	var maxX = 0;
	
	var minY = 1000;
	var maxY = 0;
	
	for(var i = 0 ; i < pathDataNumbers.length;i++){  
	  if(i%2 == 0){//y
	    if(pathDataNumbers[i] < minY)
	        minY = pathDataNumbers[i];
	    if(pathDataNumbers[i] > maxY)
	        maxY = pathDataNumbers[i];    
	  }else{//x
	      if(pathDataNumbers[i] < minX)
	        minX = pathDataNumbers[i];
	    if(pathDataNumbers[i] > maxX)
	        maxX = pathDataNumbers[i];
	  
	  }
	}
	
	return [minX, maxX, minY, maxY];
} 

function getCountryForPath(pathD){
	var widthVariation = 740;
/*
	if(widthState == 2)
		widthVariation = 740;
	if(widthState == 1)
		widthVariation = 920;
	if(widthState == 3)
		widthVariation = 500;
*/

	for(i=0;i<countryToPathD.length;i++){
		
			if(countryToPathD[i][0]=="SE" || countryToPathD[i][0]=="NO"){
				if(pathD.indexOf(countryToPathD[i][1])!=-1){
					return countryToPathD[i][0];
				}
			}else{
				//if(countryToPathD[i][0]=="PT"||countryToPathD[i][0]=="ES"){
				//	if(pathD.indexOf(countryToPathD[i][1].substring(0, 18))!=-1){
				//		return countryToPathD[i][0];
				//	}
				//}else
				if(pathD.indexOf(countryToPathD[i][1].substring(0,5))!=-1){
					return countryToPathD[i][0];
				}
			}
	}
	return "";
}

