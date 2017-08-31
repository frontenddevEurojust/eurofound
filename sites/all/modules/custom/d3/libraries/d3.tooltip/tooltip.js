/**
 * @file
 * D3.js tooltip extensions
 */
(function($) {
  d3 = d3 || {};

  /**
   * Creates a tooltip-like popup in svg
   *
   * @param tipjar
   *   Container to put the tooltip
   * @param x
   *   X axis of container group
   * @param y
   *   Y axis of container group
   * @param txt
   *   Text to display inside the popup
   *   @todo make more customizable
   * @param breakdowndata
   *   Text for the tooltip
   * @param i
   *   Index of the element
   * @param i
   *   Index of the element
   */
  d3.tooltip = function(tipjar, txt, breakdowndata, i, canvasWidth) {

    if (canvasWidth > 550) { 
      var tooltip = {
        w: (breakdowndata[i][0].length > 12) ? breakdowndata[i][0].length * 8 : breakdowndata[i][0].length * 12,
        h: 40,
        tip: {
          // The width of the triangular tip as it is on the base
          width:  6,
          // Tip length, vertically
          length: 6,
          // Tip offset point, from the very tip to the middle of the square
          offset: 6,
        },
      }
    }
    else { 
      var tooltip = {
        w: (breakdowndata[i][0].length > 12) ? breakdowndata[i][0].length * 8 : breakdowndata[i][0].length * 7,
        h: 40,
        tip: {
          // The width of the triangular tip as it is on the base
          width: 6,
          // Tip length, vertically
          length: 6,
          // Tip offset point, from the very tip to the middle of the square
          offset: 6,
        },
      }
    }

    var svg = tipjar.node();
    while (svg.tagName != "svg" && svg.parentNode) {
      svg = svg.parentNode;
    }
    w = parseInt(svg.attributes.width.value, 10);
    h = parseInt(svg.attributes.height.value, 10);

    //Precomputing the x and y attributes is difficult. Need to find a new way.
    //console.log(tipjar.node().getBBox());

    // Create a container for the paths specifically
    var img = tipjar.append("g");
    // Creates 3 identical paths with different opacities
    // to create a shadow effect
    var path = d3.tooltip.tooltipPath(tooltip);    
    for (var x = 2; x >= 0; x--) {
      img.append('path')
        .attr("d", path)
        .attr("fill", (x == 0) ? '#fff' : '#FFF')
        .attr('transform', 'translate(' + x + ',' + x + ')')
        .attr('stroke', 'transparent')
        .attr('padding', '25px')
        .attr('fill-opacity', function(d) {
          switch (x) {
            case 0:
              return 0;
              break;

            case 1:
              return 1;
              break;

            case 2:
              return 1;
              break;

          }
        })
        .attr('stroke-width', (x == 0) ? 1 : 0);
    }

    var path = d3.tooltip.tooltipPathArrow(tooltip);
      img.append('path')
          .attr("d", path)
          .attr("fill",'#000')


    var offset = (tooltip.w / 2) - (tooltip.tip.offset - tooltip.tip.width);

    var textbox = tipjar.append('g')
      .attr('class', 'text')
      .attr('transform', function(d) { return 'translate(-' + offset + ',-' + tooltip.h + ')'});

      console.log();

    if (canvasWidth > 550) {       
      textbox.append('text')
        .text(breakdowndata[i][0])
        .attr('text-anchor', 'start')
        .attr('dx', (tooltip.w/2)-(breakdowndata[i][0].length*3))
        .attr('dy', 8)
        .attr('font-family', 'OpenSans-Semibold-webfont')
        .attr('fill','#000')
        .attr('font-size', '12')
        .attr('font-weight', 'bold');

      textbox.append('text')
        .text(txt)
        .attr('text-anchor', 'start')
        .attr('dx', (tooltip.w/2)-15)
        .attr('dy',25)
        .attr('font-family', 'OpenSans-Bold-webfont')
        .attr('fill','#F28524')
        .attr('font-size', '14.4')
        .attr('font-weight', 'normal');
    }
    else {
      textbox.append('text')
        .text(breakdowndata[i][0])
        .attr('text-anchor', 'start')
        .attr('dx', (tooltip.w/2)-(breakdowndata[i][0].length*3))
        .attr('dy', 8)
        .attr('font-family', 'OpenSans-Semibold-webfont')
        .attr('fill','#000')
        .attr('font-size', '12')
        .attr('font-weight', 'bold');
      
      textbox.append('text')
        .text(txt)
        .attr('text-anchor', 'start')
        .attr('dx', (tooltip.w/2)-15)
        .attr('dy',25)
        .attr('font-family', 'OpenSans-Bold-webfont')
        .attr('fill','#F28524')
        .attr('font-size', '14.4')
        .attr('font-weight', 'normal');
    }
  };

  d3.tooltip.tooltipDefault = {
    w: 65,
    h: 40,
    // The width of the triangular tip as it is on the base
    tip : {width: 12,
    // Tip length, vertically
    length: 9,
    // Tip offset point, from the very tip to the middle of the square
    offset: 22, },
  };
  d3.tooltip.tooltipPath = function (tooltip) {
    tooltip = $.extend(true, {}, d3.tooltip.tooltipDefault, tooltip);
    return "M0,0"
      + 'l' + tooltip.tip.offset+',-' + tooltip.tip.length
      + 'l' + ((tooltip.w / 2) - tooltip.tip.width) + ',0'
      + 'l0,-' + tooltip.h + ''
      + 'l-' + tooltip.w + ',0'
      + 'l0, ' + tooltip.h
      + 'l' + ((tooltip.w / 2) - tooltip.tip.width) + ',0'
      + "L0,0";
  };

  d3.tooltip.tooltipPathArrow = function (tooltip) {
    tooltip = $.extend(true, {}, d3.tooltip.tooltipDefault, tooltip);
    return "M2," + 2
      + 'l' + tooltip.tip.offset+',-' + tooltip.tip.length
      + 'l' + ((tooltip.w / 2) - tooltip.tip.width) + ',0'
      + 'l0,-' + 2 + ''
      + 'l-' + tooltip.w + ',0'
      + 'l0, ' + 2
      + 'l' + ((tooltip.w / 2) - tooltip.tip.width) + ',0'
      + "L2,2";
  };

})(jQuery);
