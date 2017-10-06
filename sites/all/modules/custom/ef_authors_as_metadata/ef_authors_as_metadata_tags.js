(function($, Drupal)
{
    // Our function name is prototyped as part of the Drupal.ajax namespace, adding to the commands:
    Drupal.ajax.prototype.commands.AddTags = function(ajax, response, status)
    {

        var newAuthors = response.newAuthors;

        var nid = response.nid;


        if (newAuthors.length > 0)

        {
            newAuthors.forEach(function(currentValue){

                RemoveItemsByClass('success-msg', 'error-msg');

                var element = '<span id="' + nid + '-' + currentValue + '" class="author-tag"><a href="javascript:" onclick="removeTag(this,' + nid + ')">' + currentValue + '</a></span>';

                $('#add-new-publ-contributor').after(element);

                $('.form-item-add-new-contributor input').after('<span class="success-msg">The author ' + currentValue + ' has been saved in both the taxonomy Authors and the current node successfully.<a href="javascript:" class="success-msg-close"><i class="fa fa-times" aria-hidden="true"></i></a></span>');
            });

        }

        $('.success-msg-close').click(function(){

            $(this).parent().remove();

        });


    };

    // Our function name is prototyped as part of the Drupal.ajax namespace, adding to the commands:
    Drupal.ajax.prototype.commands.ChangeLabels = function(ajax, response, status)
    {

        var textNewAuthor = $('#edit-add-new-contributor-wrapper .description span').attr('title');

        if(textNewAuthor == undefined){
            var textNewAuthor = $('#edit-add-new-contributor-wrapper .description').text();
        }


        $('#edit-add-new-contributor-wrapper .description').css('display','none');

        $('.form-item-add-new-contributor label').after('<p>' + textNewAuthor + '</p>');


    };

}(jQuery, Drupal));


function removeTag(element, nid){

	jQuery.get( '/authors-as-metadata/delete-author/' + nid + '/' + encodeURI(element.innerHTML), function( response ) {

		if(response.status == 200)

		{
            jQuery('#' + nid + '-' + element.innerHTML).remove();
		}

	});

}

function RemoveItemsByClass(){
    
    for (var i=0; i < arguments.length; i++){
        jQuery('.' + arguments[i]).remove();
    }
}
