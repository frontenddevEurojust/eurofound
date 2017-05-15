CKEDITOR.dialog.add( 'nodeLinkDialog', function( editor ) {
	return {
		title: 'Choose the node to be linked',
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
						label: 'Text update',
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
			var selection = editor.getSelection();
			var element = selection.getStartElement();
			this.element = element;
			if(element.$.nodeName === "A") { // Only if it's and anchor.
				this.setupContent( this.element );
			} else {
				this.hide();
			}
		},

		onOk: function() {
			var txt = this.element;
			this.commitContent( txt );
			if ( this.insertMode )
				editor.insertElement( txt );
		}
		
	};
});