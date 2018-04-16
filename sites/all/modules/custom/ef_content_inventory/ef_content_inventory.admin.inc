<?php
/**
 * @file
 * Admin form for EF Content Inventory
 */

function ef_content_inventory_settings_form($form, &$form_state) {

  $active_content_types = variable_get('ef_content_inventory_enabled_content_types');
  $checked_content_types = variable_get('ef_content_inventory_checked_content_types');


  $form['content_types'] = array(
    '#type' => 'fieldset',
    '#title' => t('Enabled Content Types'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  foreach ($active_content_types as $key => $value) {
    $form['content_types']['active'][$value] = array(
      '#type' => 'checkbox',
      '#title' => node_type_get_name($value),
      '#default_value' => $checked_content_types[$value],
    );
  }

  $enablebc = variable_get('ef_content_inventory_enable_breadcrumbs');

  $form['enable_breadcrumbs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Breadcrumbs'),
    '#default_value' => empty($enablebc) ? 0 : 1,
    '#description' => t('When this setting is activated generating a report takes a huge amount of time unless breadcrumbs are already stored in memory.'),
  );

  $form['node_filtering'] = array(
    '#type' => 'fieldset',
    '#title' => t('Node selection'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $enablens = variable_get('ef_content_inventory_enable_node_selection');
  $ns_node_ids = variable_get('ef_content_inventory_node_selection_node_ids');

  $form['node_filtering']['enable_node_selection'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable node selection'),
    '#default_value' => empty($enablens) ? 0 : 1,
  );

  $form['node_filtering']['node_ids'] = array(
    '#type' => 'textfield',
    '#title' => t('Node IDs'),
    '#size' => 60,
    '#maxlength' => 255,
    '#description' => t('Enter comma separated node IDs. The content inventory report will only contain these nodes when "Enable node selection" is checked'),
    '#default_value' => implode(',', $ns_node_ids),
  );

  $cron_items = variable_get('ef_content_inventory_items_on_cron_run', 0);
  $nids = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('n.status', 1)
    ->condition('n.type', array($active_content_types, 'IN'))
    ->execute()
    ->fetchCol();

  $count_nids = count($nids);
  $stored_breadcrumbs = variable_get('ef_content_inventory_stored_breadcrumbs');
  $count_breadcrumbs = count($stored_breadcrumbs);

  $form['cron_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Stored Breadcrumbs'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['cron_settings']['html'] = array(
    '#type' => 'item',
    '#description' => 'Currently there are <b>' . $count_breadcrumbs . '</b> stored breadcrumbs. And there is a total of <b>' . $count_nids . '</b> published pages.',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Configuration'),
  );

  return $form;
}

function ef_content_inventory_settings_form_validate($form, &$form_state) {
  $node_ids = explode(',', $form_state['values']['node_ids']);
  foreach ($node_ids as $key => $value) {
    if (!is_numeric($value)) {
      form_set_error("[node_ids",
        t('All nids must be numeric.'));
    }
  }
}

function ef_content_inventory_settings_form_submit($form, &$form_state) {
  $active_content_types = variable_get('ef_content_inventory_enabled_content_types');

  foreach ($form_state['values'] as $key => $value) {
    if (in_array($key, $active_content_types)) {
      $checked_content_types[$key] = $value;
    }
  }

  variable_set('ef_content_inventory_enable_breadcrumbs', $form_state['values']['enable_breadcrumbs']);
  variable_set('ef_content_inventory_checked_content_types', $checked_content_types);
  variable_set('ef_content_inventory_enable_node_selection', $form_state['values']['enable_node_selection']);
  variable_set('ef_content_inventory_node_selection_node_ids', explode(',', $form_state['values']['node_ids']));

  drupal_set_message('Configuration saved.');
}

function ef_content_inventory_download_form($form, &$form_state) {

  $content_inventory_files = file_scan_directory('public://content-inventory',  '/.*\.xlsx$/');
  drupal_add_css(drupal_get_path('module', 'ef_content_inventory') . '/css/ef-content-inventory.css');

  if (!empty($content_inventory_files)) {
    $form['files_title'] = array(
      '#type' => 'item',
      '#markup' => '<h3>CONTENT INVENTORY FILES</h3>',
    );
  }

  ksort($content_inventory_files);

  $first = key($content_inventory_files);
  $last = key(array_slice($content_inventory_files, -1, 1, TRUE));

  foreach ($content_inventory_files as $file => $file_data) {
    $form[$file_data->name . '_xlsx'] = array(
      '#type' => 'item',
      '#markup' => l($file_data->filename, '/sites/default/files/content-inventory/' . $file_data->filename),
      '#prefix' => $first == $file ? '<ul><li>' : '<li>',
    );

    $form[$file_data->name] = array(
      '#type' => 'submit',
      '#name' => $file_data->name,
      '#value' => t('Delete'),
      '#submit' => array('ef_content_inventory_delete_file'),
      '#suffix' => $last == $file ? '</li></ul>' : '</li>',
    );
  }

  $generate = variable_get('ef_content_inventory_generate_on_cron');
  $generating = variable_get('ef_content_inventory_cron_working');

  if ($generate) {
    $form['file_will_be_created'] = array(
      '#type' => 'item',
      '#markup' => "<p class='ci-message'>Currently there is a request to create a new content inventory file. No new request can be submitted as long as this process is running. Alternatively, the current request can be dropped using the 'Stop process' button.</p>",
    );
  }
  elseif ($generating) {
    $form['file_is_being_created'] = array(
      '#type' => 'item',
      '#markup' => "<p class='ci-message'>Currently, a content inventory is being compiled. No new request can be submitted as long as this process is running. Alternatively, the current process can be stopped using the 'Stop process' button.</p>",
    );
  }

  $form['unlock'] = array(
    '#type' => 'submit',
    '#value' => t('Stop process'),
    '#disabled' => !$generate && !$generating,
    '#attributes' => array('class' => array('form-submit-inventory')),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Generate content inventory file'),
    '#disabled' => $generate || $generating,
    '#attributes' => array('class' => array('form-submit-inventory')),
  );

  return $form;
}

function ef_content_inventory_download_form_submit($form, &$form_state) {
  if ($form_state['clicked_button']['#id'] == 'edit-unlock') {
    _reset_ci();
  }
  else {
    variable_set('ef_content_inventory_generate_on_cron', TRUE);
    drupal_set_message('New file containing the content inventory will be created. As this is a long task it will be executed as a background process. The new file will be listed on this page after the task is finished.');
    drupal_goto('/admin/config/content-inventory/download');
  }

  return;
}

function ef_content_inventory_delete_file($form, &$form_state) {
  $deleted_file = 'public://content-inventory/' . $form_state['clicked_button']['#parents'][0] . '.xlsx';
  file_unmanaged_delete($deleted_file);
}
