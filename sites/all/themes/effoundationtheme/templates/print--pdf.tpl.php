
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
.page-list-wrapper, 
.back-erm-list-button-div, 
.ds-node-comments{
  display: none !important;
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
}



.footer-pdf{
border-top:1px dotted #CCC;
font-size: 0.8em;
margin-top: 2cm;
position: absolute;
bottom: 0;
}
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
    border-bottom:1px solid #FFF !important;
     border-collapse:unset !important;  
}
th{
    border: 0 !important;
    width: auto !important;
    padding-left: 0.3cm !important;
}
td{
    border: 0 !important;
    font-size: 9px !important;
    border-bottom:1px solid #FFF !important;
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
/** working life countri profile **/
.no-pdf, .node-type-ef-working-life-country-profiles h1#page-title{
  display: block !important;
}
.eurostat-result {
  background: #f2f2f2 !important;
  margin: 0;
  padding: 25px 20px !important;
  border: 1px solid #ccc;
  float: left;
  margin: 25px auto !important;
  width: 100% !important;
  clear: both !important;
}
.summary-living-working{
  float: none !important;
  width: 100% !important;
  clear: both !important;
}


.section-living-working section{
  clear: both;
}
.section-living-working section > .content{
  overflow:auto;
}
.section-container.vertical-tabs > section > .title {
  color: #005baa;
  width: 100% !important;
  font-size: 22px !important;
  border-right: 0px solid #CCC !important;
}
.section-living-working.section-container.vertical-tabs > section > .title p {
  margin-bottom: 0px !important;
}
.section-living-working h3.subtitle {
  font-size: 2rem; 
  margin:0;
  font-family: 'OpenSans-Semibold-webfont', Arial, Helvetica, sans-serif;
}
.section-living-working section{
  clear: both;
}
.section-living-working section > .content{
  overflow:auto;
}
.section-living-country>section>.content, 
.section-living-working>section>.content, 
.section-working-life-country-profile>section>.content{
  border:0 !important;
  margin: 0 !important;
  float: none !important;
  width: 100% !important;

}
.section-living-working.section-container.vertical-tabs > section > .title {
  position: static !important;
  font-size: 22px !important;
  font-family: OpenSans-semibold-webfont;
  margin-bottom: 0px !important;
  clear: both !important;
  border: none !important;
  width: 100%;
}

#content-tabs-living-working section .content{
  border:0 !important;
  margin: 0 !important;
  float: none !important;
  width: 100% !important;
  clear: both !important;
  overflow: auto !important;
}
#content-tabs-living-working  section  .title p {
  margin: 0 !important;
  font-size: 18px !important;
  border-bottom: 1px dotted #CCC;
}
#content-tabs-living-working  section  .title p i {
  color: #F58020;
  display: block !important;
  margin-right: 5px;
  font-size: 22px;
}
#content-tabs-living-working section .content .large-6.column, 
#content-tabs-living-working section .content .large-4.column{
  border:0 !important;
  margin: 0 !important;
  float: none !important;
  width: 100% !important;
  clear: both !important;
}
.content-living-country{
  float: none !important;
  overflow: auto !important;
}
.section-living-country>section p.subtitle, 
.section-living-working>section p.subtitle, 
.section-working-life-country-profile>section p.subtitle{
  font-size: 22px !important;
  margin-bottom: 15px;
  clear: both !important;
  border: 1px solid #000 !important;
}
.element-invisible, .print-pdf-wrapper, .print_pdf img, .print_html img {
  display: none !important;
}
.node-ef-working-life-country-profiles .wp_about h2{
   font-size: 12px !important;
}
.node-ef-working-life-country-profiles .wp_about ul, 
.node-ef-working-life-country-profiles .wp_about ul li {
  list-style-type: none;
  font-size: 10px !important;
}
.node-ef-working-life-country-profiles table{
  background: #ccc !important;
  width: 100% !important
}
.node-ef-working-life-country-profiles table tr{
  background: #f9f9f9 !important;
}
.node-ef-working-life-country-profiles table tr td{
  width: auto !important;
  padding:0 15px !important;
}
/** end working life countri profile **/

