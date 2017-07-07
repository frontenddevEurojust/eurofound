(function($) {
    Drupal.behaviors.ef_authors_as_metadata_error = {
        'attach': function(context) {

	        $('#add-new-publ-contributor', context).once('ef_authors_as_metadata_error', function () {
	    		console.log(Drupal.settings.ef_authors_as_metadata.text);
	    		if (typeof Drupal.settings.ef_authors_as_metadata.text !== 'undefined') {
      			
	      			var text = Drupal.settings.ef_authors_as_metadata.text;

		    		jQuery('.form-item-add-new-contributor input').after('<span class="error-author-exists">The author ' + text + ' already exists.<a href="javascript:" class="msg-error-close"><i class="fa fa-times" aria-hidden="true"></i></a></span>');

	    			$('.msg-error-close').click(function(){

		    			$(this).parent().remove();
		    		});

		    		Drupal.settings.ef_authors_as_metadata.text = undefined;

    			} 
	    		
	    	});

    	}
    };

})(jQuery)



