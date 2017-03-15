<?php

/**
 * @file
 * reps_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function reps_core_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => 0,
    'children' => array(
      0 => 'title_field',
      1 => 'title',
      2 => 'field_ne_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_add_blocks_content|node|reps_homepage_additional_block|form';
  $field_group->group_name = 'group_reps_add_blocks_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_homepage_additional_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_reps_core_external_url',
      2 => 'field_reps_core_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-add-blocks-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_add_blocks_content|node|reps_homepage_additional_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_bean_ql_content|bean|reps_core_quicklinks|form';
  $field_group->group_name = 'group_reps_bean_ql_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_quicklinks';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_reps_core_abstract',
      1 => 'field_reps_core_image',
      2 => 'field_reps_core_node_reference',
      3 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-bean-ql-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_bean_ql_content|bean|reps_core_quicklinks|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_bean_ql_other|bean|reps_core_quicklinks|form';
  $field_group->group_name = 'group_reps_bean_ql_other';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_quicklinks';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '2',
    'children' => array(
      0 => 'revision',
      1 => 'view_mode',
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
  $field_groups['group_reps_bean_ql_other|bean|reps_core_quicklinks|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_core_more_info|node|page|form';
  $field_group->group_name = 'group_reps_core_more_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Info',
    'weight' => '7',
    'children' => array(
      0 => 'field_reps_core_more_info_body',
      1 => 'field_reps_core_more_info_link',
      2 => 'field_reps_core_more_info_title',
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
  $field_groups['group_reps_core_more_info|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_cp_content|node|reps_contact_point|form';
  $field_group->group_name = 'group_reps_cp_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_contact_point';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_reps_cp_type',
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
  $field_groups['group_reps_cp_content|node|reps_contact_point|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_homepage_content|node|reps_homepage|form';
  $field_group->group_name = 'group_reps_homepage_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_reps_core_node_reference',
      2 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-homepage-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_homepage_content|node|reps_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_page_content|node|page|form';
  $field_group->group_name = 'group_reps_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '5',
    'children' => array(
      1 => 'field_reps_core_image',
      2 => 'field_reps_core_abstract',
      3 => 'field_ne_body',
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
  $field_groups['group_reps_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_page_related_content|node|page|form';
  $field_group->group_name = 'group_reps_page_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '6',
    'children' => array(
      0 => 'field_reps_core_related_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-page-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_page_related_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_content|bean|reps_core_sb_right_blue_button|form';
  $field_group->group_name = 'group_reps_rightcol_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_blue_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_reps_core_external_url',
      1 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-rightcol-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_rightcol_content|bean|reps_core_sb_right_blue_button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_content|bean|reps_core_sb_right_free_content|form';
  $field_group->group_name = 'group_reps_rightcol_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_free_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_reps_core_abstract',
      1 => 'field_reps_core_more_info_link',
      2 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-rightcol-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_rightcol_content|bean|reps_core_sb_right_free_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_content|bean|reps_core_sb_right_image_link|form';
  $field_group->group_name = 'group_reps_rightcol_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_image_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_reps_core_external_url',
      1 => 'field_reps_core_image',
      2 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-rightcol-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_rightcol_content|bean|reps_core_sb_right_image_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_other|bean|reps_core_sb_right_blue_button|form';
  $field_group->group_name = 'group_reps_rightcol_other';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_blue_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '3',
    'children' => array(
      0 => 'revision',
      1 => 'view_mode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-rightcol-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_rightcol_other|bean|reps_core_sb_right_blue_button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_other|bean|reps_core_sb_right_free_content|form';
  $field_group->group_name = 'group_reps_rightcol_other';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_free_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '3',
    'children' => array(
      0 => 'revision',
      1 => 'view_mode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-rightcol-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_rightcol_other|bean|reps_core_sb_right_free_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_other|bean|reps_core_sb_right_image_link|form';
  $field_group->group_name = 'group_reps_rightcol_other';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_image_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '3',
    'children' => array(
      0 => 'revision',
      1 => 'view_mode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-rightcol-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_rightcol_other|bean|reps_core_sb_right_image_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_position|bean|reps_core_sb_right_blue_button|form';
  $field_group->group_name = 'group_reps_rightcol_position';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_blue_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position',
    'weight' => '2',
    'children' => array(
      0 => 'field_reps_rightcol_position',
      1 => 'field_reps_rightcol_weight',
      2 => 'field_reps_core_node_reference',
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
  $field_groups['group_reps_rightcol_position|bean|reps_core_sb_right_blue_button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_position|bean|reps_core_sb_right_free_content|form';
  $field_group->group_name = 'group_reps_rightcol_position';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_free_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position',
    'weight' => '2',
    'children' => array(
      0 => 'field_reps_rightcol_position',
      1 => 'field_reps_rightcol_weight',
      2 => 'field_reps_core_node_reference',
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
  $field_groups['group_reps_rightcol_position|bean|reps_core_sb_right_free_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_rightcol_position|bean|reps_core_sb_right_image_link|form';
  $field_group->group_name = 'group_reps_rightcol_position';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'reps_core_sb_right_image_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position',
    'weight' => '2',
    'children' => array(
      0 => 'field_reps_rightcol_position',
      1 => 'field_reps_rightcol_weight',
      2 => 'field_reps_core_node_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Position',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-reps-rightcol-position field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_reps_rightcol_position|bean|reps_core_sb_right_image_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_slide_footer_content|node|reps_slide_footer|form';
  $field_group->group_name = 'group_reps_slide_footer_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_slide_footer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_reps_core_external_url',
      2 => 'field_reps_core_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-slide-footer-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_slide_footer_content|node|reps_slide_footer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reps_slide_hp_content|node|reps_slide_homepage|form';
  $field_group->group_name = 'group_reps_slide_hp_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reps_slide_homepage';
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
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reps-slide-hp-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_reps_slide_hp_content|node|reps_slide_homepage|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('More Info');
  t('Other');
  t('Position');
  t('Related Content');

  return $field_groups;
}
