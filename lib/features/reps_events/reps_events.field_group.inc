<?php

/**
 * @file
 * reps_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function reps_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_event_content|node|reps_event|form';
  $field_group->group_name = 'group_reps_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_reps_core_abstract',
      2 => 'field_reps_core_image',
      3 => 'field_reps_event_date',
      4 => 'field_reps_event_venue',
      5 => 'field_reps_registration',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-event-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_event_content|node|reps_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_event_metadata|node|reps_event|form';
  $field_group->group_name = 'group_reps_event_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_meta_classification',
      1 => 'field_meta_description',
      2 => 'field_tags',
      3 => 'path',
      4 => 'language',
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
  $field_groups['group_reps_event_metadata|node|reps_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_event_rel|node|reps_event|form';
  $field_group->group_name = 'group_reps_event_rel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '4',
    'children' => array(
      0 => 'field_reps_core_file',
      1 => 'field_reps_core_related_links',
      2 => 'field_reps_core_related_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-event-rel field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_event_rel|node|reps_event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');
  t('Related content');

  return $field_groups;
}
