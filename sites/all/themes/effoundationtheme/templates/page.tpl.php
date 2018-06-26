<!--.page -->

<script type="text/javascript">
  (function ($) {
    $(document).ready(function() {
      if ($('.node .ds-node-languages ul.links li a.language-link').length || $('.node-type-dvs-survey ul.links li a.language-link').length ) {
        var translations_title ='<?php print t("This item is available in other languages"); ?>';
        var translations_title1 ='<?php print t("This item is available in other languages"); ?>';
        $('.node .ds-node-languages ul.links').after("<span class='translations-title'>" + translations_title1 + ":</span><ul class='translations'></ul>");
        $('.node-type-dvs-survey ul.links').last().after("<span class='translations-title'>" + translations_title + ":</span><ul class='translations'></ul>");

        $ul_translations = $('.node ul.translations');

        $('.node-type-dvs-survey ul.links li a.language-link').each(function () {
            $ul_translations.append($(this).parent());
        });

        $('.node .ds-node-languages ul.links li a.language-link').each(function () {
            $ul_translations.append($(this).parent());
        });

        $('ul.translations li a').each(function() {
            $(this).html($(this).attr('xml:lang').toUpperCase());
        });

        var index = $('body').attr('class').indexOf('lang-');
        var current_language = $('body').attr('class').substring(index + 5, index + 8);
        $('ul.translations').prepend('<li class="' + current_language + ' current"><a lang="' + current_language + '" class="language-link">' + current_language.toUpperCase() + '</a></li>');
       }
    });
  })(jQuery);
</script>

<?php

  // Variable definitions
  global $base_url;
  // constante for the legend logo
  define("logo_text","European Foundation for the Improvement of Living and Working Conditions");

?>

