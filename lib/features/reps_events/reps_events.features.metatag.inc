<?php
/**
 * @file
 * reps_events.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function reps_events_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:reps_event.
  $config['node:reps_event'] = array(
    'instance' => 'node:reps_event',
    'config' => array(
      'revisit-after' => array(
        'value' => 15,
        'period' => 'day',
      ),
      'og:image' => array(
        'value' => '[node:field-reps-core-image:file:url]',
      ),
    ),
  );

  return $config;
}
