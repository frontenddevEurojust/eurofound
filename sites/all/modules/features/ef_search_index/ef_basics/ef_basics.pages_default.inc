<?php
/**
 * @file
 * ef_basics.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ef_basics_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'country_page';
  $page->task = 'page';
  $page->admin_title = 'Country Page';
  $page->admin_description = '';
  $page->path = 'countries/!input';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'input' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_country_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'country_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Url check',
            'php' => '$args = explode(\'/\', $_GET[\'q\']);  
return (count($args) > 2) ? FALSE : TRUE;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Countries
%input:html_safe',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%input:name';
  $display->uuid = '9f6fb526-d974-47a5-9e39-e4039b1d270d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-238a95df-4cad-42f8-82cf-6fa2292a383b';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Global custom Latest for Country',
      'title' => '',
      'body' => '<?php

global $base_url;
 
$view_name = \'ef_latest_for_country\';
$display_1 = \'latest_country_publications\';
$display_2 = \'latest_country_ef_articles_and_others\';
$param = arg(1);

$results = array();
$view_one_results = views_get_view_result($view_name, $display_1, $param);
$view_two_results = views_get_view_result($view_name, $display_2, $param);

$results = array_merge($view_one_results, $view_two_results);

$dates = array();
foreach ($results as $key => $value) {
	$dates[] = $value->publication_date_published_at;
}

rsort($dates);
$top5 = array_slice($dates, 0, 5);

?>
<h2 class="pane-title">Latest for <?php print $param; ?></h2>
<?php

$one = views_get_view($view_name);
$one->set_display($display_1);
$one->set_arguments(array($param));
$one->execute();

foreach ($one->result as $key => $item) {
	if (!in_array($item->publication_date_published_at, $top5)) {
		unset($one->result[$key]);
	}
}

$two = views_get_view($view_name);
$two->set_display($display_2);
$two->set_arguments(array($param));
$two->execute();

foreach ($two->result as $key => $item) {
	if (!in_array($item->publication_date_published_at, $top5)) {
		unset($two->result[$key]);
	}
}

print $one->render();
print $two->render();

?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '238a95df-4cad-42f8-82cf-6fa2292a383b';
    $display->content['new-238a95df-4cad-42f8-82cf-6fa2292a383b'] = $pane;
    $display->panels['left'][0] = 'new-238a95df-4cad-42f8-82cf-6fa2292a383b';
    $pane = new stdClass();
    $pane->pid = 'new-e0c2f00f-3645-43d1-a93b-2019820f6df6';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e0c2f00f-3645-43d1-a93b-2019820f6df6';
    $display->content['new-e0c2f00f-3645-43d1-a93b-2019820f6df6'] = $pane;
    $display->panels['right'][0] = 'new-e0c2f00f-3645-43d1-a93b-2019820f6df6';
    $pane = new stdClass();
    $pane->pid = 'new-d89a71d8-9b61-4fe6-8a87-9300653d062d';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'country-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd89a71d8-9b61-4fe6-8a87-9300653d062d';
    $display->content['new-d89a71d8-9b61-4fe6-8a87-9300653d062d'] = $pane;
    $display->panels['top'][0] = 'new-d89a71d8-9b61-4fe6-8a87-9300653d062d';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['country_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ef_home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'index';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ef_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ef_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ef-home-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'home_foundation_3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_first' => NULL,
      'left_second' => NULL,
      'left_third' => NULL,
      'left_fourth' => NULL,
      'right_first' => NULL,
      'right_second' => NULL,
      'right_third' => NULL,
      'right_fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Home Page';
  $display->uuid = '3bcba73e-7791-42e5-9960-d01b4b98f602';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ec18d31-f7b1-4465-a6d3-99f6bf206879';
    $pane->panel = 'left_second';
    $pane->type = 'views';
    $pane->subtype = 'ef_key_topics_home';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ec18d31-f7b1-4465-a6d3-99f6bf206879';
    $display->content['new-2ec18d31-f7b1-4465-a6d3-99f6bf206879'] = $pane;
    $display->panels['left_second'][0] = 'new-2ec18d31-f7b1-4465-a6d3-99f6bf206879';
    $pane = new stdClass();
    $pane->pid = 'new-2232814e-c142-4be7-9e86-413ee016b6fb';
    $pane->panel = 'left_second';
    $pane->type = 'block';
    $pane->subtype = 'block-33';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2232814e-c142-4be7-9e86-413ee016b6fb';
    $display->content['new-2232814e-c142-4be7-9e86-413ee016b6fb'] = $pane;
    $display->panels['left_second'][1] = 'new-2232814e-c142-4be7-9e86-413ee016b6fb';
    $pane = new stdClass();
    $pane->pid = 'new-df0b871b-22e9-46ea-9249-7a74421258db';
    $pane->panel = 'left_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ef_spotlight_on-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'spotlight-on',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df0b871b-22e9-46ea-9249-7a74421258db';
    $display->content['new-df0b871b-22e9-46ea-9249-7a74421258db'] = $pane;
    $display->panels['left_second'][2] = 'new-df0b871b-22e9-46ea-9249-7a74421258db';
    $pane = new stdClass();
    $pane->pid = 'new-70e82209-1297-44bb-95f7-af3619b1d288';
    $pane->panel = 'left_second';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-ef_block_latest_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-content',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '70e82209-1297-44bb-95f7-af3619b1d288';
    $display->content['new-70e82209-1297-44bb-95f7-af3619b1d288'] = $pane;
    $display->panels['left_second'][3] = 'new-70e82209-1297-44bb-95f7-af3619b1d288';
    $pane = new stdClass();
    $pane->pid = 'new-b470e9ae-17a0-424d-8d6e-7502230f2ed2';
    $pane->panel = 'left_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ef_home_page_media_nodequeue-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'media',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b470e9ae-17a0-424d-8d6e-7502230f2ed2';
    $display->content['new-b470e9ae-17a0-424d-8d6e-7502230f2ed2'] = $pane;
    $display->panels['left_second'][4] = 'new-b470e9ae-17a0-424d-8d6e-7502230f2ed2';
    $pane = new stdClass();
    $pane->pid = 'new-20c9b5b0-5ef7-430d-b87e-24a50a82eca8';
    $pane->panel = 'right_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ef_home_page_view_nodequeue-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'location-featured featured',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20c9b5b0-5ef7-430d-b87e-24a50a82eca8';
    $display->content['new-20c9b5b0-5ef7-430d-b87e-24a50a82eca8'] = $pane;
    $display->panels['right_second'][0] = 'new-20c9b5b0-5ef7-430d-b87e-24a50a82eca8';
    $pane = new stdClass();
    $pane->pid = 'new-51aa3355-0e15-4ac3-8046-5efe61a3191f';
    $pane->panel = 'right_second';
    $pane->type = 'block';
    $pane->subtype = 'block-21';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Eurofound observatories',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'important-documents',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '51aa3355-0e15-4ac3-8046-5efe61a3191f';
    $display->content['new-51aa3355-0e15-4ac3-8046-5efe61a3191f'] = $pane;
    $display->panels['right_second'][1] = 'new-51aa3355-0e15-4ac3-8046-5efe61a3191f';
    $pane = new stdClass();
    $pane->pid = 'new-369cf4be-8b07-4d11-9d54-2e71cbbb92f7';
    $pane->panel = 'right_second';
    $pane->type = 'block';
    $pane->subtype = 'block-12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Surveys',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'surveys',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '369cf4be-8b07-4d11-9d54-2e71cbbb92f7';
    $display->content['new-369cf4be-8b07-4d11-9d54-2e71cbbb92f7'] = $pane;
    $display->panels['right_second'][2] = 'new-369cf4be-8b07-4d11-9d54-2e71cbbb92f7';
    $pane = new stdClass();
    $pane->pid = 'new-afce18de-6784-449a-8ca3-792374617793';
    $pane->panel = 'right_second';
    $pane->type = 'block';
    $pane->subtype = 'block-10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Important Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'important-documents',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'afce18de-6784-449a-8ca3-792374617793';
    $display->content['new-afce18de-6784-449a-8ca3-792374617793'] = $pane;
    $display->panels['right_second'][3] = 'new-afce18de-6784-449a-8ca3-792374617793';
    $pane = new stdClass();
    $pane->pid = 'new-33ca17f0-e48b-46d2-b487-ca346f00dc6b';
    $pane->panel = 'right_second';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Promo Area',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'promo-area',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '33ca17f0-e48b-46d2-b487-ca346f00dc6b';
    $display->content['new-33ca17f0-e48b-46d2-b487-ca346f00dc6b'] = $pane;
    $display->panels['right_second'][4] = 'new-33ca17f0-e48b-46d2-b487-ca346f00dc6b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ef_home_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ef_theme_page';
  $page->task = 'page';
  $page->admin_title = 'Theme Page';
  $page->admin_description = '';
  $page->path = 'ef-themes/%input';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'input' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          4 => '4',
          58 => 0,
          61 => 0,
          63 => 0,
          60 => 0,
          62 => 0,
          59 => 0,
          64 => 0,
          65 => 0,
          45 => 0,
          42 => 0,
          39 => 0,
          55 => 0,
          37 => 0,
          43 => 0,
          38 => 0,
          44 => 0,
          40 => 0,
          41 => 0,
          28 => 0,
          51 => 0,
          53 => 0,
          36 => 0,
          27 => 0,
          66 => 0,
          67 => 0,
          50 => 0,
          17 => 0,
          19 => 0,
          20 => 0,
          18 => 0,
          7 => 0,
          54 => 0,
          8 => 0,
          3 => 0,
          47 => 0,
          48 => 0,
          12 => 0,
          10 => 0,
          14 => 0,
          15 => 0,
          24 => 0,
          25 => 0,
          23 => 0,
          26 => 0,
          22 => 0,
          29 => 0,
          9 => 0,
          52 => 0,
          35 => 0,
          49 => 0,
          1 => 0,
          21 => 0,
          56 => 0,
          46 => 0,
          57 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ef_theme_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ef_theme_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Theme Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Url check',
            'php' => '$args = explode(\'/\', $_GET[\'q\']);  
return (count($args) != 2) ? FALSE : TRUE;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Themes
%input:i18n-name',
    'panels_breadcrumbs_paths' => 'ef-themes',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '21b0253a-2b1b-4a83-8c5f-c06f9ec08d8b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5cf63685-4e3b-40cf-88f5-a033147ea161';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ef_featured_nodes_in_themes_landing_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'featured',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5cf63685-4e3b-40cf-88f5-a033147ea161';
    $display->content['new-5cf63685-4e3b-40cf-88f5-a033147ea161'] = $pane;
    $display->panels['left'][0] = 'new-5cf63685-4e3b-40cf-88f5-a033147ea161';
    $pane = new stdClass();
    $pane->pid = 'new-b29f1f69-ae4c-443a-adc1-6a4491f06d2d';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ef_latest_related_content_on_theme-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'latest-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b29f1f69-ae4c-443a-adc1-6a4491f06d2d';
    $display->content['new-b29f1f69-ae4c-443a-adc1-6a4491f06d2d'] = $pane;
    $display->panels['right'][0] = 'new-b29f1f69-ae4c-443a-adc1-6a4491f06d2d';
    $pane = new stdClass();
    $pane->pid = 'new-10d0d4f5-a11b-4d79-aad1-349b71942be2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'ef_theme_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '10d0d4f5-a11b-4d79-aad1-349b71942be2';
    $display->content['new-10d0d4f5-a11b-4d79-aad1-349b71942be2'] = $pane;
    $display->panels['top'][0] = 'new-10d0d4f5-a11b-4d79-aad1-349b71942be2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ef_theme_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'emcc_landing_page';
  $page->task = 'page';
  $page->admin_title = 'EMCC Landing Page';
  $page->admin_description = '';
  $page->path = 'observatories/emcc';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_emcc_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'emcc_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'EMCC Landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-observatories-emcc-index',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Url check',
            'php' => '$args = explode(\'/\', $_GET[\'q\']);  
return (count($args) > 2) ? FALSE : TRUE;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<span class="abbreviation">EMCC</span> European Monitoring Centre on Change';
  $display->uuid = '3bde2162-7752-4cf9-ba13-b076a69b8054';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c69f89aa-e058-4931-98fa-6745a2d2e558';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'ef_latest_restructuring';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c69f89aa-e058-4931-98fa-6745a2d2e558';
    $display->content['new-c69f89aa-e058-4931-98fa-6745a2d2e558'] = $pane;
    $display->panels['left'][0] = 'new-c69f89aa-e058-4931-98fa-6745a2d2e558';
    $pane = new stdClass();
    $pane->pid = 'new-0034a01b-793f-4843-8725-4b4362c96b23';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'ef_publications_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0034a01b-793f-4843-8725-4b4362c96b23';
    $display->content['new-0034a01b-793f-4843-8725-4b4362c96b23'] = $pane;
    $display->panels['right'][0] = 'new-0034a01b-793f-4843-8725-4b4362c96b23';
    $pane = new stdClass();
    $pane->pid = 'new-3376d41d-6fe5-46eb-b630-4b04f368bdbb';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'EMCC Landing page',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3376d41d-6fe5-46eb-b630-4b04f368bdbb';
    $display->content['new-3376d41d-6fe5-46eb-b630-4b04f368bdbb'] = $pane;
    $display->panels['top'][0] = 'new-3376d41d-6fe5-46eb-b630-4b04f368bdbb';
    $pane = new stdClass();
    $pane->pid = 'new-bc3e4e9f-8ff7-4020-97c7-ddf42b90be1d';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'ef_view_emcc_landing_page_view_nodequeue';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bc3e4e9f-8ff7-4020-97c7-ddf42b90be1d';
    $display->content['new-bc3e4e9f-8ff7-4020-97c7-ddf42b90be1d'] = $pane;
    $display->panels['top'][1] = 'new-bc3e4e9f-8ff7-4020-97c7-ddf42b90be1d';
    $pane = new stdClass();
    $pane->pid = 'new-9ea0764c-1e8d-412f-ac91-dd32efa83299';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-35';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Featured',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9ea0764c-1e8d-412f-ac91-dd32efa83299';
    $display->content['new-9ea0764c-1e8d-412f-ac91-dd32efa83299'] = $pane;
    $display->panels['top'][2] = 'new-9ea0764c-1e8d-412f-ac91-dd32efa83299';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3376d41d-6fe5-46eb-b630-4b04f368bdbb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['emcc_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'eurwork_landing_page';
  $page->task = 'page';
  $page->admin_title = 'EurWORK Landing Page';
  $page->admin_description = '';
  $page->path = 'observatories/eurwork';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_eurwork_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'eurwork_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'EurWORK Landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-observatories-eurwork-index',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Url check',
            'php' => '$args = explode(\'/\', $_GET[\'q\']);  
return (count($args) > 2) ? FALSE : TRUE;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'EurWORK European Observatory of Working Life';
  $display->uuid = '3bde2162-7752-4cf9-ba13-b076a69b8054';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc58aeaf-f088-4087-8f47-d09fa35c2b28';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ef_latest_eurwork_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc58aeaf-f088-4087-8f47-d09fa35c2b28';
    $display->content['new-dc58aeaf-f088-4087-8f47-d09fa35c2b28'] = $pane;
    $display->panels['left'][0] = 'new-dc58aeaf-f088-4087-8f47-d09fa35c2b28';
    $pane = new stdClass();
    $pane->pid = 'new-f50548a4-45f5-4171-977d-35329779ad54';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'ef_publications_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f50548a4-45f5-4171-977d-35329779ad54';
    $display->content['new-f50548a4-45f5-4171-977d-35329779ad54'] = $pane;
    $display->panels['right'][0] = 'new-f50548a4-45f5-4171-977d-35329779ad54';
    $pane = new stdClass();
    $pane->pid = 'new-a7091fbc-9a4e-407d-8704-565c9f701fe1';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'EurWORK landing page',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7091fbc-9a4e-407d-8704-565c9f701fe1';
    $display->content['new-a7091fbc-9a4e-407d-8704-565c9f701fe1'] = $pane;
    $display->panels['top'][0] = 'new-a7091fbc-9a4e-407d-8704-565c9f701fe1';
    $pane = new stdClass();
    $pane->pid = 'new-4ca0282b-fae9-4461-ba88-1ae7a0a231c6';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'ef_eurwork_landing_page_view_nodequeue';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4ca0282b-fae9-4461-ba88-1ae7a0a231c6';
    $display->content['new-4ca0282b-fae9-4461-ba88-1ae7a0a231c6'] = $pane;
    $display->panels['top'][1] = 'new-4ca0282b-fae9-4461-ba88-1ae7a0a231c6';
    $pane = new stdClass();
    $pane->pid = 'new-62215f08-101e-4432-ba6f-4446fe5c323a';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-37';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Featured',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '62215f08-101e-4432-ba6f-4446fe5c323a';
    $display->content['new-62215f08-101e-4432-ba6f-4446fe5c323a'] = $pane;
    $display->panels['top'][2] = 'new-62215f08-101e-4432-ba6f-4446fe5c323a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['eurwork_landing_page'] = $page;

  return $pages;

}
