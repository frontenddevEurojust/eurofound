
CKEDITOR.plugins.add( 'nodelinker', {
    
    icons: 'nodelinker',
    
    init: function( editor ) {
        //Plugin logic goes here.
        editor.addCommand( 'AddNodeLink', new CKEDITOR.dialogCommand( 'nodeLinkDialog' ));

		editor.ui.addButton( 'nodelinker', {
		    label: 'Add Node link',
		    command: 'AddNodeLink',
		    toolbar: 'insert'
		});
    }

});

