	jQuery(document).ready(function(){
	
		var nodes = jQuery(".terms_node").text();
		nodes = nodes.split(",");
				
		var i = 0;
		if(nodes.length > 0){
			jQuery( ".view-id-search .views-field-nid .field-content" ).each(function( index ) {
				for(i=0;i<nodes.length;i++){
					if(nodes[i] == jQuery(this).text())
					{
						jQuery(this).parent(".views-field-nid").parent(".views-row").addClass( "highlight_term" );
					}
				}
				
			});
		}
			
	}); 


