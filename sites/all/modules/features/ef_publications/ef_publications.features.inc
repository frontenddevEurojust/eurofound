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
      'help' => t('This reporting should be about <strong>important developments</strong> and new <strong>major research results</strong> in the area of working conditions and industrial relations. It is not about providing the latest news and headlines.
<ul>
<li>Every ‘item’ to be reported should contain about 200-300 words (max 400, exceptionally). It should be possible to use such items as ‘in-brief’ articles. Shorter items are not meaningful. Please include a heading for each item to be reported.</li>
<li>More contextualisation and assessment is needed.</li>
<li>Less is more. Be selective and focus on the most important issues.</li>
<li>Try to stick to the indicated word limit for your country group: Group C: 1500 words: 4-5 items. Group B: 2500 words: 8-10 items. Group A: 4500 words: 10-15 items + 600 words of integrated summary/commentary to be published as a ‘country update’.</li>
<li>Please indicate, in the text, which items you think should be put as ‘in-brief’ articles or other articles. Only a limited selection (2-3) per country can be published.</li>
</ul>
<p><a href="http://www.eurofound.europa.eu/quarterlies-instructions-general-brief">Read more on the above points</a>.</p> 
<p>We will continue to draw your attention to ongoing areas of interest at European level via the ‘guiding topics’. Please have a look at the current guiding topics/questions on the <a href="http://eurofound.europa.eu/resources-for-the-quarterly-reporting-for-eurwork-and-ic">Resource page for the quarterly reporting on the network page</a>.</p>
'),
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
