<?php

  /* --- global variables --- */
  global $language;
  global $user;
  global $base_url;

  /* --- get hierarchical taxonomy up levels --- */
  $tid = $node->field_type_erm_si['und'][0]['tid'];
  $phase_array = taxonomy_get_parents($tid);
  foreach ($phase_array as $key => $value) {
  	$phase = $value->name;
  } 
  $filters = get_support_instrument_user_variable_url_parameters();
  $url = "/observatories/emcc/erm/support-instrument/admin" . $filters;

  //drupal_add_css(drupal_get_path('module', 'ef_erm_regulation') . '/template.css');
?>

<!-- go back button BACK END -->
<?php if(in_array('authenticated user', $user->roles)): ?>
	<div class="back-erm-list-button-div">
	<?php if(strpos($_SERVER['HTTP_REFERER'], 'admin')): ?>	
		<a href="<?php echo $url; ?>"><?php print t("Go back to admin page")?></a>		
	<?php else: ?>
		<a href= <?php print $_SERVER['HTTP_REFERER'] ?>><?php print t("Go back to list")?></a>
	<?php endif; ?>
	</div>
<!-- go back button FRONT END-->
<?php elseif(in_array('anonymous user', $user->roles)): ?>
	<div class="back-erm-list-button-div">

		<?php 
			$prev_url = $_SERVER['HTTP_REFERER'];
			$findme = 'observatories/emcc/erm/support-instrument';
			$pos = strpos($prev_url, $findme);
		?>

		<?php if($pos === false): ?>
			<a href="<?php echo $base_url . '/' . $findme; ?>"><?php print t("Go to list page")?></a>	
		<?php else: ?>	
			<a href= <?php print $_SERVER['HTTP_REFERER'] ?>><?php print t("Go back to list")?></a>
		<?php endif; ?>

	</div>
<?php endif; ?>


