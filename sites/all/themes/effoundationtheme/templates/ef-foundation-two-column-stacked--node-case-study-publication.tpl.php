<?php

  /* --- global variables --- */
  global $language;
  global $user;
  global $base_url;



  $nid_rel = $node->field_relation_identifier_csp['und'][0]['value'];
  $node_rel = node_load($nid_rel);
  $filters = get_support_instrument_user_variable_url_parameters();
  $url = "/observatories/emcc/erm/support-instrument/admin" . $filters;
?>


<!-- ARTICLE -->

<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>


    <div class="back-erm-list-button-div">
        <?php 
            $prev_url = $_SERVER['HTTP_REFERER'];
            $findme = 'observatories/emcc/erm/restructuring-case-studies';
            $pos = strpos($prev_url, $findme);
        ?>

        <?php if($pos === false): ?>
            <a href="<?php echo $base_url . '/' . $findme; ?>"><?php print t("Go to list page")?></a>   
        <?php else: ?>  
            <a href= <?php print $_SERVER['HTTP_REFERER'] ?>><?php print t("Go back to list")?></a>
        <?php endif; ?>

    </div>


    <div class="case-study-result">

        <div class="case-study-subtitle row">
            <div class="large-3-offset-9 columns text-right">
                <i class="fa fa-calendar"></i>
                <?php
                    $date = date('d M, Y', $node->created);
                    print $date;
                ?>
            </div>
        </div>

        <div class="row case-study-location-size">
            <div class="case-study-location large-6 columns">
                <ul class="cs-location-list inline-list">
                    <li><i class="fa fa-globe"></i></li>
                    <li class="cs-country"><?php print render($content['field_country_csp']); ?></li>
                </ul>
            </div>
            <div class="case-study-size large-6 columns">
                <ul class="cs-size-list inline-list">
                    <li class="cs-org-size">
                        <i class="fa fa-users"></i><?php print t('Organisation size'); ?>
                        <?php if(isset($content['field_organisation_size_csp'])): ?>
                            <?php print render($content['field_organisation_size_csp']); ?>
                        <?php else: ?>
                            <p>-</p>
                        <?php endif; ?>
                    </li>
                    <li class="cs-est-size">
                        <i class="fa fa-user"></i><?php print t('Establishment size'); ?>
                        <?php if(isset($content['field_affected_est_size_csp'])): ?>
                            <?php print render($content['field_affected_est_size_csp']); ?>
                        <?php else: ?>
                            <p>-</p>
                        <?php endif; ?>
                    </li>
                </ul>
            </div>
        </div>

        <div class="case-study-features row">
            <ul class="cs-features-list-left large-6 columns">
            	<?php if(isset($content['field_type_of_restructuring_csp'])): ?>
                <li class="cs-type-restructuring">
                    <span><?php print t('Type of restructuring'); ?></span>
                    <?php print render($content['field_type_of_restructuring_csp']); ?>
                </li>
            	<?php endif; ?>
            	<?php if(isset($content['field_ownership_csp'])): ?>
                <li class="cs-ownership">
                    <span><?php print t('Ownership'); ?></span>
                    <?php print render($content['field_ownership_csp']); ?>
                </li>
           		<?php endif; ?>
           		<?php if(isset($content['field_sectors_csp'])): ?>
                <li class="cs-sectors">
                    <span><?php print t('Sectors'); ?></span>
                    <?php print render($content['field_sectors_csp']); ?>
                </li>
            	<?php endif; ?>
            	<?php if(isset($content['field_involved_actors_csp'])): ?>
                <li class="cs-actors">
                    <span><?php print t('Involved actors'); ?></span>
                    <p><?php print render($content['field_involved_actors_csp']); ?>
                </li>
            	<?php endif; ?>
            </ul>
            <ul class="cs-features-list-right large-6 columns">
                <?php if(isset($content['field_ant_change_activ_csp'])): ?>
                    <li class="cs-ant-changes">
                        <span><?php print t('Anticipation of change activities'); ?></span>
                        <?php print render($content['field_ant_change_activ_csp']); ?>
                    </li>
                <?php endif; ?>
                <?php if(isset($content['field_man_change_activ_csp'])): ?>
                    <li class="cs-mng-changes">
                        <span><?php print t('Management of change activities'); ?></span>
                        <?php print render($content['field_man_change_activ_csp']); ?>
                    </li>
                <?php endif; ?>
            </ul>
        </div>
    </div>

    <!-- Which content type is the original case study? -->
    <?php $type_rel = $node_rel->type; ?>

    <?php if($type_rel == 'ef_restructuring_in_smes' || $type_rel == 'ef_case_study' || $type_rel == 'page'): ?>

        <div class="summary_body case-study-body">
            <?php $lang = $language->language; ?>
            <?php print render($node_rel->body[$lang][0]['value']); ?>
        </div>

    <?php elseif ($type_rel == 'ef_publication'): ?>
        <?php
            $lang = $language->language;
            $file_name = $node_rel->field_ef_document[$lang][0]['filename'];
            $fid = $node_rel->field_ef_document[$lang][0]['fid'];
            $img_name = str_replace('.pdf', '.png', $file_name);
        ?>
        <div class="pub-pdf-img">
            <a href="<?php print $base_url; ?>/sites/default/files/ef_publication/field_ef_document/<?php print $file_name; ?>">
                <img alt="" src="<?php print $base_url; ?>/sites/default/files/pdfpreview/<?php print $fid; ?>-<?php print $img_name; ?>"
                	typeof="foaf:Image">
            </a>
        </div>
        <div class="field field-name-field-ef-document">
            <span class="file">
                <a href="<?php print $base_url; ?>/sites/default/files/ef_publication/field_ef_document/<?php print $file_name; ?>">
                   <?php echo t("Download PDF") ?>
                </a>
            </span>
        </div>
        <div class="summary_body case-study-body">
            <?php $lang = $language->language; ?>
            <?php print render($node_rel->body[$lang][0]['value']); ?>
        </div>
        <div style="clear:both"></div>

    <?php endif; ?>

    <?php if (isset($content['field_keywords_csp'])): ?>
        <div class="cs-keywords">
            <div><i class="fa fa-tag"></i><span><?php print t('keywords'); ?></span></div>
            <?php print render($content['field_keywords_csp']); ?>
        </div>
    <?php endif; ?>

	<!-- PDF LINK / STADISTIC LINK / PRINT LINK -->
	<div class="erm-links">

		<?php print render($content['links']); ?>

	</div>



</article>
<!-- END of ARTICLE -->

