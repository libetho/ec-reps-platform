<?php
/**
 * @file
 * Reps_news.features.metatag.inc.
 */

/**
 * Implements hook_metatag_export_default().
 */
function reps_faq_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:reps_faq.
  $config['node:reps_faq'] = (object) array(
    'instance' => 'node:reps_faq',
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
