/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/**
 * @file Plugin for inserting annotations
 */
( function() {
  var pluginRequires = [ 'dialog' ];

  CKEDITOR.plugins.add( 'annotation',
  {
    requires  : pluginRequires,

    afterInit : function( editor )
    {
      CKEDITOR.addCss('span.annotation { background-color: yellow; }'); 
      editor.on('instanceReady', function () {

         formname = jQuery(this).attr('name').replace('edit','form-item');
         frameDOM = jQuery('.'+formname+' iframe.cke_wysiwyg_frame').contents();


         jQuery('span.annotation', frameDOM).qtip({
            content: {
               title: function() { return('By ' + scramble(this.attr('username')) + ' on ' + this.attr('created'));},
               text: function() {
                  var str = scramble(this.attr('annotation'));
                  return str.replace(/\r/g, '</br>');

               },
            },
            position: {
               adjust: {
               //   x: jQuery('.'+formname).offset().left,
               //   y: jQuery('.'+formname).offset().top + jQuery('.'+formname+' .cke_top').height()+12.5,
               },
            },
            events: {
               render: function(event, api) {
                  color = api.target.attr('color');
                  api.tooltip.qtip('options', 'style.classes', 'qtip-'+color);
               }
            },
         });
      });

      editor.ui.addButton( 'Annotation',
      {
        label : Drupal.t('Insert/Edit annotation'),
        icon : this.path + 'images/annotation.png',
        command : 'annotation',
      });

      editor.addCommand( 'annotation', editAnnotation() );

      CKEDITOR.dialog.add( 'annotationDialog', this.path + 'dialogs/annotation.js' );
      editor.on("instanceReady", function(event) {
      });
    },
  });

  function editAnnotation() {
        dialog = new CKEDITOR.dialogCommand('annotationDialog', {allowedContent: 'span[annotation,created,username](annotation)'});
        return dialog;
  }

} )();
