<?php
/**
 * @file
 * Reps_publications.field_group.inc.
 */

/**
 * Implements hook_field_group_info().
 */
function reps_publications_field_group_info() {
  $export = array();

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
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'body',
      2 => 'field_reps_core_date',
      3 => 'field_reps_core_external_url',
      4 => 'field_reps_core_image',
      5 => 'field_reps_publication_file',
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
  $export['group_reps_publication_content|node|reps_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_publication_metadata|node|reps_publication|form';
  $field_group->group_name = 'group_reps_publication_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'field_meta_classification',
      1 => 'field_meta_description',
      2 => 'path',
      3 => 'language',
      4 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reps_publication_metadata|node|reps_publication|form'] = $field_group;

  return $export;
}
