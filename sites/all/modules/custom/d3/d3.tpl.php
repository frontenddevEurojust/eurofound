<?php
/**
 * @file
 * Default theme file for d3 visualizations.
 */
drupal_add_css(drupal_get_path('module', 'ef_d3_dataexplorer') . '/charts/d3.ejm/ejm.css');
drupal_add_js(drupal_get_path('module', 'ef_d3_dataexplorer') . '/charts/d3.ejm/ejm.js');
 ?>


<div  class="jm-charts-wrapper ">	
<div clas="row">
	<div class="jm-back-button large-3">
		<section class="block block-block boxed-block back-to-results-block block-block-13 clearfix">
			<a href="#" title="Back to Data Explorer">Data Explorer</a>  
		</section>
	</div>

	<div class="jm-abstract-wrapper large-9">
	  <h1 id='pagetitle' class='title'><?php print drupal_get_title(); ?></h1>
		<div class="jm-abstract">
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi tincidunt vehicula ex. Sed finibus odio eget aliquam pretium. Etiam eu dui semper turpis efficitur condimentum sit amet ut justo. Duis maximus est eget facilisis ultrices. Curabitur dolor sapien, lobortis ut libero id, efficitur malesuada lorem. Praesent placerat dui leo, pulvinar vestibulum arcu aliquet at. Pellentesque vitae auctor metus. Mauris id rhoncus arcu. Integer pulvinar libero sed orci elementum semper. Sed semper aliquet tellus vel dapibus.</p>

			<p>Morbi dui tellus, pulvinar maximus magna sed, consectetur consequat risus. Nam vestibulum est in molestie elementum. Morbi gravida nisl nec sem consectetur dignissim. Donec scelerisque sem accumsan massa lacinia viverra. Phasellus vel purus bibendum, mollis nisl convallis, ultrices elit. Sed eu tortor placerat turpis blandit suscipit. Morbi vel turpis sapien. Nam sodales metus eu purus condimentum consequat. Etiam posuere tempus volutpat. Praesent nec dapibus odio. Etiam tempus urna quis odio egestas, id ullamcorper ex sagittis.</p>
		</div>
	</div>
	</div>
	<div class="jm-filters-chart">
		<div class="filters-jm-chart large-3">
			<form>
			  <fieldset>
			    <legend class="opened"><i class="fa fa-filter" aria-hidden="true"></i> Filters: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
			    	<div class="group-filters jm-filter-countries">
				    	<label>Countries</label>
				    	<select>
								<option value="GB">United Kingdom</option>
								<option value="AL">Albania</option>
								<option value="AD">Andorra</option>
								<option value="AT">Austria</option>
								<option value="BY">Belarus</option>
								<option value="BE">Belgium</option>
								<option value="BA">Bosnia and Herzegovina</option>
								<option value="BG">Bulgaria</option>
								<option value="HR">Croatia (Hrvatska)</option>
								<option value="CY">Cyprus</option>
								<option value="CZ">Czech Republic</option>
								<option value="FR">France</option>
								<option value="GI">Gibraltar</option>
								<option value="DE" selected="selected">Germany</option>
								<option value="GR">Greece</option>
								<option value="VA">Holy See (Vatican City State)</option>
								<option value="HU">Hungary</option>
								<option value="IT">Italy</option>
								<option value="LI">Liechtenstein</option>
								<option value="LU">Luxembourg</option>
								<option value="MK">Macedonia</option>
								<option value="MT">Malta</option>
								<option value="MD">Moldova</option>
								<option value="MC">Monaco</option>
								<option value="ME">Montenegro</option>
								<option value="NL">Netherlands</option>
								<option value="PL">Poland</option>
								<option value="PT">Portugal</option>
								<option value="RO">Romania</option>
								<option value="SM">San Marino</option>
								<option value="RS">Serbia</option>
								<option value="SK">Slovakia</option>
								<option value="SI">Slovenia</option>
								<option value="ES">Spain</option>
								<option value="UA">Ukraine</option>
								<option value="DK">Denmark</option>
								<option value="EE">Estonia</option>
								<option value="FO">Faroe Islands</option>
								<option value="FI">Finland</option>
								<option value="GL">Greenland</option>
								<option value="IS">Iceland</option>
								<option value="IE">Ireland</option>
								<option value="LV">Latvia</option>
								<option value="LT">Lithuania</option>
								<option value="NO">Norway</option>
								<option value="SJ">Svalbard and Jan Mayen Islands</option>
								<option value="SE">Sweden</option>
								<option value="CH">Switzerland</option>
								<option value="TR">Turkey</option>		    				    	
							</select>
			    	</div>
						<div class="group-filters jm-filter-time">
				    	<label>Time period</label>
				    	<select>
				    		<option value="2011-2013">2011-2013</option>
				    		<option value="2011-2016" selected="selected">2011-2016</option>
				    		<option value="2013-2016">2013-2016</option>
				    	</select>
			    	</div>
			    	<div class="group-filters jm-filter-breakdown">
				    	<label>Breakdown</label>
				    	<select>
				    		<option>All employment</option>
				    		<option selected="selected">Gender</option>
				    		<option>Full time / part-time</option>
				    		<option>Employment status</option>
				    		<option>Contract</option>
				    		<option>Combined employment status</option>
				    		<option>Country of birth</option>
				    		<option>Broad sector</option>
				    	</select>
			    	</div>
			  </fieldset>
			  <fieldset>
			  		<legend><i class="fa fa-filter" aria-hidden="true"></i> More filters: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
			  		<div class="group-filters jm-filter-criterion">
				    	<label>Job quality criterion</label>
				    	<select>
				    		<option selected="selected">Wage</option>
				    		<option>Education</option>
				    		<option>Broad job quality</option>
				    	</select>
			    	</div>
			  </fieldset>
			  <fieldset>
			    <legend ><i class="fa fa-filter" aria-hidden="true"></i> More filters 02: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
			  </fieldset>
			  <fieldset>
			    <legend ><i class="fa fa-filter" aria-hidden="true"></i> More filters 03: <i class="fa fa-angle-down" aria-hidden="true"></i></legend>
			  </fieldset>
			</form>		
		</div>
		<div <?php print $attributes ?> class="jm-charts large-9 <?php print implode(' ', $classes_array); ?>">
			<h2>Chart showing <span class="breakdown-text">[Gender]</span> in <span class="country-text">[Germany]</span> for <span class="time-period-text">[2011-2016]</span></h2>

		</div>
	</div>
	<div class="jm-methodology-wrapper large-9  push-3">
		<h2>Methodology</h2>
		<div class="jm-methodology">
			<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi tincidunt vehicula ex. Sed finibus odio eget aliquam pretium. Etiam eu dui semper turpis efficitur condimentum sit amet ut justo. Duis maximus est eget facilisis ultrices. Curabitur dolor sapien, lobortis ut libero id, efficitur malesuada lorem. Praesent placerat dui leo, pulvinar vestibulum arcu aliquet at. Pellentesque vitae auctor metus. Mauris id rhoncus arcu. Integer pulvinar libero sed orci elementum semper. Sed semper aliquet tellus vel dapibus.</p>

			<p>Morbi dui tellus, pulvinar maximus magna sed, consectetur consequat risus. Nam vestibulum est in molestie elementum. Morbi gravida nisl nec sem consectetur dignissim. Donec scelerisque sem accumsan massa lacinia viverra. Phasellus vel purus bibendum, mollis nisl convallis, ultrices elit. Sed eu tortor placerat turpis blandit suscipit. Morbi vel turpis sapien. Nam sodales metus eu purus condimentum consequat. Etiam posuere tempus volutpat. Praesent nec dapibus odio. Etiam tempus urna quis odio egestas, id ullamcorper ex sagittis.</p>		
		</div>
	</div>
</div>
