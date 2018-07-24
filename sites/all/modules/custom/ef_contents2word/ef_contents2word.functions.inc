<?php

class ArchiverZip2 implements ArchiverInterface{

  /**
   * The underlying ZipArchive instance that does the heavy lifting.
   *
   * @var ZipArchive
   */
  protected $zip;

  public function __construct($file_path) {
    $this->zip = new ZipArchive();
    if ($this->zip->open($file_path) !== TRUE) {
      // @todo: This should be an interface-specific exception some day.
      throw new Exception(t('Cannot open %file_path', array('%file_path' => $file_path)));
    }
  }

  public function add($file_path,$local_name = null) {
    $this->zip->addFile($file_path,$local_name);

    return $this;
  }

  public function remove($file_path) {
    $this->zip->deleteName($file_path);

    return $this;
  }

  public function extract($path, Array $files = array()) {
    if ($files) {
      $this->zip->extractTo($path, $files);
    }
    else {
      $this->zip->extractTo($path);
    }

    return $this;
  }

  public function listContents() {
    $files = array();
    for ($i = 0; $i < $this->zip->numFiles; $i++) {
      $files[] = $this->zip->getNameIndex($i);
    }
    return $files;
  }

  /**
   * Retrieve the zip engine itself.
   *
   * In some cases it may be necessary to directly access the underlying
   * ZipArchive object for implementation-specific logic. This is for advanced
   * use only as it is not shared by other implementations of ArchiveInterface.
   *
   * @return
   *   The ZipArchive object used by this object.
   */
  public function getArchive() {
    return $this->zip;
  }
}

function _break_page_html($flag = true){

	if ($flag) return "<br clear='all' style='page-break-before:always' />";
	else return "";
}

function _c2w_filter_html($html){

	$html = preg_replace('#<div class="nc_back_button">(.|\s)*?</div>#', '', $html);

	$html = preg_replace('#<div class="description field-collection-description">(.|\s)*?</div>#', '', $html);

	/*
	$html_ul = preg_replace('/<div class="nc-obser-theme(.*?)</div>/is', '<div class="nc-obser-theme$1</div>', $html); // get ul block
	$html_ul_converted = str_replace('</ul>','</div>',$html_ul);
	$html_ul_converted = str_replace('<ul','<div',$html_ul_converted);
	$html_ul_converted = str_replace('<li','<span',$html_ul_converted);
	$html_ul_converted = str_replace('</li>','</span>',$html_ul_converted);
	$html = str_replace($html_ul,$html_ul_converted,$html);

	$html_ul = preg_replace('/<div class="nc-assign-contract(.*?)</div>/is', '<div class="nc-assign-contract$1</div>', $html); // get ul block
	$html_ul_converted = str_replace('</ul>','</div>',$html_ul);
	$html_ul_converted = str_replace('<ul','<div',$html_ul_converted);
	$html_ul_converted = str_replace('<li','<span',$html_ul_converted);
	$html_ul_converted = str_replace('</li>','</span>',$html_ul_converted);
	$html = str_replace($html_ul,$html_ul_converted,$html);

	$html_ul = preg_replace('/<div class="nc-dols-srdd(.*?)</div>/is', '<div class="nc-dols-srdd$1</div>', $html); // get ul block
	$html_ul_converted = str_replace('</ul>','</div>',$html_ul);
	$html_ul_converted = str_replace('<ul','<div',$html_ul_converted);
	$html_ul_converted = str_replace('<li','<span',$html_ul_converted);
	$html_ul_converted = str_replace('</li>','</span>',$html_ul_converted);
	$html = str_replace($html_ul,$html_ul_converted,$html);
	*/

	return $html;
}

function node_view2($node){
	//dsm('1.2');

	$node->comment = 0; // hide comments
	$node_view = node_view($node);
	unset($node_view['#fieldgroups']['group_ef_quality_assessment']);
	unset($node_view['links']);
	unset($node_view['print_links']);
	unset($node_view['#contextual_links']);
	unset($node_view['field_ef_document']);

	if(isset($node_view['field_ef_quartely_report_year'])) unset($node_view['field_ef_quartely_report_year']);
	if(isset($node_view['field_ef_quarter'])) unset($node_view['field_ef_quarter']);
	if(isset($node_view['field_ef_quarter_report_country'])) unset($node_view['field_ef_quarter_report_country']);
	if(isset($node_view['field_ef_country'])) unset($node_view['field_ef_country']);

	if(isset($node_view['field_ef_quality_of_contents_nc'])) unset($node_view['field_ef_quality_of_contents_nc']);

	//dsm($node_view);
	//dsm($node_view);
	//dsm('1.3');

	return $node_view;
}

function node_view3($node, $context_filter = null, $context_filter_names = null ){
//dsm('1.1');
	$node_view = node_view2($node);

	if(isset($context_filter)){
			//dsm($context_filter);
		$i = 0;
		while(isset($context_filter_names[$i])){
			//dsm($context_filter_names[$i]);
			if(!isset($context_filter[$i]['check'])){

				switch ($context_filter_names[$i]){
					case 'title':
						if (isset($node_view['title'])) unset($node_view['title']);
					break;
					case 'name':
						if (isset($node_view['field_ef_country'])) unset($node_view['field_ef_country']);
					break;
					case 'body-revision_id':
						if (isset($node_view['body'])){
							unset($node_view['body']);
						}
					break;
					case 'type':
						/// nothing
					break;
					default:
						$field_name = str_replace("-revision_id", "", $context_filter_names[$i]);
						if(isset($node_view[$field_name])){
							unset($node_view[$field_name]);
							//dsm($field_name);
						}
					break;
					/*
					case 'state':
						hide($node_view['']);
					break;
					*/
				}
			}
			$i ++;
		}


	}



	//dsm($node_view);

	return $node_view;
}

