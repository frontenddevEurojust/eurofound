(function($) {
    $(document).ready(function(){


	        var textPublContrib = $('#edit-field-ef-publ-contributors .description span').attr('title');
            
            if(textPublContrib == undefined){
                var textPublContrib = $('#edit-field-ef-publ-contributors .description').text();
            }
	    

            $('#edit-field-ef-publ-contributors .description').css('display','none');

            $('.form-item-field-ef-publ-contributors-und label').after('<p>' + textPublContrib + '</p>');

	        

	        var textNewAuthor = $('#edit-add-new-contributor-wrapper .description span').attr('title');

            if($('#edit-add-new-contributor-wrapper .description') != ''){               
                if(textNewAuthor == undefined){
                    var textNewAuthor = $('#edit-add-new-contributor-wrapper .description').text();
                }     
            }
	        

            $('#edit-add-new-contributor-wrapper .description').css('display','none');

            $('.form-item-add-new-contributor label').after('<p>' + textNewAuthor + '</p>');  	
    });
})(jQuery)