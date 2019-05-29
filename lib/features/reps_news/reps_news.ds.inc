<?php

/**
 * @file
 * reps_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function reps_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|reps_news|homepage';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'reps_news';
  $ds_fieldsetting->view_mode = 'homepage';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_reps_core_ds_field_external_url',
        ),
      ),
    ),
  );
  $export['node|reps_news|homepage'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|reps_news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'reps_news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_reps_core_ds_field_external_url',
        ),
      ),
    ),
    'field_reps_news_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => '_reps_core_ds_field_items_comma',
        ),
      ),
    ),
  );
  $export['node|reps_news|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function reps_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|reps_news|homepage';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'reps_news';
  $ds_layout->view_mode = 'homepage';
  $ds_layout->layout = 'reps_news_events';
  $ds_layout->settings = array(
    'regions' => array(
      'reps_ne_image' => array(
        0 => 'field_reps_core_image',
      ),
      'reps_ne_title' => array(
        1 => 'title_field',
        2 => 'field_reps_core_date',
      ),
      'reps_ne_body' => array(
        3 => 'field_reps_core_abstract',
      ),
    ),
    'fields' => array(
      'field_reps_core_image' => 'reps_ne_image',
      'title_field' => 'reps_ne_title',
      'field_reps_core_date' => 'reps_ne_title',
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
  $export['node|reps_news|homepage'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|reps_news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'reps_news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'reps_news_events';
  $ds_layout->settings = array(
    'regions' => array(
      'reps_ne_image' => array(
        0 => 'field_reps_core_image',
      ),
      'reps_ne_title' => array(
        1 => 'title_field',
        2 => 'field_reps_core_date',
      ),
      'reps_ne_body' => array(
        3 => 'field_reps_core_abstract',
        4 => 'field_reps_news_category',
      ),
    ),
    'fields' => array(
      'field_reps_core_image' => 'reps_ne_image',
      'title_field' => 'reps_ne_title',
      'field_reps_core_date' => 'reps_ne_title',
      'field_reps_core_abstract' => 'reps_ne_body',
      'field_reps_news_category' => 'reps_ne_body',
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
  $export['node|reps_news|teaser'] = $ds_layout;

  return $export;
}