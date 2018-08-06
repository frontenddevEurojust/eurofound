<?php
/**
 * @var string $title_link_markup
 * @var string[] $meta_parts
 *
 * @see template_preprocess_ef_pleco_related_entity()
 */
$meta_separator = ' | ';
$meta = implode($meta_separator, $meta_parts);
?>
<div class="ef-pleco-related-entity">
  <h3 class="__title"><?php print $title_link_markup; ?></h3>
  <?php if (!empty($meta_parts)): ?>
    <div class="__meta"><?php print $meta; ?></div>
  <?php endif; ?>
</div>
