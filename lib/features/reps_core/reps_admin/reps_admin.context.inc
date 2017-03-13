<?php

/**
 * @file
 * Reps_admin.context.inc.
 */

/**
 * Implements hook_context_default_contexts().
 */
function reps_admin_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-admin';
  $context->description = 'Admin context for the REPS';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/config/reps/menu' => 'admin/reps/menu',
        'admin/config/reps/menu/*' => 'admin/reps/menu/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin context for the REPS');
  t('REPS');
  $export['reps-admin'] = $context;

  return $export;
}
