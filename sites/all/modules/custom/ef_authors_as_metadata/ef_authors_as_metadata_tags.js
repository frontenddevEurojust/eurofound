(function($) {
    Drupal.behaviors.ef_authors_as_metadata = {
        'attach': function(context) {

        $('#add-new-publ-contributor', context).once('ef_authors_as_metadata', function () {
    		var newAuthors = Drupal.settings.ef_authors_as_metadata.new_authors;
    		var iterations = Drupal.settings.ef_authors_as_metadata.iterations;
    		var nid = Drupal.settings.ef_authors_as_metadata.nid;

    		
    		if (newAuthors)

    		{
	    		for (var i = 0; i < iterations; i++) 

	    		{
	    			var element = '<span id="' + nid + '-' + newAuthors[i] + '" class="author-tag"><a href="removeTag(this,' + nid + ')">' + newAuthors[i] + '</a></span>';
	    			$('#add-new-publ-contributor').after(element);

	    			// url 


	    		}
    		
    		}
    	});
    		
    	}
    };
})(jQuery)


function removeTag(element, nid){

	console.log(element.innerHTML);
	console.log(nid);

	// authors-as-metadata/delete-author/' + nid + '/' + newAuthors[i]

	//$.post('/save/assign_to_user/' + aux[0] + '/' + aux[1] + '/' + uid);
	//$.jquery();
}