function _body_unchecked($context_filter,$context_filter_names){
	$i = 0;
	while(isset($context_filter_names[$i])){
		//dsm($context_filter_names[$i]);
		if(!isset($context_filter[$i]['check'])){
		//dsm($context_filter_names[$i]);
			if ($context_filter_names[$i] == 'body-revision_id'){
				//dsm('b');
				return true;
			}
		}
		$i++;
	}

	return false;

}

function _html_init(){

	$content = "<html>
<html xmlns:o='urn:schemas-microsoft-com:office:office' xmlns:w='urn:schemas-microsoft-com:office:word' xmlns='http://www.w3.org/TR/REC-html40'>
<head>
	<meta http-equiv=Content-Type content='text/html; charset=utf-8'>
	<title></title>
	<!--[if gte mso 9]>
	<xml>
	<w:WordDocument>
	<w:View>Print</w:View>
	<w:Zoom>100</w:Zoom>
	<w:DoNotOptimizeForBrowser/>
	</w:WordDocument>
	</xml>
	<![endif]-->
	";

	$content .= "

<style> <!--
@page
{
    size: 21cm 29.7cm;  /* A4 */
    margin: 2cm 2cm 2cm 2cm; /* Margins: 2 cm on each side */
    mso-page-orientation: portrait;
}


p.MsoFooter, li.MsoFooter, div.MsoFooter
{
    margin:0in;
    margin-bottom:.0001pt;
    mso-pagination:widow-orphan;
    tab-stops:center 3.0in right 6.0in;
    font-size:12.0pt;
}

body {
  color: #222222;
  font-family: 'Helvetica Neue', 'Helvetica', Helvetica, Arial, sans-serif;
  font-size:1em;
  text-align:justify;
}
h1{text-align:center;color:#005BAA;}
a {
  color: #005BAA;
  text-decoration:none;
}
a:hover, a:focus {
  color: #F58020;
}
fieldset{
  margin: 20px 0;
}
legend .fieldset-legend, h2{
  padding: 20px 10px;
  color: #005BAA;
  font-size: 1.3em;
  font-weight: normal;
  display: block;
  width: 100%;
  font-family: 'OpenSans-Regular-webfont', Arial, Helvetica, sans-serif;
}

fieldset fieldset {
  border: none!important;
  background-color: #FBFBFB;
}
.node-ef-network-quarterly-report .field-label {
  width: 100%;
  color: #000;
  font-size: 15px;
}
.node-ef-network-quarterly-report .field-collection-container .field-collection-view .field-label {
  border: none!important;
  text-transform: inherit;
  padding-left: 0px;
  font-size: inherit;
  background-color: transparent!important;
}

.md_about {
  border: 1px solid #B6CBDE;
  padding: 4px;
  width: 40%;
  font-size: 8pt;
  margin: 10px 0 10px 20px;
}

table {
  margin: 25px 0px;
  width: 100%;
  border-top: 1px solid #DDDDDD!important;
}
table thead, table tfoot {
  background: whitesmoke;
  font-weight: bold;
}
th {
  border-left: 1px solid #DDDDDD;
  border-bottom: 1px solid #DDDDDD;
  border-top: 1px solid #fff;
  text-align: left;
  padding:1.2em 0.5em;

  font-weight: normal;
  text-transform: uppercase;
  font-size: 0.85em;
  line-height: 1.3em;
  background: #F0F0F0;
  border-top: 1px solid #DDDDDD;

}
td{
  border-left: 1px solid #DDDDDD;
  border-bottom: 1px solid #DDDDDD;
  border-top: 1px solid #fff;
  text-align: left;
  padding:1.2em 0.5em;
}
table tr.even,table tr.alt,table tr:nth-of-type(2n) {
  background: none #FCFCFC;
}

ul.inline-list li {
  list-style: none;
  float: left;
  margin-left: 1.375em;
  display: block;
}
ul li.obserli {
  border-right: 3px solid orange;
  padding-right: 1%;
}

table.table-summary th{padding:0.2 !important;text-align:center;}
table.table-summary td{padding:0.2 !important;text-align:center;}


--></style>";
	$content .= "
<xml>
<w:WordDocument>
<w:View>Print</w:View>
<w:Zoom>100</w:Zoom>
<w:DoNotOptimizeForBrowser/>
</w:WordDocument>
</xml>

</head>";
$content .= "
<body>
	<div class='ef-main'>";

	return $content;

}

function _html_end(){

		$content = '</div>';
	$content .= '</body>';
	$content .= '</html>';

	return $content;
}
function _d2w_format($content){

	/* removing stars block, we can't use preg_replace: */
	$pos1_remove = strpos($content,'<form action');
	if ($pos1_remove !== false){
		$pos2_remove = strpos($content,'</form>',$pos1_remove) + 7; // 7 is size of '</form>'
		$distance_remove = $pos2_remove - $pos1_remove;
		$to_remove = substr($content,$pos1_remove,$distance_remove);
		$content = str_replace($to_remove,'',$content);
	}

	/* removing edit-delete links, we can't use preg_replace: */
	$pos1_remove = strpos($content,'<ul class="field-collection-view-links"');
	while ($pos1_remove !== false){
		$pos2_remove = strpos($content,'</ul>',$pos1_remove) + 5; // 5 is size of '</ul>'
		$distance_remove = $pos2_remove - $pos1_remove;
		$to_remove = substr($content,$pos1_remove,$distance_remove);
		$content = str_replace($to_remove,'',$content);

		$pos1_remove = strpos($content,'<ul class="field-collection-view-links"');
	}

	//$content = preg_replace('/<a href="(.*?)">Add<\/a>/','',$content);
	/* removing add links, we can't use preg_replace: */
	$pos1_remove = strpos($content,'<ul class="action-links');
	while ($pos1_remove !== false){
		$pos2_remove = strpos($content,'</ul>',$pos1_remove) + 5; // 5 is size of '</ul>'
		$distance_remove = $pos2_remove - $pos1_remove;
		$to_remove = substr($content,$pos1_remove,$distance_remove);
		$content = str_replace($to_remove,'',$content);

		$pos1_remove = strpos($content,'<ul class="action-links');
	}


	$content = preg_replace('/<h2 class="node-title">(.*?)<\/h2>/','<br />',$content);

	if (strpos($content,'node-ef-network-quarterly-report')){ // NETWORK QUARTERLY REPORT
		$content = preg_replace('/<fieldset class="collapsible group-ef-qr-employ-conditions field-group-fieldset form-wrapper" id="node_ef_network_quarterly_report_full_group_ef_qr_employ_conditions"><legend><span class="fieldset-legend">(.*?)<\/span>(.*?)<\/fieldset>/','<h3>$1</h3>$2',$content);
		$content = preg_replace('/<fieldset class="collapsible group-ef-qr-pay field-group-fieldset form-wrapper" id="node_ef_network_quarterly_report_full_group_ef_qr_pay"><legend><span class="fieldset-legend">(.*?)<\/span>(.*?)<\/fieldset>/','<h3>$1</h3>$2',$content);
		$content = preg_replace('/<fieldset class="collapsible group-ef-qr-working-time field-group-fieldset form-wrapper" id="node_ef_network_quarterly_report_full_group_ef_qr_working_time"><legend><span class="fieldset-legend">(.*?)<\/span>(.*?)<\/fieldset>/','<h3>$1</h3>$2',$content);
		$content = preg_replace('/<fieldset class="collapsible group-ef-qr-skills field-group-fieldset form-wrapper" id="node_ef_network_quarterly_report_full_group_ef_qr_skills"><legend><span class="fieldset-legend">(.*?)<\/span>(.*?)<\/fieldset>/','<h3>$1</h3>$2',$content);
		$content = preg_replace('/<fieldset class="collapsible group-ef-qr-health field-group-fieldset form-wrapper" id="node_ef_network_quarterly_report_full_group_ef_qr_health"><legend><span class="fieldset-legend">(.*?)<\/span>(.*?)<\/fieldset>/','<h3>$1</h3>$2',$content);
		$content = preg_replace('/<fieldset class="collapsible group-ef-qr-work-organisation field-group-fieldset form-wrapper" id="node_ef_network_quarterly_report_full_group_ef_qr_work_organisation"><legend><span class="fieldset-legend">(.*?)<\/span>(.*?)<\/fieldset>/','<h3>$1</h3>$2',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-employment-status field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-entitlements-obligs field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-termination-of-employm field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-working-time-in-general field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-organisation-of-working field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-work-life-balance field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-non-standard-working field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-skills-and-training field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-work-organisation-skill field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-career-development field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-physical-risk-factors field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-psychosocial-risk-fact field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-work-related-health field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-absenteeism-presenteeis field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-violence-and-harassment field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-occupational-health field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-forms-of-work-organisat field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-workplace-innovation field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-employee-involvement field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);
		$content = preg_replace('/<div class="field field-name-field-ef-participation-at-work field-type-field-collection field-label-above(.*?)">(.*?)<\/div>/','<h4>$2</h4>',$content);


		$content = preg_replace('/<span class="fieldset-legend">(.*?)<\/span>/','<h2>$1</h2>',$content);


	}

	if (strpos($content,'node-ef-ic-quarterly-report')){ // NETWORK QUARTERLY REPORT

		$content = preg_replace('/<fieldset class="collapsible group-ef-activity field-group-fieldset form-wrapper" id="node_ef_ic_quarterly_report_full_group_ef_activity"><legend><span class="fieldset-legend">(.*?)<\/span>/','<h3>$1</h3>',$content);
		$content = preg_replace('/<fieldset class="collapsible group-ef-dissemination field-group-fieldset form-wrapper" id="node_ef_ic_quarterly_report_full_group_ef_dissemination"><legend><span class="fieldset-legend">(.*?)<\/span>/','<h3>$1</h3>',$content);

		$content = preg_replace('/<span class="fieldset-legend">(.*?)<\/span>/','<h2>$1</h2>',$content);

	}


	$content = preg_replace('#<fieldset class="collapsible collapsed group-ef-quality-assessment(.*?)</fieldset>#', ' ', $content);

	return $content;

}
function _ef_contents2word_d2w_simple_word(&$form, &$form_state, $node){

	global $user;
	$destination = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {

		$file = $node->nid.'-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title)).'.doc';

		$node_content = drupal_render(node_view2($node));

		$node_content = _d2w_format($node_content);
		//print $node_content;exit;

		$table_summary = _d2w_table_summary($node, null, null);

		$content = _html_init() . '<h1>'.$node->title.'</h1>' . $table_summary . $node_content . _html_end();


		$content = _c2w_filter_html($content);
		//print $content; exit;
		file_put_contents($destination . '/' . $file, $content);

		$form_state['redirect'] = array('sites/default/files/d2w/word/'.$user->uid.'/'.$file);
	}
}


function _ef_contents2word_d2w_all_revisions(&$form, &$form_state, $node){
//dsm(3);

	$vid = arg(3);
	if ($vid) $form_state['redirect'] =  "node/".$node->nid.'/revisions/'.$vid.'/d2w';
	else $form_state['redirect'] =  "node/".$node->nid.'/d2w';


}
function _ef_contents2word_d2w_related_contributions(&$form, &$form_state, $node){
//dsm(3);

	$vid = arg(3);
	if ($vid) $form_state['redirect'] =  "node/".$node->nid.'/revisions/'.$vid.'/d2w-related-contributions';
	else $form_state['redirect'] =  "node/".$node->nid.'/d2w-related-contributions';


}

function _ef_contents2word_d2w_all_revisions_one_word(&$form, &$form_state, $node){

	global $user;
	$destination = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {
		$file = $node->nid.'-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title));
		$last_revision_date = '';

		$node_revisions_list = node_revision_list($node);
		//dsm($node_revisions_list);

		$content = _html_init();

		$flag_i = false;
		$i=0;
		foreach($node_revisions_list as $vid => $vid_data){
			$revision_current = node_load($node->nid,$vid);
			if($i == 0) $last_revision_date = date('Y-m-d',$revision_current->revision_timestamp);
			//dsm($revision_current);
//dsm($revision_current->workbench_moderation['my_revision']);
			$node_content = drupal_render(node_view2($revision_current));

			$node_content = _d2w_format($node_content);

			$table_summary = _d2w_table_summary($revision_current, null, null);

			$content .= _break_page_html($flag_i) . '<h1>'.$revision_current->title.'</h1>' . $table_summary . $node_content;

			$i++;
			$flag_i = true;

		}

		$file .= '-LR-' . $last_revision_date . '.doc';

		$content .= _html_end();

		$content = _c2w_filter_html($content);
		file_put_contents($destination . '/' . $file, $content);

		$form_state['redirect'] = array('sites/default/files/d2w/word/'.$user->uid.'/'.$file);
	}

}

function _ef_contents2word_d2w_all_revisions_zip(&$form, &$form_state, $node){

	global $user;
	$destination = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {
		$destination2 = 'public://d2w/zip/'.$user->uid;
		if(file_prepare_directory($destination2, FILE_CREATE_DIRECTORY)) {

			$node_revisions_list = node_revision_list($node);
			//dsm($node_revisions_list);


			// para nombrar archivo, buscamos última revisión:
			$file_zip = $node->nid.'-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title));
			$last_revision_date = '';
			foreach($node_revisions_list as $vid => $vid_data){
				$revision_current = node_load($node->nid,$vid);
				$last_revision_date = date('Y-m-d',$revision_current->revision_timestamp);

				break;
			}
			$file_zip .= '-LR-' . $last_revision_date . '.zip';
			///

			fopen('sites/default/files/d2w/zip/'.$user->uid.'/'.$file_zip, 'w');
			$zip = new ArchiverZip2('sites/default/files/d2w/zip/'.$user->uid.'/'.$file_zip);

			foreach($node_revisions_list as $vid => $vid_data){
				$file = $node->nid.'-'.$vid.'-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title));

				$content = _html_init();

				$revision_current = node_load($node->nid,$vid);

				$revision_date = date('Y-m-d',$revision_current->revision_timestamp);
				$file .= '-R-' . $revision_date . '.doc';

				$node_content = drupal_render(node_view2($revision_current));
				$node_content = _d2w_format($node_content);

				$table_summary = _d2w_table_summary($revision_current, null, null);

				$content .= '<h1>'.$revision_current->title.'</h1>' . $table_summary . $node_content;

				$content .= _html_end();

				$content = _c2w_filter_html($content);
				file_put_contents($destination . '/' . $file, $content);

				if(file_exists('sites/default/files/d2w/word/'.$user->uid.'/'.$file)){
					$zip->add('sites/default/files/d2w/word/'.$user->uid.'/'.$file, $file);
				}

			}


			$form_state['redirect'] = array('sites/default/files/d2w/zip/'.$user->uid.'/'.$file_zip);
		}
	}

}
function _ef_contents2word_d2w_related_contributions_one_word(&$form, &$form_state, $node){

	global $user;
	$destination = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {
		$file = $node->nid.'-RC-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title)).'.doc';

		//$node_related_list = $node->field_ef_related_content['und'];

		$related_contributions_list = _d2w_related_contributions($node->nid);


		if(isset($related_contributions_list[0])){
			//dsm($node_revisions_list);

			$content = _html_init();

			$flag_i = false;
			$flag_nothing = true;
			foreach($related_contributions_list as $i => $nid_data){
				$node_related_current = node_load($nid_data);

				$node_content = drupal_render(node_view2($node_related_current));
				$node_content = _d2w_format($node_content);

				$table_summary = _d2w_table_summary($node_related_current, null, null);
				$content .= _break_page_html($flag_i) . '<h1>'.$node_related_current->title.'</h1>' . $table_summary . $node_content;

				$flag_nothing = false;
				$flag_i = true;

			}

			$content .= _html_end();

			$content = _c2w_filter_html($content);
			file_put_contents($destination . '/' . $file, $content);

			if (!$flag_nothing) $form_state['redirect'] = array('sites/default/files/d2w/word/'.$user->uid.'/'.$file);
			else drupal_set_message('There are not related "National contributions" for this/these revision/s.');
		}
		else drupal_set_message('There are not related Contributions');
	}

}

function _ef_contents2word_d2w_related_contributions_zip(&$form, &$form_state, $node){

	global $user;
	$destination = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {
		$destination2 = 'public://d2w/zip/'.$user->uid;
		if(file_prepare_directory($destination2, FILE_CREATE_DIRECTORY)) {

			$related_contributions_list = _d2w_related_contributions($node->nid);

			if(isset($related_contributions_list[0])){
				//dsm($node_revisions_list);
				$file = $node->nid.'-RC-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title)).'.zip';
				fopen('sites/default/files/d2w/zip/'.$user->uid.'/'.$file, 'w');
				$zip = new ArchiverZip2('sites/default/files/d2w/zip/'.$user->uid.'/'.$file);

				$flag_nothing = true;
				foreach($related_contributions_list as $i => $nid_data){

					$content = _html_init();

					$node_related_current = node_load($nid_data);

					$file = $node_related_current->nid.'-RC-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node_related_current->title)).'.doc';

					$node_content = drupal_render(node_view2($node_related_current));
					$node_content = _d2w_format($node_content);

					$table_summary = _d2w_table_summary($node_related_current, null, null);
					$content .= '<h1>'.$node_related_current->title.'</h1>' . $table_summary . $node_content;

					$content .= _html_end();

					$content = _c2w_filter_html($content);
					file_put_contents($destination . '/' . $file, $content);

					if(file_exists('sites/default/files/d2w/word/'.$user->uid.'/'.$file)){
						$zip->add('sites/default/files/d2w/word/'.$user->uid.'/'.$file, $file);
						$flag_nothing = false;
					}


				}


				$file = $node->nid.'-RC-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title)).'.zip';
				if (!$flag_nothing) $form_state['redirect'] = array('sites/default/files/d2w/zip/'.$user->uid.'/'.$file);
				else drupal_set_message('There are not related "National contributions" for this/these revision/s.');

			}
			else drupal_set_message('There are not related Contributions');
		}
	}

}



function _ef_contents2word_node_custom_theme(){
  if (variable_get('node_admin_theme')) {
	//dsm(variable_get('admin_theme'));
      return variable_get('admin_theme');
  }
}

function render_d2w($node, $context_filter, $context_filter_names){

	$html = '';

	if(isset($context_filter)){
			//dsm($context_filter);
		$i = 0;
		while(isset($context_filter_names[$i])){
			//dsm($context_filter_names[$i]);
			if(isset($context_filter[$i]['check'])){

				switch ($context_filter_names[$i]){
					case 'title':
						if (isset($node->title)) $html .= '<h1>'.$node->title.'</h1>';
					break;
					case 'name':
						/// nothing
					break;
					case 'type':
						/// nothing
					break;
					case 'state':
						/// nothing
					break;
					default:
						$field_name = str_replace("-revision_id", "", $context_filter_names[$i]);
						if (isset($node->{$field_name})) $html .= drupal_render(field_view_field('node', $node, $field_name));
					break;
					/*
					case 'state':
						hide($node_view['']);
					break;
					*/
				}
			}
			$i ++;
		}


	}


	return $html;
}


/* VIEW BULK OPERATIONS: */

function _d2w_table_summary($node, $context_filter, $context_filter_names){

	$return = '';
	//dsm($context_filter_names);
	if(!isset($context_filter) || !isset($context_filter_names)){ // if nothing selected, we simulate all selected:
	//dsm('5');
		$context_filter_names[0]='type';
		if($node->type != 'national_contributions') $context_filter[0]['check'] = 1;
		else $context_filter[0]['check'] = 0;
		$context_filter_names[1]='state';
		$context_filter[1]['check'] = 1;
		$context_filter_names[2]='name';
		$context_filter[2]['check'] = 1;
		$context_filter_names[3]='field_ef_quartely_report_year-revision_id';
		$context_filter[3]['check'] = 1;
		$context_filter_names[4]='field_ef_quarter-revision_id';
		$context_filter[4]['check'] = 1;
		$context_filter_names[5]='last_editor';
		if($node->type != 'national_contributions') $context_filter[5]['check'] = 1;
		else $context_filter[5]['check'] = 0;
		$context_filter_names[6]='timestamp';
		$context_filter[6]['check'] = 1;
	}
		//dsm($context_filter);
	$th = array();
	$td = array();
	$i = 0;
	$i_table = 0;
	//dsm($node);
	while(isset($context_filter_names[$i])){
		//dsm($context_filter_names[$i]);
		if(isset($context_filter[$i]['check'])){

			switch ($context_filter_names[$i]){
				case 'type':
					$th[$i_table] = "TYPE OF CONTENT";
					$td[$i_table] = ucwords(node_type_get_name($node));
					$i_table++;
				break;
				case 'state':
					if (isset($node->workbench_moderation['my_revision']->state)){
						$th[$i_table] = "STATE";
						$state_name_machine = $node->workbench_moderation['my_revision']->state;
						$td[$i_table] = workbench_moderation_state_label($state_name_machine);
						$i_table++;
					}
				break;
				case 'name':
					if (isset($node->field_ef_country)){
						$th[$i_table] = "COUNTRY";
						$td[$i_table] = ucwords(drupal_render(field_view_field('node', $node, 'field_ef_country', array('label' => 'hidden'))));
						$i_table++;
					}
					else if (isset($node->field_ef_quarter_report_country)){
						$th[$i_table] = "COUNTRY";
						$td[$i_table] = ucwords(drupal_render(field_view_field('node', $node, 'field_ef_quarter_report_country', array('label' => 'hidden'))));
						$i_table++;
					}

				break;
				case 'field_ef_quartely_report_year-revision_id':
					if (isset($node->field_ef_quartely_report_year)){
						$th[$i_table] = "YEAR";
						$td[$i_table] = drupal_render(field_view_field('node', $node, 'field_ef_quartely_report_year', array('label' => 'hidden')));
						$i_table++;
					}
				break;
				case 'field_ef_quarter-revision_id':
					if (isset($node->field_ef_quarter)){
						$th[$i_table] = "QUARTER";
						$td[$i_table] = drupal_render(field_view_field('node', $node, 'field_ef_quarter', array('label' => 'hidden')));
						$i_table++;
					}
				break;
				case 'last_editor':
					if($node->type != 'ef_national_contribution'){
						$th[$i_table] = "LAST EDITOR";
						$last_editor = user_load($node->workbench_moderation['my_revision']->uid);
						//dsm($last_editor);
						$td[$i_table] = $last_editor->name;
						if(isset($last_editor->field_ef_first_name['und'][0]['safe_value'])){
							$td[$i_table] = $last_editor->field_ef_first_name['und'][0]['safe_value'] . ' ';
							if(isset($last_editor->field_ef_last_name['und'][0]['safe_value'])) $td[$i_table] .= $last_editor->field_ef_last_name['und'][0]['safe_value'];
						}
						$i_table++;
					}
				break;
				case 'timestamp':
					if (isset($node->revision_timestamp)){
						if($node->type == 'ef_national_contribution') $th[$i_table] = "UPDATED DATE";
						else $th[$i_table] = "TIMESTAMP";
						$td[$i_table] = date('d/m/Y',$node->workbench_moderation['my_revision']->timestamp);
						$i_table++;
					}
				break;

			}
		}
		$i ++;
	}

	if ($i_table > 0){
		$return = '<table class="table-summary">';
			$return .= '<tr>';
				$i = 0;
				while(isset($th[$i])){
					$return .= '<th>'.$th[$i].'</th>';

					$i++;
				}
			$return .= '</tr>';
			$return .= '<tr>';

				$i = 0;
				while(isset($td[$i])){
					$return .= '<td>'.$td[$i].'</td>';

					$i++;
				}
			$return .= '</tr>';
		$return .= '</table>';

	}
	if (isset($node->log)){
		$return .= '<table class="table-revision-comments">';
			$return .= '<tr>';
					$return .= '<td><strong>Comments about this revision:</strong><br />'.$node->log.'</td>';
			$return .= '</tr>';
		$return .= '</table>';
	}

			//dsm($return);

	return $return;

}

function _ef_contents2word_d2w_all_selected_one_word_batch($node, $current, $total, $context_filter = null, $context_filter_names = null){
//dsm($context_filter);
//dsm('1');

	global $user;

  if ($current == 1) {
    $_SESSION['total_batch_items'] = $total;
  }

  $total_batch_exported_items_one_word_batch = $_SESSION['total_batch_items'];

	$destination = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {
		if (($node->type == 'ef_ic_quarterly_report') || ($node->type == 'ef_network_quarterly_report')) $file_name = 'EF_QUARTERLY_REPORT';
		else $file_name = strtoupper($node->type);

		$file = $file_name.'.doc';

		$content = '';
		if($current != 1){
			$content = file_get_contents($destination . '/' . $file);
					//dsm($content);
		}

		//$node_content = drupal_render(node_view2($node));

		if (($node->type == 'ef_national_contribution') && (_body_unchecked($context_filter,$context_filter_names))) $node_content = render_d2w($node, $context_filter, $context_filter_names);
		else $node_content = drupal_render(node_view3($node, $context_filter, $context_filter_names));
//dsm($node);
//dsm('2');

		$node_content = _d2w_format($node_content);
//dsm('3');

		$table_summary = _d2w_table_summary($node, $context_filter, $context_filter_names);
		//dsm($table_summary);
		$content .= '<h1>'.$node->title.'</h1>' . $table_summary . $node_content;

//dsm('4');

		if ($current == $total_batch_exported_items_one_word_batch){
			$content = str_replace('</body></html>','',$content);
			$content = _html_init() . $content . _html_end();
		}
//dsm('5');

		$content = _c2w_filter_html($content);
		file_put_contents($destination . '/' . $file, $content);

		if ($current == $total_batch_exported_items_one_word_batch){
			$old_msg = drupal_get_messages('status'); // hide other green messages
			//drupal_set_message('The file was created correctly. You can download <a href="/sites/default/files/d2w/word/'.$user->uid.'/'.$file.'">'.$file.' here</a>');
			$_SESSION['d2w'] = 'word/'.$user->uid.'/'.$file;
		}

	}

}

function _ef_contents2word_d2w_all_selected_zip_batch($node, $current, $total, $context_filter = null, $context_filter_names = null){

	global $user;

  if ($current == 1) {
    $_SESSION['total_batch_items'] = $total;
  }

  $total_batch_exported_items_all_selected_zip_batch = $_SESSION['total_batch_items'];

	$destination2 = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination2, FILE_CREATE_DIRECTORY)) {
		$destination = 'public://d2w/zip/'.$user->uid;
		if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {

			if (($node->type == 'ef_ic_quarterly_report') || ($node->type == 'ef_network_quarterly_report')) $file_name = 'EF_QUARTERLY_REPORT';
			else $file_name = strtoupper($node->type);

			$file = $file_name.'.zip';

			if ($current == 1)	fopen('sites/default/files/d2w/zip/'.$user->uid.'/'.$file, 'w');
			else fopen('sites/default/files/d2w/zip/'.$user->uid.'/'.$file, 'c');

			$zip = new ArchiverZip2('sites/default/files/d2w/zip/'.$user->uid.'/'.$file);

			$file2 = $node->nid.'-'.$node->vid.'-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title)).'.doc';

			$content = _html_init();

			if (($node->type == 'ef_national_contribution') && (_body_unchecked($context_filter,$context_filter_names))) $node_content = render_d2w($node, $context_filter, $context_filter_names);
			else{
				$node_content = drupal_render(node_view3($node, $context_filter, $context_filter_names));
				$node_content = _d2w_format($node_content);
			}

			$table_summary = _d2w_table_summary($node, $context_filter, $context_filter_names);

			$content .= '<h1>'.$node->title.'</h1>' . $table_summary . $node_content;

			$content .= _html_end();

			$content = _c2w_filter_html($content);
			file_put_contents($destination2 . '/' . $file2, $content);

			if(file_exists('sites/default/files/d2w/word/'.$user->uid.'/'.$file2)){
				$zip->add('sites/default/files/d2w/word/'.$user->uid.'/'.$file2, $file2);
			}

			if ($current == $total_batch_exported_items_all_selected_zip_batch){
				$old_msg = drupal_get_messages('status'); // hide other green messages
				//drupal_set_message('The file was created correctly. You can download <a href="/sites/default/files/d2w/zip/'.$user->uid.'/'.$file.'">'.$file.' here</a>');
				$_SESSION['d2w'] = 'zip/'.$user->uid.'/'.$file;
			}
		}
	}

}

