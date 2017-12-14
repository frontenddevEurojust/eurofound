(function ($) {


  var arrayContains = function(array, country)
  {
    return (array.indexOf(country) > -1);
  }

  var filterData = function(data, modality)
  {

    var filtered = data.filter(function(row){
        return row.modalityCode == modality;
    });

    return filtered;
  }

  var createModalityFilter = function(data){

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

  var buildModalityOptions = function(data){

    var passedModalities = [];

    var result = [];

    var modalities = data.reduce(function(result, row){

      if (!arrayContains(passedModalities, row.modalityValue)){

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

  var calculateMinValue = function (data){
    var minValue = 100;
   
    data.forEach(function(row, index){

      minValue = Math.min(minValue, row.dot1, row.dot2);
    });

    return minValue;
  }

  var lollipopLinePath = function(d) {
    return lineGenerator([[x(d.dot1), y(d.countryName) + (y.bandwidth() / 2) ], [x(d.dot2), y(d.countryName) + (y.bandwidth() / 2)]]);
  };

  var calculateMaxValue = function (data){
    var maxValue = 0;
    
    var result = data.forEach(function(row, index){

      maxValue = Math.max(maxValue, row.dot1, row.dot2);
    });

    return maxValue;
  }

  var buildGraphStructure = function(csv){
    $('.chart-filters').append('<label for="#modality-filter">Data:</label>');
    createModalityFilter(csv);
  };

  var parseToFloat = function(csv){

    var data = csv.map(function(row){

      row.dot1 = parseFloat(row.dot1);

      row.dot2 = parseFloat(row.dot2);

      return row;
    });

    return data;
  }

  var axisLinePath = function(d) {
    return lineGenerator([[x(d) + 0.5, 0], [x(d) + 0.5, height]]);
  }

  function updateGraph() {

    var modalityCode = $('#modality-filter').val();

    var filteredData = filterData(data, modalityCode);
    
    domainMax = Math.round(calculateMaxValue(filteredData) + 1);
    domainMin = Math.round(calculateMinValue(filteredData) - 1);

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
      .on('mouseout', tip.hide)
      .on('mouseover', function(d) {
        tip.show(d.dot1 + " " + d.countryName);
        // Reset top for Firefox as onepage framework changes top values
        $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px');
      })
      .transition().duration(750)
      .attr("cx", function(d) {
        return x(d.dot1);
      })
      .attr("cy", function(d) {
        return y(d.countryName) + y.bandwidth() / 2;
      });  

    var endCircles = lollipops.select("circle.lollipop-end")
      .data(filteredData)
      .transition().duration(750)
      .attr("cx", function(d) { 
          return x(d.dot2); 
      })
      .attr("cy", function(d) {
          return y(d.countryName) + (y.bandwidth() / 2);
      });

    lollipops.select("path.lollipop-line")
      .data(filteredData) 
      .transition().duration(750)
      .attr("d", lollipopLinePath)
      .attr("class", function(d){
        return "lollipop-line";
      });
  }       

  

  $(document).ready(function(){
    // Save complete csv data
    data = [];

    if (typeof Drupal.settings.ef_d3_dataexplorer !== 'undefined') {
      var languageCode = Drupal.settings.ef_d3_dataexplorer.language;
    } else {
      console.log("Language is undefined. Data can't be loaded");
    }


    d3.csv('/sites/default/files/ejm/data/' + languageCode + '/happiness/happiness_' + languageCode + '.csv', function(csv) {

      if (csv === null){
        console.log('Requested csv at "/sites/default/files/ejm/data/' + languageCode + '/happiness/happiness_' + languageCode +  '.csv" was not found.');
      }

      // Initialize tooltip
      tip = d3.tip().attr('class', 'd3-tip').html(function(d) { return d; });

      var margin = {top: 75, right:150, bottom: 75, left: 150};


      width = Number($('.chart-wrapper').width()) - margin.left - margin.right,
      height = Number($('.chart-wrapper').height()) - margin.top - margin.bottom;

      // temporarily
      height = 675;

      var svg = d3.select("body .chart-wrapper").append("svg")
          .attr("width", width + margin.left + margin.right)
          .attr("height", height + margin.top + margin.bottom)
          .attr("id", "happiness-chart")
          .append("g")
          .attr("transform", "translate(" + margin.left + "," + margin.top + ")")
          .call(tip);

      // need to rewrite so start, min, lowest are the same
      var classToPos = {
        "lollipop-start": "min",
        "lollipop-end": "max",
      }

      var padding = 0;

      var circleRadio = 6;

      var languageCode = 'en';

      data = parseToFloat(csv);

      buildGraphStructure(data);

      modalityCode = $('#modality-filter').val();

      var filteredData = filterData(data, modalityCode);

      domainMax = Math.round(calculateMaxValue(filteredData) + 1);

      domainMin = Math.round(calculateMinValue(filteredData) - 1);

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
        .text("Happiness")
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
          tip.show(d.dot1 + " " + d.countryName);
          // Reset top for Firefox as onepage framework changes top values
          $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px');
        });

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
          tip.show(d.dot2 + " " + d.countryName);
          // Reset top for Firefox as onepage framework changes top values
          $('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px');
        })

  });

});

})(jQuery);


