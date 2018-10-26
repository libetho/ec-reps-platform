<?php

/**
 * @file
 * reps_faq.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function reps_faq_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-faq';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/faq' => 'news/faq',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reps_faq-block' => array(
          'module' => 'views',
          'delta' => 'reps_faq-block',
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
  $export['reps-faq'] = $context;

  return $export;
}
