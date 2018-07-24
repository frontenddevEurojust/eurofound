<?php

populateRules();

/**
 * Populates menu position rules, based either on CT or on path.
 * It can be ran many times, having always the same result.
 * Initially, it deletes all existing menu rules, so that no duplicated rules exist.
 * Logs rules that cannot be added due to missing menu parent link.
 * @see https://swsblog.stanford.edu/blog/creating-menu-position-rule-programatically
 * @see https://www.drupal.org/node/1001538
**/ 
function populateRules() {
  module_load_include('inc', 'menu_position', 'menu_position.admin');

  deleteAllRules();

  addRulesForLanguage('en');

  $languages = array(
    'bg',
    'cs',
    'da',
    'de',
    'el',
    'es',
    'et',
    'fi',
    'fr',
    'ga',
    'hr',
    'hu',
    'it',
    'lt',
    'lv',
    'mk',
    'mt',
    'nl',
    'pl',
    'pt',
    'ro',
    'sk',
    'sl',
    'sv',
    'tr'
  );

  foreach ($languages as $lang) {
    addRulesForLanguage($lang);
  }

  echo "\nadded all\n";
}

function addRulesForLanguage($lang) {
  addCTRule('Node: Publication' . ' - ' . $lang,'ef_publication','publications', $lang);
  addCTRule('Node: News' . ' - ' . $lang,'ef_news','news/news-articles', $lang);
  addPathRule('Node: Spotlight entry. Path: employment' . ' - ' . $lang,'news/spotlight-on/employment/*','news/spotlight-on/employment', $lang);
  addPathRule('Node: Spotlight entry. Path: quality-of-life' . ' - ' . $lang,'news/spotlight-on/quality-of-life/*','news/spotlight-on/quality-of-life', $lang);
  addPathRule('Node: Spotlight entry. Path: quality-of-work' . ' - ' . $lang,'news/spotlight-on/quality-of-work/*','news/spotlight-on/quality-of-work', $lang);
  addPathRule('Node: Spotlight entry. Path: youth' . ' - ' . $lang,'news/spotlight-on/youth/*','news/spotlight-on/youth', $lang);
  addCTRule('Node: Simplenews Newsletter' . ' - ' . $lang,'simplenews','news/newsletters', $lang);
  addCTRule('Node: Photo gallery' . ' - ' . $lang,'ef_photo_gallery','news/media', $lang);
  addCTRule('Node: Video' . ' - ' . $lang,'ef_video','news/media', $lang);
  addCTRule('Node: Event' . ' - ' . $lang,'ef_event','events', $lang);
  addPathRule('Node: Survey. Path: eqls' . ' - ' . $lang,'surveys/eqls/*/*','surveys/eqls', $lang);
  addPathRule('Node: Survey. Path: ecs' . ' - ' . $lang,'surveys/ecs/*/*','surveys/ecs', $lang);
  addPathRule('Node: Survey. Path: ewcs' . ' - ' . $lang,'surveys/ewcs/*/*','surveys/ewcs', $lang);
  addCTRule('Node: DVS Survey' . ' - ' . $lang,'dvs_survey','surveys/data-visualisation', $lang);
  addPathRule('Node: EF Article. Path: emcc' . ' - ' . $lang,'observatories/emcc/articles/*','observatories/emcc/articles', $lang);
  addPathRule('Node: EF Article. Path: eurwork' . ' - ' . $lang,'observatories/eurwork/articles/*','observatories/eurwork/articles', $lang);
  addPathRule('Node: CAR. Path: emcc' . ' - ' . $lang,'observatories/emcc/comparative-information/*','observatories/emcc/comparative-information', $lang);
  addPathRule('Node: CAR. Path: eurwork' . ' - ' . $lang,'observatories/eurwork/comparative-information/*','observatories/eurwork/comparative-information', $lang);
  addPathRule('Node: National contribution. Path: emcc' . ' - ' . $lang,'observatories/emcc/comparative-information/*','observatories/emcc/comparative-information', $lang);
  addPathRule('Node: National contribution. Path: eurwork' . ' - ' . $lang,'observatories/eurwork/comparative-information/*','observatories/eurwork/comparative-information', $lang);
  //addCTRule('Node: National contribution' . ' - ' . $lang,'ef_national_contribution','observatories/emcc/erm/comparative-information', $lang);
  addCTRule('Node: Factsheet' . ' - ' . $lang,'ef_factsheet','observatories/emcc/erm/factsheets', $lang);
  addCTRule('Node: Support instrument' . ' - ' . $lang,'ef_support_instrument','observatories/emcc/erm/support-instruments', $lang);
  addCTRule('Node: Regulation' . ' - ' . $lang,'ef_regulation','observatories/emcc/erm/legislation', $lang);
  addCTRule('Node: Restructuring In SMEs' . ' - ' . $lang,'ef_restructuring_in_smes','observatories/emcc/erm/restructuring-in-smes', $lang);
  addCTRule('Node: Input to ERM' . ' - ' . $lang,'ef_input_to_erm','observatories/emcc/erm', $lang);
  addPathRule('Node: Case study. Path: restructuring-in-smes-in-europe' . ' - ' . $lang,'observatories/emcc/case-studies/restructuring-in-smes-in-europe/*','observatories/emcc/case-studies/restructuring-in-smes-in-europe', $lang);
  addPathRule('Node: Case study. Path: the-greening-of-industries-in-the-eu' . ' - ' . $lang,'observatories/emcc/case-studies/the-greening-of-industries-in-the-eu/*','observatories/emcc/case-studies/the-greening-of-industries-in-the-eu', $lang);
  addPathRule('Node: Case study. Path: tackling-undeclared-work-in-europe' . ' - ' . $lang,'observatories/emcc/case-studies/tackling-undeclared-work-in-europe/*','observatories/emcc/case-studies/tackling-undeclared-work-in-europe', $lang);
  addPathRule('Node: Case study. Path: attractive-workplace-for-all' . ' - ' . $lang,'observatories/eurwork/case-studies/attractive-workplace-for-all/*','observatories/eurwork/case-studies/attractive-workplace-for-all', $lang);
  addPathRule('Node: Case study. Path: ageing-workforce' . ' - ' . $lang,'observatories/eurwork/case-studies/ageing-workforce/*','observatories/eurwork/case-studies/ageing-workforce', $lang);
  addPathRule('Node: Case study. Path: workers-with-care-responsibilities' . ' - ' . $lang,'observatories/eurwork/case-studies/workers-with-care-responsibilities/*','observatories/eurwork/case-studies/workers-with-care-responsibilities', $lang);
  addCTRule('Node: IR Dictionary' . ' - ' . $lang,'ef_ir_dictionary','observatories/eurwork/industrial-relations-dictionary', $lang);
  addCTRule('Node: Network quarterly report' . ' - ' . $lang,'ef_network_quarterly_report','observatories/emcc', $lang);
  addCTRule('Node: IC quarterly report' . ' - ' . $lang,'ef_ic_quarterly_report','observatories/emcc', $lang);
  addCTRule('Node: Call for Tenders' . ' - ' . $lang,'ef_call_for_tender','about/procurement/opportunities', $lang);
  addCTRule('Node: Vacancy' . ' - ' . $lang,'ef_vacancy','about/vacancies/positions', $lang);

  addPathRule('Node: CWB. Path: outcomes' . ' - ' . $lang,'observatories/eurwork/collective-wage-bargaining/outcomes*','observatories/eurwork/collective-wage-bargaining/context', $lang);
  addPathRule('Node: CWB. Path: eiro-timeline' . ' - ' . $lang,'observatories/eurwork/collective-wage-bargaining/eiro-timeline*','observatories/eurwork/collective-wage-bargaining/context', $lang);
  addPathRule('Node: CWB. Path: sources' . ' - ' . $lang,'observatories/eurwork/collective-wage-bargaining/sources*','observatories/eurwork/collective-wage-bargaining/context', $lang);
  addPathRule('Node: CWB. Path: time-series' . ' - ' . $lang,'observatories/eurwork/collective-wage-bargaining/time-series*','observatories/eurwork/collective-wage-bargaining/context', $lang);
  addPathRule('Node: CWB. Path: timeline' . ' - ' . $lang,'observatories/eurwork/collective-wage-bargaining/timeline*','observatories/eurwork/collective-wage-bargaining/context', $lang);
  addPathRule('Node: CWB. Path: country-info' . ' - ' . $lang,'observatories/eurwork/collective-wage-bargaining/country-info*','observatories/eurwork/collective-wage-bargaining/context', $lang);
}

