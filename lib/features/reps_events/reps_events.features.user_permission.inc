<?php
/**
 * @file
 * reps_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer own reps_registration registration'.
  $permissions['administer own reps_registration registration'] = array(
    'name' => 'administer own reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer reps_registration registration'.
  $permissions['administer reps_registration registration'] = array(
    'name' => 'administer reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create reps_registration registration'.
  $permissions['create reps_registration registration'] = array(
    'name' => 'create reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create reps_registration registration other anonymous'.
  $permissions['create reps_registration registration other anonymous'] = array(
    'name' => 'create reps_registration registration other anonymous',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create reps_registration registration other users'.
  $permissions['create reps_registration registration other users'] = array(
    'name' => 'create reps_registration registration other users',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create reps_registration registration self'.
  $permissions['create reps_registration registration self'] = array(
    'name' => 'create reps_registration registration self',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any reps_registration registration'.
  $permissions['delete any reps_registration registration'] = array(
    'name' => 'delete any reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own reps_registration registration'.
  $permissions['delete own reps_registration registration'] = array(
    'name' => 'delete own reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit reps_registration registration state'.
  $permissions['edit reps_registration registration state'] = array(
    'name' => 'edit reps_registration registration state',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any reps_registration registration'.
  $permissions['update any reps_registration registration'] = array(
    'name' => 'update any reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own reps_registration registration'.
  $permissions['update own reps_registration registration'] = array(
    'name' => 'update own reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own reps_registration registration'.
  $permissions['view own reps_registration registration'] = array(
    'name' => 'view own reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view reps_registration registration'.
  $permissions['view reps_registration registration'] = array(
    'name' => 'view reps_registration registration',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
