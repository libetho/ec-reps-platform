<?php

/**
 * @file
 * reps_myths.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function reps_myths_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|reps_eu_myth|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'reps_eu_myth';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'reps_news_events';
  $ds_layout->settings = array(
    'regions' => array(
      'reps_ne_image' => array(
        0 => 'field_reps_core_image',
      ),
      'reps_ne_body' => array(
        1 => 'title_field',
        2 => 'field_reps_core_abstract',
      ),
    ),
    'fields' => array(
      'field_reps_core_image' => 'reps_ne_image',
      'title_field' => 'reps_ne_body',
      'field_reps_core_abstract' => 'reps_ne_body',
    ),
    'classes' => array(),
    'wrappers' => array(
      'reps_ne_image' => 'div',
      'reps_ne_title' => 'div',
      'reps_ne_body' => 'div',
      'reps_ne_footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|reps_eu_myth|teaser'] = $ds_layout;

  return $export;
}
