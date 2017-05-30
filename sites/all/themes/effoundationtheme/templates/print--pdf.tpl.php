
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>" >
  <head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <!--<?php //print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel="shortcut icon" href="<?php print theme_get_setting('favicon') ?>" type="image/x-icon" />
    <?php endif; ?>
    <?php //print $css; ?>-->
<link rel="stylesheet" type="text/css" href="http://www.eurofound.europa.eu/sites/all/themes/effoundationtheme/fonts/font-awesome/css/font-awesome.min.css" />
<link rel="stylesheet" type="text/css" href="/sites/all/themes/effoundationtheme/css/print-pdf.css" media="all"  />

<style type="text/css">
 @font-face {
  font-family: 'OpenSans-Regular-webfont';
  src: url('../fonts/OpenSans-Regular-webfont.eot');
  src: url('../fonts/OpenSans-Regular-webfont.eot?#iefix') format('embedded-opentype'), local('OpenSans-Regular-webfont'), local('OpenSans-Regular-webfont'), url('../fonts/OpenSans-Regular-webfont.ttf') format('truetype'), url('../fonts/OpenSans-Regular-webfont.woff') format('woff'), url('../fonts/OpenSans-Regular-webfont.svg') format('svg');
}
/*
.row {
  width: 100% !important;
  float: none !important;
}*/
#logo{
  display:block;
  width:3.5cm ;
}
.clear{
  clear: both!important;
}
.abstract{
  font-style: italic !important;
  line-height: 1.3em !important;
  color: #222 !important;
}
p, p span{
page-break-inside: avoid;
font-size: 10px !important;
}
ul li{
  page-break-inside: avoid;
  color: #000 !important;
}
a{
    text-decoration: underline !important;
    color: #000 !important;
}
.breadcrumbs a{
   text-decoration: none !important;
}
strong, h1, h2, h3, h4, h5, h6{
  color: #000 !important;
}
em{
    font-size: 1em !important;
    font-style: italic !important;
}
em:before, em:after{
content: "´"
}
hr{
    border: 0;
    height: 1px;
    background: #ccc;
    margin-top: 1cm !important;
}
embed, img, object {
    max-width: 100% !important;
    height: auto !important;
}
.columns{
font-weight: normal !important;
font-style: normal !important;
font-family: Arial,Helvetica,sans-serif !important;
 }
  #node_ef_publication_print_group_ef_node_details{
 width:100%;
  }
 #node_ef_publication_print_group_ef_node_details .field{
  padding-left: 30%!important;
  line-height: 1.1em !important;
  overflow: hidden !important;
  text-align: left !important;
  margin: 1em 0 !important;
}
#node_ef_publication_print_group_ef_node_details .label-inline{
  font-family: 'OpenSans-Semibold-webfont',Arial,Helvetica,sans-serif !important;
  float: left!important;
  width: 37% !important;
  margin-left:-40% !important;
}
#node_ef_publication_print_group_ef_node_details a{
  margin-right:10px !important;
}
.section-container.vertical-tabs>section>.content p.subtitle{ display: none !important;}
.group-node-tagging h3, .md_about{display: none !important;}
.group-node-about {
    float: right !important;
    width: 33% !important;
    margin: 0px 0px 4% 4% !important;
    padding: 5px !important;
    font-size: 0.9em !important;
}
.group-node-about .field {
    border-bottom: 1px dotted #CCCCCC;
    padding:5px 0 !important;
    overflow: hidden;
    text-align: left;
    padding-left: 32% !important;
}
.group-node-about .label-inline {
    float: left;
    font-family: 'OpenSans-Semibold-webfont',Arial,Helvetica,sans-serif;
    margin-left: -45%;
    width: 45%;
}

