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
function reps_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function reps_core_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_thumbs.
  $styles['homepage_thumbs'] = array(
    'name' => 'homepage_thumbs',
    'label' => 'Homepage Thumbs [Width: 150px]',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
    'name' => 'quicklinks_homepage__83x76_',
    'label' => 'Quicklinks Homepage [83x76]',
    'effects' => array(
      4 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'right_column_image',
    'label' => 'Right column image [Width: 213px]',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
    'name' => 'slide_homepage_large__719x265_',
    'label' => 'Slide homepage large [719x265]',
    'effects' => array(
      3 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 719,
          'height' => 265,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slider_footer__150x83_.
  $styles['slider_footer__150x83_'] = array(
    'name' => 'slider_footer__150x83_',
    'label' => 'Slider footer [150x83]',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'slider_homepage__342_x_272_',
    'label' => 'Slide homepage small [342 x 272]',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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

/**
 * Implements hook_weight_features_default_settings().
 */
function reps_core_weight_features_default_settings() {
  $settings = array();

  $settings['reps_slide_homepage'] = array(
    'enabled' => 1,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 1,
  );

  return $settings;
}
