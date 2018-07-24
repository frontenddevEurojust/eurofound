<?php
function ef_file_additional_info_view_revisions($nid) {
  global $user;
  
  $node = node_load($nid);

  // Page title.
  drupal_set_title(t('File information of %title', array('%title' => $node->title)), PASS_THROUGH);

  // Alert if there is no live node
  if (!isset($node->workbench_moderation['published'])) {
    drupal_set_message(t('Currently there is no published revision of this node.'), 'warning');
  }

  // Get node file fields
  $fields = field_info_instances('node', $node->type);
  foreach ($fields as $key => $value) {
	if ($value['widget']['module'] == 'file') {
		$filefields[$value['widget']['weight']] = $value;
	}
  }
  ksort($filefields);
  
  // Get all of the node revisions, each with its most recent moderation.
  $query = db_select('node', 'n');
  $query->leftJoin('node_revision', 'r', 'n.nid = r.nid');
  $query->leftJoin('users', 'u', 'r.uid = u.uid');
  $query->addField('n', 'vid', 'live_revision');
  $query->condition('n.nid', $node->nid)
    ->orderBy('r.vid', 'DESC')
    ->fields('r', array('nid', 'vid', 'title', 'log', 'uid', 'timestamp'))
    ->fields('u', array('name'));

  $revisions = $query->execute()
    ->fetchAllAssoc('vid');

  // Build the table rows.
  $rows = array();
  foreach ($revisions as $revision) {
    $row = array(
      'data' => array(
        'vid' => '',
        'info' => '',
        'date' => '',
        'revision' => '',
        'files' => '',
      ),
      'class' => array('revision'),
    );

    // Add row classes.
    if ($revision->vid == $node->workbench_moderation['current']->vid) {
      $row['class'][] = 'current-revision';
    }
    if (isset($node->workbench_moderation['published']) && $revision->vid == $node->workbench_moderation['published']->vid) {
      $row['class'][] = 'published-revision';
    }
    else {
      $row['class'][] = 'unpublished-revision';
    }

    // Add row data.
    $row['data']['vid'] = $revision->vid;
    $row['data']['info'] .= '<div class="revision-title">' . check_plain($revision->title) . '</div>';
    $row['data']['info'] .= '<div class="revision-log description">' . filter_xss($revision->log) . '</div>';
    $row['data']['info'] .= '<div class="revision-user description">' . t('Revised by !user', array('!user' => theme('username', array('account' => $revision)))) . '</div>';
    $row['data']['date'] = format_date($revision->timestamp, 'short');

    // Revision operations.
    $revision_operations = array();
    if (isset($node->workbench_moderation['published']) && $revision->vid == $node->workbench_moderation['published']->vid) {
      $revision_operations['view'] = workbench_moderation_access_link(t('view'), "node/{$revision->nid}");
    }
    elseif ($revision->vid == $node->workbench_moderation['current']->vid) {
      $revision_operations['view'] = workbench_moderation_access_link(t('view'), "node/{$revision->nid}/current-revision");
    }
    else {
      $revision_operations['view'] = workbench_moderation_access_link(t('view'), "node/{$revision->nid}/revisions/{$revision->vid}/view");
    }

    $revision_operations['revert'] = workbench_moderation_access_link(t('revert'), "node/{$revision->nid}/revisions/{$revision->vid}/revert");
    $revision_operations['delete'] = workbench_moderation_access_link(t('delete'), "node/{$revision->nid}/revisions/{$revision->vid}/delete");

    $row['data']['revision'] = implode(' | ', array_filter($revision_operations));

    // Get the moderation history of this revision.
    $query = db_select('workbench_moderation_node_history', 'm');
    $query->leftJoin('users', 'u', 'm.uid = u.uid');
    $query->condition('m.vid', $revision->vid)
      ->orderBy('m.stamp', 'DESC')
      ->orderBy('m.hid', 'DESC')
      ->fields('m')
      ->fields('u', array('name'));

    $moderations = $query->execute()
      ->fetchAllAssoc('hid');

    // Make sure it's an array.
    if (empty($moderations)) {
      $moderations = array();
      if ($revision->vid == $node->workbench_moderation['current']->vid) {
        $moderations = array($node->workbench_moderation['current']);
      }
    }

    // If this is the current revision, provide moderation links.
    if (!empty($node->workbench_moderation['published']) && $revision->vid == $node->workbench_moderation['published']->vid) {
      $row['data']['files'] = '<div class="moderation-state"><strong>' . t('This is the published revision.') . '</strong></div>';
      // Provide an unpublish link.
      $next_states = workbench_moderation_states_next(workbench_moderation_state_published(), $user, $node);
      if (!empty($next_states)) {
        $row['data']['files'] .= '<div class="moderation-actions">' . l(t('Unpublish'), "node/{$revision->nid}/moderation/{$revision->live_revision}/unpublish") . '</div>';
      }
    }
    elseif ($revision->vid == $node->workbench_moderation['current']->vid) {
      $node_current = workbench_moderation_node_current_load($node);
      $row['data']['files'] = '<div class="moderation-state"><strong>' . t('This is the current revision. The current state is %state.', array('%state' => workbench_moderation_state_label($node->workbench_moderation['current']->state))) . '</strong></div>';
    }
	
	$noderevision = node_load($node->nid,$revision->vid);
	foreach ($filefields as $field) {
		$items = field_get_items('node', $noderevision, $field['field_name']);
		if (!empty($items)) {
			foreach ($items as $key => $item) {
				// Search min revision for this file
				if (!isset($files[$item['fid']])) {
					$query = db_select('file_managed', 'f');
					$query->innerJoin('field_revision_'.$field['field_name'], 'r', 'r.'.$field['field_name'].'_fid = f.fid');
					$query->condition('f.fid', $item['fid'])
					  ->orderBy('r.revision_id','ASC')
					  ->fields('r',array('revision_id'))
					  ->range(0,1);

					$minrevision = $query->execute()->fetchObject();
					$files[$item['fid']] = $minrevision->revision_id;
				}
				$items[$key]['vid'] = $files[$item['fid']];
			}
			$list = ef_file_additional_info_generate_list($items,$field['label'],true);
			$row['data']['files'] .= theme('item_list',$list);
		}
	}	

    $rows[] = $row;
  }

  // Set the table header.
  $header = array(t('Revision'), t('Title'), t('Date'), t('Revision actions'), t('Files'));

  // Return properly styled output.
  return array(
    '#attached' => array(
      'css' => array(
        drupal_get_path('module', 'workbench_moderation') . '/css/workbench_moderation.css',
      ),
    ),
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );
}
