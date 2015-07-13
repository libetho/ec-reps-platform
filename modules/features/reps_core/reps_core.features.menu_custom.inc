<?php
/**
 * @file
 * Reps_core.features.menu_custom.inc.
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function reps_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-reps-services.
  $menus['menu-reps-services'] = array(
    'menu_name' => 'menu-reps-services',
    'title' => 'REPS service tools',
    'description' => '',
    'language' => LANGUAGE_NONE,
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('REPS service tools');

  return $menus;
}
