<?php

/**
 * @file
 * Display Suite Reps News & Events configuration.
 */

/**
 * Define regions for  Reps News & Events.
 */
function ds_reps_news_events() {
  return array(
    'label' => t('REPS News and Events'),
    'regions' => array(
      'reps_ne_image' => t('REPS News and Events image'),
      'reps_ne_title' => t('REPS News and Events title'),
      'reps_ne_body' => t('REPS News and Events body'),
      'reps_ne_footer' => t('REPS News and Events footer'),
    ),
     'css' => TRUE,
  );
}
