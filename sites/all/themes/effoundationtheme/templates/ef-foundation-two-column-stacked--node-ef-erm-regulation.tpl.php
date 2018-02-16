<?php

  /* --- global variables --- */
  global $language;
  global $user;
  global $base_url;

  /* --- get hierarchical taxonomy up levels --- */
  $tid = $node->field_type_phase_erm_reg['und'][0]['tid'];
  $phase_array = taxonomy_get_parents($tid);
  foreach ($phase_array as $key => $value) {
  	$phase = $value->name;
  } 
  $filters = get_erm_regulation_user_variable_url_parameters();
  $url = "/observatories/emcc/erm/legislation/admin" . $filters;
?>

<!-- go back button BACK END -->
<?php if(in_array('authenticated user', $user->roles)): ?>
	<div class="back-erm-list-button-div">
		<a href="<?php echo $url; ?>"><?php print t("Go back to admin page")?></a>		
	</div>
<!-- go back button FRONT END-->
<?php elseif(in_array('anonymous user', $user->roles)): ?>
	<div class="back-erm-list-button-div">

		<?php 
			$prev_url = $_SERVER['HTTP_REFERER'];
			$findme = 'observatories/emcc/erm/legislation';
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

	<?php if(!in_array('authenticated user', $user->roles)): ?>
		<div class="erm-legal-disclaimer">
			<p><?php print t("Eurofound aims to keep this information up to date and accurate. 
				If errors are brought to our attention, we will try to correct them. 
				However, Eurofound accepts no responsibility or liability whatsoever with regard to the information in this database."); ?>
			
			<?php print t("This information is:"); ?></p>
				<ul>
					<li><?php print t("of a general nature only and is not intended to address the specific circumstances of any particular individual or entity;"); ?></li>
					<li><?php print t("not necessarily comprehensive, complete, accurate or up to date;"); ?></li>
					<li><?php print t("sometimes linked to external sites over which Eurofound services have no control and for which Eurofound assumes no responsibility;"); ?></li>
					<li><?php print t("not professional or legal advice (if specific advice is needed, a suitably qualified professional should be consulted)."); ?></li>
				</ul>
		</div>
	<?php endif; ?>

	<!-- COUNTRY / PHASE / TYPE -->
	<div class="erm-title-info row">
		<div class="erm-country small-6 columns">
			<?php print render($content['field_country_erm_reg']); ?>
		</div>
		<div class="erm-phase-type small-6 columns">
			<div class="erm-phase">
				<span class="erm-info-label"><?php print t("Phase"); ?>: </span>
				<?php print $phase; ?>
			</div>
			<div class="erm-type">
				<span class="erm-info-label"><?php print t("Type"); ?>: </span>
				<?php print render($content['field_type_phase_erm_reg']); ?>
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
			<h2 class="small-9 columns"><?php print render($content['field_native_name_erm_reg']); ?></h2>
		</div>		
		<div class="erm-en-title row">
			<span class="small-2 columns"><?php print t("English name"); ?>:</span>
			<h2 class="small-9 columns"><?php print render($content['field_english_name_erm_reg']); ?></h2>
		</div>

	</div>
	<!-- TITLES NOTES -->
	<?php if(in_array('authenticated user', $user->roles)): ?>
		<?php if(isset($content['field_name_notes_memory_erm_reg'])): ?>
		<div class="erm-reg-name-notes-icon erm-reg-notes-icon">
			<i class="fa fa-comments"></i>
		</div>
		<div class="erm-reg-name-notes erm-reg-notes">
			<?php 
				$title_notes = $content['field_name_notes_memory_erm_reg']['#items'][0]['safe_value'];
				$title_notes = str_replace("By", "<br>By", $title_notes);
				$title_notes = substr($title_notes, 4);
			?>
			<?php print $title_notes; ?>
		</div>
		<?php endif; ?>
	<?php endif; ?>

	<!-- MAIN CONTENT: ARTICLE -->
	<div class="erm-content">

	  <?php if(isset($content['field_article_erm_reg'])): ?>
	  	<div class="erm-reg-article erm-text-field">
	  		<h3 class="erm-content-title"><?php print t("Article"); ?></h3>
	  		<?php print render($content['field_article_erm_reg']); ?>
	  	</div>
		<!-- ARTICLE NOTES -->
		<?php if(in_array('authenticated user', $user->roles)): ?>
			<?php if(isset($content['field_article_notes_memo_erm_reg'])): ?>
			<div class="erm-reg-article-notes-icon erm-reg-notes-icon">
				<i class="fa fa-comments"></i>
			</div>
			<div class="erm-reg-article-notes erm-reg-notes">
				<?php 
					$title_notes = $content['field_article_notes_memo_erm_reg']['#items'][0]['safe_value'];
					$title_notes = str_replace("By", "<br>By", $title_notes);
					$title_notes = substr($title_notes, 4);
				?>
				<?php print $title_notes; ?>
			</div>
			<?php endif; ?>
		<?php endif; ?>	  	
	  <?php endif; ?>



	  <!-- MAIN CONTENT: DESCRIPTION (BODY) -->
	  <?php if(isset($content['body'])): ?>
	  	<div class="erm-reg-description erm-text-field">
	  		<h3 class="erm-content-title"><?php print t("Description"); ?></h3>
	  		<?php print render($content['body']); ?>
	  	</div>
	  <?php endif; ?>

	  <!-- MAIN CONTENT: COMMENTS -->
	  <?php if(isset($content['field_comments_erm_reg'])): ?>
	  	<div class="erm-reg-comments erm-text-field">
	  		<h3 class="erm-content-title"><?php print t("Comments"); ?></h3>
	  		<?php print render($content['field_comments_erm_reg']); ?>
	  	</div>
	  <?php endif; ?>

	</div>

	<!-- FEATURES: COST COVERED BY / INVOLVED ACTORS / THRESHOLDS -->
	<div class="erm-features row">

		<div class="erm-reg-fundings large-4 columns">
			<h5><?php print t("Cost covered by"); ?></h5>
		  <?php if(isset($content['field_erm_fundings_erm_reg'])): ?>
		  	<?php print render($content['field_erm_fundings_erm_reg']); ?>
		  <?php else: ?>
		  	<span><?php print t("Not applicable"); ?></span>
		  <?php endif; ?>
		  <!-- COST COVERED BY NOTES -->
			<?php if(in_array('authenticated user', $user->roles)): ?>
				<?php if(isset($content['field_costcov_notes_memo_erm_reg'])): ?>
				<div class="erm-reg-cost-covered-by-notes-icon erm-reg-notes-icon">
					<i class="fa fa-comments"></i>
				</div>
				<div class="erm-reg-cost-covered-by-notes erm-reg-notes">
					<?php 
						$title_notes = $content['field_costcov_notes_memo_erm_reg']['#items'][0]['safe_value'];
						$title_notes = str_replace("By", "<br>By", $title_notes);
						$title_notes = substr($title_notes, 4);
					?>
					<?php print $title_notes; ?>
				</div>
				<?php endif; ?>
			<?php endif; ?>		  

		</div>

		<div class="erm-reg-involved-actors large-4 columns">
			<h5><?php print t("Involved actors other than national government"); ?></h5>
		  <?php if(isset($content['field_involved_actors_erm_reg'])): ?>
		  	<?php print render($content['field_involved_actors_erm_reg']); ?>
		  	<?php if(isset($content['field_involvement_other_erm_reg'])): ?>
		  		<h6><?php print t("Involvement others"); ?></h6>
		  		<?php print render($content['field_involvement_other_erm_reg']); ?>
		  	<?php endif; ?>
		  <?php else: ?>
		  	<span><?php print t("National goverment only"); ?></span>
		  <?php endif; ?>
		  <!-- Involved ACTORS NOTES -->
			<?php if(in_array('authenticated user', $user->roles)): ?>
				<?php if(isset($content['field_invol_notes_memo_erm_reg'])): ?>
				<div class="erm-reg-involved-notes-icon erm-reg-notes-icon">
					<i class="fa fa-comments"></i>
				</div>
				<div class="erm-reg-involved-notes erm-reg-notes">
					<?php 
						$title_notes = $content['field_invol_notes_memo_erm_reg']['#items'][0]['safe_value'];
						$title_notes = str_replace("By", "<br>By", $title_notes);
						$title_notes = substr($title_notes, 4);
					?>
					<?php print $title_notes; ?>
				</div>
				<?php endif; ?>
			<?php endif; ?>		  

		</div>


		<div class="erm-reg-thresholds large-4 columns">

			<?php if( isset($content['field_company_size_erm_reg']) && isset($content['field_affected_employees_erm_reg']) ): ?>
				<h5><?php print t("Thresholds"); ?></h5>
				<div class="erm-reg-thresholds-item">
					<label><?php print t("Company size by number of employees"); ?>:</label>
					<?php print render($content['field_company_size_erm_reg']); ?>
				</div>
				<div class="erm-reg-thresholds-item">
					<label><?php print t("Number of affected employees"); ?>:</label>
					<?php print render($content['field_affected_employees_erm_reg']); ?>
				</div>			
			<?php elseif( isset($content['field_company_size_erm_reg']) && !isset($content['field_affected_employees_erm_reg']) ): ?>
				<h5><?php print t("Thresholds"); ?></h5>
				<div class="erm-reg-thresholds-item">
					<label><?php print t("Company size by number of employees"); ?>:</label>
					<?php print render($content['field_company_size_erm_reg']); ?>
				</div>
			<?php elseif( !isset($content['field_company_size_erm_reg']) && isset($content['field_affected_employees_erm_reg']) ): ?>
				<h5><?php print t("Thresholds"); ?></h5>
				<div class="erm-reg-thresholds-item">
					<label><?php print t("Number of affected employees"); ?>:</label>
					<?php print render($content['field_affected_employees_erm_reg']); ?>
				</div>
			<?php elseif( !isset($content['field_company_size_erm_reg']) && !isset($content['field_affected_employees_erm_reg']) ): ?>
				<h5><?php print t("Thresholds"); ?></h5>
				<div class="erm-reg-thresholds-item">
					<span><?php print t("No, applicable in all circumstances"); ?></span>
				</div>
			<?php endif; ?>
		  <!-- THRESHOLDS NOTES -->
			<?php if(in_array('authenticated user', $user->roles)): ?>
				<?php if(isset($content['field_thres_notes_memo_erm_reg'])): ?>
				<div class="erm-reg-thresholds-notes-icon erm-reg-notes-icon">
					<i class="fa fa-comments"></i>
				</div>
				<div class="erm-reg-thresholds-notes erm-reg-notes">
					<?php 
						$title_notes = $content['field_thres_notes_memo_erm_reg']['#items'][0]['safe_value'];
						$title_notes = str_replace("By", "<br>By", $title_notes);
						$title_notes = substr($title_notes, 4);
					?>
					<?php print $title_notes; ?>
				</div>
				<?php endif; ?>
			<?php endif; ?>			

		</div>
	</div>

	
	<!-- SOURCES -->
	<?php if(isset($content['field_sources_erm_reg'])): ?>
	<div class="erm-sources">
		<h5><?php print t("Sources"); ?></h5>
	  	<?php print render($content['field_sources_erm_reg']); ?>
	</div>	
	  <!-- SOURCES NOTES -->
		<?php if(in_array('authenticated user', $user->roles)): ?>
			<?php if(isset($content['field_sources_notes_memo_erm_reg'])): ?>
			<div class="erm-reg-sources-notes-icon erm-reg-notes-icon">
				<i class="fa fa-comments"></i>
			</div>
			<div class="erm-reg-sources-notes erm-reg-notes">
				<?php 
					$title_notes = $content['field_sources_notes_memo_erm_reg']['#items'][0]['safe_value'];
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
	<!-- <div class="erm-links">

		<?php print render($content['links']); ?>

	</div>-->

  

</article>
<!-- END of ARTICLE -->
