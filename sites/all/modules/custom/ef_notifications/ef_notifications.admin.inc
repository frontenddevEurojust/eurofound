<?php
/**
 * @file
 * Admin forms for EF Notifications
 */

/**
 * Form for administering the email content.
 *
 * Administrators can use this form to add, update, delete emails.
 */

function ef_notifications_form($form, &$form_state) {
  $ef_notifications = ef_notifications_get();
  $state_labels = workbench_moderation_state_labels();
  foreach ($ef_notifications as $transition_label => $notification_transition_set) {
    $state_label = $notification_transition_set;
    $transition = array_shift($state_label);
    $transition_title = t(ucwords($state_labels[$transition->from_name] .' To '.$state_labels[$transition->to_name]));
    $form[$transition_label] = array(
      '#type' => 'fieldset',
      '#title' => check_plain($transition_title),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    foreach ($notification_transition_set as $rid => $notification_transition) {
      $subject = $notification_transition->subject;
      $message = $notification_transition->message;

      $users = notified_user_load($rid);
      $role = user_role_load($rid);

      $params['rid'] = $rid;
      $params['role'] = $role->name;
      $params['from_state'] = $notification_transition->from_name;
      $params['to_state'] = $notification_transition->to_name;

      if (is_numeric($rid) && $rid != 0) {
        $form[$transition_label][$rid] = array(
          '#type' => 'fieldset',
          '#title' => check_plain(t("Email @role_name",
                                    array('@role_name' => ucwords($role->name)))),
          '#collapsible' => TRUE,
          '#collapsed' => TRUE,
        );
      } else {
        $form[$transition_label][$rid] = array(
          '#type' => 'fieldset',
          '#title' => check_plain(t("Email @role_name",
                                    array('@role_name' => ucwords($users)))),
          '#collapsible' => TRUE,
          '#collapsed' => TRUE,
        );
      }
      $form[$transition_label][$rid]['subject'] = array(
        '#type' => 'textfield',
        '#default_value' => $subject,
        '#title' => t('Subject'),
        '#maxlength' => 255,
      );

      $form[$transition_label][$rid]['message'] = array(
        '#type' => 'textarea',
        '#default_value' => $message,
        '#title' => t('Message'),
        '#size' => 30,
      );
    }
  }

  if ($ef_notifications) {
    $form['#tree'] = TRUE;

    $form['token_set'] = array(
      '#type' => 'fieldset',
      '#title' => t('Available Tokens'),
      '#collapsible' => TRUE,
    );

    $form['token_set']['tokens'] = array(
      '#theme' => 'token_tree',
      '#token_types' => array('node', 'user'),
      '#click_insert' => TRUE,
    );

    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save Configuration'),
    );
  }
  else {
    drupal_set_message(t('No email transitions have been defined yet. Visit the
                         <a href="@url"> email transition configuration page</a>',
                      array(
                        '@url' =>
                        url('admin/config/workbench/moderation/email-transitions'))), 'warning');
    $form['#disabled'] = TRUE;
  }

  return $form;
}


/**
 * Validates the form values.
 *
 * Validates if the user has entered a valid subject / message for the emails.
 */
function ef_notifications_form_validate($form, &$form_state) {
  $ef_notifications = ef_notifications_get();
  foreach ($ef_notifications as $transition_label => $notification_transition_set) {
    foreach ($notification_transition_set as $rid => $notification_transition) {
      if (isset($form_state['values'][$transition_label])) {
        // Determine if subject is set with no message.
        if ($form_state['values'][$transition_label][$rid]['subject'] != NULL
            && $form_state['values'][$transition_label][$rid]['message'] == NULL) {
          form_set_error("$transition_label][$rid][message",
                         t('You must add an email message if a subject is provided'));
        }
        // Determine if message is set with no subject.
        if ($form_state['values'][$transition_label][$rid]['subject'] == NULL
            && $form_state['values'][$transition_label][$rid]['message'] != NULL) {
          form_set_error("$transition_label][$rid][subject",
                         t('You must add a subject if an email message is provided'));
        }
      }
    }
  }
}

