<?php

/**
 * @file
 * EF PLECO Common layout
 *
 * @var string $layout_attributes
 * @var string $classes
 * @var array $title_suffix
 * @var string $ds_content
 * @var string $right
 *
 * @see ef_pleco_components_ds_layout_info()
 */
$ds_content_classes = '';
$right_classes = '';
if ($ds_content !== '' && $right !== '') {
  $classes .= '__columns';
  $ds_content_classes .= ' large-9';
  $right_classes .= ' large-3';
}
?>
<div<?php print $layout_attributes; ?> class="ef-pleco-common clearfix <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <div class="__columns">
    <div class="__content<?php print $ds_content_classes; ?>">
      <?php print $ds_content; ?>
    </div>

    <aside class="__right<?php print $right_classes; ?>">
      <?php print $right; ?>
    </aside>
  </div>
</div>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