.ds-node-metadata {
  font-size: 0.8em!important;
  padding:0 !important;
  margin:1em 0 !important;
  width: 100% !important;
  clear: both !important;
  padding-left:6cm;
}
.ds-node-metadata .field  {
  clear: both !important;
  margin-bottom:0.5em !important;
  margin-left:-6cm;
  display: none!important;;
}
.ds-node-metadata .field-name-published-on {
    display: block !important;
}
.ds-node-metadata .field div.label-inline, .ds-node-metadata .field div.field-label,
.ds-node-metadata .field div.label-above{
border-bottom: 1px dotted #ccc;
float: left;
}
.ds-node-metadata .field a, .ds-node-metadata .field span.date-display-single{
  margin-left:6cm;
  display: block;
}
.ds-node-metadata .field-name-ds-submission-date, .ds-node-metadata .field-name-published-on, .ds-node-metadata  .field-name-field-ef-assign-to,
.ds-node-metadata .field-name-field-ef-organised-by{
    padding-left:6cm;
    display: block;
}
.ds-node-metadata .field-name-ds-submission-date div.label-inline, .ds-node-metadata .field-name-published-on div.label-inline,
.ds-node-metadata  .field-name-field-ef-assign-to div.label-inline, .ds-node-metadata .field div.field-label{
    margin-left:-6cm;
    display: block;
}
.field.field-name-published-on.field-type-ds{
   padding-left:0cm;
  border-bottom: 1px dotted #ccc;
}
.ds-node-sub-header .field-name-field-ef-event-start-date, .ds-node-sub-header .field-name-field-ef-event-end-date{
  display: inline-block !important;
  width: 3cm;
  font-size: 0.8em;

}


ul.metadata-items,  ul.inline-list {
  font-size: 0.8em!important;
  padding:0 !important;
  margin:0 !important;
}
ul.list-metadata {
    font-size: 0.8em!important;
    margin: 1rem 0 2rem 0 !important;
    padding:0 !important;
}
ul.metadata-items li, ul.inline-list li, ul.list-metadata li{
  padding:0!important;
  display:inline;
}
ul.metadata-items li:after, ul.inline-list li:after{
  content: " | ";
}
ul.metadata-items li:last-child:after, ul.inline-list li:last-child:after{
  content: ".";
}
ul.list-metadata li > ul {
    font-weight: normal;
    display: inline !important;
    margin: 0 !important;
    padding-left: 0 !important;
}
.views-row{
  float: none !important;
  width: 100% !important;
}
.view-id-case_studies_emcc  .views-row {
 /* border: 1px solid #F0F;*/
}
.view-id-case_studies_emcc div.views-field span.field-content{
  /*  clear: both !important;
  width: 100% !important !important;
 display: block!important;
page-break-inside: avoid;*/
}
h3.case-study-title{
border-bottom: 1px dotted #ccc;
color: #000 !important;
margin-top:0.8cm !important;
clear: both !important;

}
 h3.views-field-title{
border-bottom: 1px dotted #ccc;
color: #000 !important;
margin-top:0 !important;
clear: both !important;
}
li.-field-ef-main-image-1 {
border-bottom: 1px dotted #ccc;
}

.-field-ef-main-image-1 .views-field-title a{
color: #000 !important;
display: block !important;
font-size: 1.3m !important;
clear: both !important;
}
.-field-ef-main-image-1  .views-field-nid-1{
  font-size:0.95em !important;
  font-style: italic!important;
  display: block;
}
.case-study-subtitle{
  font-size: 0.8em !important;
}
.case-study-subtitle .cs-name {
  float: none!important;
  width:30% !important;
  margin: 0.2cm 0 0.2cm 0 !important;
}
.case-study-subtitle .columns.text-right{
  width: 100%;
  text-align: right;
  position: relative;
  top: -0.55cm;
  right: 0.5cm;
}
.fa-calendar:before, .fa-globe:before, .fa-users:before, .fa-tag:before, .fa-comments:before, .fa-rocket:before,
.fa-thumbs-o-up:before, .fa-thumbs-o-down:before{
  content: " " !important;
}
.case-study-location-size{
width: 100%;
float: none !important;
display: block;
border-radius: 3px;
margin: 0.2cm 0;
background: #f2f2f2;
padding:0.5em;
font-size: 1.3em;
}
.case-study-location, .case-study-size{
width: 100%;
float: none !important;
}

.case-study-location ul, .case-study-size ul{
  list-style-type: none;
  display: inline;
  font-size: 0.7em !important;
}
.case-study-location ul li:after, .case-study-size ul li:after{
  content: " ";
}
.case-study-location ul li, .case-study-size ul li{
  display: inline;
  width: 50% !important;
  color: #000;
}
.case-study-location ul li p, .case-study-size ul li p{
  display: inline;
  width: 50% !important;
  color: #000 !important;
}

