<?php
/**
 * @file
 * reps_core.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function reps_core_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:page.
  $config['node:page'] = (object) array(
    'instance' => 'node:page',
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

  // Exported Metatag config instance: node:reps_homepage.
  $config['node:reps_homepage'] = (object) array(
    'instance' => 'node:reps_homepage',
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
