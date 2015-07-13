<?php
/**
 * @file
 * reps_migrate.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_migrate_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  return $permissions;
}
