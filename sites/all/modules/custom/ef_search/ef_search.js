

(function ($) {
  $(document).ready(function(){
  	
     
    var clickable = ('<span id="search" class="literal off">exact word or phrase</span>');
    var mycheck = $('#edit-search-block-form--3-wrapper').append(clickable);

    if( $('#edit-search-block-form--3').val() == '' ){
        $('#search').addClass('disabled');
    }else{
        $('#search').removeClass('disabled');
    }

    $('#edit-search-block-form--3').focus(function(){

        $('#search').removeClass('disabled');
        /*
        var controlled_text = /"*"/.exec($('#edit-search-block-form--3').val()); //returns false is the re is not satisfied
        alert(controlled_text);

        if(controlled_value != null && $('search').hasClass('off')){
            $('#edit-search-block-form--3').val(controlled_text);
        }
        */
        //It doesn't work
    });
    $('#edit-search-block-form--3').focusout(function(){

        if( $(this).val() == ''){
             $('#search').addClass('disabled');
             $('#search').addClass('off');
             $('#search').removeClass('on');
        }else{
            /*
            var controlled_text = /"*"/.exec($('#edit-search-block-form--3').val()); //returns false is the re is not satisfied

            if(controlled_value != null && $('search').hasClass('off')){
                $('#edit-search-block-form--3').val(controlled_text);
            }
            */
            $('#search').removeClass('disabled');
        }
       
    });


    $('#search').on('click',function(){
    	var text = $('#edit-search-block-form--3').val();

        if( $('#edit-search-block-form--3').val() == '' ){
            $('#search').addClass('disabled');
        }else{
            $('#search').removeClass('disabled');
        }
    	
  
    	if($(this).hasClass('on') && !$(this).hasClass('disabled') ){

    		$(this).removeClass('on');
    		$(this).addClass('off');
    		text = text.replace(/"/g,'');
    		$('#edit-search-block-form--3').val(text);
    		

    	}else if($(this).hasClass('off') && !$(this).hasClass('disabled') ){

    		$(this).removeClass('off');
    		$(this).addClass('on');
    		text ='"' + text + '"';
    		$('#edit-search-block-form--3').val(text);

    	}	 	


    });

    /*jQuery('.form-submit').click(function(){
        if (jQuery(this).attr('value') == 'Apply'){
            var textBox = jQuery('#edit-search-block-form--3');
            var text = textBox.val();
            var value = textBox[0].attributes['value'].value;
            if (text != value){
                textBox.attr("value", text);

                var uri = window.location.pathname;
                //uri = uri.replace(/search?[\s\S]*?f/, 'search?search_block_form=' + escape(text) + '&f'); 

                //Update the facets
                var facets = jQuery('.facetapi-inactive').add('.facetapi-active');
                var uri;
                for (var i = 0; i < facets.size(); i ++){
                    uri = facets[i].getAttribute("href");
                    if (value == '' && uri.startsWith("/search?f[0]")){
                        uri = uri.replace(/search?[\s\S]*?f/, 'search?search_block_form=' + escape(text) + '&f');
                    } else {
                        uri = uri.replace(/search[\s\S]*?&/, 'search?search_block_form=' + escape(text) + '&');
                    }
                    
                    facets[i].setAttribute("href", uri);
                }

                //window.location.assign(uri);

            }
        }   
    });*/


  });
})(jQuery);


