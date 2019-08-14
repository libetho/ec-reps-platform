<?php

/**
 * @file
 * Reps_myths.features.metatag.inc.
 */

/**
 * Implements hook_metatag_export_default().
 */
function reps_myths_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:reps_eu_myth.
  $config['node:reps_eu_myth'] = array(
    'instance' => 'node:reps_eu_myth',
    'disabled' => FALSE,
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
