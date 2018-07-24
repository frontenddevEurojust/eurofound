(function($, Drupal)
{
	// Our function name is prototyped as part of the Drupal.ajax namespace, adding to the commands:
	Drupal.ajax.prototype.commands.ErrorAuthorExists = function(ajax, response, status)
	{

		RemoveItemsByClass('success-msg', 'error-msg');

		$('.form-item-add-new-contributor input').after('<span class="error-msg">The author ' + response.error + ' already exists.<a href="javascript:" class="msg-error-close"><i class="fa fa-times" aria-hidden="true"></i></a></span>');

		$('.msg-error-close').click(function(){

			$(this).parent().remove();
		});

	};

		// Our function name is prototyped as part of the Drupal.ajax namespace, adding to the commands:
	Drupal.ajax.prototype.commands.EmptyValue = function(ajax, response, status)
	{

		RemoveItemsByClass('success-msg', 'error-msg');

		$('.form-item-add-new-contributor input').after('<span class="error-msg">Something needs to be introduced for saving.<a href="javascript:" class="msg-error-close"><i class="fa fa-times" aria-hidden="true"></i></a></span>');

		$('.msg-error-close').click(function(){

			console.log($(this));

			$(this).parent().remove();
		});

	};
}(jQuery, Drupal));


function RemoveItemsByClass(){
    
    for (var i=0; i < arguments.length; i++){
        jQuery('.' + arguments[i]).remove();
    }
}