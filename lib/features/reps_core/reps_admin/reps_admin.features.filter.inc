<?php
/**
 * @file
 * reps_admin.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function reps_admin_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = (object) array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'toolbox_sanitize' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_tokens' => array(
        'weight' => 20,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
