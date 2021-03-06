(function($) {

  var maxCountrySelected = 4;
  var maxCountriesMsg = 'You can select up to ' + maxCountrySelected + ' countries only'
  var countryExist = 0;

  var getParameterByName = function(name) {
    url = window.location.href;
    name = name.replace(/[\[\]]/g, "\\$&");
    var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"),
      results = regex.exec(url);
    if (!results) return null;
    if (!results[2]) return '';

    if( name == 'country' ) results[2] = results[2].toUpperCase();

      switch (results[2]) { 
        case 'all': 
          results[2] = 'All employment';
          break;

        case 'gender': 
          results[2] = 'Gender';
          break;

        case 'time': 
          results[2] = 'Part time / full time';
          break;

        case 'Employment status': 
          results[2] = 'status';
          break;

        case 'contract': 
          results[2] = 'Contract (employees only)';
          break;

        case 'combined': 
          results[2] = 'Combined employment status';
          break;

        case 'country': 
          results[2] = 'Country of birth';
          break;

        case 'sector': 
          results[2] = 'Broad sector';
          break;

        case 'wage': 
          results[2]  = 'Job-wage';
          break;

        case 'quality': 
          results[2]  = 'Broad job quality';
          break;

        case 'education': 
          results[2]  = 'Education';
          break;

      }

    return decodeURIComponent(results[2].replace(/\+/g, " "));
  }


  var getParameterURLByName = function(name) {
      url = window.location.href;
      name = name.replace(/[\[\]]/g, "\\$&");
      var regex = new RegExp("[?&]" + name + "(=([^&#]*)|&|#|$)"),
        results = regex.exec(url);
      if (!results) return null;
      if (!results[2]) return '';
      return decodeURIComponent(results[2].replace(/\+/g, " "));
    }

  var countryNames = [];




  Drupal.d3.ejm = function (select, settings) {

    var ejm = [];
    var stacked = 0;


    if(getParameterByName('country') != null){
      var countryPar = getParameterByName('country').split(",");
      var urlVars = getParameterByName('country').split(",").length;
      if(urlVars == 1){
        var urlVarsInit = true;  
      } else {
        var urlVarsInit = false; 
      }
          
    }else{
      var countryPar = [];
      var urlVars = 1;
      var urlVarsInit = true;
      countryPar.push("EU");
    }

    if(getParameterByName('criterion') != null){
      $('.secondary-filters legend').addClass('opened');
    }



    var countryFilter = d3.select("#country")
      .attr("multiple","multiple")
      .attr("class","chosen-select");


	
    countryFilter.selectAll("option")
  		.data(settings.countries)
  		.enter().append("option")
  		.attr("value", function (d) { 
        return d[0]; 
      })
  		.text(function (d) { return d[1]; })		
  		.property("selected", function(d)
  		{

        if( countryPar.length > maxCountrySelected){          
          $('.advice-select-countries').css('color','#F00');

          if($('.advice-max-countries').text() != ''){
             $('.advice-max-countries').html(maxCountriesMsg + '<i class="fa fa-times" aria-hidden="true"></i>');
          } else {
            $('.advice-select-countries').append(  '<div class="advice-max-countries">' + maxCountriesMsg + '<i class="fa fa-times" aria-hidden="true"></i></div>' );
          }
        }
        
  			if(countryPar.length != null ) {          
          if( countryPar.indexOf(d[0]) != -1 ){
            if( countryPar.indexOf(d[0]) <= maxCountrySelected ){
              countryPar.length = maxCountrySelected;
              $('.chosen-select').val(countryPar).trigger("chosen:updated");
              return d[0] === d[0]; 
            }
          } 
  			}
		});



  	var periodFilterPar = getParameterByName('time');
    var periodFilter = d3.select("#time");

    periodFilter.selectAll("option")
		.data(settings.period)
		.enter().append("option")
		.attr("value", function (d) { return d; })
		.text(function (d) { return d; })
		.property("selected", function(d)
		{
			if(periodFilterPar != null && periodFilterPar.length > 0)
			{
				return d === periodFilterPar; 
			}
			else
			{
				return d === "2013-2016"; 
			}
		});

    breakdownKeys = Object.keys(settings.keys_by_breakdown);


	  var breakdownFilterPar = getParameterByName('breakdown');
    var breakdownFilter = d3.select("#breakdown");

    breakdownFilter.selectAll("option")
		.data(breakdownKeys)
		.enter().append("option")
		.attr("value", function (d) { 
      return d; 
    })
		.text(function (d) { return d; })
		.property("selected", function(d)
		{
			if(breakdownFilterPar != null && breakdownFilterPar.length > 0)
			{
				return d === breakdownFilterPar; 
			}

		});

    var criterionFilterPar = getParameterByName('criterion');
    var criterionFilter = d3.select("#criterion");	

	
    criterionFilter.selectAll("option")
		.data(settings.criterion)
		.enter().append("option")
		.attr("value", function (d) { 
      return d; 
    })
		.text(function (d) { return d; })
		.property("selected", function(d)
		{
			if(criterionFilterPar != null && criterionFilterPar.length > 0)
			{
				return d === criterionFilterPar; 
			}

		});

    var stackedInput = 0;

      //***** WHEN NO SELECTED COUNTRY MESAGGE IS DISPLAYED******//
    function msgDisplay(tags){

      if( tags == 0 ){
        d3.select(".country").text('');
        $('.ejm-alert').css('display', 'block');
        $('.jm-footnote').css('display', 'none');
        $('#time').attr('disabled','disabled').addClass('disabled');  
        $('#breakdown').attr('disabled','disabled').addClass('disabled');  
        $('#criterion').attr('disabled','disabled').addClass('disabled');          
     
      }else{
        $('.ejm-alert').css('display', 'none');
        $('.jm-footnote').css('display', 'block');   
        $('#time').removeAttr('disabled','').removeClass('disabled'); 
        $('#breakdown').removeAttr('disabled','').removeClass('disabled'); 
        $('#criterion').removeAttr('disabled','').removeClass('disabled');

      }
    }




   
    function filtersOnChange(){
      $("#ejm-chart svg").remove();
      $(".d3-tip").remove();
      countriesSelected = countryNames;
      countryNames.length = 0;

      var countryTags = [];

      for(i=0;i<$('.chosen-select')[0].length;i++){
       if($('.chosen-select')[0][i].selected == true){
        countryTags.push($('.chosen-select')[0][i].value);
       } 
      }      
      if( countryTags.length <= maxCountrySelected){
        $('.advice-select-countries').removeAttr('style');
        $('.advice-max-countries').remove();
        
        for(i=0;i<$('.chosen-select')[0].length;i++){
         if($('.chosen-select')[0][i].selected == true){
          render_graph( $('.chosen-select')[0][i].value , countryTags.length );
         } 
        }        
      } else { 


        if( countryTags.length > maxCountrySelected){          
          $('.advice-select-countries').css('color','#F00');

          if($('.advice-max-countries').text() != ''){
             $('.advice-max-countries').html(maxCountriesMsg + '<i class="fa fa-times" aria-hidden="true"></i>');
          } else {
            $('.advice-select-countries').append(  '<div class="advice-max-countries">' + maxCountriesMsg + '<i class="fa fa-times" aria-hidden="true"></i></div>' );
          }
        }

        $('.advice-max-countries i.fa-times').click(function (){
            $('.advice-select-countries').removeAttr('style');
            $('.advice-max-countries').remove();
        });  
        
        var valOption = getParameterURLByName('country');
        if( valOption != null ) valOption = String.prototype.toUpperCase.apply(valOption).split(",");

        for(i=0;i<valOption.length;i++){          
          render_graph( valOption[i] , countryTags.length );
        } 
      }

      msgDisplay(countryTags.length);

      if( countryTags.length == 0 ){
        $('.jm-charts h2').css('display','none');
      }else{
        $('.jm-charts h2').css('display','block');
      }

    }




    $('.chosen-select').on('change', function(evt, params) {
        countryExist = 0;
        urlVarsInit = false;
        filtersOnChange();        
    });
    d3.select("#time").on('change', function () {
        filtersOnChange();
    });
    d3.select("#criterion").on('change', function () {
        filtersOnChange();
    });
    d3.select("#breakdown").on('change', function () { 
        filtersOnChange();
    });

    
    window.addEventListener("resize", function () {
      $("#ejm-chart svg").remove();
      $(".d3-tip").remove();
      countryNames.length = 0;
      filtersOnChange();   
    });  

 
    d3.csv("/sites/default/files/ejm/data.csv", function(data) {
      ejm = data.map(function(d) { return d; });

     // render_graph(settings.id);
      for(i=0;i<countryPar.length;i++){
        if(i < maxCountrySelected ){

          if(countryPar[i] != undefined){
            render_graph(countryPar[i], countryPar.length );
          }
          
        } else {
          if($('.advice-max-countries').text() != ''){
             $('.advice-max-countries').html(maxCountriesMsg + '<i class="fa fa-times" aria-hidden="true"></i>');
          } else {
            $('.advice-select-countries').append(  '<div class="advice-max-countries">' + maxCountriesMsg + '<i class="fa fa-times" aria-hidden="true"></i></div>' );
          }
        }      
      }
    });


    function render_graph(c, urlVars) {
      
      if(c == 'ejm-chart'){
        country = "EU";        
      }else{
        country = c;
      }

      // number of the charts

      if( urlVars == 1 || urlVarsInit == true){
        $("#ejm-chart").addClass('only-one');
        var widthSVG = $("#ejm-chart").width()*0.6;
        var heightSVG = $("#ejm-chart").width()*0.45;

        msgDisplay( urlVars );
      }
      else if( urlVars >= 2 )
      {
        $("#ejm-chart").removeClass('only-one');
        var widthSVG = $("#ejm-chart").width()/ 2.5;
        var heightSVG = widthSVG*1;
      }


      if( $( window ).width() > 600 && $( window ).width() <= 1024 ){
        var widthSVG = $("#ejm-chart").width()*0.9;
        var heightSVG = $("#ejm-chart").width()*0.45;

      }
      else if ( $( window ).width() <= 600 )
      {
        var widthSVG = $("#ejm-chart").width()*0.9;
        var heightSVG = $("#ejm-chart").width()*0.60;
      }


      // d3.select("#country").property('value')
      period = d3.select("#time").property('value');
      criterion = d3.select("#criterion ").property('value');
      breakdown = d3.select("#breakdown").property('value');



      if (period == '2011-2013' || period == '2011-2016') {
        countryFilter.selectAll("option").property("disabled", function(d){ return d[0] === "NL" || d[0] === "SK"});
        $('.chosen-select').trigger("chosen:updated"); 
      }      
      else {
        countryFilter.selectAll("option").attr("disabled", null);
        $('.chosen-select').trigger("chosen:updated");
      }



      if (country == 'NL' || country == 'SK') {
        countryExist ++ ;
        }

      if (  countryExist != 0 ) {
        periodFilter.selectAll("option").property("disabled", function(d){ return d === "2011-2013" || d === "2011-2016"});
        $('.chosen-select').trigger("chosen:updated");
      } 
      else {
        periodFilter.selectAll("option").attr("disabled", null);
        $('.chosen-select').trigger("chosen:updated");
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


	  //this is the fraction of the maximum value which is added as a top and bottom margin.
	  var topMargin = 0.10;
	  var bottomMargin = 0.10;
      var rows = columnValues.map(function(d, i) { return d; });

      // Use first value in each row as the label.
      xLabels = ['Low', 'Mid-low', 'Mid', 'Mid-high', 'High'];
      key = breakdownColumns.map(function(d) { return d[0]; });

      // From inside out:
      // - Convert all values to numeric numbers.
      // - Merge all sub-arrays into one flat array.
      // - Return the highest (numeric) value from flat array.
      min = d3.min(d3.merge(columnValues).map(function(d) { (d > 0) ? minY = 0 : minY = d; return + minY; }));
      max = d3.max(d3.merge(columnValues).map(function(d) { (d <= 0) ? maxY = 0 : maxY = d; return + maxY; }));

      //Adding a margin to the top of the graph.
      max = max + max * topMargin;
      min = min + min * bottomMargin;


      // Range for stacked charts
      var minStacked = getMinStackedValue(columnValues) + (getMinStackedValue(columnValues) * bottomMargin);
      var maxStacked = getMaxStackedValue(columnValues) + ( getMaxStackedValue(columnValues) * topMargin);		


        
      range = (min >= 0) ? max : max - min;
      rangeStacked = (minStacked >= 0) ? maxStacked : maxStacked - minStacked;

      // Padding is top, right, bottom, left as in css padding.
      p = [50, 50, 30, 50, 60],
      w = widthSVG,
      h = heightSVG,
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

        x = d3.scaleLinear().domain([0,rows.length]).range([0,chart.w]),
        barY = d3.scaleLinear().domain([0,range]).range([chart.h, 0]),
        y = d3.scaleLinear().domain([min,max]).range([chart.h, 0]),

        barYStacked = d3.scaleLinear().domain([0,rangeStacked]).range([chart.h, 0]),
        yStacked = d3.scaleLinear().domain([minStacked,maxStacked]).range([chart.h, 0]),
        z = d3.scaleOrdinal().range(settings.colors[breakdown]),
        div = (settings.id) ? settings.id : 'visualisation';

      breakdown != "All employment" ? d3.select(".breakdown").text(" (and by " + breakdown.toLowerCase() + ")") : d3.select(".breakdown").text("");

      countryNames.push( countryText[0][1] ); 


      d3.select(".country").text(countryNames.join( ', ' ) + ',');
      d3.select(".period").text(period);
      d3.select(".criterion").text(criterion.toLowerCase());

      tip = d3.tip().attr('class', 'd3-tip').html(function(d) { return d; });



      /* SVG BASE */
      var svg = d3.select('#' + div).append("svg")
        .attr("width", w)
        .attr("height", h + 90)
        .attr('class',country)
        .append("g")
        .attr("transform", "translate(" + p[4] + "," + p[3] + ")")
        .call(tip);
      
      /* INITIAL SVG TRANSITION */
      svg.transition()
          .on("start", function() { d3.select(this).style("opacity", 0); })
          .duration(850)
          .style("opacity", 1);

      svg.append("text")
        .attr("class","charts-title")
        .attr("width", chart.w)
        .attr("transform",'translate('+ chart.w/2+',-12)')
        .text(countryText[0][1]);


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
        .attr("y", -40)
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
          .on('mouseover', function(d, i, n) {
            tip.show("<p class='country-name'>" + breakdownColumns[i][0] + "</p><p class='dot'>" + d + "</p>");
            //$('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px');
          })
          .on('mouseout', function(d, i) {
            tip.hide();
          });
      }
      else
      {
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
          .attr('y', function (d,i) { return (d > 0) ? y(Math.abs(d)) : y(Math.abs(d)) + chart.h - barY(Math.abs(d)); })
          .attr('fill', function(d,i) { return d3.rgb(z(i)); })
          .on('mouseover', function(d, i) {
            //tip.show(breakdownColumns[i][0] + " " + d);
            tip.show("<p class='country-name'>" + breakdownColumns[i][0] + "</p><p class='dot'>"  + d + "</p>");
            //$('.d3-tip').css('top', ($(d3.event.target).offset().top - 50) + 'px');
          })
          .on('mouseout', function(d, i) {
            tip.hide();
          });
      }


      /* LEGEND */
        
      $(".legendHTML").remove();

      var legendHTML = d3.select('.legend-wrapper')
      .append("ul")
      .attr("class","legendHTML");

      var keys = legendHTML.selectAll(".legendHTML")
        .data(key)
        .enter().append("li")        
        .text( function(d,i) { 
           return d;            
        });
      keys.append("div")
        .attr("style", function(d,i) { return  "background:"+d3.rgb(z(i)); });




      divFootnotes = d3.select(".jm-footnote");
      divFootnotes.select("h3").remove();
      divFootnotes.selectAll("p").remove();
      
      if (footNote[0]) {
        divFootnotes.append("h3").text("Note");
        $.each(footNote, function(key, value) {
          divFootnotes.append("p").text(value);
        });
      }else{
        // console.log( 'footnote ===>' + footNote);
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

        var footnote = [];
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

    
    $('select').on('change', function () {
      var valOption = $(this).val();
      var nameVar = $(this).attr('id');

      switch (valOption) { 
        case 'All employment': 
          valOption = 'all';
          break;

        case 'Gender': 
          valOption = 'gender';
          break;

        case 'Part time / full time': 
          valOption = 'time';
          break;

        case 'Employment status': 
          valOption = 'status';
          break;

        case 'Contract (employees only)': 
          valOption = 'contract';
          break;

        case 'Combined employment status': 
          valOption = 'combined';
          break;

        case 'Country of birth': 
          valOption = 'country';
          break;

        case 'Broad sector': 
          valOption = 'sector';
          break;

        case 'Job-wage': 
          valOption = 'wage';
          break;

        case 'Broad job quality': 
          valOption = 'quality';
          break;

        case 'Education': 
          valOption = 'education';
          break;

      }


      if( nameVar == 'country' && valOption != null ) valOption = String.prototype.toLowerCase.apply(valOption).split(",");

      var numOptionCountries = 0;
      if( nameVar == 'country' && valOption != null ) numOptionCountries = String.prototype.toLowerCase.apply(valOption).split(",").length;


      if (valOption && numOptionCountries <= maxCountrySelected ) {
        $('.legend-wrapper').css('display','block');
        if(!document.location.search) {               
             history.pushState(null, "",  window.location.pathname + '?'+nameVar +'=' + valOption);
        }
        else {
          if(document.location.search.indexOf(nameVar+'=') > 0) {
            var stringToReplace = encodeURI(nameVar+'='+getParameterURLByName(nameVar));
            var newVarString = document.location.search.replace(stringToReplace,nameVar + '=' + valOption );
            newVarString = newVarString.replace('&&','&');
            history.pushState(null, "",  window.location.pathname + newVarString );
          }
          else {
            history.pushState(null, "",  window.location.search + '&'+nameVar +'=' + valOption);
          }
        }

      }
      else {
        if( valOption == null ){       
          var stringToReplace = '&'+encodeURI(nameVar+'='+getParameterURLByName(nameVar));
          var newVarString = document.location.search.replace(stringToReplace,'');
          newVarString = newVarString.replace('&&','&');
          history.pushState(null, "",  window.location.pathname + newVarString );
          $('.legend-wrapper').css('display','none');
        }  
      }    

      return false;
    });


    $('.advice-max-countries i.fa-times').click(function (){
        $('.advice-select-countries').removeAttr('style');
        $('.advice-max-countries').remove();
    });
   // $(".chosen-select").chosen();
    $(".chosen-select").chosen({
      placeholder_text_multiple: "Select Some Options",
      max_selected_options: 4,
      allow_single_deselect: true
    });

  }
})(jQuery);
