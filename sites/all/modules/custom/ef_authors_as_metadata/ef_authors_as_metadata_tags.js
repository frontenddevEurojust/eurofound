(function($) {
    Drupal.behaviors.ef_authors_as_metadata = {
        'attach': function(context) {

        $('#add-new-publ-contributor', context).once('ef_authors_as_metadata', function () {
    		
    		var newAuthors = Drupal.settings.ef_authors_as_metadata.new_authors;
    		var iterations = Drupal.settings.ef_authors_as_metadata.iterations;
    		var nid = Drupal.settings.ef_authors_as_metadata.nid;

    		
    		if (newAuthors != '')

    		{
	    		for (var i = 0; i < iterations; i++) 

	    		{

	    			var element = '<span id="' + nid + '-' + newAuthors[i] + '" class="author-tag"><a href="javascript:" onclick="removeTag(this,' + nid + ')">' + newAuthors[i] + '<i class="fa fa-close author-tag-close" aria-hidden="true"></i></a></span>';
	    			$('#add-new-publ-contributor').after(element);

	    		}
    		
    		}
    	});
    		
    	}
    };

})(jQuery)

function removeTag(element, nid){

	jQuery.get( '/authors-as-metadata/delete-author/' + nid + '/' + encodeURI(element.innerHTML), function( response ) {

		if(response.status == 200)

		{
			jQuery('#' + nid + '-' + element.innerHTML).remove();
		}

	});

}