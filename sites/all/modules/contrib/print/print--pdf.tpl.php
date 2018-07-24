
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>" >
  <head>
  <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php //print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel="shortcut icon" href="<?php print theme_get_setting('favicon') ?>" type="image/x-icon" />
    <?php endif; ?>
    <?php //print $css; ?>
  


<!--<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/print-browser.css" media="all"  />-->

  </head>
  <body>
    <?php if (!empty($message)): ?>
      <div class="message"><?php print $message; ?></div><p />
    <?php endif; ?>
    <?php if ($print_logo): ?>
      <div class="logo"><?php print $print_logo; ?></div>
    <?php endif; ?>
    <!--<div class="site_name"><?php print theme('print_published'); ?></div>-->
    <div class="breadcrumbs"><?php print theme('print_breadcrumb', array('node' => $node)); ?></div>    
    <div class="content">
    <h1 id="page-title" class="title"><?php print $print_title;?></h1>
    <?php print $content; ?>
    </div>
    <p class="print-source_url"><?php print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?></p>
    <p class="print-date"><?php print date('d \ F \ Y'); ?></p>

  </body>
</html>