.case-study-location ul + li, .case-study-size ul + li, .case-study-location ul li i, .case-study-size ul li i{
  display: none;
}

.case-study-features ul.cs-features-list-left, .case-study-features ul.cs-features-list-right{
width:45%!important;
min-height: 2cm;
list-style-type: none;
display: inline-block !important;
border: 1px dotted #ccc;
border-radius: 3px;
margin:0.5cm 0.2cm !important;
padding: 0.2cm;
page-break-inside: avoid;
}

.case-study-features ul.cs-features-list-left li, .case-study-features ul.cs-features-list-right li {
display: inline;
}
.case-study-features ul.cs-features-list-left li > span, .case-study-features ul.cs-features-list-right li > span{
  font-weight: bold;
}
.case-study-features ul.cs-features-list-left li > p, .case-study-features ul.cs-features-list-right li > p{
  font-size: 0.7em;
}
.cs-keywords{
  width:16cm !important;
clear: both !important;
display: none;
}
.cs-keywords:after{

  }
.erm-content{
  margin: 0!important;
}
.erm-country {
  margin-top: 0.5cm;
}
.erm-titles{
  margin-top: 0.5cm !important;
}
.erm-nat-title h2 .field-type-text-long, .erm-en-title  h2 .field-type-text-long{
font-size:10px !important;
}
.erm-nat-title span, .erm-en-title  span, .erm-phase span, .erm-type span{
font-weight: bold !important;
}
.erm-phase, .erm-type, .erm-edit-date{
  font-size: 0.8em;
}
.erm-phase, .erm-type{
  padding-left: 30%;
  display: inline;
}
.erm-type div{
    display: inline;
 }
.erm-phase span, .erm-type span{
  margin-left:-30%;
  display: inline;
}
.erm-features{
margin: 0;
}
.qtip, .erm-reg-cost-covered-by-notes{
display: none;
}
.erm-sources{
float: none !important;

}
.erm-features .large-4 {
    float: none!important;
    width:100% !important;
}
h3.erm-content-title{
  margin-top: 1cm;
  background: #f2f2f2;
}
.erm-features  h5{
  font-size: 10px !important;
  font-weight: bold!important;
  border-bottom: 1px dotted #ccc;
}
 .node-ef-erm-regulation  h5{
  font-size: 10px !important;
  font-weight: bold!important;
  border-bottom: 1px dotted #ccc;
}
.node-ef-erm-regulation  h6{
  font-size: 10px !important;
  font-weight: bold !important;
  color: #000;
  border-bottom: 1px dotted #ccc;
}
.erm-reg-thresholds-item label, .erm-reg-thresholds-item div{
  display: inline;
}
.fs_indoor{

}
.fs_indoor span.small-3.columns{
  font-weight: bold !important;
  margin-left:2cm;
}
.fs_indoor .fs_data.plus, .fs_indoor .fs_data.pro{
  margin-left:2cm;
}
.ef_fs_source span.small-3.columns{
  display: inline-block;
 width:3cm;
}
.fs_indoor .fs_data .fs_col_date{
display: inline-block;
width:3cm;
}
.fs_indoor .fs_data .fs_col_name{
display: inline-block;
width: 20%;
}

.field.field-name-field-type-erm-si li{
  list-style-type: none;
margin-top: -0.65cm;
margin-left: 2cm;
  width:60%;
  text-align: left;
}



.footer-pdf{
border-top:1px dotted #CCC;
font-size: 0.8em;
margin-top: 2cm;
position: absolute;
bottom: 0;
}
/*
.info ul{
  list-style-type: none !important;
  float: left !important;
  margin: 0 !important;
  padding: 0!important;
  width: 100%;

}
.info ul li.nc-lis{
  float: left !important;

}
*/
.ds-node-content{
font-size: 10px !important;
}

.view-item-metadata, .view-publ-date-type{
  font-size:9px !important;
}
blockquote{font-style: italic !important;}
p{
font-weight: normal !important;
font-style: normal !important;
 }
 h2{
font-size: 1.5em !important;
margin: 0.5em 0 !important;
 }
 h3{
font-family: 'OpenSans-light-webfont', Arial, Helvetica, sans-serif !important;
font-size: 1.3em !important;
margin: 0.5em 0 !important;
 }
