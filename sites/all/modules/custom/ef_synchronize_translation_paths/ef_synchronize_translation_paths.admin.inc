<?php

/**
 * @file
 * This is the Synchronize Translation Paths admin include which provides 
 * an interface to configure the module.
 */

/**
 * Admin settings form.
 *
 * @return
 *   The form.
 */
function ef_synchronize_translation_paths_settings_form() {

  $form = array();

  // Keep all permanent settings in array for easier storage.
  $form['settings'] = array(
    '#tree' => TRUE,
  );

  // Only the enabled content types will be processed.
  $content_types = array();
  foreach (node_type_get_types() as $content_type) {

    // Only content types using entity translation for now.
    if (entity_translation_node_supported_type($content_type->type)) {
      $content_types[$content_type->type] = $content_type->name;
    }
  }

  $default = ef_synchronize_translation_paths_get_setting('content_types');
  $form['settings']['content_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content Types'),
    '#options' => $content_types,
    '#description' => t('Enable the content types that you want to synchronize paths.'),
    '#default_value' => ($default ? $default : array()),
  );

  // Keep temporary settings out of the array.

  $form['submit'] = array(
    '#type' => 'submit',
    '#submit' => array('ef_synchronize_translation_paths_settings_submit'),
    '#value' => t('Save Configuration'),
  );

  return $form;
}

/**
 * Save the admin settings.
 *
 * @param $form_id
 *   The form ID.
 * @param $form_state
 *   The form state.
 */
function ef_synchronize_translation_paths_settings_submit($form_id, &$form_state) {
  variable_set('synchronize_translation_paths_settings', $form_state['values']['settings']);
  drupal_set_message(t('EF Synchronize Translation Paths settings have been saved.'));
}

function ef_synchronize_translation_paths_refresh_form() {

  $form = array();

  // Only the enabled content types will be processed.
  $enabled = ef_synchronize_translation_paths_get_enabled_content_types();

  $content_types = array();
  foreach (node_type_get_types() as $content_type) {

    // Only content types using entity translation for now.
     if (entity_translation_node_supported_type($content_type->type) && 
        in_array($content_type->type, $enabled)) 
     {
        $content_types[$content_type->type] = $content_type->name;
     }
  }

  $default = ef_synchronize_translation_paths_get_setting('content_types');
  $form['settings']['content_type'] = array(
    '#type' => 'select',
    '#title' => t('Content Type'),
    '#options' => $content_types,
    '#description' => t('Select the content type that you want to refresh.'),
    '#default_value' => ($default ? $default : array()),
  );

  // Keep temporary settings out of the array.
  $form['refresh'] = array(
    '#type' => 'checkbox',
    '#title' => t('Refresh all paths now?'),
    '#description' => t('If checked, all paths for all nodes for the selected content type will be updated. This cannot be undone. It\'s recommended to backup your database (at least table <em>url_alias</em>) before enabling!'),
    '#default_value' => FALSE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#submit' => array('ef_synchronize_translation_paths_refresh_submit'),
    '#value' => t('Refresh paths'),
  );

  return $form;
}

function ef_synchronize_translation_paths_refresh_submit($form_id, &$form_state) {
  if ($form_state['values']['refresh'])
    _ef_synchronize_translation_paths_refresh_paths($form_state['values']['content_type']);
}
