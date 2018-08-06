<?php
/**
 * @var string $title_markup
 * @var string $content_markup
 */
if ('' === $title_markup && '' === $content_markup) {
  // Print nothing in this case.
  return;
}
?>
<section class="ef-pleco-paragraph-section">
  (PARAGRAPHS SECTION)
  <?php if ('' !== $title_markup): ?>
    <h2 class="__title"><?php print $title_markup; ?></h2>
  <?php endif; ?>
  <?php if ('' !== $content_markup): ?>
    <div class="__content"><?php print $content_markup; ?></div>
  <?php endif; ?>
  (/PARAGRAPHS SECTION)
</section>
