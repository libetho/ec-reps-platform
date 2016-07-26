<?php

/**
 * @file
 * reps_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function reps_core_user_default_roles() {
  $roles = array();

  // Exported role: REPS Administrator.
  $roles['REPS Administrator'] = (object) array(
    'name' => 'REPS Administrator',
    'weight' => 5,
  );

  return $roles;
}
