/*(function ($) {
  $(document).ready(function(){

alert('hiiii');

  });
})(jQuery);

// AJAX
(function ($) {
  Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {



alert('hi');

  }};
})(jQuery);
*/

jQuery(window).load(function(){

	if (!jQuery.browser.msie){
		jQuery('#edit-submit').before("<div id='myDialog'><img src='https://www.efstaging.bilbomatica.es/sites/all/modules/custom/ef_missing_revisions/images/throbber.gif'><p>Saving...</p></div>");
		jQuery("#myDialog").dialog({autoOpen: false, modal: true});
		jQuery("#myDialog").dialog("close");
	}
});


(function ($) {
  $(document).ready(function() {
  	needToConfirm = false;
    var myinstances = [];
   // console.log(jQuery('.form-textarea-wrapper .wysiwyg').length);
    if(jQuery('.form-textarea-wrapper .wysiwyg').length > 0) {
      for(var i in CKEDITOR.instances) {
         myinstances[CKEDITOR.instances[i].name] = CKEDITOR.instances[i].getData();
      }

    }
    window.onbeforeunload = confirmExit;

  // When the user's role is Administrator
  	jQuery("input").each(function() {
			jQuery(this).click(function() {
				if (jQuery(this).attr("id")!="edit-save-edit" && jQuery(this).attr("id")!="edit-submit" && jQuery(this).attr("id")!="edit-sac" && jQuery(this).attr("id")!="edit-d2w" &&
						jQuery(this).attr("id")!="edit-d2w-all-revisions" && jQuery(this).attr("id")!="edit-d2w-related-contributions" &&
						jQuery(this).attr("id")!="edit-preview-changes" && jQuery(this).attr("id")!="edit-delete") {
					// Alert Messages - Exit without Saving
					window.onbeforeunload = confirmExit;
				}
				if(jQuery(this).attr("id") =="edit-d2w" ||
						jQuery(this).attr("id")=="edit-d2w-all-revisions" || jQuery(this).attr("id")=="edit-d2w-related-contributions" ||
						jQuery(this).attr("id")=="edit-preview-changes" || jQuery(this).attr("id")=="edit-delete") {
							window.onbeforeunload = "";
				}
				if (jQuery(this).attr("id")=="edit-save-edit" || jQuery(this).attr("id")=="edit-submit" || jQuery(this).attr("id")=="edit-sac") {
					//Alert Messages - Managing Contents
					jQuery.ajax({
					   async:true,
					   type: "POST",
					   dataType: "html",
					   contentType: "application/x-www-form-urlencoded",
					   url:"ef_missing_revisions.module",
					   //data:"nombre=1&apellido=luis",
					   beforeSend:function() {
					   		window.onbeforeunload = "";
					   		var windowObjectReference;
					   		//for Internet Explorer and Mozilla Firefox
					   		//if($.browser.mozilla == true || $.browser.msie == true) {
						   		/*alert('Please wait, while it is saving...');
                  var strWindowFeatures = "width=420,height=230,resizable,scrollbars=yes,status=1";

                  function openRequestedPopup() {
                    windowObjectReference = window.open("http://www.eurofound.europa.eu/", "Eurofound", strWindowFeatures);
                  }
                  openRequestedPopup();*/
                 /* $('#edit-submit').before('<div id="dialog" title="Saving">
                                      <p>Saving...</p>
                                  </div>'); */
									if (jQuery.browser.msie){
										jQuery('#edit-submit').before("<div id='myDialog'><img src='https://www.efstaging.bilbomatica.es/sites/all/modules/custom/ef_missing_revisions/images/throbber.gif'><p>Saving...</p></div>");
									}
									//$('#myDialog').css('border', '1px solid black');
                  jQuery("#myDialog").dialog({autoOpen: false, modal: true});
									jQuery("#myDialog").dialog("open");

						   	//for the rest of browsers
						   /*	}else{
						   		$('#edit-submit').before("<dialog id='myDialog'><img src='http://www.efstaging.bilbomatica.es/sites/all/modules/custom/ef_missing_revisions/images/throbber.gif'><p>Saving...</p></dialog>");
						   		$('#myDialog').css('border', '1px solid black');
						   		document.getElementById("myDialog").showModal();
					   		}*/
					   },
					   success:function() {
					   		$('#edit-submit').before("");
					   		//alert('saving...');
					   },
					   timeout:15000,
					/*   error:function() {
					    alert("error");
					   } */
						});
				}
				if(jQuery(this).attr("id")=="edit-cancel") {

				}
			});
 	});
//when the user's role is any except  administrator
	jQuery("button").each(function() {
			jQuery(this).click(function() {
				if (jQuery(this).attr("id")!="edit-save-edit" && jQuery(this).attr("id")!="edit-submit" && jQuery(this).attr("id")!="edit-d2w" &&
						jQuery(this).attr("id")!="edit-d2w-all-revisions" && jQuery(this).attr("id")!="edit-d2w-related-contributions" &&
						jQuery(this).attr("id")!="edit-preview-changes" && jQuery(this).attr("id")!="edit-delete" && jQuery(this).attr("id")!="edit-sac") {
					// Alert Messages - Exit without Saving
					window.onbeforeunload = confirmExit;
				}
				if(jQuery(this).attr("id") =="edit-d2w" ||
						jQuery(this).attr("id")=="edit-d2w-all-revisions" || jQuery(this).attr("id")=="edit-d2w-related-contributions" ||
						jQuery(this).attr("id")=="edit-preview-changes" || jQuery(this).attr("id")=="edit-delete") {
							window.onbeforeunload = "";
				}
				if (jQuery(this).attr("id")=="edit-save-edit" || jQuery(this).attr("id")=="edit-submit" || jQuery(this).attr("id")=="edit-sac") {
					//Alert Messages - Managing Contents
					jQuery.ajax({
					   async:true,
					   type: "POST",
					   dataType: "html",
					   contentType: "application/x-www-form-urlencoded",
					   url:"ef_missing_revisions.module",
					   //data:"nombre=1&apellido=luis",
					   beforeSend:function() {
					   		window.onbeforeunload = "";
					   		//for Internet Explorer and Mozilla Firefox
					   	//	if($.browser.mozilla == true || $.browser.msie == true) {
						   		if (jQuery.browser.msie){
									jQuery('#edit-submit').before("<div id='myDialog'><img src='https://www.efstaging.bilbomatica.es/sites/all/modules/custom/ef_missing_revisions/images/throbber.gif'><p>Saving...</p></div>");
								}
									//$('#myDialog').css('border', '1px solid black');
                  jQuery("#myDialog").dialog({autoOpen: false, modal: true});
									jQuery("#myDialog").dialog("open");
						   	//for the rest of browsers
						   /*		}else{
						   		$('#edit-submit').before("<dialog id='myDialog'><img src='http://www.efstaging.bilbomatica.es/sites/all/modules/custom/ef_missing_revisions/images/throbber.gif'><p>Saving...</p></dialog>");
						   		$('#myDialog').css('border', '1px solid black');
						   		document.getElementById("myDialog").showModal();
					   		} */
					   },
					   success:function() {
					   		$('#edit-submit').before("");
					   		//alert('saving...');
					   },
					   timeout:15000,
					/*   error:function() {
					    alert("error");
					   } */
						});
				}

			});
 	});

  	function confirmExit() {
        var myinstancesafter = [];
         var names = [];
         var j = 0;
         if(jQuery('.form-textarea-wrapper .wysiwyg').length > 0) {
         for(var i in CKEDITOR.instances) {
            myinstancesafter[CKEDITOR.instances[i].name] = CKEDITOR.instances[i].getData();
            names[j] = CKEDITOR.instances[i].name;
            j = j +1 ;
         }
         console.log(myinstances);
         for (var i = names.length - 1; i >= 0; i--) {
            if(myinstances[names[i]] != myinstancesafter[names[i]]) {
              needToConfirm = true;
            }
          };
        }

    		if (needToConfirm === true) {
    			return "You are about to exit the page. Do you want to save changes?";
    		}
  	}


  	$("select,input,textarea").change(function() {
   	 needToConfirm = true;
		});






 	});
})(jQuery);


