<?php

/**
 * Implements template_preprocess_html().
 *
 */
//function effoundationtheme_preprocess_html(&$variables) {
//  // Add conditional CSS for IE. To use uncomment below and add IE css file
//  drupal_add_css(path_to_theme() . '/css/ie.css', array('weight' => CSS_THEME, 'browsers' => array('!IE' => FALSE), 'preprocess' => FALSE));
//
//  // Need legacy support for IE downgrade to Foundation 2 or use JS file below
//  // drupal_add_js('http://ie7-js.googlecode.com/svn/version/2.1(beta4)/IE7.js', 'external');
//}

/**
 * Implements template_preprocess_page
 *
 */
/*function effoundationtheme_preprocess_page(&$variables) {

  // Convenience variables
  $left = $variables['page']['sidebar_first'];
  $right = $variables['page']['sidebar_second'];

  // Dynamic sidebars
  if (!empty($left) && !empty($right)) {
    $variables['main_grid'] = 'large-4 push-4';
    $variables['sidebar_first_grid'] = 'large-4 pull-4';
    $variables['sidebar_sec_grid'] = 'large-4';
  } elseif (empty($left) && !empty($right)) {
    $variables['main_grid'] = 'large-8';
    $variables['sidebar_first_grid'] = '';
    $variables['sidebar_sec_grid'] = 'large-4';
  } elseif (!empty($left) && empty($right)) {
    $variables['main_grid'] = 'large-8 push-4';
    $variables['sidebar_first_grid'] = 'large-4 pull-8';
    $variables['sidebar_sec_grid'] = '';
  } else {
    $variables['main_grid'] = 'large-12';
    $variables['sidebar_first_grid'] = '';
    $variables['sidebar_sec_grid'] = '';
  }
}*/

/**
 * Implements template_preprocess_node
 *
 */
//function effoundationtheme_preprocess_node(&$variables) {
//}

/**
 * Implements hook_preprocess_block()
 */
//function effoundationtheme_preprocess_block(&$variables) {
//  // Add wrapping div with global class to all block content sections.
//  $variables['content_attributes_array']['class'][] = 'block-content';
//
//  // Convenience variable for classes based on block ID
//  $block_id = $variables['block']->module . '-' . $variables['block']->delta;
//
//  // Add classes based on a specific block
//  switch ($block_id) {
//    // System Navigation block
//    case 'system-navigation':
//      // Custom class for entire block
//      $variables['classes_array'][] = 'system-nav';
//      // Custom class for block title
//      $variables['title_attributes_array']['class'][] = 'system-nav-title';
//      // Wrapping div with custom class for block content
//      $variables['content_attributes_array']['class'] = 'system-nav-content';
//      break;
//
//    // User Login block
//    case 'user-login':
//      // Hide title
//      $variables['title_attributes_array']['class'][] = 'element-invisible';
//      break;
//
//    // Example of adding Foundation classes
//    case 'block-foo': // Target the block ID
//      // Set grid column or mobile classes or anything else you want.
//      $variables['classes_array'][] = 'six columns';
//      break;
//  }
//
//  // Add template suggestions for blocks from specific modules.
//  switch($variables['elements']['#block']->module) {
//    case 'menu':
//      $variables['theme_hook_suggestions'][] = 'block__nav';
//    break;
//  }
//}

//function effoundationtheme_preprocess_views_view(&$variables) {
//}

/**
 * Implements template_preprocess_panels_pane().
 *
 */
//function effoundationtheme_preprocess_panels_pane(&$variables) {
//}

/**
 * Implements template_preprocess_views_views_fields().
 *
 */
//function effoundationtheme_preprocess_views_view_fields(&$variables) {
//}

/**
 * Implements theme_form_element_label()
 * Use foundation tooltips
 */
//function effoundationtheme_form_element_label($variables) {
//  if (!empty($variables['element']['#title'])) {
//    $variables['element']['#title'] = '<span class="secondary label">' . $variables['element']['#title'] . '</span>';
//  }
//  if (!empty($variables['element']['#description'])) {
//    $variables['element']['#description'] = ' <span data-tooltip="top" class="has-tip tip-top" data-width="250" title="' . $variables['element']['#description'] . '">' . t('More information?') . '</span>';
//  }
//  return theme_form_element_label($variables);
//}

/**
 * Implements hook_preprocess_button().
 */
//function effoundationtheme_preprocess_button(&$variables) {
//  $variables['element']['#attributes']['class'][] = 'button';
//  if (isset($variables['element']['#parents'][0]) && $variables['element']['#parents'][0] == 'submit') {
//    $variables['element']['#attributes']['class'][] = 'secondary';
//  }
//}

