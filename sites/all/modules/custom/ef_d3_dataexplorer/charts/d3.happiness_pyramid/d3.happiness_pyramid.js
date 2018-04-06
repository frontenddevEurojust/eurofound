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

		if (sort == 0){

      var byValueSum = filtered.slice(0);

      byValueSum.sort(function(d,b) {
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
			var filteredKeyed = d3.nest().key(function(d) { 
				if(d.countryName != 'EU28'){

					return d.countryName;

				}else{

					// firts element in the order
					return 'AAAA'+d.countryName;
				}; 
			}).sortKeys(order).entries(filtered);

			filtered = filteredKeyed.map(function(a) { 
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

/*
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
		*/

		return filtered;
	}

	var createOrderingFilter = function()
	{
		var alphaSort = ["Ordered by sum of Happiness and Life Satisfaction for 2016", "Alphabetically ascending", "By Happiness 2016 descending", "By Life Satisfaction 2016 descending"];

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
		var height = $(window).height()*.65;

		if(height < 450){
			height = 650;
		}

		var rightOffset = width + labelArea;


		// var xLeft = d3.scaleLinear().range([0,width]).domain([0,width]);
		var xLeft = d3.scaleLinear().range([0,width]);
		var xRight = d3.scaleLinear().range([0,width]);
		
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
			return +d[leftBar11];
		});


		var xLeft = function(d)
		{
			// return (width-labelArea)*d/maxLeft;
			return (width)*d/d3.max(maxArray);
		}
		
		var xRight = function(d)
		{
			return (width)*d/d3.max(maxArray);
		}

    // Initialize tooltip
    tip = d3.tip().attr('class', 'd3-tip').html(function(d) { return d; });


		var chart = d3.select(".chart-wrapper")
			.append("svg")
			.attr('class', 'chart')
			.attr('width', labelArea + 2*width)
			.attr('height', height)
			.call(tip);


			chart.style("opacity", 0)
			.transition()
			.duration(1500)
			.style("opacity", 1);		

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
		var maxDataAxis =  Math.round(d3.max(maxArray)) + 1;
		var stepAxisScale = Number(width * 1/maxDataAxis);

		/** AXIS LEFT **/
		var axisScaleLeft = d3.scaleLinear()
			.domain ([ maxDataAxis , 0 ])
			.range ([ 0 , width + stepAxisScale ]);

		var xAxisLeft = d3.axisBottom()
		    .scale(axisScaleLeft);

	 var xAxisGroupLeft = chart.append ('g')
	 			.attr('class', 'group-ticks-left')
	 			.attr("x", width - xLeft(maxLeft11))
	 			.attr("transform", "translate(" + Number(0 - stepAxisScale) + "," + height + ")")
	 			.call (xAxisLeft);

		/** AXIS RIGHT **/
		var axisScaleRight = d3.scaleLinear()
			.domain ([ 0 , maxDataAxis ])
			.range ([ 0 , width + (width * 1/maxDataAxis) ]);

		var xAxisRight = d3.axisBottom()
		    .scale(axisScaleRight);

	 var xAxisGroupRight = chart.append ('g')
	 			.attr('class', 'group-ticks-right')
	 			.attr("x", width - xRight(maxRight11))
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
			.attr("class", function(d){return "left11 "+d.countryCode;})
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d[leftBar11] +"<p>");
      })
			.attr("width", function (d)
			{
				return xLeft(d[leftBar11]);
			})
			.attr("height", y.bandwidth()*0.4);

		chart.selectAll("rect.left_H")
			.data(data)
			.enter().append("rect")
			.attr("x", function (d)
			{
				return width - xLeft(d[leftBar16]);
			})
			.attr("y", yPosByIndex)
			.attr("class", function(d){return "left16 "+d.countryCode;})
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d[leftBar16] +"<p>");
      })
			.attr("width", function (d)
			{
				return xLeft(d[leftBar16]);
			})
			.attr("height", y.bandwidth()*0.4);
	
/*	DATA OF EACH COUNTRY LEFT

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
			.attr("class", function(d){return "name "+d.countryCode;})
			.text(function(d){return d.countryName;});

		chart.selectAll("rect.right_H")
			.data(data)
			.enter().append("rect")
			.attr("x", rightOffset)
			.attr("y", yPosByIndex)
			.attr("class", function(d){return "right16 "+d.countryCode;})
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d[rightBar16] +"<p>");
      })
			.attr("width", function (d) {
				return xRight(d[rightBar16]);
			})
			.attr("height", y.bandwidth()*0.4);

		chart.selectAll("rect.right_L")
			.data(data)
			.enter().append("rect")
			.attr("x", rightOffset)
			.attr("y", yPosByIndexDown)
			.attr("class", function(d){return "right11 "+d.countryCode;})
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d[rightBar11] +"<p>");
      })
			.attr("width", function (d) {
				return xRight(d[rightBar11]);
			})
			.attr("height", y.bandwidth()*0.4);

/* DATA OF EACH COUNTRY LEFT
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