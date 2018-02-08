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


	      
	      //$(".chart-wrapper").append('<ul class="legend-list"><li class="start"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;'+textStart+'</li><li class="end"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;'+textEnd+'</li></ul>');

				/*** SHOW/HIDE CHART'S DOTS FROM LEGEND'S ITEMS ***/					
				

				/* ///click and the legend and the circle hides itself

				$('.legend-list li').click(function(){
						var classDot = $(this).attr('class');
						var IdParent = $(this).parent().parent().attr('id');			

					if(click == false){
						$('#'+ IdParent + ' circle.lollipop-'+classDot).css('opacity','0.2');
						$(this).css('text-decoration','line-through');

						click = true;	
					}else{
						$('svg circle').removeClass('legend-highlight').removeClass('legend-opacity');
						$('#'+ IdParent + ' circle..lollipop-'+classDot).css('opacity','1');
						$(this).css('text-decoration','none');
						click = false;
					}
					
				});	
				*/

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




	});

})(jQuery);
