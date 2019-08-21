<?php

/**
 * @file
 * Code for the REPS core feature.
 */

/**
 * Implements hook_views_query_alter().
 */
 function reps_core_views_query_alter(&$view, &$query) {

  if ($view->name == 'reps_bean_blocks_global' && $view->current_display == 'block_reps_bean') {
    foreach ($query->where as $index => $condition_group) {
      foreach ($condition_group['conditions'] as $id => $condition) {
        if (trim($condition['field']) == "field_data_field_reps_core_node_reference.field_reps_core_node_reference_target_id = :field_data_field_reps_core_node_reference_field_reps_core_node_reference_target_id") {
          $new_condition = array(
            'field' => 'field_data_field_reps_core_node_reference.field_reps_core_node_reference_target_id',
            'value' => '',
            'operator' => 'IS NULL',
          );
          array_push($query->where[$index]['conditions'], $new_condition);
          $query->where[$index]['type'] = 'OR';
          break;
        }
      }
    }
  }
 }