/**
 * Submit function for the form, saves or deletes emails.
 */
function ef_notifications_form_submit($form, &$form_state) {
  $ef_notifications = ef_notifications_get();
  foreach ($ef_notifications as $transition_label => $notification_transition_set) {
    foreach ($notification_transition_set as $rid => $notification_transition) {
      $subject = $form_state['values'][$transition_label][$rid]['subject'];
      $message = $form_state['values'][$transition_label][$rid]['message'];
      if (is_numeric($rid)) {
        ef_notifications_save_by_role($notification_transition, $rid, $subject, $message);
      } else {
        ef_notifications_save_by_users($notification_transition, $rid, $subject, $message);
      }
    }
  }
  drupal_set_message(t("Email's have been updated"));
}

/**
 * Administration form to create and delete email transitions.
 */

function ef_notifications_transitions_form($form, &$form_state) {
  // List existing states.
  $form['role_section'] = array(
    '#markup' => '<h1>Content state transition - Notifications by Role</h1> <p>Select a role to receive a notification when a given transition is done.
     All users with the selected role will be notified.</p>',
    '#weight' => 0
  );

  $form['user_section'] = array(
    '#markup' => '<h1>Content state transition - Notifications by Users</h1> <p>Select a country group or a user to be notified on a given transition.</p>',
    '#weight' => 0
  );

  $form['ct_roles_section'] = array(
    '#markup' => '<h1>Content creation - Notifications by Role</h1> <p>Select a role to receive a notification when a given content is created.
     All users with the selected role will be notified.</p>',
    '#weight' => 0
  );

  $form['ct_users_section'] = array(
    '#markup' => '<h1>Content creation - Notifications by Users</h1> <p>Select a country group or an user to be notified when a given content is created.</p>',
    '#weight' => 0
  );

  $types = drupal_map_assoc(workbench_moderation_moderate_node_types());
  $transitions = workbench_moderation_transitions();
  $roles = ef_notifications_determine_valid_roles();
  $users = ef_notifications_determine_valid_users();

  if (!$types) {
    drupal_set_message(t('Moderation is not enabled for any content types. Visit
                         the <a href="@url"> content type administration
                         page</a> to enable moderation for one or more types.',
                         array('@url' => url('admin/structure/types'))), 'warning');
    $form['#disabled'] = TRUE;
  }
  elseif (!$roles) {
    drupal_set_message(t('Moderation is not enabled for any roles. Visit the
                         <a href="@url"> user permissions page</a> to enable moderation
                         for one or more roles.',
                         array('@url' => url('admin/people/permissions', array('fragment' => 'module-workbench_moderation')))), 'warning');
    $form['#disabled'] = TRUE;
  }
  else {
    $form['transitions_users'] = array(
      '#tree' => TRUE,
    );
    $form['transitions_role'] = array(
      '#tree' => TRUE,
    );
    $form['ct_creation_users'] = array(
      '#tree' => TRUE,
    );
    $form['ct_creation_role'] = array(
      '#tree' => TRUE,
    );
  }

  //NODE CREATION

  foreach ($types as $moderated_ct) {
    $element = array();

    $element['moderated_type'] = array(
      '#type' => 'value',
      '#value' => $moderated_ct
    );

    foreach ($roles as $rid => $role) {
      $ef_notification = ef_notifications_get_by_ct($moderated_ct, $rid);
      $element[$role] = array(
        '#type' => 'checkbox',
        '#title' => check_plain(t(ucwords($role))),
        '#title_display' => 'invisible',
        '#default_value' => $ef_notification ? TRUE : FALSE,
      );
    }

    $form['ct_creation_role'][] = $element;
  }

  foreach ($types as $moderated_ct) {
    $element = array();

    $element['moderated_type'] = array(
      '#type' => 'value',
      '#value' => $moderated_ct,
    );

    foreach ($users as $rid2 => $user) {
      $ef_notification = ef_notifications_get_by_ct($moderated_ct, NULL , $rid2);
      $element[$user] = array(
        '#type' => 'checkbox',
        '#title' => (t($user)),
        '#title_display' => 'invisible',
        '#default_value' => $ef_notification ? TRUE : FALSE,
      );
    }

    $form['ct_creation_users'][] = $element;
  }

  //END NODE CREATION

  foreach ($transitions as $transition) {
    $element = array();

    $element['transition'] = array(
      '#type' => 'value',
      '#value' => $transition,
    );
    $element['from_name'] = array(
      '#markup' => check_plain(workbench_moderation_state_label($transition->from_name)),
    );
    $element['to_name'] = array(
      '#markup' => check_plain(workbench_moderation_state_label($transition->to_name)),
    );

    foreach ($roles as $rid => $role) {
      $ef_notification = ef_notifications_get_by_role($transition, $rid);
      $element[$role] = array(
        '#type' => 'checkbox',
        '#title' => check_plain(t(ucwords($role))),
        '#title_display' => 'invisible',
        '#default_value' => $ef_notification ? TRUE : FALSE,
      );
    }

    $form['transitions_role'][] = $element;
  }

  foreach ($transitions as $transition) {
    $element = array();

    $element['transition'] = array(
      '#type' => 'value',
      '#value' => $transition,
    );

    $element['from_name'] = array(
      '#markup' => check_plain(workbench_moderation_state_label($transition->from_name)),
    );

    $element['to_name'] = array(
      '#markup' => check_plain(workbench_moderation_state_label($transition->to_name)),
    );

    foreach ($users as $rid2 => $user) {
      $ef_notification = ef_notifications_get_by_users($transition, $rid2);
      $element[$user] = array(
        '#type' => 'checkbox',
        '#title' => t($user),
        '#title_display' => 'invisible',
        '#default_value' => $ef_notification ? TRUE : FALSE,
      );
    }

    $form['transitions_users'][] = $element;

  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Transforms the notification transitions data into tables.
 */
function theme_ef_notifications_transitions_form($variables) {
  $form = $variables['form'];

  $header = array(
    t('From'),
    '',
    t('To'),
  );

  $header2 = array(
    t('From'),
    '',
    t('To'),
  );

  $header3 = array(
    t('Type'),
  );

  $header4 = array(
    t('Type'),
  );

  $roles = ef_notifications_determine_valid_roles();
  $role_names = array();
  foreach ($roles as $rid => $role) {
    $role_names[$rid] = ucwords($role);
    $header[] = t("@role", array('@role' => ucwords($role)));
  }

  $rows = array();

  // ELEMENT SECTION

  foreach (element_children($form['transitions_role']) as $key) {
    $element = &$form['transitions_role'][$key];
    $row = array('data' => array());
    $row['data']['from'] = drupal_render($element['from_name']);
    $row['data'][] = '--&gt;';
    $row['data']['to'] = drupal_render($element['to_name']);
    foreach ($roles as $rid => $role) {
      $row['data'][$role] = drupal_render($element[$role]);
    }
    $rows[] = $row;
  }

  $users = ef_notifications_determine_valid_users();

  foreach ($users as $rid2 => $user) {
    $header2[] = t("@user", array('@user' => $user));
  }

  $rows2 = array();

  foreach (element_children($form['transitions_users']) as $key) {
    $element = &$form['transitions_users'][$key];
    $row2 = array('data' => array());
    $row2['data']['from'] = drupal_render($element['from_name']);
    $row2['data'][] = '--&gt;';
    $row2['data']['to'] = drupal_render($element['to_name']);
    foreach ($users as $rid2 => $user) {
      $row2['data'][$user] = drupal_render($element[$user]);
    }
    $rows2[] = $row2;
  }

  //CONTENT TYPE CREATION ELEMENTS

  foreach ($roles as $rid => $role) {
    $role_names[$rid] = ucwords($role);
    $header3[] = t("@role", array('@role' => ucwords($role)));
  }

  $rows3 = array();

  foreach (element_children($form['ct_creation_role']) as $key) {
    $element = &$form['ct_creation_role'][$key];
    $type_obj = node_type_load($element['moderated_type']['#value']);
    $type = $type_obj->name;
    $row3 = array('data' => array());
    $row3['data']['from'] = $type;
    foreach ($roles as $rid => $role) {
      $row3['data'][$role] = drupal_render($element[$role]);
    }
    $rows3[] = $row3;
  }

  foreach ($users as $rid2 => $user) {
    $header4[] = t("@user", array('@user' => $user));
  }

  $rows4 = array();

  foreach (element_children($form['ct_creation_users']) as $key) {
    $element = &$form['ct_creation_users'][$key];
    $type_obj = node_type_load($element['moderated_type']['#value']);
    $type = $type_obj->name;
    $row4 = array('data' => array());
    $row4['data']['from'] = $type;
    foreach ($users as $rid2 => $user) {
      $row4['data'][$user] = drupal_render($element[$user]);
    }
    $rows4[] = $row4;
  }
  //END CONTENT TYPE ELEMENTS

  // OUTPUT SECTION


  $output = drupal_render($form['ct_users_section']);
  unset($form['ct_users_section']);

  $output .= theme('table', array(
                                 'header' => $header4,
                                 'rows' => $rows4,
                                 'attributes' => array('class' => array('width-auto'))));

  $output .= drupal_render($form['ct_roles_section']);
  unset($form['ct_roles_section']);

  $output .= theme('table', array(
                                 'header' => $header3,
                                 'rows' => $rows3,
                                 'attributes' => array('class' => array('width-auto'))));


  $output .= drupal_render($form['user_section']);
  unset($form['user_section']);

  $output .= theme('table', array(
                                 'header' => $header2,
                                 'rows' => $rows2,
                                 'attributes' => array('class' => array('width-auto'))));

  $output .= drupal_render($form['role_section']);
  unset($form['role_section']);

  $output .= theme('table', array(
                                 'header' => $header,
                                 'rows' => $rows,
                                 'attributes' => array('class' => array('width-auto'))));

  $output .= drupal_render_children($form);

  return $output;
}

/**
 * Form submit handler for email transitions.
 *
 * Adds or deletes email transitions depending on user input.
 */
function ef_notifications_transitions_form_submit($form, &$form_state) {
  $roles = ef_notifications_determine_valid_roles();
  $users = ef_notifications_determine_valid_users();

  foreach ($form_state['values']['ct_creation_role'] as $ctype) {
    foreach ($roles as $rid => $role) {
      if ($ctype[$role]) {
        ef_notifications_save_by_ct($ctype['moderated_type'], $rid, NULL);
      }
      else {
        ef_notifications_delete_by_ct($ctype['moderated_type'], $rid, NULL);
      }
    }
  }

  foreach ($form_state['values']['ct_creation_users'] as $ctype) {
    foreach ($users as $rid2 => $user) {
      if ($ctype[$user]) {
        ef_notifications_save_by_ct($ctype['moderated_type'], NULL, $rid2);
      }
      else {
        ef_notifications_delete_by_ct($ctype['moderated_type'], NULL, $rid);
      }
    }
  }

  foreach ($form_state['values']['transitions_role'] as $transition) {
    foreach ($roles as $rid => $role) {
      if ($transition[$role]) {
        ef_notifications_save_by_role($transition['transition'], $rid);
      }
      else {
        ef_notifications_delete_by_role($transition['transition'], $rid);
      }
    }
  }

  foreach ($form_state['values']['transitions_users'] as $transition) {
    foreach ($users as $rid2 => $user) {
      if ($transition[$user]) {
        ef_notifications_save_by_users($transition['transition'], $rid2);
      }
      else {
        ef_notifications_delete_by_users($transition['transition'], $rid2);
      }
    }
  }

  drupal_set_message(t('Email transitions have been updated'));
}



function ef_notifications_comment_notitication_settings($form, &$form_state) {

  $form['#tree'] = TRUE;

  $active_types = variable_get('comment_notifications_active_types');
  $mail_elements = variable_get('comment_notifications_mail_elements');

 //----------------------GENERAL SETTINGS------------------------------

  $form['comment_notifications']['active'] = array(
    '#type' => 'checkbox',
    '#title' => t('Toggle comment notifications On/Off'),
    '#default_value' => variable_get('comment_notifications_active', 0),
  );

  $form['comment_notifications']['account'] = array(
    '#type' => 'textfield',
    '#title' => t('Administration email account'),
    '#size' => 50,
    '#maxlength' => 128,
    '#default_value' => variable_get('comment_notifications_account', variable_get('site_mail')),
  );

  //----------------------NEW COMMENT------------------------------

  $form['new_comment'] = array(
    '#type' => 'fieldset',
    '#title' => t('On new comment'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['new_comment']['active']['author'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate notification for the author of the comment'),
    '#default_value' => $active_types['new_author'],
  );

  $form['new_comment']['active']['administrator'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate notification for the administrator'),
    '#default_value' => $active_types['new_administrator'],
  );

  $form['new_comment']['comment_author'] = array(
    '#type' => 'fieldset',
    '#title' => t('Notification settings for the author of the comment'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['new_comment']['comment_author']['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#description' => t('Email subject.'),
    '#size' => 60,
    '#maxlength' => 128,
    '#default_value' => $mail_elements['new_author']['subject'],
  );

  $form['new_comment']['comment_author']['body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#description' => t('Email body.'),
    '#default_value' => $mail_elements['new_author']['body'],
  );

  $form['new_comment']['administrator'] = array(
    '#type' => 'fieldset',
    '#title' => t('Notification settings for the administrator'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['new_comment']['administrator']['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#description' => t('Email subject'),
    '#size' => 60,
    '#maxlength' => 128,
    '#default_value' => $mail_elements['new_administrator']['subject'],
  );

  $form['new_comment']['administrator']['body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#description' => t('Email body'),
    '#default_value' => $mail_elements['new_administrator']['body'],
  );

  //----------------------COMMENT REPLY------------------------------

  $form['comment_reply'] = array(
    '#type' => 'fieldset',
    '#title' => t('On comment reply'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['comment_reply']['active']['author'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate notification for the author of the original comment'),
    '#default_value' => $active_types['reply_author'],
  );

  $form['comment_reply']['active']['reply_author'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate notification for the author of the reply.'),
    '#default_value' => $active_types['reply_replier'],
  );

  $form['comment_reply']['active']['administrator'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate notification for the administrator.'),
    '#default_value' => $active_types['reply_administrator'],
  );

  $form['comment_reply']['comment_author'] = array(
    '#type' => 'fieldset',
    '#title' => t('Notification settings for the author of the original comment'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['comment_reply']['comment_author']['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#description' => t('Email subject'),
    '#size' => 60,
    '#maxlength' => 128,
    '#default_value' => $mail_elements['reply_author']['subject'],
  );

  $form['comment_reply']['comment_author']['body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#description' => t('Email body'),
    '#default_value' => $mail_elements['reply_author']['body'],
  );

  $form['comment_reply']['reply_author'] = array(
    '#type' => 'fieldset',
    '#title' => t('Notification settings for the author of the reply'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['comment_reply']['reply_author']['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#description' => t('Email subject'),
    '#size' => 60,
    '#maxlength' => 128,
    '#default_value' => $mail_elements['reply_replier']['subject'],
  );

  $form['comment_reply']['reply_author']['body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#description' => t('Email body'),
    '#default_value' => $mail_elements['reply_replier']['body'],
  );

  $form['comment_reply']['administrator'] = array(
    '#type' => 'fieldset',
    '#title' => t('Notification settings for the administrator'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['comment_reply']['administrator']['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#description' => t('Email subject'),
    '#size' => 60,
    '#maxlength' => 128,
    '#default_value' => $mail_elements['reply_administrator']['subject'],
  );

  $form['comment_reply']['administrator']['body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#description' => t('Email body'),
    '#default_value' => $mail_elements['reply_administrator']['body'],
  );

  //----------------------COMMENT APPROVAL------------------------------

  $form['comment_approval'] = array(
    '#type' => 'fieldset',
    '#title' => t('On comment approval'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['comment_approval']['active']['author'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate notification for the author of the comment'),
    '#default_value' => $active_types['approval_author'],
  );

  $form['comment_approval']['active']['administrator'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate notification for the administrator'),
    '#default_value' => $active_types['approval_administrator'],
  );

  $form['comment_approval']['comment_author'] = array(
    '#type' => 'fieldset',
    '#title' => t('Notification settings for the author of the comment'),
    '#description' => t('Mail settings for the comment author'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['comment_approval']['comment_author']['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#description' => t('Email subject'),
    '#size' => 60,
    '#maxlength' => 128,
    '#default_value' => $mail_elements['approval_author']['subject'],
  );

  $form['comment_approval']['comment_author']['body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#description' => t('Email body'),
    '#default_value' => $mail_elements['approval_author']['body'],
  );

  $form['comment_approval']['administrator'] = array(
    '#type' => 'fieldset',
    '#title' => t('Notification settings for the administrator'),
    '#description' => t('Mail settings for the comment author'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['comment_approval']['administrator']['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#description' => t('Email subject'),
    '#size' => 60,
    '#maxlength' => 128,
    '#default_value' => $mail_elements['approval_administrator']['subject'],
  );

  $form['comment_approval']['administrator']['body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#description' => t('Email body'),
    '#default_value' => $mail_elements['approval_administrator']['body'],
  );

  $form['token_set'] = array(
    '#type' => 'fieldset',
    '#title' => t('Available Tokens'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['token_set']['tokens'] = array(
    '#theme' => 'token_tree',
    '#token_types' => array('comment',),
    '#global_types' => FALSE,
    '#click_insert' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Configuration'),
  );
  return $form;
}

function ef_notifications_comment_notitication_settings_validate($form, &$form_state) {

  if (!valid_email_address($form_state['values']['comment_notifications']['account'])) {
    form_set_error('comment_notifications][account', t('You must add a valid email account'));
  }

  foreach ($form_state['values'] as $key => $value) {
    if (in_array($key, array('new_comment', 'comment_reply', 'comment_approval'))) {
      $empty_keys = _ef_notifications_check_email_empty($key, $value);
      foreach ($empty_keys as $key) {
        $empty_items[$key] = 1;
      }
    }
  }

  if ($form_state['values']['new_comment']['active']['author'] && $empty_items['new_comment_comment_author']) {
    form_set_error('new_comment][active][author', t('You must add a body and subject for the author to be sent on new comment'));
  }

  if ($form_state['values']['new_comment']['active']['administrator'] && $empty_items['new_comment_administrator']) {
    form_set_error('new_comment][active][administrator', t('You must add a body and subject for the administrator to be sent on new comment'));
  }

  if ($form_state['values']['comment_reply']['active']['author'] && $empty_items['comment_reply_comment_author']) {
    form_set_error('comment_reply][active][author', t('You must add a body and subject for the author to be sent on comment reply'));
  }

  if ($form_state['values']['comment_reply']['active']['reply_author'] && $empty_items['comment_reply_reply_author']) {
    form_set_error('comment_reply][active][reply_author', t('You must add a body and subject for the author of the reply to be sent on comment reply'));
  }

  if ($form_state['values']['comment_reply']['active']['administrator'] && $empty_items['comment_reply_administrator']) {
    form_set_error('comment_reply][active][administrator', t('You must add a body and subject for the administrator to be sent on comment reply'));
  }

  if ($form_state['values']['comment_approval']['active']['author'] && $empty_items['comment_approval_comment_author']) {
    form_set_error('comment_approval][active][author', t('You must add a body and subject for the author to be sent on comment approval'));
  }

  if ($form_state['values']['comment_approval']['active']['administrator'] && $empty_items['comment_approval_administrator']) {
    form_set_error('comment_approval][active][administrator', t('You must add a body and subject for the administrator to be sent on comment approval'));
  }

}

function ef_notifications_comment_notitication_settings_submit($form, &$form_state) {

  variable_set('comment_notifications_active', $form_state['values']['comment_notifications']['active']);
  variable_set('comment_notifications_account', $form_state['values']['comment_notifications']['account']);

  $active_types['new_author'] = $form_state['values']['new_comment']['active']['author'];
  $active_types['new_administrator'] = $form_state['values']['new_comment']['active']['administrator'];

  $mail_elements['new_author']['subject'] = $form_state['values']['new_comment']['comment_author']['subject'];
  $mail_elements['new_author']['body'] = $form_state['values']['new_comment']['comment_author']['body'];
  $mail_elements['new_administrator']['subject'] = $form_state['values']['new_comment']['administrator']['subject'];
  $mail_elements['new_administrator']['body'] = $form_state['values']['new_comment']['administrator']['body'];

  $active_types['reply_author'] = $form_state['values']['comment_reply']['active']['author'];
  $active_types['reply_replier'] = $form_state['values']['comment_reply']['active']['reply_author'];
  $active_types['reply_administrator'] = $form_state['values']['comment_reply']['active']['administrator'];

  $mail_elements['reply_author']['subject'] = $form_state['values']['comment_reply']['comment_author']['subject'];
  $mail_elements['reply_author']['body'] = $form_state['values']['comment_reply']['comment_author']['body'];
  $mail_elements['reply_replier']['subject'] = $form_state['values']['comment_reply']['reply_author']['subject'];
  $mail_elements['reply_replier']['body'] = $form_state['values']['comment_reply']['reply_author']['body'];
  $mail_elements['reply_administrator']['subject'] = $form_state['values']['comment_reply']['administrator']['subject'];
  $mail_elements['reply_administrator']['body'] = $form_state['values']['comment_reply']['administrator']['body'];

  $active_types['approval_author'] = $form_state['values']['comment_approval']['active']['author'];
  $active_types['approval_administrator'] = $form_state['values']['comment_approval']['active']['administrator'];

  $mail_elements['approval_author']['subject'] = $form_state['values']['comment_approval']['comment_author']['subject'];
  $mail_elements['approval_author']['body'] = $form_state['values']['comment_approval']['comment_author']['body'];
  $mail_elements['approval_administrator']['subject'] = $form_state['values']['comment_approval']['administrator']['subject'];
  $mail_elements['approval_administrator']['body'] = $form_state['values']['comment_approval']['administrator']['body'];

  variable_set('comment_notifications_mail_elements', $mail_elements);
  variable_set('comment_notifications_active_types', $active_types);

  drupal_set_message('Configuration saved.');
}

function _ef_notifications_check_email_empty($key, $item) {
  foreach ($item as $subkey => $value) {
    if (in_array($subkey, array('comment_author', 'reply_author', 'administrator'))) {
      if (empty($value['subject']) || empty($value['body'])) {
        $empty_items[] = $key . '_'  . $subkey;
      }
    }
  }
  return $empty_items;
}

