<?php

/**
 * @file
 * reps_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use xmlsitemap'.
  $permissions['use xmlsitemap'] = array(
    'name' => 'use xmlsitemap',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  return $permissions;
}