/**
 * Implements hook_form_alter()
 * Example of using foundation sexy buttons
 */
function effoundationtheme_form_alter(&$form, &$form_state, $form_id) {
  if (!empty($form['actions']) && !empty($form['actions']['submit'])) {
    $form['actions']['submit']['#attributes'] = array('class' => array('primary', 'button'));
  }
}

// Sexy preview buttons
//function effoundationtheme_form_comment_form_alter(&$form, &$form_state) {
//  $form['actions']['preview']['#attributes']['class'][] = array('class' => array('secondary', 'button', 'radius'));
//}


/**
 * Implements template_preprocess_panels_pane().
 */
// function zurb_foundation_preprocess_panels_pane(&$variables) {
// }

/**
* Implements template_preprocess_views_views_fields().
*/
/* Delete me to enable
function THEMENAME_preprocess_views_view_fields(&$variables) {
 if ($variables['view']->name == 'nodequeue_1') {

   // Check if we have both an image and a summary
   if (isset($variables['fields']['field_image'])) {

     // If a combined field has been created, unset it and just show image
     if (isset($variables['fields']['nothing'])) {
       unset($variables['fields']['nothing']);
     }

   } elseif (isset($variables['fields']['title'])) {
     unset ($variables['fields']['title']);
   }

   // Always unset the separate summary if set
   if (isset($variables['fields']['field_summary'])) {
     unset($variables['fields']['field_summary']);
   }
 }
}

// */

/**
 * Implements hook_css_alter().
 */
function effoundationtheme_css_alter(&$css) {
  // Always remove base theme CSS.
  $theme_path = drupal_get_path('theme', 'zurb_foundation');

  foreach($css as $path => $values) {
    if(strpos($path, $theme_path) === 0) {
      unset($css[$path]);
    }
  }
}

/**
 * Implements hook_js_alter().
 */
function effoundationtheme_js_alter(&$js) {

  // Always remove base theme JS.
  $theme_path = drupal_get_path('theme', 'zurb_foundation');

  foreach($js as $path => $values) {
    if(strpos($path, $theme_path) === 0) {
      unset($js[$path]);
    }
  }
}


function effoundationtheme_preprocess_page(&$variables) {
  $status = drupal_get_http_header("status");

  drupal_add_http_header('X-UA-Compatible', 'IE=edge,chrome=1');
/*
	if($status == '403 Forbidden' && !$variables['logged_in']) {
		$variables['page']['content']['system_main']['main']['#markup'] = t('Please log in to view');
	}
*/
  if (arg(0) == 'user') {
    switch (arg(1)) {
      case 'register':
        drupal_set_title(t('Create new account for CMS and extranet'));
        break;
      case 'password':
        drupal_set_title(t('Request new password'));
        break;
      case '':
      case 'login':
        drupal_set_title(t('Log in to CMS and extranet'));
        break;
    }
  }

  drupal_add_js(drupal_get_path('theme', 'effoundationtheme') . '/js/GA/base64.js');
  drupal_add_js(drupal_get_path('theme', 'effoundationtheme') . '/js/GA/analytics.js');


}

function effoundationtheme_preprocess_html(&$variables) {
	$status = drupal_get_http_header("status");
	if($status == '403 Forbidden') {
		$variables['classes_array'][]="forbidden-403";
	}
}

/**
 * Implements hook_fieldset().
 *
 * Collapsed fieldsets to show fieldset description.
 */
function effoundationtheme_fieldset(&$variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id'));
  _form_set_class($element, array('form-wrapper'));

  $output = '<fieldset' . drupal_attributes($element['#attributes']) . '>';
  if (!empty($element['#title'])) {
    // Always wrap fieldset legends in a SPAN for CSS positioning.
    $output .= '<legend><span class="fieldset-legend">' . $element['#title'] . '</span></legend>';
  }
  //Updated: Fieldset description to be outside of wrapper in order to be always visible
  if (!empty($element['#description'])) {
    $output .= '<div class="fieldset-description">' . $element['#description'] . '</div>';
  }
  $output .= '<div class="fieldset-wrapper">';
  $output .= $element['#children'];
  if (isset($element['#value'])) {
    $output .= $element['#value'];
  }
  $output .= '</div>';
  $output .= "</fieldset>\n";
  return $output;
}

 function effoundationtheme_preprocess_print(&$vars) {
	$nodeType=node_type_get_name($vars['node']);
	$vars['print']['title']=$nodeType." - ".$vars['print']['title'];
}


