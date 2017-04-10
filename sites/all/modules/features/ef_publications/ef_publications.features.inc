<?php
/**
 * @file
 * ef_publications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_publications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ef_publications_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ef_publications_node_info() {
  $items = array(
    'ef_case_study' => array(
      'name' => t('Case study'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_comparative_analytical_report' => array(
      'name' => t('Comparative analytical report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_ic_quarterly_report' => array(
      'name' => t('IC quarterly report'),
      'base' => 'node_content',
      'description' => t('Significant topics of discussion, national initiatives and related upcoming high-level thematic events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Significant topics of discussion, national initiatives and related upcoming high-level thematic events.<br/>
<br/>
Please list the most significant upcoming developments in your Member State in relation to Eurofound’s field of activities (industrial relations and working conditions, labour market, employment and restructuring and related social policy topics).  These should either be important thematic events, policy debates or national initiatives that take place within the next three months.<br/>'),
    ),
    'ef_national_contribution' => array(
      'name' => t('National contribution'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_network_quarterly_report' => array(
      'name' => t('Network quarterly report'),
      'base' => 'node_content',
      'description' => t('This reporting is intended to be brief and descriptive (what, when, which actors) and to indicate why the matter is significant for a European audience. Relevant links should be included.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('This reporting is intended to be brief and descriptive (what, when, which actors) and to indicate why the matter is significant for a European audience. Relevant links should be included.<br/>
<br/>
The purpose of this template is to capture reporting on important developments, relevant data, analysis and research (see below) mainly in the areas of industrial relations and working conditions in European Member States.
<br/>
It is addressed to national correspondents of the European Observatory of Working Life.<br/>

See more detailed <a href="/page/instructions-for-filling-in-the-network-quarterly-report-form">content instructions</a>.'),
    ),
    'ef_publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_quarterly_report' => array(
      'name' => t('Quarterly report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ef_report' => array(
      'name' => t('EF article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
