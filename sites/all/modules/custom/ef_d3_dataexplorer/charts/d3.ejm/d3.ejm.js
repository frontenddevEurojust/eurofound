(function($) {

  Drupal.d3.ejm = function (select, settings) {

    var ejm = [];
    var stacked = 0;

    var countryFilter = d3.select("#country");

    countryFilter.selectAll("option")
      .data(settings.countries)
      .enter().append("option")
      .attr("value", function (d) { return d[0]; })
      .text(function (d) { return d[1]; })
      .property("selected", function(d){ return d[0] === "EU"; });

    var periodFilter = d3.select("#period");

    periodFilter.selectAll("option")
      .data(settings.period)
      .enter().append("option")
      .attr("value", function (d) { return d; })
      .text(function (d) { return d; })
      .property("selected", function(d){ return d === "2013-2016"; });;

    breakdownKeys = Object.keys(settings.keys_by_breakdown);

    var breakdownFilter = d3.select("#breakdown");

    breakdownFilter.selectAll("option")
      .data(breakdownKeys)
      .enter().append("option")
      .attr("value", function (d) { return d; })
      .text(function (d) { return d; });

    var criterionFilter = d3.select("#criterion");

    criterionFilter.selectAll("option")
      .data(settings.criterion)
      .enter().append("option")
      .attr("value", function (d) { return d; })
      .text(function (d) { return d; });

    var stackedInput = 0;

    d3.select("#country").on("change", render_graph);
    d3.select("#period").on("change", render_graph);
    d3.select("#criterion").on("change", render_graph);
    d3.select("#breakdown").on("change", render_graph);

    window.addEventListener("resize", render_graph);
 
    d3.csv("/sites/default/files/ejm/data.csv", function(data) {
      ejm = data.map(function(d) { return d; });
      render_graph();
    });

    function render_graph() {

      d3.select("svg").remove();

      country = d3.select("#country").property('value');
      period = d3.select("#period").property('value');
      criterion = d3.select("#criterion").property('value');
      breakdown = d3.select("#breakdown").property('value');

      if (period == '2011-2013' || period == '2011-2016') {
        countryFilter.selectAll("option")
          .property("disabled", function(d){ return d[0] === "NL" || d[0] === "SK"});
      }
      else {
        countryFilter.selectAll("option")
          .attr("disabled", null);
      }

      if (country == 'NL' || country == 'SK') {
        console.log(country);
        periodFilter.selectAll("option")
          .property("disabled", function(d){ console.log(d); return d === "2011-2013" || d === "2011-2016"});
      } 
      else {
        periodFilter.selectAll("option")
          .attr("disabled", null);
      }

      breakdown == 'Combined employment status' || breakdown == 'Country of birth' || breakdown == 'Broad sector' ? stacked = 1 : stacked = 0;

      countryText = settings.countries.filter(function(countries) {
        return countries[0] == country;
      });

      var breakdownColumns = settings.keys_by_breakdown[breakdown];

      var datagrid = [];

      selection = ejm.filter(function(csv) {
        return csv.country == country && csv.criterion == criterion && csv.period == period;
      });

      columnValues = getColumnValues(selection, breakdownColumns, datagrid);

      var footNote = getFootnote(selection, settings.footnote);

      var rows = columnValues.map(function(d, i) { return d; }),
        // Use first value in each row as the label.
        xLabels = ['Low', 'Mid-low', 'Mid', 'Mid-high', 'High'],
        key = breakdownColumns.map(function(d) { return d[0]; })
        // From inside out:
        // - Convert all values to numeric numbers.
        // - Merge all sub-arrays into one flat array.
        // - Return the highest (numeric) value from flat array.
        min = d3.min(d3.merge(columnValues).map(function(d) { (d > 0) ? minY = 0 : minY = d; return + minY; })),
        minStacked = getMinStackedValue(columnValues),
        max = d3.max(d3.merge(columnValues).map(function(d) { (d <= 0) ? maxY = 0 : maxY = d; return + maxY; })),
        maxStacked = getMaxStackedValue(columnValues),
        range = (min >= 0) ? max : max - min,
        rangeStacked = (minStacked >= 0) ? maxStacked : maxStacked - minStacked,

        // Padding is top, right, bottom, left as in css padding.
        p = [50, 50, 30, 50, 60],
        w = $("#ejm-chart").width(),
        h = w * .60,
        // chart is 65% and 80% of overall height
        chart = {w: w * .90, h: h * .85},
        legend = {w: w * .50, h: h},
        // bar width is calculated based on chart width, and amount of data
        // items - will resize if there is more or less
        barWidth = ((chart.w * .65) / (rows.length * key.length)),
        barWidthStacked = chart.w * .65 / rows.length,
        // each cluster of bars - makes coding later easier
        barGroupWidth = (key.length * barWidth),
        // space in between each set
        barSpacing = (.35 * chart.w) / rows.length,

        x = d3.scale.linear().domain([0,rows.length]).range([0,chart.w]),
        barY = d3.scale.linear().domain([0,range]).range([chart.h, 0]),
        y = d3.scale.linear().domain([min,max]).range([chart.h, 0]),
        barYStacked = d3.scale.linear().domain([0,rangeStacked]).range([chart.h, 0]),
        yStacked = d3.scale.linear().domain([minStacked,maxStacked]).range([chart.h, 0]),
        z = d3.scale.ordinal().range(settings.colors[breakdown]),
        div = (settings.id) ? settings.id : 'visualisation';

      console.log(rows);

      breakdown != "All employment" ? d3.select(".breakdown").text(" (and by " + breakdown.toLowerCase() + ")") : d3.select(".breakdown").text("") ;
      d3.select(".country").text(countryText[0][1]);
      d3.select(".period").text(period);
      d3.select(".criterion").text(criterion.toLowerCase());

      //console.log('#' + div);

      /* SVG BASE */
      var svg = d3.select('#' + div).append("svg")
        .attr("width", w)
        .attr("height", h + 50)
        .append("g")
        .attr("transform", "translate(" + p[4] + "," + p[3] + ")");


      /* INITIAL SVG TRANSITION */
      svg.transition()
          .each("start", function() { d3.select(this).style("opacity", 0); })
          .duration(850)
          .style("opacity", 1);

      /* GREY BACKGROUND */
      
      svg.append("rect")
        .attr("width", chart.w)
        .attr("height",chart.h)
        .attr("y",0)
        .attr("fill", "#F9F9F9");


      svg.append("line")
        .attr("y2", chart.h)
        .style("stroke-width",1)
        .style("stroke", "#BBB");

      /* people (thousands) LITERAL) */
      svg.append("text")
        .attr("x", (chart.h / 2)-55)
        .attr("y", -45)
        .attr("font-size", 12)
        .attr("transform","rotate(-90 "+ Number(chart.h/2) +" "+ Number(chart.h/2)+ ")")
        //.attr("style", "writing-mode: tb;")
        .text("People (thousands)");

      /* APPEND A GROUP WITH THE chart CLASS */
      var graph = svg.append("g")
        .attr("class", "chart");

      /* X AXIS */
      if (stacked) {
        var xTicks = graph.selectAll("g.ticks")
          .data(rows)
          .enter().append("g")
          .attr("class","ticks")
          .attr('transform', function(d,i) { return 'translate(' + (x(i) + ((barWidthStacked + 50) / 2)) + ',' + (chart.h + 10) + ')'})
          .append("text")
          .attr("dy", ".71em")
          .attr("text-anchor", "middle")
          .text(function(d,i){ return xLabels[i]; });
      }
      else {
        var xTicks = graph.selectAll("g.ticks")
          .data(rows)
          .enter().append("g")
          .attr("class","ticks")
          .attr('transform', function(d,i) { return 'translate(' + (x(i) + ((barGroupWidth + 50) / 2)) + ',' + (chart.h + 20) + ')'})
          .append("text")
          .attr("dy", ".71em")
          .attr("text-anchor", "middle")
          .text(function(d,i){ return xLabels[i]; });
      }

      /* LINES */
      if (stacked) {
        var rule = graph.selectAll("g.rule")
          .data(yStacked.ticks(16))
          .enter().append("g")
          .attr("class", "rule")
          .attr("transform", function(d) { return "translate(0," + yStacked(d) + ")"; });
      }
      else {
        var rule = graph.selectAll("g.rule")
          .data(y.ticks(16))
          .enter().append("g")
          .attr("class", "rule")
          .attr("transform", function(d) { return "translate(0," + y(d) + ")"; });
      }

      rule.append("line")
        .attr("x2", chart.w-1)
        .attr("transform",function(d) { return d ? "translate(1,0)" : "translate(0,0)"; })
        .style("stroke", function(d) { return d ? "#fff" : "#BBB"; })
        .style("stroke-width", 2)
        .style("stroke-opacity", function(d) { return d ? 1 : null; });

      /* Y AXIS */
      rule.append("text")
        .attr("x", -5)
        .attr("dy", ".35em")
        .attr("text-anchor", "end")
        .text(function(d,i){ return d });

      if (stacked) {
        var accp = 0, accn = 0;
        var bar = graph.selectAll('g.bars')
          .data(rows)
          .enter().append('g')
          .attr('class', 'bargroup')
          .attr('transform', function(d,i) { return "translate(" + i * (barWidthStacked + barSpacing) +  ",0)"; });

        bar.selectAll('rect')
          .data(function(d) { return d; })
          .enter().append('rect')
          .attr("width", barWidthStacked)
          .attr("height", function(d) { return chart.h - barYStacked(Math.abs(d)); })
          .attr('x', function (d,i) { return 25; })
          .attr('y', function (d,i) { d = Number(d); if (i == 0) {accp = accn = 0}; if (d >= 0) { accp = accp + d; return yStacked(accp);} else { accn = accn - Math.abs(d); return yStacked(Math.abs(d)) + chart.h - barYStacked(Math.abs(accn));}})
          .attr('fill', function(d,i) { return d3.rgb(z(i)); })
          .on('mouseover', function(d, i) { showToolTip(d, i, this); })
          .on('mouseout', function(d, i) { hideToolTip(d, i, this); });
      }
      else {
        var bar = graph.selectAll('g.bars')
          .data(rows)
          .enter().append('g')
          .attr('class', 'bargroup')
          .attr('transform', function(d,i) { return "translate(" + i * (barGroupWidth + barSpacing) + ", 0)"; });

        bar.selectAll('rect')
          .data(function(d) { return d; })
          .enter().append('rect')
          .attr("width", barWidth)
          .attr("height", function(d) { return chart.h - barY(Math.abs(d)); })
          .attr('x', function (d,i) { return i * barWidth + 25; })
          .attr('y', function (d,i) { return (d > 0) ? y(Math.abs(d)) : y(Math.abs(d)) + chart.h - barY(Math.abs(d)) ; })
          .attr('fill', function(d,i) { return d3.rgb(z(i)); })
          .on('mouseover', function(d, i) { showToolTip(d, i, this); })
          .on('mouseout', function(d, i) { hideToolTip(d, i, this); });
      }

      /* LEGEND */
      var legend = svg.append("g")
        .attr("class", "legend")
        .attr("transform", "translate(" + 0 + "," + (chart.h + 60) + ")");

      switch (breakdown) {
        case "All employment":
          var keys = legend.selectAll("g")
            .data(key)
            .enter().append("g")
            .attr("transform", function(d,i) { return "translate(" + chart.w / 2.5 + "," + 0 + ")"});
            break;

        case "Gender":
        case "Part time / full time":
        case "Employment status":
        case "Contract (employees only)":
          var keys = legend.selectAll("g")
            .data(key)
            .enter().append("g")
            .attr("transform", function(d,i) { return "translate(" + ((chart.w / 3) + (i * chart.w / 6))  + "," + 0 + ")"});
            break;

        case "Combined employment status":
        case "Broad sector":
          var keys = legend.selectAll("g")
            .data(key)
            .enter().append("g")
            .attr("transform", function(d,i) { return "translate(" + ((chart.w / 6) + (i * chart.w / 5.5))  + "," + 0 + ")"});
            break;

        case "Country of birth":
          var keys = legend.selectAll("g")
            .data(key)
            .enter().append("g")
            .attr("transform", function(d,i) { return "translate(" + ((chart.w / 10) + (i * chart.w / 6))  + "," + 0 + ")"});
            break;
      }

      keys.append("rect")
        .attr("fill", function(d,i) { return d3.rgb(z(i)); })
        .attr("width", 12)
        .attr("height", 12)
        .attr("y", 0)
        .attr("x", 0);

      var labelWrapper = keys.append("g");

      labelWrapper.selectAll("text")
        .data(function(d,i) { return d3.splitString(key[i], 15); })
        .enter().append("text")
        .text(function(d,i) { return d})
        .attr("font-size", 12)
        .attr("x", 20)
        .attr("y", function(d,i) { return i * 12})
        .attr("dy", "1em");

      function wrap(text, width) {
        text.each(function() {
          var text = d3.select(this),
          words = text.text().split(/\s+/).reverse(),
          word,
          line = [],
          lineNumber = 0, 
          lineHeight = 1.2, 
          x = text.attr("x"), 
          y = text.attr("y"),
          dy = text.attr("dy") ? text.attr("dy") : 0;
          tspan = text.text(null).append("tspan").attr("x", x).attr("y", y).attr("dy", dy + "em");
          while (word = words.pop()) {
            line.push(word);
            tspan.text(line.join(" "));
            if (tspan.node().getComputedTextLength() > width) {
              line.pop();
              tspan.text(line.join(" "));
              line = [word];
              tspan = text.append("tspan").attr("x", 0).attr("y", y).attr("dy", ++lineNumber * lineHeight + dy + "em").text(word);
            }
          }
        });
      }

      divFootnotes = d3.select(".jm-footnote");
      divFootnotes.select("h3").remove();
      divFootnotes.selectAll("p").remove();
      if (footNote[0]) {
        divFootnotes.append("h3").text("Note");
        $.each(footNote, function(key, value) {
          divFootnotes.append("p").text(value);
        });
      }
    
      function showToolTip(d, i, obj) {
        // Change color and style of the bar.
        var bar = d3.select(obj);
        bar.attr('stroke', '#ccc')
          .attr('stroke-width', '1')
          .attr('fill', '#f16000');

        var group = d3.select(obj.parentNode);
        
        if (stacked) {
          var tooltip = graph.append('g')
            .attr('class', 'tooltip-ejm')
            // move to the x position of the parent group
            .attr('transform', function(data) { return group.attr('transform'); })
              .append('g')
            // now move to the actual x and y of the bar within that group
            .attr('transform', function(data) { return 'translate(' + (Number(bar.attr('x') - (barWidthStacked / 2)) + barWidthStacked-1.5) + ',' + Number(bar.attr('y')) + ')'; });
        }
        else {
          var tooltip = graph.append('g')
            .attr('class', 'tooltip-ejm')
            // move to the x position of the parent group
            .attr('transform', function(data) { return group.attr('transform'); })
              .append('g')
            // now move to the actual x and y of the bar within that group
            .attr('transform', function(data) { d < 0 ? tooltipY = 0 : tooltipY = d; return 'translate(' + (Number(bar.attr('x') - (barWidth / 2)) + barWidth) + ',' + y(tooltipY) + ')'; });
        }

        d3.tooltip(tooltip, d, breakdownColumns, i, w);
      }

      function hideToolTip(d, i, obj) {
        var group = d3.select(obj.parentNode);
        var bar = d3.select(obj);
        bar.attr('stroke-width', '0')
          .attr('fill', function(d) { return d3.rgb(z(i)); })

        graph.select('g.tooltip-ejm').remove();
      }

      function getColumnValues(json, breakdownColumns, datagrid) {
        $.each(json, function(key, value) {
          datagrid.push(new Array());
          $.each(breakdownColumns, function(key2, value2) {
            datagrid[key].push(value[value2[1]]);
          });
        });

        return datagrid;
      }

      function getFootnote(json, footnotes) {
        var footnote = []
        
        if (json[0].Footnote == "A") {
          footnote[0] = footnotes.A;
        }
        
        if (json[0].Footnote == "AB") {
          footnote[0] = footnotes.A;
          footnote[1] = footnotes.B;
        }
        
        return footnote;
      }

      function getMinStackedValue(array) {
        var minRange = 0;
        $.each(array, function(key, value) {
          if (value.length < 3) { return 0; }
          minValue = d3.sum(value.filter(function(v) { return v < 0; }));
          if (minRange > minValue) { minRange = minValue}
        });
        return minRange;
      }

      function getMaxStackedValue(array) {
        var maxRange = 0;
        $.each(array, function(key, value) {
          if (value.length < 3) { return 0; }
          maxValue = d3.sum(value.filter(function(v) { return v > 0; }));
          if (maxRange < maxValue) { maxRange = maxValue}
        });
        return maxRange;
      }

    }
  }
})(jQuery);
