<?php
/**
 * @var string $children
 */
?>
<div class="ds-node-comments">
  <div class="ef-comment-toggler toggler">
    <span class="show-text">Useful? Interesting? Tell us what you think.</span>
    <span class="hide-text">Hide comments</span>
  </div>
  <div id="comments" class="title comment-wrapper">
    <h3><?php print t("Eurofound welcomes feedback and updates on this regulation"); ?></h3>
    <?php print $children; ?>
  </div>
</div>
