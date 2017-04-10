<?php
/*********************************************************
* Eworx S.A. - 2013 - 2014
* @Author kp@eworx.gr, som@eworx.gr
* CWB time series view override template
* Gathers data from drupal, intergrates with DVS
**********************************************************/
//drupal_add_js('/DVS/DVT/scripts/3rd/jquery-1.8.3.min.js');

$assetsPath = drupal_get_path('module', 'dvscwb') . "/theme";
drupal_add_js($assetsPath . '/scripts/extend.js');
drupal_add_css($assetsPath . '/css/cwb.css');


drupal_add_css($assetsPath . '/css/views/outcomes.css');
drupal_add_css($assetsPath . '/css/views/context.css');
//dependencies
drupal_add_js($assetsPath . '/scripts/3rd/tipped/tipped.js');
drupal_add_css($assetsPath . '/css/3rd/tipped/tipped.css');


//view specific
drupal_add_js($assetsPath . '/scripts/views/outcomes-year-filter.js');
drupal_add_js($assetsPath . '/scripts/views/outcomes.js');

//tablsorter
drupal_add_js($assetsPath . '/scripts/3rd/tablesorter/jquery.tablesorter.min.js');
drupal_add_js($assetsPath . '/scripts/3rd/tablesorter/jquery.metadata.js');
drupal_add_css($assetsPath . '/scripts/3rd/tablesorter/themes/green/style.css');

drupal_add_js($assetsPath . '/scripts/views/contains-sortable-table.js');

//svg
drupal_add_js($assetsPath . '/scripts/dvs/svg-initialization.js');
drupal_add_js($assetsPath . '/scripts/dvs/svg-enhancement.js');
drupal_add_js('/DVS/DVT/scripts/svgMaskMap.js');

drupal_add_js($assetsPath . '/scripts/dvs/outcomes-country-tooltips.js');
drupal_add_js($assetsPath . '/scripts/dvs/table-to-csv-download.js');


//DVT borrow

//drupal_add_css('/web-pub/foundation/html/DVS/DVT/css/screen.EF.css') ;
//drupal_add_css('/web-pub/foundation/html/DVS/DVT/css/common.css') ;


/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
//kprint_r($view);
?>
<script>jQuery(document).ready(function($) {jQuery("body").addClass("page-outcomes");});</script>

<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php

  if ($rows): ?>
      <div class="view-content">
 
<?php
  if(!  (!isSet($_GET["field_variables_tid"]) || !is_numeric($_GET["field_variables_tid"])) &&!(!isSet($_GET["year"]) || !is_numeric($_GET["year"])) ){

    $variables = array($_GET["field_variables_tid"]);

    $visualizationID = getUniqueOutcomesMapVisualisationIdentifier($view, $variables);
    $visualizationLocation = getOutcomesMapLocationDataSource($visualizationID);
    $visualizationIDExists = file_exists($visualizationLocation); //looks as if it is not working
    
    $tableData = $view -> tableData;
	  $tableData = emptyNonNumericalRowsForColumns($tableData, array("CAPNP","CAPRP"));

    writeArrayTableToCSV($visualizationLocation, $tableData);

    $tableData = removeColumnsFromArray($tableData, array('Year'));

    $theSector = $view->result[0]->field_field_sector[0]['rendered']['#markup'];
    $theScope = $view->result[0]->field_field_scope_employee[0]['rendered']['#markup'];
    $theVariable = taxonomy_term_load($_GET["field_variables_tid"]);
    $theVariable = $theVariable->name;
    $theVariable = str_replace("[CAPNP]", "", "$theVariable");    
    $theVariable = str_replace("[CAPRP]", "", "$theVariable");
    $theVariable = str_replace(" (", ", ", "$theVariable");
    $theVariable = str_replace(")", "", "$theVariable");
    
?>
<h3><?php echo $_GET["year"] . " > " . $theSector . " > ". $theScope ." > " . $theVariable ;?></h3>

<?php //////////////////////////////////////////////////////////////////////////////// ?>
<?php $assetsPath = drupal_get_path('module', 'dvscwb') . "/theme"; include "$assetsPath/img/loading-animation.svg"; ?> 
<?php //////////////////////////////////////////////////////////////////////////////// ?>

  <section class="cwb_visualization">
    <img id="visualization" width="100%" src="/DVS/render/?plot=cwbOutcomesMap&queryString=<?php print $visualizationID;?>&media=png&width=740" />


  </section>
  <section class="svg_cwb_visualization">   
    <div id="svgContainer" class="hidden">
    </div>

  </section>    

  <section id="exportSection">
    <h3>Export</h3>
    <div class="exportOptions">      
      <a href="/DVS/render/?plot=cwbOutcomesMap&queryString=<?php print $visualizationID;?>&media=png&width=740" id="pngExport" class="exportAction proxyAble" target="_blank" >Figure (PNG)</a>
      <a href="/DVS/render/?plot=cwbOutcomesMap&queryString=<?php print $visualizationID;?>&media=svg&width=740" id="svgExport" class="exportAction proxyAble" target="_blank">SVG</a>
      <a href="javascript:" id="csvExport" class="exportAction proxyAble" target="_blank">Data</a>
      <a href="/DVS/render/?plot=cwbOutcomesMap&queryString=<?php print $visualizationID;?>&media=eps&width=740" id="epsExport" class="exportAction proxyAble" target="_blank">EPS</a>
      <a href="/DVS/render/?plot=cwbOutcomesMap&queryString=<?php print $visualizationID;?>&media=pdf&width=740" id="pdfExport" class="exportAction proxyAble" target="_blank">PDF</a>
    </div>
  </section> 

  <a href="sources" class="dataSource metaData">This information comes from various sources</a>

<?php

    $outputHtmlTable = convertArrayTableToHtmlTable($tableData);
    print $outputHtmlTable;//$rows; 
  }

?>


    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>

