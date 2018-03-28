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

	/**
	 * TODO Ver qué ordenación es necesaria.
	 */
	var filterData = function(data, sort)
	{
		var filtered = data;

		if (sort == 1 || sort == 2)
		{
			sort == 1 ? order = d3.ascending : order = d3.descending;
			var filteredKeyed = d3.nest().key(function(d) { return d.countryName; }).sortKeys(order).entries(filtered);
			filtered = filteredKeyed.map(function(a) { return a.values[0];});
		}

		if (sort == 3)
		{
			var byMinValue = filtered.slice(0);
			byMinValue.sort(function(d,b)
			{
				return d.dot1 - b.dot1;
			});      
			filtered = byMinValue;
		}

		if (sort == 4)
		{
			var byMaxValue = filtered.slice(0);
			byMaxValue.sort(function(d,b)
			{
				return d.dot2 - b.dot2;
			});      
			filtered = byMaxValue;
		}

		if (sort == 5)
		{
			var byMinValue = filtered.slice(0);
			byMinValue.sort(function(d,b)
			{
				return d.dot3 - b.dot3;
			});      
			filtered = byMinValue;
		}

		if (sort == 6)
		{
			var byMaxValue = filtered.slice(0);
			byMaxValue.sort(function(d,b)
			{
				return d.dot4 - b.dot4;
			});      
			filtered = byMaxValue;
		}

		if (sort == 7)
		{
			var byValueGap = filtered.slice(0);
			byValueGap.sort(function(d,b)
			{
				return Math.abs(d.dot1 - d.dot2) - Math.abs(b.dot1 - b.dot2);
			});      
			filtered = byValueGap;
		}

		if (sort == 8)
		{
			var byValueGap = filtered.slice(0);
			byValueGap.sort(function(d,b)
			{
				return Math.abs(b.dot1 - b.dot2) - Math.abs(d.dot1 - d.dot2);
			});      
			filtered = byValueGap;
		}

		if (sort == 9)
		{
			var byValueGap = filtered.slice(0);
			byValueGap.sort(function(d,b)
			{
				return Math.abs(d.dot3 - d.dot4) - Math.abs(b.dot3 - b.dot4);
			});      
			filtered = byValueGap;
		}

		if (sort == 10)
		{
			var byValueGap = filtered.slice(0);
			byValueGap.sort(function(d,b)
			{
				return Math.abs(b.dot3 - b.dot4) - Math.abs(d.dot3 - d.dot4);
			});      
			filtered = byValueGap;
		}

		return filtered;
	}

	var createOrderingFilter = function()
	{
		var alphaSort = ["- None -", "Alphabetically ascending", "Alphabetically descending", "By Happiness 2011 value descending", "By Happiness 2016 value descending", "By Life Satisfaction 2011 value descending", "By Life Satisfaction 2016 value descending", "By value Happiness gap ascending", "By Happiness value gap descending", "By value Life Satisfaction gap ascending", "By Life Satisfaction value gap descending"];

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

	/**
	 * TODO Ver si es necesario incluir puntos 3 y 4.
	 */
	/*var calculateMinValue = function (data)
	{
		var minValue = 100;
		data.forEach(function(row, index)
		{
			minValue = Math.min(minValue, row.dot1, row.dot2);
		});
		return minValue;
	}*/

	/*var lollipopLinePath = function(d)
	{
		return lineGenerator([[x(d.dot1), y(d.countryName) + (y.bandwidth() / 2) ], [x(d.dot2), y(d.countryName) + (y.bandwidth() / 2)]]);
	};*/
    
	/**
	 * TODO Ver si es necesario incluir puntos 3 y 4.
	 */
	/*var calculateMaxValue = function (data)
	{
		var maxValue = 0;    
		var result = data.forEach(function(row, index)
		{
			maxValue = Math.max(maxValue, row.dot1, row.dot2);
		});
		return maxValue;
	}*/

	function buildGraphStructure (csv)
	{
		if ($(".label-sort").parents(".chart-filters").length === 0)
		{
			$('.chart-filters').append('<label for="sort-order" class="label-sort">Sort:</label>');
			createOrderingFilter();
		}
	};

	
	var axisLinePath = function(d)
	{
		return lineGenerator([[x(d) + 0.9, 0], [x(d) + 0.9, height]]);
	};

	function reloadOnSort()
	{
		if (typeof Drupal.settings.ef_d3_dataexplorer !== 'undefined')
		{
			var languageCode = Drupal.settings.ef_d3_dataexplorer.language;
		}
		else
		{
			console.log("Language is undefined. Data can't be loaded");
		}
		d3.csv('/sites/default/files/ejm/data/' + languageCode + '/happiness-pyramid/happiness-pyramid_' + languageCode + '.csv', type, render);
	}
	
	$(window).on("resize orientationchange",function(e)
	{
		if (typeof Drupal.settings.ef_d3_dataexplorer !== 'undefined')
		{
			var languageCode = Drupal.settings.ef_d3_dataexplorer.language;
		}
		else
		{
			console.log("Language is undefined. Data can't be loaded");
		}
		d3.csv('/sites/default/files/ejm/data/' + languageCode + '/happiness-pyramid/happiness-pyramid_' + languageCode + '.csv', type, render);
	});


	$(document).ready(function()
	{
		if (typeof Drupal.settings.ef_d3_dataexplorer !== 'undefined')
		{
			var languageCode = Drupal.settings.ef_d3_dataexplorer.language;
		}
		else
		{
			console.log("Language is undefined. Data can't be loaded");
		}
		d3.csv('/sites/default/files/ejm/data/' + languageCode + '/happiness-pyramid/happiness-pyramid_' + languageCode + '.csv', type, render);
	});

	function type(d)
	{
		d.leftBar = +d[leftBar11];
		d.rightBar = +d[rightBar11];
		return d;
	}
			
	function render(error,data)
	{
		if (error)
		{
			throw error;
		}
		d3.select("svg").remove();
		
		var labelArea = 120;
		var chart = '';//500;
		var width = jQuery('.chart-wrapper').width()/3;
		//var height = 2*700;
		//var height = 700;
		var height = jQuery('.chart-wrapper').height();
		var height = $(window).height()*.8;
		var rightOffset = width + labelArea;
		
		var xLeft = d3.scaleLinear().range([0,width]).domain([0,width]);
		var xRight = d3.scaleLinear().range([0,width]);
		//var y = d3.scale.ordinal().rangeBands([20,height]);
		var y = d3.scaleBand().range([20,height]);
		
		buildGraphStructure(data);
		var order = d3.select('#sort-filter').property("value");
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
			return d[leftBar11];
		});
		/*var maxRight = d3.max(data, function(d)
		{
			return d[rightBar];
		});*/

		var xLeft = function(d)
		{
			return (width-labelArea)*d/maxLeft;
		}
		
		var xRight = xLeft;
		/*var xRight = function(d)
		{
			return (width-labelArea)*d/maxLeft;
		}*/

    // Initialize tooltip
    tip = d3.tip().attr('class', 'd3-tip').html(function(d) { return d; });


		chart = d3.select(".chart-wrapper")
			.append("svg")
			.attr('class', 'chart')
			.attr('width', labelArea + 2*width)
			.attr('height', height)
			.call(tip);


			chart.style("opacity", 0)
			.transition()
			.duration(1500)
			.style("opacity", 1);		
		/*xLeft.domain(d3.extent(data, function (d)
		{
			return d[leftBar11];
		}));*/		
		/*xRight.domain(d3.extent(data, function (d)
		{
			return d[rightBar];
		}));*/

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
			return (y(d.countryName)) + y.bandwidth()*0.4;
		};
		var yPosByIndexDownText = function (d)
		{
			return (y(d.countryName)) + y.bandwidth()*.6;
		};

		
		chart.selectAll("rect.left_L")
			.data(data)
			.enter().append("rect")
			.attr("x", function (d)
			{
				return width - xLeft(d[leftBar11]);
			})
			.attr("y", yPosByIndexDown)
			.attr("class", "left11")
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d[leftBar16] +"<p>");
      })
			.attr("width", function (d)
			{
				return xLeft(d[leftBar11]);
			})
			.attr("height", y.bandwidth()*0.2);

		chart.selectAll("rect.left_H")
			.data(data)
			.enter().append("rect")
			.attr("x", function (d)
			{
				return width - xLeft(d[leftBar16]);
			})
			.attr("y", yPosByIndex)
			.attr("class", "left16")
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d[leftBar11] +"<p>");
      })
			.attr("width", function (d)
			{
				return xLeft(d[leftBar16]);
			})
			.attr("height", y.bandwidth()*0.2);
	
