<?php
/**
 * @file
 * reps_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function reps_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-events';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reps_events-upcoming_events' => array(
          'module' => 'views',
          'delta' => 'reps_events-upcoming_events',
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
  $export['reps-events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-past-events';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/past-events' => 'events/past-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reps_events-past_events' => array(
          'module' => 'views',
          'delta' => 'reps_events-past_events',
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
  $export['reps-past-events'] = $context;

  return $export;
}
