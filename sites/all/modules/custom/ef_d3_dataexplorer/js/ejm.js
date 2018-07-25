// https://tc39.github.io/ecma262/#sec-array.prototype.find
if (!Array.prototype.find) {
  Object.defineProperty(Array.prototype, 'find', {
    value: function(predicate) {
     // 1. Let O be ? ToObject(this value).
      if (this == null) {
        throw new TypeError('"this" is null or not defined');
      }

      var o = Object(this);

      // 2. Let len be ? ToLength(? Get(O, "length")).
      var len = o.length >>> 0;

      // 3. If IsCallable(predicate) is false, throw a TypeError exception.
      if (typeof predicate !== 'function') {
        throw new TypeError('predicate must be a function');
      }

      // 4. If thisArg was supplied, let T be thisArg; else let T be undefined.
      var thisArg = arguments[1];

      // 5. Let k be 0.
      var k = 0;

      // 6. Repeat, while k < len
      while (k < len) {
        // a. Let Pk be ! ToString(k).
        // b. Let kValue be ? Get(O, Pk).
        // c. Let testResult be ToBoolean(? Call(predicate, T, « kValue, k, O »)).
        // d. If testResult is true, return kValue.
        var kValue = o[k];
        if (predicate.call(thisArg, kValue, k, o)) {
          return kValue;
        }
        // e. Increase k by 1.
        k++;
      }

      // 7. Return undefined.
      return undefined;
    },
    configurable: true,
    writable: true
  });
}



(function ($) {
  $(document).ready(function(){
		$(".filters-jm-chart fieldset legend").click(function() {
			 $(this).parent().find("div.group-filters").slideToggle( "slow" );
			 $(this).toggleClass('opened');
		});

		if($('.chart-wrapper')){
			var idChart = $('.chart-wrapper').attr('id');
			$('body').addClass(idChart);
		}

  });
	
	var click = false;
	$(window).load(function() {
	      $('svg .legend-text-start').click(function(){
	      	$('.lollipops .lollipop-start').toggle('hide');
	      });
	      $('svg .legend-text-median').click(function(){
	      	$('.lollipops .lollipop-median').toggle('hide');
	      });
	      $('svg .legend-text-end').click(function(){
	      	$('.lollipops .lollipop-end').toggle('hide');
	      });


	      var textStart = $('svg .legend-text-start').text();
	      var textMedian = $('svg .legend-text-median').text();
	      var textEnd = $('svg .legend-text-end').text();

				var itemStart ="";
				var itemMedian="";
				var itemEnd="";

				if(textStart != "" || textMedian != "" || textEnd != ""){
				    if( textStart != ""){ 
				    	var itemStart ='<li class="start"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;' + textStart + '</li>';
				    }
				    if( textEnd != ""){ 
				    	var itemEnd = '<li class="end"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;' + textEnd + '</li>';
				  	}
				    if( textMedian != ""){ 
				    	var itemMedian = '<li class="median"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;'+ textMedian + '</li>';
				    }
				    $(".chart-wrapper").append('<ul class="legend-list">'+itemStart+itemEnd+itemMedian+'</ul>');
				}

				$('.legend-list li').click(function(){
					var classDot = $(this).attr('class');
					var IdParent = $(this).parent().parent().attr('id');
					$(this).toggleClass('active');
					var activeOption = $(this).attr('class');


					if(activeOption.indexOf('active') > 0){
						$('.legend-list li').addClass('active');
						//$(this).removeClass('active');
						$('#'+ IdParent + ' circle').css('opacity','0.1');
						$('#'+ IdParent + ' circle.lollipop-'+classDot).css('opacity','1');
						$('.legend-list li').css('opacity','0.3');
						$(this).css('opacity','1');		

					}else{
						$('.legend-list li').removeClass('active');
						$('.legend-list li').removeClass('active');
						$('.legend-list li').css('opacity','1');
						$('#'+ IdParent + ' circle').css('opacity','1');
					}
				
				});	


				/* butterfly chart */

	      var textStartL = $('svg .legend-text-start-l').text();
	      var textEndL= $('svg .legend-text-end-l').text();

	      var textStartR = $('svg .legend-text-start-r').text();
	      var textEndR = $('svg .legend-text-end-r').text();

				var itemStartL = "";
				var itemEndL = "";
				var itemStartR = "";
				var itemEndR = "";

				if(textStartL != "" || textEndL != "" || textStartR != "" || textEndR != ""){
				    if( textStartL != ""){ 
				    	var itemStartL ='<li class="start-L"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;' + textStartL + '</li>';
				    }
				    if( textEndL != ""){ 
				    	var itemEndL = '<li class="end-L"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;' + textEndL + '</li>';
				  	}
				    if( textStartR != ""){ 
				    	var itemStartR = '<li class="start-R"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;'+ textStartR + '</li>';
				    }
				    if( textEndR != ""){ 
				    	var itemEndR = '<li class="end-R"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;' + textEndR + '</li>';
				  	}
				    $(".legend-butterfly").append('<ul class="legend-list-butterfly">'+itemStartL+itemEndL+itemStartR+itemEndR+'</ul>');
				}

				$('.legend-list-butterfly li').click(function(){
					var classItem = $(this).attr('class');
					var IdParent = $('.chart-wrapper').attr('id');

					$(this).toggleClass('active');
					var activeOption = $(this).attr('class');

					if(classItem.indexOf('start-L') == 0){
						hightlightRect('left11','start-L');
					}
					else if(classItem.indexOf('end-L') == 0)
					{
						hightlightRect('left16','end-L');
					}
					else if(classItem.indexOf('start-R') == 0)
					{
						hightlightRect('right11','start-R');			
					}
					else if(classItem.indexOf('end-R') == 0)
					{
						hightlightRect('right16','end-R');	
					}


					function hightlightRect(c,c2){
						if(activeOption.indexOf('active') > 0){
							$('#'+ IdParent + ' rect').css('opacity','0.1');
							$('#'+ IdParent + ' rect').css('display','none');
							$('#'+ IdParent + ' rect.'+c+'').css('opacity','1');
							$('#'+ IdParent + ' rect.'+c+'').css('display','block');

							$('.legend-list-butterfly li').css('opacity','0.4');
							$('.legend-list-butterfly li.'+c2+'').css('opacity','1');	


						}else{
							$('#'+ IdParent + ' rect').css('opacity','1');
							$('#'+ IdParent + ' rect').css('display','block');
							$('.legend-list-butterfly li').removeClass('active').css('opacity','1');
						}
					}
				
				});	      


	});

})(jQuery);
