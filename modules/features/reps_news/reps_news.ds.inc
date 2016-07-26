<?php

/**
 * @file
 * reps_news.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function reps_news_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'rss_newsletter';
  $ds_view_mode->label = 'RSS - Newsletter';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['rss_newsletter'] = $ds_view_mode;

  return $export;
}
