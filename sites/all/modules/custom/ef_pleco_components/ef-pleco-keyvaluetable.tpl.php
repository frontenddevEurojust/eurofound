<?php
/**
 * @var string $title_markup
 * @var string[][] $rows
 *   Format: $[] = ['label_markup' => $label, 'content_markup' => $content]
 *
 * Important: <ul> and <li> are on one line to prevent spaces.
 */
?>
<div class="ef-pleco-keyvaluetable">
  <?php if ($title_markup): ?>
    <h2><?php print $title_markup; ?></h2>
  <?php endif; ?>
  <ul><?php foreach ($rows as $row): ?><li>
    <label class="__label"><?php print $row['label_markup']; ?></label>
    <div class="__content"><?php print $row['content_markup']; ?></div>
  </li><?php endforeach; ?></ul>
</div>
