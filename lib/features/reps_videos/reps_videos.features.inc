<?php

/**
 * @file
 * Reps_videos.features.inc.
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reps_videos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function reps_videos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function reps_videos_image_default_styles() {
  $styles = array();

  // Exported image style: thumb_videos__209x156_.
  $styles['thumb_videos__209x156_'] = array(
    'label' => 'Thumb videos [209x156]',
    'effects' => array(
      6 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 209,
          'height' => 156,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function reps_videos_node_info() {
  $items = array(
    'reps_video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
