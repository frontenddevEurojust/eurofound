(function ($) {

  var arrayContains = function(array, variable)
  {
    return (array.indexOf(variable) > -1);
  }

  var getParameterByName = function(name) {
    url = window.location.href;
    name = name.replace(/[\[\]]/g, "\\$&");
    var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"),
      results = regex.exec(url);
    if (!results) return null;
    if (!results[2]) return '';
    return decodeURIComponent(results[2].replace(/\+/g, " "));
  }

  var filterData = function(data, modality, subgroup, sort)
  {

    var filtered = data.filter(function(row){
      return row.modalityCode == modality && row.subgroupCode == subgroup;
    });

    if (sort == 1 || sort == 2) {
      sort == 1 ? order = d3.ascending : order = d3.descending;
      var filteredKeyed = d3.nest()
        .key(function(d) { return d.countryName; }).sortKeys(order)
        .entries(filtered);

      filtered = filteredKeyed.map(function(a) { return a.values[0];});
    }

    if (sort == 3) {
      var byMinValue = filtered.slice(0);
      byMinValue.sort(function(d,b) {
        return d.dot2 - b.dot2;
      });
      
      filtered = byMinValue;
    }

    if (sort == 4) {
      var byMaxValue = filtered.slice(0);
      byMaxValue.sort(function(d,b) {
        return b.dot2 - d.dot2;
      });
      
      filtered = byMaxValue;
    }

    if (sort == 5) {
      var byValueGap = filtered.slice(0);
      byValueGap.sort(function(d,b) {
        return Math.abs(Math.round(d.dot1) - Math.round(d.dot3)) - Math.abs(Math.round(b.dot1) - Math.round(b.dot3));
      });
      
      filtered = byValueGap;
    }

    if (sort == 6) {
      var byValueGap = filtered.slice(0);
      byValueGap.sort(function(d,b) {
        return Math.abs(Math.round(b.dot1) - Math.round(b.dot3)) - Math.abs(Math.round(d.dot1) - Math.round(d.dot3));
      });
      
      filtered = byValueGap;
    }

    if (sort == 7) {

      var byValueGap = filtered.slice(0);
      byValueGap.sort(function(d,b) {
        return Math.abs(Math.round(d.dot3) - Math.round(d.dot2)) - Math.abs(Math.round(b.dot3) - Math.round(b.dot2));
      });
      
      filtered = byValueGap;
    }

    if (sort == 8) {
      var byValueGap = filtered.slice(0);
      byValueGap.sort(function(d,b) {
        return Math.abs(Math.round(b.dot3) - Math.round(b.dot2)) - Math.abs(Math.round(d.dot3) - Math.round(d.dot2));
      });
      
      filtered = byValueGap;
    }

    return filtered;

  }

  var createModalityFilters = function(data){
    
    var modalities = buildModalityOptions(data);
    
    var select = d3.select('body .chart-filters').append('select').property('id', 'modality-filter');

    var options = select
      .selectAll('option')
      .data(modalities).enter()
      .append('option')
        .text(function (c) { return c.modalityValue; })
        .property('value',function(c){ return c.modalityCode; });

    d3.select("#modality-filter").on("change", updateGraph);
  }

  var createSubgroupFilters = function(data){
    
    var subgroups = buildSubgroupOptions(data);
    
    var select = d3.select('body .chart-filters').append('select').property('id', 'subgroup-filter');

    var options = select
      .selectAll('option')
      .data(subgroups).enter()
      .append('option')
        .text(function (c) { return c.subgroupValue; })
        .property('value',function(c){ return c.subgroupCode; });

    d3.select("#subgroup-filter").on("change", updateGraph);
  }

  var createOrderingFilter = function() {
    var alphaSort = [
      "- None -",
      "Alphabetically ascending",
      "Alphabetically descending",
      "By value ascending",
      "By value descending",
      "By value gap (2007-2016) ascending",
      "By value gap (2007-2016) descending",
      "By value gap (2011-2016) ascending",
      "By value gap (2011-2016) descending"
    ];

    var select = d3.select('body .chart-filters').append('select').property('id', 'sort-filter');

    var options = select
      .selectAll('option')
      .data(alphaSort)
      .enter()
      .append('option')
        .text(function (d, i) { return d; })
        .property('value',function(d, i){ return i; });

    d3.select("#sort-filter").on("change", updateGraph);
  }

  var buildModalityOptions = function(data){

    var passedModalities = [];

    var result = [];

    var modalities = data.reduce(function(result, row){
    
      if (!arrayContains(passedModalities, row.modalityValue)){

        // We only need modalityCode and modalityValue
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

  var buildSubgroupOptions = function(data){

    var passedSubgroups = [];

    var result = [];

    var subgroups = data.reduce(function(result, row){
    
      if (!arrayContains(passedSubgroups, row.subgroupValue)){

        var subgroup = {
          
          subgroupCode: row.subgroupCode,

          subgroupValue: row.subgroupValue,
        
        };
        
        passedSubgroups.push(row.subgroupValue);
        
        result.push(subgroup);        
      }
      
      return result;  
    
    }, []);

    return subgroups;
  }
  

  var calculateMinValue = function (data){
    
    var minValue = 100;
   
    data.forEach(function(row, index){

      minValue = Math.min(minValue, row.dot1, row.dot2, row.dot3);

    });

    return minValue;
  }

  var lollipopLinePath = function(d) {

    var xMinValue = Math.min(d.dot1, d.dot2, d.dot3);

    var xMaxValue = Math.max(d.dot1, d.dot2, d.dot3);

    return lineGenerator([[x(Math.round(xMinValue)), y(d.countryName) + (y.bandwidth() / 2) ], [x(Math.round(xMaxValue)), y(d.countryName) + (y.bandwidth() / 2)]]);
  };
  
  var calculateMaxValue = function (data){
    var maxValue = 0;
    
    var result = data.forEach(function(row, index){

      maxValue = Math.max(maxValue, row.dot1, row.dot2, row.dot3);      
    });

    return maxValue;
  }

  var buildGraphStructure = function(csv){
    $('.chart-filters').append('<label for="modality-filter" class="label-data">Data:</label>');
    createModalityFilters(csv);
    $('.chart-filters').append('<label for="subgroup-filter" class="label-group">Group:</label>');
    createSubgroupFilters(csv);
    $('.chart-filters').append('<label for="sort-filter" class="label-sort">Sort:</label>');
    createOrderingFilter();
  };

  var axisLinePath = function(d) {
    return lineGenerator([[x(d) + 0.5, 0], [x(d) + 0.5, height]]);
  };

  var parseToFloat = function(csv){

    var data = csv.map(function(row){

      row.dot1 = parseFloat(row.dot1); 

      row.dot2 = parseFloat(row.dot2); 
      
      row.dot3 = parseFloat(row.dot3); 
      

      return row;
    });

    return data;
  }

  function updateGraph(){

    var modalityCode = d3.select('#modality-filter').property("value");
    var subgroupCode = d3.select('#subgroup-filter').property("value");
    var order = d3.select('#sort-filter').property("value");

    var filteredData = filterData(data, modalityCode, subgroupCode, order);

    if (calculateMinValue(filteredData) == 0){
      var domainMin = Math.round(calculateMinValue(filteredData));
    } else {
      var domainMin = Math.round(calculateMinValue(filteredData) - 1);
    }

    var domainMax = Math.round(calculateMaxValue(filteredData) + 1);

    padding = 0;

      if($(window).width()>=768){
        var margin = {top: 75, right:50, bottom: 75, left: 125};
        width = Number($('.chart-wrapper').outerWidth()) - margin.left - margin.right;
      }else{
        var margin = {top: 25, right:10, bottom: 25, left: 100};
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

    xAxis.tickFormat(function(d,i) {
        if (i == 0) {
          return domainMin;
        } else {
          return d3.format(".2s")(d); 
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



    // Chrome 1+
    var isChrome = !!window.chrome && !!window.chrome.webstore;
    if(isChrome){
     var transitionD = 0;
    }else{
      var transitionD = 750;
    }     
      
    var startCircles = lollipops.select("circle.lollipop-start")
    .data(filteredData)
    .on('mouseover', function(d) {
      if (d.dot1 == 0){
        tip.show("<p class='no-data'>No data available for <br>" + d.countryName + "</p>");
      } else { 
        tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + Math.round(d.dot1) +"<p>");
      }
      // Reset top for Firefox as onepage framework changes top values
      // $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
    })
    .transition().duration(transitionD)
    .attr("cx", function(d) { 
        return x(Math.round(d.dot1));           
    })
    .attr("r", function(d){
      return circleRadio;           
    })
    .attr("class", function(d){
      if (d.dot1 == 0){
        return "lollipop-start no-data";
      } else {
        return "lollipop-start";           
      }
    });

    var medianCircles = lollipops.select("circle.lollipop-median")
      .data(filteredData)
      .on('mouseover', function(d) {
        if (d.dot3 == 0){
          tip.show("No data available for " + d.countryName);
        } else { 
          tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + Math.round(d.dot3) +"<p>");
        }
        // Reset top for Firefox as onepage framework changes top values
        // $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
      })
      .transition().duration(transitionD)
      .attr("cx", function(d) { 
          return x(Math.round(d.dot3));           
      })
      .attr("r", function(d){
        return circleRadio;           
      })
      .attr("class", function(d){
        if (d.dot3 == 0){
          return "lollipop-median no-data";
        } else {
          return "lollipop-median";           
        }
      });

    var endCircles = lollipops.select("circle.lollipop-end")
      .data(filteredData)
      .on('mouseover', function(d) {
        if (d.dot2 == 0){
          tip.show("No data available for " + d.countryName);
        } else { 
          tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + Math.round(d.dot2) +"<p>");
        }
        // Reset top for Firefox as onepage framework changes top values
        // $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
      })
      .transition().duration(transitionD)
      .attr("cx", function(d) { 
          return x(Math.round(d.dot2));           
      })
      .attr("r", function(d){
        return circleRadio;           
      })
      .attr("class", function(d){
        if (d.dot2 == 0){
          return "lollipop-end no-data";
        } else {
          return "lollipop-end";           
        }
      });
      
    // añadir duration a las transiciones
    lollipops.select("path.lollipop-line")
      .data(filteredData) 
      .transition().duration(750)
      .attr("d", lollipopLinePath)
      .attr("class", function(d){
        return "lollipop-line";
      });
  }



  $(window).on("resize orientationchange",function(e){
    updateGraph();
  });


  $(document).ready(function(){

    data = [];

    if (typeof Drupal.settings.ef_d3_dataexplorer !== 'undefined') {
      var languageCode = Drupal.settings.ef_d3_dataexplorer.language;
    } else {
      console.log("Language is undefined. Data can't be loaded");
    }

    d3.csv('/sites/default/files/ejm/data/' + languageCode + '/tensions/tensions_' + languageCode + '.csv', function(csv){

      if (csv === null){
        console.log('Requested csv at "/sites/default/files/ejm/data/' + languageCode + '/tensions/tensions_' + languageCode + '.csv" was not found.');
      }
      // Initialize tooltip
      tip = d3.tip().attr('class', 'd3-tip').html(function(d) { return d; });

      if($(window).width()>=768){
        var margin = {top: 75, right:50, bottom: 75, left: 125};
        width = Number($('.chart-wrapper').outerWidth()) - margin.left - margin.right;
      }else{
        var margin = {top: 25, right:10, bottom: 25, left: 100};
        width = Number($(window).width()) - margin.left - margin.right;
      }
     
      height = Number($('.chart-wrapper').height()) - margin.top - margin.bottom;

      //temporarily
      height = 675;

      svg = d3.select("body .chart-wrapper").append("svg")
            .attr("width", width + margin.left + margin.right)
            .attr("height", height + margin.top + margin.bottom)
            .append("g")
            .attr("transform", "translate(" + margin.left + "," + margin.top + ")")
            .call(tip);
      
      // need to rewrite so start, min, lowest are the same
      var classToPos = {
        "lollipop-start": "min",
        "lollipop-end": "max",
      }
      
      // Will be created using texts excel data
      var legendLabels = [
        {label: "Perception of 'a lot' of tension (%) - 2007", class: "lollipop-start"},
        {label: "Perception of 'a lot' of tension (%) - 2011", class: "lollipop-end"}, 
        {label: "Perception of 'a lot' of tension (%) - 2016", class: "lollipop-median"},
      ];
      
      var padding = 0;

      // code for positioning legend
      var legend = svg.append("g")
        .attr("class","legend-group");


      var legendX = -200;
      var legendY = height + 50;
      var spaceBetween = 300;
      
      var legendPosition = {
        x: legendX + 70,
        y: legendY - 4
      };

      // add labels
      var textLegend = ['start','end','median'];

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

      // add circles
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


      data = parseToFloat(csv);

      buildGraphStructure(data);

      var modalityCode = getParameterByName('modality-filter');
      var subgroupCode = subgroupCode = getParameterByName('subgroup-filter');
      var order = getParameterByName('sort-filter');

      if (modalityCode == null) modalityCode = 1;
      if (subgroupCode == null) subgroupCode = 1;
      if (order == null) order = 0;

      d3.select('#modality-filter').property('value', modalityCode);
      d3.select('#subgroup-filter').property('value', subgroupCode);
      d3.select('#sort-filter').property('value', order);

      var filteredData = filterData(data, modalityCode, subgroupCode, order);

      if (calculateMinValue(filteredData) == 0){
        var domainMin = Math.round(calculateMinValue(filteredData));
      } else {
        var domainMin = Math.round(calculateMinValue(filteredData) - 1);
      }

      var domainMax = Math.round(calculateMaxValue(filteredData) + 1);
      
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
            return domainMin;
          } else {
            return d3.format(".2s")(d); 
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
        .attr("d", lollipopLinePath)
        .attr("class", function(d){
          return "lollipop-line";
        });
          

      circleRadio = 6;

      var startCircles = lollipops.append("circle")
          .attr("r", function(d){
            return circleRadio;           
          })
          .attr("cx", function(d) {
              return x(Math.round(d.dot1));           
          })
          .attr("cy", function(d) {
            return y(d.countryName) + y.bandwidth() / 2;
          })
          .attr("class", function(d){
            if (d.dot1 == 0){
              return "lollipop-start no-data";
            } else {
              return "lollipop-start";           
            }
          })
          .on('mouseout', tip.hide)
          .on('mouseover', function(d) {
            if (d.dot1 == 0){
              tip.show("No data available for " + d.countryName);
            } else { 
              tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + Math.round(d.dot1) +"<p>");
            }
            // Reset top for Firefox as onepage framework changes top values
            // $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
          });

            
        var medianCircles = lollipops.append("circle")
          .attr("r", function(d){
            return circleRadio;           
          })
          .attr("cx", function(d) {
              return x(Math.round(d.dot3)); 
          })
          .attr("cy", function(d) {
            return y(d.countryName) + y.bandwidth() / 2;
          })
          .attr("class", function(d){
            if (d.dot3 == 0){
              return "lollipop-median no-data";
            } else {
              return "lollipop-median";           
            }
          })     
          .on('mouseout', tip.hide)    
          .on('mouseover', function(d) {
            if (d.dot3 == 0){
              tip.show("No data available for " + d.countryName);
            } else { 
              tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + Math.round(d.dot3) +"<p>");
            }
            // Reset top for Firefox as onepage framework changes top values
            //$('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
          });

        var endCircles = lollipops.append("circle")
          .attr("r", function(d){
            return circleRadio;           
          })
          .attr("cx", function(d) {
              return x(Math.round(d.dot2)); 
          })
          .attr("cy", function(d) {
            return y(d.countryName) + y.bandwidth() / 2;
          })
          .attr("class", function(d){
            if (d.dot2 == 0){
              return "lollipop-end no-data";
            } else {
              return "lollipop-end";           
            }
          })  
          .on('mouseout', tip.hide)    
          .on('mouseover', function(d) {
            if (d.dot2 == 0){
              tip.show("No data available for " + d.countryName);
            } else { 
              tip.show("<p class='country-name'>"+  d.countryName + "</p><p class='dot'> " + Math.round(d.dot2) +"<p>");
            }
            // Reset top for Firefox as onepage framework changes top values
            // $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
          });

      $('select').on('change', function () {
        var valOption = $(this).val();
        var nameVar = $(this).attr('id');

        if (valOption) { 
          if(!document.location.search) {
            history.pushState(null, "",  window.location.pathname + '?'+nameVar +'=' + valOption);              
          }
          else {              
            if(document.location.search.indexOf(nameVar) > 0){
              // reemplazamos la variable de la URL con la nueva
              var newVarString = document.location.search.replace(nameVar+'='+getParameterByName(nameVar),nameVar + '=' + valOption )
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