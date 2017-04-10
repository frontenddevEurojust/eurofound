<?php
/**
 * @file
 * ef_basics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_basics_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ef_basics_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_pub_defaults().
 */
function ef_basics_custom_pub_defaults() {
  $options = array();
  // Exported option: ef_archived
  $options['ef_archived'] = array(
    'type' => 'ef_archived',
    'name' => t('Archived'),
    'node_types' => array(
      'page' => t('Basic page'),
      'ef_call_for_tender' => t('Call for tender'),
      'ef_project' => t('Project'),
      'ef_vacancy' => t('Vacancy'),
      'ef_event' => t('Event'),
      'ef_venue' => t('Venue'),
      'ef_photo_gallery' => t('Photo gallery'),
      'ef_video' => t('Video'),
      'ef_news' => t('News'),
      'ef_case_study' => t('Case study'),
      'ef_comparative_analytical_report' => t('Comparative analytical report'),
      'ef_ic_quarterly_report' => t('IC quarterly report'),
      'ef_national_contribution' => t('National contribution'),
      'ef_network_quarterly_report' => t('Network quarterly report'),
      'ef_publication' => t('Publication'),
      'ef_report' => t('EF article'),
      'ef_factsheet' => t('Factsheet'),
      'ef_input_to_erm' => t('Input to ERM'),
      'ef_ir_dictionary' => t('IR Dictionary'),
      'ef_regulation' => t('Regulation'),
      'ef_restructuring_in_smes' => t('Restructuring in SMEs'),
      'ef_support_instrument' => t('Support instrument'),
      'ef_spotlight_entry' => t('Spotlight entry'),
      'ef_survey' => t('Survey'),
    ),
  );

  return $options;
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function ef_basics_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: ef_home_page_media
  $nodequeues['ef_home_page_media'] = array(
    'name' => 'ef_home_page_media',
    'title' => 'Home Page Media',
    'subqueue_title' => '',
    'size' => 1,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'ef_photo_gallery',
      1 => 'ef_video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: ef_home_page_nodequeue
  $nodequeues['ef_home_page_nodequeue'] = array(
    'name' => 'ef_home_page_nodequeue',
    'title' => 'Home Page Nodequeue',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'ef_event',
      1 => 'ef_news',
      2 => 'ef_publication',
      3 => 'ef_report',
      4 => 'ef_support_instrument',
      5 => 'ef_video',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: emcc_landing_page_nodequeue
  $nodequeues['emcc_landing_page_nodequeue'] = array(
    'name' => 'emcc_landing_page_nodequeue',
    'title' => 'EMCC Landing Page Nodequeue',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'ef_case_study',
      1 => 'ef_comparative_analytical_report',
      2 => 'ef_factsheet',
      3 => 'ef_input_to_erm',
      4 => 'ef_ir_dictionary',
      5 => 'ef_network_quarterly_report',
      6 => 'ef_news',
      7 => 'ef_publication',
      8 => 'ef_report',
      9 => 'ef_restructuring_in_smes',
      10 => 'ef_spotlight_entry',
      11 => 'ef_support_instrument',
      12 => 'page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: eurwork_landing_page_nodequeue
  $nodequeues['eurwork_landing_page_nodequeue'] = array(
    'name' => 'eurwork_landing_page_nodequeue',
    'title' => 'EurWORK Landing Page Nodequeue',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'ef_case_study',
      1 => 'ef_comparative_analytical_report',
      2 => 'ef_event',
      3 => 'ef_factsheet',
      4 => 'ef_ic_quarterly_report',
      5 => 'ef_input_to_erm',
      6 => 'ef_ir_dictionary',
      7 => 'ef_national_contribution',
      8 => 'ef_network_quarterly_report',
      9 => 'ef_news',
      10 => 'ef_photo_gallery',
      11 => 'ef_publication',
      12 => 'ef_quarterly_report',
      13 => 'ef_regulation',
      14 => 'ef_report',
      15 => 'ef_restructuring_in_smes',
      16 => 'ef_spotlight_entry',
      17 => 'ef_support_instrument',
      18 => 'ef_survey',
      19 => 'ef_vacancy',
      20 => 'ef_video',
      21 => 'page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function ef_basics_image_default_styles() {
  $styles = array();

  // Exported image style: ef_featured_thumbnail.
  $styles['ef_featured_thumbnail'] = array(
    'name' => 'ef_featured_thumbnail',
    'label' => 'Featured Thumbnail',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 405,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ef_basics_node_info() {
  $items = array(
    'board_member_page' => array(
      'name' => t('Board Member page'),
      'base' => 'node_content',
      'description' => t('Use <em>Board Member pages</em> for your static content in the board-members-extranet section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_contact_form' => array(
      'name' => t('Contact form'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_emire_dictionary' => array(
      'name' => t('EMIRE dictionary'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_popupblock_defaults().
 */
function ef_basics_popupblock_defaults() {
  return array(
    'shortcut:shortcuts' => array(
      'active' => 1,
      'format' => 'Shortcuts block',
      'title-length' => 10,
    ),
  );
}

/**
 * Implements hook_popupformat_defaults().
 */
function ef_basics_popupformat_defaults() {
  return array(
    'Shortcuts block' => array(
      'label' => 'Shortcuts block',
      'origin' => 'bottom-left',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'style' => 'Bent white',
      'opacity' => '1.0',
      'width' => 250,
      'activate' => 'click',
      'close' => 1,
      'ajax' => 0,
      'teaser' => 0,
      'inline' => 0,
      'flat' => 0,
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
    ),
  );
}
