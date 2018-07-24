<?php
/**
 * @file
 * ef_basics.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ef_basics_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Back to list block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'ef_back_to_list_block';
  $fe_block_boxes->body = '<?php
    if (isset($_SESSION[\'back_search_invisible\']) and $_SESSION[\'back_search_invisible\']==\'false\') {     
 echo "<a href=\'".$_SESSION[\'back_search\']."\'  title=\'Back to search results\' >". t(\'Back to search results\')."</a>";  
   }
 ?>
';

  $export['ef_back_to_list_block'] = $fe_block_boxes;

  return $export;
}
