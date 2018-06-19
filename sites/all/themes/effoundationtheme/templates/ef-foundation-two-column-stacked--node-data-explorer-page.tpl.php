<?php
/**
 * @file
 * Default theme file for d3 visualizations.
 */
drupal_add_css(drupal_get_path('module', 'ef_d3_dataexplorer') . '/css/ejm.css');
drupal_add_js(drupal_get_path('module', 'ef_d3_dataexplorer') . '/js/ejm.js');
?>


<div  class="jm-charts-wrapper ">
	<div class="row">
		<div class="jm-abstract-wrapper small-12 large-9">			
		  <h1 id='pagetitle' class='title'><?php print drupal_get_title(); ?></h1>
	  	<?php if( $node->field_ef_de_chart_id['und'][0]['safe_value'] != 'EJM'): ?>
			  <p class="last-update"><?php print $content['changed_date']['#items'][0]['value']; ?></p>
			  <?php if( $content['field_ef_topic']['#items'] ): ?>
					<div class="data-explorer-topics">							
								<p class="topic-label"><?php print t('Topics'); ?>: </p>				
								<ul class="topic-list inline-list">
									<?php foreach ( $content['field_ef_topic']['#items'] as $key => $topics): ?>								
										<li><?php 
											$term = taxonomy_term_load( $topics['tid'] );
											$name = $term->field_term_title[$language][0]['value'];
											$url = url(taxonomy_term_uri($term)['path']);
		           				$fixed_topic_url = str_replace('topics' , 'topic' , $url );
										  print '<a href="'. $fixed_topic_url .'" >' . $name . '</a>'; 
										?></li>							
									<?php endforeach; ?>
								</ul>
					</div>
					
					 <?php if( isset($node->field_ef_data_organisation['en'][0]['safe_value']) ): ?>
					<div class="data-explorer-organisation">
						<p><span class="organisation-label"><?php print t('Organisation: ') ?></span><?php print $node->field_ef_data_organisation['en'][0]['safe_value']; ?></p>
					</div>
					<?php endif; ?>

				<?php endif; ?>
			<?php endif; ?>

			<?php if( $content['field_ef_topic']['#items'] ): ?>
				<div class="jm-abstract-topics">
			<?php else: ?>
				<div class="jm-abstract">
			<?php endif; ?>
				<?php print render($content['field_ef_de_description'][0]['#markup']); ?>
			</div>

		</div>
		<div class="jm-back-button large-3">

			<section class="block block-block boxed-block back-to-results-block block-block-13 clearfix">
				<a href="<?php print render($content['field_ef_de_button_url']['#items'][0]['display_url']); ?>" title="Back to Data Explorer"><?php print render($content['field_ef_de_button_url']['#items'][0]['title']); ?></a>
			</section>
		</div>
	</div>

	<?php if( $node->field_ef_de_chart_id['und'][0]['safe_value'] == 'EJM'): ?>

	<div class="jm-filters-chart">
		<div class="filters-jm-chart small-12 large-3">
			<form>
			  <fieldset>
			    <legend class="opened"><i class="fa fa-filter" aria-hidden="true"></i> Filters: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
			    	<div class="group-filters jm-filter-countries">
				    	<label>Countries <span class="advice-select-countries">(Select up to 4 countries)</span></label>
				    	<select id="country">
							</select>							
			    	</div>
						<div class="group-filters jm-filter-time">
				    	<label>Time period</label>
				    	<select id="time">
				    	</select>
			    	</div>
			    	<div class="group-filters jm-filter-breakdown">
				    	<label>Breakdown</label>
				    	<select id="breakdown">
				    	</select>
			    	</div>
			  </fieldset>
			  <fieldset>
			  		<legend><i class="fa fa-filter" aria-hidden="true"></i> More filters: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
			  		<div class="group-filters jm-filter-criterion">
				    	<label>Job quality criterion</label>
				    	<select id="job_quality_criterion" name="job_quality_criterion">
				    	</select>
			    	</div>
			  </fieldset>
			</form>
		</div>

		<div class="jm-charts small-12 large-9 <?php print implode(' ', $classes_array); ?>">
				<h2>Employment shifts by <span class="criterion"></span> quintile<span class="breakdown"></span>, <span class="country"></span> <span class="period"></span></h2>
				<div class="ejm-alert">
					<p class="text">Select at least one country</p>
					<img src="<?php echo base_path()?>sites/all/themes/effoundationtheme/images/loading-eurofound.gif" alt="Loading" >
				</div>
				<div id="ejm-chart"></div>
				<div class="legend-wrapper"></div>
				<div class="jm-footnote"></div>
		</div>
	</div>

	<?php else: ?>

	<div class="jm-filters-chart clearfix">
		<div class="filters-jm-chart small-12 large-3">
			<form>
	  		<fieldset>
	    		<legend class="opened"><i class="fa fa-filter" aria-hidden="true"></i> Filters: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
					<div class="group-filters chart-filters"></div>
				</fieldset>
			</form>
			<?php if ($node->field_related_taxonomy['und'][0]['target_id'] != '' || $node->field_ef_related_content['und'][0]['target_id'] != '' ) : ?>
			<div class="related-content-aside-3 related-content-data-explorer">
			    <?php
			        $block = block_load('block','54');
			        print drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
			    ?>
			</div>
			 <?php endif; ?>
		</div>
		<div class="jm-charts small-12 large-9 <?php print implode(' ', $classes_array); ?>">
			<div class="chart-wrapper" id="<?php print $content['field_ef_de_chart_id']['#items'][0]['value']; ?>-wrapper"></div>
			<div class="legend-butterfly"></div>
		</div>
	</div>

	<?php endif; ?>

	<div class="jm-methodology-wrapper small-12 large-9  push-3">
		<h2><?php print render($content['field_ef_de_subtitle']['#items'][0]['safe_value']); ?></h2>
		<div class="jm-methodology">
			<?php print render($content['field_ef_de_methodology'][0]['#markup']); ?>
		</div>
	</div>

</div>
