<?php
/**
 * @file
 * reps_contact_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reps_contact_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function reps_contact_form_node_info() {

}
