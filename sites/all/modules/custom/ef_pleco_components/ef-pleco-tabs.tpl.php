<?php
/**
 * @var array[] $tabs
 *   Format: $[] = ['label_markup' => $label, 'content_markup' => $content]
 *
 * Important: <ul> and <li> are on one line to prevent spaces.
 */
?>
<div class="ef-pleco-tabs">
  <ul class="__tabs_sections"><?php foreach ($tabs as $tab): ?><li>
    <h2 class="__title"><?php print $tab['title_markup']; ?></h2>
    <div class="__content"><?php print $tab['content_markup']; ?></div>
  </li><?php endforeach; ?></ul>
</div>
