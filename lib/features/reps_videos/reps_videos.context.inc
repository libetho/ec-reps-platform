<?php
/**
 * @file
 * reps_videos.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function reps_videos_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-videos';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/videos' => 'news/videos',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reps_videos-block_1' => array(
          'module' => 'views',
          'delta' => 'reps_videos-block_1',
          'region' => 'content_bottom',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('REPS');
  $export['reps-videos'] = $context;

  return $export;
}
