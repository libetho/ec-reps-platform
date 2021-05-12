<?php

/**
 * @file
 * reps_publications.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_publications_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create reps_publication content'.
  $permissions['create reps_publication content'] = array(
    'name' => 'create reps_publication content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_publication content'.
  $permissions['delete any reps_publication content'] = array(
    'name' => 'delete any reps_publication content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_publication content'.
  $permissions['delete own reps_publication content'] = array(
    'name' => 'delete own reps_publication content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_publication content'.
  $permissions['edit any reps_publication content'] = array(
    'name' => 'edit any reps_publication content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_publication content'.
  $permissions['edit own reps_publication content'] = array(
    'name' => 'edit own reps_publication content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
