<?php

/**
 * @file
 * Reps_publications.field_group.inc.
 */

/**
 * Implements hook_field_group_info().
 */
function reps_publications_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_publication_content|node|reps_publication|form';
  $field_group->group_name = 'group_reps_publication_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_reps_core_date',
      2 => 'field_reps_core_external_url',
      3 => 'field_reps_core_image',
      4 => 'field_reps_publication_file',
      5 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-publication-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_publication_content|node|reps_publication|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
