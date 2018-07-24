<?php
/**
 * @file
 * Display Suite EF Foundation Two column stacked template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $node_sub_header: Rendered content for the "Node Sub Header" region.
 * - $node_sub_header_classes: String of classes that can be used to style the "Node Sub Header" region.
 *
 * - $node_languages: Rendered content for the "Node Languages" region.
 * - $node_languages_classes: String of classes that can be used to style the "Node Languages" region.
 *
 * - $node_metadata: Rendered content for the "Node Metadata" region.
 * - $node_metadata_classes: String of classes that can be used to style the "Node Metadata" region.
 *
 * - $node_side_info: Rendered content for the "Node Side Info" region.
 * - $node_side_info_classes: String of classes that can be used to style the "Node Side Info" region.
 *
 * - $node_content: Rendered content for the "Node Content" region.
 * - $node_content_classes: String of classes that can be used to style the "Node Content" region.
 *
 * - $node_downloads: Rendered content for the "Node Downloads" region.
 * - $node_downloads_classes: String of classes that can be used to style the "Node Downloads" region.
 *
 * - $node_comments: Rendered content for the "Node Comments" region.
 * - $node_comments_classes: String of classes that can be used to style the "Node Comments" region.
 */
?>
<?php	drupal_add_library('flexslider', 'flexslider'); ?>
  <script type="text/javascript">
	(function ($) { 
		$(window).load(function() {
		  // The slider being synced must be initialized first
		  $('#carousel').flexslider({
			animation: "slide",
			controlNav: false,
			animationLoop: false,
			slideshow: false,
			itemWidth: 100,
			itemMargin: 5,
			asNavFor: '#slider'
		  });
		   
		  $('#slider').flexslider({
			animation: "slide",
			controlNav: false,
			animationLoop: false,
			slideshow: false,
			smoothHeight:true,
			sync: "#carousel"
		  });
		});
	})(jQuery);
  </script>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if (!empty($node_sub_header)): ?>
    <div class="row">
      <<?php print $node_sub_header_wrapper; ?> class="ds-node-sub-header<?php print $node_sub_header_classes; ?>">
        <?php print $node_sub_header; ?>
      </<?php print $node_sub_header_wrapper; ?>>
    </div>
  <?php endif; ?> 

   <?php if (!empty($node_metadata)): ?>
	  <div class="row">
		<<?php print $node_metadata_wrapper; ?> class="ds-node-metadata<?php print $node_metadata_classes; ?>">
		  <?php print $node_metadata; ?>
		</<?php print $node_metadata_wrapper; ?>>
	  </div>
  <?php endif; ?> 
  
  <?php if (!empty($node_languages)): ?>
    <div class="row">
      <<?php print $node_languages_wrapper; ?> class="ds-node-languages<?php print $node_languages_classes; ?>">
        <?php print $node_languages; ?>
      </<?php print $node_languages_wrapper; ?>>
    </div>
  <?php endif; ?> 

  <div class="row">
    <?php if (!empty($node_side_info)): ?>
      <<?php print $node_side_info_wrapper; ?> class="ds-node-side-info<?php print $node_side_info_classes; ?> large-3 columns">
        <?php print $node_side_info; ?>
      </<?php print $node_side_info_wrapper; ?>>
    <?php endif; ?>

    <?php $content_columns = empty($node_side_info) ? 'large-12' : 'large-9' ?>

    <<?php print $node_content_wrapper; ?> class="ds-node-content<?php print $node_content_classes; ?> <?php print $content_columns; ?> columns">
      <?php print $node_content; ?>
	  
	<?php
		if(isset($node->field_ef_photo_gallery_images) && !empty($node->field_ef_photo_gallery_images)):
			$thumbImageUrls=array(); 
			foreach($node->field_ef_photo_gallery_images['und'] as $key=>$image) :
				//$thumbImageUrls[] = image_style_url('ef_photo_gallery_thumb', $node->field_ef_photo_gallery_images['und'][$key]['uri']); 
				$thumbImageUrls[] = image_style_url('photo_gallery_100_100', $node->field_ef_photo_gallery_images['und'][$key]['uri']); 
			endforeach;
			$largeImageUrls=array(); 
			foreach($node->field_ef_photo_gallery_images['und'] as $key=>$image) :
				$largeImageUrls[] = image_style_url('ef_photo_gallery_large', $node->field_ef_photo_gallery_images['und'][$key]['uri']); 
			endforeach;
	?>
		<section class="slider">
			<div id="slider" class="flexslider">
			<ul class="slides">
				<?php foreach($largeImageUrls as $key=>$largeUrl):?>
			<li><img src="<?php print $largeUrl; ?>"/></li> 
				<?php endforeach; ?>
			</ul>
			</div>
			<div id="carousel" class="flexslider">
			<ul class="slides">			
				<?php foreach($thumbImageUrls as $key=>$thumbUrl):?>
					<li><img src="<?php print $thumbUrl; ?>"/></li>
				<?php endforeach; ?>
			</ul>
			</div>
		</section>
	<?php endif; ?>

      <?php if (!empty($node_downloads)): ?>
        <<?php print $node_downloads_wrapper; ?> class="ds-node-downloads<?php print $node_downloads_classes; ?>">
          <?php print $node_downloads; ?>
        </<?php print $node_downloads_wrapper; ?>>
      <?php endif; ?>

    </<?php print $node_content_wrapper; ?>>
  </div>

  <?php if (!empty($node_comments)): ?>
    <div class="row">
      <<?php print $node_comments_wrapper; ?> class="ds-node-comments<?php print $node_comments_classes; ?>">
        <div class="ef-comment-toggler toggler">
          <span class="show-text"><?php print t('Useful? Interesting? Tell us what you think.'); ?></span>
          <span class="hide-text"><?php print t('Hide comments'); ?></span>
        </div>
        <?php print $node_comments; ?>
      </<?php print $node_comments_wrapper; ?>>
    </div>
  <?php endif; ?>


</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
