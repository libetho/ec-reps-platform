<?php
/**
 * @file
 * reps_publications.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function reps_publications_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-publications';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'services/publications' => 'services/publications',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reps_publications-block_1' => array(
          'module' => 'views',
          'delta' => 'reps_publications-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('REPS');
  $export['reps-publications'] = $context;

  return $export;
}
