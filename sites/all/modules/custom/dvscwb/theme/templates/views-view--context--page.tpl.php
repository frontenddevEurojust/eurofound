<?php
/*********************************************************
* Eworx S.A. - 2013 - 2014
* @Author kp@eworx.gr, som@eworx.gr
* CWB Context view override template
**********************************************************/

$assetsPath = drupal_get_path('module', 'dvscwb') . "/theme";


drupal_add_js($assetsPath . '/scripts/extend.js');

drupal_add_css($assetsPath . '/css/cwb.css');

//drupal_add_js($assetsPath . '/scripts/views/context-year-filter.js');
drupal_add_css($assetsPath . '/css/views/context.css');

//dependencies
drupal_add_js($assetsPath . '/scripts/3rd/tipped/tipped.js');
drupal_add_css($assetsPath . '/css/3rd/tipped/tipped.css');

//tablsorter
drupal_add_js($assetsPath . '/scripts/3rd/tablesorter/jquery.tablesorter.min.js');
drupal_add_js($assetsPath . '/scripts/3rd/tablesorter/jquery.metadata.js');
drupal_add_css($assetsPath . '/scripts/3rd/tablesorter/themes/green/style.css');
drupal_add_js($assetsPath . '/scripts/views/contains-sortable-table.js');

drupal_add_js($assetsPath . '/scripts/dvs/svg-initialization.js');
drupal_add_js($assetsPath . '/scripts/dvs/svg-enhancement.js');
drupal_add_js('/DVS/DVT/scripts/svgMaskMap.js');
drupal_add_js($assetsPath . '/scripts/dvs/context-country-tooltips.js');

drupal_add_js($assetsPath . '/scripts/dvs/table-to-csv-download.js');
 
?>
<script>jQuery(document).ready(function($) {jQuery("body").addClass("page-context");});</script>
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

  <?php if ($pager): ?>
    <?php print $pager; ?>
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
