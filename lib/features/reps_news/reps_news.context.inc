<?php
/**
 * @file
 * reps_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function reps_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-news';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reps_news-block_1' => array(
          'module' => 'views',
          'delta' => 'reps_news-block_1',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('REPS');
  $export['reps-news'] = $context;

  return $export;
}
