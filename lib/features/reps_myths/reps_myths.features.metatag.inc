<?php
/**
 * @file
 * Reps_news.features.metatag.inc.
 */

/**
 * Implements hook_metatag_export_default().
 */
function reps_news_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:reps_news.
  $config['node:reps_eu_myth'] = (object) array(
    'instance' => 'node:reps_eu_myth',
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
