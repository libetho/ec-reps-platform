<?php
/**
 * @file
 * Reps_core.bean.inc.
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function reps_core_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'reps_core_quicklinks';
  $bean_type->label = 'Reps quicklinks';
  $bean_type->options = '';
  $bean_type->description = 'Use this content to place a quicklinks block in the home page.';
  $export['reps_core_quicklinks'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'reps_core_sb_right_blue_button';
  $bean_type->label = 'Sidebar right blue button';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['reps_core_sb_right_blue_button'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'reps_core_sb_right_free_content';
  $bean_type->label = 'Sidebar right free content';
  $bean_type->options = '';
  $bean_type->description = 'Block placed in the right sidebar containing free content';
  $export['reps_core_sb_right_free_content'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'reps_core_sb_right_image_link';
  $bean_type->label = 'Sidebar right image link';
  $bean_type->options = '';
  $bean_type->description = 'Simple block composed of an image and a link on it';
  $export['reps_core_sb_right_image_link'] = $bean_type;

  return $export;
}
