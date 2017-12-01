<?php
/**
 * @file
 * reps_news.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function reps_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|reps_news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'reps_news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_reps_core_image',
      ),
      'right' => array(
        1 => 'title_field',
        2 => 'field_reps_core_date',
        3 => 'field_reps_core_abstract',
      ),
    ),
    'fields' => array(
      'field_reps_core_image' => 'left',
      'title_field' => 'right',
      'field_reps_core_date' => 'right',
      'field_reps_core_abstract' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|reps_news|teaser'] = $ds_layout;

  return $export;
}