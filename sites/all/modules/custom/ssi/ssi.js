<script>
	var historyIndex = -1;
	var requests = -1;
	var ssiHistory = [];
	var ssiframe  = '';

	function browsePrev(){
		if(historyIndex-1 >= 0){
			historyIndex--;
			url = ssiHistory[historyIndex];
			historyIndex--;
			browseUrl(url);
		}
	}

	function browseNext(){
		if(historyIndex+1 < ssiHistory.length-1){
			historyIndex++;
			url = ssiHistory[historyIndex];
			historyIndex--;
			browseUrl(url);
		}
	}

	function delegationInitiated(ssiframe){
		ssiframe.addClass('loading');
		jQuery('#ssierror').html('');
	}

	function inspectUrl(path){
		if(path.indexOf(landingUrl) == -1){
			path = landingUrl + path;
		}
		return path;
	}

	function browseUrl(path){
		if(path=="is")path="";
		requests++;
		historyIndex++;
		var ssiframe  = jQuery('#ssiframe');

		delegationInitiated(ssiframe);

		path = inspectUrl(path);
		if(path == '')return;

		ssiFrameUrl(path);

		jQuery.ajax({
			headers: {'Cookie' : document.cookie },
			url: path,
			success: function(response, status, xhr){
				var ct = xhr.getResponseHeader("content-type") || "";
				if (ct.indexOf('html') > -1) {
					var ssiframe  = jQuery('#ssiframe');

					ssiframe.html(response);
					removeUndesired(ssiframe);
					delegateSSIFrameContent();
					delegationCompleted(ssiframe);
				}else{
					delegationCompleted(jQuery('#ssiframe'));
					var win = window.open(path, '_blank');
				}


			}
		});
	}
	
	function browseForm(_this){
		requests++;
		historyIndex++;

		var ssiframe  = jQuery('#ssiframe');
		delegationInitiated(ssiframe)

		var path = _this.attr( 'action' );
		path = inspectUrl(path);

		_this.attr('action', path)

		ssiFrameUrl(path + 'browseForm' );
		
		//------------ multipart form detection

		var _data = _this.serialize();

		if(_this.attr('enctype') == 'multipart/form-data'){
			_data = _this.serializefiles();
			jQuery.ajax( {
				type: 'POST',
				url: path,
				data: _data,
				processData: false, contentType: false,
				success: function(result) {
					var ssiframe  = jQuery('#ssiframe');
					ssiframe.html(result);
					removeUndesired(ssiframe);
					delegateSSIFrameContent();
					delegationCompleted(ssiframe);
				}
			} );
		}else{
			jQuery.ajax( {
				type: 'POST',
				url: path,
				data: _data,
				success: function(result) {
					var ssiframe  = jQuery('#ssiframe');
					ssiframe.html(result);
					removeUndesired(ssiframe);
					delegateSSIFrameContent();
					delegationCompleted(ssiframe);
				}
			} );
		}

	}

	function evaluateSSIFrameContent(){
		var ssiframe  = jQuery('#ssiframe');
		
		ssiframehtml= ssiframe.html();
		if(ssiframehtml.length < 400 && ssiframehtml.indexOf('<meta http-equiv=')>-1){

			var startUrlIndex = ssiframehtml.indexOf('URL=');
			var redirectionUrl = ssiframehtml.substring(startUrlIndex+4, ssiframehtml.length );

			redirectionUrl = redirectionUrl.substring(0, redirectionUrl.indexOf('"'));
			redirectionUrl = redirectionUrl.substring(redirectionUrl.indexOf(landingUrl), redirectionUrl.length);
			browseUrl(redirectionUrl);
		}
	
	}

	function delegateSSIFrameContent(){

		var ssiframe  = jQuery('#ssiframe');

		ssiframe.find("a[href='']").each(function(){
			jQuery(this).addClass('delegated');
		});

		ssiframe.find('a:not(.delegated)').each(function(){
			var _this = jQuery(this);
			var url = _this.attr('href');

		if(url === undefined){
		}else{
			if(url.indexOf("#")!=0)
				_this.click(function(){
					browseUrl(url);
					return false;
				});
			}

			_this.addClass('delegated');
		});

		ssiframe.find('tr[bgcolor]:not(.delegated)').each(function(){
			var bgcolor = jQuery(this).attr('bgcolor');

			jQuery(this).attr('bgcolor','').css('background-color', bgcolor).addClass('delegated');
		});

		ssiframe.find('input[onClick]:not(.delegated)').each(function(){
			jQuery(this).attr('onclick','').addClass('delegated');
		});

		ssiframe.find('form:not(.delegated)').each(function(){
			var _this = jQuery(this);

			_this.addClass('delegated');

			_this.submit(function( event ) {
				event.preventDefault();
				browseForm(_this);
			});

			var $fix = _this.find("select[name='project_id']");
			if($fix.length>0){
				$fix.attr("onChange",'');
				$fix.change(function(event){
					jQuery(this).parent().submit();
				});
			}

		});

	}


	function ssiFrameUrl(url){
		jQuery('#inputSsiframeUrl').val(url);

		if(historyIndex == ssiHistory.length)
			ssiHistory.push(url);
		else
			ssiHistory[historyIndex]=url;
	}

	function removeUndesired(ssiframe){
		ssiframe.find( '[alt=\'MantisBT\']' ).parent().remove();
		ssiframe.find( '[alt=\'Powered by Mantis Bugtracker\']' ).parent().parent().parent().parent().remove();

	} 

	function delegationCompleted(ssiframe){
		ssiframe.removeClass('loading');
		ssiframe.css('border','0px ');
		jQuery('.breadcrumbs .current a').text(ssiframe.find('title').text());
		evaluateSSIFrameContent();
	}

	function browseSSILandingPage(){
		browseUrl(landingUrl);
	}


	//---------------------------
	
	jQuery(document).ready(function() {

		jQuery("body").addClass("page-ssi-login");

		var windowLink = (window.location + '');
		if(serviceLink != windowLink &&  windowLink.length >serviceLink.length){
			var requestURL = windowLink.substring(serviceLink.length, windowLink.length);
			browseUrl(requestURL);
		}else{
			browseSSILandingPage();
		}

		jQuery('#ssiframeUrlJump').click(function(){
			browseUrl(jQuery('#inputSsiframeUrl').val());
		});
		jQuery('#ssiframeUrlHome').click(function(){
			browseSSILandingPage();
		});
		jQuery('#ssiframeUrlBack').click(function(){
			 browsePrev();
		});
		jQuery('#ssiframeUrlNext').click(function(){
			 browseNext();
		});


		window.onerror = function(error) {
			var ssiframe = jQuery('#ssiframe');
			delegateSSIFrameContent();
			removeUndesired(ssiframe);
			delegationCompleted(ssiframe);
			ssiframe.css('border','1px dotted red');
			jQuery('#ssierror').html(''+error);
		};

	});

(function($) {
	$.fn.serializefiles = function() {
		var obj = $(this);
		/* ADD FILE TO PARAM AJAX */
		var formData = new FormData();
		$.each($(obj).find("input[type='file']"), function(i, tag) {
			$.each($(tag)[0].files, function(i, file) {
				 formData.append(tag.name, file);
			});
		});
		var params = $(obj).serializeArray();
		$.each(params, function (i, val) {
			formData.append(val.name, val.value);
		});
		return formData;
	};
})(jQuery);
</script>