function _ef_contents2word_d2w_all_revisions_one_word_batch($node, $current, $total, $context_filter = null, $context_filter_names = null){

	global $user;

  if ($current == 1) {
    $_SESSION['total_batch_items'] = $total;
  }

  $total_batch_exported_items_all_revisions_one_word_batch = $_SESSION['total_batch_items'];

	$destination = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {
		if (($node->type == 'ef_ic_quarterly_report') || ($node->type == 'ef_network_quarterly_report')) $file_name = 'EF_QUARTERLY_REPORT';
		else $file_name = strtoupper($node->type);

		$file = $file_name.'.doc';

		$node_revisions_list = node_revision_list($node);

		$content = '';
		if($current != 1){
			$content = file_get_contents($destination . '/' . $file);
					//dsm($content);
		}

		$flag_i = false;
		foreach($node_revisions_list as $vid => $vid_data){
			$revision_current = node_load($node->nid,$vid);

			if (($node->type == 'ef_national_contribution') && (_body_unchecked($context_filter,$context_filter_names))) $node_content = render_d2w($revision_current, $context_filter, $context_filter_names);
			else{
				$node_content = drupal_render(node_view3($revision_current, $context_filter, $context_filter_names));
				$node_content = _d2w_format($node_content);
			}

			$table_summary = _d2w_table_summary($revision_current, $context_filter, $context_filter_names);

			$content .= _break_page_html($flag_i) . '<h1>'.$revision_current->title.'</h1>' . $table_summary . $node_content;

			$flag_i = true;
		}



		if ($current == $total_batch_exported_items_all_revisions_one_word_batch){
			$content = str_replace('</body></html>','',$content);
			$content = _html_init() . $content . _html_end();
		}

		$content = _c2w_filter_html($content);
		file_put_contents($destination . '/' . $file, $content);

		if ($current == $total_batch_exported_items_all_revisions_one_word_batch){
			$old_msg = drupal_get_messages('status'); // hide other green messages
			//drupal_set_message('The file was created correctly. You can download <a href="/sites/default/files/d2w/word/'.$user->uid.'/'.$file.'">'.$file.' here</a>');
			$_SESSION['d2w'] = 'word/'.$user->uid.'/'.$file;

		}


	}

}

