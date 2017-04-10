<?php

/**
 * Implements hook_module_implements_alter().
 *
 * Make sure ef_notifications_form_alter fires after workbench_moderation
 */
function ef_notifications_module_implements_alter(&$implementations, $hook) {
  if (strpos($hook, 'form') !== FALSE) {
    if (isset($implementations['workbench_moderation'], $implementations['ef_notifications'])) {
      $ef_notifications = $implementations['ef_notifications'];
      unset($implementations['ef_notifications']);

      $workbench_moderation = $implementations['workbench_moderation'];
      unset($implementations['workbench_moderation']);

      $implementations['workbench_moderation'] = $workbench_moderation;
      $implementations['ef_notifications'] = $ef_notifications;
    }
  }
}

/**
 * Create the email selection and user assign to form elements
 */
function ef_notifications_create_form_element(&$form, $email_transition) {
  $users = ef_notifications_get_users($email_transition->rid);
  if ($users) {
    global $user;
    $emails = array('0' => '- None -');
    foreach ($users as $uid => $account) {
      if ($user->mail != $account->mail) {
        $emails[$account->mail] = $account->name;
      }
    }
    $role = user_role_load($email_transition->rid);
    ($form['options']['#access'] ? $wrapper_id = 'options' : $wrapper_id = 'revision_information');
    $form[$wrapper_id]['workflow_email'][$role->rid] = array(
      '#type' => 'select',
      '#title' => t("@role_name", array('@role_name' => ucwords($role->name))),
      '#options' => $emails,
      '#description' => t('Select one or more users to notify'),
      '#multiple' => TRUE,
      '#hidden' => $email_transition,
    );
  }
}


/**
 * Determines the email attributes to retrieve.
 */
function ef_notifications_get($transition = NULL, $rid = NULL) {
  $emails = array();
  $query = db_select('ef_notifications_emails', 'wve')
    ->fields('wve', array('rid', 'from_name', 'to_name', 'subject', 'message'));
  if ($transition) {
    $query->condition('wve.from_name', $transition->from_name);
    $query->condition('wve.to_name', $transition->to_name);
  }
  if ($rid) {
    $query->condition('wve.rid', $rid);
  }
  $result = $query->execute();
  foreach ($result as $row) {
    $emails[$row->from_name . '_to_' . $row->to_name][$row->rid] = $row;
  }
  return $emails;
}

/**
 * Implements hook_node_form_alter().
 *
 * Determines the current state and next state. Depending on that criteria
 * builds a form element(s) to allow the user to select users to send
 * an email to.
 */
function ef_notifications_form_node_form_alter(&$form, $form_state) {
  if (workbench_moderation_node_type_moderated($form['type']['#value'])) {
    $available = FALSE;
    // Workbench Moderation uses "options" fieldset in favor of "revision information"
    // if "administer roles" perm is given to content moderator.
    if (isset($form['revision_information']['workbench_moderation_state_new'])) {
      $wrapper_id = 'revision_information';
      $available = TRUE;
    }
    else if (isset($form['options']['workbench_moderation_state_new'])) {
      $wrapper_id = 'options';
      $available = TRUE;
    }

    if (!$available) {
      return;
    }

    $form[$wrapper_id]['workbench_moderation_state_new']['#ajax'] = array(
      'callback' => 'ef_notifications_form_node_callback',
      'wrapper' => 'wv-workflow-form-node',
      'effect' => 'fade',
      'event' => 'change',
    );

    $form[$wrapper_id]['workflow_email'] = array(
      '#prefix' => '<div id="wv-workflow-form-node">',
      '#suffix' => '</div>',
      '#tree' => TRUE,
    );

    // Determine current state.
    if (isset($form['#node']->workbench_moderation['current']->state)) {
      $current_from_state = $form['#node']->workbench_moderation['current']->state;
    }
    else {
      $current_from_state = variable_get('workbench_moderation_default_state_' . $form['type']['#value'], workbench_moderation_state_none());
    }

    if ($current_from_state == workbench_moderation_state_published()) {
      $current_from_state = workbench_moderation_state_none();
    }

    // Initialize to the current state.
    $form_moderation_state = $current_from_state;
    if (empty($form_state['values'])) {
      $form_moderation_state = $current_from_state;
    }
    if (!empty($form_state['values']) &&
        isset($form_state['values']['workbench_moderation_state_new'])) {
      $form_moderation_state = $form_state['values']['workbench_moderation_state_new'];
    }
    if (!empty($form_state['values']) &&
        isset($form_state['values'][$wrapper_id]['workbench_moderation_state_new'])) {
      $form_moderation_state = $form_state['values'][$wrapper_id]['workbench_moderation_state_new'];
    }

    $ef_notifications = ef_notifications_get();
    foreach ($ef_notifications as $transition => $notification_roles) {
      foreach ($notification_roles as $rid => $notification_transition) {
        if ($notification_transition->from_name == $current_from_state
            && $notification_transition->to_name == $form_moderation_state) {
          ef_notifications_create_form_element($form, $notification_transition);
        }
      }
    }

    $form['actions']['submit']['#submit'][] = 'ef_notifications_notification_submit';
  }
}


/**
 *  Ajax callback function, targets the workflow_notification container.
 */