/**
 * Delete all existing rules.
**/
function deleteAllRules() {
  $rids = db_query("SELECT rid FROM {menu_position_rules}")->fetchCol();
  foreach ($rids as $rid) {
      menu_position_delete_rule($rid);
  } 
  echo "deleted all\n\n";
}


function addCTRule($ruleTitle, $ctMachineName, $link_path, $lang_code) {
  $conditions = array(
    'content_type' => array(
      'content_type' => array(
        $ctMachineName => $ctMachineName, // activate the Menu Position rule on every node of this CT
      ),  
    ),  
  );
  addRuleWithPlid($ruleTitle, $conditions, getMlidWithPathAndLanguage($link_path, $lang_code));
}

function addPathRule($ruleTitle, $urlPath, $link_path, $lang_code) {
  $conditions = array(
    'pages' => array(
      'pages' => $urlPath, // activate the Menu Position rule on every path under $urlPath
    ),  
  );
  addRuleWithPlid($ruleTitle, $conditions, getMlidWithPathAndLanguage($link_path, $lang_code));
}


function addRuleWithPlid($ruleTitle, $conditions, $plid) {
  if (!is_null($plid)) {
    $rule = array(
      'admin_title' => $ruleTitle,
      'conditions' => $conditions,  
      'menu_name' => 'main-menu',
      'plid' => $plid,
    );

    // By calling menu_position_add_rule() here, we're assuming that this exact rule does not exist
    menu_position_add_rule($rule);

    //fixes bug with menu rules parent becoming hidden in non current language
    $parent = menu_link_load($plid);
    $parent['hidden'] = 0;
    menu_link_save($parent);

  } else {
    echo $ruleTitle . ": parent not exists\n";
  }
}


/**
 * Grab a menu link item with the specified path and language
 */
function getMlidWithPathAndLanguage($link_path, $lang_code) {
  $source_system_path = drupal_lookup_path('source', $link_path, 'en');
  $source_system_path = $source_system_path == null || $source_system_path === '' ? $link_path : $source_system_path;

  $result = db_select('menu_links', 'm')
    ->fields('m', array('mlid'))
    ->condition('menu_name', 'main-menu')
    ->condition('link_path', $source_system_path)
    ->condition('language', $lang_code)
    ->execute()
    ->fetchAssoc();

  return $result['mlid'];
}


?>