function _ef_contents2word_d2w_all_revisions_zip_batch($node, $current, $total, $context_filter = null, $context_filter_names = null){

	global $user;

  if ($current == 1) {
    $_SESSION['total_batch_items'] = $total;
  }

  $total_batch_exported_items_all_revisions_zip_batch = $_SESSION['total_batch_items'];

	$destination2 = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination2, FILE_CREATE_DIRECTORY)) {
		$destination = 'public://d2w/zip/'.$user->uid;
		if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {

			if (($node->type == 'ef_ic_quarterly_report') || ($node->type == 'ef_network_quarterly_report')) $file_name = 'EF_QUARTERLY_REPORT';
			else $file_name = strtoupper($node->type);

			$file = $file_name.'.zip';

			$node_revisions_list = node_revision_list($node);

			if ($current == 1)	fopen('sites/default/files/d2w/zip/'.$user->uid.'/'.$file, 'w');
			else fopen('sites/default/files/d2w/zip/'.$user->uid.'/'.$file, 'c');

			$zip = new ArchiverZip2('sites/default/files/d2w/zip/'.$user->uid.'/'.$file);

			foreach($node_revisions_list as $vid => $vid_data){
				$file2 = $node->nid.'-'.$vid.'-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node->title)).'.doc';

				$content = _html_init();

				$revision_current = node_load($node->nid,$vid);

				if (($node->type == 'ef_national_contribution') && (_body_unchecked($context_filter,$context_filter_names))) $node_content = render_d2w($revision_current, $context_filter, $context_filter_names);
				else{
					$node_content = drupal_render(node_view3($revision_current, $context_filter, $context_filter_names));
					$node_content = _d2w_format($node_content);
				}

				$table_summary = _d2w_table_summary($revision_current, $context_filter, $context_filter_names);

				$content .= '<h1>'.$revision_current->title.'</h1>' . $table_summary . $node_content;

				$content .= _html_end();

				$content = _c2w_filter_html($content);
				file_put_contents($destination2 . '/' . $file2, $content);

				if(file_exists('sites/default/files/d2w/word/'.$user->uid.'/'.$file2)){
					$zip->add('sites/default/files/d2w/word/'.$user->uid.'/'.$file2, $file2);
				}

			}

			if ($current == $total_batch_exported_items_all_revisions_zip_batch){
				$old_msg = drupal_get_messages('status'); // hide other green messages
				//drupal_set_message('The file was created correctly. You can download <a href="/sites/default/files/d2w/zip/'.$user->uid.'/'.$file.'">'.$file.' here</a>');
				$_SESSION['d2w'] = 'zip/'.$user->uid.'/'.$file;
			}
		}
	}

}

