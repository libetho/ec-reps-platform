<?php

/**
 * @file
 * Reps_core.features.inc.
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reps_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function reps_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function reps_core_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_additional_block
  $nodequeues['homepage_additional_block'] = array(
    'name' => 'homepage_additional_block',
    'title' => 'Homepage additional block',
    'subqueue_title' => '',
    'size' => 6,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'reps_homepage_additional_block',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: slider_footer
  $nodequeues['slider_footer'] = array(
    'name' => 'slider_footer',
    'title' => 'Slider footer',
    'subqueue_title' => '',
    'size' => 15,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'reps_slide_footer',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: slider_homepage
  $nodequeues['slider_homepage'] = array(
    'name' => 'slider_homepage',
    'title' => 'Slider homepage',
    'subqueue_title' => '',
    'size' => 15,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'reps_slide_homepage',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function reps_core_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_additional_block__200_x_200_.
  $styles['homepage_additional_block__200_x_200_'] = array(
    'label' => 'Homepage Additional block [200 x 200]',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_thumbs.
  $styles['homepage_thumbs'] = array(
    'label' => 'Homepage Thumbs [Width: 150px]',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: quicklinks_homepage__83x76_.
  $styles['quicklinks_homepage__83x76_'] = array(
    'label' => 'Quicklinks Homepage [83x76]',
    'effects' => array(
      4 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 82,
          'height' => 76,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: right_column_image.
  $styles['right_column_image'] = array(
    'label' => 'Right column image [Width: 213px]',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 213,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slide_homepage_large__719x265_.
  $styles['slide_homepage_large__719x265_'] = array(
    'label' => 'Slide homepage large [719x265]',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 719,
          'height' => 265,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: slider_footer__150x83_.
  $styles['slider_footer__150x83_'] = array(
    'label' => 'Slider footer [150x83]',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 83,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slider_homepage__342_x_272_.
  $styles['slider_homepage__342_x_272_'] = array(
    'label' => 'Slide homepage small [342 x 272]',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 342,
          'height' => 272,
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
function reps_core_node_info() {
  $items = array(
    'reps_contact_point' => array(
      'name' => t('Contact point'),
      'base' => 'node_content',
      'description' => t('Use this content to add a pin on the map "contact points"'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reps_homepage' => array(
      'name' => t('Homepage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reps_homepage_additional_block' => array(
      'name' => t('Homepage additional block'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reps_slide_footer' => array(
      'name' => t('Slide footer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reps_slide_homepage' => array(
      'name' => t('Slide homepage'),
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
