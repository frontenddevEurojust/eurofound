<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
global $user;


drupal_add_css('sites/all/themes/effoundationtheme/css/working-life-country-profile.css', array ('weight' => 200,'group' => CSS_THEME));
drupal_add_js('sites/all/themes/effoundationtheme/js/working-life-country-profile.js');

$logged = in_array('authenticated user', $user->roles);

$country = $content['field_ef_country']['#items'][0]['safe_value'];
$author = $content['field_ef_author']['#items'][0]['safe_value'];
$institution = $content['field_ef_institution']['#items'][0]['safe_value'];
$labelpublishedon = $content['field_ef_cp_update_day']['#title'];
$publishedon = $content['field_ef_cp_update_day'][0]['#markup'];


$subtitleLiving = $content['field_ef_title_living_in_country']['#items'][0]['safe_value'];
$subtitle = $content['field_subtitle']['#items'][0]['safe_value'];
$eurostatResult = $content['field_ef_eurostat_results']['#items'][0]['value'];
$summary = $content['field_ef_summary_living_working']['#items'][0]['value'];
$mainImagen = $content['field_ef_country_main_img'];
$news_and_quartely_updates = views_embed_view('latest_country_update','news_and_quartely_updates', $content['field_ef_country']['#items'][0]['iso2']); 
$quartely_overviews = views_embed_view('latest_country_update','quarterly_overviews', $content['field_ef_country']['#items'][0]['iso2']); 
$check_view_country_update = views_get_view_result('latest_country_update','news_and_quartely_updates', $content['field_ef_country']['#items'][0]['iso2']);
$check_view_overview = views_get_view_result('latest_country_update','quarterly_overviews', $content['field_ef_country']['#items'][0]['iso2']);
$print_link = (isset($_SERVER['HTTPS']) ? "https" : "http") . "://" . $_SERVER[HTTP_HOST] . "/print" . $_SERVER[REQUEST_URI];
$pdf_link = (isset($_SERVER['HTTPS']) ? "https" : "http") . "://" . $_SERVER[HTTP_HOST] . "/printpdf" . $_SERVER[REQUEST_URI]; 
?>
<div class="content-living-working">
	<div class="print-wrapper no-pdf"><?php print print_pdf_insert_link();?><?php print print_insert_link();?></div>
	<p class="large-12 columns no-pdf"><?php print $content['published_on'][0]['#markup']; ?></p>
	
	<!-- INTRO TO LIVING AND WORKING SECTIONS-->
	<?php if(isset($subtitle)): ?>
		<?php if(isset($eurostatResult)): ?>
		<div class="eurostat-result small-12 large-3 columns no-pdf" id="top"><?php print $eurostatResult ?></div>
		<?php endif; ?>

		<?php if(isset($mainImagen)): ?>
			<div class="summary-living-working small-12 large-6 columns no-pdf">
		<?php else: ?>
			<?php if(!isset($eurostatResult)): ?>
				<div class="summary-living-working small-12 large-12 columns no-pdf">
			<?php else: ?>
				<div class="summary-living-working small-12 large-8 columns no-pdf">
			<?php endif; ?>	
		<?php endif; ?>
		<?php if(isset($summary)): ?>
			<?php print $summary ?>
		<?php endif; ?>
		</div>
		<?php if(isset($mainImagen)): ?>
			<div class="eurostat-img small-12 large-3 columns no-pdf"><?php print render($mainImagen); ?></div>
		<?php endif; ?>

		<div class="clear"></div>


		<!-- INTRO TEXT TO NEXT BOTH SECTIONS-->
		<?php if(isset($content['field_ef_intro_text']['#items'][0]['value'])): ?>
			<div class="intro-text">
				<?php print $content['field_ef_intro_text']['#items'][0]['value']; ?>
			</div>
		<?php endif; ?>

			<?php 
				$number_tabs = count($content['field_ef_tabs_living_working']['#items']);
				if($number_tabs != 0 ): 
			?>

			<div class="clear"></div>

			<!-- TABS LIVING AND WORKING AREA SECTIONS-->
			<div class="section-container section-living-working vertical-tabs row no-pdf" id="content-tabs-living-working" data-section="vertical-tabs">
				<?php for ($i=0; $i < count($content['field_ef_tabs_living_working']['#items']); $i++): ?>
					<?php
						$cadena = trim(strip_tags($content['field_ef_tabs_living_working'][$i]['field_ef_label_tabs'][0]['#markup']));

						$cadena = str_replace('&nbsp;', '', $cadena);		
						$cadena = str_replace('/\s/', '', $cadena);
						$cadena = str_replace('&amp;', '', $cadena);
						$cadena = str_replace('&', '', $cadena);
						$cadena = preg_replace('/\s+/','-', $cadena);
						$cadena = str_replace(' ', '', $cadena);		
				   ?>

						<?php if($i == 1): ?>
								<?php if(!empty($content['field_ef_tabs_living_working'][$i]['field_ef_label_tabs'][0]['#markup'])): ?>
			            
			            <?php if(count($check_view_overview) > 0 ): ?>
			              <section class="news-and-quartely-country-updates">		                
			                <h3 class="title first" data-section-title><?php print render($content['field_ef_tabs_living_working'][$i]['field_ef_label_tabs'][0]['#markup']); ?></h3>	
				                  <div class="content" data-section-content>			                  	
				                    <div class="small-12 large-12 column quarterly-overviews">
				                      <!--<h3><?php print render($content['field_ef_tabs_living_working'][$i]['field_ef_label_tabs'][0]['#markup']); ?></h3>-->
				                      <?php print $quartely_overviews; ?>
				                    </div>
				                  </div>			                  
			              </section>
			            <?php endif; ?>
								<?php endif; ?>
						<?php else: ?>
								<?php if(!empty($content['field_ef_tabs_living_working'][$i]['field_ef_label_tabs'][0]['#markup'])): ?>
									<section class="<?php print strtolower($cadena);?>">
										<h3 class="title" data-section-title><?php print render($content['field_ef_tabs_living_working'][$i]['field_ef_label_tabs'][0]['#markup']); ?></h3> 
										<div class="content" data-section-content>
											<?php print render($content['field_ef_tabs_living_working'][$i]['field_ef_content_tabs'][0]['#markup']); ?>
										</div>
									</section>
								<?php endif; ?>
						<?php endif; ?>
				<?php endfor; ?>
			</div>
			<div class="clear"></div>

		<?php endif; ?>	
	<?php endif; ?>
