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

	$(window).load(function() {
	      $('svg .legend-text-start').click(function(){
	      	$('.lollipops .lollipop-start').toggle('hide');
	      });
	      $('svg .legend-text-end').click(function(){
	      	$('.lollipops .lollipop-end').toggle('hide');
	      });

	      var textStart = $('svg .legend-text-start').text();
	      var textEnd = $('svg .legend-text-end').text();
	      $(".chart-wrapper").append('<ul class="legend-editable"><li>'+textStart+'</li><li>'+textEnd+'</li></ul>');

	});

})(jQuery);
