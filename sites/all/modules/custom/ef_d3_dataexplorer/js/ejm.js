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
				    if( textMedian != ""){ 
				    	var itemMedian = '<li class="median"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;'+ textMedian + '</li>';
				    }
				    if( textEnd != ""){ 
				    	var itemEnd = '<li class="end"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;' + textEnd + '</li>';
				  	}

				    $(".chart-wrapper").append('<ul class="legend-list">'+itemStart+itemMedian+itemEnd+'</ul>');
				}





	      
	      //$(".chart-wrapper").append('<ul class="legend-list"><li class="start"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;'+textStart+'</li><li class="end"><i class="fa fa-circle" aria-hidden="true"></i>&nbsp;'+textEnd+'</li></ul>');

				/*** SHOW/HIDE CHART'S DOTS FROM LEGEND'S ITEMS ***/					
				$('.legend-list li').click(function(){
						var classDot = $(this).attr('class');
						var IdParent = $(this).parent().parent().attr('id');			

					if(click == false){
						$('#'+ IdParent + ' circle.lollipop-'+classDot).css('opacity','0.2');
						$(this).css('text-decoration','line-through');

						click = true;	
						//$(this).click = true;
					}else{
						$('svg circle').removeClass('legend-highlight').removeClass('legend-opacity');
						$('#'+ IdParent + ' circle..lollipop-'+classDot).css('opacity','1');
						$(this).css('text-decoration','none');
						click = false;
						//$(this).click = false;
					}
					
				});	




	});

})(jQuery);
