<?php

/**
 * @file
 * reps_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'cem' => 'cem',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'cem' => 'cem',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access broken links report'.
  $permissions['access broken links report'] = array(
    'name' => 'access broken links report',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access coffee'.
  $permissions['access coffee'] = array(
    'name' => 'access coffee',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'site admin' => 'site admin',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access ecas import users function'.
  $permissions['access ecas import users function'] = array(
    'name' => 'access ecas import users function',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'ecas_import_users',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access own broken links report'.
  $permissions['access own broken links report'] = array(
    'name' => 'access own broken links report',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access send by email'.
  $permissions['access send by email'] = array(
    'name' => 'access send by email',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'add terms in media_folders'.
  $permissions['add terms in media_folders'] = array(
    'name' => 'add terms in media_folders',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in metatags_ess_gf'.
  $permissions['add terms in metatags_ess_gf'] = array(
    'name' => 'add terms in metatags_ess_gf',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in reps_contact_point_categories'.
  $permissions['add terms in reps_contact_point_categories'] = array(
    'name' => 'add terms in reps_contact_point_categories',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer autologout'.
  $permissions['administer autologout'] = array(
    'name' => 'administer autologout',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'autologout',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer chr'.
  $permissions['administer chr'] = array(
    'name' => 'administer chr',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'chr',
  );

  // Exported permission: 'administer coffee'.
  $permissions['administer coffee'] = array(
    'name' => 'administer coffee',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer easy_breadcrumb'.
  $permissions['administer easy_breadcrumb'] = array(
    'name' => 'administer easy_breadcrumb',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'easy_breadcrumb',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer feature sets'.
  $permissions['administer feature sets'] = array(
    'name' => 'administer feature sets',
    'roles' => array(
      'site admin' => 'site admin',
      'cem' => 'cem',
    ),
    'module' => 'feature_set',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu-breadcrumb-menu menu items'.
  $permissions['administer menu-breadcrumb-menu menu items'] = array(
    'name' => 'administer menu-breadcrumb-menu menu items',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-reps-services menu items'.
  $permissions['administer menu-reps-services menu items'] = array(
    'name' => 'administer menu-reps-services menu items',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-service-tools menu items'.
  $permissions['administer menu-service-tools menu items'] = array(
    'name' => 'administer menu-service-tools menu items',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu_token'.
  $permissions['administer menu_token'] = array(
    'name' => 'administer menu_token',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'menu_token',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer nexteuropa_piwik'.
  $permissions['administer nexteuropa_piwik'] = array(
    'name' => 'administer nexteuropa_piwik',
    'roles' => array(
      'PIWIK administrator' => 'PIWIK administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'nexteuropa_piwik',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer password policy'.
  $permissions['administer password policy'] = array(
    'name' => 'administer password policy',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer realname'.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'realname',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer reps menu'.
  $permissions['administer reps menu'] = array(
    'name' => 'administer reps menu',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'reps_admin',
  );

  // Exported permission: 'administer reps settings'.
  $permissions['administer reps settings'] = array(
    'name' => 'administer reps settings',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'reps_admin',
  );

  // Exported permission: 'administer reps social links'.
  $permissions['administer reps social links'] = array(
    'name' => 'administer reps social links',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'reps_admin',
  );

  // Exported permission: 'administer rh_node'.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rh_taxonomy'.
  $permissions['administer rh_taxonomy'] = array(
    'name' => 'administer rh_taxonomy',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer taxonomy_browser'.
  $permissions['administer taxonomy_browser'] = array(
    'name' => 'administer taxonomy_browser',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy_browser',
  );

  // Exported permission: 'administer tmgmt'.
  $permissions['administer tmgmt'] = array(
    'name' => 'administer tmgmt',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'administer translation tasks'.
  $permissions['administer translation tasks'] = array(
    'name' => 'administer translation tasks',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'tmgmt_local',
  );

  // Exported permission: 'administer ultimate cron'.
  $permissions['administer ultimate cron'] = array(
    'name' => 'administer ultimate cron',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'ultimate_cron',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer video presets'.
  $permissions['administer video presets'] = array(
    'name' => 'administer video presets',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'video',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'administer webtools'.
  $permissions['administer webtools'] = array(
    'name' => 'administer webtools',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'nexteuropa_webtools',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass conversion video'.
  $permissions['bypass conversion video'] = array(
    'name' => 'bypass conversion video',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'video',
  );

  // Exported permission: 'bypass rh_node'.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      'site admin' => 'site admin',
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rh_taxonomy'.
  $permissions['bypass rh_taxonomy'] = array(
    'name' => 'bypass rh_taxonomy',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own logout threshold'.
  $permissions['change own logout threshold'] = array(
    'name' => 'change own logout threshold',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'autologout',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear contact_points_edc feeds'.
  $permissions['clear contact_points_edc feeds'] = array(
    'name' => 'clear contact_points_edc feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear contact_points_edic feeds'.
  $permissions['clear contact_points_edic feeds'] = array(
    'name' => 'clear contact_points_edic feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear contact_points_tem feeds'.
  $permissions['clear contact_points_tem feeds'] = array(
    'name' => 'clear contact_points_tem feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'convert on submission'.
  $permissions['convert on submission'] = array(
    'name' => 'convert on submission',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'video',
  );

  // Exported permission: 'create any reps_core_quicklinks bean'.
  $permissions['create any reps_core_quicklinks bean'] = array(
    'name' => 'create any reps_core_quicklinks bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any reps_core_sb_right_blue_button bean'.
  $permissions['create any reps_core_sb_right_blue_button bean'] = array(
    'name' => 'create any reps_core_sb_right_blue_button bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any reps_core_sb_right_free_content bean'.
  $permissions['create any reps_core_sb_right_free_content bean'] = array(
    'name' => 'create any reps_core_sb_right_free_content bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any reps_core_sb_right_image_link bean'.
  $permissions['create any reps_core_sb_right_image_link bean'] = array(
    'name' => 'create any reps_core_sb_right_image_link bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any webtools bean'.
  $permissions['create any webtools bean'] = array(
    'name' => 'create any webtools bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reps_contact_point content'.
  $permissions['create reps_contact_point content'] = array(
    'name' => 'create reps_contact_point content',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reps_homepage content'.
  $permissions['create reps_homepage content'] = array(
    'name' => 'create reps_homepage content',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reps_homepage_additional_block content'.
  $permissions['create reps_homepage_additional_block content'] = array(
    'name' => 'create reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reps_slide_footer content'.
  $permissions['create reps_slide_footer content'] = array(
    'name' => 'create reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reps_slide_homepage content'.
  $permissions['create reps_slide_homepage content'] = array(
    'name' => 'create reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_contact_point content'.
  $permissions['delete any reps_contact_point content'] = array(
    'name' => 'delete any reps_contact_point content',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_core_quicklinks bean'.
  $permissions['delete any reps_core_quicklinks bean'] = array(
    'name' => 'delete any reps_core_quicklinks bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any reps_core_sb_right_blue_button bean'.
  $permissions['delete any reps_core_sb_right_blue_button bean'] = array(
    'name' => 'delete any reps_core_sb_right_blue_button bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any reps_core_sb_right_free_content bean'.
  $permissions['delete any reps_core_sb_right_free_content bean'] = array(
    'name' => 'delete any reps_core_sb_right_free_content bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any reps_core_sb_right_image_link bean'.
  $permissions['delete any reps_core_sb_right_image_link bean'] = array(
    'name' => 'delete any reps_core_sb_right_image_link bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any reps_homepage content'.
  $permissions['delete any reps_homepage content'] = array(
    'name' => 'delete any reps_homepage content',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_homepage_additional_block content'.
  $permissions['delete any reps_homepage_additional_block content'] = array(
    'name' => 'delete any reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_slide_footer content'.
  $permissions['delete any reps_slide_footer content'] = array(
    'name' => 'delete any reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_slide_homepage content'.
  $permissions['delete any reps_slide_homepage content'] = array(
    'name' => 'delete any reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webtools bean'.
  $permissions['delete any webtools bean'] = array(
    'name' => 'delete any webtools bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_contact_point content'.
  $permissions['delete own reps_contact_point content'] = array(
    'name' => 'delete own reps_contact_point content',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_homepage content'.
  $permissions['delete own reps_homepage content'] = array(
    'name' => 'delete own reps_homepage content',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_homepage_additional_block content'.
  $permissions['delete own reps_homepage_additional_block content'] = array(
    'name' => 'delete own reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_slide_footer content'.
  $permissions['delete own reps_slide_footer content'] = array(
    'name' => 'delete own reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_slide_homepage content'.
  $permissions['delete own reps_slide_homepage content'] = array(
    'name' => 'delete own reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_contact_point content'.
  $permissions['edit any reps_contact_point content'] = array(
    'name' => 'edit any reps_contact_point content',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_core_quicklinks bean'.
  $permissions['edit any reps_core_quicklinks bean'] = array(
    'name' => 'edit any reps_core_quicklinks bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any reps_core_sb_right_blue_button bean'.
  $permissions['edit any reps_core_sb_right_blue_button bean'] = array(
    'name' => 'edit any reps_core_sb_right_blue_button bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any reps_core_sb_right_free_content bean'.
  $permissions['edit any reps_core_sb_right_free_content bean'] = array(
    'name' => 'edit any reps_core_sb_right_free_content bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any reps_core_sb_right_image_link bean'.
  $permissions['edit any reps_core_sb_right_image_link bean'] = array(
    'name' => 'edit any reps_core_sb_right_image_link bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any reps_homepage content'.
  $permissions['edit any reps_homepage content'] = array(
    'name' => 'edit any reps_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_homepage_additional_block content'.
  $permissions['edit any reps_homepage_additional_block content'] = array(
    'name' => 'edit any reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_slide_footer content'.
  $permissions['edit any reps_slide_footer content'] = array(
    'name' => 'edit any reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_slide_homepage content'.
  $permissions['edit any reps_slide_homepage content'] = array(
    'name' => 'edit any reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webtools bean'.
  $permissions['edit any webtools bean'] = array(
    'name' => 'edit any webtools bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_contact_point content'.
  $permissions['edit own reps_contact_point content'] = array(
    'name' => 'edit own reps_contact_point content',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_homepage content'.
  $permissions['edit own reps_homepage content'] = array(
    'name' => 'edit own reps_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_homepage_additional_block content'.
  $permissions['edit own reps_homepage_additional_block content'] = array(
    'name' => 'edit own reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_slide_footer content'.
  $permissions['edit own reps_slide_footer content'] = array(
    'name' => 'edit own reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_slide_homepage content'.
  $permissions['edit own reps_slide_homepage content'] = array(
    'name' => 'edit own reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'import contact_points_edc feeds'.
  $permissions['import contact_points_edc feeds'] = array(
    'name' => 'import contact_points_edc feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import contact_points_edic feeds'.
  $permissions['import contact_points_edic feeds'] = array(
    'name' => 'import contact_points_edic feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import contact_points_tem feeds'.
  $permissions['import contact_points_tem feeds'] = array(
    'name' => 'import contact_points_tem feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'media_bulk_upload',
  );

  // Exported permission: 'manage feature nexteuropa_varnish'.
  $permissions['manage feature nexteuropa_varnish'] = array(
    'name' => 'manage feature nexteuropa_varnish',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'cem' => 'cem',
      'editor' => 'editor',
    ),
    'module' => 'multisite_drupal_features_set_standard',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to validated'.
  $permissions['moderate content from needs_review to validated'] = array(
    'name' => 'moderate content from needs_review to validated',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to archived'.
  $permissions['moderate content from published to archived'] = array(
    'name' => 'moderate content from published to archived',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from validated to published'.
  $permissions['moderate content from validated to published'] = array(
    'name' => 'moderate content from validated to published',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'multisite_workbench_moderation_view_bulk_update'.
  $permissions['multisite_workbench_moderation_view_bulk_update'] = array(
    'name' => 'multisite_workbench_moderation_view_bulk_update',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'multisite_workbench_moderation_view',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'print_ui',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'override default scheduler time'.
  $permissions['override default scheduler time'] = array(
    'name' => 'override default scheduler time',
    'roles' => array(
      'site admin' => 'site admin',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'scheduler_workbench',
  );

  // Exported permission: 'override player dimensions'.
  $permissions['override player dimensions'] = array(
    'name' => 'override player dimensions',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'video',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'provide translation services'.
  $permissions['provide translation services'] = array(
    'name' => 'provide translation services',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'tmgmt_local',
  );

  // Exported permission: 're convert video'.
  $permissions['re convert video'] = array(
    'name' => 're convert video',
    'roles' => array(
      'site admin' => 'site admin',
      'contributor' => 'contributor',
    ),
    'module' => 'video',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'run cron jobs'.
  $permissions['run cron jobs'] = array(
    'name' => 'run cron jobs',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'ultimate_cron',
  );

  // Exported permission: 'schedule publishing of nodes'.
  $permissions['schedule publishing of nodes'] = array(
    'name' => 'schedule publishing of nodes',
    'roles' => array(
      'PIWIK administrator' => 'PIWIK administrator',
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send unlimited emails'.
  $permissions['send unlimited emails'] = array(
    'name' => 'send unlimited emails',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: 'show format selection for bean'.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'site admin' => 'site admin',
      'contributor' => 'contributor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for flagging'.
  $permissions['show format selection for flagging'] = array(
    'name' => 'show format selection for flagging',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate bean entities'.
  $permissions['translate bean entities'] = array(
    'name' => 'translate bean entities',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate file entities'.
  $permissions['translate file entities'] = array(
    'name' => 'translate file entities',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unlock contact_points_edc feeds'.
  $permissions['unlock contact_points_edc feeds'] = array(
    'name' => 'unlock contact_points_edc feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock contact_points_edic feeds'.
  $permissions['unlock contact_points_edic feeds'] = array(
    'name' => 'unlock contact_points_edic feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock contact_points_tem feeds'.
  $permissions['unlock contact_points_tem feeds'] = array(
    'name' => 'unlock contact_points_tem feeds',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'upload webtools custom js'.
  $permissions['upload webtools custom js'] = array(
    'name' => 'upload webtools custom js',
    'roles' => array(
      'site admin' => 'site admin',
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'nexteuropa_webtools',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use default thumb'.
  $permissions['use default thumb'] = array(
    'name' => 'use default thumb',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'video',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use text format basic_html'.
  $permissions['use text format basic_html'] = array(
    'name' => 'use text format basic_html',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use xmlsitemap'.
  $permissions['use xmlsitemap'] = array(
    'name' => 'use xmlsitemap',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'version management edits'.
  $permissions['version management edits'] = array(
    'name' => 'version management edits',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'version_management',
  );

  // Exported permission: 'view advanced help index'.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help popup'.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help topic'.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view alert message'.
  $permissions['view alert message'] = array(
    'name' => 'view alert message',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'multisite_drupal_toolbox',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any reps_core_quicklinks bean'.
  $permissions['view any reps_core_quicklinks bean'] = array(
    'name' => 'view any reps_core_quicklinks bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any reps_core_sb_right_blue_button bean'.
  $permissions['view any reps_core_sb_right_blue_button bean'] = array(
    'name' => 'view any reps_core_sb_right_blue_button bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any reps_core_sb_right_free_content bean'.
  $permissions['view any reps_core_sb_right_free_content bean'] = array(
    'name' => 'view any reps_core_sb_right_free_content bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any reps_core_sb_right_image_link bean'.
  $permissions['view any reps_core_sb_right_image_link bean'] = array(
    'name' => 'view any reps_core_sb_right_image_link bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any webtools bean'.
  $permissions['view any webtools bean'] = array(
    'name' => 'view any webtools bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'site admin' => 'site admin',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view cron jobs'.
  $permissions['view cron jobs'] = array(
    'name' => 'view cron jobs',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'ultimate_cron',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'site admin' => 'site admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view rate results page'.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'rate',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'site admin' => 'site admin',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
