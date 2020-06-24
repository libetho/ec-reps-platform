<?php

/**
 * @file
 * reps_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function reps_admin_user_default_roles() {
  $roles = array();

  // Exported role: REPS Administrator.
  $roles['REPS Administrator'] = (object) array(
    'name' => 'REPS Administrator',
    'weight' => 5,
  );

  // Exported role: site admin.
  $roles['site admin'] = (object) array(
    'name' => 'site admin',
    'weight' => 6,
  );

  return $roles;
}