<div role="document" class="page">

  <!--.l-header region -->
  <header role="banner" class="l-header">



    <!-- Title, slogan and menu -->
    <?php if ($alt_header): ?>
    <div class="<?php //print $alt_header_classes; ?>">

      <section class="ef-top row">
        <div class="ef-logo-title large-8 columns">
          <?php if ($logo): ?>
          <div class="large-5 columns">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="ef-logo-img" rel="home" id="logo">
              <img src="<?php print $logo; ?>" alt="<?php print t(logo_text); ?>" width="150" height="86" />
            </a>
            <p class="ef-tagline-logo"><?php print t(logo_text); ?></p>
          </div>
          <?php endif; ?>

          <?php
          $block = block_load('block', '25');
          $output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
          print $output;
          ?>


          <?php if ($site_name): ?>
            <?php if ($title): ?>
              <div id="site-name" class="element-invisible">
                <strong>
                  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
                </strong>
              </div>
            <?php else: /* Use h1 when the content title is empty */ ?>
              <h1 id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <h2 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h2>
          <?php endif; ?>
        </div>

        <div class="ef-top-links large-4 columns">
          <?php if (!empty($page['top-links'])): ?>
            <!--.top-links-region -->
              <?php print render($page['top-links']); ?>
          <?php endif; ?>
        </div>
        <div class="large-12 columns masquerade-region">
          <?php if (!empty($page['masquerade'])): ?>
              <?php print render($page['masquerade']); ?>
          <?php endif; ?>
        </div>
      </section>







      <section class="row row-main-menu">
        <?php if ($alt_main_menu): ?>
          <nav id="main-menu" class="navigation top-bar" role="navigation">
            <ul class="title-area">
              <li class="name">
                <a href="<?php print $front_page; ?>">Go to Eurofound Home</a>
              </li>
               <!-- Remove the class "menu-icon" to get rid of menu icon. Take out "Menu" to just have icon alone -->
              <li class="toggle-topbar menu-icon"><a href="#"><span>Skip to main menu</span></a></li>
            </ul>
            <section class="ef-navigation-menus row">
            <?php print ($alt_main_menu); ?>
            </section>
          </nav> <!-- /#main-menu -->
        <?php endif; ?>

        <?php if ($alt_secondary_menu): ?>
          <nav id="secondary-menu" class="navigation" role="navigation">
            <?php print $alt_secondary_menu; ?>
          </nav> <!-- /#secondary-menu -->
        <?php endif; ?>
      </section>

    </div>
    <?php endif; ?>
    <!-- End title, slogan and menu -->

    <?php if (!empty($page['header'])): ?>
      <!--.l-header-region -->
      <section class="l-header-region row">
        <div class="large-12 columns">
          <?php print render($page['header']); ?>
        </div>
      </section>
      <!--/.l-header-region -->
    <?php endif; ?>

  </header>
  <!--/.l-header -->

  <?php if (!empty($page['featured'])): ?>
    <!--/.featured -->
    <section class="l-featured row">
      <div class="large-12 columns">
        <?php print render($page['featured']); ?>
      </div>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--/.l-messages -->
    <section class="l-messages row">
      <div class="large-12 columns">
        <?php if ($messages): print $messages; endif; ?>
      </div>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <!--/.l-help -->
    <section class="l-help row">
      <div class="large-12 columns">
        <?php print render($page['help']); ?>
      </div>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

 <?php $is_front = drupal_is_front_page(); ?>
  <?php if ($breadcrumb && $is_front != 1): ?>
    <section class="ef-breadcrumb row">
      <div class="large-12 columns">
		<?php
		/*
		 * This code is used to create the extranet home page breadcrumb, as it is different from other cases (page title cannot be used).
		 */
		if('extranet' === drupal_lookup_path('alias',current_path()))
		{
			print ('<ul class="breadcrumbs"><li><a href="/">'.t('Home').'</a></li><li class="current"><a href="#">'.t('Extranet').'</a></li></ul>');
		}
		else
		{
			print $breadcrumb;
		}
		?>
      </div>
    </section>
  <?php endif; ?>


  <main role="main" class="row l-main">
    <div class="<?php print $main_grid; ?> main columns">
      <div class="ef-main">

      <!-- issue 3286  -->
        <?php if(current_path() == 'taxonomy/term/20604'
        || current_path() == 'taxonomy/term/20605'
        || current_path() == 'taxonomy/term/20606' || current_path() == 'taxonomy/term/20607'
        || current_path() == 'taxonomy/term/20608' || current_path() == 'taxonomy/term/20609'
        || current_path() == 'taxonomy/term/20610' || current_path() == 'taxonomy/term/20611'
        || current_path() == 'taxonomy/term/20612'): ?>
          <h1 id="page-title" class="title parent_eurwork">
            <a href="<?php print $base_url?>/observatories/eurwork">
               <span class="abbrevation">EurWORK</span>
                 European Observatory of Working Life
            </a>
          </h1>
        <?php endif; ?>

      <!-- end issue 3286 -->
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlight panel callout">
            <?php print render($page['highlighted']); ?>
          </div>
        <?php endif; ?>

        <a id="main-content"></a>

        <?php if ($title && !$is_front): ?>
          <?php print render($title_prefix); ?>
          <?php
              $trail_holder = menu_set_active_trail();

              if(sizeof($trail_holder)>2){
                $link_path = $trail_holder[2]['link_path'];
              }
              else{
                $link_path="none";
              }
          ?>

          <?php if(sizeof($trail_holder)>3 && (!strcmp($link_path, 'observatories/emcc')) && $trail_holder[3]['link_title'] != 'Future of Manufacturing in Europe (FOME)' ) :?>
               <h1 id="page-title" class="title parent_emcc">
                 <a href="<?php print $base_url?>/observatories/emcc">
                    <span class="abbrevation">EMCC</span>
                  European Monitoring Centre on Change
                  </a>
               </h1>
               <?php  if (isset($sai_label)): ?>
                  <span class="sai-label">
                    <?php print $sai_label ?>
                  </span>
                <?php endif; ?> 
                <h1 id="page-title" class="title secundary">
                   <?php
                      if($node->type == 'erm_support_instrument' && isset($node->field_english_name_erm_si['und'][0]['safe_value'])){
                        print $node->field_english_name_erm_si['und'][0]['safe_value'];
                      }else{
                        print $title;
                      }
                   ?>
                </h1>

            <?php elseif(sizeof($trail_holder)>2 && (!strcmp($link_path,'observatories/emcc')) && $trail_holder[3]['link_title'] == 'Future of Manufacturing in Europe (FOME)'): ?>                
                <h1 id="page-title" class="title parent_fome">
                 <a href="<?php print $base_url?>/observatories/emcc/fome">
                 <span class="abbrevation">FOME</span> 
                 Future of Manufacturing in Europe
                 </a>
                </h1>
               <?php  if (isset($sai_label)): ?>
                  <span class="sai-label">
                    <?php print $sai_label ?>
                  </span>
                <?php endif; ?> 
                <h1 id="page-title" class="title secundary"><?php print $title; ?></h1>

            <?php elseif(sizeof($trail_holder)>3 && (!strcmp($link_path,'observatories/eurwork'))) : ?>  

                 <h1 id="page-title" class="title parent_eurwork">
                  <a href="<?php print $base_url?>/observatories/eurwork">
                   <span class="abbrevation">EurWORK</span>
                  European Observatory of Working Life
                  </a>
                </h1>

               <?php  if (isset($sai_label)): ?>
                  <span class="sai-label">
                    <?php print $sai_label ?>
                  </span>
                <?php endif; ?> 
                <h1 id="page-title" class="title secundary">
                   <?php
                    print $title
                   ?>
                </h1>

            <?php elseif(sizeof($trail_holder)>3 && (!strcmp($link_path,'observatories/eurlife'))) : ?>
                 <h1 id="page-title" class="title parent_emcc">
                  <a href="<?php print $base_url?>/observatories/eurlife">
                  <span class="abbrevation">EurLIFE</span>
                  European Observatory on Quality of Life
                  </a>
                  </h1>
                 <?php  if (isset($sai_label)): ?>
                    <span class="sai-label">
                      <?php print $sai_label ?>
                    </span>
                  <?php endif; ?> 
                  <h1 id="page-title" class="title secundary"><?php print $title; ?></h1>

            <?php elseif(sizeof($trail_holder)>2 && (!strcmp($link_path,'observatories/eurwork'))) : ?>

                <h1 id="page-title" class="title parent_eurwork">
                  <a href="<?php print $base_url?>/observatories/eurwork">
                   <span class="abbrevation">EurWORK</span>
                    European Observatory of Working Life
                  </a>
                </h1>
               <?php  if (isset($sai_label)): ?>
                  <span class="sai-label">
                    <?php print $sai_label ?>
                  </span>
                <?php endif; ?> 

            <?php elseif(sizeof($trail_holder)>2 && (!strcmp($link_path,'observatories/emcc'))) : ?>
                 <h1 id="page-title" class="title parent_emcc">
                  <a href="<?php print $base_url?>/observatories/emcc">
                  <span class="abbrevation">EMCC</span>
                  European Monitoring Centre on Change
                  </a>
                  </h1>

                  <?php  if (isset($sai_label)): ?>
                    <span class="sai-label">
                      <?php print $sai_label ?>
                    </span>
                  <?php endif; ?>    

            <?php elseif(sizeof($trail_holder)>2 && (!strcmp($link_path,'observatories/eurlife'))) : ?>
                  <h1 id="page-title" class="title parent_emcc">
                    <a href="<?php print $base_url?>/observatories/eurlife">
                    <span class="abbrevation">EurLIFE</span>
                    European Observatory on Quality of Life
                    </a>
                  </h1>

                  <?php  if (isset($sai_label)): ?>
                    <span class="sai-label">
                      <?php print $sai_label ?>
                    </span>
                  <?php endif; ?>    

            <!-- issues 3189 -->
            <?php elseif($link_path == 'none' && isset($node->field_ef_observatory['und'][0]['tid']) &&
                $node->field_ef_observatory['und'][0]['tid'] == 13188): ?>
                  <!-- EURWORK -->
                 <!-- Region navigation -->
                <?php if(!empty($page['navigation'])): ?>
                  <div id="navigation-region">
                    <?php print render($page['navigation']); ?>
                  </div>
                <?php endif; ?>
                <!-- end Region navigation -->

                 <?php  if (isset($sai_label)): ?>
                    <span class="sai-label">
                      <?php print $sai_label ?>
                    </span>
                  <?php endif; ?>          

                <h1 id="page-title" class="title secundary">
                  <?php print $title ?>
                 </h1>

            <?php elseif($link_path == 'none' && isset($node->field_ef_observatory['und'][0]['tid']) &&
                $node->field_ef_observatory['und'][0]['tid'] == 12176): ?>
                 <!-- EMCC -->

                 <?php  if (isset($sai_label)): ?>
                    <span class="sai-label">
                      <?php print $sai_label ?>
                    </span>
                  <?php endif; ?>   

                <h1 id="page-title" class="title secundary">
                  <?php print $title ?>
                 </h1>

            <?php elseif($link_path == 'observatories/eurwork/eurwork-landing-pages/pay'): ?>
                <h1 id="page-title" class="title parent_eurwork">
                  <a href="<?php print $base_url?>/observatories/eurwork">
                   <span class="abbrevation">EurWORK</span>
                  European Observatory of Working Life
                  </a>
                </h1>
                <h1 id="page-title" class="title secundary">
                  <?php print $title ?>
                 </h1>

            <?php elseif($node->type == 'board_member_page'): ?>
                <h1 id="page-title" class="title secundary title-governing-board">Governing Board Extranet</h1>       


            <?php else : ?>

                 <?php  if($node->type != "data_explorer_page"): ?>
                  
                    <?php  if (isset($sai_label)): ?>
                      <span class="sai-label">
                        <?php print $sai_label ?>
                      </span>
                    <?php endif; ?>
                    <h1 id="page-title" class="title secundary">
                      <?php print $title ?>
                    </h1>
                 <?php endif; ?>                 
                 
            <?php endif; ?>

              <!-- END issues 3189 -->

          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
          <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>

      <!-- INIT Issue 3199 -->
        <?php $aux = render($page['content']);?>
        <?php if (isset($node->type)) {

          $hide_pdf = false;
          $hide_print = false;
          $survey_print=true;
/*
          if ($node->type == 'ef_comparative_analytical_report'
            || $node->type == 'ef_national_contribution') {
            $hide_pdf = true;
          }
*/

          if ($node->type == 'dvs_survey') {
            $survey_print = false;
          }else if($node->type == 'data_explorer_page') {
           $hide_print  = true;
           $hide_pdf = true;
          }else if(
                    $node->type == 'blog' || 
                    $node->type == 'presentation' || 
                    $node->type == 'ef_working_life_country_profiles' || 
                    $node->type == 'board_member_page'
                  ) {
           $hide_print  = true;
           $hide_pdf = true;
          }
        }
        ?>

        <?php if (!drupal_is_front_page() && $hide_pdf == false && $survey_print == true): ?>
          <?php if (!strpos($aux,'print-pdf')): ?>
                <?php print print_pdf_insert_link();?>
          <?php endif; ?>
        <?php endif; ?>
        <?php if (!drupal_is_front_page() && $hide_print == false && $survey_print == true ): ?>
          <?php if (!strpos($aux,'print-page')): ?>
            <?php print print_insert_link();?>
          <?php endif; ?>
        <?php endif; ?>
        <?php print $aux; ?>
      <!-- END Issue 3199 -->

      </div>
    </div>
    <!--/.main region -->

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside role="complementary" class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </main>
  <!--/.main-->

  <?php if (!empty($page['triptych_first']) || !empty($page['triptych_middle']) || !empty($page['triptych_last'])): ?>
    <!--.triptych-->
    <section class="l-triptych row">
      <div class="triptych-first large-4 columns">
        <?php print render($page['triptych_first']); ?>
      </div>
      <div class="triptych-middle large-4 columns">
        <?php print render($page['triptych_middle']); ?>
      </div>
      <div class="triptych-last large-4 columns">
        <?php print render($page['triptych_last']); ?>
      </div>
    </section>
    <!--/.triptych -->
  <?php endif; ?>

  <div class="ef-footer">

    <?php if (!empty($page['footer_firstcolumn']) || !empty($page['footer_secondcolumn']) || !empty($page['footer_thirdcolumn'])): ?>
      <!--.footer-columns -->
      <section class="row l-footer-columns">
        <?php if (!empty($page['footer_firstcolumn'])): ?>
          <div class="footer-first large-3 columns">
            <?php print render($page['footer_firstcolumn']); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_secondcolumn'])): ?>
          <div class="footer-second large-3 columns">
            <?php print render($page['footer_secondcolumn']); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_thirdcolumn'])): ?>
          <div class="footer-third large-3 columns">
            <?php print render($page['footer_thirdcolumn']); ?>
          </div>
        <?php endif; ?>
		<?php if (!empty($page['footer_fourthcolumn'])): ?>
          <div class="footer-fourth large-3 columns">
            <?php print render($page['footer_fourthcolumn']); ?>
          </div>
        <?php endif; ?>
      </section>
      <!--/.footer-columns-->
    <?php endif; ?>

    <!--.l-footer-->
    <footer class="l-footer panel" role="contentinfo">
      <section class="row">
	   <div class="footer-logo large-3 columns"></div>
        <?php if (!empty($page['footer'])): ?>
          <div class="footer large-6 columns">
            <?php print render($page['footer']); ?>
          </div>
        <?php endif; ?>
        <?php if ($site_name) :?>
          <div class="copyright large-3 columns">
            &copy; Eurofound <?php print date('Y'); ?>
          </div>
        <?php endif; ?>
      </section>
	   <section class="row">
		   <div class="ef-to-top-nav">
			  <a href="#top">Top</a>
			</div>
	   </section>
    </footer>
    <!--/.footer-->

  </div>

  <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
</div>
