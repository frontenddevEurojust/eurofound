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

session_start();

drupal_add_css('sites/all/themes/effoundationtheme/css/contents_comparision.css', array ('weight' => 201,'group' => CSS_THEME));
drupal_add_css('sites/all/themes/effoundationtheme/css/contents_comparision_print.css', array ('weight' => 202,'media' => 'print','group' => CSS_THEME));
drupal_add_js('sites/all/themes/effoundationtheme/js/contents_comparision.js');

?>

<?php if(!strrpos($_SERVER['REQUEST_URI'], "print")): ?>
  <div class="print-wrapper no-pdf"><?php print print_pdf_insert_link();?><?php print print_insert_link();?></div>
  <div class="page-list-wrapper clearfix no-pdf no-print">
    <div class="turn-page page-list pagination" id="pager"></div>
  </div>
<?php endif ?>
<div class="<?php print $classes; ?>">

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>
  
  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>



  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>

<?php if(!strrpos($_SERVER['REQUEST_URI'], "print")): ?>
    <script type="text/javascript">
    (function ($) {
      $(document).ready(function() {
          $(this).cPager({
              pageSize: 1, 
              pageid: "pager", 
              itemClass: "view-grouping-content" 
          });
          /* Case studies view . Hide view-grouping */
          $('.page-restructuring-related-legislation .view-grouping .view-grouping-header').remove();
          $('.page-restructuring-related-legislation .view-grouping .view-grouping-content h3').replaceWith('<h2>' + $('.page-restructuring-related-legislation .view-grouping .view-grouping-content h3').html() +'</h2>')
      });
    })(jQuery);
    </script>
<?php endif ?>
