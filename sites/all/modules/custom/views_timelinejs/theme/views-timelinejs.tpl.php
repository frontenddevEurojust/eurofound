<?php
/*********************************************************
* Eworx S.A. - 2014
* @Author kp@eworx.gr
* CWB timelines view template
**********************************************************/

$assetsPath = drupal_get_path('module', 'dvscwb') . "/theme";


drupal_add_js($assetsPath . '/scripts/extend.js');

drupal_add_css($assetsPath . '/css/cwb.css');

drupal_add_js($assetsPath . '/scripts/views/timelines.js');
drupal_add_css($assetsPath . '/css/views/time-line.css');

/**
 * @file
 * Views template to output TimelineJS wrapper markup.
 */
?>
<div id="<?php print $timelinejs_id ?>" class="timelinejs"></div>