</div>

	<div class="clear"></div>



<!-- LIVING IN COUNTRY AREA SECTION-->
<?php if(count($content['field_ef_tabs_living_country']['#items']) && isset($subtitleLiving)): ?>
<div class="content-living-country">
	<?php if(isset($subtitleLiving)): ?>
		<h2 class="title-living-country" id="living-country" name="living-country"><i class="fa fa-compass" aria-hidden="true"></i> <?php print $subtitleLiving ?></h2>
		<?php $print_image = (isset($_SERVER['HTTPS']) ? "https" : "http") . "://" . $_SERVER[HTTP_HOST] . "/sites/all/modules/contrib/print/print_pdf/icons/pdf_icon.png";	?>
		<div class="print-pdf-wrapper">
			<a href="<?php echo  $pdf_link; ?>?section=1" class="print-pdf" target="_blank"><span>Print pdf</span></a>
		</div>
	<?php endif; ?>

	<div class="section-container section-living-country vertical-tabs row" id="content-tabs-living-country" data-section="vertical-tabs">		
		<?php for ($i=0; $i < count($content['field_ef_tabs_living_country']['#items']); $i++): ?>
			<?php if(isset($content['field_ef_tabs_living_country']['#items'][$i]['field_ef_title_living_tab']['und'][0]['safe_value'])): ?>
				<?php if($i == 0): ?>
					<section class="<?php print str_replace("'","",preg_replace('/\s/','-',preg_replace("/[\,\;]+/","",strtolower($content['field_ef_tabs_living_country']['#items'][$i]['field_ef_title_living_tab']['und'][0]['safe_value'])))); ?> active">
					<?php else: ?>
					<section class="<?php print str_replace("'","",preg_replace('/\s/','-',preg_replace("/[\,\;]+/","",strtolower($content['field_ef_tabs_living_country']['#items'][$i]['field_ef_title_living_tab']['und'][0]['safe_value'])))); ?>">
					<?php endif; ?>
						<h3 class="title" data-section-title><?php print render($content['field_ef_tabs_living_country']['#items'][$i]['field_ef_title_living_tab']['und'][0]['safe_value']); ?></h3>
						<div class="content" data-section-content>
							<p class="subtitle"><?php print render($content['field_ef_tabs_living_country']['#items'][$i]['field_ef_title_living_tab']['und'][0]['safe_value']); ?><p>
							<?php print render($content['field_ef_tabs_living_country']['#items'][$i]['field_ef_body_living_tabs']['und'][0]['value']); ?>
						</div>
					</section>
			<?php endif; ?>
		<?php endfor; ?>
	</div>
