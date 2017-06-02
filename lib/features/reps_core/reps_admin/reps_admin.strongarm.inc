<?php
/**
 * @file
 * reps_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function reps_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'administration_language_negotiation_default';
  $strongarm->value = 'en';
  $export['administration_language_negotiation_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'administration_language_negotiation_paths';
  $strongarm->value = array(
    0 => 'admin/*',
    1 => 'node/*/edit',
    2 => 'admin_menu/*',
  );
  $export['administration_language_negotiation_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  return $export;
}
