<?php

/**
 * @file
 * reps_core.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function reps_core_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'reps_main_content_image';
  $ds_view_mode->label = 'Reps main content image';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
  );
  $export['reps_main_content_image'] = $ds_view_mode;

  return $export;
}
