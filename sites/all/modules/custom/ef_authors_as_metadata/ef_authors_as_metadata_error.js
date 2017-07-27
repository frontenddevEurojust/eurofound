(function($, Drupal)
{
	// Our function name is prototyped as part of the Drupal.ajax namespace, adding to the commands:
	Drupal.ajax.prototype.commands.DuplicateContributor = function(ajax, response, status)
	{

		jQuery('.form-item-add-new-contributor input').after('<span class="error-author-exists">The author ' + response.error + ' already exists.<a href="javascript:" class="msg-error-close"><i class="fa fa-times" aria-hidden="true"></i></a></span>');

		$('.msg-error-close').click(function(){

			$(this).parent().remove();
		});

	};
}(jQuery, Drupal));
