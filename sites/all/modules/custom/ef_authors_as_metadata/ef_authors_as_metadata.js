(function($) {
    Drupal.behaviors.ef_authors_as_metadata_basic = {
        'attach': function(context) {

        	$('#add-new-publ-contributor', context).once('ef_authors_as_metadata_basic', function () {

		    	var textPublContrib = jQuery('#edit-field-ef-publ-contributors .description span').attr('title');
				
				if (typeof textPublContrib != 'undefined')

				{
					jQuery('#edit-field-ef-publ-contributors .description').remove();

					jQuery('.form-item-field-ef-publ-contributors-und label').after('<p>' + textPublContrib + '</p>');
				}
				
				var textNewAuthor = jQuery('#edit-add-new-contributor-wrapper .description span').attr('title');

				if (typeof textPublContrib != 'undefined')

				{
					jQuery('#edit-add-new-contributor-wrapper .description').remove();

					jQuery('.form-item-add-new-contributor label').after('<p>' + textNewAuthor + '</p>');
				}
				
			});
    	
    	}
    };

})(jQuery)