<?php print print_insert_link();?>
<!-- ARTICLE -->
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<!-- COUNTRY / PHASE / TYPE -->
	<div class="erm-title-info row">
		<div class="erm-country small-6 columns">
			<?php print render($content['field_country_erm_si']); ?>
		</div>
		<div class="erm-phase-type small-6 columns">
			<div class="erm-phase">
				<span class="erm-info-label"><?php print t("Phase"); ?>: </span>
				<?php print $phase; ?>
			</div>
			<div class="erm-type">
				<span class="erm-info-label"><?php print t("Type"); ?>: </span>
				<?php print render($content['field_type_erm_si']); ?>
			</div>
		</div>
	</div>

	<!-- EDIT DATE -->
	<?php if(isset($node->changed)): ?>
	<div class="erm-edit-date">
		<i class="fa fa-calendar"></i>
		<span><?php print t("Last modified"); ?>: </span>
		<?php $changed_date = date('d F, Y', $node->changed); ?>
		<?php print $changed_date; ?>
	</div>
	<?php endif; ?>


	<!-- TITLES -->
	<div class="erm-titles">

		<div class="erm-nat-title row">
			<span class="small-2 columns"><?php print t("Native name"); ?>:</span>
			<h2 class="small-9 columns"><?php print render($content['field_native_name_erm_si']); ?></h2>
		</div>		
		<div class="erm-en-title row">
			<span class="small-2 columns"><?php print t("English name"); ?>:</span>
			<h2 class="small-9 columns"><?php print render($content['field_english_name_erm_si']); ?></h2>
		</div>

	</div>
	<!-- TITLES NOTES -->
	<?php if(in_array('authenticated user', $user->roles)): ?>
		<?php if(isset($content['field_name_notes_memory_erm_si'])): ?>
		<div class="erm-si-name-notes-icon erm-si-notes-icon">
			<i class="fa fa-comments"></i>
		</div>
		<div class="erm-si-name-notes erm-si-notes">
			<?php 
				$title_notes = $content['field_name_notes_memory_erm_si']['#items'][0]['safe_value'];
				$title_notes = str_replace("By", "<br>By", $title_notes);
				$title_notes = substr($title_notes, 4);
			?>
			<?php print $title_notes; ?>
		</div>
		<?php endif; ?>
	<?php endif; ?>

	<!-- MAIN CONTENT: COVERAGE/ELIGIBILITY -->
	<div class="erm-content">

	  <?php if(isset($content['field_coverage_elig_erm_si'])): ?>
	  	<div class="erm-si-coverage-eligibility erm-text-field">
	  		<h3 class="erm-content-title"><?php print t("Coverage/Eligibility"); ?></h3>
	  		<?php print render($content['field_coverage_elig_erm_si']); ?>
	  	</div>  	
	  <?php endif; ?>


	  <!-- MAIN CONTENT: MAIN CHARACTERISTICS -->
	  <?php if(isset($content['field_main_characteristic_erm_si'])): ?>
	  	<div class="erm-si-characteristics erm-text-field">
	  		<h3 class="erm-content-title"><?php print t("Main characteristics"); ?></h3>
	  		<?php print render($content['field_main_characteristic_erm_si']); ?>
	  	</div>
	  <?php endif; ?>

	</div>

	<!-- FEATURES: INVOLVED ACTORS / FUNDING -->
	
	<?php if(isset($content['field_funding_erm_si'])): ?>
	<div class="erm-si-funding erm-content">
		<h3 class="erm-content-title"><?php print t("Funding"); ?></h3>
		<?php print render($content['field_funding_erm_si']); ?>
	</div>
	<!-- FUNDING NOTES -->
	<?php if(in_array('authenticated user', $user->roles)): ?>
			<?php if(isset($content['field_funding_notes_memo_si'])): ?>
				<div class="erm-si-funding-notes-icon erm-si-notes-icon">
					<i class="fa fa-comments"></i>
				</div>
				<div class="erm-si-funding-notes erm-si-notes">
					<?php 
						$title_notes = $content['field_funding_notes_memo_si']['#items'][0]['safe_value'];
						$title_notes = str_replace("By", "<br>By", $title_notes);
						$title_notes = substr($title_notes, 4);
					?>
					<?php print $title_notes; ?>
				</div>
			<?php endif; ?>
	<?php endif; ?>		
	<?php endif; ?>

	<?php 

		$involded_actors = 0;
		if(isset($content['field_national_govermment_erm_si'])){$involded_actors++;}
		if(isset($content['field_reg_local_gov_erm_si'])){$involded_actors++;}
		if(isset($content['field_public_employ_serv_erm_si'])){$involded_actors++;}
		if(isset($content['field_employers_org_erm_si'])){$involded_actors++;}
		if(isset($content['field_other_erm_si'])){$involded_actors++;}
	?>
	<?php if($involded_actors > 0): ?>
	
		<div class="erm-features erm-si-involved-actors erm-content">
			<h3 class="erm-content-title"><?php print t('Involved actors'); ?></h4>
			<?php if(isset($content['field_national_govermment_erm_si'])): ?>
				<h5><?php print t("National government"); ?></h5>
				<?php print render($content['field_national_govermment_erm_si']); ?>
			<?php endif; ?>
			<?php if(isset($content['field_reg_local_gov_erm_si'])): ?>
				<h5><?php print t("Regional/local government"); ?></h5>
				<?php print render($content['field_reg_local_gov_erm_si']); ?>
			<?php endif; ?>
			<?php if(isset($content['field_public_employ_serv_erm_si'])): ?>
				<h5><?php print t("Public employment services"); ?></h5>
				<?php print render($content['field_public_employ_serv_erm_si']); ?>
			<?php endif; ?>
			<?php if(isset($content['field_employers_org_erm_si'])): ?>
				<h5><?php print t("Employers' or employees' organisations"); ?></h5>
				<?php print render($content['field_employers_org_erm_si']); ?>
			<?php endif; ?>
			<?php if(isset($content['field_other_erm_si'])): ?>
				<h5><?php print t("Other"); ?></h5>
				<?php print render($content['field_other_erm_si']); ?>
			<?php endif; ?>
		</div>
		<!-- INVOLVED ACTORS NOTES -->
		<?php if(in_array('authenticated user', $user->roles)): ?>
			<?php if(isset($content['field_involved_actors_notes_memo'])): ?>
				<div class="erm-si-involved-notes-icon erm-si-notes-icon">
					<i class="fa fa-comments"></i>
				</div>
				<div class="erm-si-involved-notes erm-si-notes">
						<?php 
							$title_notes = $content['field_involved_actors_notes_memo']['#items'][0]['safe_value'];
							$title_notes = str_replace("By", "<br>By", $title_notes);
							$title_notes = substr($title_notes, 4);
						?>
						<?php print $title_notes; ?>
				</div>
			<?php endif; ?>
		<?php endif; ?>		
	<?php endif; ?>

	<!-- EFFECTIVENESS / STRENGHTS / WEAKNESSES -->
	<div class="erm-content">
	<?php if(isset($content['field_effectiveness_erm_si'])): ?>
		<div class="erm-si-effective">
			<h3 class="erm-content-title">
				<i class="fa fa-rocket"></i>
				<?php print t("Effectiveness"); ?>
			</h3>
			<?php print render($content['field_effectiveness_erm_si']); ?>
		</div>
	<?php endif; ?>
	<?php if(isset($content['field_strengths_erm_si'])): ?>
		<div class="erm-si-effective">
			<h3 class="erm-content-title">
				<i class="fa fa-thumbs-o-up"></i>
				<?php print t("Strengths"); ?>
			</h3>
			<?php print render($content['field_strengths_erm_si']); ?>
		</div>	
	<?php endif; ?>
	<?php if(isset($content['field_weaknesses_erm_si'])): ?>
		<div class="erm-si-effective">
			<h3 class="erm-content-title">
				<i class="fa fa-thumbs-o-down"></i>
				<?php print t("Weaknesses"); ?>
			</h3>
			<?php print render($content['field_weaknesses_erm_si']); ?>
		</div>	
	<?php endif; ?>
	</div>

		
	<!-- EXAMPLES -->
	<?php if(isset($content['field_example_erm_si'])): ?>
		<div class="erm-si-example erm-content">
			<h3 class="erm-content-title">
				<?php print t("Examples"); ?>
			</h3>
			<?php print render($content['field_example_erm_si']); ?>
		</div>
	<?php endif; ?>	
	

	<!-- SOURCES -->
	<?php if(isset($content['field_sources_erm_si'])): ?>
	<div class="erm-sources">
		<h5><?php print t("Sources"); ?></h5>
	  	<?php print render($content['field_sources_erm_si']); ?>
	</div>	
	  <!-- SOURCES NOTES -->
		<?php if(in_array('authenticated user', $user->roles)): ?>
			<?php if(isset($content['field_sources_notes_memory'])): ?>
			<div class="erm-si-sources-notes-icon erm-si-notes-icon">
				<i class="fa fa-comments"></i>
			</div>
			<div class="erm-si-sources-notes erm-si-notes">
				<?php 
					$title_notes = $content['field_sources_notes_memory']['#items'][0]['safe_value'];
					$title_notes = str_replace("By", "<br>By", $title_notes);
					$title_notes = substr($title_notes, 4);
				?>
				<?php print $title_notes; ?>
			</div>
			<?php endif; ?>
		<?php endif; ?>
	<?php endif; ?>
	

	<!-- FREE COMMENTS -->
	<?php if(in_array('anonymous user', $user->roles) || in_array('administrator', $user->roles)): ?>
		<div class="ds-node-comments">
          	<div class="ef-comment-toggler toggler">
            	<span class="show-text">Useful? Interesting? Tell us what you think.</span>
            	<span class="hide-text">Hide comments</span>
          	</div>
          	<div id="comments" class="title comment-wrapper">
				<h3><?php print t("Eurofound welcomes feedback and updates on this regulation"); ?></h3>
				<?php print render($content['comments']);?>
		    </div>
		</div>
	<?php endif; ?>

	
	<!-- PDF LINK / STADISTIC LINK / PRINT LINK -->
	<!--<div class="erm-links">
		<?php print render($content['links']); ?>
	</div>-->

  

</article>
<!-- END of ARTICLE -->

