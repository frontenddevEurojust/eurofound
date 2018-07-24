<?php
/**
 * @file
 * Default theme file for d3 visualizations.
 */
global $language;
drupal_add_css(drupal_get_path('module', 'ef_d3_dataexplorer') . '/css/ejm.css');
drupal_add_js(drupal_get_path('module', 'ef_d3_dataexplorer') . '/js/ejm.js');
?>


<div  class="jm-charts-wrapper ">
	<div class="row">
		<div class="jm-abstract-wrapper small-12 large-9">			
		  <h1 id='pagetitle' class='title'><?php print drupal_get_title(); ?></h1>			  
			<div class="data-explorer-topics">
						<?php if( $content['field_ef_topic']['#items'] || isset($node->field_ef_data_organisation[$language->language][0]['safe_value']) ): ?>
							<span class="last-update withline"><?php print $content['changed_date']['#items'][0]['value']; ?></span>
						<?php else: ?>
							<span class="last-update"><?php print $content['changed_date']['#items'][0]['value']; ?></span>
						<?php endif; ?>

						<?php if( $content['field_ef_topic']['#items'] ): ?>
							<?php 
								$data_organisation = render($node->field_ef_data_organisation[$language->language][0]['value']);
								if(!isset($data_organisation)){
									$data_organisation = $node->field_ef_data_organisation['en'][0]['safe_value'];
								}
							?>
							<?php if( $data_organisation ): ?>
								<span class="data-explorer-organisation withline">								
									<?php print $data_organisation; ?>								
								</span>
							<?php endif; ?>	
						<?php else: ?>
							<?php if( $data_organisation ): ?>
								<span class="data-explorer-organisation">
									<?php print $data_organisation; ?>
								</span>
							<?php endif; ?>	
						<?php endif; ?>	

						<?php if( $content['field_ef_topic']['#items'] ): ?>						
							<span class="topic-label"><?php print t('Topics'); ?>:</span>
							<?php foreach ( $content['field_ef_topic']['#items'] as $key => $topics): ?>								
									<span class="topic-item"><?php 
										$term = taxonomy_term_load( $topics['tid'] );
										$name = $term->field_term_title[$language->language][0]['value'];		
										if( !isset($name) ){
											$name = $term->field_term_title['en'][0]['value'];
										} 
										$url = url(taxonomy_term_uri($term)['path']);
	           				$fixed_topic_url = str_replace('topics' , 'topic' , $url );
									  print '<a href="'. $fixed_topic_url .'" >' . $name . '</a>'; 
									?></span>							
								<?php endforeach; ?>
						<?php endif; ?>
			</div>
	

			<?php if( $content['field_ef_topic']['#items'] ): ?>
				<div class="jm-abstract-topics">
			<?php else: ?>
				<div class="jm-abstract">
			<?php endif; ?>
				<?php print render($content['field_ef_de_description'][0]['#markup']); ?>
			</div>

			<?php if ( strlen($node->field_ef_de_chart_id['und'][0]['safe_value']) == 0 ) : ?>
				<?php $subtitle = $content['field_ef_de_subtitle']['#items'][0]['safe_value']; ?>
				<?php if ($subtitle): ?>
					<h2><?php print $subtitle; ?></h2>
				<?php endif; ?>

				<?php if ($content['field_ef_de_methodology'][0]['#markup'] != '' ): ?>
				<div class="jm-methodology">
					<?php print render($content['field_ef_de_methodology'][0]['#markup']); ?>
				</div>
				<?php endif; ?>

			<?php endif; ?>

		</div>
		<div class="jm-back-button large-3">

			<section class="block block-block boxed-block back-to-results-block block-block-13 clearfix">
				<a href="<?php print render($content['field_ef_de_button_url']['#items'][0]['display_url']); ?>" title="Back to Data Explorer"><?php print render($content['field_ef_de_button_url']['#items'][0]['title']); ?></a>
			</section>

      <?php if ( strlen($node->field_ef_de_chart_id['und'][0]['safe_value']) == 0 ) : ?>
        <?php if ($node->field_related_taxonomy['und'][0]['target_id'] != '' || $node->field_ef_related_content['und'][0]['target_id'] != '' ) : ?>
          <div class="related-content-aside-3 related-content-data-explorer small-12 large-12 column without-chart">
              <?php
                  $block = block_load('block','54');
                  print drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
              ?>
          </div>
        <?php endif; ?>
      <?php endif; ?>

		</div>
	</div>

	<?php if( $node->field_ef_de_chart_id['und'][0]['safe_value'] == 'EJM'): ?>

	<div class="jm-filters-chart">
		<div class="filters-jm-chart small-12 large-3">
			<form>
			  <fieldset class="main-filters">
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
			  <fieldset class="secondary-filters">
			  		<legend><i class="fa fa-filter" aria-hidden="true"></i> More filters: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
			  		<div class="group-filters jm-filter-criterion">
				    	<label>Job quality criterion</label>
				    	<select id="criterion" name="criterion">
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

		<?php if ( strlen($node->field_ef_de_chart_id['und'][0]['safe_value']) > 0 ) : ?>
			<div class="jm-filters-chart clearfix">
				<div class="filters-jm-chart small-12 large-3">
					<form>
			  		<fieldset>
			    		<legend class="opened"><i class="fa fa-filter" aria-hidden="true"></i> Filters: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
							<div class="group-filters chart-filters"></div>
						</fieldset>
					</form>
				</div>
				<div class="jm-charts small-12 large-9 <?php print implode(' ', $classes_array); ?>">
					<div class="chart-wrapper" id="<?php print $content['field_ef_de_chart_id']['#items'][0]['value']; ?>-wrapper"></div>
					<div class="legend-butterfly"></div>
				</div>
			</div>
		<?php endif; ?>

	<?php endif; ?>

  <?php if ( strlen($node->field_ef_de_chart_id['und'][0]['safe_value']) != 0 ) : ?>
		<?php if ($node->field_related_taxonomy['und'][0]['target_id'] != '' || $node->field_ef_related_content['und'][0]['target_id'] != '' ) : ?>
			<div class="related-content-aside-3 related-content-data-explorer small-12 large-3 column <?php if( strlen($node->field_ef_de_subtitle[$language->language][0]['safe_value']) == 0 ):?>without-title <?php endif; ?>">
			    <?php
			        $block = block_load('block','54');
			        print drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
			    ?>
			</div>
		<?php endif; ?>
  <?php endif; ?>



  <?php if(strlen($node->field_ef_de_chart_id['und'][0]['safe_value']) != 0): ?>
  	<?php 
    	if( $node->field_related_taxonomy['und'][0]['target_id'] == '' &&  $node->field_ef_related_content['und'][0]['target_id'] == '' ){
    		$classe = 'push-3';
    	}    	
  	?>
		<div class="jm-methodology-wrapper small-12 large-9 column <?php print $classe ?>">
			<?php $subtitle = $content['field_ef_de_subtitle']['#items'][0]['safe_value']; ?>
			<?php if ($subtitle): ?>
				<h2><?php print $subtitle; ?></h2>
			<?php endif; ?>

			<?php if ($content['field_ef_de_methodology'][0]['#markup'] != '' ): ?>
			<div class="jm-methodology">
				<?php print render($content['field_ef_de_methodology'][0]['#markup']); ?>
			</div>
			<?php endif; ?>
		</div>
  <?php endif; ?>


	<div class="clearfix"></div>
</div>