/*	
		chart.selectAll("text.leftscore_L")
			.data(data)
			.enter().append("text")
			.attr("x", function (d) {
				return width - xLeft(d[leftBar16])-40;
			})
			.attr("y", function (d) {
				return y(d.countryName) + y.bandwidth();
			})
			.attr("dx", "20")
			//.attr("dy", ".36em")
			//.attr("dy", "-1em")
			.attr("y", yPosByIndexDownText)
			.attr("text-anchor", "end")
			.attr('class', 'leftscore')
			.text(function(d){return d[leftBar16];});			

		chart.selectAll("text.leftscore_H")
			.data(data)
			.enter().append("text")
			.attr("x", function (d) {
				return width - xLeft(d[leftBar11])-40;
			})
			.attr("y", function (d) {
				return y(d.countryName) + y.bandwidth() / 4;
			})
			.attr("dx", "20")
			//.attr("dy", ".36em")
			//.attr("dy", "0")
			.attr("text-anchor", "end")
			.attr('class', 'leftscore')
			.text(function(d){return d[leftBar11];});
*/


		chart.selectAll("text.name")
			.data(data)
			.enter().append("text")
			.attr("x", (labelArea / 2) + width)
			.attr("y", function (d) {
				return y(d.countryName) + y.bandwidth() / 2;
			})
			.attr("dy", ".20em")
			.attr("text-anchor", "middle")
			.attr('class', 'name')
			.text(function(d){return d.countryName;});

		chart.selectAll("rect.right_H")
			.data(data)
			.enter().append("rect")
			.attr("x", rightOffset)
			.attr("y", yPosByIndex)
			.attr("class", "right16")
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d[rightBar11] +"<p>");
      })
			.attr("width", function (d) {
				return xRight(d[rightBar16]);
			})
			.attr("height", y.bandwidth()*0.2);

		chart.selectAll("rect.right_L")
			.data(data)
			.enter().append("rect")
			.attr("x", rightOffset)
			.attr("y", yPosByIndexDown)
			.attr("class", "right11")
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d[rightBar16] +"<p>");
      })
			.attr("width", function (d) {
				return xRight(d[rightBar11]);
			})
			.attr("height", y.bandwidth()*0.2);
