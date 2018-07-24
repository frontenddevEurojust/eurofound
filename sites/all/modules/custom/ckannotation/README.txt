
*** Instrucciones para la instalación ***

- Instalar la libreria qtip2 (http://qtip2.com/download) en sites/all/libraries/qtip 
  (archivos jquery.qtip.min.js y jquery.qtip.min.css)
- Desempaquetar el módulo en sites/all/modules
- Habilitarlo en CKAnnotation
- Configurar jQuery update con version >= 1.8
- Editar perfiles de CKEditor en admin/config/content/ckeditor para mostrar el 
  botón de anotaciones (bajo "Editor appearance").
- En el mismo apartado anterior, bajo 'Plugins', habilitar 'Annotations for CKEditor'
- En admin/config/content/formats editar el formato 'Filtered HTML' añadiendo el tag <span> a la
  lista de tags permitidos bajo 'Filter settings > Limit allowed HTML tags'
