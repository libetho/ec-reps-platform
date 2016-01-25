<?php
/**
 * @file
 * reps_videos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_videos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create reps_video content'.
  $permissions['create reps_video content'] = array(
    'name' => 'create reps_video content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_video content'.
  $permissions['delete any reps_video content'] = array(
    'name' => 'delete any reps_video content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_video content'.
  $permissions['delete own reps_video content'] = array(
    'name' => 'delete own reps_video content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_video content'.
  $permissions['edit any reps_video content'] = array(
    'name' => 'edit any reps_video content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_video content'.
  $permissions['edit own reps_video content'] = array(
    'name' => 'edit own reps_video content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
