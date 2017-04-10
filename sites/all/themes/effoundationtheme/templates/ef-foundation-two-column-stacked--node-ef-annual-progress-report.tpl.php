<?php

  /* ANNUAL PROGRESS REPORT */
  /*     --- template ---   */

  global $user;

  if ($node->field_ef_type_of_report['und'][0]['value'] == 1) {
    $type_of_report = 'national';
  }else {
    $type_of_report = 'eu_level';
  }

  $is_deliverables = check_content($content, 'deliverables');
  $is_promoting = check_content($content, 'promoting');
  $is_working = check_content($content, 'working');
  $is_additional = check_content($content, 'additional');

  if (!$is_deliverables && !$is_promoting && !$is_working
    && !$is_additional && !isset($content['field_ef_date_and_partici_bm'])) {
    $empty_template = true;
  }

  isset($node->workbench_moderation['current']->state) ?
    $current_state = $node->workbench_moderation['current']->state :
    $current_state = 'requested';
  $year_defined_states = array(
    'submitted', 'rejected', 'under_revision_request', 'approved',
  );

  $year_timestamp = $node->field_ef_year['und'][0]['value'];
  $year = date('Y', $year_timestamp);
  $previous_year = $year - 1;

  if (isset($node->field_ef_assign_to_author['und'][0]['entity']->uid)) {
    $assigned_author_uid = $node->field_ef_assign_to_author['und'][0]['entity']->uid;
    $assigned_author = user_load($assigned_author_uid);
    $assigned_author_fn = $assigned_author->field_ef_first_name['und'][0]['value'];
    $assigned_author_ln = $assigned_author->field_ef_last_name['und'][0]['value'];
    $assigned_author_name = $assigned_author->name;
  }
  // Split the date just for Y-m-d
  $scheduled_date = $content['field_ef_report_delivery_date']['#items'][0]['value'];
  $scheduled_date_exploded = explode(' ', $scheduled_date);

  // Split the date just for Y-m-d
  $submitted_on_date = $content['field_ef_apr_submitted_on']['#items'][0]['value'];
  $submitted_on_date_exploded = explode(' ', $submitted_on_date);

  $areas_array;
  for($i=0; $i < count($content['field_ef_network_tend_main_area']['#items']); $i++){
    $areas_array[] = $content['field_ef_network_tend_main_area'][$i]['#markup'];
  }
?>

<h1 id="page-title" class="title secundary">
  <?php if (isset($node->title)): ?>
    <?php print $node->title; ?>
  <?php endif; ?>
</h1>

