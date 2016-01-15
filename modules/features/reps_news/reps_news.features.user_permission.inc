<?php
/**
 * @file
 * reps_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create reps_news content'.
  $permissions['create reps_news content'] = array(
    'name' => 'create reps_news content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_news content'.
  $permissions['delete any reps_news content'] = array(
    'name' => 'delete any reps_news content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_news content'.
  $permissions['delete own reps_news content'] = array(
    'name' => 'delete own reps_news content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_news content'.
  $permissions['edit any reps_news content'] = array(
    'name' => 'edit any reps_news content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_news content'.
  $permissions['edit own reps_news content'] = array(
    'name' => 'edit own reps_news content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
