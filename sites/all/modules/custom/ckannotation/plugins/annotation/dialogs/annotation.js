function date2ts(date) {
}

function ts2date(ts) {
}

function ckaCurDate() {

  date = new Date();
  hours = date.getHours();
  hours = (hours < 10 ? '0' + hours : hours );
  minutes = date.getMinutes();
  minutes = (minutes < 10 ? '0' + minutes : minutes );

  return date.getDate() +'/'+ date.getMonth() +'/'+ date.getFullYear() +' '+ hours + ':' + minutes;
}

CKEDITOR.dialog.add( 'annotationDialog', function ( editor ) {
    var date = new Date();
    var created = ckaCurDate();
    var mode;
    var color;

    var allow_to_edit = Drupal.settings.ckannotation.allow_to_edit;   

    return {
        title:          'Add/Edit Annotation',
        resizable:      CKEDITOR.DIALOG_RESIZE_BOTH,
        minWidth:       500,
        minHeight:      400,
        contents: [
            {
                id:         'main',
                label:      'Basic settings',
                title:      'Basic settings Title',
                elements: [
                    {
                        label:          'User',
                        id:             'username',
                        type:           'text',
                        cols:           40,
                        default:        Drupal.settings.ckannotation.username,
                    },
                    {
                        label:          'Timestamp',
                        id:             'created',
                        type:           'text',
                        cols:           20,
                        default:        created,
                    },
                    {
                        label:          'Comment text',
                        id:             'annotation',
                        type:           'textarea',
                        rows:           4,
                        default:        '',
                        validate:       CKEDITOR.dialog.validate.notEmpty( "Annotation cannot be empty." ),
                    },
                    {
                        label:          'Additional comments',
                        id:             'additional',
                        type:           'textarea',
                        rows:           4,
                        default:        '',
                    }
                ]
            }
        ],
        buttons: [
           CKEDITOR.dialog.okButton,
           CKEDITOR.dialog.cancelButton,
           {
              id: 'delete',
              type: 'button',
              label: Drupal.t('Delete'),
              title: 'Delete this annotation',
              onClick: function() {
                  start = editor.getSelection().getStartElement();
				           startTags = start.$.localName;

				            if(startTags =="strong" || startTags == "i" || startTags == "em" || startTags == "u"){
				              startArray = editor.getSelection().getStartElement().getParents();
				              start = startArray[startArray.length-2];
				            }else{
				               start = editor.getSelection().getStartElement();
				            }
				            
                  //console.log(start.getText());
                  start.removeAttribute('class');
                  start.removeAttribute('annotation');
                  start.removeAttribute('aria-describedby');
                  start.removeAttribute('data-hasqtip');
                  start.removeAttribute('username');
                  start.removeAttribute('created');
                  start.removeAttribute('color');                 


                  //start.remove();
                  //editor.insertHtml(start.getText());
                  this.getDialog().hide();
              }
           }
        ],
        onShow: function() {
           start = editor.getSelection().getStartElement();
           startTags = start.$.localName;

            if(startTags =="strong" || startTags == "em" || startTags == "i" || startTags == "u"){
              startArray = editor.getSelection().getStartElement().getParents();
              start = startArray[startArray.length-2];
            }else{
               start = editor.getSelection().getStartElement();
            }

           if ( start.hasClass("annotation") ) {
              mode = "edit";
              text = start.getText();
              username = scramble(start.getAttribute("username"));
              created = start.getAttribute("created");
              annotation = scramble(start.getAttribute("annotation"));

              this.getContentElement("main", "username").setValue(username);
              this.getContentElement("main", "created").setValue(created);
              this.getContentElement("main", "annotation").setValue(annotation);

              if ( username != Drupal.settings.ckannotation.username ) {
                if ( allow_to_edit === false || typeof allow_to_edit === 'undefined' ) {
                  this.getContentElement("main", "annotation").disable();
                  this.disableButton('delete');
                }
              }
              else {
                  this.enableButton('delete');
              }
           }
           else
           {
              mode = "add";
             text = editor.getSelection().getSelectedText();
               //text = editor.getSelection().getStartElement().$.innerHTML;
//console.log('texto--------------'+text);
              created = ckaCurDate();

              this.getContentElement("main", "username").setValue(Drupal.settings.ckannotation.username);
              this.getContentElement("main", "created").setValue(created);
              this.getContentElement("main", "annotation").setValue("");
              this.getContentElement("main", "additional").disable();
           }
          
//console.log(text);
           this.getContentElement("main", "username").disable();
           this.getContentElement("main", "created").disable();
        },
        onLoad: function() {
        },
        onOk: function() {
           var dialog = this;
           var annotation = editor.document.createElement('span');
           var anntext;



           if ( dialog.getValueOf('main', 'additional').length > 0 )
               anntext = 
                 dialog.getValueOf('main', 'annotation') + '\n' +
                 '--- by ' + Drupal.settings.ckannotation.username + ' on ' + ckaCurDate() + '---\n' +
                 dialog.getValueOf('main', 'additional');
           else
               anntext = dialog.getValueOf('main', 'annotation');

           annotation.setAttribute('class', 'annotation');
           annotation.setAttribute('created', dialog.getValueOf('main', 'created'));
           annotation.setAttribute('username', scramble(dialog.getValueOf('main', 'username')));
           annotation.setAttribute('color', Drupal.settings.ckannotation.color);
           annotation.setAttribute('annotation', scramble(anntext));
	         annotation.setText(text);

         

           if ( mode == "edit" ) {
           start = editor.getSelection().getStartElement();
           startTags = start.$.localName;

            if(startTags =="strong" || startTags == "i" || startTags == "em" || startTags == "u"){
              startArray = editor.getSelection().getStartElement().getParents();
              start = startArray[startArray.length-2];
            }else{
               start = editor.getSelection().getStartElement();
            }
               annotation.replace(start);
           }
           else
               editor.insertElement(annotation);
       }
    };
});
