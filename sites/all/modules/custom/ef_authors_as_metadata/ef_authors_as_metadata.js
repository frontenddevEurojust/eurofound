(function($) {
    $(document).ready(function(){


	        var textPublContrib = jQuery('#edit-field-ef-publ-contributors .description span').attr('title');
            
            if(textPublContrib == undefined){
                var textPublContrib = jQuery('#edit-field-ef-publ-contributors .description').text();
            }
	    

            jQuery('#edit-field-ef-publ-contributors .description').css('display','none');

            jQuery('.form-item-field-ef-publ-contributors-und label').after('<p>' + textPublContrib + '</p>');

	        

	        var textNewAuthor = jQuery('#edit-add-new-contributor-wrapper .description span').attr('title');

            if(jQuery('#edit-add-new-contributor-wrapper .description') != ''){               
                if(textNewAuthor == undefined){
                    var textNewAuthor = jQuery('#edit-add-new-contributor-wrapper .description').text();
                }     
            }
	        

            jQuery('#edit-add-new-contributor-wrapper .description').css('display','none');

            jQuery('.form-item-add-new-contributor label').after('<p>' + textNewAuthor + '</p>');
  	
    });
})(jQuery)