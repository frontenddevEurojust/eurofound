<?php
/**
 * $variables contains all available data
 *
 *
 * @see template_preprocess_ef_topics_page()
 *
 */

global $language;
global $base_url; 

drupal_add_css('sites/all/themes/effoundationtheme/css/board_member_page.css');
drupal_add_js('sites/all/themes/effoundationtheme/js/board_member_page.js');

?>


<section class="board-member-page">
	<h2 class="board-member-h2">
		<?php print $title; ?>
	</h2>

    <?php if (!strpos($aux,'print-pdf')): ?>
          <?php print print_pdf_insert_link();?>
    <?php endif; ?>


    <?php if (!strpos($aux,'print-page')): ?>
      <?php print print_insert_link();?>
    <?php endif; ?>

  <?php print $aux; ?>
	<?php 

    if(isset($content['field_ef_main_image'])){
      print '<p class="main_image_goberningboard"><img src="' . $content['field_ef_main_image'][0]['#path']['path'] . '" ></p>';
     } 

		print $content['body'][0]['#markup'];
	?>
</section>