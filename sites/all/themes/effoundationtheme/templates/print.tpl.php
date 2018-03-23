<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>" >
  <head>
	<!--<?php print $head; ?>-->
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php //print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel="shortcut icon" href="<?php print theme_get_setting('favicon') ?>" type="image/x-icon" />
    <?php endif; ?>
    <?php //print $css; ?>

<?php   $section = $_GET["section"];
 if ($section == 1): ?>
  <style>
  .content-living-working, 
  .content-working-life, 
  h1.title, 
  a.print-pdf, 
  .intro-text{
    display: none !important;
  }
  </style>
<?php endif ?>


<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/effoundationtheme.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/ef.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/fonts/font-awesome/css/font-awesome.min.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/templates-style.css" />
<link rel="stylesheet" type="text/css" href="/sites//all/themes/effoundationtheme/css/view_styles/erm_regulation_view.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/view_styles/case_studies_view.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/responsive.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/print-browser.css" media="all"  />
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
<script type = "text/javascript" src="/sites/all/themes/effoundationtheme/js/print.js"></script>


<!-- Print css stylesheet for contents comparision page  -->
<?php 
  session_start();
 if(strpos($_SESSION["back_search"],'/support-instrument') == true || 
    strpos($_SESSION["back_search"],'/legislation') == true || 
    strpos($_SESSION["back_search"],'/restructuring-case-studies') == true 
    ){
     print '<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/contents_comparision_print.css" media="all"  />';
  }
?>


  </head>
  <body>
    <?php if (!empty($message)): ?>
      <div class="message"><?php print $message; ?></div><p />
    <?php endif; ?>
    <?php if ($print_logo): ?>
     <div class="logo"><?php print $print_logo; ?></div>
    <?php endif; ?>
    <!--<div class="site_name"><?php print theme('print_published'); ?></div>-->
    <!--<div class="breadcrumbs"><?php // print theme('print_breadcrumb', array('node' => $node)); ?></div> -->

    <?php
      $resultado = substr($_SERVER['REQUEST_URI'], 6);
    if (strpos($resultado,'?') == true) {
        $contPdf='&';
    }else{
      $contPdf='?';
    }

    ?>
    <ul  class="print-preview">
    <li><a href="#" title="Print this page." onclick="window.print(); return false" class="print-page" >
    <img class="print-icon" typeof="foaf:Image" src="/sites/all/modules/contrib/print/icons/print_icon.png" width="16px" height="16px" alt="print icon" ></a>
    </li>
    <li class="activarPdf"><a href="<?php echo "http://".$_SERVER['HTTP_HOST'] ."/printpdf".substr($_SERVER['REQUEST_URI'], 6).$contPdf."pdf=".rand() ?>" title="Download PDF file" class="print-pdf">
    <img class="print-icon" typeof="foaf:Image" src="http://www.eurofound.europa.eu/sites/all/modules/contrib/print/icons/pdf_icon.png" width="16px" height="16px" alt="pdf icon"></a>
    </li>
  </ul>

  <div class="content">

  <!-- Print cover PDF for support instruments, case studies and legilations-->
  <?php 
     

      if(strpos($_SESSION["back_search"],'/support-instrument') == true && strpos($_SERVER['REQUEST_URI'],'/restructuring-support-instruments/') == true  ){
        print '<div class="cover-print"><img src="/sites/all/themes/effoundationtheme/images/cover-pdf-support-instrument.png">';
        print '<h1 class="title-cover">Restructuring support instruments</h1>';
        print '<p class="description-cover">Eurofound’s ERM database on support instruments for restructuring provides information on about 400 measures in the Member States of the European Union and Norway. National governments, employers’ organisations and trade unions are among the bodies providing support for companies that need to restructure and the affected employees.</p>';
        print '<p class="disclaimer-cover">Disclaimer: This document has not been subject to the full Eurofound evaluation, editorial and publication process.</p>';
        print '<p class="print-date-cover">' . date("d \ F \ Y") .'</p>';
        print '</div>';
        print '<div class="page-break"></div>';
      }elseif (strpos($_SESSION["back_search"],'/legislation') == true &&  strpos($_SERVER['REQUEST_URI'],'/restructuring-related-legislation/') == true) {
        print '<div class="cover-print"><img src="/sites/all/themes/effoundationtheme/images/cover-pdf-support-instrument.png">';
        print '<h1 class="title-cover">Restructuring related legislation</h1>';
        print '<p class="description-cover">Eurofound’s ERM database on restructuring related legal regulations provides information on regulations in the Member States of the European Union and Norway which are explicitly or implicitly linked to anticipating and managing change. The database covers statutory rules, only, and does not include collective agreements or company-level initiatives. The regulations are described in terms of their content, thresholds, involved actors and who covers the cost (if applicable). The aim is to provide an easy possibility of a cross-national comparison of the main features of restructuring related legislation.</p>';
        print '<p class="disclaimer-cover">Disclaimer: This document has not been subject to the full Eurofound evaluation, editorial and publication process.</p>';
        print '<p class="print-date-cover">' . date("d \ F \ Y") .'</p>';
        print '</div>';
        print '<div class="page-break"></div>';
      }elseif (strpos($_SESSION["back_search"],'/restructuring-case-studies') == true && strpos($_SERVER['REQUEST_URI'],'/restructuring-case-studies/') == true  ) {
        print '<div class="cover-print"><img src="/sites/all/themes/effoundationtheme/images/cover-pdf-support-instrument.png">';
        print '<h1 class="title-cover">Restructuring case studies</h1>';
        print '<p class="description-cover">The restructuring case studies provide examples of how private sector and public sector employers anticipate and manage restructuring. Such restructuring can occur for many reasons and can take different forms, from business expansion to the closure of the the firm. The case studies illustrate the planning and implementation processes of organisational change as well as their outcomes. The aim is to inform governments, social partners, employers and others involved about how restructuring has been realised in European organisations and what lessons can be learned from these experiences.</p>';
        print '<p class="print-date-cover">' . date("d \ F \ Y") .'</p>';
        print '</div>'; 
        print '<div class="page-break"></div>';    
      }else{
        //print '<h1 id="page-title" class="title">' . print $print_title . '</h1>';
      }
  ?>
  <!-- End  Print cover PDF for support instruments, case studies and legilations -->
 
  <?php print $content; ?>
  </div>
    <p class="print-source_url">
     <?php if ($node->type=='ef_national_contribution' || $node->type=='ef_comparative_analytical_report'): ?>
      <?php print theme('print_sourceurl', array('url' => 'http://www.eurofound.europa.eu/', 'node' => $node, 'cid' => $cid)); ?>
    <?php else : ?>
      <?php print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?>
    <?php endif; ?>
  </p>
  <p class="print-date"><?php print date('d \ F \ Y'); ?></p>

  </body>
</html>