function _d2w_related_contributions($nid_child){

	$related_contributions_list = array();

	$result = db_query("SELECT nc.entity_id FROM {field_data_field_ef_national_contribution} nc WHERE nc.field_ef_national_contribution_target_id = :nid_child", array(':nid_child' => $nid_child));
	foreach ($result as $record){
		$nid_parent = $record->entity_id;
		$result = db_query("SELECT nc.field_ef_national_contribution_target_id FROM {field_data_field_ef_national_contribution} nc WHERE nc.entity_id = :nid_parent", array(':nid_parent' => $nid_parent));
		foreach ($result as $record){
			//if ($record->field_ef_national_contribution_target_id != $nid_child){
				$related_contributions_list []= $record->field_ef_national_contribution_target_id;
			//}
		}
	}

	return $related_contributions_list;

}
function _ef_contents2word_d2w_related_contributions_one_word_batch($node, $current, $total){

	global $user;
	global $flag_something;

  //dsm(1);
  //dsm($total);

  if ($current == 1) {
    $_SESSION['total_batch_items'] = $total;
  }

  $total_batch_exported_items_related_contributions_one_word_batch = $_SESSION['total_batch_items'];

	$destination = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {
	//dsm(2);
		$file_name = strtoupper($node->type);

		$file = $file_name.'.doc';


		//$node_related_list2 = _d2w_related_contributions($node->nid);

		$related_contributions_list = _d2w_related_contributions($node->nid);

		$content = '';
		if($current != 1){
			$content = file_get_contents($destination . '/' . $file);
					//dsm($content);
		}

		$flag_i = false;
		//$flag_nothing = true;
		foreach($related_contributions_list as $i => $nid_data){
			$node_related_current = node_load($nid_data);

			if (($node_related_current->type == 'ef_national_contribution') && (_body_unchecked($context_filter,$context_filter_names))) $node_content = render_d2w($node_related_current, $context_filter, $context_filter_names);
			else{
				$node_content = drupal_render(node_view2($node_related_current));
				$node_content = _d2w_format($node_content);
			}

			$table_summary = _d2w_table_summary($node_related_current, $context_filter, $context_filter_names);

			$content .= _break_page_html($flag_i) . '<h1>'.$node_related_current->title.'</h1>' . $table_summary . $node_content;

			$flag_something = true;
			$flag_i = true;
		}


		if ($current == $total_batch_exported_items_related_contributions_one_word_batch){
			$content = str_replace('</body></html>','',$content);
			$content = _html_init() . $content . _html_end();
		}

		$content = _c2w_filter_html($content);
		file_put_contents($destination . '/' . $file, $content);

		if ($current == $total_batch_exported_items_related_contributions_one_word_batch){
			$old_msg = drupal_get_messages('status'); // hide other green messages
			//dsm(4);
			if ($flag_something == true){
				//drupal_set_message('The file was created correctly. You can download <a href="/sites/default/files/d2w/word/'.$user->uid.'/'.$file.'">'.$file.' here</a>');
				$_SESSION['d2w'] = 'word/'.$user->uid.'/'.$file;
			}
			else drupal_set_message('There are not related "National contributions" for this revision.');
		}


	}

}

