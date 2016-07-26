<?php

/**
 * @file
 * nexteuropa_migrate_test.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nexteuropa_migrate_test_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nexteuropa_migrate_test_node_info() {
  $items = array(
    'migrate_test' => array(
      'name' => t('Migrate test'),
      'base' => 'node_content',
      'description' => t('Migrate test content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
