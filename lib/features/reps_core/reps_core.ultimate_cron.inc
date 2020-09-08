<?php

/**
 * @file
 * reps_core.ultimate_cron.inc
 */

/**
 * Implements hook_default_ultimate_cron_job().
 */
function reps_core_default_ultimate_cron_job() {
  $export = array();

  $job = new stdClass();
  $job->disabled = FALSE; /* Edit this to true to make a default job disabled initially */
  $job->api_version = 3;
  $job->name = 'job_scheduler_cron';
  $job->title = 'Default cron handler';
  $job->settings = array(
    'scheduler' => array(
      'name' => '',
      'simple' => array(
        'rules' => array(
          0 => '0+@ * * * *',
        ),
      ),
    ),
    'launcher' => array(
      'name' => '',
      'serial' => array(),
    ),
    'logger' => array(
      'name' => '',
      'database' => array(),
    ),
    'settings' => array(
      'queue' => array(),
      'poorman' => array(),
      'general' => array(),
    ),
  );
  $export['job_scheduler_cron'] = $job;

  $job = new stdClass();
  $job->disabled = FALSE; /* Edit this to true to make a default job disabled initially */
  $job->api_version = 3;
  $job->name = 'linkchecker_cron';
  $job->title = 'Default cron handler';
  $job->settings = array(
    'scheduler' => array(
      'name' => '',
      'simple' => array(
        'rules' => array(
          0 => '0+@ */12 * * *',
        ),
      ),
    ),
    'launcher' => array(
      'name' => '',
      'serial' => array(),
    ),
    'logger' => array(
      'name' => '',
      'database' => array(),
    ),
    'settings' => array(
      'queue' => array(),
      'poorman' => array(),
      'general' => array(),
    ),
  );
  $export['linkchecker_cron'] = $job;

  $job = new stdClass();
  $job->disabled = FALSE; /* Edit this to true to make a default job disabled initially */
  $job->api_version = 3;
  $job->name = 'queue_rules_scheduler_tasks';
  $job->title = 'Queue: rules_scheduler_tasks';
  $job->settings = array(
    'settings' => array(
      'queue' => array(
        'throttle' => 0,
      ),
      'general' => array(),
      'poorman' => array(),
    ),
    'scheduler' => array(
      'name' => '',
      'simple' => array(
        'rules' => array(
          0 => '*/15+@ * * * *',
        ),
      ),
    ),
    'launcher' => array(
      'name' => '',
      'serial' => array(),
    ),
    'logger' => array(
      'name' => '',
      'database' => array(),
    ),
  );
  $export['queue_rules_scheduler_tasks'] = $job;

  $job = new stdClass();
  $job->disabled = FALSE; /* Edit this to true to make a default job disabled initially */
  $job->api_version = 3;
  $job->name = 'search_cron';
  $job->title = 'Update indexes';
  $job->settings = array(
    'scheduler' => array(
      'name' => '',
      'simple' => array(
        'rules' => array(
          0 => '0+@ * * * *',
        ),
      ),
    ),
    'launcher' => array(
      'name' => '',
      'serial' => array(),
    ),
    'logger' => array(
      'name' => '',
      'database' => array(),
    ),
    'settings' => array(
      'queue' => array(),
      'poorman' => array(),
      'general' => array(),
    ),
  );
  $export['search_cron'] = $job;

  return $export;
}
