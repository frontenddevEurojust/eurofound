(function ($)
{
	var leftBar11 = "dot1";
	var leftBar16 = "dot2";
	var rightBar11 = "dot3";
	var rightBar16 = "dot4";

	var arrayContains = function(array, variable)
	{
		return (array.indexOf(variable) > -1);
	}

	var getParameterByName = function(name)
	{
		url = window.location.href;
		name = name.replace(/[\[\]]/g, "\\$&");
		var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"), results = regex.exec(url);
		if (!results)
		{
			return null;
		}
		if (!results[2])
		{
			return '';
		}
		return decodeURIComponent(results[2].replace(/\+/g, " "));
	}

	var filterData = function(data, sort)
	{
		var filtered = data;

		if (sort == 0)
		{
			var byValueSum = filtered.slice(0);

			byValueSum.sort(function(d,b)
			{
				var sum1 = Math.abs(Number(d.dot2) + Number(d.dot4));
				var sum2 = Math.abs(Number(b.dot2) + Number(b.dot4));      	
				return d3.descending(+sum1,+sum2);
			});
			filtered = byValueSum;
		}

		if (sort == 1)
		{
			// sort == 1 ? order = d3.ascending : order = d3.descending;
			order = d3.ascending;
			var filteredKeyed = d3.nest().key(function(d)
			{ 
				if(d.countryName != 'EU28')
				{
					return d.countryName;
				}
				else
				{
					// first element in the order
					return 'AAAA'+d.countryName;
				};
			}).sortKeys(order).entries(filtered);
			filtered = filteredKeyed.map(function(a)
			{ 
				return a.values[0];			
			});
		}

		if (sort == 2)
		{
			var byMaxValue = filtered.slice(0);
			byMaxValue.sort(function(d,b)
			{
				return d3.descending(+d.dot2,+b.dot2);
			});      
			filtered = byMaxValue;
		}

		if (sort == 3)
		{
			var byMaxValue = filtered.slice(0);
			byMaxValue.sort(function(d,b)
			{
				return d3.descending(+d.dot4,+b.dot4);
			});
			filtered = byMaxValue;
		}
		return filtered;
	}

	var createOrderingFilter = function(dataFile, settingsData)
	{
		var alphaSort = [translatedValue(dataFile, 'happiness_sortOptionDefault'), translatedValue(dataFile, 'happiness_sortOption1'), translatedValue(dataFile, 'happiness_sortOption2'), translatedValue(dataFile, 'happiness_sortOption3')];

		var select = d3.select('body .chart-filters').append('select').property('id', 'sort-filter').property('name', 'sort');
		var options = select
			.selectAll('option')
			.data(alphaSort)
			.enter()
			.append('option')
			.text(function (d, i) { return d; })
			.property('value',function(d, i){ return i; });

		d3.select("#sort-filter").on("change", reloadOnSort);
	}

	var translatedValue = function(translatedArray, arrayKey)
	{
		var entry = translatedArray.find(function(e)
		{
			return e.Key === arrayKey;
		});
		if (entry)
		{
			return entry.Value;
		}
	}

	var readSettings = function(settingsFile)
	{
		var settingsData = settingsFile.map(function(row)
		{
			return row;
		});
		return settingsData;
	}

	var customSettings = function(settingsArray, chartName, modalityName)
	{
		var elementId = settingsArray.find(function(e)
		{
      if(e.modalityCode != 'N/A'){
        return (e.chartID === chartName && e.modalityCode == modalityName );
      } else {
        return (e.chartID === chartName && e.modalityCode === 'N/A' );
      }
		});
		if (elementId)
		{
			return [elementId.xMin, elementId.xMax];
		}
	}

	function buildGraphStructure (dataFile, settingsData)
	{
		if ($(".label-sort").parents(".chart-filters").length === 0)
		{
			$('.chart-filters').append('<label for="sort-order" class="label-sort">' + translatedValue(dataFile, 'LabelSort') + '</label>');
			createOrderingFilter(dataFile, settingsData);
		}
	};

	
	var axisLinePath = function(d)
	{
		return lineGenerator([[x(d) + 0.9, 0], [x(d) + 0.9, height]]);
	};

	function reloadOnSort()
	{
		languageCode = selectLanguage();
		d3.queue()
			.defer(d3.csv, '/sites/default/files/ejm/data/en/happiness-pyramid/happiness-pyramid_en.csv')
			.defer(d3.csv, '/sites/all/modules/custom/ef_d3_dataexplorer/resources/' + languageCode + '/data_' + languageCode + '.csv')
			.defer(d3.csv, '/sites/all/modules/custom/ef_d3_dataexplorer/resources/settings.csv')
			//.await(type, render);
			.await(render);
		//d3.csv('/sites/default/files/ejm/data/' + languageCode + '/happiness-pyramid/happiness-pyramid_' + languageCode + '.csv', type, render);
	}
	
	$(window).on("resize orientationchange",function(e)
	{
		reloadOnSort();
	});


	$(document).ready(function()
	{
		reloadOnSort();
	});

	function selectLanguage()
	{
		if(Drupal.settings.pathPrefix != null && Drupal.settings.pathPrefix.length > 0)
		{
			return Drupal.settings.pathPrefix[0] + Drupal.settings.pathPrefix[1];
		}	
		else if (typeof Drupal.settings.ef_d3_dataexplorer !== 'undefined')
		{
			return languageCode = Drupal.settings.ef_d3_dataexplorer.language;
		}
		else
		{
			console.log("Language is undefined. Using English as default.");
			return 'en';
		}
	}
	
	/*function type(d)
	{
console.log(d);
		d.leftBar = +d[leftBar11];
		d.rightBar = +d[rightBar11];
		return d;
	}*/
			
	function render(error, data, dataFile, settingsData)
	{
		if (error)
		{
			throw error;
		}
		d3.select("svg").remove();		
		settingsData = readSettings(settingsData);

		var customLimitsLeft = customSettings(settingsData, 'happiness', '1');
		var domainMinLeft = customLimitsLeft[0];
		var domainMaxLeft = customLimitsLeft[1];
		var customLimitsRight = customSettings(settingsData, 'happiness', '2');
		var domainMinRight = customLimitsRight[0];
		var domainMaxRight = customLimitsRight[1];
		
		var labelArea = 120;
		var chart = '';//500;
		var width = jQuery('.chart-wrapper').width()/3;
		var height = $(window).height()*.82;

		if(height < 450){
			height = 650;
		}

		var rightOffset = width + labelArea;

		// var xLeft = d3.scaleLinear().range([0,width]).domain([0,width]);
		var xLeft = d3.scaleLinear().range([0,width]);
		var xRight = d3.scaleLinear().range([0,width]);
		
		var y = d3.scaleBand().range([20,height]);


		buildGraphStructure(dataFile, settingsData);

		var order = Number( getParameterByName('sort') );

		if (order == null)
		{
			order = 0;
		}

    d3.selectAll("#sort-filter option")
      .attr("selected", function(d,i) { 
      	if( i == getParameterByName('sort') ){
      		return 'selected';
      	} 
    });

		var data = filterData(data, order);
		
		var numericValuesLeft = d3.keys(data[0]).filter(function(key)
		{
			return key === leftBar11 || key === leftBar16;
		});

		var numericValuesRight = d3.keys(data[0]).filter(function(key)
		{
			return key === rightBar11 || key === rightBar16;
		});
			
		data.forEach(function(d)
		{
			d.leftBar = numericValuesLeft.map(function(name) { return {name: name, value: +d[name]}; });
			d.rightBar = numericValuesRight.map(function(name) { return {name: name, value: +d[name]}; });
		});
		
		var maxLeft = d3.max(data, function(d)
		{
			return +d[leftBar11];
		});

		var xLeft = function(d)
		{
			// return (width-labelArea)*d/maxLeft;
			//return (width)*d/d3.max(maxArray);
			return (width)*d/domainMaxLeft;
		};
		
		var xRight = function(d)
		{
			//return (width)*d/d3.max(maxArray);
			return (width)*d/domainMaxRight;
		};

		// Initialize tooltip
		tip = d3.tip().attr('class', 'd3-tip').html(function(d) { return d; });


		var chart = d3.select(".chart-wrapper").append("svg").attr('class', 'chart').attr('width', labelArea + 2*width)
			.attr('height', height).call(tip);

		chart.style("opacity", 0).transition().duration(1500).style("opacity", 1);		

		/** MAX DATA VAR**/
		var maxLeft11 = d3.max(data, function(d)
		{
			return +d[leftBar11];
		});

		var maxLeft16 = d3.max(data, function(d)
		{
			return +d[leftBar16];
		});

		var maxRight11 = d3.max(data, function(d)
		{			
			return +d[rightBar11];
		});
		var maxRight16 = d3.max(data, function(d)
		{
			return +d[rightBar16];
		});


		/** MAX DATA **/
		var maxArray = [maxLeft11,maxLeft16,maxRight11,maxRight16];
		//var maxDataAxis =  Math.round(d3.max(maxArray)) + 1;
		//var stepAxisScale = Number(width * 1/maxDataAxis);
		var stepAxisScaleLeft = Number(width * 1/domainMaxLeft);
		var stepAxisScaleRight = Number(width * 1/domainMaxRight);

		/** AXIS LEFT **/
		//var axisScaleLeft = d3.scaleLinear().domain ([ maxDataAxis , 0 ]).range ([ 0 , width + stepAxisScale ]);
		var axisScaleLeft = d3.scaleLinear()
			.domain ([ domainMaxLeft , 0 ])
			.range ([ 0 , width]);

		var xAxisLeft = d3.axisBottom()
			.scale(axisScaleLeft);

		//var xAxisGroupLeft = chart.append ('g').attr('class', 'group-ticks-left').attr("x", width - xLeft(maxLeft11))
		var xAxisGroupLeft = chart.append ('g')
			.attr('class', 'group-ticks-left')
			.attr("x", width - xLeft(domainMaxLeft))
			.attr("transform", "translate(" + Number(0) + "," + height + ")")
			.call (xAxisLeft);

		/** AXIS RIGHT **/
		//var axisScaleRight = d3.scaleLinear().domain ([ 0 , maxDataAxis ]).range ([ 0 , width + (width * 1/maxDataAxis) ]);
		var axisScaleRight = d3.scaleLinear()
			.domain ([ 0, domainMaxRight ])
			.range ([ 0 , width]);

		var xAxisRight = d3.axisBottom()
			.scale(axisScaleRight);

		//var xAxisGroupRight = chart.append ('g').attr('class', 'group-ticks-right').attr("x", width - xRight(maxRight11))
		var xAxisGroupRight = chart.append ('g')
			.attr('class', 'group-ticks-right')
			.attr("x", width - xRight(domainMaxRight))
			.attr("transform", "translate(" + Number(rightOffset) + "," + height + ")")
			.call (xAxisRight);

		y.domain(data.map(function (d)
		{
			return d.countryName;
		}));

		var yPosByIndex = function (d)
		{
			return y(d.countryName);
		};		
		var yPosByIndexDown = function (d)
		{
			return (y(d.countryName)) + y.bandwidth()*0.35;
		};
		var yPosByIndexDownText = function (d)
		{
			return (y(d.countryName)) + y.bandwidth()*.6;
		};

		formatOnedecimal = d3.format(",.1f");

		chart.selectAll("rect.left_L")
			.data(data)
			.enter().append("rect")
			.attr("x", function (d)
			{
				return width - xLeft(d[leftBar11]);
			})
			.attr("y", yPosByIndexDown)
			.attr("class", function(d){
	        if(d.highlight1 == 1){
	        	return "left11 highlight "+d.countryCode;
	        }else{
	          return "left11 "+d.countryCode;
	        }  
			})
			.on('mouseout', tip.hide)
			.on('mouseover', function(d)
			{
				tip.show("<p class='country-name'>" +  translatedValue(dataFile, "country" + d.countryCode) + ", 2011</p><p class='dot'> " + formatOnedecimal(d[leftBar11]) +"<p>");
			})
			.attr("width", function (d)
			{
				return xLeft(d[leftBar11]);

			})
			.attr("height", y.bandwidth()*0.35);

		chart.selectAll("rect.left_H")
			.data(data)
			.enter().append("rect")
			.attr("x", function (d)
			{
				return width - xLeft(d[leftBar16]);
			})
			.attr("y", yPosByIndex)
			.attr("class", function(d){
	        if(d.highlight1 == 1){
	        	return "left16 highlight "+d.countryCode;
	        }else{
	          return "left16 "+d.countryCode;
	        }  
			})
			.on('mouseout', tip.hide)
			.on('mouseover', function(d)
			{
				tip.show("<p class='country-name'>"+ translatedValue(dataFile, "country" + d.countryCode) + ", 2016</p><p class='dot'> " + formatOnedecimal(d[leftBar16]) +"<p>");
			})
			.attr("width", function (d)
			{
				return xLeft(d[leftBar16]);
			})
			.attr("height", y.bandwidth()*0.35);

		chart.selectAll("text.name")
			.data(data)
			.enter().append("text")			
			.attr("x", (labelArea / 2) + width)
			.attr("y", function (d) {
				return y(d.countryName) + y.bandwidth() / 2 -3;
			})
			.attr("dy", ".20em")
			.attr("text-anchor", "middle")
			.attr("class", function(d){
        if(d.highlight1 == 1 || d.highlight2 == 1 ){
          return "name highlight "+d.countryCode;
        } else {
        	return "name "+d.countryCode;
        } 			
			})
			.text(function(d){return translatedValue(dataFile, "country" + d.countryCode);});
			
		chart.selectAll("rect.right_H")
			.data(data)
			.enter().append("rect")
			.attr("x", rightOffset)
			.attr("y", yPosByIndex)
			.attr("class", function(d){
	        if(d.highlight2 == 1){
	        	return "right16 highlight "+d.countryCode;
	        }else{
	          return "right16 "+d.countryCode;
	        }                
	     })
			.on('mouseout', tip.hide)
			.on('mouseover', function(d)
			{
				tip.show("<p class='country-name'>"+ translatedValue(dataFile, "country" + d.countryCode) + ", 2016</p><p class='dot'> " + formatOnedecimal(d[rightBar16]) +"<p>");
			})
			.attr("width", function (d)
			{
				return xRight(d[rightBar16]);
			}).attr("height", y.bandwidth()*0.35);

		chart.selectAll("rect.right_L")
			.data(data)
			.enter().append("rect")
			.attr("x", rightOffset)
			.attr("y", yPosByIndexDown)
			.attr("class", function(d){
	        if(d.highlight2 == 1){
	        	return "right11 highlight "+d.countryCode;
	        }else{
	          return "right11 "+d.countryCode;
	        }  
			})
			.on('mouseout', tip.hide)
			.on('mouseover', function(d)
			{
				tip.show("<p class='country-name'>"+ translatedValue(dataFile, "country" + d.countryCode) + ", 2011</p><p class='dot'> " + formatOnedecimal(d[rightBar11]) +"<p>");
			})
			.attr("width", function (d) {
				return xRight(d[rightBar11]);
			})
			.attr("height", y.bandwidth()*0.35);


		// Will be created using texts excel data
		var legendLabels = [			
			{label: translatedValue(dataFile, 'happiness_legend1'), class: "lollipop-start-l"}, 
			{label: translatedValue(dataFile, 'happiness_legend2'), class: "lollipop-end-l"},
			{label: translatedValue(dataFile, 'happiness_legend3'), class: "lollipop-start-r"}, 
			{label: translatedValue(dataFile, 'happiness_legend4'), class: "lollipop-end-r"},
		];

		var padding = 0;

		// code for positioning legend
		var legend = chart.append("g").attr("class","legend-group");
		var legendX = -100;
		var legendY = height + 50;
		var spaceBetween = 320;

		var legendPosition =
		{
			x: legendX + 70,
			y: legendY - 4
		};

		// add labels
		var textLegend = ['start-l','end-l','start-r','end-r'];
		
		legend.selectAll("text").data(legendLabels).enter().append("text").attr("class", function(d, i)
		{
			return 'legend-text-'+textLegend[i];
		}).attr("x", function(d, i)
		{
			return legendPosition.x + spaceBetween * i + 10;
		}).attr("y", legendPosition.y + 4).text(function(d) { return d.label });

		// add circles
		legend.selectAll("circle").data(legendLabels).enter().append("circle").attr("class","legend-point").attr("cx", function(d, i)
		{
			return legendPosition.x + spaceBetween * i;
		}).attr("cy", legendPosition.y).attr("r", 5).attr("class", function(d) { return d.class });


		$('select').on('change', function ()
		{
			var valOption = $(this).val();
			var nameVar = $(this).attr('name');

			if (valOption)
			{
				if(!document.location.search)
				{
					history.pushState(null, "",  window.location.pathname + '?'+nameVar +'=' + valOption);              
				}
				else
				{       
					if(document.location.search.indexOf(nameVar) > 0)
					{
						// reemplazamos la variable de la URL con la nueva
						var newVarString = document.location.search.replace(nameVar+'='+getParameterByName(nameVar),nameVar + '=' + valOption );
						history.pushState(null, "",  window.location.pathname + newVarString );              
					}
					else
					{
						history.pushState(null, "",  window.location.search + '&'+nameVar +'=' + valOption);
					}
				}              
			}
			return false;
		});
	}
})(jQuery);