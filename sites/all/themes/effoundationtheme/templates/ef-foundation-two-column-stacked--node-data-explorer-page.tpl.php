<?php
/**
 * @file
 * Default theme file for d3 visualizations.
 */
dpm($content);
?>

<div  class="jm-charts-wrapper ">	

	<div class="row">
		<div class="jm-abstract-wrapper small-12 large-9">
		  <h1 id='pagetitle' class='title'><?php print drupal_get_title(); ?></h1>
			<div class="jm-abstract">
				<?php print render($content['field_ef_de_description'][0]['#markup']); ?>

			</div>
		</div>
		<div class="jm-back-button large-3">
			<section class="block block-block boxed-block back-to-results-block block-block-13 clearfix">
				<a href="<?php print render($content['field_ef_de_button_url']['#items'][0]['display_url']); ?>" title="Back to Data Explorer"><?php print render($content['field_ef_de_button_url']['#items'][0]['title']); ?></a>  
			</section>
		</div>
	</div>
	<?php if($content['field_ef_de_chart_id'][0]['#markup'] == 'EJM'): ?>
	<div class="jm-filters-chart">
		<div class="filters-jm-chart small-12 large-3">
			<form>
			  <fieldset>
			    <legend class="opened"><i class="fa fa-filter" aria-hidden="true"></i> Filters: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
			    	<div class="group-filters jm-filter-countries">
				    	<label>Countries</label>
				    	<select id="country">
							</select>
			    	</div>
						<div class="group-filters jm-filter-time">
				    	<label>Time period</label>
				    	<select id="period">
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
				    	<select id="criterion">
				    	</select>
			    	</div>
			  </fieldset>
			</form>		
		</div>

		<div class="jm-charts small-12 large-9 <?php print implode(' ', $classes_array); ?>">
				<h2>Employment shifts by <span class="criterion"></span> quintile<span class="breakdown"></span>, <span class="country"></span>, <span class="period"></span></h2>
				<div id="ejm-chart"></div>
				<div class="jm-footnote"></div>
		</div>
	</div>
	<?php else: ?>

	<div class="chart-wrapper">
		<div class="chart-filters"></div>
	</div>
	<?php endif; ?>
	
	<div class="jm-methodology-wrapper small-12 large-9  push-3">
		<h2><?php print render($content['field_ef_de_subtitle']['#items'][0]['safe_value']); ?></h2>
		<div class="jm-methodology">
			<?php print render($content['field_ef_de_methodology'][0]['#markup']); ?>
		</div>
	</div>

</div>