</div>
<?php endif; ?>



<div class="clear"></div>


<!-- WORKING LIFE IN COUNTRY AREA SECTION-->
<div class="content-working-life">
	<!--<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>-->
	<?php if(isset($subtitle)): ?>
		<h2 class="title-working-life" id="working-life" name="working-life"><i class="fa fa-compass" aria-hidden="true"></i> <?php print $subtitle ?></h2>
		<div class="print-pdf-wrapper">
			<a href="<?php echo  $pdf_link; ?>?section=2" class="print-pdf" target="_blank"><span>Print pdf</span></a>
		</div>
	<?php endif; ?>

	<?php if(isset($author) || isset($publishedon) || isset($institution)): ?>
		<div class="summary-group row">
			<div class='wp_about right'>
				<h3 class='wp_tit'>About</h3>
		      <ul class="wp_body row">

		    	<?php if(isset($author)): ?>
		    	<li>
		        	<span class='small-3 columns'><?php print t('Author') ?>: </span>
			        <span class='small-9 columns'><?php print $author; ?></span>
		        </li>
		    	<?php endif; ?>


		    	<?php if(isset($institution)): ?>
		    	<li>
		        	<span class='small-3 columns'><?php print t('Institution') ?>: </span>
			        <span class='small-9 columns'><?php print $institution; ?></span>
		        </li>
		    	<?php endif; ?>


		    	<?php if(isset($publishedon)): ?>
		    	<li>
		        	<span class='small-3 columns'><?php print $labelpublishedon; ?> </span>
			        <span class='small-9 columns'><?php print $publishedon; ?></span>
		        </li>
		    	<?php endif; ?>

		      </ul>
			</div>

			<div class="summary">
				<p><?php print $content['body'][0]['#markup']; ?></p>
			</div>

		</div>
	<?php else: ?>

			<div class="summary-12">
				<p><?php print $content['body'][0]['#markup']; ?></p>
			</div>

	<?php endif; ?>


	<?php if(count($content['field_ef_tabs']['#items'])): ?>
	<div class="section-container section-working-life-country-profile vertical-tabs row" id="content-tabs-country-profile" data-section="vertical-tabs">
	<?php for ($i=0; $i < count($content['field_ef_tabs']['#items']); $i++): ?>
		<?php if($i == 0): ?>
		<section class="<?php print str_replace("'","",preg_replace('/\s/','-',preg_replace("/[\,\;]+/","",strtolower($content['field_ef_tabs'][$i]['field_ef_tabs_title']['#items'][0]['value'])))); ?> active">
		<?php else: ?>
		<section class="<?php print str_replace("'","",preg_replace('/\s/','-',preg_replace("/[\,\;]+/","",strtolower($content['field_ef_tabs'][$i]['field_ef_tabs_title']['#items'][0]['value'])))); ?>">
		<?php endif; ?>
			<h3 class="title" data-section-title><?php print render($content['field_ef_tabs'][$i]['field_ef_tabs_title'][0]['#markup']); ?></h3>
			<div class="content" data-section-content>
				<p class="subtitle"><?php print render($content['field_ef_tabs'][$i]['field_ef_tabs_title'][0]['#markup']); ?><p>
				<?php print render($content['field_ef_tabs'][$i]['field_ef_tabs_body'][0]['#markup']); ?>
			</div>
		</section>
	<?php endfor; ?>
	</div>
	<?php endif; ?>




	<!-- RATINGS -->
	<?php if(in_array('Quality Manager', $user->roles) || in_array('Quality Manager +', $user->roles)):?>
		<?php print render($content['qrr']);?>
	<?php endif; ?>
	<!-- end RATINGS -->

	<!--COMMENTS-->
	<?php if(in_array('anonymous user', $user->roles) || in_array('administrator', $user->roles)): ?>
	<div class="ds-node-comments no-pdf">
		
		<div class="ef-comment-toggler toggler">
		    <span class="show-text"><?php print t('Useful? Interesting? Tell us what you think.') ?></span>
		    <span class="hide-text"><?php print t('Hide comments') ?></span>
		</div>  

	  <div id="comments" class="title comment-wrapper">
				<?php print render($content['comments']);?>
		</div>

	</div>
	<?php endif; ?>
	<!-- end comments -->

	<div class="go-top-wrapper no-pdf">
	  <a class="go-top fa-stack fa-2x up" href="javascript:">
	    <i class="fa fa-circle fa-stack-2x"></i>
	    <i class="fa fa-angle-up fa-stack-1x fa-inverse"></i>
	  </a>
	</div>
	<!--</article>-->
</div>