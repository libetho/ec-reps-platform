<?php
/**
 * @file
 * reps_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create reps_faq content'.
  $permissions['create reps_faq content'] = array(
    'name' => 'create reps_faq content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'admin maintenance' => 'admin maintenance',
      'cem' => 'cem',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_faq content'.
  $permissions['delete any reps_faq content'] = array(
    'name' => 'delete any reps_faq content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'admin maintenance' => 'admin maintenance',
      'cem' => 'cem',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_faq content'.
  $permissions['delete own reps_faq content'] = array(
    'name' => 'delete own reps_faq content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'admin maintenance' => 'admin maintenance',
      'cem' => 'cem',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_faq content'.
  $permissions['edit any reps_faq content'] = array(
    'name' => 'edit any reps_faq content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'admin maintenance' => 'admin maintenance',
      'cem' => 'cem',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_faq content'.
  $permissions['edit own reps_faq content'] = array(
    'name' => 'edit own reps_faq content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'admin maintenance' => 'admin maintenance',
      'cem' => 'cem',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
