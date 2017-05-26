
CKEDITOR.plugins.add( 'nodelinker', {
    
    icons: 'nodelinker',
    
    init: function( editor ) {
        //Plugin logic goes here.
        editor.addCommand( 'nodelinker', new CKEDITOR.dialogCommand( 'nodelinkDialog' ));

		editor.ui.addButton( 'nodelinker', {
		    label: 'Add Node link',
		    command: 'nodelinker',
		    toolbar: 'insert'
		});

		if ( editor.contextMenu ) 
		{
				editor.addMenuGroup( 'nodelinkerGroup' );
				editor.addMenuItem( 'nodelinkerItem', {
					label: 'Change link',
					icon: this.path + 'icons/nodelinker.png',
					command: 'nodelinker',
					group: 'nodelinkerGroup'
				});
				editor.contextMenu.addListener( function( element ) {
					if ( element.getAscendant( 'nodelinker', true ) ) {
						return { abbrItem: CKEDITOR.TRISTATE_OFF };
					}
				});
		}
		
		CKEDITOR.dialog.add( 'nodelinkDialog', this.path + 'dialogs/nodelinker.js' );
    
    }

});