function _ef_contents2word_d2w_related_contributions_zip_batch($node, $current, $total){

	global $user;
	global $flag_something;

  if ($current == 1) {
    $_SESSION['total_batch_items'] = $total;
  }

  $total_batch_exported_items_related_contributions_zip_batch = $_SESSION['total_batch_items'];

	$destination2 = 'public://d2w/word/'.$user->uid;
	if(file_prepare_directory($destination2, FILE_CREATE_DIRECTORY)) {
		$destination = 'public://d2w/zip/'.$user->uid;
		if(file_prepare_directory($destination, FILE_CREATE_DIRECTORY)) {

			if (($node->type == 'ef_ic_quarterly_report') || ($node->type == 'ef_network_quarterly_report')) $file_name = 'EF_QUARTERLY_REPORT';
			else $file_name = strtoupper($node->type);

			$file = $file_name.'.zip';

			$related_contributions_list = _d2w_related_contributions($node->nid);

			if ($current == 1)	fopen('sites/default/files/d2w/zip/'.$user->uid.'/'.$file, 'w');
			else fopen('sites/default/files/d2w/zip/'.$user->uid.'/'.$file, 'c');

			$zip = new ArchiverZip2('sites/default/files/d2w/zip/'.$user->uid.'/'.$file);

			//$flag_nothing = true;
			foreach($related_contributions_list as $i => $nid_data){

				$content = _html_init();

				$node_related_current = node_load($nid_data);


				$file2 = $node_related_current->nid.'-RC-'.preg_replace("/[^a-z0-9\.]/", "-", strtolower($node_related_current->title)).'.doc';

				if (($node_related_current->type == 'ef_national_contribution') && (_body_unchecked($context_filter,$context_filter_names))) $node_content = render_d2w($node_related_current, $context_filter, $context_filter_names);
				else{
					$node_content = drupal_render(node_view2($node_related_current));
					//$node_content = _d2w_format($node_content);
				}

				$table_summary = _d2w_table_summary($node_related_current, $context_filter, $context_filter_names);

				$content .= '<h1>'.$node_related_current->title.'</h1>' . $table_summary . $node_content;

				$content .= _html_end();

				$content = _c2w_filter_html($content);
				file_put_contents($destination2 . '/' . $file2, $content);

				if(file_exists('sites/default/files/d2w/word/'.$user->uid.'/'.$file2)){
					$zip->add('sites/default/files/d2w/word/'.$user->uid.'/'.$file2, $file2);

					$flag_something = true;
				}




			}

			if ($current == $total_batch_exported_items_related_contributions_zip_batch){
				$old_msg = drupal_get_messages('status'); // hide other green messages
				if ($flag_something == true){
					//drupal_set_message('The file was created correctly. You can download <a href="/sites/default/files/d2w/zip/'.$user->uid.'/'.$file.'">'.$file.' here</a>');
					$_SESSION['d2w'] = 'zip/'.$user->uid.'/'.$file;
				}
				else drupal_set_message('There are not related "National contributions" for this/these revision/s.');
			}
		}
	}

}