function effoundationtheme_diff_node_revisions($vars){
  $form = $vars['form'];
  $output = '';
  // Overview table:
  $header = array(
  	t('Revision Id'),
	t('Title'),
	t('Moderation status'),
	t('Revision'),
    array('data' => drupal_render($form['submit']), 'colspan' => 2),
    array('data' => t('Operations'), 'colspan' => 2),
  );
  if (isset($form['info']) && is_array($form['info'])) {
    foreach (element_children($form['info']) as $key) {
      $row = array();
	  $node=node_load($form['nid']['#value'], $key);
      if (isset($form['operations'][$key][0])) {
        // Note: even if the commands for revert and delete are not permitted,
        // the array is not empty since we set a dummy in this case.
        $row[] =$key;
		$row[] = workbench_moderation_access_link($node->title, "node/{$node->nid}/revisions/{$key}/view");
		$row[] = $node->workbench_moderation['my_revision']->state;
		$row[] = drupal_render($form['info'][$key]);
        $row[] = drupal_render($form['diff']['old'][$key]);
        $row[] = drupal_render($form['diff']['new'][$key]);
        $row[] = drupal_render($form['operations'][$key][0]);
        $row[] = drupal_render($form['operations'][$key][1]);
        $rows[] = array(
          'data' => $row,
          'class' => array('diff-revision'),
        );
      }
      else {
		$row[] = $key;
		$row[] = workbench_moderation_access_link($node->title, "node/{$node->nid}");
		$row[] = $node->workbench_moderation['my_revision']->state;
        // The current revision (no commands to revert or delete).
        $row[] = array(
          'data' => drupal_render($form['info'][$key]),
          'class' => array('revision-current'),
        );
        $row[] = array(
          'data' => drupal_render($form['diff']['old'][$key]),
          'class' => array('revision-current'),
        );
        $row[] = array(
          'data' => drupal_render($form['diff']['new'][$key]),
          'class' => array('revision-current'),
        );
        $row[] = array(
          'data' => t('current revision'),
          'class' => array('revision-current'),
          'colspan' => '2',
        );
        $rows[] = array(
          'data' => $row,
          'class' => array('error diff-revision'),
        );
      }
    }
  }
  $output .= theme('table__diff__revisions', array(
    'header' => $header,
    'rows' => $rows,
    'sticky' => FALSE,
    'attributes' => array('class' => 'diff-revisions'),
  ));

  $output .= drupal_render_children($form);
  return $output;
}



function effoundationtheme_site_map_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  unset($element['#localized_options']);
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
function effoundationtheme_preprocess_search_result(&$variables) {
  global $language;

  $result = $variables['result'];
  $variables['url'] = check_url($result['link']);
  $variables['title'] = check_plain($result['title']);
  if (isset($result['language']) && $result['language'] != $language->language && $result['language'] != LANGUAGE_NONE) {
    $variables['title_attributes_array']['xml:lang'] = $result['language'];
    $variables['content_attributes_array']['xml:lang'] = $result['language'];
  }

  $info = array();
  if (!empty($result['module'])) {
    $info['module'] = check_plain($result['module']);
  }
  if (!empty($result['date'])) {
    $info['date'] = "<span class='date'>".format_date($result['date'], 'ef_date_format')."</span>";
  }
  $info['type']="<span class='content-type'>".$result['type']."</span>";
  /*if (isset($result['extra']) && is_array($result['extra'])) {
    $info = array_merge($info, $result['extra']);
  }*/
  if (isset($result['node']->field_ef_observatory['und'][0]['taxonomy_term'])) {
    $info['observatory'] = "<span class='observatory'>".$result['node']->field_ef_observatory['und'][0]['taxonomy_term']->name."</span>";
  }
   if (isset($result['node']->field_ef_theme['und'][0]['taxonomy_term'])) {
    $info['theme'] =  "<span class='theme'>".$result['node']->field_ef_theme['und'][0]['taxonomy_term']->name."</span>";
  }
  // Check for existence. User search does not include snippets.
  $variables['snippet'] = isset($result['snippet']) ? $result['snippet'] : '';
  // Provide separated and grouped meta information..
  $variables['info_split'] = $info;
  $variables['info'] = implode(' | ', $info);
  $variables['theme_hook_suggestions'][] = 'search_result__' . $variables['module'];
}

function getNationalContributionCountry($iso2)
  {
      $sql = "SELECT name as name
              from countries_country where iso2
              like :cadena";

      $result = db_query($sql, array(':cadena' => '%' . $iso2 . '%'))->fetchAll();

      return $result;


  }


?>
