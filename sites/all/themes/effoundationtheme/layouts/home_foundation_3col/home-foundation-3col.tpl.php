<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width. It is 5 rows high; the top
 * middle and bottom rows contain 1 column, while the second
 * and fourth rows contain 2 columns.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
      'left_first' => t('Left First'),
      'left_second' => t('Left Second'),
 */
?>
<?php !empty($css_id) ? print '<div id="' . $css_id . '">' : ''; ?>
<div class="row">
	<div class="large-4 columns location-featured"><?php print $content['right_first']; ?></div>
	<div class="large-4 columns location-main">		
		<div class="row find-by-filter">
			<div class="large-12"><?php print $content['left_first']; ?></div>
		</div>
		<div class="row">
			<div><?php print $content['left_second']; ?></div>
		</div>
	</div>
	<div class="large-4 columns location-sidebar"><?php print $content['right_second']; ?></div>
</div>
<?php !empty($css_id) ? print '</div>' : ''; ?>
