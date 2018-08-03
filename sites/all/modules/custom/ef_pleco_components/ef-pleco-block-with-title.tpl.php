<?php
/**
 * @var string $title
 * @var string $children
 */
if ('' === $children) {
  return;
}
?>
<div class="ef-pleco-block-with-title">
  <?php if ('' !== $title): ?>
    <h2 class="__title"><?php print $title; ?></h2>
  <?php endif; ?>
  <div class="__content"><?php print $children; ?></div>
</div>
