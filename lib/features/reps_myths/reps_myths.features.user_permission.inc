<?php
/**
 * @file
 * reps_myths.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_myths_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create reps_eu_myth content'.
  $permissions['create reps_eu_myth content'] = array(
    'name' => 'create reps_eu_myth content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_eu_myth content'.
  $permissions['delete any reps_eu_myth content'] = array(
    'name' => 'delete any reps_eu_myth content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_eu_myth content'.
  $permissions['delete own reps_eu_myth content'] = array(
    'name' => 'delete own reps_eu_myth content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_eu_myth content'.
  $permissions['edit any reps_eu_myth content'] = array(
    'name' => 'edit any reps_eu_myth content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_eu_myth content'.
  $permissions['edit own reps_eu_myth content'] = array(
    'name' => 'edit own reps_eu_myth content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
