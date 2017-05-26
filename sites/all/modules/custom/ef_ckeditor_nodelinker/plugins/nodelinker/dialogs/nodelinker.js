(function($){

	$.fn.extend({
        donetyping: function(callback,timeout){
            timeout = timeout || 1e3; // 1 second default timeout
            var timeoutReference,
                doneTyping = function(el){
                    if (!timeoutReference) return;
                    timeoutReference = null;
                    callback.call(el);
                };
            return this.each(function(i,el){
                var $el = $(el);
                // Chrome Fix (Use keyup over keypress to detect backspace)
                // thank you @palerdot
                $el.is(':input') && $el.on('keyup keypress paste',function(e){
                    // This catches the backspace button in chrome, but also prevents
                    // the event from triggering too preemptively. Without this line,
                    // using tab/shift+tab will make the focused element fire the callback.
                    if (e.type=='keyup' && e.keyCode!=8) return;
                    
                    // Check if timeout has been set. If it has, "reset" the clock and
                    // start over again.
                    if (timeoutReference) clearTimeout(timeoutReference);
                    timeoutReference = setTimeout(function(){
                        // if we made it here, our timeout has elapsed. Fire the
                        // callback
                        doneTyping(el);
                    }, timeout);
                }).on('blur',function(){
                    // If we can, fire the event since we're leaving the field
                    doneTyping(el);
                });
            });
        }
    });

	CKEDITOR.dialog.add( 'nodelinkDialog', function( editor ) {
		return {
			title: 'Node linker',
			minWidth: 400,
			minHeight: 200,
			contents: [
				{
					id: 'tab-basic',
					label: 'Basic Settings',
					elements: [
						{
							type: 'text',
							id: 'txtchng',
							label: 'Insert text to search by',
							setup: function( element ) {
								this.setValue( element.getText() );
							},
							commit: function( element ) {
								element.setText( this.getValue() );
							}
						}
					]
				}
			],

			onShow: function() {

				text = editor.getSelection().getSelectedText();

				// check if anything has been selected
				if(text)
				{

					var nodes = [];
					
					$.get("/ajax/retrieve-nodes/", function( response ) {
						nodes = response.nodes;	
					});

					$("input.cke_dialog_ui_input_text").autocomplete({
							    
					    source: function(request, response) {
					        
					        var term = request.term.replace(/-/g, '');

					        var matcher = new RegExp( $.ui.autocomplete.escapeRegex(term), "i" );

					       	
					       	var results = $.map(nodes, function(node) {

					            if (matcher.test(node.label.replace(/-/g, ''))) {
					                return node;
					            }
					       
					        });

					        response(results.slice(0,20));
					    
					    },
					    // Remove ui-helper (gives information about results)
					    messages: {

					        noResults: '',
					        results: function() {}
						
						},
					    appendTo: ".cke_dialog_contents_body",
					    minLength: 4,

					});
				}
				else
				{
					$('.cke_dialog_ui_vbox_child').append('<div><span class="error-message">Something needs to be selected.</span></div>');
				}
			
			},

			onOk: function() {
				
				start = editor.getSelection().getStartElement();
				start.remove();
				
				var new_element = '<a href="/' + $('input.cke_dialog_ui_input_text').val() + '">' + text + '</a>';

				editor.insertHtml(new_element);  
                  
			}
			
		};
	});

})(jQuery);