<?php
/**
 * @var string $title
 * @var string $ds_content
 */
if ('' === $title && '' === $ds_content) {
  // Print nothing in this case.
  return;
}
?>
<section class="ef-pleco-paragraph-section">
  <?php if ('' !== $title): ?>
    <h2 class="__title"><?php print $title; ?></h2>
  <?php endif; ?>
  <?php if ('' !== $ds_content): ?>
    <div class="__content"><?php print $ds_content; ?></div>
  <?php endif; ?>
</section>
