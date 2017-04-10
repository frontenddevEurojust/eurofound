<?php 
define('DRUPAL_ROOT', getcwd() . "/../../../../"); 
require_once DRUPAL_ROOT . 'includes/bootstrap.inc'; 
set_include_path(get_include_path() . PATH_SEPARATOR . DRUPAL_ROOT);
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

header('Content-type: text/html; charset=utf-8');
echo "<pre><style>.error{background:red;margin-left:5px;margin-right:5px}</style>";
echo "<pre><style>.warning{background:orange;margin-left:5px;margin-right:5px}</style>";
echo "<pre><style>.message{background:#6FE302;margin-left:5px;margin-right:5px}</style>";

global $user;
$user = user_load(1);

set_time_limit(20000); // 90 minutes
error_reporting(E_ALL);
ini_set('display_errors', TRUE);
ini_set('display_startup_errors', TRUE);

$languages = language_list();
$GLOBALS['language'] = $languages['en'];

$errors_count = 0;
$warnings_count = 0;

//$host = 'http://eurofound.europa.eu/';
$host = 'http://'.$_SERVER['SERVER_NAME'].'/';
//$host = 'http://easa.1/';

// ---------------- mappings useful for migration ------------------------//



$instrumentsPhasesVocabulary = taxonomy_vocabulary_machine_name_load("ef_instrument_phases");
assertNotNull($instrumentsPhasesVocabulary, "Instruments Phases does not exist");
$instrumentsPhasesTerms = taxonomy_get_tree($instrumentsPhasesVocabulary->vid);
$instrumentsPhasesToDrupalTaxonomyIds = array();
foreach ($instrumentsPhasesTerms as $term) {
	$instrumentsPhasesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$instrumentsCategoriesVocabulary = taxonomy_vocabulary_machine_name_load("ef_instrument_categories");
assertNotNull($instrumentsCategoriesVocabulary, "Instruments Categories does not exist");
$instrumentsCategoriesTerms = taxonomy_get_tree($instrumentsCategoriesVocabulary->vid);
$instrumentsCategoriesToDrupalTaxonomyIds = array();
foreach ($instrumentsCategoriesTerms as $term) {
	$instrumentsCategoriesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$instrumentsFundingsVocabulary = taxonomy_vocabulary_machine_name_load("ef_instrument_fundings");
assertNotNull($instrumentsFundingsVocabulary, "Instruments Fundings does not exist");
$instrumentsFundingsTerms = taxonomy_get_tree($instrumentsFundingsVocabulary->vid);
$instrumentsFundingsToDrupalTaxonomyIds = array();
foreach ($instrumentsFundingsTerms as $term) {
	$instrumentsFundingsToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$instrumentsInvolvementsVocabulary = taxonomy_vocabulary_machine_name_load("ef_instrument_involvement_types");
assertNotNull($instrumentsInvolvementsVocabulary, "Instruments Involvements does not exist");
$instrumentsInvolvementsTerms = taxonomy_get_tree($instrumentsInvolvementsVocabulary->vid);
$instrumentsInvolvementsToDrupalTaxonomyIds = array();
foreach ($instrumentsInvolvementsTerms as $term) {
	$instrumentsInvolvementsToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$regulationFundingsVocabulary = taxonomy_vocabulary_machine_name_load("ef_regulation_fundings");
assertNotNull($regulationFundingsVocabulary, "Regulation fundings does not exist");
$regulationFundingsTerms = taxonomy_get_tree($regulationFundingsVocabulary->vid);
$regulationFundingsToDrupalTaxonomyIds = array();
foreach ($regulationFundingsTerms as $term) {
	$regulationFundingsToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$regulationInvolvementsVocabulary = taxonomy_vocabulary_machine_name_load("ef_regulation_involvements");
assertNotNull($regulationInvolvementsVocabulary, "Regulation involvements does not exist");
$regulationInvolvementsTerms = taxonomy_get_tree($regulationInvolvementsVocabulary->vid);
$regulationInvolvementsToDrupalTaxonomyIds = array();
foreach ($regulationInvolvementsTerms as $term) {
	$regulationInvolvementsToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}

$regulationPhasesVocabulary = taxonomy_vocabulary_machine_name_load("ef_regulation_phases");
assertNotNull($regulationPhasesVocabulary, "Regulation Phases does not exist");
$regulationPhasesTerms = taxonomy_get_tree($regulationPhasesVocabulary->vid);
$regulationPhasesToDrupalTaxonomyIds = array();
foreach ($regulationPhasesTerms as $term) {
	$regulationPhasesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}

$regulationThresholdsVocabulary = taxonomy_vocabulary_machine_name_load("ef_regulation_thresholds");
assertNotNull($regulationThresholdsVocabulary, "Regulation Thresholds does not exist");
$regulationThresholdsTerms = taxonomy_get_tree($regulationThresholdsVocabulary->vid);
$regulationThresholdsToDrupalTaxonomyIds = array();
foreach ($regulationThresholdsTerms as $term) {
	$regulationThresholdsToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$regulationTypesVocabulary = taxonomy_vocabulary_machine_name_load("ef_regulation_types");
assertNotNull($regulationTypesVocabulary, "Regulation Types does not exist");
$regulationTypesTerms = taxonomy_get_tree($regulationTypesVocabulary->vid);
$regulationTypesToDrupalTaxonomyIds = array();
foreach ($regulationTypesTerms as $term) {
	$regulationTypesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}



$restructuringKeywordsVocabulary = taxonomy_vocabulary_machine_name_load("ef_restructuring_keywords");
assertNotNull($restructuringKeywordsVocabulary, "Regulation Types does not exist");
$restructuringKeywordsTerms = taxonomy_get_tree($restructuringKeywordsVocabulary->vid);
$restructuringKeywordsToDrupalTaxonomyIds = array();
foreach ($restructuringKeywordsTerms as $term) {
	$restructuringKeywordsToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$restructuringTypesVocabulary = taxonomy_vocabulary_machine_name_load("ef_restructuring_types");
assertNotNull($restructuringTypesVocabulary, "Restructuring Types does not exist");
$restructuringTypesTerms = taxonomy_get_tree($restructuringTypesVocabulary->vid);
$restructuringTypesToDrupalTaxonomyIds = array();
foreach ($restructuringTypesTerms as $term) {
	$restructuringTypesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$companySizesVocabulary = taxonomy_vocabulary_machine_name_load("ef_company_sizes");
assertNotNull($companySizesVocabulary, "Company Sizes does not exist");
$companySizesTerms = taxonomy_get_tree($companySizesVocabulary->vid);
$companySizesToDrupalTaxonomyIds = array();
foreach ($companySizesTerms as $term) {
	$companySizesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}

$naceCodesVocabulary = taxonomy_vocabulary_machine_name_load("ef_nace_codes");
assertNotNull($naceCodesVocabulary, "Nace Codes does not exist");
$naceCodesTerms = taxonomy_get_tree($naceCodesVocabulary->vid);
$naceCodesToDrupalTaxonomyIds = array();
foreach ($naceCodesTerms as $term) {
	$naceCodesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$spotlightThemesVocabulary = taxonomy_vocabulary_machine_name_load("ef_spotlight_themes");
assertNotNull($spotlightThemesVocabulary, "Spotlight Themes does not exist");
$spotlightThemesTerms = taxonomy_get_tree($spotlightThemesVocabulary->vid);
$spotlightThemesToDrupalTaxonomyIds = array();
foreach ($spotlightThemesTerms as $term) {
	$spotlightThemesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


$caseStudyTypesVocabulary = taxonomy_vocabulary_machine_name_load("ef_case_study_names");
assertNotNull($caseStudyTypesVocabulary, "Case StudyTypes does not exist");
$caseStudyTypesTerms = taxonomy_get_tree($caseStudyTypesVocabulary->vid);
$caseStudyTypesToDrupalTaxonomyIds = array();
foreach ($caseStudyTypesTerms as $term) {
	$caseStudyTypesToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}

function getCaseStudyTypeId($text) {
	global $caseStudyTypesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $caseStudyTypesToDrupalTaxonomyIds[$text];
}


$observatoryVocabulary = taxonomy_vocabulary_machine_name_load("ef_observatories");
assertNotNull($observatoryVocabulary, "Observatory does not exist");
$observatoryTerms = taxonomy_get_tree($observatoryVocabulary->vid);
$observatoryToDrupalTaxonomyIds = array();
foreach ($observatoryTerms as $term) {
	$observatoryToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


function getObservatoryId($text) {
	global $observatoryToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $observatoryToDrupalTaxonomyIds[$text];
}

function getTaxonomyTermParents($id){
	$termParents=taxonomy_get_parents_all($id);
	$parents=array();
	foreach($termParents as $term){
		$parents[]=array('tid'=>$term->tid);
	}
	return array_reverse($parents);
}


$sectorsVocabulary = taxonomy_vocabulary_machine_name_load("ef_sectors");
assertNotNull($sectorsVocabulary, "Sectors does not exist");
$sectorsTerms = taxonomy_get_tree($sectorsVocabulary->vid);
$sectorsToDrupalTaxonomyIds = array();
foreach ($sectorsTerms as $term) {
	$sectorsToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}


function getSectorId($text) {
	global $sectorsToDrupalTaxonomyIds;
	$text = trim($text);
	$text=str_replace(" and "," & ",$text);
	$text = strtolower($text);
	return $sectorsToDrupalTaxonomyIds[$text];
}


$topicsVocabulary = taxonomy_vocabulary_machine_name_load("ef_topics");
assertNotNull($topicsVocabulary, "Topics does not exist");
$topicsTerms = taxonomy_get_tree($topicsVocabulary->vid);
$topicsToDrupalTaxonomyIds = array();
foreach ($topicsTerms as $term) {
	$topicsToDrupalTaxonomyIds[trim(strtolower($term->name))] = $term->tid;
}

function getTopicId($text) {
	global $topicsToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $topicsToDrupalTaxonomyIds[$text];
}

function extractHrefs($html){
	//Create a new DOM document
	$dom = new DOMDocument;
	//Parse the HTML. The @ is used to suppress any parsing errors
	//that will be thrown if the $html string isn't valid XHTML.
	@$dom->loadHTML($html);
	//Get all links. You could also use any other tag name here,
	//like 'img' or 'table', to extract other tags.
	$links = $dom->getElementsByTagName('a');
	$hrefs=array();
	//Iterate over the extracted links and display their URLs
	foreach ($links as $link){
		$hrefs[]=array('title'=>truncate_utf8($link->nodeValue,128),'link'=>$link->getAttribute('href'));
	}
	return $hrefs;
}

$countriesToIsoCodes = array (
	"Afghanistan"=>"AF", 
	"Aland Islands"=>"AX", 
	"Albania"=>"AL", 
	"Algeria"=>"DZ", 
	"American Samoa"=>"AS", 
	"Andorra"=>"AD", 
	"Angola"=>"AO", 
	"Anguilla"=>"AI", 
	"Antarctica"=>"AQ", 
	"Antigua and Barbuda"=>"AG", 
	"Argentina"=>"AR", 
	"Armenia"=>"AM", 
	"Aruba"=>"AW", 
	"Australia"=>"AU", 
	"Austria"=>"AT", 
	"Azerbaijan"=>"AZ", 
	"Bahamas"=>"BS", 
	"Bahrain"=>"BH", 
	"Bangladesh"=>"BD", 
	"Barbados"=>"BB", 
	"Belarus"=>"BY", 
	"Belgium"=>"BE", 
	"Belize"=>"BZ", 
	"Benin"=>"BJ", 
	"Bermuda"=>"BM", 
	"Bhutan"=>"BT", 
	"Bolivia"=>"BO", 
	"Bosnia and Herzegovina"=>"BA", 
	"Bonaire, Sint Eustatius and Saba"=>"BQ", 
	"Botswana"=>"BW", 
	"Bouvet Island"=>"BV", 
	"Brazil"=>"BR", 
	"British Indian Ocean Territory"=>"IO", 
	"Brunei"=>"BN", 
	"Bulgaria"=>"BG", 
	"Burkina Faso"=>"BF", 
	"Burundi"=>"BI", 
	"Cambodia"=>"KH", 
	"Cameroon"=>"CM", 
	"Canada"=>"CA", 
	"Cape Verde"=>"CV", 
	"Cayman Islands"=>"KY", 
	"Central African Republic"=>"CF", 
	"Chad"=>"TD", 
	"Chile"=>"CL", 
	"China"=>"CN", 
	"Christmas Island"=>"CX", 
	"Cocos (Keeling) Islands"=>"CC", 
	"Colombia"=>"CO", 
	"Comoros"=>"KM", 
	"Congo (Brazzaville)"=>"CG", 
	"Congo (Kinshasa)"=>"CD", 
	"Cook Islands"=>"CK", 
	"Costa Rica"=>"CR", 
	"Ivory Coast"=>"CI", 
	"Croatia"=>"HR", 
	"Cuba"=>"CU", 
	"Curacao"=>"CW", 
	"Cyprus"=>"CY", 
	"Czech Republic"=>"CZ", 
	"Denmark"=>"DK", 
	"Djibouti"=>"DJ", 
	"Dominica"=>"DM", 
	"Dominican Republic"=>"DO", 
	"Ecuador"=>"EC", 
	"Egypt"=>"EG", 
	"El Salvador"=>"SV", 
	"Equatorial Guinea"=>"GQ", 
	"Eritrea"=>"ER", 
	"Estonia"=>"EE", 
	"Ethiopia"=>"ET", 
	"Falkland Islands"=>"FK", 
	"Faroe Islands"=>"FO", 
	"Fiji"=>"FJ", 
	"Finland"=>"FI", 
	"France"=>"FR", 
	"French Guiana"=>"GF", 
	"French Polynesia"=>"PF", 
	"French Southern Territories"=>"TF", 
	"Gabon"=>"GA", 
	"Gambia"=>"GM", 
	"Georgia"=>"GE", 
	"Germany"=>"DE", 
	"Ghana"=>"GH", 
	"Gibraltar"=>"GI", 
	"Greece"=>"GR", 
	"Greenland"=>"GL", 
	"Grenada"=>"GD", 
	"Guadeloupe"=>"GP", 
	"Guam"=>"GU", 
	"Guatemala"=>"GT", 
	"Guernsey"=>"GG", 
	"Guinea"=>"GN", 
	"Guinea-Bissau"=>"GW", 
	"Guyana"=>"GY", 
	"Haiti"=>"HT", 
	"Heard Island and McDonald Islands"=>"HM", 
	"Vatican"=>"VA", 
	"Honduras"=>"HN", 
	"Hong Kong S.A.R., China"=>"HK", 
	"Hungary"=>"HU", 
	"Iceland"=>"IS", 
	"India"=>"IN", 
	"Indonesia"=>"ID", 
	"Iran"=>"IR", 
	"Iraq"=>"IQ", 
	"Ireland"=>"IE", 
	"Isle of Man"=>"IM", 
	"Israel"=>"IL", 
	"Italy"=>"IT", 
	"Jamaica"=>"JM", 
	"Japan"=>"JP", 
	"Jersey"=>"JE", 
	"Jordan"=>"JO", 
	"Kazakhstan"=>"KZ", 
	"Kenya"=>"KE", 
	"Kiribati"=>"KI", 
	"North Korea"=>"KP", 
	"South Korea"=>"KR", 
	"Kuwait"=>"KW", 
	"Kyrgyzstan"=>"KG", 
	"Laos"=>"LA", 
	"Latvia"=>"LV", 
	"Lebanon"=>"LB", 
	"Lesotho"=>"LS", 
	"Liberia"=>"LR", 
	"Libya"=>"LY", 
	"Liechtenstein"=>"LI", 
	"Lithuania"=>"LT", 
	"Luxembourg"=>"LU", 
	"Macao S.A.R., China"=>"MO", 
	"Macedonia"=>"MK", 
	"Madagascar"=>"MG", 
	"Malawi"=>"MW", 
	"Malaysia"=>"MY", 
	"Maldives"=>"MV", 
	"Mali"=>"ML", 
	"Malta"=>"MT", 
	"Marshall Islands"=>"MH", 
	"Martinique"=>"MQ", 
	"Mauritania"=>"MR", 
	"Mauritius"=>"MU", 
	"Mayotte"=>"YT", 
	"Mexico"=>"MX", 
	"Micronesia"=>"FM", 
	"Moldova"=>"MD", 
	"Monaco"=>"MC", 
	"Mongolia"=>"MN", 
	"Montenegro"=>"ME", 
	"Montserrat"=>"MS", 
	"Morocco"=>"MA", 
	"Mozambique"=>"MZ", 
	"Myanmar"=>"MM", 
	"Namibia"=>"NA", 
	"Nauru"=>"NR", 
	"Nepal"=>"NP", 
	"Netherlands"=>"NL", 
	"Netherlands Antilles"=>"AN", 
	"New Caledonia"=>"NC", 
	"New Zealand"=>"NZ", 
	"Nicaragua"=>"NI", 
	"Niger"=>"NE", 
	"Nigeria"=>"NG", 
	"Niue"=>"NU", 
	"Norfolk Island"=>"NF", 
	"Northern Mariana Islands"=>"MP", 
	"Norway"=>"NO", 
	"Oman"=>"OM", 
	"Pakistan"=>"PK", 
	"Palau"=>"PW", 
	"Palestinian Territory"=>"PS", 
	"Panama"=>"PA", 
	"Papua New Guinea"=>"PG", 
	"Paraguay"=>"PY", 
	"Peru"=>"PE", 
	"Philippines"=>"PH", 
	"Pitcairn"=>"PN", 
	"Poland"=>"PL", 
	"Portugal"=>"PT", 
	"Puerto Rico"=>"PR", 
	"Qatar"=>"QA", 
	"Reunion"=>"RE", 
	"Romania"=>"RO", 
	"Russia"=>"RU", 
	"Rwanda"=>"RW", 
	"Saint Barthelemy"=>"BL", 
	"Saint Helena"=>"SH", 
	"Saint Kitts and Nevis"=>"KN", 
	"Saint Lucia"=>"LC", 
	"Saint Martin (French part)"=>"MF", 
	"Saint Pierre and Miquelon"=>"PM", 
	"Saint Vincent and the Grenadines"=>"VC", 
	"Samoa"=>"WS", 
	"San Marino"=>"SM", 
	"Sao Tome and Principe"=>"ST", 
	"Saudi Arabia"=>"SA", 
	"Senegal"=>"SN", 
	"Serbia"=>"RS", 
	"Seychelles"=>"SC", 
	"Sierra Leone"=>"SL", 
	"Singapore"=>"SG", 
	"Sint Maarten (Dutch part)"=>"SX", 
	"Slovakia"=>"SK", 
	"Slovenia"=>"SI", 
	"Solomon Islands"=>"SB", 
	"Somalia"=>"SO", 
	"South Africa"=>"ZA", 
	"South Georgia and the South Sandwich Islands"=>"GS", 
	"Spain"=>"ES", 
	"Sri Lanka"=>"LK", 
	"South Sudan"=>"SS", 
	"Sudan"=>"SD", 
	"Suriname"=>"SR", 
	"Svalbard and Jan Mayen"=>"SJ", 
	"Swaziland"=>"SZ", 
	"Sweden"=>"SE", 
	"Switzerland"=>"CH", 
	"Syria"=>"SY", 
	"Taiwan"=>"TW", 
	"Tajikistan"=>"TJ", 
	"Tanzania"=>"TZ", 
	"Thailand"=>"TH", 
	"Timor-Leste"=>"TL", 
	"Togo"=>"TG", 
	"Tokelau"=>"TK", 
	"Tonga"=>"TO", 
	"Trinidad and Tobago"=>"TT", 
	"Tunisia"=>"TN", 
	"Turkey"=>"TR", 
	"Turkmenistan"=>"TM", 
	"Turks and Caicos Islands"=>"TC", 
	"Tuvalu"=>"TV", 
	"Uganda"=>"UG", 
	"Ukraine"=>"UA", 
	"United Arab Emirates"=>"AE", 
	"United Kingdom"=>"GB", 
	"United States"=>"US", 
	"United States Minor Outlying Islands"=>"UM", 
	"Uruguay"=>"UY", 
	"Uzbekistan"=>"UZ", 
	"Vanuatu"=>"VU", 
	"Venezuela"=>"VE", 
	"Vietnam"=>"VN", 
	"British Virgin Islands"=>"VG", 
	"U.S. Virgin Islands"=>"VI", 
	"Wallis and Futuna"=>"WF", 
	"Western Sahara"=>"EH", 
	"Yemen"=>"YE", 
	"Zambia"=>"ZM", 
	"Zimbabwe"=>"ZW", 
	"EU Level"=>"EU", 
	"EU Member States"=>"EM"
);


function getSpotlightThemeId($text) {
	$mappingsFromOld=array("older people"=>"older people/ageing");
	global $spotlightThemesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	if(isset($spotlightThemesToDrupalTaxonomyIds[$text])) {
		return $spotlightThemesToDrupalTaxonomyIds[$text];
	} else {
		return $spotlightThemesToDrupalTaxonomyIds[$mappingsFromOld[$text]];
	}
	
}

// ---------------- db related functions  ------------------------//

function getLanguageId($text) {
	global $languagesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	$result = $languagesToDrupalTaxonomyIds[$text];
	if (!$result) {
		$result = $languagesToDrupalTaxonomyIds['english'];
	}
	return $result;
}

function getProjectAreaId($text) {
	global $areasToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $areasToDrupalTaxonomyIds[$text];
}

function getProjectStatusId($text) {
	global $statusesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $statusesToDrupalTaxonomyIds[$text];
}

function getDecisionCategoryId($text) {
	global $decisionCategoriesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $decisionCategoriesToDrupalTaxonomyIds[$text];
}

function getAmcId($text) {
	global $amcsToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $amcsToDrupalTaxonomyIds[$text];
}

function getCertificationSpecificationId($text) {
	global $csToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $csToDrupalTaxonomyIds[$text];
}

function getManufacturerId($text) {
	global $mmToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $mmToDrupalTaxonomyIds[$text];
}

function getProductTypeId($text) {
	global $productTypesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $productTypesToDrupalTaxonomyIds[$text];
}

function getPublicationTypeId($text) {
	global $publicationTypesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $publicationTypesToDrupalTaxonomyIds[$text];
}

function getApplicationFormCategoryId($text) {
	global $formCategoriesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $formCategoriesToDrupalTaxonomyIds[$text];
}

function getWorkingArrangementCategoryId($text) {
	global $arrangementCategoriesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $arrangementCategoriesToDrupalTaxonomyIds[$text];
}

function getReportCategoryCategoryId($text) {
	global $oebrCategoriesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $oebrCategoriesToDrupalTaxonomyIds[$text];
}

function getMeetingCategoryId($text) {
	global $meetingCategoriesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $meetingCategoriesToDrupalTaxonomyIds[$text];
}

function getDatasheetCodeId($text) {
	global $datasheetCodesTypesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $datasheetCodesTypesToDrupalTaxonomyIds[$text];
}

function getRegulationGroupId($text) {
	global $regulationGroupsToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $regulationGroupsToDrupalTaxonomyIds[$text];
}

function getTorSeriesId($text) {
	global $torSeriesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $torSeriesToDrupalTaxonomyIds[$text];
}

function getRulemakingTaskId($text) {
	global $rulemakingTasksToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $rulemakingTasksToDrupalTaxonomyIds[$text];
}

function getDirectorateId($text) {
	global $directoratesToDrupalTaxonomyIds;
	$text = trim($text);
	$text = strtolower($text);
	return $directoratesToDrupalTaxonomyIds[$text];
}


function getFileIdByName($filename) {
  $results = db_query("select fid from file_managed where filename = :filename", array("filename"=>$filename));
  $fid = 0;
  foreach($results as $result) {
    $fid = $result->fid;
  }
  return $fid;
}

function getFieldCollectionItemIdByFileId($fid) {
  $fcid = 0;
  $results = db_query("select entity_id from field_data_field_easa_dfu_file where field_easa_dfu_file_fid = $fid");
  foreach($results as $result) {
    $fcid = $result->entity_id;
  }
  return $fcid;
}

function getDocumentIdByFieldCollectionItemId($fcid) {
  $nid = 0;
  $results = db_query("select entity_id from field_data_field_easa_document_file_upload where field_easa_document_file_upload_value = $fcid");
  foreach($results as $result) {
    $nid = $result->entity_id;
  }
  return $nid;
}

function getDocumentByFileName($filename) {
	$fid = getFileIdByName($filename);
  if ($fid==0) {
    return false;
  }
  $fcid = getFieldCollectionItemIdByFileId($fid);
  if ($fcid==0) {
    return false;
  }
  $nid = getDocumentIdByFieldCollectionItemId($fcid);
  if ($nid==0) {
    return false;
  }
  $node = node_load($nid);
  return $node;
}

function getImageByFileName($filename) {
	$fid = getFileIdByName($filename);
  if ($fid==0) {
    return false;
  }
  $results = db_query("select entity_id from field_data_field_easa_image_file where field_easa_image_file_fid = $fid");
  foreach($results as $result) {
    $nid = $result->entity_id;
  }
  if ($nid==0) {
    return false;
  }
  $node = node_load($nid);
  return $node;
}

// ---------------- useful functions ------------------------//

function assertNotNull($obj, $errorMessage) {
	if ($obj==NULL) {
		echo($errorMessage);
	}
}

/**
 * Coverts the specified text (if format is appropriate) to a unix timestap (UTC) using the default timezone. 
 * e.g for athens (UTC+2) at 2012-07-26 14:00:00 (DST, UTC+3) the resulting UTC timestamp will correspond to 2012-07-26 11:00:00 (3 hours earlier)
 * http://jira.eworx.gr:8090/browse/FRWBII-74?focusedCommentId=31392&page=com.atlassian.jira.plugin.system.issuetabpanels%3Acomment-tabpanel#action_31392
 */
function getSafeTime($text) {
	$time = time();
	if (strtotime($text)!=false) {
		$time = strtotime($text);
	}
	return $time;
}

/**
 * Formats the specified unix timestamp using the default timezone.  
 * e.g. so for UTC timestamp that corresponds to 2012-07-26 11:00:00 in athens timezome (UTC+2) for DST (UTC+3) the result will be 2012-07-26 14:00:00
 */
function timestampToString($time) {
	return date('Y-m-d H:i:s', $time);
}

/**
 * Coverts the specified text (if format is appropriate) to a unix timestap (UTC) using the UTC timezone
 * e.g for athens (UTC+2) at 2012-07-26 14:00:00 (DST, UTC+3) the resulting UTC timestamp will correspond to 2012-07-26 11:00:00 (3 hours earlier)
 * http://jira.eworx.gr:8090/browse/FRWBII-74?focusedCommentId=31392&page=com.atlassian.jira.plugin.system.issuetabpanels%3Acomment-tabpanel#action_31392
 */
function getUTCTime($text) {
  $timezone = date_default_timezone_get();
	date_default_timezone_set('UTC');
  $time = strtotime($text);
	date_default_timezone_set($timezone);
	return $time;
}

/**
 * Formats the specified unix timestamp using the UTC timezone.  
 * e.g. so for UTC timestamp that corresponds to 2012-07-26 11:00:00 the result will be 2012-07-26 11:00:00 no matter what the local timezone is
 */
function timestampToUTCString($time) {
	$timezone = date_default_timezone_get();
	//date_default_timezone_set('UTC');
	$result = date('Y-m-d H:i:s', $time);
	//date_default_timezone_set($timezone);
	return $result;
}


// http://stackoverflow.com/questions/965235/how-can-i-truncate-a-string-in-php
function truncate($text, $word_limit) {
  if (str_word_count($text, 0) > $word_limit) {
	  $words = str_word_count($text, 2);
	  $pos = array_keys($words);
	  $text = substr($text, 0, $pos[$word_limit]);
	  if (strlen($text) > 0) {
		$text = $text . '...';
	  }
  }
  return $text;
}

function getNodeUrl($node) {
  global $host;
  $nid = '';
  if (isset($node->nid)) {
    $nid = $node->nid;
  }
  return $host.drupal_get_path_alias('node/'. $nid);
  //return $host.'node/'. $nid;
}

function error($text) {
	global $errors_count;
	echo "<span class='error'>" . $text . "</span> ";
	$errors_count++;
}

function warning($text) {
	global $warnings_count;
	echo "<span class='warning'>" . $text . "</span> ";
	$warnings_count++;
}

function message($text) {
	echo "<span class='message'>" . $text . "</span> ";
}

function shouldImportValue($value) {
  return strlen(trim($value))>0;
}

// ---------------- csv manipulation and migration to drupal nodes ------------------------//
$script_dir = getcwd();

function delete($nodeType) {
	$results = db_query("SELECT n.nid FROM {node} n WHERE n.type = '$nodeType'");
	$deleted_count = 0;
  foreach($results as $result) {
    node_delete($result->nid);
		$deleted_count++;
  }
	echo "$deleted_count nodes have been deleted";
}

function migrate($nodeType, $fileName, $separator, $fields_count, $action) {
  if ($action=='del') {
    delete($nodeType);
    die;
  }
  global $script_dir;
  $savedNodesCount = 0;
  $file = $script_dir . "/files/" . $fileName;
	$result = "<table><tr><th>No.</th><th>Title</th><th>Url</th><th>Old url</th></tr>";
  
  echo $fileName . ' processing<br/>' . '----------<br/>';
  global $errors_count;
	$row = 0;
	if (($handle = fopen($file, "r")) !== FALSE) {
		while (($data = fgetcsv($handle, 100000000, $separator)) !== FALSE) {
			$row++;
			if ($row==1) {
				echo "skipping row $row. header\n";
				continue;
			}
			if (count($data)!=$fields_count) {
				echo "skipping row $row. " . count($data) . " fields found instead of $fields_count\n";
				continue;
			}
      echo "processing row: $row";
      $node = createDrupalNode($nodeType, trim($data[0]));
			$node = processNode($node, $data);
      $node = saveAndReturnNode($node, $action);
      $savedNodesCount = $savedNodesCount + 1;
			$result = $result . getSavedNodeInformation($savedNodesCount, $node);
      echo '<br/>';
		}
		fclose($handle);
	}
  
  echo '<br/><br/>';
  echo '----------------------------------------------<br />';
	echo '<strong>'.$nodeType.'</strong><br />';
  echo '  <em>'.$fileName.'</em><br />';
	echo '  <em>'.($row-1).' items found!</em><br />';
	echo '----------------------------------------------<br /><br />';

  $result = $result.'<tr><td colspan="4">Total: '.$savedNodesCount.' nodes saved!</td></tr>';
	$result = $result.'</table>';
  echo '<br /><br />'; 
	echo '<strong>RESULTS</strong>';
	echo '<br />'; 
	echo $result;
	echo '<br /><br />';
	echo "errors: $errors_count";
}

// http://stackoverflow.com/questions/8274815/how-to-set-custom-field-value-for-node-in-drupal-7
function createDrupalNode($nodeType, $legacyId) {
	$node = new stdClass();
  $node->language = "en";  // hardcoded
  $node->name = "eworx";     // $node->uid is brutally overriden by node_object_prepare, but node_submit overrides again using the $node->name
  $node->type = $nodeType;
  $node->created = time(); // default fallback - otherwise it will be explicitely set in processNode
	$node->field_easa_legacy_id[LANGUAGE_NONE][0] = array (
		'value' => (string) $legacyId
	);
	$node->field_ef_migration_details[LANGUAGE_NONE][0] = array (
		'value' => "migrated on " . timestampToString(time()), 
		'safe_value' => ""
	);
	$node->old_url = "-";
	return $node;
}

function createDrupalFile($filename, $uri, $image_file=false) {
  $drupalFile = new stdClass;
  $drupalFile->uid = 1;
  $drupalFile->filename = $filename;
  $drupalFile->uri = $uri;
  $drupalFile->filemime = file_get_mimetype($uri);
  $drupalFile->status = FILE_STATUS_PERMANENT;
  if ($image_file) {
    $drupalFile->filesize = filesize("/EASA/WWW/html/www/sites/default/files/private/ifu/" . $filename);
  } else {
    $drupalFile->filesize = filesize("/EASA/WWW/html/www/sites/default/files/private/dfu/" . $filename);
  }
  return $drupalFile;
}

function addToNotes($node, $text) {
	if (strlen($text)>0) {
		$notes = $node->field_easa_migration_notes[LANGUAGE_NONE][0]['value'];
		$notes = $notes . ' - ' . $text;
		$node->field_easa_migration_notes[LANGUAGE_NONE][0] = array (
			'value' => $notes
		);
	}
}

function saveAndReturnNode($node, $action) {
  $created = $node->created;
  $changed = $node->changed;
  $node->date = $created;
  // if revision_operation is set, then processing of the node has set an explicit unpublish operation (related to old db 'online' flag) - if not set, then auto-publish node
  if (!isset($node->revision_operation)) {
    // nodes are published with no moderation enabled
    $node->status = NODE_PUBLISHED;
    $node->revision_operation = 'REVISIONING_NEW_REVISION_NO_MODERATION';
    $node->revision_moderation = FALSE;
  }
	node_object_prepare($node);
  $node = node_submit($node); // node_submit overrides $node->created, but we need it to set the appropriate $node->uid
  if ($created) {
    $node->created = $created;  // override $node->created again with our custom migration value
  }

  if ($action=='migrate') {
    node_save($node);
  }
	return $node;
}

function getSavedNodeInformation($index, $node) {
  $new_url = getNodeUrl($node);
  if (isset($node->new_url)) {
    $new_url = $node->new_url;
  }
	$node_result = "";
	$node_result = $node_result.'<tr><td>'.(string)$index.'</td><td>'.$node->title.'</td><td><a href="'.$new_url.'">'.$new_url.'</a></td>';
	$node_result = $node_result.'<td><a href="'.$node->old_url.'">'.$node->old_url.'</a></td>';
	$node_result = $node_result.'</tr>';
  if (isset($node->new_url2)) {
    $new_url = $node->new_url2;
    $node_result = $node_result.'<tr><td>'.(string)$index.'</td><td>'.$node->title.'</td><td><a href="'.$new_url.'">'.$new_url.'</a></td>';
  	$node_result = $node_result.'<td><a href="'.$node->old_url2.'">'.$node->old_url2.'</a></td>';
  	$node_result = $node_result.'</tr>';
  }
	return $node_result;
}
