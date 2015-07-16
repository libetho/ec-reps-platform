<?php
/**
 * @file
 * reps_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reps_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reps_bean_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'REPS bean blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'bean-right';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reps_core_sb_right_free_content' => 'reps_core_sb_right_free_content',
    'reps_core_sb_right_image_link' => 'reps_core_sb_right_image_link',
  );
  /* Filter criterion: Block: Position (field_reps_rightcol_position) */
  $handler->display->display_options['filters']['field_reps_rightcol_position_value']['id'] = 'field_reps_rightcol_position_value';
  $handler->display->display_options['filters']['field_reps_rightcol_position_value']['table'] = 'field_data_field_reps_rightcol_position';
  $handler->display->display_options['filters']['field_reps_rightcol_position_value']['field'] = 'field_reps_rightcol_position_value';
  $handler->display->display_options['filters']['field_reps_rightcol_position_value']['value'] = array(
    1 => '1',
  );

  /* Display: Right column top */
  $handler = $view->new_display('block', 'Right column top', 'block');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Block: Weight (field_reps_rightcol_weight) */
  $handler->display->display_options['sorts']['field_reps_rightcol_weight_value']['id'] = 'field_reps_rightcol_weight_value';
  $handler->display->display_options['sorts']['field_reps_rightcol_weight_value']['table'] = 'field_data_field_reps_rightcol_weight';
  $handler->display->display_options['sorts']['field_reps_rightcol_weight_value']['field'] = 'field_reps_rightcol_weight_value';

  /* Display: Homepage Quicklinks */
  $handler = $view->new_display('block', 'Homepage Quicklinks', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'bean-quicklinks';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity translation: Image: translated */
  $handler->display->display_options['fields']['field_reps_core_image_et']['id'] = 'field_reps_core_image_et';
  $handler->display->display_options['fields']['field_reps_core_image_et']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image_et']['field'] = 'field_reps_core_image_et';
  $handler->display->display_options['fields']['field_reps_core_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image_et']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image_et']['settings'] = array(
    'image_style' => 'quicklinks_homepage__83x76_',
    'image_link' => '',
  );
  /* Field: Target node */
  $handler->display->display_options['fields']['field_reps_core_node_reference']['id'] = 'field_reps_core_node_reference';
  $handler->display->display_options['fields']['field_reps_core_node_reference']['table'] = 'field_data_field_reps_core_node_reference';
  $handler->display->display_options['fields']['field_reps_core_node_reference']['field'] = 'field_reps_core_node_reference';
  $handler->display->display_options['fields']['field_reps_core_node_reference']['ui_name'] = 'Target node';
  $handler->display->display_options['fields']['field_reps_core_node_reference']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_node_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_node_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_node_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_reps_core_node_reference']['settings'] = array(
    'view_mode' => 'token',
    'links' => 1,
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = 'node/[field_reps_core_node_reference]';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  /* Field: Entity translation: Abstract: translated */
  $handler->display->display_options['fields']['field_reps_core_abstract_et']['id'] = 'field_reps_core_abstract_et';
  $handler->display->display_options['fields']['field_reps_core_abstract_et']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract_et']['field'] = 'field_reps_core_abstract_et';
  $handler->display->display_options['fields']['field_reps_core_abstract_et']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_abstract_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reps_core_quicklinks' => 'reps_core_quicklinks',
  );

  /* Display: Right column bottom */
  $handler = $view->new_display('block', 'Right column bottom', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Block: Weight (field_reps_rightcol_weight) */
  $handler->display->display_options['sorts']['field_reps_rightcol_weight_value']['id'] = 'field_reps_rightcol_weight_value';
  $handler->display->display_options['sorts']['field_reps_rightcol_weight_value']['table'] = 'field_data_field_reps_rightcol_weight';
  $handler->display->display_options['sorts']['field_reps_rightcol_weight_value']['field'] = 'field_reps_rightcol_weight_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reps_core_sb_right_free_content' => 'reps_core_sb_right_free_content',
    'reps_core_sb_right_image_link' => 'reps_core_sb_right_image_link',
  );
  /* Filter criterion: Block: Position (field_reps_rightcol_position) */
  $handler->display->display_options['filters']['field_reps_rightcol_position_value']['id'] = 'field_reps_rightcol_position_value';
  $handler->display->display_options['filters']['field_reps_rightcol_position_value']['table'] = 'field_data_field_reps_rightcol_position';
  $handler->display->display_options['filters']['field_reps_rightcol_position_value']['field'] = 'field_reps_rightcol_position_value';
  $handler->display->display_options['filters']['field_reps_rightcol_position_value']['value'] = array(
    0 => '0',
  );
  $export['reps_bean_blocks'] = $view;

  $view = new view();
  $view->name = 'reps_contact_points';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REPS Contact Points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reps_cp_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: default instance */
  $handler->display->display_options['fields']['field_reps_cp_type']['id'] = 'field_reps_cp_type';
  $handler->display->display_options['fields']['field_reps_cp_type']['table'] = 'field_data_field_reps_cp_type';
  $handler->display->display_options['fields']['field_reps_cp_type']['field'] = 'field_reps_cp_type';
  $handler->display->display_options['fields']['field_reps_cp_type']['label'] = '';
  $handler->display->display_options['fields']['field_reps_cp_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_cp_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_cp_type']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reps_contact_point' => 'reps_contact_point',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact points in Malta';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_reps_cp_gcoordinates';
  $handler->display->display_options['style_options']['tile_layer'] = array(
    'tile_layer' => 'osmec',
  );
  $handler->display->display_options['style_options']['height'] = array(
    'height' => '430',
  );
  $handler->display->display_options['style_options']['center']['lat'] = '50.84';
  $handler->display->display_options['style_options']['center']['lon'] = '4.36';
  $handler->display->display_options['style_options']['popup']['show'] = 1;
  $handler->display->display_options['style_options']['popup']['popin'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '2';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '2';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '12';
  $handler->display->display_options['style_options']['icon']['icon'] = 'blue';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Geographic Coordinates */
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['id'] = 'field_reps_cp_gcoordinates';
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['table'] = 'field_data_field_reps_cp_gcoordinates';
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['field'] = 'field_reps_cp_gcoordinates';
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['ui_name'] = 'Geographic Coordinates';
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['label'] = '';
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_reps_cp_gcoordinates']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reps_contact_point' => 'reps_contact_point',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contact point type */
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['id'] = 'field_reps_cp_type_tid';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['table'] = 'field_data_field_reps_cp_type';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['field'] = 'field_reps_cp_type_tid';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['ui_name'] = 'Contact point type';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['expose']['operator_id'] = 'field_reps_cp_type_tid_op';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['expose']['operator'] = 'field_reps_cp_type_tid_op';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['expose']['identifier'] = 'field_reps_cp_type_tid';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_reps_cp_type_tid']['vocabulary'] = 'reps_contact_point_categories';
  $handler->display->display_options['path'] = 'services/contact-points';

  /* Display: Content */
  $handler = $view->new_display('block', 'Content', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mapeditor_map' => 'mapeditor_map',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['reps_contact_points'] = $view;

  $view = new view();
  $view->name = 'reps_sliders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REPS Sliders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'slider-homepage';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_options']['optionset'] = 'reps_homepage_flexslider';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'slider_homepage__342_x_272_',
    'image_link' => '',
  );
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_absolute';
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[field_reps_core_external_url]';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reps_slide_footer' => 'reps_slide_footer',
    'reps_slide_homepage' => 'reps_slide_homepage',
  );

  /* Display: Slider Homepage */
  $handler = $view->new_display('block', 'Slider Homepage', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Small image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['ui_name'] = 'Small image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'slider_homepage__342_x_272_',
    'image_link' => '',
  );
  /* Field: Large image */
  $handler->display->display_options['fields']['field_reps_core_image_1']['id'] = 'field_reps_core_image_1';
  $handler->display->display_options['fields']['field_reps_core_image_1']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image_1']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image_1']['ui_name'] = 'Large image';
  $handler->display->display_options['fields']['field_reps_core_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image_1']['settings'] = array(
    'image_style' => 'slide_homepage_large__719x265_',
    'image_link' => '',
  );
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_absolute';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_core_date']['id'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['table'] = 'field_data_field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['field'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[field_reps_core_external_url]';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="sliderImgSmall">[field_reps_core_image]
<div class="sliderContent">
<p class="sliderTitle"><a href="[field_reps_core_external_url]" target="_blank">[title_field_et]</a></p>
[body]
</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '<div class="sliderImgLarge">[field_reps_core_image_1]
<div class="content">
<p class="sliderDate">[field_reps_core_date]</p>
<p class="sliderTitle"><a href="[field_reps_core_external_url]" target="_blank">[title_field_et]</a></p>
</div>
</div>';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reps_slide_homepage' => 'reps_slide_homepage',
  );

  /* Display: Slider Footer */
  $handler = $view->new_display('block', 'Slider Footer', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'reps_footer_flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_absolute';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_image']['alter']['text'] = '<a href="[field_reps_core_external_url]">[field_reps_core_image]</a>';
  $handler->display->display_options['fields']['field_reps_core_image']['alter']['path'] = '[field_reps_core_external_url]';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'slider_footer__150x83_',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reps_slide_footer' => 'reps_slide_footer',
  );
  $export['reps_sliders'] = $view;

  return $export;
}
