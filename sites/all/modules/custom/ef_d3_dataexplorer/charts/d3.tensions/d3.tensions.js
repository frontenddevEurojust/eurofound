(function ($) {

  var arrayContains = function(array, variable)
  {
    return (array.indexOf(variable) > -1);
  }

  var filterData = function(data, modality, subgroup)
  {

    var filtered = data.filter(function(row){
      return row.modalityCode == modality && row.subgroupCode == subgroup;
    });

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
    $('.chart-filters').append('<label for="modality-filter">Data:</label>');
    createModalityFilters(csv);
    $('.chart-filters').append('<label for="subgroup-filter">Group:</label>');
    createSubgroupFilters(csv);
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

    var modalityCode = $('#modality-filter').val();
    var subgroupCode = $('#subgroup-filter').val();

    var filteredData = filterData(data, modalityCode, subgroupCode);

    if (calculateMinValue(filteredData) == 0){
      var domainMin = Math.round(calculateMinValue(filteredData));
    } else {
      var domainMin = Math.round(calculateMinValue(filteredData) - 1);
    }

    var domainMax = Math.round(calculateMaxValue(filteredData) + 1);

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
      
    var startCircles = lollipops.select("circle.lollipop-start")
    .data(filteredData)
    .on('mouseover', function(d) {
      if (d.dot1 == 0){
        tip.show("No data available for " + d.countryName);
      } else { 
        tip.show(Math.round(d.dot1) + " " + d.countryName);
      }
      // Reset top for Firefox as onepage framework changes top values
      $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
    })
    .transition().duration(750)
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
          tip.show(Math.round(d.dot3) + " " + d.countryName);
        }
        // Reset top for Firefox as onepage framework changes top values
        $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
      })
      .transition().duration(750)
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
          tip.show(Math.round(d.dot2) + " " + d.countryName);
        }
        // Reset top for Firefox as onepage framework changes top values
        $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
      })
      .transition().duration(750)
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

      var margin = {top: 75, right:150, bottom: 75, left: 150};


      width = Number($('.chart-wrapper').width()) - margin.left - margin.right,
      height = Number($('.chart-wrapper').height()) - margin.top - margin.bottom;

      //temporarily
      height = 800;

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
        {label: "Perception of 'a lot' of tension (%) - 2011", class: "lollipop-median"}, 
        {label: "Perception of 'a lot' of tension (%) - 2016", class: "lollipop-end"},
      ];
      
      var padding = 0;

      // code for positioning legend
      var legend = svg.append("g")
        .attr("class","legend-group");


      var legendX = width / 2 - 180;
      var legendY = -50;
      var spaceBetween = 100;
      
      var legendPosition = {
        x: legendX + 70,
        y: legendY - 4
      };

      // add labels
      legend.selectAll("text")
        .data(legendLabels)
        .enter().append("text")
        .attr("class","legend-text")
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

      var modalityCode = $('#modality-filter').val();
      var subgroupCode = $('#subgroup-filter').val();
      
      var filteredData = filterData(data, modalityCode, subgroupCode);

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
      
      xAxisGroup.append("text")
        .attr("class", "x-title")
        .attr("x", 0)
        .attr("y",-margin.top/2)
        .text("Tensions")
        .attr("fill", "black");
      
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
              tip.show(Math.round(d.dot1) + " " + d.countryName);
            }
            // Reset top for Firefox as onepage framework changes top values
            $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
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
              tip.show(Math.round(d.dot3) + " " + d.countryName);
            }
            // Reset top for Firefox as onepage framework changes top values
            $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
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
              tip.show(Math.round(d.dot2) + " " + d.countryName);
            }
            // Reset top for Firefox as onepage framework changes top values
            $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px'); 
          });
        
      
    });
  });

})(jQuery);