<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!-- METADATA -->
  <div class="apr-metadata row">
    <div class="row">
      <ul class="apr-list apr-list-left small-6 columns">
        <?php if (isset($content['field_ef_type_of_report'])): ?>
          <li>
            <span class="apr-label"><?php print t('Type of report: '); ?></span>
            <?php print render($content['field_ef_type_of_report']); ?>
          </li>
        <?php endif; ?>
        <?php if ($type_of_report == 'national'): ?>
          <li class="country">
            <span class="apr-label"><?php print t('Country: '); ?></span>
            <?php print render($content['field_country']); ?>
          </li>
        <?php endif; ?>
      </ul>
      <ul class="apr-list apr-list-right small-6 columns">
        <?php if (isset($content['field_ef_deliverable_kind'])): ?>
          <li>
            <?php print render($content['field_ef_deliverable_kind']); ?>
          </li>
        <?php endif; ?>
        <?php if (isset($content['field_ef_year'])): ?>
          <li>
            <div class="date-display-single">
              <?php if (in_array($current_state, $year_defined_states)): ?>

                <span class="field-ef-year-legend">
                  <?php print t('Period of reference'); ?>
                </span>
                <span class="field-name-field-ef-year">
                  <?php if (isset($node->field_ef_new_contract['und'][0]['value']) &&
                    $node->field_ef_new_contract['und'][0]['value'] == 0 ): ?>
                    <?php print '01/12/<strong>'.$previous_year.'</strong> - 30/11/<strong>'.$year.'</strong>'; ?>
                  <?php elseif ( isset($node->field_ef_new_contract['und'][0]['value'])
                    && $node->field_ef_new_contract['und'][0]['value'] == 1
                    && isset($node->field_ef_new_contract_date['und'][0]['value']) ): ?>
                    <?php
                      $new_contract_date_year = date('Y', $node->field_ef_new_contract_date['und'][0]['value']);
                      $new_contract_date_month_day = date('d/m', $node->field_ef_new_contract_date['und'][0]['value']);
                    ?>
                    <?php print $new_contract_date_month_day.'/<strong>' .
                      $new_contract_date_year . '</strong> - 30/11/<strong>'.$year.'</strong>'; ?>
                  <?php endif; ?>
                </span>

              <?php else: ?>
                <span class="field-name-field-ef-year">
                  <strong><?php print $year; ?></strong>
                </span>

              <?php endif; ?>
            </div>
          </li>
        <?php endif; ?>
      </ul>
    </div>
    <ul class="apr-secundary-metadata small-12 columns no-bullet">
      <?php if (isset($content['field_ef_requested_on']) && !in_array('Author', $user->roles)): ?>
        <li><?php print render($content['field_ef_requested_on']); ?></li>
      <?php endif; ?>
      <?php if (isset($content['field_ef_report_delivery_date']['#items'][0]['value']) && !in_array('Author', $user->roles)): ?>
        <li><span><?php print render($content['field_ef_report_delivery_date']['#title']); ?>: </span>
            <?php print render($scheduled_date_exploded[0]); ?>
        </li>
      <?php endif; ?>
      <?php if (isset($content['field_ef_apr_submitted_on']['#items'][0]['value']) && !in_array('Author', $user->roles)): ?>
        <li><span><?php print render($content['field_ef_apr_submitted_on']['#title']); ?>: </span>
            <?php print render($submitted_on_date_exploded[0]); ?>
        </li>
      <?php endif; ?>
      <?php if (isset($assigned_author_name) && !in_array('Author', $user->roles)): ?>
        <li><span><?php print t('Assigned Author'); ?>: </span><?php print $assigned_author_name
          . " ($assigned_author_fn $assigned_author_ln)"; ?></li>
      <?php endif; ?>
      <?php if (isset($node->field_ef_author_contract['und'][0]['taxonomy_term']->name) && !in_array('Author', $user->roles)): ?>
        <li><span><?php print t('Contract'); ?>: </span><?php print $node->field_ef_author_contract['und'][0]['taxonomy_term']->name; ?></li>
      <?php endif; ?>
      <?php if (isset($content['field_ef_approved_for_payment']) && !in_array('Author', $user->roles)): ?>
        <li><?php print render($content['field_ef_approved_for_payment']); ?></li>
      <?php endif; ?>

    </ul>


  </div>
  <!-- end METADATA -->

  <hr></hr>

  <!-- FIELD CONTENT -->
  <?php if(!$empty_template): ?>
  <div class="apr-field-content row">

    <!-- INDEX -->
    <div id="apr-index" class="index large-3 columns">
      <div class="index-wrapper">
        <span>Index</span>
        <ul class="main-index no-bullet">
          <?php if ($is_deliverables): ?>
            <li><a href="#deliverables"><?php print t('Deliverables'); ?></a></li>
          <?php endif; ?>
          <?php if ($is_promoting): ?>
            <li><a href="#promoting-eurofounds-work"><?php print t('Promoting Eurofounds work'); ?></a></li>
          <?php endif; ?>
          <?php if (isset($content['field_ef_date_and_partici_bm'])): ?>
            <li><a href="#meeting-board-members"><?php print t('Meeting with Board members'); ?></a></li>
          <?php endif; ?>
          <?php if ($is_working): ?>
            <li><a href="#working-methods"><?php print t('Working methods'); ?></a></li>
          <?php endif; ?>
          <?php if ($is_additional): ?>
            <li><a href="#additional-information"><?php print t('Aditional information'); ?></a></li>
          <?php endif; ?>
          <?php if(isset($content['field_ef_apr_documents'])): ?>
            <li><a href="#apr-attached-files"><?php print t('Attached files'); ?></a></li>
          <?php endif; ?>
          <?php if(isset($content['qrr']) && in_array('Quality Manager', $user->roles)): ?>
            <li><a href="#apr-quality-ratings"><?php print t('Quality Assessment'); ?></a></li>
          <?php endif; ?>
        </ul>
      </div>
    </div>
    <!-- end INDEX -->

    <div class="content large-9 columns">
    
      <!-- DELIVERABLES -->
      <?php if ($is_deliverables): ?>
      <div id="deliverables" class="apr-deliverables row">

        <div class="section">
          <h2><?php print t('Deliverables'); ?></h2>
          <ul>
          <?php if ($type_of_report == 'national'): ?>
            <?php if (isset($content['field_ef_quart_reporting_one_sc']) || isset($content['field_ef_quart_reporting_one_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Quarterly reporting: Part I on EurWORK'); ?></h3>
                <?php if (isset($content['field_ef_quart_reporting_one_sc'])): ?>
                  <div>
                    <h4><?php print t('Specific comments: '); ?></h4>
                    <?php print render($content['field_ef_quart_reporting_one_sc']); ?>
                  </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_quart_reporting_one_gc'])): ?>
                  <div>
                    <h4><?php print t('General comments: '); ?></h4>
                    <?php print render($content['field_ef_quart_reporting_one_gc']); ?>
                  </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_quart_reporting_two_sc']) || isset($content['field_ef_quart_reporting_two_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Quarterly reporting: Part II on reaching out to stakeholders'); ?></h3>
                <?php if(isset($content['field_ef_quart_reporting_two_sc'])): ?>
                  <div>
                    <h4><?php print t('Specific comments: '); ?></h4>
                    <?php print render($content['field_ef_quart_reporting_two_sc']); ?>
                  </div>
                <?php endif; ?>
                <?php if(isset($content['field_ef_quart_reporting_two_gc'])): ?>
                  <div>
                    <h4><?php print t('General comments: '); ?></h4>
                    <?php print render($content['field_ef_quart_reporting_two_gc']); ?>
                  </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
          <?php endif; ?>
          <?php if ($type_of_report == 'eu_level'): ?>
            <?php if (isset($content['field_ef_erm_annual_report_sc']) || isset($content['field_ef_erm_annual_report_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('ERM Annual Report'); ?></h3>
                <?php if(isset($content['field_ef_erm_annual_report_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_erm_annual_report_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if(isset($content['field_ef_erm_annual_report_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_erm_annual_report_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_erm_quarterly_sc']) || isset($content['field_ef_erm_quarterly_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('ERM Quarterly'); ?></h3>
                <?php if (isset($content['field_ef_erm_quarterly_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_erm_quarterly_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_erm_quarterly_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_erm_quarterly_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_new_entries_sc']) || isset($content['field_ef_new_entries_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('New entries and updates'); ?></h3>
                <?php if (isset($content['field_ef_new_entries_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_new_entries_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_new_entries_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_new_entries_gc']); ?>
                </div>
                 <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
          <?php endif; ?>
            <?php if (isset($content['field_ef_factsheets_sp']) || isset($content['field_ef_factsheets_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('ERM restructuring event factsheets'); ?></h3>
                <?php if (isset($content['field_ef_factsheets_sp'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_factsheets_sp']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_factsheets_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_factsheets_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_short_contrib_sc']) || isset($content['field_ef_short_contrib_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Short contributions'); ?></h3>
                <?php if (isset($content['field_ef_short_contrib_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_short_contrib_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_short_contrib_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_short_contrib_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
          <?php if ($type_of_report == 'national'): ?>
            <?php if (isset($content['field_ef_contrib_to_rep_sc']) || isset($content['field_ef_contrib_to_rep_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Contributions to representativeness studies'); ?></h3>
                <?php if (isset($content['field_ef_contrib_to_rep_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_contrib_to_rep_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_contrib_to_rep_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_contrib_to_rep_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_restruct_si_sc']) || isset($content['field_ef_restruct_si_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('ERM Database on restructuring support instruments'); ?></h3>
                <?php if (isset($content['field_ef_restruct_si_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_restruct_si_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if( isset($content['field_ef_restruct_si_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_restruct_si_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
          <?php endif; ?>
            <?php if (isset($content['field_ef_standard_contrib_sc']) || isset($content['field_ef_standard_contrib_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Standard contributions'); ?></h3>
                <?php if(isset($content['field_ef_standard_contrib_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_standard_contrib_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_standard_contrib_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_standard_contrib_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_spotlight_sc']) || isset($content['field_ef_spotlight_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Spotlight report'); ?></h3>
                <?php if(isset($content['field_ef_spotlight_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_spotlight_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if(isset($content['field_ef_spotlight_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_spotlight_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_rsf_standard_sc']) || isset($content['field_ef_rsf_standard_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Research in focus-standard'); ?></h3>
                <?php if (isset($content['field_ef_rsf_standard_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_rsf_standard_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_rsf_standard_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_rsf_standard_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_rsf_extended_sc']) || isset($content['field_ef_rsf_extended_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Research in focus-extended'); ?></h3>
                <?php if (isset($content['field_ef_rsf_extended_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_rsf_extended_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_rsf_extended_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_rsf_extended_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
          <?php if ($type_of_report == 'national'): ?>
            <?php if (isset($content['field_ef_national_media_sc']) || isset($content['field_ef_national_media_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('National media sources update for the restructuring events'); ?></h3>
                <?php if (isset($content['field_ef_national_media_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_national_media_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_national_media_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_national_media_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_industrial_relations_sc']) || isset($content['field_ef_industrial_relations_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Industrial relations country profiles update'); ?></h3>
                <?php if (isset($content['field_ef_industrial_relations_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_industrial_relations_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_industrial_relations_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_industrial_relations_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
          <?php endif; ?>
            <?php if (isset($content['field_ef_other_research_sc']) || isset($content['field_ef_other_research_gc'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Other research services'); ?></h3>
                <?php if (isset($content['field_ef_other_research_sc'])): ?>
                <div>
                  <h4><?php print t('Specific comments: '); ?></h4>
                  <?php print render($content['field_ef_other_research_sc']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_other_research_gc'])): ?>
                <div>
                  <h4><?php print t('General comments: '); ?></h4>
                  <?php print render($content['field_ef_other_research_gc']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>                        
          </ul>
          <div class="go-back-span">
              <span class="go-back-up"><a href="#deliverables"><i class="fa fa-angle-up"></i></a></span>
              <span class="go-back-index"><a href="#apr-index"><i class="fa fa-angle-double-up"></i></a></span>
          </div>
        </div>
      </div>
      <?php endif; ?>
      <!-- END DELIVERABLES -->

      <!-- PROMOTING EUROFOUNDS WORK -->
      <?php if ($is_promoting): ?>
      <div id="promoting-eurofounds-work" class="apr-promoting row">

        <div class="section">
          <h2><?php print t("Promoting Eurofound's work"); ?></h2>
          <ul>
            <?php if (isset($content['field_ef_reports_webpage_descrip']) || isset($content['field_ef_reports_webpage_details'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Putting reports on a web-page'); ?></h3>
                <?php if (isset($content['field_ef_reports_webpage_descrip'])): ?>
                <div>
                  <h4><?php print t('Description: '); ?></h4>
                  <?php print render($content['field_ef_reports_webpage_descrip']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_reports_webpage_details'])): ?>
                <div>
                  <h4><?php print t('Details: '); ?></h4>
                  <?php print render($content['field_ef_reports_webpage_details']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_sharing_ef_res_descrip']) || isset($content['field_ef_sharing_ef_res_details'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Sharing Eurofound research'); ?></h3>
                <?php if (isset($content['field_ef_sharing_ef_res_descrip'])): ?>
                <div>
                  <h4><?php print t('Description: '); ?></h4>
                  <?php print render($content['field_ef_sharing_ef_res_descrip']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_sharing_ef_res_details'])): ?>
                <div>
                  <h4><?php print t('Details: '); ?></h4>
                  <?php print render($content['field_ef_sharing_ef_res_details']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_mentioning_task_descrip']) || isset($content['field_ef_mentioning_task_details'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Mentioning your task as national correspondent to Eurofound'); ?></h3>
                <?php if( isset($content['field_ef_mentioning_task_descrip'])): ?>
                <div>
                  <h4><?php print t('Description: '); ?></h4>
                  <?php print render($content['field_ef_mentioning_task_descrip']); ?>
                </div>
                <?php endif; ?>
                <?php if( isset($content['field_ef_mentioning_task_details'])): ?>
                <div>
                  <h4><?php print t('Details: '); ?></h4>
                  <?php print render($content['field_ef_mentioning_task_details']); ?>
                </div>
                <?php endif; ?>
              </div>
            </li>
            <?php endif; ?>
            <?php if (isset($content['field_ef_promoting_ef_re_descri']) || isset($content['field_ef_promoting_ef_re_details'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('Promoting Eurofound research'); ?></h3>
                <?php if (isset($content['field_ef_promoting_ef_re_descri'])): ?>
                <div>
                  <h4><?php print t('Description: '); ?></h4>
                  <?php print render($content['field_ef_promoting_ef_re_descri']); ?>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_promoting_ef_re_details'])): ?>
                <div>
                  <h4><?php print t('Details: '); ?></h4>
                  <?php print render($content['field_ef_promoting_ef_re_details']); ?>
                </div>
                <?php endif; ?>

              </div>
            </li>
            <?php endif; ?>
          </ul>
          <div class="go-back-span">
              <span class="go-back-up"><a href="#promoting-eurofounds-work"><i class="fa fa-angle-up"></i></a></span>
              <span class="go-back-index"><a href="#apr-index"><i class="fa fa-angle-double-up"></i></a></span>
          </div>
        </div>
      </div>
      <?php endif; ?>
      <!-- end PROMOTING EUROFOUNDS WORK -->

      <!-- MEETING WITH BOARD MEMBERS -->
      <?php if (isset($content['field_ef_date_and_partici_bm'])): ?>
      <div id="meeting-board-members" class="apr-meeting row">
        <div class="section">
          <h2><?php print t("Meeting with Board members"); ?></h2>
          <div class="unique-section">
            <h3 class="list-label"><?php print t('Date and number of participants: '); ?></h3>
            <?php print render($content['field_ef_date_and_partici_bm']); ?>
          </div>
          <div class="go-back-span">
              <span class="go-back-up"><a href="#meeting-board-members"><i class="fa fa-angle-up"></i></a></span>
              <span class="go-back-index"><a href="#apr-index"><i class="fa fa-angle-double-up"></i></a></span>
          </div>
        </div>
      </div>
      <?php endif; ?>
      <!-- end MEETING WITH BOARD MEMBERS -->

      <!-- WORKING METHODS -->
      <?php if ($is_working): ?>
      <div id="working-methods" class="apr-working-methods row">
        <div class="section">
          <h2><?php print t("Working methods"); ?></h2>
          <ul>
          <?php if (isset($content['field_ef_workmeth_short_summary'])): ?>
            <li>
              <h4 class="list-label"><?php print t('Summary: '); ?></h4>
              <?php print render($content['field_ef_workmeth_short_summary']); ?>
            </li>
          <?php endif; ?>
          <?php if (isset($content['field_ef_working_methods_diff'])): ?>
            <li>
              <h4 class="list-label"><?php print t('Difficulties: '); ?></h4>
              <?php print render($content['field_ef_working_methods_diff']); ?>
            </li>
          <?php endif; ?>
          <?php if (isset($content['field_ef_working_methods_impro'])): ?>
            <li>
              <h4 class="list-label"><?php print t('Improvements: '); ?></h4>
              <?php print render($content['field_ef_working_methods_impro']); ?>
            </li>
          <?php endif; ?>
          <?php if(isset($node->field_ef_working_methods_rating['und'][0]['value'])): ?>
            <li>
              <h4 class="list-label"><?php print t('Rating topics: '); ?></h4>
              <div class="rating-wrapper">
                <div><?php methods_rating($node->field_ef_working_methods_rating['und'][0]['value']); ?></div>
                <!--<span class="rating-legend"><?php print render($content['field_ef_working_methods_rating']); ?></span>-->
              </div>
            </li>
          <?php endif; ?>
          <?php if(isset($content['field_ef_working_methods_extinfo'])): ?>
            <li>
              <h4 class="list-label"><?php print t('Extra information: '); ?></h4>
              <?php print render($content['field_ef_working_methods_extinfo']); ?>
            </li>
          <?php endif; ?>
          </ul>
          <div class="go-back-span">
              <span class="go-back-up"><a href="#working-methods"><i class="fa fa-angle-up"></i></a></span>
              <span class="go-back-index"><a href="#apr-index"><i class="fa fa-angle-double-up"></i></a></span>
          </div>
        </div>
      </div>
      <?php endif; ?>
      <!-- end WORKING METHODS -->

      <!-- ADDITIONAL INFORMATION -->
      <?php if ($is_additional): ?>
      <div id="additional-information" class="apr-additional-info row">
        <div class="section">
          <h2><?php print t("Additional information"); ?></h2>
          <ul>
          <?php if(isset($node->field_ef_general_kind_access['und'][0]['value'])
                || isset($node->field_ef_related_acess['und'][0]['value'])
                || isset($content['field_ef_fb_access'])):
          ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('1. Access to information'); ?></h3>
                  <div>
                    <ul>
                      <?php if(isset($node->field_ef_general_kind_access['und'][0]['value'])): ?>
                      <li>
                        <h4 class="list-label">
                          <?php print t('Access to information of general kind like time schedules or contact information:'); ?>
                        </h4>
                        <div class="rating-wrapper">
                          <div><?php stars_rating($node->field_ef_general_kind_access['und'][0]['value']); ?></div>
                          <span class="rating-legend"><?php print render($content['field_ef_general_kind_access']); ?></span>
                        </div>
                      </li>
                      <?php endif; ?>
                      <?php if(isset($node->field_ef_related_acess['und'][0]['value'])): ?>
                      <li>
                        <h4 class="list-label">
                          <?php print t('Access to information related to deliverables, like background notes, questionnaires or operating manuals'); ?>
                        </h4>
                        <div class="rating-wrapper">
                          <div><?php stars_rating($node->field_ef_related_acess['und'][0]['value']); ?></div>
                          <span class="rating-legend"><?php print render($content['field_ef_related_acess']); ?></span>
                        </div>
                      </li>
                      <?php endif; ?>
                      <?php if (isset($content['field_ef_fb_access'])): ?>
                      <li>
                        <h4 class="list-label"><?php print t('Any other feedback related to this question'); ?></h4>
                        <?php print render($content['field_ef_fb_access']); ?>
                      </li>
                      <?php endif; ?>
                    </ul>
                </div>
              </div>
            </li>
          <?php endif; ?>
          <?php if(isset($node->field_ef_general_kind_useful['und'][0]['value'])
                || isset($node->field_ef_related_deliv_useful['und'][0]['value'])
                || isset($content['field_ef_fb_useful'])):
          ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('2. Usefulness of provided information'); ?></h3>
                <div>
                  <ul>
                    <?php if(isset($node->field_ef_general_kind_useful['und'][0]['value'])): ?>
                    <li>
                      <h4 class="list-label">
                        <?php print t('Access to information of general kind like time schedules or contact information:'); ?>
                      </h4>
                      <div class="rating-wrapper">
                        <div><?php stars_rating($node->field_ef_general_kind_useful['und'][0]['value']); ?></div>
                        <span class="rating-legend"><?php print render($content['field_ef_general_kind_useful']); ?></span>
                      </div>
                    </li>
                    <?php endif; ?>
                    <?php if(isset($node->field_ef_related_deliv_useful['und'][0]['value'])): ?>
                    <li>
                      <h4 class="list-label">
                        <?php print t('Access to information related to deliverables, like background notes, questionnaires or operating manuals'); ?>
                      </h4>
                      <div class="rating-wrapper">
                        <div><?php stars_rating($node->field_ef_related_deliv_useful['und'][0]['value']); ?></div>
                        <span class="rating-legend"><?php print render($content['field_ef_related_deliv_useful']); ?></span>
                      </div>
                    </li>
                    <?php endif; ?>
                    <?php if (isset($content['field_ef_fb_useful'])): ?>
                    <li>
                      <h4 class="list-label"><?php print t('Any other feedback related to this question'); ?></h4>
                      <?php print render($content['field_ef_fb_useful']); ?>
                    </li>
                    <?php endif; ?>
                  </ul>
                </div>
              </div>
            </li>
          <?php endif; ?>
          <?php if(isset($node->field_ef_support_admin_rating['und'][0]['value']) || isset($content['field_ef_fb_support_admin'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('3. Support from Eurofound staff regarding administrative issues'); ?></h3>
                  <div>
                  <?php if(isset($node->field_ef_support_admin_rating['und'][0]['value'])): ?>
                    <h4><?php print t('Rating:'); ?></h4>
                    <div class="rating-wrapper">
                      <div><?php stars_rating($node->field_ef_support_admin_rating['und'][0]['value']); ?></div>
                      <span class="rating-legend"><?php print render($content['field_ef_support_admin_rating']); ?></span>
                    </div>
                  <?php endif; ?>
                  <?php if (isset($content['field_ef_fb_support_admin'])): ?>
                    <h4><?php print t('3.1. Any other feedback related to the question'); ?></h4>
                    <div><?php print render($content['field_ef_fb_support_admin']); ?></div>
                  <?php endif; ?>
                </div>
              </div>
            </li>
          <?php endif; ?>
          <?php if(isset($node->field_ef_support_deliver_rating['und'][0]['value']) || isset($content['field_ef_fb_support_deliverables'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('4. Support from Eurofound staff regarding content aspects of deliverables'); ?></h3>
                <div>
                  <?php if(isset($node->field_ef_support_deliver_rating['und'][0]['value'])): ?>
                  <h4><?php print t('Rating:'); ?></h4>
                  <div class="rating-wrapper">
                    <div><?php stars_rating($node->field_ef_support_deliver_rating['und'][0]['value']); ?></div>
                    <span class="rating-legend"><?php print render($content['field_ef_support_deliver_rating']); ?></span>
                  </div>
                  <?php endif; ?>
                  <?php if (isset($content['field_ef_fb_support_deliverables'])): ?>
                    <h4><?php print t('4.1. Any other feedback related to the question'); ?></h4>
                    <div><?php print render($content['field_ef_fb_support_deliverables']); ?></div>
                  <?php endif; ?>
                </div>
              </div>
            </li>
          <?php endif; ?>
          <?php if(isset($content['field_ef_network_tender']) || isset($content['field_ef_network_tend_main_area']) || isset($content['field_ef_network_tender_aspects']) ): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('5. Eurofound is currently preparing a new Network tender to cover 2018-2021 period. Please let us know, which of the current areas of reporting your organisation values the most and would love to do for Eurofound in the future?'); ?></h3>
                <?php if (isset($content['field_ef_network_tend_main_area'])): ?>
                <div>
                  <h4><?php print t('Main area'); ?></h4>
                  <ul class='ef-metatag'>
                  <?php foreach($areas_array as $key => $value): ?>
                    <?php if($value == ' Other area'): ?>
                    <li><?php print render($content['field_ef_network_tend_other']); ?></li>
                    <?php else: ?>
                    <li><?php print $value; ?></li>  
                    <?php endif; ?>
                  <?php endforeach; ?>  
                  </ul>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_network_tender'])): ?>
                <div>
                  <h4><?php print t('5.1 Develop on the aspects that are most important for you in your work as correspondent'); ?></h4>
                  <div><?php print render($content['field_ef_network_tender']); ?></div>
                </div>
                <?php endif; ?>
                <?php if (isset($content['field_ef_network_tender_aspects'])): ?>
                <div>
                  <h4><?php print t('5.2 Which aspects of the current Network did you value most as Eurofound correspondent'); ?></h4>
                  <div><?php print render($content['field_ef_network_tender_aspects']); ?></div>
                </div>
                <?php endif; ?>
              </div>
            </li>
          <?php endif; ?>
          
          <?php if(isset($node->field_ef_cms_system_rating['und'][0]['value']) || isset($content['field_ef_fb_cms_system'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('6. CMS system'); ?></h3>
                <div>
                  <?php if(isset($node->field_ef_cms_system_rating['und'][0]['value'])): ?>
                  <h4><?php print t('Rating:'); ?></h4>
                  <div class="rating-wrapper">
                    <div><?php stars_rating($node->field_ef_cms_system_rating['und'][0]['value']); ?></div>
                    <span class="rating-legend"><?php print render($content['field_ef_cms_system_rating']); ?></span>
                  </div>
                  <?php endif; ?>
                  <?php if (isset($content['field_ef_fb_cms_system'])): ?>
                    <h4><?php print t('6.1. Any other feedback related to the question'); ?></h4>
                    <div><?php print render($content['field_ef_fb_cms_system']); ?></div>
                  <?php endif; ?>
                </div>
              </div>
            </li>
          <?php endif; ?>

          <?php if(isset($content['field_ef_any_other_feedback_ef'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('7. Any other feedback you would like to pass on to Eurofound?'); ?></h3>
                <?php if (isset($content['field_ef_any_other_feedback_ef'])): ?>
                <div>
                  <h4><?php print t('Any other feedback:'); ?></h4>
                  <div><?php print render($content['field_ef_any_other_feedback_ef']); ?></div>
                </div>
                <?php endif; ?>
              </div>
            </li>
          <?php endif; ?>


          <?php if(isset($node->field_ef_invoicing_policy_rating['und'][0]['value']) || isset($content['field_ef_fb_invoicing_policy'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('8. Clarity of Eurofound invoicing policy'); ?></h3>
                <div>
                  <?php if(isset($node->field_ef_invoicing_policy_rating['und'][0]['value'])): ?>
                  <h4><?php print t('Rating:'); ?></h4>
                  <div class="rating-wrapper">
                    <div><?php stars_rating($node->field_ef_invoicing_policy_rating['und'][0]['value']); ?></div>
                    <span class="rating-legend"><?php print render($content['field_ef_invoicing_policy_rating']); ?></span>
                  </div>
                  <?php endif; ?>
                  <?php if(isset($content['field_ef_fb_invoicing_policy'])): ?>
                    <h4><?php print t('8.1. Any other feedback related to the question'); ?></h4>
                    <div><?php print render($content['field_ef_fb_invoicing_policy']); ?></div>
                  <?php endif; ?>
                </div>
              </div>
            </li>
          <?php endif; ?>
          
          <?php if(isset($node->field_ef_ef_adherence_rating['und'][0]['value']) || isset($content['field_ef_fb_time_schedules'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('9. Eurofound’s adherence to time schedules'); ?></h3>
                <div>
                  <?php if(isset($node->field_ef_ef_adherence_rating['und'][0]['value'])): ?>
                  <h4><?php print t('Rating:'); ?></h4>
                  <div class="rating-wrapper">
                    <div><?php stars_rating($node->field_ef_ef_adherence_rating['und'][0]['value']); ?></div>
                    <span class="rating-legend"><?php print render($content['field_ef_ef_adherence_rating']); ?></span>
                  </div>
                  <?php endif; ?>
                  <?php if (isset($content['field_ef_fb_time_schedules'])): ?>
                    <h4><?php print t('9.1. Any other feedback related to the question'); ?></h4>
                    <div><?php print render($content['field_ef_fb_time_schedules']); ?></div>
                  <?php endif; ?>
                </div>
              </div>
            </li>
          <?php endif; ?>

          <?php if(isset($node->field_ef_yammer_rating['und'][0]['value']) || isset($content['field_ef_fb_yammer'])): ?>
            <li>
              <div class="subsection collapsed-on default">
                <h3 class="apr-accordion"><?php print t('10. Possibility to use Yammer for network related discussions'); ?></h3>
                <div>
                  <?php if(isset($node->field_ef_yammer_rating['und'][0]['value'])): ?>
                    <h4><?php print t('What do you think about Yammer and how do you use it?'); ?></h4>
                    <div><?php print render($content['field_ef_yammer_rating']); ?></div>
                  <?php endif; ?>
                  <?php if (isset($content['field_ef_fb_yammer'])): ?>
                    <h4><?php print t('10.1. Any other feedback related to the question'); ?></h4>
                    <div><?php print render($content['field_ef_fb_yammer']); ?></div>
                  <?php endif; ?>
                </div>
              </div>
            </li>
          <?php endif; ?>

          </ul>
          <div class="go-back-span">
              <span class="go-back-up"><a href="#additional-information"><i class="fa fa-angle-up"></i></a></span>
              <span class="go-back-index"><a href="#apr-index"><i class="fa fa-angle-double-up"></i></a></span>
          </div>
        </div>
      </div>
      <?php endif; ?>
      <!-- end ADDITIONAL INFORMATION -->

      <!-- ATTACHED FILES -->
      <?php if(isset($content['field_ef_apr_documents'])): ?>
        <div id="apr-attached-files" class="row">
          <div class="section">
            <h2><?php print t('Attached files'); ?></h2>
            <ul class="apr-document-list no-bullet">
            <?php foreach ($content['field_ef_apr_documents']['#items'] as $key => $file): ?>
              <li><a href="<?php print file_create_url($file['uri']); ?>"><?php print $file['filename']; ?></a></li>
            <?php endforeach; ?>
            </ul>
            <div class="go-back-span">
              <span class="go-back-up"><a href="#apr-attached-files"><i class="fa fa-angle-up"></i></a></span>
              <span class="go-back-index"><a href="#apr-index"><i class="fa fa-angle-double-up"></i></a></span>
            </div>
          </div>
        </div>
      <?php endif; ?>
      <!-- end ATTACHED FILES -->

      <!-- RATINGS -->
      <?php if (in_array('Quality Manager', $user->roles) && (isset($content['qrr'])) ): ?>
        <div id="apr-quality-ratings" class="row">
          <div class="section">
            <h2><?php print t('Quality Assessment'); ?></h2>
            <?php print render($content['qrr']); ?>
            <div class="go-back-span">
              <span class="go-back-up"><a href="#apr-quality-ratings"><i class="fa fa-angle-up"></i></a></span>
              <span class="go-back-index"><a href="#apr-index"><i class="fa fa-angle-double-up"></i></a></span>
            </div>
          </div>
        </div>
      <?php endif; ?>
      <!-- end RATINGS -->

    </div>
    <!-- end RIGHT-CONTENT -->

  </div>
  <?php else: ?>
  <div id="apr-empty-content">
    <i class="fa fa-pencil-square-o"></i>
    <p>This Annual progress report is still empty</p>
    <p>It should be filled in by an Author</p>
  </div>
  <?php endif; ?>
  <!-- end FIELD CONTENT -->


</article>

<?php
/*
 * FUNCTIONS
 */

function methods_rating($rate){

  $rating_array = array(
    1 => 'not relevant at all',
    2 => 'not relevant',
    3 => 'regular',
    4 => 'meaningful',
    5 => 'very meaningful'
  );

  print '<div class="methods-rating-view"><span>Not relevant at all</span>';
  print '<ul class="rating-list inline-list">';
  foreach ($rating_array as $key => $value) {

    print '<li>';
    if ($key <= $rate) {
      print '<i class="fa fa-square"></i>';
    } else {
      print '<i class="fa fa-square-o"></i>';
    }
    print '</li>';
  }
  print '</ul>';
  print '<span>Very meaningful</span></div>';

}

function stars_rating($rate){

  $rating_array = array(
    5 => 'very satisfied',
    4 => 'satisfied',
    3 => 'regular',
    2 => 'disappointed',
    1 => 'very disappointed'
  );

  print '<ul class="rating-list inline-list">';
  foreach ($rating_array as $key => $value) {

    print '<li>';
    if ($key < $rate) {
      print '<i class="fa fa-star-o"></i>';
    } else {
      print '<i class="fa fa-star"></i>';
    }
    print '</li>';
  }
  print '</ul>';

}
function exists_other_area($items){
  //$content['field_ef_network_tend_main_area']['#items']
  $exists = false;
  foreach ($items as $key => $value) {
    if($value['value'] == '6 '){
      $exists = TRUE;
      break;
    }
  }
  return $exists;
}

function check_content($content, $section) {

  switch ($section) {

    case 'deliverables':

      $sc_fields = get_field_suffix_description('sc');
      $gc_fields = get_field_suffix_description('gc');
      
      foreach ($sc_fields as $field_name) {
        if (isset($content[$field_name])) {
          $is_this = true;
        }
      }

      foreach ($gc_fields as $field_name) {
        if (isset($content[$field_name])) {
          $is_this = true;
        }
      }
      
      break;

    case 'promoting':

      if ( isset($content['field_ef_reports_webpage_descrip']) || isset($content['field_ef_reports_webpage_details'])
        || isset($content['field_ef_sharing_ef_res_descrip']) || isset($content['field_ef_sharing_ef_res_details'])
        || isset($content['field_ef_mentioning_task_descrip']) || isset($content['field_ef_mentioning_task_details'])
        || isset($content['field_ef_promoting_ef_re_descri']) || isset($content['field_ef_promoting_ef_re_details']) )
      {
        $is_this = true;
      } else {
        $is_this = false;
      }

      break;

    case 'working':

      if ( isset($content['field_ef_workmeth_short_summary']) || isset($content['field_ef_working_methods_diff'])
        || isset($content['field_ef_working_methods_impro']) || isset($content['field_ef_working_methods_rating'])
        || isset($content['field_ef_working_methods_extinfo']) )
      {
        $is_this = true;
      } else {
        $is_this = false;
      }

      break;

    case 'additional':

      if ( isset($content['field_ef_general_kind_access']) || isset($content['field_ef_related_acess'])
        || isset($content['field_ef_fb_access']) || isset($content['field_ef_general_kind_useful'])
        || isset($content['field_ef_related_deliv_useful']) || isset($content['field_ef_fb_useful'])
        || isset($content['field_ef_support_admin_rating']) || isset($content['field_ef_fb_support_admin'])
        || isset($content['field_ef_support_deliver_rating']) || isset($content['field_ef_fb_support_deliverables'])
        || isset($content['field_ef_invoicing_policy_rating']) || isset($content['field_ef_fb_invoicing_policy'])
        || isset($content['field_ef_ef_adherence_rating']) || isset($content['field_ef_fb_time_schedules'])
        || isset($content['field_ef_yammer_rating']) || isset($content['field_ef_fb_yammer'])
        || isset($content['field_ef_cms_system_rating']) || isset($content['field_ef_fb_cms_system'])
        || isset($content['field_ef_any_other_feedback_ef']) || isset($content['field_ef_network_tender']) )
      {
        $is_this = true;
      } else {
        $is_this = false;

      break;
    }

  }

  return $is_this;
}
?>

