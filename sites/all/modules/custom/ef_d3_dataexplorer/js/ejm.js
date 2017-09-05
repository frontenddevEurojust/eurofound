(function ($) {
  $(document).ready(function(){
		$(".filters-jm-chart fieldset legend").click(function() {
			 $(this).parent().find("div.group-filters").toggle();
			 $(this).toggleClass('opened');
		});
  });
})(jQuery);
