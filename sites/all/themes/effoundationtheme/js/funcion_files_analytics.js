jQuery(window).load(function() {
	var filetypes = /\.(zip|exe|pdf|doc*|xls*|ppt*|mp3)$/i;
	var baseHref = '';
	if (jQuery('base').attr('href') != undefined){
		baseHref = jQuery('base').attr('href');
	}
	jQuery('a').each(function() {
		var href = jQuery(this).attr('href');
		//if (href && (href.match(/^https?\:/i)) && (!href.match(document.domain))) {
			if (href && (href.match(/^https?\:/i))) {
			jQuery(this).click(function() {
				//debugger;
				var extLink = href.replace(/^https?\:\/\//i, '');
				ga(['_trackEvent', 'External', 'Click', extLink]);
				
				//For files opening at the same window
				if (jQuery(this).attr('target') != undefined && jQuery(this).attr('target').toLowerCase() != '_blank') {
					setTimeout(function() { location.href = href; }, 200);
					return false;
				}
			});
		}
		else if (href && href.match(/^mailto\:/i)) {
			jQuery(this).click(function() {
				var mailLink = href.replace(/^mailto\:/i, '');
				ga(['_trackEvent', 'Email', 'Click', mailLink]);
			});
		}
		else if (href && href.match(filetypes)) {
			jQuery(this).click(function() {
				var extension = (/[.]/.exec(href)) ? /[^.]+$/.exec(href) : undefined;
				var filePath = href;
				ga(['_trackEvent', 'Download', 'Click-' + extension, filePath]);
				if (jQuery(this).attr('target') != undefined && jQuery(this).attr('target').toLowerCase() != '_blank') {
					setTimeout(function() { location.href = baseHref + href; }, 200);
					return false;
				}
			});
		}
	});
});