function ef_notifications_form_node_callback($form, $form_state) {
  if ($form['options']['#access']) {
    return $form['options']['workflow_notification'];
  }
  return $form['revision_information']['workflow_notification'];
}

/**
 * Submit handler for the workflow_email form element.
 *
 * Sends emails to the specific users selected in the form element.
 */
function ef_notifications_notification_submit($form, &$form_state) {
  if (isset($form_state['values']['ef_notifications'])) {
    ($form['options']['#access'] ? $wrapper_id = 'options' : $wrapper_id = 'revision_information');
    foreach ($form_state['values']['ef_notifications'] as $rid => $role_emails) {
      foreach ($role_emails as $email) {
        $email_transition = $form[$wrapper_id]['workflow_email'][$rid]['#hidden'];
        ef_notifications_mail_send($email, $email_transition, $form_state['node']); //
      }
    }
  }
}

/**
 * Determines the emails attributes.
 *
 * Sets the emails subject / message and sends the email.
 */
function ef_notifications_mail_send($email, $email_transition, $node) {
  $module = 'ef_notifications';
  $key = 'workflow_notification';

  $to = $email;
  $from = variable_get('site_mail', 'admin@example.com');

  if (empty($email_transition->subject) && empty($email_transition->message)) {
    drupal_set_message(t('No email template is set, so no email was sent.
                       Contact your system admin to resolve this issue.'));
    return;
  }

  global $user;
  $params['subject'] = $email_transition->subject;
  $params['message'] = $email_transition->message;
  $params['node'] = $node;
  $params['user'] = $user;
  $language = language_default();
  $send = TRUE;
  $result = drupal_mail($module, $key, $to, $language, $params, $from, $send);
  if ($result['result'] == TRUE) {
    drupal_set_message(t('Your message has been sent.'));
  }
  else {
    drupal_set_message(t('There was a problem sending your
                         message and it was not sent.'), 'error');
  }
}

/**
 * Implements hook_mail().
 */
function ef_notifications_mail($key, &$message, $params) {
  switch ($key) {
    case 'workflow_notification':
      $message['subject'] = t(token_replace($params['subject'], $params));
      $message['body'][] = t(token_replace($params['message'], $params));
      break;
  }
}



/**
 * Determines the valid roles for a given transition.
 */
function ef_notifications_determine_valid_roles_per_transition($from_state, $to_state, $node_type = NULL) {
  $roles = user_roles();
  $valid_roles = array();
  if ($node_type == NULL) {
    $transition = "moderate content from " . $from_state . " to " . $to_state;
  }

  foreach ($roles as $rid => $role) {
    if ($role == "administrator") {
      continue;
    }
    // Get a full list of this role's permissions.
    $actual_permissions = array();
    $actual_permissions = user_role_permissions(
        array_filter(
          array(
            $rid => TRUE,
            DRUPAL_AUTHENTICATED_RID => ($rid != DRUPAL_ANONYMOUS_RID
          ),
        )
      )
    );

    foreach ($actual_permissions as $permissions) {
      if (isset($permissions[$transition])) {
        $valid_roles[$rid] = $role;
      }
    }
  }
  return $valid_roles;
}

/**
 * Create the email selection form element.
 *
 * Creates the appropriate multi select list for a given role and stores
 * some email transition information into the form element.
 */
function ef_notifications_create_form_element(&$form, $email_transition) {
  $users = ef_notifications_get_users($email_transition->rid);
  if ($users) {
    global $user;
    $emails = array('0' => '- None -');
    foreach ($users as $uid => $account) {
      if ($user->mail != $account->mail) {
        $emails[$account->mail] = $account->name;
      }
    }
    $role = user_role_load($email_transition->rid);
    ($form['options']['#access'] ? $wrapper_id = 'options' : $wrapper_id = 'revision_information');
    $form[$wrapper_id]['workflow_email'][$role->rid] = array(
      '#type' => 'select',
      '#title' => t("@role_name", array('@role_name' => ucwords($role->name))),
      '#options' => $emails,
      '#description' => t('Select one or more users to notify'),
      '#multiple' => TRUE,
      '#hidden' => $email_transition,
    );
  }
}

//---------------------- DATABASE SECTION ---------------------------------------

/**
 * Determines the email attributes to retrieve.
 */
function ef_notifications_get($transition = NULL, $rid = NULL) {
  $emails = array();
  $query = db_select('ef_notifications_emails', 'nfe')
    ->fields('nfe', array('rid', 'from_name', 'to_name', 'subject', 'message'));
  if ($transition) {
    $query->condition('nfe.from_name', $transition->from_name);
    $query->condition('nfe.to_name', $transition->to_name);
  }
  if ($rid) {
    $query->condition('nfe.rid', $rid);
  }
  $result = $query->execute();
  foreach ($result as $row) {
    $emails[$row->from_name . '_to_' . $row->to_name][$row->rid] = $row;
  }
  return $emails;
}

/**
 * Returns user array if they have a certain role.
 */
function ef_notifications_get_users($rid) {
  $uids = array();
  $query = db_select('users_roles', 'ur')
    ->fields('ur', array('uid'))
    ->condition('ur.rid', $rid);
  $query->distinct();
  $result = $query->execute();
  foreach ($result as $row) {
    $uids[] = $row->uid;
  }
  $users = array();
  $users = user_load_multiple($uids);
  return $users;
}



