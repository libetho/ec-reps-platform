<?php
/**
 * @file
 * reps_myths.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function reps_myths_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-eu-myths';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/eu-myths' => 'news/eu-myths',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reps_eu_myth-block_1' => array(
          'module' => 'views',
          'delta' => 'reps_eu_myth-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('REPS');
  $export['reps-eu-myths'] = $context;

  return $export;
}
