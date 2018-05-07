(function ($) {

  overallFunctions = new Object();

  overallFunctions.arrayContains = function(array, variable)
  {
    return (array.indexOf(variable) > -1);
  }

  overallFunctions.getParameterByName = function(name) {
    url = window.location.href;
    name = name.replace(/[\[\]]/g, "\\$&");
    var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"),
      results = regex.exec(url);
    if (!results) return null;
    if (!results[2]) return '';
    return decodeURIComponent(results[2].replace(/\+/g, " "));
  }

  overallFunctions.filterData = function(data, modality, sort) {

    var filtered = data.filter(function(row){
      return row.modalityCode == modality;
    });

    if (sort == 0 ) {
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

    if (sort == 1) {
      var byMinValue = filtered.slice(0);
      byMinValue.sort(function(d,b) {
        return d3.descending(+d.dot1,+b.dot1);
      });
      
      filtered = byMinValue;
    }

    if (sort == 2) {
      var byMaxValue = filtered.slice(0);
      byMaxValue.sort(function(d,b) {
        return d3.descending(+d.dot2,+b.dot2);
      });
      
      filtered = byMaxValue;
    }

    return filtered;
  }

  overallFunctions.createModalityFilter = function(data, dataFile, settingsData){
      
    var modalities = overallFunctions.buildModalityOptions(data);
    
    var select = d3.select('body .chart-filters').append('label').property('for', 'modality-filter').text(overallFunctions.translatedValue(dataFile, 'LabelGroup'));
    var select = d3.select('body .chart-filters').append('select').property('id', 'modality-filter').property('name', 'group');

    var options = select
      .selectAll('option')
      .data(modalities).enter()
      .append('option')
        .text(function (c) { return c.modalityValue; })
        .property('value',function(c){ return c.modalityCode; });

    d3.select("#modality-filter").on("change", updateGraph);
  }

  overallFunctions.createOrderingFilter = function(dataFile, settingsData)
  {
	var alphaSort = [overallFunctions.translatedValue(dataFile, 'liv-depr-optim_sortOptionDefault'), overallFunctions.translatedValue(dataFile, 'liv-depr-optim_sortOption1'), overallFunctions.translatedValue(dataFile, 'liv-depr-optim_sortOption2')];

    var select = d3.select('body .chart-filters').append('select').property('id', 'sort-filter').property('name', 'sort');

    var options = select
      .selectAll('option')
      .data(alphaSort)
      .enter()
      .append('option')
        .text(function (d, i) { return d; })
        .property('value',function(d, i){ return i; });

    d3.select("#sort-filter").on("change", updateGraph);
  }

  overallFunctions.buildModalityOptions = function(data){

    var passedModalities = [];

    var result = [];

    var modalities = data.reduce(function(result, row){
    
      if (!overallFunctions.arrayContains(passedModalities, row.modalityValue)){

        // We only need countryCode and countryName
        var modality = {
          
          modalityCode: row.modalityCode,

          modalityValue: row.modalityValue,
        
        };
          
        passedModalities.push(row.modalityValue);
        
        result.push(modality);        
      }
      
      return result;  
    
    }, []);

    return modalities;
  }

  overallFunctions.calculateMinValue = function (data){
    var minValue = 100;
   
    data.forEach(function(row, index){

      minValue = Math.min(minValue, row.dot1, row.dot2);
    });

    return minValue;
  }

  overallFunctions.lollipopLinePath = function(d) {
    return lineGenerator([[x(d.dot1), y(d.countryName) + (y.bandwidth() / 2) ], [x(d.dot2), y(d.countryName) + (y.bandwidth() / 2)]]);
  };
    
  overallFunctions.calculateMaxValue = function (data){
    var maxValue = 0;
    
    var result = data.forEach(function(row, index){

      maxValue = Math.max(maxValue, row.dot1, row.dot2);
    });

    return maxValue;
  }

  overallFunctions.buildGraphStructure = function(csv, dataFile, settingsData){
    overallFunctions.createModalityFilter(csv, dataFile, settingsData);
    $('.chart-filters').append('<label for="sort-order" class="label-sort">' + overallFunctions.translatedValue(dataFile, 'LabelSort') + '</label>');
    overallFunctions.createOrderingFilter(dataFile, settingsData);
  };

  var axisLinePath = function(d) {
    return lineGenerator([[x(d) + 0.5, 0], [x(d) + 0.5, height]]);
  };

	overallFunctions.translateData = function(dataFile, csv)
	{
		var data = csv.map(function(row)
		{
			row.countryName = overallFunctions.translatedValue(dataFile, 'country' + row.countryCode);
			row.dot1 = parseFloat(row.dot1);
			row.dot2 = parseFloat(row.dot2);
			row.modalityValue = overallFunctions.translatedValue(dataFile, 'liv-depr-optim_filter_group' + row.modalityCode);
			return row;
		});
		return data;
	}

	overallFunctions.readSettings = function(settingsFile)
	{
		var settingsData = settingsFile.map(function(row)
		{
			return row;
		});
		return settingsData;
	}

	overallFunctions.translatedValue = function(translatedArray, arrayKey)
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

	overallFunctions.customSettings = function(settingsArray, chartName, modalityName)
	{
		var elementId = settingsArray.find(function(e)
		{
			return (e.chartID === chartName && e.modalityCode === modalityName);
		});
		if (elementId)
		{
			return [elementId.xMin, elementId.xMax];
		}
	}

  function updateGraph() {

    var modalityCode = d3.select('#modality-filter').property("value");
    var order = d3.select('#sort-filter').property("value");

    var filteredData = overallFunctions.filterData(data, modalityCode, order);

	var customLimits = overallFunctions.customSettings(settingsData, 'liv-depr-optim', 'N/A');
	
	var domainMin = customLimits[0];
	var domainMax = customLimits[1];
    padding = 0;


      if($(window).width()>=768){
        var margin = {top: 75, right:150, bottom: 75, left: 150};
        width = Number($('.chart-wrapper').outerWidth()) - margin.left - margin.right;
      }else{
        var margin = {top: 25, right:25, bottom: 25, left: 100};
        width = Number($(window).width()) - margin.left - margin.right;
      }
     
      height = Number($('.chart-wrapper').height()) - margin.top - margin.bottom;

      //temporarily
      height = 675;

    d3.select("body .chart-wrapper svg")
    .attr("width", width + margin.left + margin.right)
    .attr("height", height + margin.top + margin.bottom);
    
    d3.select("body .chart-wrapper svg > g")
    .attr("transform", "translate(" + margin.left + "," + margin.top + ")");

    d3.selectAll("g.tick")
      .remove();

    y = d3.scaleBand()
      .domain(filteredData.map(function(d) { return d.countryName }))
      .range([0, height])
      .padding(padding);

    yAxis = d3.axisLeft().scale(y)
      .tickSize(0);

    x.domain([domainMin, domainMax])
      .range([0, width])
      .nice();


//console.log(domainMin + '------------->' +domainMax );

    xAxis.tickFormat(function(d,i) {
        if (i == 0) {
          var domainMinRound = x.domain()[0];
          return d3.format(".0%")(domainMinRound/100);
        } else {
          return d3.format(".0%")(d/100); 
        }
    });


    // Select the section we want to apply our changes to
    var svg = d3.select("body .chart-wrapper");

    svg.select(".x-axis")
      .transition().duration(750)
      .call(xAxis); 

    svg.select(".y-axis")
      .transition().duration(750)
      .call(yAxis); 


    // Move x-axis lines
    d3.selectAll("path.grid-line")
      .remove();
    
    axisLines = xAxisGroup.selectAll("path")
      .data(x.ticks(10))
      .enter().append("path")
      .attr("class", "grid-line")
      .attr("stroke-opacity", "0")
      .attr("d", axisLinePath)
      .transition().duration(750)
      .attr("stroke-opacity", "1");      



    var circleRadio = 6;

    // Chrome 1+
    var isChrome = !!window.chrome && !!window.chrome.webstore;
    if(isChrome){
     var transitionD = 0;
    }else{
      var transitionD = 750;
    }
 
    var startCircles = lollipops.select("circle.lollipop-start")
      .data(filteredData)
      .attr("cx", function(d) { 
        return x(d.dot1); 
      })
      .attr("cy", function(d) {
        return y(d.countryName) + y.bandwidth() / 2;
      })
      .transition().duration(transitionD);
      
    var endCircles = lollipops.select("circle.lollipop-end")
      .data(filteredData)
      .attr("cx", function(d) { 
        return x(d.dot2); 
      })
      .attr("cy", function(d) {
        return y(d.countryName) + y.bandwidth() / 2;
      })
      .transition().duration(transitionD);


      // añadir duration a las transiciones
    lollipops.select("path.lollipop-line")
      .data(filteredData) 
      .transition().duration(750)
      .attr("d", overallFunctions.lollipopLinePath)
      .attr("class", function(d){
        return "lollipop-line";
      });
  }

  $(window).on("resize orientationchange",function(e){
    updateGraph();
  });


  $(document).ready(function(){

    data = [];
	settingsData = [];

	if(Drupal.settings.pathPrefix != null && Drupal.settings.pathPrefix.length > 0)
	{
		var languageCode = Drupal.settings.pathPrefix[0] + Drupal.settings.pathPrefix[1];
	}	
	else if (typeof Drupal.settings.ef_d3_dataexplorer !== 'undefined')
	{
		var languageCode = Drupal.settings.ef_d3_dataexplorer.language;
	}
	else
	{
		console.log("Language is undefined. Data can't be loaded");
	}
	
	d3.queue()
		.defer(d3.csv, '/sites/all/modules/custom/ef_d3_dataexplorer/resources/settings.csv')
		.defer(d3.csv, '/sites/all/modules/custom/ef_d3_dataexplorer/resources/' + languageCode + '/data_' + languageCode + '.csv')
		.defer(d3.csv, '/sites/default/files/ejm/data/en/living-optimistic/living-optimistic_en.csv')
		.await(function(error, settingsFile, dataFile, csv)
	{

      if (csv === null){
        console.log('Requested csv at "/sites/default/files/ejm/data/en/living-optimistic/living-optimistic_en.csv" was not found.');
      }
		  
		settingsData = function(settingsFile)
		{
			settingsFile.map(function(row)
			{
				return row;
			});
		}
      
      // Initialize tooltip
      tip = d3.tip().attr('class', 'd3-tip').html(function(d) { return d; });




      if($(window).width()>=768){
        var margin = {top: 75, right:100, bottom: 75, left: 100};
      }else{
        var margin = {top: 25, right:15, bottom: 25, left: 100};
      }

      width = Number($('.chart-wrapper').width()) - margin.left - margin.right,
      height = Number($('.chart-wrapper').height()) - margin.top - margin.bottom;

      //temporarily
      height = 675;

      svg = d3.select("body .chart-wrapper").append("svg")
            .attr("width", width + margin.left + margin.right)
            .attr("height", height + margin.top + margin.bottom)
            .attr('class', 'overall-improv-chart')
            .append("g")
            .attr("transform", "translate(" + margin.left + "," + margin.top + ")")
            .call(tip);
      
      // need to rewrite so start, min, lowest are the same
      var classToPos = {
        "lollipop-start": "min",
        "lollipop-end": "max",
      }

      var legendLabels = [
		{label: overallFunctions.translatedValue(dataFile, 'liv-depr-stdliving_legend1'), class: "lollipop-start"}, 
		{label: overallFunctions.translatedValue(dataFile, 'liv-depr-stdliving_legend2'), class: "lollipop-end"},
      ];
      
      var padding = 0;

      // code for positioning legend
      var legend = svg.append("g")
        .attr("class","legend-group");


      var legendX = 0;
      var legendY = height + 50;
      var spaceBetween = 250;
      
      var legendPosition = {
        x: legendX + 70,
        y: legendY - 4
      };

      // add labels
      var textLegend = ['start','end'];

      legend.selectAll("text")
        .data(legendLabels)
        .enter().append("text")
        .attr("class", function(d, i) {
          return 'legend-text-'+textLegend[i];
        }) 
        .attr("x", function(d, i) {
          return legendPosition.x + spaceBetween * i + 10;
        })  
        .attr("y", legendPosition.y + 4)
        .text(function(d) { return d.label });

      legend.selectAll("circle")
        .data(legendLabels) 
        .enter().append("circle")
        .attr("class","legend-point")
        .attr("cx", function(d, i) {
          return legendPosition.x + spaceBetween * i;
        })  
        .attr("cy", legendPosition.y)
        .attr("r", 5)
        .attr("class", function(d) { return d.class });

            // code for positioning legend
      var legend = svg.append("g")
        .attr("class","legend-group");

	  data = overallFunctions.translateData(dataFile, csv);
	  settingsData = overallFunctions.readSettings(settingsFile);

	  overallFunctions.buildGraphStructure(data, dataFile, settingsData);

      var modalityCode = overallFunctions.getParameterByName('group');
      var order = overallFunctions.getParameterByName('sort');

      if (modalityCode == null) modalityCode = 1;
      if (order == null) order = 0;

      d3.select('#modality-filter').property('value', modalityCode);
      d3.select('#sort-filter').property('value', order);

      filteredData = overallFunctions.filterData(data, modalityCode, order);

		var customLimits = overallFunctions.customSettings(settingsData, 'liv-depr-optim', 'N/A');
		
		var domainMin = customLimits[0];
		var domainMax = customLimits[1];
      


      y = d3.scaleBand()
        .domain(filteredData.map(function(d) { return d.countryName }))
        .range([0, height])
        .padding(padding);

      x = d3.scaleLinear()
        .domain([domainMin, domainMax])
        .range([0, width])
        .nice();

  
      
      yAxis = d3.axisLeft().scale(y)
        .tickSize(0);
      
      xAxis = d3.axisTop().scale(x)
        .tickFormat(function(d,i) {
          if (i == 0) {
            var domainMinRound = x.domain()[0];
            return d3.format(".0%")(domainMinRound/100);
          } else {
            return d3.format(".0%")(d/100); 
          }
        });
      
      var yAxisGroup = svg.append("g")
        .attr("transform", "translate(-10, 0)")
        .attr("class", "y-axis")
        .call(yAxis)
        .select(".domain").remove();    
      
      xAxisGroup = svg.append("g")
        .attr("class", "x-axis")
        .attr("transform", "translate(0,0)")
        .call(xAxis);

      lineGenerator = d3.line();
/*
      var axisLinePath = function(d) {
        return lineGenerator([[x(d) + 0.5, 0], [x(d) + 0.5, height]]);
      };
*/       
      var axisLines = xAxisGroup.selectAll("path")
        .data(x.ticks(10))
        .enter().append("path")
        .attr("class", "grid-line")
        .attr("d", axisLinePath);      
      
      lollipopsGroup = svg.append("g").attr("class", "lollipops");


      lollipops = lollipopsGroup.selectAll("g")
        .data(filteredData)
        .enter().append("g")
        .attr("class", "lollipop");
      
      lollipops.append("path")
        .attr("class", "lollipop-line")
        .attr("d", overallFunctions.lollipopLinePath)
        .attr("class", function(d){
          return "lollipop-line";
        });
      

      var circleRadio = 6;

      // Chrome 1+
      var isChrome = !!window.chrome && !!window.chrome.webstore;
      if(isChrome){
       var transitionD = 0;
      }else{
        var transitionD = 0;
      }

      var startCircles = lollipops.append("circle")
        .attr("class", "lollipop-start")
        .attr("r", circleRadio)
        .attr("cx", function(d) { 
          return x(d.dot1); 
        })
        .attr("cy", function(d) {
          return y(d.countryName) + y.bandwidth() / 2;
        })
        .on('mouseout', tip.hide)
        .on('mouseover', function(d) {
          tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d.dot1 + ' %' + "<p>");
          // Reset top for Firefox as onepage framework changes top values
          // $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px');
        })
        .transition().duration(transitionD); 

     var endCircles = lollipops.append("circle")
        .attr("class", "lollipop-end")
        .attr("r", circleRadio)
        .attr("cx", function(d) { 
          return x(d.dot2); 
        })
        .attr("cy", function(d) {
          return y(d.countryName) + y.bandwidth() / 2;
        })    
        .on('mouseout', tip.hide)    
        .on('mouseover', function(d) {
          tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + d.dot2 + ' %' + "<p>");
          // Reset top for Firefox as onepage framework changes top values
          // $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px');
        })
        .transition().duration(transitionD); 

      $('select').on('change', function () {
        var valOption = $(this).val();
        var nameVar = $(this).attr('name');

        if (valOption) { 
          if(!document.location.search) {
            history.pushState(null, "",  window.location.pathname + '?'+nameVar +'=' + valOption);              
          }
          else {              
            if(document.location.search.indexOf(nameVar) > 0){
              // reemplazamos la variable de la URL con la nueva
              var newVarString = document.location.search.replace(nameVar+'='+overallFunctions.getParameterByName(nameVar),nameVar + '=' + valOption )
              history.pushState(null, "",  window.location.pathname + newVarString );
            }
            else {
              history.pushState(null, "",  window.location.search + '&'+nameVar +'=' + valOption);
            }
          }              
        }
        return false;
      }); 
    });
  });
})(jQuery);