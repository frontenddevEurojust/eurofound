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

                var element = '<span id="' + nid + '-' + currentValue + '" class="author-tag"><a href="javascript:" title="Delete Author" onclick="removeTag(this,' + nid + ')">' + currentValue + '</a></span>';

                $('#add-new-publ-contributor').after(element);

                $('.form-item-add-new-contributor input').after('<span class="success-msg">The author <strong>' + currentValue + '</strong> has been saved in the taxonomy successfully and will be saved in the current node when the node is saved. <a href="javascript:" class="success-msg-close" title="Hide message"><i class="fa fa-times" aria-hidden="true"></i></a></span>');
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

		if(response.status == 200)	{
            //console.log('#' + nid + '-' + element.innerHTML);
            jQuery('span.author-tag[id="' + nid + '-' + element.innerHTML + '"]').remove();
            //jQuery('#' + nid + '-' + element.innerHTML).remove();
            jQuery(".success-msg").hide();
            jQuery('.form-item-add-new-contributor input').after('<span class="success-msg" style="background:#F1DDDD;" >Author <strong>' +  element.innerHTML + '</strong> has been deleted.<a href="javascript:" class="success-msg-close" style="color: #666;"><i class="fa fa-times" aria-hidden="true"></i></a></span>');
		}

        jQuery('.success-msg-close').click(function(){

            jQuery(this).parent().remove();

        });

	});



}

function RemoveItemsByClass(){
    
    for (var i=0; i < arguments.length; i++){
        jQuery('.' + arguments[i]).remove();
    }
}