/*
		chart.selectAll("text.score_H")
			.data(data)
			.enter().append("text")
			.attr("x", function (d) {
				return xRight(d[rightBar11]) + rightOffset+40;
			})
			.attr("y", function (d) {
				return y(d.countryName) + y.bandwidth() / 4;
			})
			.attr("dx", -15)
			//.attr("dy", ".36em")
			//.attr("dy", "0em")
			.attr("text-anchor", "end")
			.attr('class', 'score')
			.text(function(d){return d[rightBar11];});

		chart.selectAll("text.score_L")
			.data(data)
			.enter().append("text")
			.attr("x", function (d) {
				return xRight(d[rightBar16]) + rightOffset+40;
			})
			.attr("y", function (d) {
				return y(d.countryName) + y.bandwidth();
			})
			.attr("dx", -15)
			//.attr("dy", ".36em")
			//.attr("dy", "-1em")
			//.attr("dy", yPosByIndexDown)
			.attr("y", yPosByIndexDownText)
			.attr("text-anchor", "end")
			.attr('class', 'score')
			.text(function(d){return d[rightBar16];});
*/
		
		

		// Will be created using texts excel data
		var legendLabels = [			
			{label: "Happiness - 2016", class: "lollipop-start-l"},
			{label: "Happiness - 2011", class: "lollipop-end-l"},
			{label: "Life satisfaction - 2016", class: "lollipop-start-r"},
			{label: "Life satisfaction - 2011", class: "lollipop-end-r"},
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
//alert(i);
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
	}
	
})(jQuery);