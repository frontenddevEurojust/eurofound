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
        <?php print $breadcrumb; ?>
      </div>
    </section>
  <?php endif; ?>


  <main role="main" class="row l-main">
    <div class="<?php print $main_grid; ?> main columns">
      <div class="ef-main">
        <h1 id="page-title" class="title secundary"><?php print $node->title; ?></h1>
			<?php
			  global $language;
        global $user;

			  $key_topics = views_embed_view('key_topics_landing_page','key_topics_block'); 
			  //$topics_terms_index =views_embed_view('key_topics_landing_page','block_2'); 
			    
			 	print $key_topics;
			  print '<h2>' . t('Browse A-Z') . '</h2>';
			 	//print $topics_terms_index;


			  $term_vocabulary_topics = taxonomy_vocabulary_machine_name_load('ef_topics');
			  $tree = taxonomy_get_tree($term_vocabulary_topics->vid);


			  foreach ($tree as $key  => $topic_term) {
		  		$taxonomy_term = taxonomy_term_load($topic_term->tid);
          // dont translate if the user not login
          if(!user_is_logged_in()){
            $topic_term->name = trim($taxonomy_term->name);
          }
          $topic_term->name = trim($taxonomy_term->name);
          $alternative_terms_translate = $taxonomy_term->field_alternative_terms_topics[$language->language][0]['value'];
		  		 


					if ($alternative_terms_translate  != '') {	
            $alternative_terms = $taxonomy_term->field_alternative_terms_topics[$language->language][0]['value']; 
						$alternative = explode("<br />",check_markup($alternative_terms));            
						foreach ($alternative as $key => $alternative_item) {
							$alternative_obj = new stdClass();
							$alternative_obj->name = trim(strip_tags($alternative_item));
							$alternative_obj->tid = $topic_term->tid;								
							array_push($tree, $alternative_obj);								
						}								
					}else{
            $alternative_terms = $taxonomy_term->field_alternative_terms_topics['en'][0]['value']; 
            $alternative = explode("<br />",check_markup($alternative_terms));            
            foreach ($alternative as $key => $alternative_item) {
              $alternative_obj = new stdClass();
              $alternative_obj->name = trim(strip_tags($alternative_item));
              $alternative_obj->tid = $topic_term->tid;               
              array_push($tree, $alternative_obj);                
            } 
          }				
			  }

				function orderString($a, $b) {
			    return strcasecmp($a->name, $b->name);
				}
				usort($tree, "orderString");
				//natcasesort($tree);

				print "<ul class='terms-topics-list'>";
				$start = true;
				foreach ($tree as $key  => $all_topic_term) {
          $entity_name = $all_topic_term->name;

					if ($start == true) {
						$group_letter = strtoupper(mb_substr($all_topic_term->name,0,1));
						print '<li class="group-by first"><h3>'. $group_letter .'</h3><ul class="sublist-topics">';
            print "<li class='term-topic-item'><a href='". drupal_get_path_alias('taxonomy/term/' . $all_topic_term->tid) ."' >" . $entity_name  . "</a></li>";
						$start = false;
					}
          else {
           
						if ($group_letter != strtoupper(mb_substr($entity_name,0,1))) {
							$group_letter = strtoupper(mb_substr($entity_name,0,1));
							print '</ul>';
              print '<li class="group-by"><h3>' . $group_letter .'</h3><ul class="sublist-topics">';
              print "<li class='term-topic-item'><a href='". drupal_get_path_alias('taxonomy/term/' . $all_topic_term->tid) ."' >" . $entity_name . "</a></li>";
							$start = false;
						} else {
              print "<li class='term-topic-item'><a href='". drupal_get_path_alias('taxonomy/term/' . $all_topic_term->tid) ."' >" . $entity_name . "</a></li>";
            }
					}				
					
				}					
				print "</ul>";

		 	?>
      </div>
    </div>
    <div class="go-top-wrapper topics no-pdf">
      <a class="go-top fa-stack fa-2x" href="#up">
        <i class="fa fa-circle fa-stack-2x"></i>
        <i class="fa fa-angle-up fa-stack-1x fa-inverse"></i>
      </a>
    </div>
	</main>
      


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



