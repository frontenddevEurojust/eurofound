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


<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/effoundationtheme.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/ef.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/fonts/font-awesome/css/font-awesome.min.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/templates-style.css" />
<link rel="stylesheet" type="text/css" href="/sites//all/themes/effoundationtheme/css/view_styles/erm_regulation_view.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/view_styles/case_studies_view.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/responsive.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/print-browser.css" media="all"  />

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
  <h1 id="page-title" class="title"><?php print $print_title;?></h1>
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
