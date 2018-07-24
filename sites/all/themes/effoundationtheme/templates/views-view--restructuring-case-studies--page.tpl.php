<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */

global $user;
global $language;

session_start();

drupal_add_css('sites/all/themes/effoundationtheme/css/contents_comparision.css', array ('weight' => 201,'group' => CSS_THEME));
drupal_add_css('sites/all/themes/effoundationtheme/css/contents_comparision_print.css', array ('weight' => 202,'media' => 'print','group' => CSS_THEME));
drupal_add_js('sites/all/themes/effoundationtheme/js/contents_comparision.js');

// dpm($view->result[0]->field_title_field[0]['rendered']['#markup']);
// dpm($view->result[1]->field_title_field[0]['rendered']['#markup']);
// dpm($view->result[2]->field_title_field[0]['rendered']['#markup']);

?>
<div id="overlay-eurofound">
    <div class="loading-position">
        <img src="/sites/all/themes/effoundationtheme/images/loading-eurofound.gif" alt="Loading" />
        <br>
        <span>Loading...</span>
    </div>
</div>
<?php if(!strrpos($_SERVER['REQUEST_URI'], "print")): ?>
  <div class="print-wrapper no-pdf"><?php print print_pdf_insert_link();?><?php print print_insert_link();?></div>
  <div class="page-list-wrapper clearfix no-pdf no-print">
    <div class="turn-page page-list pagination" id="pager"></div>
  </div>
<?php endif ?>
<div class="<?php print $classes; ?>">

<?php 
if(split('[/]', $_SERVER['REQUEST_URI'])[1] == $language->language){
  if(split('[/]', $_SERVER['REQUEST_URI'])[2] == 'print' || split('[/]', $_SERVER['REQUEST_URI'])[2] == 'printpdf'){
    $content_total_array = split('%2C',split('[/]', $_SERVER['REQUEST_URI'])[4]);
  }else{
    $content_total_array = split('%2C',split('[/]', $_SERVER['REQUEST_URI'])[3]);
  }
}else{
  if(split('[/]', $_SERVER['REQUEST_URI'])[1] == 'print' || split('[/]', $_SERVER['REQUEST_URI'])[1] == 'printpdf'){
    $content_total_array = split('%2C',split('[/]', $_SERVER['REQUEST_URI'])[3]);
  }else{
    $content_total_array = split('%2C',split('[/]', $_SERVER['REQUEST_URI'])[2]);
  }
}

 
 for ($i = 0; $i < sizeof($content_total_array); $i++) {
   $nodo = node_load($content_total_array[$i]); 
   if($nodo){
     $titulo = $nodo->title;
     $contenido = drupal_render(node_view($nodo));
     print '<div class="view-grouping-node">';
     print'<h1 class="title-general-comparison"><span class="restructuring-view-title">Restructuring case studies</span> ' . $titulo . '</h1>';
     print '<section>' . $contenido . '</section></div>';
   }
  }

 ?>

</div><?php /* class view */ ?>

<?php if(!strrpos($_SERVER['REQUEST_URI'], "print")): ?>
    <script type="text/javascript">
    (function ($) {
      $(document).ready(function() {
          $(this).cPager({
              pageSize: 1, 
              pageid: "pager", 
              itemClass: "view-grouping-node" 
          });
          /* Case studies view . Hide view-grouping */
          $('.page-restructuring-case-studies h1#page-title').remove();

          var wrapper = $('.page-restructuring-case-studies .view-grouping-node');         
          $(wrapper).each(function( index ) {
            var titleGeneral = $('h1.title-general-comparison', this).html();
          });

      });
    })(jQuery);
    </script>
<?php endif ?>
