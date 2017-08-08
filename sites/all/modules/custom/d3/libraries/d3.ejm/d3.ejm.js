(function($) {

  Drupal.d3.ejm = function (select, settings) {

    country = d3.select("#country").property('value');
    period = d3.select("#period").property('value');
    criterion = d3.select("#criterion").property('value');
    breakdown = d3.select("#breakdown").property('value');

    var breakdownColumns = settings.keys_by_breakdown[breakdown];

    d3.csv("/sites/default/files/ejm/data.csv", function(data) {
      ejm = data.map(function(d) { return d; });

      selection = ejm.filter(function(csv) {
        return csv.country == country && csv.criterion == criterion && csv.period == period;
      });

      columnValues = getColumnValues(selection, breakdownColumns, settings.rows);

      var rows = columnValues,
        // Use first value in each row as the label.
        xLabels = rows.map(function(d) { return d.shift(); })
        key = settings.legend,
        // From inside out:
        // - Convert all values to numeric numbers.
        // - Merge all sub-arrays into one flat array.
        // - Return the highest (numeric) value from flat array.
        min = d3.min(d3.merge(columnValues).map(function(d) { return + d; })),
        max = d3.max(d3.merge(columnValues).map(function(d) { return + d; })),
        range = (min >= 0) ? max : max - min,
        // Padding is top, right, bottom, left as in css padding.
        p = [20, 50, 30, 50],
        w = $("#ejm-chart").width(),
        h = w * .60,
        // chart is 65% and 80% of overall height
        chart = {w: w * .90, h: h * .85},
        legend = {w: w * .50, h: h},
        // bar width is calculated based on chart width, and amount of data
        // items - will resize if there is more or less
        barWidth = ((chart.w * .50) / (rows.length * key.length)),
        // each cluster of bars - makes coding later easier
        barGroupWidth = (key.length * barWidth),
        // space in between each set
        barSpacing = (.50 * chart.w) / rows.length,
        x = d3.scale.linear().domain([0,rows.length]).range([0,chart.w]),
        y = d3.scale.linear().domain([0,max]).range([chart.h, 0]),
        ng = d3.scale.linear().domain([0,range]).range([chart.h, 0]),
        z = d3.scale.ordinal().range(["#2361A6", "#9BBB5A", "#4AADC4", "#F7931A", "#9269D6"]),
        div = (settings.id) ? settings.id : 'visualisation';

      /* SVG BASE */
      var svg = d3.select('#' + div).append("svg")
        .attr("width", w)
        .attr("height", h)
        .append("g")
        .attr("transform", "translate(" + p[3] + "," + p[0] + ")");

      /* GREY BACKGROUND */
      svg.append("rect")
        .attr("width", chart.w)
        .attr("height", chart.h)
        .attr("fill", "#efefef");

      /* APPEND A GROUP WITH THE chart CLASS */
      var graph = svg.append("g")
        .attr("class", "chart");

      /* X AXIS  */
      var xTicks = graph.selectAll("g.ticks")
        .data(rows)
        .enter().append("g")
        .attr("class","ticks")
        .attr('transform', function(d,i) { return 'translate(' + (x(i) + ((barGroupWidth + 50) / 2)) + ',' + (chart.h + 10) + ')'})
        .append("text")
        .attr("dy", ".71em")
        .attr("text-anchor", "middle")
        .text(function(d,i){ return xLabels[i]; });

      /* LINES */
      var rule = graph.selectAll("g.rule")
        .data(y.ticks(4))
        .enter().append("g")
        .attr("class", "rule")
        .attr("transform", function(d) { return "translate(0," + y(d) + ")"; });

      rule.append("line")
        .attr("x2", chart.w)
        .style("stroke", function(d) { return d ? "#fff" : "#000"; })
        .style("stroke-opacity", function(d) { return d ? .7 : null; });

      /* Y AXIS */
      rule.append("text")
        .attr("x", -15)
        .attr("dy", ".35em")
        .attr("text-anchor", "end")
        .text(d3.format(",d"));

      var bar = graph.selectAll('g.bars')
        .data(rows)
        .enter().append('g')
        .attr('class', 'bargroup')
        .attr('transform', function(d,i) { return "translate(" + i * (barGroupWidth + barSpacing) + ", 0)"; });

      bar.selectAll('rect')
        .data(function(d) { return d; })
        .enter().append('rect')
        .attr("width", barWidth)
        .attr("height", function(d) { return chart.h - y(d); })
        .attr('x', function (d,i) { return i * barWidth + 25; })
        .attr('y', function (d,i) { return y(d); })
        .attr('fill', function(d,i) { return d3.rgb(z(i)); })
        .on('mouseover', function(d, i) { showToolTip(d, i, this); })
        .on('mouseout', function(d, i) { hideToolTip(d, i, this); });

/*
      bar.selectAll('rect')
        .data(function(d) { return d; })
        .enter().append('rect')
        .attr("width", barWidth)
        .attr("height", function(d) { return chart.h - y(Math.abs(d)); })
        .attr('x', function (d,i) { return i * barWidth + 25; })
        .attr('y', function (d,i) { if (d >= 0) {return y(d)} else {return s(max);}; })
        .attr('fill', function(d,i) { return d3.rgb(z(i)); })
        .on('mouseover', function(d,i) { showToolTip(d, i, this); })
        .on('mouseout', function(d,i) { hideToolTip(d, i, this); });
*/

      /* LEGEND */
      var legend = svg.append("g")
        .attr("class", "legend")
        .attr("transform", "translate(" + 0 + "," + (chart.h + 40) + ")");

      var keys = legend.selectAll("g")
        .data(key)
        .enter().append("g")
        .attr("transform", function(d,i) { return "translate(" + (i * 180) + "," + 0 + ")"});

      keys.append("rect")
        .attr("fill", function(d,i) { return d3.rgb(z(i)); })
        .attr("width", 16)
        .attr("height", 16)
        .attr("y", 0)
        .attr("x", 0);

      var labelWrapper = keys.append("g");

      labelWrapper.selectAll("text")
        .data(function(d,i) { return d3.splitString(key[i], 15); })
        .enter().append("text")
        .text(function(d,i) { return d})
        .attr("x", 20)
        .attr("y", function(d,i) { return i * 20})
        .attr("dy", "1em");

      function showToolTip(d, i, obj) {
        // Change color and style of the bar.
        var bar = d3.select(obj);
        bar.attr('stroke', '#ccc')
          .attr('stroke-width', '1')
          .attr('opacity', '0.75');

        var group = d3.select(obj.parentNode);

        var tooltip = graph.append('g')
          .attr('class', 'tooltip-ejm')
          // move to the x position of the parent group
          .attr('transform', function(data) { return group.attr('transform'); })
            .append('g')
          // now move to the actual x and y of the bar within that group
          .attr('transform', function(data) { return 'translate(' + (Number(bar.attr('x')) + barWidth) + ',' + y(d-20) + ')'; });

        d3.tooltip(tooltip, d);
      }

      function hideToolTip(d, i, obj) {
        var group = d3.select(obj.parentNode);
        var bar = d3.select(obj);
        bar.attr('stroke-width', '0')
          .attr('opacity', 1);

        graph.select('g.tooltip-ejm').remove();
      }

      function getColumnValues(json, breakdownColumns, datagrid) {
        $.each(json, function(key, value) {
          $.each(breakdownColumns, function(key2, value2) {
            $.each(datagrid, function(key3, value3) {
              datagrid[key][(key2 + 1)] = value[value2[1]];
            });
          });
        });
        return datagrid;
      }
    });
  }
})(jQuery);
