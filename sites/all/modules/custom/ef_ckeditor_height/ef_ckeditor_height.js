(function ($, Drupal) {
   Drupal.behaviors.ckeditor = {
    attach: function(context, settings) {
		CKEDITOR.on('instanceReady', function(){		
			for(var i in CKEDITOR.instances) {
				  var $this = $("#"+CKEDITOR.instances[i].name);
				  var rows = $this.attr('rows');
				  var height = rows * 20;
				  $this.next("div.cke").find(".cke_contents").css("height", height);
			}		
		});
    }
  };
})(jQuery, Drupal);
