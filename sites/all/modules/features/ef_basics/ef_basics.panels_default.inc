<?php
/**
 * @file
 * ef_basics.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ef_basics_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'about_eurofound_mini_panel';
  $mini->category = '';
  $mini->admin_title = 'About Eurofound mini panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '13b3ccde-5838-41a1-b42d-1cd8f87b3dd8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5f4ff9e4-3031-49c4-863a-8ef241832004';
    $pane->panel = 'center';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 16445,
      'parent' => 'main-menu:16445',
      'title_link' => 0,
      'admin_title' => 'About Eurofound Drupal',
      'level' => '1',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5f4ff9e4-3031-49c4-863a-8ef241832004';
    $display->content['new-5f4ff9e4-3031-49c4-863a-8ef241832004'] = $pane;
    $display->panels['center'][0] = 'new-5f4ff9e4-3031-49c4-863a-8ef241832004';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['about_eurofound_mini_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'browse_by';
  $mini->category = '';
  $mini->admin_title = 'Browse By';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Browse by:';
  $display->uuid = '92e458a8-7df2-41c0-9437-0cabccb188ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-92c75114-cc75-4a0f-8c35-6597d3d48f72';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'ef_countries_jump_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
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
    $pane->uuid = '92c75114-cc75-4a0f-8c35-6597d3d48f72';
    $display->content['new-92c75114-cc75-4a0f-8c35-6597d3d48f72'] = $pane;
    $display->panels['center'][0] = 'new-92c75114-cc75-4a0f-8c35-6597d3d48f72';
    $pane = new stdClass();
    $pane->pid = 'new-7a049317-1caa-43bc-84a2-b51d8bc43045';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'browse_by_topics';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7a049317-1caa-43bc-84a2-b51d8bc43045';
    $display->content['new-7a049317-1caa-43bc-84a2-b51d8bc43045'] = $pane;
    $display->panels['center'][1] = 'new-7a049317-1caa-43bc-84a2-b51d8bc43045';
    $pane = new stdClass();
    $pane->pid = 'new-bbf8f6b7-bedf-412f-9864-91d299e22fe0';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'browse_by_sector';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bbf8f6b7-bedf-412f-9864-91d299e22fe0';
    $display->content['new-bbf8f6b7-bedf-412f-9864-91d299e22fe0'] = $pane;
    $display->panels['center'][2] = 'new-bbf8f6b7-bedf-412f-9864-91d299e22fe0';
    $pane = new stdClass();
    $pane->pid = 'new-97730f93-c232-4e5c-ad26-38bbf6e191ac';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'browse_by_year';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '97730f93-c232-4e5c-ad26-38bbf6e191ac';
    $display->content['new-97730f93-c232-4e5c-ad26-38bbf6e191ac'] = $pane;
    $display->panels['center'][3] = 'new-97730f93-c232-4e5c-ad26-38bbf6e191ac';
    $pane = new stdClass();
    $pane->pid = 'new-dbd75df3-3008-454a-9b71-ae97b46e52b0';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'browse_by_eurwork_landing_page_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'dbd75df3-3008-454a-9b71-ae97b46e52b0';
    $display->content['new-dbd75df3-3008-454a-9b71-ae97b46e52b0'] = $pane;
    $display->panels['center'][4] = 'new-dbd75df3-3008-454a-9b71-ae97b46e52b0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7a049317-1caa-43bc-84a2-b51d8bc43045';
  $mini->display = $display;
  $export['browse_by'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'news_mini_panel';
  $mini->category = '';
  $mini->admin_title = 'News mini panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f72df39e-514d-4c59-aff1-650dba735325';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e37ce40d-f0c9-434d-a65a-390558d348eb';
    $pane->panel = 'center';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 16450,
      'parent' => 'main-menu:16450',
      'title_link' => 0,
      'admin_title' => 'News Mini panel',
      'level' => '1',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e37ce40d-f0c9-434d-a65a-390558d348eb';
    $display->content['new-e37ce40d-f0c9-434d-a65a-390558d348eb'] = $pane;
    $display->panels['center'][0] = 'new-e37ce40d-f0c9-434d-a65a-390558d348eb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['news_mini_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'observations';
  $mini->category = '';
  $mini->admin_title = 'Observations';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9b1e7392-d7bd-4bb2-ba32-e2578a1f0909';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fd2fe858-b538-42d4-a738-3a01e449eddb';
    $pane->panel = 'center';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 16449,
      'parent' => 'main-menu:16449',
      'title_link' => 0,
      'admin_title' => 'Observations Menu',
      'level' => '1',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fd2fe858-b538-42d4-a738-3a01e449eddb';
    $display->content['new-fd2fe858-b538-42d4-a738-3a01e449eddb'] = $pane;
    $display->panels['center'][0] = 'new-fd2fe858-b538-42d4-a738-3a01e449eddb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['observations'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publication_mini_panel';
  $mini->category = '';
  $mini->admin_title = 'Publication mini panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'publication_minipanel_3col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1ed49f47-6c06-4c5c-8691-1495857f9cc4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2b50448f-e2be-4ef5-a959-acc210a4ae3b';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'publication_theme';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2b50448f-e2be-4ef5-a959-acc210a4ae3b';
    $display->content['new-2b50448f-e2be-4ef5-a959-acc210a4ae3b'] = $pane;
    $display->panels['left'][0] = 'new-2b50448f-e2be-4ef5-a959-acc210a4ae3b';
    $pane = new stdClass();
    $pane->pid = 'new-3a07d95d-d420-4da2-95ab-7ed1af61bcbe';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'date_jump_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a07d95d-d420-4da2-95ab-7ed1af61bcbe';
    $display->content['new-3a07d95d-d420-4da2-95ab-7ed1af61bcbe'] = $pane;
    $display->panels['middle'][0] = 'new-3a07d95d-d420-4da2-95ab-7ed1af61bcbe';
    $pane = new stdClass();
    $pane->pid = 'new-4d3ba113-c89b-4efe-84f9-bdf53cf184f5';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'latest_publications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4d3ba113-c89b-4efe-84f9-bdf53cf184f5';
    $display->content['new-4d3ba113-c89b-4efe-84f9-bdf53cf184f5'] = $pane;
    $display->panels['right'][0] = 'new-4d3ba113-c89b-4efe-84f9-bdf53cf184f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['publication_mini_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'surveys_mini_panel';
  $mini->category = '';
  $mini->admin_title = 'Surveys mini panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '28feacc3-8c1e-4851-a340-fe8f762905d2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a5668030-78f7-4389-a4ef-010a5b9f4bc8';
    $pane->panel = 'center';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 16448,
      'parent' => 'main-menu:16448',
      'title_link' => 0,
      'admin_title' => 'Surveys Menu',
      'level' => '1',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '86400',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a5668030-78f7-4389-a4ef-010a5b9f4bc8';
    $display->content['new-a5668030-78f7-4389-a4ef-010a5b9f4bc8'] = $pane;
    $display->panels['center'][0] = 'new-a5668030-78f7-4389-a4ef-010a5b9f4bc8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['surveys_mini_panel'] = $mini;

  return $export;
}
