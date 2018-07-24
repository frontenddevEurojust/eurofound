<?php
/**
 * @file
 * ef_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ef_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Media Manager' => 'Media Manager',
      'Metadata Manager' => 'Metadata Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access lexicon'.
  $permissions['access lexicon'] = array(
    'name' => 'access lexicon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lexicon',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access security review list'.
  $permissions['access security review list'] = array(
    'name' => 'access security review list',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'security_review',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access webform share functionality'.
  $permissions['access webform share functionality'] = array(
    'name' => 'access webform share functionality',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform_share',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer better countries'.
  $permissions['administer better countries'] = array(
    'name' => 'administer better countries',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_countries',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer countries'.
  $permissions['administer countries'] = array(
    'name' => 'administer countries',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'better_countries',
  );

  // Exported permission: 'administer custom tokens'.
  $permissions['administer custom tokens'] = array(
    'name' => 'administer custom tokens',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'token_custom',
  );

  // Exported permission: 'administer duplicate role'.
  $permissions['administer duplicate role'] = array(
    'name' => 'administer duplicate role',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'duplicate_role',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer lexicon'.
  $permissions['administer lexicon'] = array(
    'name' => 'administer lexicon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lexicon',
  );

  // Exported permission: 'administer lightbox2'.
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'administer mail templates'.
  $permissions['administer mail templates'] = array(
    'name' => 'administer mail templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mail_edit',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer media wysiwyg view mode'.
  $permissions['administer media wysiwyg view mode'] = array(
    'name' => 'administer media wysiwyg view mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_wysiwyg_view_mode',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer messaging'.
  $permissions['administer messaging'] = array(
    'name' => 'administer messaging',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'messaging',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer own simple_registration_type registration'.
  $permissions['administer own simple_registration_type registration'] = array(
    'name' => 'administer own simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'administer panel-nodes'.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer popup elements'.
  $permissions['administer popup elements'] = array(
    'name' => 'administer popup elements',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'popup',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer scs'.
  $permissions['administer scs'] = array(
    'name' => 'administer scs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scs',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcut per role'.
  $permissions['administer shortcut per role'] = array(
    'name' => 'administer shortcut per role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut_per_role',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simple_registration_type registration'.
  $permissions['administer simple_registration_type registration'] = array(
    'name' => 'administer simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer string overrides'.
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stringoverrides',
  );

  // Exported permission: 'administer tabtamer'.
  $permissions['administer tabtamer'] = array(
    'name' => 'administer tabtamer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tabtamer',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user field roles'.
  $permissions['administer user field roles'] = array(
    'name' => 'administer user field roles',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
      'administrator' => 'administrator',
    ),
    'module' => 'user_role_field',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench emails'.
  $permissions['administer workbench emails'] = array(
    'name' => 'administer workbench emails',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_email',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'assign Author role'.
  $permissions['assign Author role'] = array(
    'name' => 'assign Author role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'OSU' => 'OSU',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Editor role'.
  $permissions['assign Editor role'] = array(
    'name' => 'assign Editor role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Eurofound Administrator role'.
  $permissions['assign Eurofound Administrator role'] = array(
    'name' => 'assign Eurofound Administrator role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Eurofound Content Manager role'.
  $permissions['assign Eurofound Content Manager role'] = array(
    'name' => 'assign Eurofound Content Manager role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Event Administrator role'.
  $permissions['assign Event Administrator role'] = array(
    'name' => 'assign Event Administrator role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign External Editor role'.
  $permissions['assign External Editor role'] = array(
    'name' => 'assign External Editor role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Governing Board Member role'.
  $permissions['assign Governing Board Member role'] = array(
    'name' => 'assign Governing Board Member role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Governing Board' => 'Governing Board',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Governing Board role'.
  $permissions['assign Governing Board role'] = array(
    'name' => 'assign Governing Board role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Media Manager role'.
  $permissions['assign Media Manager role'] = array(
    'name' => 'assign Media Manager role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Metadata Manager role'.
  $permissions['assign Metadata Manager role'] = array(
    'name' => 'assign Metadata Manager role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign OSU role'.
  $permissions['assign OSU role'] = array(
    'name' => 'assign OSU role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Quality Manager role'.
  $permissions['assign Quality Manager role'] = array(
    'name' => 'assign Quality Manager role',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear ef_vocabulary_company_sizes_import feeds'.
  $permissions['clear ef_vocabulary_company_sizes_import feeds'] = array(
    'name' => 'clear ef_vocabulary_company_sizes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_deliverable_kinds_import feeds'.
  $permissions['clear ef_vocabulary_deliverable_kinds_import feeds'] = array(
    'name' => 'clear ef_vocabulary_deliverable_kinds_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_ef_report_types_import feeds'.
  $permissions['clear ef_vocabulary_ef_report_types_import feeds'] = array(
    'name' => 'clear ef_vocabulary_ef_report_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_event_types_import feeds'.
  $permissions['clear ef_vocabulary_event_types_import feeds'] = array(
    'name' => 'clear ef_vocabulary_event_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_industrial_relations_terms_import feeds'.
  $permissions['clear ef_vocabulary_industrial_relations_terms_import feeds'] = array(
    'name' => 'clear ef_vocabulary_industrial_relations_terms_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_instrument_categories_import feeds'.
  $permissions['clear ef_vocabulary_instrument_categories_import feeds'] = array(
    'name' => 'clear ef_vocabulary_instrument_categories_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_instrument_fundings_import feeds'.
  $permissions['clear ef_vocabulary_instrument_fundings_import feeds'] = array(
    'name' => 'clear ef_vocabulary_instrument_fundings_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_instrument_involvement_types_import feeds'.
  $permissions['clear ef_vocabulary_instrument_involvement_types_import feeds'] = array(
    'name' => 'clear ef_vocabulary_instrument_involvement_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_instrument_phases_import feeds'.
  $permissions['clear ef_vocabulary_instrument_phases_import feeds'] = array(
    'name' => 'clear ef_vocabulary_instrument_phases_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_nace_codes_import feeds'.
  $permissions['clear ef_vocabulary_nace_codes_import feeds'] = array(
    'name' => 'clear ef_vocabulary_nace_codes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_nuts_import feeds'.
  $permissions['clear ef_vocabulary_nuts_import feeds'] = array(
    'name' => 'clear ef_vocabulary_nuts_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_observatories_import feeds'.
  $permissions['clear ef_vocabulary_observatories_import feeds'] = array(
    'name' => 'clear ef_vocabulary_observatories_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_procurement_statuses_import feeds'.
  $permissions['clear ef_vocabulary_procurement_statuses_import feeds'] = array(
    'name' => 'clear ef_vocabulary_procurement_statuses_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_procurement_types_import feeds'.
  $permissions['clear ef_vocabulary_procurement_types_import feeds'] = array(
    'name' => 'clear ef_vocabulary_procurement_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_publication_sectors_import feeds'.
  $permissions['clear ef_vocabulary_publication_sectors_import feeds'] = array(
    'name' => 'clear ef_vocabulary_publication_sectors_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_publication_types_import feeds'.
  $permissions['clear ef_vocabulary_publication_types_import feeds'] = array(
    'name' => 'clear ef_vocabulary_publication_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_regulation_fundings_import feeds'.
  $permissions['clear ef_vocabulary_regulation_fundings_import feeds'] = array(
    'name' => 'clear ef_vocabulary_regulation_fundings_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_regulation_involvements_import feeds'.
  $permissions['clear ef_vocabulary_regulation_involvements_import feeds'] = array(
    'name' => 'clear ef_vocabulary_regulation_involvements_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_regulation_phases_import feeds'.
  $permissions['clear ef_vocabulary_regulation_phases_import feeds'] = array(
    'name' => 'clear ef_vocabulary_regulation_phases_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_regulation_thresholds_import feeds'.
  $permissions['clear ef_vocabulary_regulation_thresholds_import feeds'] = array(
    'name' => 'clear ef_vocabulary_regulation_thresholds_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_regulation_types_import feeds'.
  $permissions['clear ef_vocabulary_regulation_types_import feeds'] = array(
    'name' => 'clear ef_vocabulary_regulation_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_restructuring_keywords_import feeds'.
  $permissions['clear ef_vocabulary_restructuring_keywords_import feeds'] = array(
    'name' => 'clear ef_vocabulary_restructuring_keywords_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_restructuring_types_import feeds'.
  $permissions['clear ef_vocabulary_restructuring_types_import feeds'] = array(
    'name' => 'clear ef_vocabulary_restructuring_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_sectors_import feeds'.
  $permissions['clear ef_vocabulary_sectors_import feeds'] = array(
    'name' => 'clear ef_vocabulary_sectors_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_spotlight_themes_import feeds'.
  $permissions['clear ef_vocabulary_spotlight_themes_import feeds'] = array(
    'name' => 'clear ef_vocabulary_spotlight_themes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_survey_families_import feeds'.
  $permissions['clear ef_vocabulary_survey_families_import feeds'] = array(
    'name' => 'clear ef_vocabulary_survey_families_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_themes_import feeds'.
  $permissions['clear ef_vocabulary_themes_import feeds'] = array(
    'name' => 'clear ef_vocabulary_themes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_topics_import feeds'.
  $permissions['clear ef_vocabulary_topics_import feeds'] = array(
    'name' => 'clear ef_vocabulary_topics_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ef_vocabulary_vendor_service_types_import feeds'.
  $permissions['clear ef_vocabulary_vendor_service_types_import feeds'] = array(
    'name' => 'clear ef_vocabulary_vendor_service_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear node feeds'.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear user feeds'.
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear vocabulary_ef_contracts_import feeds'.
  $permissions['clear vocabulary_ef_contracts_import feeds'] = array(
    'name' => 'clear vocabulary_ef_contracts_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: 'create board_member_page content'.
  $permissions['create board_member_page content'] = array(
    'name' => 'create board_member_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dvs_survey content'.
  $permissions['create dvs_survey content'] = array(
    'name' => 'create dvs_survey content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_call_for_tender content'.
  $permissions['create ef_call_for_tender content'] = array(
    'name' => 'create ef_call_for_tender content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_case_study content'.
  $permissions['create ef_case_study content'] = array(
    'name' => 'create ef_case_study content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_comparative_analytical_report content'.
  $permissions['create ef_comparative_analytical_report content'] = array(
    'name' => 'create ef_comparative_analytical_report content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_contact_form content'.
  $permissions['create ef_contact_form content'] = array(
    'name' => 'create ef_contact_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ef_emire_dictionary content'.
  $permissions['create ef_emire_dictionary content'] = array(
    'name' => 'create ef_emire_dictionary content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_event content'.
  $permissions['create ef_event content'] = array(
    'name' => 'create ef_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_factsheet content'.
  $permissions['create ef_factsheet content'] = array(
    'name' => 'create ef_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_ic_quarterly_report content'.
  $permissions['create ef_ic_quarterly_report content'] = array(
    'name' => 'create ef_ic_quarterly_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_input_to_erm content'.
  $permissions['create ef_input_to_erm content'] = array(
    'name' => 'create ef_input_to_erm content',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_ir_dictionary content'.
  $permissions['create ef_ir_dictionary content'] = array(
    'name' => 'create ef_ir_dictionary content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_national_contribution content'.
  $permissions['create ef_national_contribution content'] = array(
    'name' => 'create ef_national_contribution content',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_network_quarterly_report content'.
  $permissions['create ef_network_quarterly_report content'] = array(
    'name' => 'create ef_network_quarterly_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_news content'.
  $permissions['create ef_news content'] = array(
    'name' => 'create ef_news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_photo_gallery content'.
  $permissions['create ef_photo_gallery content'] = array(
    'name' => 'create ef_photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_publication content'.
  $permissions['create ef_publication content'] = array(
    'name' => 'create ef_publication content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_quarterly_report content'.
  $permissions['create ef_quarterly_report content'] = array(
    'name' => 'create ef_quarterly_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ef_regulation content'.
  $permissions['create ef_regulation content'] = array(
    'name' => 'create ef_regulation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ef_report content'.
  $permissions['create ef_report content'] = array(
    'name' => 'create ef_report content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_restructuring_in_smes content'.
  $permissions['create ef_restructuring_in_smes content'] = array(
    'name' => 'create ef_restructuring_in_smes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_spotlight_entry content'.
  $permissions['create ef_spotlight_entry content'] = array(
    'name' => 'create ef_spotlight_entry content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_support_instrument content'.
  $permissions['create ef_support_instrument content'] = array(
    'name' => 'create ef_support_instrument content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ef_survey content'.
  $permissions['create ef_survey content'] = array(
    'name' => 'create ef_survey content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_vacancy content'.
  $permissions['create ef_vacancy content'] = array(
    'name' => 'create ef_vacancy content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ef_video content'.
  $permissions['create ef_video content'] = array(
    'name' => 'create ef_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_ef_approved_for_payment'.
  $permissions['create field_ef_approved_for_payment'] = array(
    'name' => 'create field_ef_approved_for_payment',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_assign_to'.
  $permissions['create field_ef_assign_to'] = array(
    'name' => 'create field_ef_assign_to',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_balance_in_reporting'.
  $permissions['create field_ef_balance_in_reporting'] = array(
    'name' => 'create field_ef_balance_in_reporting',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_command_of_english'.
  $permissions['create field_ef_command_of_english'] = array(
    'name' => 'create field_ef_command_of_english',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_contract'.
  $permissions['create field_ef_contract'] = array(
    'name' => 'create field_ef_contract',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_contracts'.
  $permissions['create field_ef_contracts'] = array(
    'name' => 'create field_ef_contracts',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_deliverable_kind'.
  $permissions['create field_ef_deliverable_kind'] = array(
    'name' => 'create field_ef_deliverable_kind',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_flag'.
  $permissions['create field_ef_flag'] = array(
    'name' => 'create field_ef_flag',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_migration_datetime'.
  $permissions['create field_ef_migration_datetime'] = array(
    'name' => 'create field_ef_migration_datetime',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_migration_details'.
  $permissions['create field_ef_migration_details'] = array(
    'name' => 'create field_ef_migration_details',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_migration_old_url'.
  $permissions['create field_ef_migration_old_url'] = array(
    'name' => 'create field_ef_migration_old_url',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_quartely_report_year'.
  $permissions['create field_ef_quartely_report_year'] = array(
    'name' => 'create field_ef_quartely_report_year',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_quarter'.
  $permissions['create field_ef_quarter'] = array(
    'name' => 'create field_ef_quarter',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_quarter_report_country'.
  $permissions['create field_ef_quarter_report_country'] = array(
    'name' => 'create field_ef_quarter_report_country',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_regulation_type'.
  $permissions['create field_ef_regulation_type'] = array(
    'name' => 'create field_ef_regulation_type',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_report_delivery_date'.
  $permissions['create field_ef_report_delivery_date'] = array(
    'name' => 'create field_ef_report_delivery_date',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ef_unit'.
  $permissions['create field_ef_unit'] = array(
    'name' => 'create field_ef_unit',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'External Editor' => 'External Editor',
      'Media Manager' => 'Media Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'Media Manager' => 'Media Manager',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel-nodes'.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'create simple_registration_type registration'.
  $permissions['create simple_registration_type registration'] = array(
    'name' => 'create simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create simple_registration_type registration other anonymous'.
  $permissions['create simple_registration_type registration other anonymous'] = array(
    'name' => 'create simple_registration_type registration other anonymous',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create simple_registration_type registration other users'.
  $permissions['create simple_registration_type registration other users'] = array(
    'name' => 'create simple_registration_type registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any board_member_page content'.
  $permissions['delete any board_member_page content'] = array(
    'name' => 'delete any board_member_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any dvs_survey content'.
  $permissions['delete any dvs_survey content'] = array(
    'name' => 'delete any dvs_survey content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_call_for_tender content'.
  $permissions['delete any ef_call_for_tender content'] = array(
    'name' => 'delete any ef_call_for_tender content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_case_study content'.
  $permissions['delete any ef_case_study content'] = array(
    'name' => 'delete any ef_case_study content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_comparative_analytical_report content'.
  $permissions['delete any ef_comparative_analytical_report content'] = array(
    'name' => 'delete any ef_comparative_analytical_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_contact_form content'.
  $permissions['delete any ef_contact_form content'] = array(
    'name' => 'delete any ef_contact_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_emire_dictionary content'.
  $permissions['delete any ef_emire_dictionary content'] = array(
    'name' => 'delete any ef_emire_dictionary content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_event content'.
  $permissions['delete any ef_event content'] = array(
    'name' => 'delete any ef_event content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_factsheet content'.
  $permissions['delete any ef_factsheet content'] = array(
    'name' => 'delete any ef_factsheet content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_ic_quarterly_report content'.
  $permissions['delete any ef_ic_quarterly_report content'] = array(
    'name' => 'delete any ef_ic_quarterly_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_input_to_erm content'.
  $permissions['delete any ef_input_to_erm content'] = array(
    'name' => 'delete any ef_input_to_erm content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_ir_dictionary content'.
  $permissions['delete any ef_ir_dictionary content'] = array(
    'name' => 'delete any ef_ir_dictionary content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_national_contribution content'.
  $permissions['delete any ef_national_contribution content'] = array(
    'name' => 'delete any ef_national_contribution content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_network_quarterly_report content'.
  $permissions['delete any ef_network_quarterly_report content'] = array(
    'name' => 'delete any ef_network_quarterly_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_news content'.
  $permissions['delete any ef_news content'] = array(
    'name' => 'delete any ef_news content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_photo_gallery content'.
  $permissions['delete any ef_photo_gallery content'] = array(
    'name' => 'delete any ef_photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_publication content'.
  $permissions['delete any ef_publication content'] = array(
    'name' => 'delete any ef_publication content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_quarterly_report content'.
  $permissions['delete any ef_quarterly_report content'] = array(
    'name' => 'delete any ef_quarterly_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_regulation content'.
  $permissions['delete any ef_regulation content'] = array(
    'name' => 'delete any ef_regulation content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_report content'.
  $permissions['delete any ef_report content'] = array(
    'name' => 'delete any ef_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_restructuring_in_smes content'.
  $permissions['delete any ef_restructuring_in_smes content'] = array(
    'name' => 'delete any ef_restructuring_in_smes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_spotlight_entry content'.
  $permissions['delete any ef_spotlight_entry content'] = array(
    'name' => 'delete any ef_spotlight_entry content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_support_instrument content'.
  $permissions['delete any ef_support_instrument content'] = array(
    'name' => 'delete any ef_support_instrument content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_survey content'.
  $permissions['delete any ef_survey content'] = array(
    'name' => 'delete any ef_survey content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_vacancy content'.
  $permissions['delete any ef_vacancy content'] = array(
    'name' => 'delete any ef_vacancy content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ef_video content'.
  $permissions['delete any ef_video content'] = array(
    'name' => 'delete any ef_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel-nodes'.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'delete any simple_registration_type registration'.
  $permissions['delete any simple_registration_type registration'] = array(
    'name' => 'delete any simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own board_member_page content'.
  $permissions['delete own board_member_page content'] = array(
    'name' => 'delete own board_member_page content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own dvs_survey content'.
  $permissions['delete own dvs_survey content'] = array(
    'name' => 'delete own dvs_survey content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_call_for_tender content'.
  $permissions['delete own ef_call_for_tender content'] = array(
    'name' => 'delete own ef_call_for_tender content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_case_study content'.
  $permissions['delete own ef_case_study content'] = array(
    'name' => 'delete own ef_case_study content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_comparative_analytical_report content'.
  $permissions['delete own ef_comparative_analytical_report content'] = array(
    'name' => 'delete own ef_comparative_analytical_report content',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_contact_form content'.
  $permissions['delete own ef_contact_form content'] = array(
    'name' => 'delete own ef_contact_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_emire_dictionary content'.
  $permissions['delete own ef_emire_dictionary content'] = array(
    'name' => 'delete own ef_emire_dictionary content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_event content'.
  $permissions['delete own ef_event content'] = array(
    'name' => 'delete own ef_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_factsheet content'.
  $permissions['delete own ef_factsheet content'] = array(
    'name' => 'delete own ef_factsheet content',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_ic_quarterly_report content'.
  $permissions['delete own ef_ic_quarterly_report content'] = array(
    'name' => 'delete own ef_ic_quarterly_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_input_to_erm content'.
  $permissions['delete own ef_input_to_erm content'] = array(
    'name' => 'delete own ef_input_to_erm content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_ir_dictionary content'.
  $permissions['delete own ef_ir_dictionary content'] = array(
    'name' => 'delete own ef_ir_dictionary content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_national_contribution content'.
  $permissions['delete own ef_national_contribution content'] = array(
    'name' => 'delete own ef_national_contribution content',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_network_quarterly_report content'.
  $permissions['delete own ef_network_quarterly_report content'] = array(
    'name' => 'delete own ef_network_quarterly_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_news content'.
  $permissions['delete own ef_news content'] = array(
    'name' => 'delete own ef_news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_photo_gallery content'.
  $permissions['delete own ef_photo_gallery content'] = array(
    'name' => 'delete own ef_photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_publication content'.
  $permissions['delete own ef_publication content'] = array(
    'name' => 'delete own ef_publication content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_quarterly_report content'.
  $permissions['delete own ef_quarterly_report content'] = array(
    'name' => 'delete own ef_quarterly_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_regulation content'.
  $permissions['delete own ef_regulation content'] = array(
    'name' => 'delete own ef_regulation content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_report content'.
  $permissions['delete own ef_report content'] = array(
    'name' => 'delete own ef_report content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_restructuring_in_smes content'.
  $permissions['delete own ef_restructuring_in_smes content'] = array(
    'name' => 'delete own ef_restructuring_in_smes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_spotlight_entry content'.
  $permissions['delete own ef_spotlight_entry content'] = array(
    'name' => 'delete own ef_spotlight_entry content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_support_instrument content'.
  $permissions['delete own ef_support_instrument content'] = array(
    'name' => 'delete own ef_support_instrument content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_survey content'.
  $permissions['delete own ef_survey content'] = array(
    'name' => 'delete own ef_survey content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_vacancy content'.
  $permissions['delete own ef_vacancy content'] = array(
    'name' => 'delete own ef_vacancy content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ef_video content'.
  $permissions['delete own ef_video content'] = array(
    'name' => 'delete own ef_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel-nodes'.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'delete own simple_registration_type registration'.
  $permissions['delete own simple_registration_type registration'] = array(
    'name' => 'delete own simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Editor' => 'Editor',
      'Governing Board' => 'Governing Board',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ef_case_study_categories'.
  $permissions['delete terms in ef_case_study_categories'] = array(
    'name' => 'delete terms in ef_case_study_categories',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_case_study_initiative_types'.
  $permissions['delete terms in ef_case_study_initiative_types'] = array(
    'name' => 'delete terms in ef_case_study_initiative_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_case_study_legal_forms'.
  $permissions['delete terms in ef_case_study_legal_forms'] = array(
    'name' => 'delete terms in ef_case_study_legal_forms',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_case_study_organisation_sizes'.
  $permissions['delete terms in ef_case_study_organisation_sizes'] = array(
    'name' => 'delete terms in ef_case_study_organisation_sizes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_case_study_scopes'.
  $permissions['delete terms in ef_case_study_scopes'] = array(
    'name' => 'delete terms in ef_case_study_scopes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_case_study_sectors'.
  $permissions['delete terms in ef_case_study_sectors'] = array(
    'name' => 'delete terms in ef_case_study_sectors',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_case_study_social_dialogue_types'.
  $permissions['delete terms in ef_case_study_social_dialogue_types'] = array(
    'name' => 'delete terms in ef_case_study_social_dialogue_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_case_study_social_dialogues'.
  $permissions['delete terms in ef_case_study_social_dialogues'] = array(
    'name' => 'delete terms in ef_case_study_social_dialogues',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_case_study_target_groups'.
  $permissions['delete terms in ef_case_study_target_groups'] = array(
    'name' => 'delete terms in ef_case_study_target_groups',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_company_sizes'.
  $permissions['delete terms in ef_company_sizes'] = array(
    'name' => 'delete terms in ef_company_sizes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_contracts'.
  $permissions['delete terms in ef_contracts'] = array(
    'name' => 'delete terms in ef_contracts',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_deliverable_kinds'.
  $permissions['delete terms in ef_deliverable_kinds'] = array(
    'name' => 'delete terms in ef_deliverable_kinds',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_event_types'.
  $permissions['delete terms in ef_event_types'] = array(
    'name' => 'delete terms in ef_event_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_industrial_relations_terms'.
  $permissions['delete terms in ef_industrial_relations_terms'] = array(
    'name' => 'delete terms in ef_industrial_relations_terms',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_instrument_categories'.
  $permissions['delete terms in ef_instrument_categories'] = array(
    'name' => 'delete terms in ef_instrument_categories',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_instrument_fundings'.
  $permissions['delete terms in ef_instrument_fundings'] = array(
    'name' => 'delete terms in ef_instrument_fundings',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_instrument_involvement_types'.
  $permissions['delete terms in ef_instrument_involvement_types'] = array(
    'name' => 'delete terms in ef_instrument_involvement_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_instrument_phases'.
  $permissions['delete terms in ef_instrument_phases'] = array(
    'name' => 'delete terms in ef_instrument_phases',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_nace_codes'.
  $permissions['delete terms in ef_nace_codes'] = array(
    'name' => 'delete terms in ef_nace_codes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_nuts'.
  $permissions['delete terms in ef_nuts'] = array(
    'name' => 'delete terms in ef_nuts',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_observatories'.
  $permissions['delete terms in ef_observatories'] = array(
    'name' => 'delete terms in ef_observatories',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_procurement_statuses'.
  $permissions['delete terms in ef_procurement_statuses'] = array(
    'name' => 'delete terms in ef_procurement_statuses',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_procurement_types'.
  $permissions['delete terms in ef_procurement_types'] = array(
    'name' => 'delete terms in ef_procurement_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_publication_contributors'.
  $permissions['delete terms in ef_publication_contributors'] = array(
    'name' => 'delete terms in ef_publication_contributors',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_publication_keywords'.
  $permissions['delete terms in ef_publication_keywords'] = array(
    'name' => 'delete terms in ef_publication_keywords',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_publication_sectors'.
  $permissions['delete terms in ef_publication_sectors'] = array(
    'name' => 'delete terms in ef_publication_sectors',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_publication_types'.
  $permissions['delete terms in ef_publication_types'] = array(
    'name' => 'delete terms in ef_publication_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_regulation_fundings'.
  $permissions['delete terms in ef_regulation_fundings'] = array(
    'name' => 'delete terms in ef_regulation_fundings',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_regulation_involvements'.
  $permissions['delete terms in ef_regulation_involvements'] = array(
    'name' => 'delete terms in ef_regulation_involvements',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_regulation_phases'.
  $permissions['delete terms in ef_regulation_phases'] = array(
    'name' => 'delete terms in ef_regulation_phases',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_regulation_thresholds'.
  $permissions['delete terms in ef_regulation_thresholds'] = array(
    'name' => 'delete terms in ef_regulation_thresholds',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_regulation_types'.
  $permissions['delete terms in ef_regulation_types'] = array(
    'name' => 'delete terms in ef_regulation_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_report_types'.
  $permissions['delete terms in ef_report_types'] = array(
    'name' => 'delete terms in ef_report_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_restructuring_keywords'.
  $permissions['delete terms in ef_restructuring_keywords'] = array(
    'name' => 'delete terms in ef_restructuring_keywords',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_restructuring_types'.
  $permissions['delete terms in ef_restructuring_types'] = array(
    'name' => 'delete terms in ef_restructuring_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_sectors'.
  $permissions['delete terms in ef_sectors'] = array(
    'name' => 'delete terms in ef_sectors',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_spotlight_themes'.
  $permissions['delete terms in ef_spotlight_themes'] = array(
    'name' => 'delete terms in ef_spotlight_themes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_survey_families'.
  $permissions['delete terms in ef_survey_families'] = array(
    'name' => 'delete terms in ef_survey_families',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_themes'.
  $permissions['delete terms in ef_themes'] = array(
    'name' => 'delete terms in ef_themes',
    'roles' => array(
      'Media Manager' => 'Media Manager',
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_topics'.
  $permissions['delete terms in ef_topics'] = array(
    'name' => 'delete terms in ef_topics',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ef_vendor_service_types'.
  $permissions['delete terms in ef_vendor_service_types'] = array(
    'name' => 'delete terms in ef_vendor_service_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download original image'.
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any board_member_page content'.
  $permissions['edit any board_member_page content'] = array(
    'name' => 'edit any board_member_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any dvs_survey content'.
  $permissions['edit any dvs_survey content'] = array(
    'name' => 'edit any dvs_survey content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_call_for_tender content'.
  $permissions['edit any ef_call_for_tender content'] = array(
    'name' => 'edit any ef_call_for_tender content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_case_study content'.
  $permissions['edit any ef_case_study content'] = array(
    'name' => 'edit any ef_case_study content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_comparative_analytical_report content'.
  $permissions['edit any ef_comparative_analytical_report content'] = array(
    'name' => 'edit any ef_comparative_analytical_report content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_contact_form content'.
  $permissions['edit any ef_contact_form content'] = array(
    'name' => 'edit any ef_contact_form content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_emire_dictionary content'.
  $permissions['edit any ef_emire_dictionary content'] = array(
    'name' => 'edit any ef_emire_dictionary content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_event content'.
  $permissions['edit any ef_event content'] = array(
    'name' => 'edit any ef_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_factsheet content'.
  $permissions['edit any ef_factsheet content'] = array(
    'name' => 'edit any ef_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_ic_quarterly_report content'.
  $permissions['edit any ef_ic_quarterly_report content'] = array(
    'name' => 'edit any ef_ic_quarterly_report content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_input_to_erm content'.
  $permissions['edit any ef_input_to_erm content'] = array(
    'name' => 'edit any ef_input_to_erm content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_ir_dictionary content'.
  $permissions['edit any ef_ir_dictionary content'] = array(
    'name' => 'edit any ef_ir_dictionary content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_national_contribution content'.
  $permissions['edit any ef_national_contribution content'] = array(
    'name' => 'edit any ef_national_contribution content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_network_quarterly_report content'.
  $permissions['edit any ef_network_quarterly_report content'] = array(
    'name' => 'edit any ef_network_quarterly_report content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_news content'.
  $permissions['edit any ef_news content'] = array(
    'name' => 'edit any ef_news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_photo_gallery content'.
  $permissions['edit any ef_photo_gallery content'] = array(
    'name' => 'edit any ef_photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'External Editor' => 'External Editor',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_publication content'.
  $permissions['edit any ef_publication content'] = array(
    'name' => 'edit any ef_publication content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_quarterly_report content'.
  $permissions['edit any ef_quarterly_report content'] = array(
    'name' => 'edit any ef_quarterly_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_regulation content'.
  $permissions['edit any ef_regulation content'] = array(
    'name' => 'edit any ef_regulation content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_report content'.
  $permissions['edit any ef_report content'] = array(
    'name' => 'edit any ef_report content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_restructuring_in_smes content'.
  $permissions['edit any ef_restructuring_in_smes content'] = array(
    'name' => 'edit any ef_restructuring_in_smes content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_spotlight_entry content'.
  $permissions['edit any ef_spotlight_entry content'] = array(
    'name' => 'edit any ef_spotlight_entry content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_support_instrument content'.
  $permissions['edit any ef_support_instrument content'] = array(
    'name' => 'edit any ef_support_instrument content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_survey content'.
  $permissions['edit any ef_survey content'] = array(
    'name' => 'edit any ef_survey content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_vacancy content'.
  $permissions['edit any ef_vacancy content'] = array(
    'name' => 'edit any ef_vacancy content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ef_video content'.
  $permissions['edit any ef_video content'] = array(
    'name' => 'edit any ef_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'External Editor' => 'External Editor',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'Media Manager' => 'Media Manager',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel-nodes'.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Governing Board' => 'Governing Board',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_ef_approved_for_payment'.
  $permissions['edit field_ef_approved_for_payment'] = array(
    'name' => 'edit field_ef_approved_for_payment',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_assign_to'.
  $permissions['edit field_ef_assign_to'] = array(
    'name' => 'edit field_ef_assign_to',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_balance_in_reporting'.
  $permissions['edit field_ef_balance_in_reporting'] = array(
    'name' => 'edit field_ef_balance_in_reporting',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_command_of_english'.
  $permissions['edit field_ef_command_of_english'] = array(
    'name' => 'edit field_ef_command_of_english',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_contract'.
  $permissions['edit field_ef_contract'] = array(
    'name' => 'edit field_ef_contract',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_contracts'.
  $permissions['edit field_ef_contracts'] = array(
    'name' => 'edit field_ef_contracts',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_deliverable_kind'.
  $permissions['edit field_ef_deliverable_kind'] = array(
    'name' => 'edit field_ef_deliverable_kind',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_flag'.
  $permissions['edit field_ef_flag'] = array(
    'name' => 'edit field_ef_flag',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_migration_datetime'.
  $permissions['edit field_ef_migration_datetime'] = array(
    'name' => 'edit field_ef_migration_datetime',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_migration_details'.
  $permissions['edit field_ef_migration_details'] = array(
    'name' => 'edit field_ef_migration_details',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_migration_old_url'.
  $permissions['edit field_ef_migration_old_url'] = array(
    'name' => 'edit field_ef_migration_old_url',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_quartely_report_year'.
  $permissions['edit field_ef_quartely_report_year'] = array(
    'name' => 'edit field_ef_quartely_report_year',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_quarter'.
  $permissions['edit field_ef_quarter'] = array(
    'name' => 'edit field_ef_quarter',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_quarter_report_country'.
  $permissions['edit field_ef_quarter_report_country'] = array(
    'name' => 'edit field_ef_quarter_report_country',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_regulation_type'.
  $permissions['edit field_ef_regulation_type'] = array(
    'name' => 'edit field_ef_regulation_type',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_report_delivery_date'.
  $permissions['edit field_ef_report_delivery_date'] = array(
    'name' => 'edit field_ef_report_delivery_date',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ef_unit'.
  $permissions['edit field_ef_unit'] = array(
    'name' => 'edit field_ef_unit',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own board_member_page content'.
  $permissions['edit own board_member_page content'] = array(
    'name' => 'edit own board_member_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own dvs_survey content'.
  $permissions['edit own dvs_survey content'] = array(
    'name' => 'edit own dvs_survey content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_call_for_tender content'.
  $permissions['edit own ef_call_for_tender content'] = array(
    'name' => 'edit own ef_call_for_tender content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_case_study content'.
  $permissions['edit own ef_case_study content'] = array(
    'name' => 'edit own ef_case_study content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_comparative_analytical_report content'.
  $permissions['edit own ef_comparative_analytical_report content'] = array(
    'name' => 'edit own ef_comparative_analytical_report content',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_contact_form content'.
  $permissions['edit own ef_contact_form content'] = array(
    'name' => 'edit own ef_contact_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_emire_dictionary content'.
  $permissions['edit own ef_emire_dictionary content'] = array(
    'name' => 'edit own ef_emire_dictionary content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_event content'.
  $permissions['edit own ef_event content'] = array(
    'name' => 'edit own ef_event content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_factsheet content'.
  $permissions['edit own ef_factsheet content'] = array(
    'name' => 'edit own ef_factsheet content',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_ic_quarterly_report content'.
  $permissions['edit own ef_ic_quarterly_report content'] = array(
    'name' => 'edit own ef_ic_quarterly_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_input_to_erm content'.
  $permissions['edit own ef_input_to_erm content'] = array(
    'name' => 'edit own ef_input_to_erm content',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_ir_dictionary content'.
  $permissions['edit own ef_ir_dictionary content'] = array(
    'name' => 'edit own ef_ir_dictionary content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_national_contribution content'.
  $permissions['edit own ef_national_contribution content'] = array(
    'name' => 'edit own ef_national_contribution content',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_network_quarterly_report content'.
  $permissions['edit own ef_network_quarterly_report content'] = array(
    'name' => 'edit own ef_network_quarterly_report content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_news content'.
  $permissions['edit own ef_news content'] = array(
    'name' => 'edit own ef_news content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_photo_gallery content'.
  $permissions['edit own ef_photo_gallery content'] = array(
    'name' => 'edit own ef_photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_publication content'.
  $permissions['edit own ef_publication content'] = array(
    'name' => 'edit own ef_publication content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_quarterly_report content'.
  $permissions['edit own ef_quarterly_report content'] = array(
    'name' => 'edit own ef_quarterly_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_regulation content'.
  $permissions['edit own ef_regulation content'] = array(
    'name' => 'edit own ef_regulation content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_report content'.
  $permissions['edit own ef_report content'] = array(
    'name' => 'edit own ef_report content',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_restructuring_in_smes content'.
  $permissions['edit own ef_restructuring_in_smes content'] = array(
    'name' => 'edit own ef_restructuring_in_smes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_spotlight_entry content'.
  $permissions['edit own ef_spotlight_entry content'] = array(
    'name' => 'edit own ef_spotlight_entry content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_support_instrument content'.
  $permissions['edit own ef_support_instrument content'] = array(
    'name' => 'edit own ef_support_instrument content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_survey content'.
  $permissions['edit own ef_survey content'] = array(
    'name' => 'edit own ef_survey content',
    'roles' => array(
      'Editor' => 'Editor',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_vacancy content'.
  $permissions['edit own ef_vacancy content'] = array(
    'name' => 'edit own ef_vacancy content',
    'roles' => array(
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ef_video content'.
  $permissions['edit own ef_video content'] = array(
    'name' => 'edit own ef_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Media Manager' => 'Media Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_ef_approved_for_payment'.
  $permissions['edit own field_ef_approved_for_payment'] = array(
    'name' => 'edit own field_ef_approved_for_payment',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_assign_to'.
  $permissions['edit own field_ef_assign_to'] = array(
    'name' => 'edit own field_ef_assign_to',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_balance_in_reporting'.
  $permissions['edit own field_ef_balance_in_reporting'] = array(
    'name' => 'edit own field_ef_balance_in_reporting',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_command_of_english'.
  $permissions['edit own field_ef_command_of_english'] = array(
    'name' => 'edit own field_ef_command_of_english',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_contract'.
  $permissions['edit own field_ef_contract'] = array(
    'name' => 'edit own field_ef_contract',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_contracts'.
  $permissions['edit own field_ef_contracts'] = array(
    'name' => 'edit own field_ef_contracts',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_deliverable_kind'.
  $permissions['edit own field_ef_deliverable_kind'] = array(
    'name' => 'edit own field_ef_deliverable_kind',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_flag'.
  $permissions['edit own field_ef_flag'] = array(
    'name' => 'edit own field_ef_flag',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_migration_datetime'.
  $permissions['edit own field_ef_migration_datetime'] = array(
    'name' => 'edit own field_ef_migration_datetime',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_migration_details'.
  $permissions['edit own field_ef_migration_details'] = array(
    'name' => 'edit own field_ef_migration_details',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_migration_old_url'.
  $permissions['edit own field_ef_migration_old_url'] = array(
    'name' => 'edit own field_ef_migration_old_url',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_quartely_report_year'.
  $permissions['edit own field_ef_quartely_report_year'] = array(
    'name' => 'edit own field_ef_quartely_report_year',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_quarter'.
  $permissions['edit own field_ef_quarter'] = array(
    'name' => 'edit own field_ef_quarter',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_quarter_report_country'.
  $permissions['edit own field_ef_quarter_report_country'] = array(
    'name' => 'edit own field_ef_quarter_report_country',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_regulation_type'.
  $permissions['edit own field_ef_regulation_type'] = array(
    'name' => 'edit own field_ef_regulation_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_report_delivery_date'.
  $permissions['edit own field_ef_report_delivery_date'] = array(
    'name' => 'edit own field_ef_report_delivery_date',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ef_unit'.
  $permissions['edit own field_ef_unit'] = array(
    'name' => 'edit own field_ef_unit',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel-nodes'.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Governing Board' => 'Governing Board',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit revisions'.
  $permissions['edit revisions'] = array(
    'name' => 'edit revisions',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'edit simple_registration_type registration state'.
  $permissions['edit simple_registration_type registration state'] = array(
    'name' => 'edit simple_registration_type registration state',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'edit terms in ef_case_study_categories'.
  $permissions['edit terms in ef_case_study_categories'] = array(
    'name' => 'edit terms in ef_case_study_categories',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_case_study_initiative_types'.
  $permissions['edit terms in ef_case_study_initiative_types'] = array(
    'name' => 'edit terms in ef_case_study_initiative_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_case_study_legal_forms'.
  $permissions['edit terms in ef_case_study_legal_forms'] = array(
    'name' => 'edit terms in ef_case_study_legal_forms',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_case_study_organisation_sizes'.
  $permissions['edit terms in ef_case_study_organisation_sizes'] = array(
    'name' => 'edit terms in ef_case_study_organisation_sizes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_case_study_scopes'.
  $permissions['edit terms in ef_case_study_scopes'] = array(
    'name' => 'edit terms in ef_case_study_scopes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_case_study_sectors'.
  $permissions['edit terms in ef_case_study_sectors'] = array(
    'name' => 'edit terms in ef_case_study_sectors',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_case_study_social_dialogue_types'.
  $permissions['edit terms in ef_case_study_social_dialogue_types'] = array(
    'name' => 'edit terms in ef_case_study_social_dialogue_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_case_study_social_dialogues'.
  $permissions['edit terms in ef_case_study_social_dialogues'] = array(
    'name' => 'edit terms in ef_case_study_social_dialogues',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_case_study_target_groups'.
  $permissions['edit terms in ef_case_study_target_groups'] = array(
    'name' => 'edit terms in ef_case_study_target_groups',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_company_sizes'.
  $permissions['edit terms in ef_company_sizes'] = array(
    'name' => 'edit terms in ef_company_sizes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_contracts'.
  $permissions['edit terms in ef_contracts'] = array(
    'name' => 'edit terms in ef_contracts',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_deliverable_kinds'.
  $permissions['edit terms in ef_deliverable_kinds'] = array(
    'name' => 'edit terms in ef_deliverable_kinds',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_event_types'.
  $permissions['edit terms in ef_event_types'] = array(
    'name' => 'edit terms in ef_event_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_industrial_relations_terms'.
  $permissions['edit terms in ef_industrial_relations_terms'] = array(
    'name' => 'edit terms in ef_industrial_relations_terms',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_instrument_categories'.
  $permissions['edit terms in ef_instrument_categories'] = array(
    'name' => 'edit terms in ef_instrument_categories',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_instrument_fundings'.
  $permissions['edit terms in ef_instrument_fundings'] = array(
    'name' => 'edit terms in ef_instrument_fundings',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_instrument_involvement_types'.
  $permissions['edit terms in ef_instrument_involvement_types'] = array(
    'name' => 'edit terms in ef_instrument_involvement_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_instrument_phases'.
  $permissions['edit terms in ef_instrument_phases'] = array(
    'name' => 'edit terms in ef_instrument_phases',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_nace_codes'.
  $permissions['edit terms in ef_nace_codes'] = array(
    'name' => 'edit terms in ef_nace_codes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_nuts'.
  $permissions['edit terms in ef_nuts'] = array(
    'name' => 'edit terms in ef_nuts',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_observatories'.
  $permissions['edit terms in ef_observatories'] = array(
    'name' => 'edit terms in ef_observatories',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_procurement_statuses'.
  $permissions['edit terms in ef_procurement_statuses'] = array(
    'name' => 'edit terms in ef_procurement_statuses',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_procurement_types'.
  $permissions['edit terms in ef_procurement_types'] = array(
    'name' => 'edit terms in ef_procurement_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_publication_contributors'.
  $permissions['edit terms in ef_publication_contributors'] = array(
    'name' => 'edit terms in ef_publication_contributors',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_publication_keywords'.
  $permissions['edit terms in ef_publication_keywords'] = array(
    'name' => 'edit terms in ef_publication_keywords',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_publication_sectors'.
  $permissions['edit terms in ef_publication_sectors'] = array(
    'name' => 'edit terms in ef_publication_sectors',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_publication_types'.
  $permissions['edit terms in ef_publication_types'] = array(
    'name' => 'edit terms in ef_publication_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_regulation_fundings'.
  $permissions['edit terms in ef_regulation_fundings'] = array(
    'name' => 'edit terms in ef_regulation_fundings',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_regulation_involvements'.
  $permissions['edit terms in ef_regulation_involvements'] = array(
    'name' => 'edit terms in ef_regulation_involvements',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_regulation_phases'.
  $permissions['edit terms in ef_regulation_phases'] = array(
    'name' => 'edit terms in ef_regulation_phases',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_regulation_thresholds'.
  $permissions['edit terms in ef_regulation_thresholds'] = array(
    'name' => 'edit terms in ef_regulation_thresholds',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_regulation_types'.
  $permissions['edit terms in ef_regulation_types'] = array(
    'name' => 'edit terms in ef_regulation_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_report_types'.
  $permissions['edit terms in ef_report_types'] = array(
    'name' => 'edit terms in ef_report_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_restructuring_keywords'.
  $permissions['edit terms in ef_restructuring_keywords'] = array(
    'name' => 'edit terms in ef_restructuring_keywords',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_restructuring_types'.
  $permissions['edit terms in ef_restructuring_types'] = array(
    'name' => 'edit terms in ef_restructuring_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_sectors'.
  $permissions['edit terms in ef_sectors'] = array(
    'name' => 'edit terms in ef_sectors',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_spotlight_themes'.
  $permissions['edit terms in ef_spotlight_themes'] = array(
    'name' => 'edit terms in ef_spotlight_themes',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_survey_families'.
  $permissions['edit terms in ef_survey_families'] = array(
    'name' => 'edit terms in ef_survey_families',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_themes'.
  $permissions['edit terms in ef_themes'] = array(
    'name' => 'edit terms in ef_themes',
    'roles' => array(
      'Media Manager' => 'Media Manager',
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_topics'.
  $permissions['edit terms in ef_topics'] = array(
    'name' => 'edit terms in ef_topics',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ef_vendor_service_types'.
  $permissions['edit terms in ef_vendor_service_types'] = array(
    'name' => 'edit terms in ef_vendor_service_types',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Metadata Manager' => 'Metadata Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit_custom_pub_ef_archived'.
  $permissions['edit_custom_pub_ef_archived'] = array(
    'name' => 'edit_custom_pub_ef_archived',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'custom_pub',
  );

  // Exported permission: 'execute clone_action_clone'.
  $permissions['execute clone_action_clone'] = array(
    'name' => 'execute clone_action_clone',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_publish_action'.
  $permissions['execute comment_publish_action'] = array(
    'name' => 'execute comment_publish_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_save_action'.
  $permissions['execute comment_save_action'] = array(
    'name' => 'execute comment_save_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_unpublish_action'.
  $permissions['execute comment_unpublish_action'] = array(
    'name' => 'execute comment_unpublish_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_unpublish_by_keyword_action'.
  $permissions['execute comment_unpublish_by_keyword_action'] = array(
    'name' => 'execute comment_unpublish_by_keyword_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_assign_owner_action'.
  $permissions['execute node_assign_owner_action'] = array(
    'name' => 'execute node_assign_owner_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_make_sticky_action'.
  $permissions['execute node_make_sticky_action'] = array(
    'name' => 'execute node_make_sticky_action',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_make_unsticky_action'.
  $permissions['execute node_make_unsticky_action'] = array(
    'name' => 'execute node_make_unsticky_action',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_promote_action'.
  $permissions['execute node_promote_action'] = array(
    'name' => 'execute node_promote_action',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_publish_action'.
  $permissions['execute node_publish_action'] = array(
    'name' => 'execute node_publish_action',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_save_action'.
  $permissions['execute node_save_action'] = array(
    'name' => 'execute node_save_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpromote_action'.
  $permissions['execute node_unpromote_action'] = array(
    'name' => 'execute node_unpromote_action',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpublish_action'.
  $permissions['execute node_unpublish_action'] = array(
    'name' => 'execute node_unpublish_action',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpublish_by_keyword_action'.
  $permissions['execute node_unpublish_by_keyword_action'] = array(
    'name' => 'execute node_unpublish_by_keyword_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute nodequeue_add_action'.
  $permissions['execute nodequeue_add_action'] = array(
    'name' => 'execute nodequeue_add_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute nodequeue_remove_action'.
  $permissions['execute nodequeue_remove_action'] = array(
    'name' => 'execute nodequeue_remove_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute pathauto_file_update_action'.
  $permissions['execute pathauto_file_update_action'] = array(
    'name' => 'execute pathauto_file_update_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute pathauto_node_update_action'.
  $permissions['execute pathauto_node_update_action'] = array(
    'name' => 'execute pathauto_node_update_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute pathauto_taxonomy_term_update_action'.
  $permissions['execute pathauto_taxonomy_term_update_action'] = array(
    'name' => 'execute pathauto_taxonomy_term_update_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute pathauto_user_update_action'.
  $permissions['execute pathauto_user_update_action'] = array(
    'name' => 'execute pathauto_user_update_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'execute registration_views_set_state_action'.
  $permissions['execute registration_views_set_state_action'] = array(
    'name' => 'execute registration_views_set_state_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute revisioning_delete_archived_action'.
  $permissions['execute revisioning_delete_archived_action'] = array(
    'name' => 'execute revisioning_delete_archived_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute revisioning_publish_latest_revision_action'.
  $permissions['execute revisioning_publish_latest_revision_action'] = array(
    'name' => 'execute revisioning_publish_latest_revision_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute role_delegation_delegate_roles_action'.
  $permissions['execute role_delegation_delegate_roles_action'] = array(
    'name' => 'execute role_delegation_delegate_roles_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute scs_views_create_newsletter_action'.
  $permissions['execute scs_views_create_newsletter_action'] = array(
    'name' => 'execute scs_views_create_newsletter_action',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_block_ip_action'.
  $permissions['execute system_block_ip_action'] = array(
    'name' => 'execute system_block_ip_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_goto_action'.
  $permissions['execute system_goto_action'] = array(
    'name' => 'execute system_goto_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_message_action'.
  $permissions['execute system_message_action'] = array(
    'name' => 'execute system_message_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_send_email_action'.
  $permissions['execute system_send_email_action'] = array(
    'name' => 'execute system_send_email_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute term_merge_action'.
  $permissions['execute term_merge_action'] = array(
    'name' => 'execute term_merge_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute user_block_user_action'.
  $permissions['execute user_block_user_action'] = array(
    'name' => 'execute user_block_user_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_archive_action'.
  $permissions['execute views_bulk_operations_archive_action'] = array(
    'name' => 'execute views_bulk_operations_archive_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_argument_selector_action'.
  $permissions['execute views_bulk_operations_argument_selector_action'] = array(
    'name' => 'execute views_bulk_operations_argument_selector_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_delete_item'.
  $permissions['execute views_bulk_operations_delete_item'] = array(
    'name' => 'execute views_bulk_operations_delete_item',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_delete_revision'.
  $permissions['execute views_bulk_operations_delete_revision'] = array(
    'name' => 'execute views_bulk_operations_delete_revision',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_modify_action'.
  $permissions['execute views_bulk_operations_modify_action'] = array(
    'name' => 'execute views_bulk_operations_modify_action',
    'roles' => array(
      'Author' => 'Author',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_script_action'.
  $permissions['execute views_bulk_operations_script_action'] = array(
    'name' => 'execute views_bulk_operations_script_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_user_cancel_action'.
  $permissions['execute views_bulk_operations_user_cancel_action'] = array(
    'name' => 'execute views_bulk_operations_user_cancel_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_user_roles_action'.
  $permissions['execute views_bulk_operations_user_roles_action'] = array(
    'name' => 'execute views_bulk_operations_user_roles_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute workbench_moderation_set_state_action'.
  $permissions['execute workbench_moderation_set_state_action'] = array(
    'name' => 'execute workbench_moderation_set_state_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import ef_vocabulary_company_sizes_import feeds'.
  $permissions['import ef_vocabulary_company_sizes_import feeds'] = array(
    'name' => 'import ef_vocabulary_company_sizes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_deliverable_kinds_import feeds'.
  $permissions['import ef_vocabulary_deliverable_kinds_import feeds'] = array(
    'name' => 'import ef_vocabulary_deliverable_kinds_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_ef_report_types_import feeds'.
  $permissions['import ef_vocabulary_ef_report_types_import feeds'] = array(
    'name' => 'import ef_vocabulary_ef_report_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_event_types_import feeds'.
  $permissions['import ef_vocabulary_event_types_import feeds'] = array(
    'name' => 'import ef_vocabulary_event_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_industrial_relations_terms_import feeds'.
  $permissions['import ef_vocabulary_industrial_relations_terms_import feeds'] = array(
    'name' => 'import ef_vocabulary_industrial_relations_terms_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_instrument_categories_import feeds'.
  $permissions['import ef_vocabulary_instrument_categories_import feeds'] = array(
    'name' => 'import ef_vocabulary_instrument_categories_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_instrument_fundings_import feeds'.
  $permissions['import ef_vocabulary_instrument_fundings_import feeds'] = array(
    'name' => 'import ef_vocabulary_instrument_fundings_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_instrument_involvement_types_import feeds'.
  $permissions['import ef_vocabulary_instrument_involvement_types_import feeds'] = array(
    'name' => 'import ef_vocabulary_instrument_involvement_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_instrument_phases_import feeds'.
  $permissions['import ef_vocabulary_instrument_phases_import feeds'] = array(
    'name' => 'import ef_vocabulary_instrument_phases_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_nace_codes_import feeds'.
  $permissions['import ef_vocabulary_nace_codes_import feeds'] = array(
    'name' => 'import ef_vocabulary_nace_codes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_nuts_import feeds'.
  $permissions['import ef_vocabulary_nuts_import feeds'] = array(
    'name' => 'import ef_vocabulary_nuts_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_observatories_import feeds'.
  $permissions['import ef_vocabulary_observatories_import feeds'] = array(
    'name' => 'import ef_vocabulary_observatories_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_procurement_statuses_import feeds'.
  $permissions['import ef_vocabulary_procurement_statuses_import feeds'] = array(
    'name' => 'import ef_vocabulary_procurement_statuses_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_procurement_types_import feeds'.
  $permissions['import ef_vocabulary_procurement_types_import feeds'] = array(
    'name' => 'import ef_vocabulary_procurement_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_publication_sectors_import feeds'.
  $permissions['import ef_vocabulary_publication_sectors_import feeds'] = array(
    'name' => 'import ef_vocabulary_publication_sectors_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_publication_types_import feeds'.
  $permissions['import ef_vocabulary_publication_types_import feeds'] = array(
    'name' => 'import ef_vocabulary_publication_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_regulation_fundings_import feeds'.
  $permissions['import ef_vocabulary_regulation_fundings_import feeds'] = array(
    'name' => 'import ef_vocabulary_regulation_fundings_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_regulation_involvements_import feeds'.
  $permissions['import ef_vocabulary_regulation_involvements_import feeds'] = array(
    'name' => 'import ef_vocabulary_regulation_involvements_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_regulation_phases_import feeds'.
  $permissions['import ef_vocabulary_regulation_phases_import feeds'] = array(
    'name' => 'import ef_vocabulary_regulation_phases_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_regulation_thresholds_import feeds'.
  $permissions['import ef_vocabulary_regulation_thresholds_import feeds'] = array(
    'name' => 'import ef_vocabulary_regulation_thresholds_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_regulation_types_import feeds'.
  $permissions['import ef_vocabulary_regulation_types_import feeds'] = array(
    'name' => 'import ef_vocabulary_regulation_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_restructuring_keywords_import feeds'.
  $permissions['import ef_vocabulary_restructuring_keywords_import feeds'] = array(
    'name' => 'import ef_vocabulary_restructuring_keywords_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_restructuring_types_import feeds'.
  $permissions['import ef_vocabulary_restructuring_types_import feeds'] = array(
    'name' => 'import ef_vocabulary_restructuring_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_sectors_import feeds'.
  $permissions['import ef_vocabulary_sectors_import feeds'] = array(
    'name' => 'import ef_vocabulary_sectors_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_spotlight_themes_import feeds'.
  $permissions['import ef_vocabulary_spotlight_themes_import feeds'] = array(
    'name' => 'import ef_vocabulary_spotlight_themes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_survey_families_import feeds'.
  $permissions['import ef_vocabulary_survey_families_import feeds'] = array(
    'name' => 'import ef_vocabulary_survey_families_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_themes_import feeds'.
  $permissions['import ef_vocabulary_themes_import feeds'] = array(
    'name' => 'import ef_vocabulary_themes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_topics_import feeds'.
  $permissions['import ef_vocabulary_topics_import feeds'] = array(
    'name' => 'import ef_vocabulary_topics_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ef_vocabulary_vendor_service_types_import feeds'.
  $permissions['import ef_vocabulary_vendor_service_types_import feeds'] = array(
    'name' => 'import ef_vocabulary_vendor_service_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'Media Manager' => 'Media Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'import node feeds'.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import or export menu'.
  $permissions['import or export menu'] = array(
    'name' => 'import or export menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_import',
  );

  // Exported permission: 'import user feeds'.
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import vocabulary_ef_contracts_import feeds'.
  $permissions['import vocabulary_ef_contracts_import feeds'] = array(
    'name' => 'import vocabulary_ef_contracts_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'list custom tokens'.
  $permissions['list custom tokens'] = array(
    'name' => 'list custom tokens',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'token_custom',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage permission locks'.
  $permissions['manage permission locks'] = array(
    'name' => 'manage permission locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'permissions_lock',
  );

  // Exported permission: 'manage permissions unrestricted'.
  $permissions['manage permissions unrestricted'] = array(
    'name' => 'manage permissions unrestricted',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'permissions_lock',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'merge terms'.
  $permissions['merge terms'] = array(
    'name' => 'merge terms',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Metadata Manager' => 'Metadata Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'publish any content'.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any ef_comparative_analytical_report content'.
  $permissions['publish any ef_comparative_analytical_report content'] = array(
    'name' => 'publish any ef_comparative_analytical_report content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any ef_national_contribution content'.
  $permissions['publish any ef_national_contribution content'] = array(
    'name' => 'publish any ef_national_contribution content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any ef_publication content'.
  $permissions['publish any ef_publication content'] = array(
    'name' => 'publish any ef_publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any ef_report content'.
  $permissions['publish any ef_report content'] = array(
    'name' => 'publish any ef_report content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any webform content'.
  $permissions['publish any webform content'] = array(
    'name' => 'publish any webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable content'.
  $permissions['publish editable content'] = array(
    'name' => 'publish editable content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable ef_comparative_analytical_report content'.
  $permissions['publish editable ef_comparative_analytical_report content'] = array(
    'name' => 'publish editable ef_comparative_analytical_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable ef_national_contribution content'.
  $permissions['publish editable ef_national_contribution content'] = array(
    'name' => 'publish editable ef_national_contribution content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable ef_publication content'.
  $permissions['publish editable ef_publication content'] = array(
    'name' => 'publish editable ef_publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable ef_report content'.
  $permissions['publish editable ef_report content'] = array(
    'name' => 'publish editable ef_report content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable webform content'.
  $permissions['publish editable webform content'] = array(
    'name' => 'publish editable webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own ef_comparative_analytical_report content'.
  $permissions['publish own ef_comparative_analytical_report content'] = array(
    'name' => 'publish own ef_comparative_analytical_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own ef_national_contribution content'.
  $permissions['publish own ef_national_contribution content'] = array(
    'name' => 'publish own ef_national_contribution content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own ef_publication content'.
  $permissions['publish own ef_publication content'] = array(
    'name' => 'publish own ef_publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own ef_report content'.
  $permissions['publish own ef_report content'] = array(
    'name' => 'publish own ef_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own webform content'.
  $permissions['publish own webform content'] = array(
    'name' => 'publish own webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish revisions'.
  $permissions['publish revisions'] = array(
    'name' => 'publish revisions',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of any ef_case_study content'.
  $permissions['publish revisions of any ef_case_study content'] = array(
    'name' => 'publish revisions of any ef_case_study content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of own ef_case_study content'.
  $permissions['publish revisions of own ef_case_study content'] = array(
    'name' => 'publish revisions of own ef_case_study content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'run security checks'.
  $permissions['run security checks'] = array(
    'name' => 'run security checks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'security_review',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'tamper ef_vocabulary_company_sizes_import'.
  $permissions['tamper ef_vocabulary_company_sizes_import'] = array(
    'name' => 'tamper ef_vocabulary_company_sizes_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_deliverable_kinds_import'.
  $permissions['tamper ef_vocabulary_deliverable_kinds_import'] = array(
    'name' => 'tamper ef_vocabulary_deliverable_kinds_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_ef_report_types_import'.
  $permissions['tamper ef_vocabulary_ef_report_types_import'] = array(
    'name' => 'tamper ef_vocabulary_ef_report_types_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_event_types_import'.
  $permissions['tamper ef_vocabulary_event_types_import'] = array(
    'name' => 'tamper ef_vocabulary_event_types_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_industrial_relations_terms_import'.
  $permissions['tamper ef_vocabulary_industrial_relations_terms_import'] = array(
    'name' => 'tamper ef_vocabulary_industrial_relations_terms_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_instrument_categories_import'.
  $permissions['tamper ef_vocabulary_instrument_categories_import'] = array(
    'name' => 'tamper ef_vocabulary_instrument_categories_import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_instrument_fundings_import'.
  $permissions['tamper ef_vocabulary_instrument_fundings_import'] = array(
    'name' => 'tamper ef_vocabulary_instrument_fundings_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_instrument_involvement_types_import'.
  $permissions['tamper ef_vocabulary_instrument_involvement_types_import'] = array(
    'name' => 'tamper ef_vocabulary_instrument_involvement_types_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_instrument_phases_import'.
  $permissions['tamper ef_vocabulary_instrument_phases_import'] = array(
    'name' => 'tamper ef_vocabulary_instrument_phases_import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_nace_codes_import'.
  $permissions['tamper ef_vocabulary_nace_codes_import'] = array(
    'name' => 'tamper ef_vocabulary_nace_codes_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_nuts_import'.
  $permissions['tamper ef_vocabulary_nuts_import'] = array(
    'name' => 'tamper ef_vocabulary_nuts_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_observatories_import'.
  $permissions['tamper ef_vocabulary_observatories_import'] = array(
    'name' => 'tamper ef_vocabulary_observatories_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_procurement_statuses_import'.
  $permissions['tamper ef_vocabulary_procurement_statuses_import'] = array(
    'name' => 'tamper ef_vocabulary_procurement_statuses_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_procurement_types_import'.
  $permissions['tamper ef_vocabulary_procurement_types_import'] = array(
    'name' => 'tamper ef_vocabulary_procurement_types_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_publication_sectors_import'.
  $permissions['tamper ef_vocabulary_publication_sectors_import'] = array(
    'name' => 'tamper ef_vocabulary_publication_sectors_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_publication_types_import'.
  $permissions['tamper ef_vocabulary_publication_types_import'] = array(
    'name' => 'tamper ef_vocabulary_publication_types_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_regulation_fundings_import'.
  $permissions['tamper ef_vocabulary_regulation_fundings_import'] = array(
    'name' => 'tamper ef_vocabulary_regulation_fundings_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_regulation_involvements_import'.
  $permissions['tamper ef_vocabulary_regulation_involvements_import'] = array(
    'name' => 'tamper ef_vocabulary_regulation_involvements_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_regulation_phases_import'.
  $permissions['tamper ef_vocabulary_regulation_phases_import'] = array(
    'name' => 'tamper ef_vocabulary_regulation_phases_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_regulation_thresholds_import'.
  $permissions['tamper ef_vocabulary_regulation_thresholds_import'] = array(
    'name' => 'tamper ef_vocabulary_regulation_thresholds_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_regulation_types_import'.
  $permissions['tamper ef_vocabulary_regulation_types_import'] = array(
    'name' => 'tamper ef_vocabulary_regulation_types_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_restructuring_keywords_import'.
  $permissions['tamper ef_vocabulary_restructuring_keywords_import'] = array(
    'name' => 'tamper ef_vocabulary_restructuring_keywords_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_restructuring_types_import'.
  $permissions['tamper ef_vocabulary_restructuring_types_import'] = array(
    'name' => 'tamper ef_vocabulary_restructuring_types_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_sectors_import'.
  $permissions['tamper ef_vocabulary_sectors_import'] = array(
    'name' => 'tamper ef_vocabulary_sectors_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_spotlight_themes_import'.
  $permissions['tamper ef_vocabulary_spotlight_themes_import'] = array(
    'name' => 'tamper ef_vocabulary_spotlight_themes_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_survey_families_import'.
  $permissions['tamper ef_vocabulary_survey_families_import'] = array(
    'name' => 'tamper ef_vocabulary_survey_families_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_themes_import'.
  $permissions['tamper ef_vocabulary_themes_import'] = array(
    'name' => 'tamper ef_vocabulary_themes_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_topics_import'.
  $permissions['tamper ef_vocabulary_topics_import'] = array(
    'name' => 'tamper ef_vocabulary_topics_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ef_vocabulary_vendor_service_types_import'.
  $permissions['tamper ef_vocabulary_vendor_service_types_import'] = array(
    'name' => 'tamper ef_vocabulary_vendor_service_types_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper node'.
  $permissions['tamper node'] = array(
    'name' => 'tamper node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper user'.
  $permissions['tamper user'] = array(
    'name' => 'tamper user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper vocabulary_ef_contracts_import'.
  $permissions['tamper vocabulary_ef_contracts_import'] = array(
    'name' => 'tamper vocabulary_ef_contracts_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unique_field_perm_admin'.
  $permissions['unique_field_perm_admin'] = array(
    'name' => 'unique_field_perm_admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'unique_field',
  );

  // Exported permission: 'unique_field_perm_bypass'.
  $permissions['unique_field_perm_bypass'] = array(
    'name' => 'unique_field_perm_bypass',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'unique_field',
  );

  // Exported permission: 'unlock ef_vocabulary_company_sizes_import feeds'.
  $permissions['unlock ef_vocabulary_company_sizes_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_company_sizes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_deliverable_kinds_import feeds'.
  $permissions['unlock ef_vocabulary_deliverable_kinds_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_deliverable_kinds_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_ef_report_types_import feeds'.
  $permissions['unlock ef_vocabulary_ef_report_types_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_ef_report_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_event_types_import feeds'.
  $permissions['unlock ef_vocabulary_event_types_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_event_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_industrial_relations_terms_import feeds'.
  $permissions['unlock ef_vocabulary_industrial_relations_terms_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_industrial_relations_terms_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_instrument_categories_import feeds'.
  $permissions['unlock ef_vocabulary_instrument_categories_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_instrument_categories_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_instrument_fundings_import feeds'.
  $permissions['unlock ef_vocabulary_instrument_fundings_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_instrument_fundings_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_instrument_involvement_types_import feeds'.
  $permissions['unlock ef_vocabulary_instrument_involvement_types_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_instrument_involvement_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_instrument_phases_import feeds'.
  $permissions['unlock ef_vocabulary_instrument_phases_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_instrument_phases_import feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_nace_codes_import feeds'.
  $permissions['unlock ef_vocabulary_nace_codes_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_nace_codes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_nuts_import feeds'.
  $permissions['unlock ef_vocabulary_nuts_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_nuts_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_observatories_import feeds'.
  $permissions['unlock ef_vocabulary_observatories_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_observatories_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_procurement_statuses_import feeds'.
  $permissions['unlock ef_vocabulary_procurement_statuses_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_procurement_statuses_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_procurement_types_import feeds'.
  $permissions['unlock ef_vocabulary_procurement_types_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_procurement_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_publication_sectors_import feeds'.
  $permissions['unlock ef_vocabulary_publication_sectors_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_publication_sectors_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_publication_types_import feeds'.
  $permissions['unlock ef_vocabulary_publication_types_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_publication_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_regulation_fundings_import feeds'.
  $permissions['unlock ef_vocabulary_regulation_fundings_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_regulation_fundings_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_regulation_involvements_import feeds'.
  $permissions['unlock ef_vocabulary_regulation_involvements_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_regulation_involvements_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_regulation_phases_import feeds'.
  $permissions['unlock ef_vocabulary_regulation_phases_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_regulation_phases_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_regulation_thresholds_import feeds'.
  $permissions['unlock ef_vocabulary_regulation_thresholds_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_regulation_thresholds_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_regulation_types_import feeds'.
  $permissions['unlock ef_vocabulary_regulation_types_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_regulation_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_restructuring_keywords_import feeds'.
  $permissions['unlock ef_vocabulary_restructuring_keywords_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_restructuring_keywords_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_restructuring_types_import feeds'.
  $permissions['unlock ef_vocabulary_restructuring_types_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_restructuring_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_sectors_import feeds'.
  $permissions['unlock ef_vocabulary_sectors_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_sectors_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_spotlight_themes_import feeds'.
  $permissions['unlock ef_vocabulary_spotlight_themes_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_spotlight_themes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_survey_families_import feeds'.
  $permissions['unlock ef_vocabulary_survey_families_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_survey_families_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_themes_import feeds'.
  $permissions['unlock ef_vocabulary_themes_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_themes_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_topics_import feeds'.
  $permissions['unlock ef_vocabulary_topics_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_topics_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ef_vocabulary_vendor_service_types_import feeds'.
  $permissions['unlock ef_vocabulary_vendor_service_types_import feeds'] = array(
    'name' => 'unlock ef_vocabulary_vendor_service_types_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock node feeds'.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock user feeds'.
  $permissions['unlock user feeds'] = array(
    'name' => 'unlock user feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock vocabulary_ef_contracts_import feeds'.
  $permissions['unlock vocabulary_ef_contracts_import feeds'] = array(
    'name' => 'unlock vocabulary_ef_contracts_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unpublish any content'.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any ef_comparative_analytical_report content'.
  $permissions['unpublish any ef_comparative_analytical_report content'] = array(
    'name' => 'unpublish any ef_comparative_analytical_report content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any ef_national_contribution content'.
  $permissions['unpublish any ef_national_contribution content'] = array(
    'name' => 'unpublish any ef_national_contribution content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any ef_publication content'.
  $permissions['unpublish any ef_publication content'] = array(
    'name' => 'unpublish any ef_publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any ef_report content'.
  $permissions['unpublish any ef_report content'] = array(
    'name' => 'unpublish any ef_report content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any webform content'.
  $permissions['unpublish any webform content'] = array(
    'name' => 'unpublish any webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish current revision'.
  $permissions['unpublish current revision'] = array(
    'name' => 'unpublish current revision',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'unpublish editable content'.
  $permissions['unpublish editable content'] = array(
    'name' => 'unpublish editable content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable ef_comparative_analytical_report content'.
  $permissions['unpublish editable ef_comparative_analytical_report content'] = array(
    'name' => 'unpublish editable ef_comparative_analytical_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable ef_national_contribution content'.
  $permissions['unpublish editable ef_national_contribution content'] = array(
    'name' => 'unpublish editable ef_national_contribution content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable ef_publication content'.
  $permissions['unpublish editable ef_publication content'] = array(
    'name' => 'unpublish editable ef_publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable ef_report content'.
  $permissions['unpublish editable ef_report content'] = array(
    'name' => 'unpublish editable ef_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable webform content'.
  $permissions['unpublish editable webform content'] = array(
    'name' => 'unpublish editable webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own ef_comparative_analytical_report content'.
  $permissions['unpublish own ef_comparative_analytical_report content'] = array(
    'name' => 'unpublish own ef_comparative_analytical_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own ef_national_contribution content'.
  $permissions['unpublish own ef_national_contribution content'] = array(
    'name' => 'unpublish own ef_national_contribution content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own ef_publication content'.
  $permissions['unpublish own ef_publication content'] = array(
    'name' => 'unpublish own ef_publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own ef_report content'.
  $permissions['unpublish own ef_report content'] = array(
    'name' => 'unpublish own ef_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own webform content'.
  $permissions['unpublish own webform content'] = array(
    'name' => 'unpublish own webform content',
    'roles' => array(
      'Assistant' => 'Assistant',
      'Governing Board' => 'Governing Board',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'update any simple_registration_type registration'.
  $permissions['update any simple_registration_type registration'] = array(
    'name' => 'update any simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'update own simple_registration_type registration'.
  $permissions['update own simple_registration_type registration'] = array(
    'name' => 'update own simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'use PHP for me alias paths'.
  $permissions['use PHP for me alias paths'] = array(
    'name' => 'use PHP for me alias paths',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'me',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Event Administrator' => 'Event Administrator',
      'External Editor' => 'External Editor',
      'Media Manager' => 'Media Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view advanced help index'.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help popup'.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help topic'.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view field_ef_approved_for_payment'.
  $permissions['view field_ef_approved_for_payment'] = array(
    'name' => 'view field_ef_approved_for_payment',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_assign_to'.
  $permissions['view field_ef_assign_to'] = array(
    'name' => 'view field_ef_assign_to',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_balance_in_reporting'.
  $permissions['view field_ef_balance_in_reporting'] = array(
    'name' => 'view field_ef_balance_in_reporting',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_command_of_english'.
  $permissions['view field_ef_command_of_english'] = array(
    'name' => 'view field_ef_command_of_english',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_contract'.
  $permissions['view field_ef_contract'] = array(
    'name' => 'view field_ef_contract',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_contracts'.
  $permissions['view field_ef_contracts'] = array(
    'name' => 'view field_ef_contracts',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_deliverable_kind'.
  $permissions['view field_ef_deliverable_kind'] = array(
    'name' => 'view field_ef_deliverable_kind',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_flag'.
  $permissions['view field_ef_flag'] = array(
    'name' => 'view field_ef_flag',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_migration_datetime'.
  $permissions['view field_ef_migration_datetime'] = array(
    'name' => 'view field_ef_migration_datetime',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_migration_details'.
  $permissions['view field_ef_migration_details'] = array(
    'name' => 'view field_ef_migration_details',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_migration_old_url'.
  $permissions['view field_ef_migration_old_url'] = array(
    'name' => 'view field_ef_migration_old_url',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_quartely_report_year'.
  $permissions['view field_ef_quartely_report_year'] = array(
    'name' => 'view field_ef_quartely_report_year',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_quarter'.
  $permissions['view field_ef_quarter'] = array(
    'name' => 'view field_ef_quarter',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_quarter_report_country'.
  $permissions['view field_ef_quarter_report_country'] = array(
    'name' => 'view field_ef_quarter_report_country',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_regulation_type'.
  $permissions['view field_ef_regulation_type'] = array(
    'name' => 'view field_ef_regulation_type',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_report_delivery_date'.
  $permissions['view field_ef_report_delivery_date'] = array(
    'name' => 'view field_ef_report_delivery_date',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ef_unit'.
  $permissions['view field_ef_unit'] = array(
    'name' => 'view field_ef_unit',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own field_ef_approved_for_payment'.
  $permissions['view own field_ef_approved_for_payment'] = array(
    'name' => 'view own field_ef_approved_for_payment',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_assign_to'.
  $permissions['view own field_ef_assign_to'] = array(
    'name' => 'view own field_ef_assign_to',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_balance_in_reporting'.
  $permissions['view own field_ef_balance_in_reporting'] = array(
    'name' => 'view own field_ef_balance_in_reporting',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_command_of_english'.
  $permissions['view own field_ef_command_of_english'] = array(
    'name' => 'view own field_ef_command_of_english',
    'roles' => array(
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_contract'.
  $permissions['view own field_ef_contract'] = array(
    'name' => 'view own field_ef_contract',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_contracts'.
  $permissions['view own field_ef_contracts'] = array(
    'name' => 'view own field_ef_contracts',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_deliverable_kind'.
  $permissions['view own field_ef_deliverable_kind'] = array(
    'name' => 'view own field_ef_deliverable_kind',
    'roles' => array(
      'Author' => 'Author',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_flag'.
  $permissions['view own field_ef_flag'] = array(
    'name' => 'view own field_ef_flag',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_migration_datetime'.
  $permissions['view own field_ef_migration_datetime'] = array(
    'name' => 'view own field_ef_migration_datetime',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_migration_details'.
  $permissions['view own field_ef_migration_details'] = array(
    'name' => 'view own field_ef_migration_details',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_migration_old_url'.
  $permissions['view own field_ef_migration_old_url'] = array(
    'name' => 'view own field_ef_migration_old_url',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_quartely_report_year'.
  $permissions['view own field_ef_quartely_report_year'] = array(
    'name' => 'view own field_ef_quartely_report_year',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_quarter'.
  $permissions['view own field_ef_quarter'] = array(
    'name' => 'view own field_ef_quarter',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_quarter_report_country'.
  $permissions['view own field_ef_quarter_report_country'] = array(
    'name' => 'view own field_ef_quarter_report_country',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_regulation_type'.
  $permissions['view own field_ef_regulation_type'] = array(
    'name' => 'view own field_ef_regulation_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_report_delivery_date'.
  $permissions['view own field_ef_report_delivery_date'] = array(
    'name' => 'view own field_ef_report_delivery_date',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ef_unit'.
  $permissions['view own field_ef_unit'] = array(
    'name' => 'view own field_ef_unit',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own simple_registration_type registration'.
  $permissions['view own simple_registration_type registration'] = array(
    'name' => 'view own simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Media Manager' => 'Media Manager',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revision status messages'.
  $permissions['view revision status messages'] = array(
    'name' => 'view revision status messages',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Author' => 'Author',
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Governing Board' => 'Governing Board',
      'Media Manager' => 'Media Manager',
      'Metadata Manager' => 'Metadata Manager',
      'OSU' => 'OSU',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions of any ef_case_study content'.
  $permissions['view revisions of any ef_case_study content'] = array(
    'name' => 'view revisions of any ef_case_study content',
    'roles' => array(
      'Editor' => 'Editor',
      'Eurofound Administrator' => 'Eurofound Administrator',
      'Eurofound Content Manager' => 'Eurofound Content Manager',
      'External Editor' => 'External Editor',
      'Quality Manager' => 'Quality Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions of own ef_case_study content'.
  $permissions['view revisions of own ef_case_study content'] = array(
    'name' => 'view revisions of own ef_case_study content',
    'roles' => array(
      'Author' => 'Author',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view simple_registration_type registration'.
  $permissions['view simple_registration_type registration'] = array(
    'name' => 'view simple_registration_type registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Eurofound Administrator' => 'Eurofound Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
