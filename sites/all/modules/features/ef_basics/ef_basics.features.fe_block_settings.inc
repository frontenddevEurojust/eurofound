<?php
/**
 * @file
 * ef_basics.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ef_basics_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ef_back_to_list_block'] = array(
    'cache' => -1,
    'css_class' => 'boxed-block back-to-results-block',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_back_to_list_block',
    'module' => 'block',
    'node_types' => array(
      0 => 'ef_annual_progress_report',
      1 => 'ef_case_study',
      2 => 'ef_comparative_analytical_report',
      3 => 'ef_erm_regulation',
      4 => 'ef_event',
      5 => 'ef_factsheet',
      6 => 'ef_ic_quarterly_report',
      7 => 'ef_input_to_erm',
      8 => 'ef_ir_dictionary',
      9 => 'ef_national_contribution',
      10 => 'ef_network_quarterly_report',
      11 => 'ef_news',
      12 => 'ef_photo_gallery',
      13 => 'ef_project',
      14 => 'ef_publication',
      15 => 'ef_quarterly_report',
      16 => 'ef_regulation',
      17 => 'ef_report',
      18 => 'ef_restructuring_in_smes',
      19 => 'ef_spotlight_entry',
      20 => 'ef_support_instrument',
      21 => 'ef_survey',
      22 => 'ef_vacancy',
      23 => 'ef_video',
      24 => 'erm_support_instrument',
      25 => 'simplenews',
    ),
    'pages' => '<?php
 if ($_SESSION[\'back_search_invisible\']==\'false\') {     
   return TRUE;
}  else {
    return FALSE;
  }
?>',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -92,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 2,
  );

  $export['block-ef_block_emcc_landing_page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_block_emcc_landing_page',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-ef_block_eurwork_landing_page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_block_eurwork_landing_page',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-ef_block_footer_about_eurofound'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_block_footer_about_eurofound',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'footer_fourthcolumn',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -68,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-ef_block_home_important_document'] = array(
    'cache' => -1,
    'css_class' => 'important-documents',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_block_home_important_document',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'About Eurofound',
    'visibility' => 0,
  );

  $export['block-ef_block_home_promo_area'] = array(
    'cache' => -1,
    'css_class' => 'promo-area',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_block_home_promo_area',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Explore specialised data collections',
    'visibility' => 0,
  );

  $export['block-ef_block_home_surveys'] = array(
    'cache' => -1,
    'css_class' => 'surveys',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_block_home_surveys',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Surveys',
    'visibility' => 0,
  );

  $export['block-ef_block_user_registration_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_block_user_registration_info',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'user/register',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -85,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-ef_contact_us_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_contact_us_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'footer_thirdcolumn',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -37,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact us',
    'visibility' => 0,
  );

  $export['block-ef_mission'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_mission',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-ef_social_media_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_social_media_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'footer_secondcolumn',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -38,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Social media',
    'visibility' => 0,
  );

  $export['block-ef_user_login_links_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'ef_user_login_links_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -29,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-extranet_block'] = array(
    'cache' => -1,
    'css_class' => 'ef-main',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'extranet_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'board-members-extranet/*
board-members-extranet
boardmemberpage/*
boardmemberpage',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -55,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Extranet',
    'visibility' => 1,
  );

  $export['lang_dropdown-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'lang_dropdown',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'top-links',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -84,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'masquerade',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'Eurofound Administrator' => 4,
    ),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'masquerade',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -82,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-ef-footer-links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-ef-footer-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-ef-quick-links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-ef-quick-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'footer_firstcolumn',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Quick links',
    'visibility' => 0,
  );

  $export['menu-menu-ef-user-login-links-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-ef-user-login-links-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'top-links',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -85,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => 'block-main-menu-sub-menu',
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -72,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'css_class' => 'block-main-menu-sub-menu',
    'custom' => 0,
    'delta' => 2,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -31,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => 'block-main-menu-sub-menu',
    'custom' => 0,
    'delta' => 3,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'themes/industrial-relations/industrial-relations-terms/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -69,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['panels_mini-browse_by'] = array(
    'cache' => -1,
    'css_class' => 'boxed-block',
    'custom' => 0,
    'delta' => 'browse_by',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => 'observatories/eurwork',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -36,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['quicktabs-ef_block_latest_content'] = array(
    'cache' => -1,
    'css_class' => 'light-style',
    'custom' => 0,
    'delta' => 'ef_block_latest_content',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -29,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['quicktabs-ef_latest_spotlight_entries'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ef_latest_spotlight_entries',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -12,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Spotlight on',
    'visibility' => 1,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'top-links',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -83,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => 'popup-shortcuts',
    'custom' => 0,
    'delta' => 'shortcuts',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'top-links',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -87,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'My Eurofound',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'authenticated user' => 2,
      'Eurofound Administrator' => 4,
    ),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -28,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-1f9f00a9a240613060987eb154225030'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1f9f00a9a240613060987eb154225030',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(
      0 => 'article',
      1 => 'case_study_publication',
      2 => 'cwb_country_info',
      3 => 'cwb_level_coordination',
      4 => 'cwb_series',
      5 => 'cwb_time_series',
      6 => 'dvs_survey',
      7 => 'ef_annual_progress_report',
      8 => 'ef_call_for_tender',
      9 => 'ef_case_study',
      10 => 'ef_comparative_analytical_report',
      11 => 'ef_contact_form',
      12 => 'ef_emire_dictionary',
      13 => 'ef_erm_regulation',
      14 => 'ef_event',
      15 => 'ef_factsheet',
      16 => 'ef_ic_quarterly_report',
      17 => 'ef_input_to_erm',
      18 => 'ef_ir_dictionary',
      19 => 'ef_national_contribution',
      20 => 'ef_network_quarterly_report',
      21 => 'ef_news',
      22 => 'ef_photo_gallery',
      23 => 'ef_project',
      24 => 'ef_publication',
      25 => 'ef_quarterly_report',
      26 => 'ef_regulation',
      27 => 'ef_report',
      28 => 'ef_restructuring_in_smes',
      29 => 'ef_spotlight_entry',
      30 => 'ef_support_instrument',
      31 => 'ef_survey',
      32 => 'ef_vacancy',
      33 => 'ef_video',
      34 => 'erm_support_instrument',
      35 => 'page',
      36 => 'panel',
      37 => 'simplenews',
      38 => 'ssi_services',
      39 => 'timeline_date',
      40 => 'webform',
    ),
    'pages' => 'observatories/european-observatory-of-working-life-eurwork/about-eurwork/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -65,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Related content',
    'visibility' => 0,
  );

  $export['views-browse_by_sector-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'browse_by_sector-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-browse_by_topics-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'browse_by_topics-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-browse_by_topics-block_1'] = array(
    'cache' => -1,
    'css_class' => 'ef-theme-topics-jump-block',
    'custom' => 0,
    'delta' => 'browse_by_topics-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'ef-themes/*
topics/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -91,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-country-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'country-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-country-block_2'] = array(
    'cache' => -1,
    'css_class' => 'country-more-info',
    'custom' => 0,
    'delta' => 'country-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'countries/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -59,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-country-block_3'] = array(
    'cache' => -1,
    'css_class' => 'country-specific-info',
    'custom' => 0,
    'delta' => 'country-block_3',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'countries/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -58,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-country-block_4'] = array(
    'cache' => -1,
    'css_class' => 'country-external-links',
    'custom' => 0,
    'delta' => 'country-block_4',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'countries/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -56,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-ef_countries_jump_block-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ef_countries_jump_block-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'country/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'effoundationtheme',
        'weight' => -90,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-ef_countries_jump_block-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ef_countries_jump_block-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'observatories/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-ef_themes_jump_block-block'] = array(
    'cache' => -1,
    'css_class' => 'ef-themes-jump-block',
    'custom' => 0,
    'delta' => 'ef_themes_jump_block-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'ef-themes/*',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => -62,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-most_popular_view-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'most_popular_view-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'effoundationtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'effoundationtheme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
