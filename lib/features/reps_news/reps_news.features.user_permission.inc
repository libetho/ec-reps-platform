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

  // Exported permission: 'add terms in reps_news_categories'.
  $permissions['add terms in reps_news_categories'] = array(
    'name' => 'add terms in reps_news_categories',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create reps_news content'.
  $permissions['create reps_news content'] = array(
    'name' => 'create reps_news content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
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

  // Exported permission: 'delete terms in reps_news_categories'.
  $permissions['delete terms in reps_news_categories'] = array(
    'name' => 'delete terms in reps_news_categories',
    'roles' => array(),
    'module' => 'taxonomy',
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
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in reps_news_categories'.
  $permissions['edit terms in reps_news_categories'] = array(
    'name' => 'edit terms in reps_news_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
