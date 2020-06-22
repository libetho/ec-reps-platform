<?php

/**
 * @file
 * reps_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'accept translation jobs'.
  $permissions['accept translation jobs'] = array(
    'name' => 'accept translation jobs',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'access nexteuropa user management views'.
  $permissions['access nexteuropa user management views'] = array(
    'name' => 'access nexteuropa user management views',
    'roles' => array(
      'User management' => 'User management',
      'site admin' => 'site admin',
    ),
    'module' => 'nexteuropa_user_management',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'anonymous user' => 'anonymous user',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site admin' => 'site admin',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site admin' => 'site admin',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'add terms in classification'.
  $permissions['add terms in classification'] = array(
    'name' => 'add terms in classification',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer drafty'.
  $permissions['administer drafty'] = array(
    'name' => 'administer drafty',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'drafty',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer gelf_log settings'.
  $permissions['administer gelf_log settings'] = array(
    'name' => 'administer gelf_log settings',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'gelf_log',
  );

  // Exported permission: 'administer jquery update'.
  $permissions['administer jquery update'] = array(
    'name' => 'administer jquery update',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'jquery_update',
  );

  // Exported permission: 'administer menu-flexslider-example menu items'.
  $permissions['administer menu-flexslider-example menu items'] = array(
    'name' => 'administer menu-flexslider-example menu items',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nexteuropa cookie consent kit configuration'.
  $permissions['administer nexteuropa cookie consent kit configuration'] = array(
    'name' => 'administer nexteuropa cookie consent kit configuration',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'nexteuropa_cookie_consent_kit',
  );

  // Exported permission: 'administer nexteuropa laco settings'.
  $permissions['administer nexteuropa laco settings'] = array(
    'name' => 'administer nexteuropa laco settings',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'nexteuropa_laco',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'create translation jobs'.
  $permissions['create translation jobs'] = array(
    'name' => 'create translation jobs',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'delete terms in classification'.
  $permissions['delete terms in classification'] = array(
    'name' => 'delete terms in classification',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_folders'.
  $permissions['delete terms in media_folders'] = array(
    'name' => 'delete terms in media_folders',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in metatags_ess_gf'.
  $permissions['delete terms in metatags_ess_gf'] = array(
    'name' => 'delete terms in metatags_ess_gf',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in reps_contact_point_categories'.
  $permissions['delete terms in reps_contact_point_categories'] = array(
    'name' => 'delete terms in reps_contact_point_categories',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'diff view changes'.
  $permissions['diff view changes'] = array(
    'name' => 'diff view changes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site admin' => 'site admin',
    ),
    'module' => 'diff',
  );

  // Exported permission: 'edit terms in classification'.
  $permissions['edit terms in classification'] = array(
    'name' => 'edit terms in classification',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_folders'.
  $permissions['edit terms in media_folders'] = array(
    'name' => 'edit terms in media_folders',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in metatags_ess_gf'.
  $permissions['edit terms in metatags_ess_gf'] = array(
    'name' => 'edit terms in metatags_ess_gf',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in reps_contact_point_categories'.
  $permissions['edit terms in reps_contact_point_categories'] = array(
    'name' => 'edit terms in reps_contact_point_categories',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'manage feature nexteuropa_trackedchanges'.
  $permissions['manage feature nexteuropa_trackedchanges'] = array(
    'name' => 'manage feature nexteuropa_trackedchanges',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'multisite_drupal_features_set_standard',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'nexteuropa manage users non restricted operations'.
  $permissions['nexteuropa manage users non restricted operations'] = array(
    'name' => 'nexteuropa manage users non restricted operations',
    'roles' => array(
      'User management' => 'User management',
      'site admin' => 'site admin',
    ),
    'module' => 'nexteuropa_user_management',
  );

  // Exported permission: 'php redirect rh_node'.
  $permissions['php redirect rh_node'] = array(
    'name' => 'php redirect rh_node',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'php redirect rh_taxonomy'.
  $permissions['php redirect rh_taxonomy'] = array(
    'name' => 'php redirect rh_taxonomy',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'scheduler workbench'.
  $permissions['scheduler workbench'] = array(
    'name' => 'scheduler workbench',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'scheduler_workbench',
  );

  // Exported permission: 'submit translation jobs'.
  $permissions['submit translation jobs'] = array(
    'name' => 'submit translation jobs',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'tamper contact_points_edc'.
  $permissions['tamper contact_points_edc'] = array(
    'name' => 'tamper contact_points_edc',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper contact_points_edic'.
  $permissions['tamper contact_points_edic'] = array(
    'name' => 'tamper contact_points_edic',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper contact_points_tem'.
  $permissions['tamper contact_points_tem'] = array(
    'name' => 'tamper contact_points_tem',
    'roles' => array(
      'site admin' => 'site admin',
    ),
    'module' => 'feeds_tamper',
  );

  return $permissions;
}
