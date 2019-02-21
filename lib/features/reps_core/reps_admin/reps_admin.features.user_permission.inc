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

  // Exported permission: 'run cron jobs'.
  $permissions['run cron jobs'] = array(
    'name' => 'run cron jobs',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'ultimate_cron',
  );

  // Exported permission: 'view cron jobs'.
  $permissions['view cron jobs'] = array(
    'name' => 'view cron jobs',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'ultimate_cron',
  );

  return $permissions;
}