h4{
font-size: 1.1em !important;
margin: 0.5em 0 !important;
 }
 #adminboardlist{
  display: none;
}
 table {
    margin: 1.5em auto !important;
    width:96% !important;
    font-size: 9px !important;
    border: 0 !important;
    border-bottom:1px solid #ccc !important;
}
th{
    border: 0 !important;
    width: auto !important;
    padding-left: 0.3cm !important;
}
td{
    border: 0 !important;
    font-size: 9px !important;
    border-bottom:1px solid #ccc !important;
    border-collapse: collapse !important;
}
table tr:last-child td{
  border-bottom:0px solid #ccc !important;
}
table.staff th{
  text-align: left !important;
}
table.staff td{
  border: 0 !important;
  border: none !important;
}
td ul{
  margin:0 !important;
}
td ul li{
  margin: 0 !important;
  padding: 0 !important;
  width: 100%!important;
}
.large-1 {
  width: 8.33333%;
   float: left !important;
}
.large-2 {
  width: 16.66667%;
   float: left !important;
}
.large-3 {
  width: 25%;
   float: left !important;
}
.large-4 {
  width: 30%;
   float: left !important;
}

.large-5 {
  width: 41.66667%;
   float: left !important;
}
.large-6 {
  width: 50%;
   float: left !important;
}
.large-7 {
  width: 58.33333%;
   float: right !important;
}
.large-8 {
  width: 66.66667%;
   float: right !important;
}
.large-9,  .large-10,  .large-11, .large-12{
width: 100% ;
padding: 0 ;
margin: 0 ;
}
.view-ef-publications-view .item-list ul{
 }
.view-ef-publications-view .item-list li {
  border-bottom: 1px dotted #666 !important;
  page-break-inside: avoid !important;
}
.view-ef-publications-view .item-list li > div.views-field {
    margin-left:3cm;
    width:80%!important;
}
.view-ef-publications-view  .pdfpreview-field_ef_document{
    margin-left:-3cm !important;
    width: 2cm;
}
.view-ef-publications-view  .pdfpreview-field_ef_document img {
    width: 2cm!important;
    height: auto!important;
    margin: 0.2cm !important;
    float: left !important;
}
.group-node-about {
  float: none;
  clear: both !important;
  width: 100%;
  margin: 2em 1em 1em 1em ;
  font-size: 0.9em;
  border: 1px solid #B6CBDE;
  padding: 10px;
}
/*
.group-ef-node-details .field {
  padding: 12px 0px!important;
  border-bottom: 1px dotted #ccc;
}*/
.filter-description-more, .view-id-erm_regulations .filter-description{
display: none !important;
}
.source-url-wrap{
word-break: break-all;
}

.view-content .item-list > ul li{
  margin: 0 !important;
  padding:1em 0!important;
}

 .print-source_url{
  width:73%!important;
  float: left!important;
 }
.print-date{
  width: 20%!important;
  float: right !important;
  font-style: italic !important;
  text-align: right !important;
}

/* topic landing page **/
.view-ef-key-topics-home {
  overflow: visible;
  width: 100%;
  float: none !important;
  clear: both;
  height: 12cm !important;
  overflow: auto !important;
}
.pane-ef-key-topics-home .key-topics-list, 
.view-ef-key-topics-home .key-topics-list {
  overflow: hidden;
  display: inline-block;
  position: relative;
  width: 5.1cm;
  height: 180px;
}
.view-ef-key-topics-home .key-topics-list p a:nth-child(1) img {
  position: static;
  position: initial;
}
.pane-ef-key-topics-home .key-topics-list p a.key-topic-name, 
.view-ef-key-topics-home .key-topics-list p a.key-topic-name {
  width: auto;
  height: auto;
  background: none;
  position: initial;
}
.landing-topics-item {
  page-break-inside:avoid; !important;
}


</style>
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
    <div class="columns">
    <h1 id="page-title" class="title"><?php print $print_title;?></h1>
      <?php
        $contentBefore = urlencode($content);
        $contentAfter = str_replace("%E2%80%8B", "", $contentBefore);
        //print $contentBefore;
        print urldecode($contentAfter);
      ?>
    <br class="clear">
    <div class="footer-pdf">
    <p class="print-source_url"><?php print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?></p>
    <p class="print-date"><?php print date('d \ F \ Y'); ?></p>
    </div>
  </div>

  </body>
</html>
