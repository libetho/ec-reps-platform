<?php

/**
 * @file
 * reps_myths.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reps_myths_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reps_eu_myth';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REPS EU Myth';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'thumbs_events_listing__width__250px_',
    'image_link' => 'content',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_abstract']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_reps_core_date) */
  $handler->display->display_options['sorts']['field_reps_core_date_value']['id'] = 'field_reps_core_date_value';
  $handler->display->display_options['sorts']['field_reps_core_date_value']['table'] = 'field_data_field_reps_core_date';
  $handler->display->display_options['sorts']['field_reps_core_date_value']['field'] = 'field_reps_core_date_value';
  $handler->display->display_options['sorts']['field_reps_core_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'reps_eu_myth' => 'reps_eu_myth',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'myths';
  $export['reps_eu_myth'] = $view;

  return $export;
}