</style>

  <?php   $section = $_GET["section"];
   if ($section == 1): ?>
    <style>
    .content-living-working, 
    .content-working-life, 
    h1.title, 
    a.print-pdf{
      display: none !important;
    }
    .section-living-country>section>.content, 
    .section-living-working>section>.content, 
    .section-working-life-country-profile>section>.content{
      display: block !important;
      border: 0 !important;
      margin: 0 !important;
    }
    .section-living-country>section p.subtitle, 
    .section-living-working>section p.subtitle, 
    .section-working-life-country-profile>section p.subtitle{
      font-size: 22px !important;
      font-family: OpenSans-semibold-webfont;
      margin-bottom: 15px;
      clear: both !important;
    }
    .intro-text{
      display: none !important;
    }
    </style>
    <?php endif ?>

   <?php 
   if ($section == 2): ?>
    <style>
    .no-pdf, .node-type-ef-working-life-country-profiles h1#page-title{
      display: none !important;
    }
    .content-living-country, 
    .summary-living-working, 
    .intro-text{
      display: none !important;
    }
    .section-country .print-pdf-wrapper, 
    .print-pdf-wrapper{
      display: none !important;
    }
    </style>
    <?php endif ?>


  <!-- Print css stylesheet for contents comparision page  -->
  <?php if(strpos($_SERVER['REQUEST_URI'],'/restructuring-case-studies/') == true 
        || strpos($_SERVER['REQUEST_URI'],'/restructuring-related-legislation/') == true
        || strpos($_SERVER['REQUEST_URI'],'/restructuring-support-instruments/') == true): ?>
    <style>
      .cover-print{
        position: absolute !important;
        top: 0cm;
        left:0;
        width: 18cm !important;
        height: 27cm !important;
        display: block;
        z-index: 9;
        background: #FFF !important;
       
      }
      .page-break{
        page-break-before:always !important;
        background: #FFF !important;
      }
      .cover-print img{
        position: fixed;
        width: 92% !important;
        z-index: 9;
        left:-1cm;
        top: 1cm;
      }
      .title-cover{
        position: absolute;
        top:6cm;
        left: 30%;
        width: 65%;
        z-index: 10;
        font-size:26pt;
      }
      .subtitle-cover{
        position: absolute;
        top:8cm;
        left: 30%;
        width: 65%;
        z-index: 10;
        font-size:18pt;
      }
      .description-cover{
        position: absolute;
        top: 14cm;
        left: 30%;
        width: 60%;
        z-index: 10;
        font-size: 12pt;
      }
      .disclaimer-cover{
        position: absolute;
        border-top: 1px solid #666;
        padding-top: 5px !important;
        font-size: 8px !important;
        text-align: center !important;
        top:25.7cm;
        left: 0%;
        width: 100%;
        z-index: 10;
      }
      .print-date-cover{
        position: absolute;
        text-align: right !important;
        top: 25.2cm;
        left:12cm;
        width: 30% !important;
        display: block;
        z-index: 10;
      }
      .view-grouping-content > h3{ /*This the h2 in the previous view. We put the h2 by jQuery, here is h3*/
        font-family: 'OpenSans-Semibold-webfont', Arial, Helvetica, sans-serif !important;
        font-size: 1.8em !important;
      }
      .page-list-wrapper, 
      .back-erm-list-button-div,  
      .ds-node-comments, 
      .current-total{
        display: none !important;
      }
      .erm-content{
        margin: 0!important;
      }
      .erm-country {
        margin-top: 0.5cm !important;
        font-size: 1.6rem !important;
      }
      .erm-titles{
        margin-top: 0.2cm !important;
      }
      .erm-titles .row{
        margin: 0.2cm 0 !important;
      }
      
      .erm-nat-title h2 .field-type-text-long, .erm-en-title  h2 .field-type-text-long{
        font-size:8px !important;
        margin: 0px 0 0 0 !important;
        font-weight: normal !important;
      }
      
      .erm-phase, .erm-type, .erm-edit-date{
        font-size: 0.8em;
        margin-top: 10px !important;
      }
      .erm-phase, 
      .erm-type {
        text-align: left !important; 
      }
      .erm-info-label {
        margin: 5px 5px 0px 0 !important;
        display: block !important;
        font-weight: bold !important;
        padding-top: 10px!important;
      }
      .field.field-name-field-type-erm-si, 
      .field.field-name-field-type-phase-erm-reg {
        text-align: left;
        margin:  2px 5px 0px 0 !important;
        padding: 0 !important;
        display: block !important;
      }

      .erm-phase{
        padding-bottom: 20px !important;
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

      .view-grouping .view-grouping-header{
        display: none !important;
      }


      .statistics_counter{
        display: none !important;
      }

      .field-name-field-ef-document{
        display: none !important;
      }

      .view-restructuring-case-studies .pub-pdf-img {
          margin-top: 25px !important;
          max-width: 25% !important;
      }

    </style>  
    <!-- CASE STUDIES -->
    
    
    <style>
    
    .cs-country ul li{
      font-size: 12pt!important;
    }

    .case-study-subtitle.row{
      padding-top: 2.5em!important;
      padding-bottom: 0!important;
      margin-bottom: 0!important;
      display: block!important;
    }

    .row.case-study-location-size{
      padding-top: 0!important;
      margin-top: 0!important;
    }

    .row.case-study-location-size{
      clear: both!important;
      float: none!important;
    } 
    .case-study-features.row{
      float: none!important;
      height: auto!important;
    }

    .column, .columns{
      float: none!important;
    }

    .cs-features-list-left li ul{
      text-align: left!important;
      padding-left: 0.5rem!important;
      margin-left: 0.5rem!important;
      padding-bottom: 0.5rem!important;
    }

    .cs-features-list-left li ul li{
      text-align: left!important;
      padding-left: 0rem!important;
      margin-left: 0rem!important;
    }

    .cs-features-list-right li ul{
      text-align: left!important;
      padding-left: 0.5rem!important;
      margin-left: 0.5rem!important;
      padding-bottom: 0.5rem!important;
    }

    .cs-features-list-right li ul li{
      text-align: left!important;
      padding-left: 0rem!important;
      margin-left: 0rem!important;
    }

    .cs-features-list-left.large-6.columns{
      width:100%!important;
      float: none!important;
      clear: both!important;
      height: auto!important;
      float: none !important;
    }

    .cs-features-list-right.large-6.columns{
      width:100%!important;
      clear: both!important;
      display: block!important;
      height: auto!important;
      float: none !important;
    }

    .column, .columns{
      float: none!important;
    }

    .cs-keywords{
      display: block!important;
      clear: both!important;
      float: none!important;
      height: auto!important;
      border:1px dotted #CCC!important;
      padding: 1em!important;
      margin-bottom: 1em!important;
      width:100%!important;
      margin-left: 5px!important;
      margin-right: 5px!important;
    }

    .cs-keywords ul{
      list-style: none;
      padding-left: 0.5rem!important;
      margin-left: 0.5rem!important;
    }

    .cs-keywords ul li{
      list-style: none;
      padding-left: 0!important;
      margin-left: 0!important;
    }

    </style>

  <?php endif ?>

  </head>
  <body>

    <?php if (!empty($message)): ?>
      <div class="message"><?php print $message; ?></div><p />
    <?php endif; ?>
    <?php if ($print_logo): ?>
      <?php if(strpos($_SERVER['REQUEST_URI'],'/restructuring-case-studies/') == true 
            || strpos($_SERVER['REQUEST_URI'],'/restructuring-related-legislation/') == true
            || strpos($_SERVER['REQUEST_URI'],'/restructuring-support-instruments/') == true): ?>
      <div class="logo"><?php print $print_logo; ?></div>
      <?php endif; ?>
    <?php endif; ?>
    <!--<div class="site_name"><?php print theme('print_published'); ?></div>-->
    <!--<div class="breadcrumbs"><?php // print theme('print_breadcrumb', array('node' => $node)); ?></div> -->
    <div class="columns">
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
        }elseif (strpos($_SESSION["back_search"],'/restructuring-case-studies') == true && strpos($_SERVER['REQUEST_URI'],'/observatories/emcc/erm/restructuring-case-studies/') == false  ) {
          print '<div class="cover-print"><img src="/sites/all/themes/effoundationtheme/images/cover-pdf-support-instrument.png">';
          print '<h1 class="title-cover">Restructuring case studies</h1>';
          print '<p class="description-cover">The restructuring case studies provide examples of how private sector and public sector employers anticipate and manage restructuring. Such restructuring can occur for many reasons and can take different forms, from business expansion to the closure of the the firm. The case studies illustrate the planning and implementation processes of organisational change as well as their outcomes. The aim is to inform governments, social partners, employers and others involved about how restructuring has been realised in European organisations and what lessons can be learned from these experiences.</p>';
          print '<p class="disclaimer-cover">Disclaimer: This document has not been subject to the full Eurofound evaluation, editorial and publication process.</p>';
          print '<p class="print-date-cover">' . date("d \ F \ Y") .'</p>';
          print '</div>'; 
          print '<div class="page-break"></div>';    
        }else{
          // print '<h1 id="page-title" class="title">' . print $print_title . '</h1>';
        }
    ?>
  <!-- End  Print cover PDF for support instruments, case studies and legilations -->


    <?php
       $url = explode('/', $_SERVER['REQUEST_URI']);
      $pathCountry = $url[count($url)-2];
    ?>
    <?php if ($pathCountry == 'country'): ?>
      <h1 id="page-title" class="title no-pdf"><?php print $print_title;?></h1>
    <?php else : ?>
            <?php if(strpos($_SERVER['REQUEST_URI'],'/restructuring-case-studies/') != true 
            || strpos($_SERVER['REQUEST_URI'],'/restructuring-related-legislation/') != true
            || strpos($_SERVER['REQUEST_URI'],'/restructuring-support-instruments/') != true): ?>
      <?php endif; ?>
    <?php endif; ?>

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
