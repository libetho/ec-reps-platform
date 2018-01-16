<?php
/**
 * @file
 * reps_faq.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function reps_faq_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|reps_faq|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'reps_faq';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|reps_faq|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function reps_faq_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|reps_faq|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'reps_faq';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_reps_core_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_reps_core_abstract',
      ),
    ),
    'fields' => array(
      'field_reps_core_image' => 'left',
      'title' => 'right',
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
  $export['node|reps_faq|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function reps_faq_ds_view_modes_info() {
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
