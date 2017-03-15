<?php

/**
 * @file
 * Reps_events.views_default.inc.
 */

/**
 * Implements hook_views_default_views().
 */
function reps_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reps_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REPS Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['css_class'] = 'page-events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: external link */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['ui_name'] = 'external link';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_absolute';
  /* Field: title not linked */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'title not linked';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['id'] = 'field_reps_core_external_url_1';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['alter']['text'] = '<h3><a href="[field_reps_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['click_sort_column'] = 'url';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_event_date']['id'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['field'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['text'] = '<div class="text-muted">[field_reps_event_date]</div>';
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_event_date_1']['id'] = 'field_reps_event_date_1';
  $handler->display->display_options['fields']['field_reps_event_date_1']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date_1']['field'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_reps_event_date_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date -  start date (field_reps_event_date) */
  $handler->display->display_options['sorts']['field_reps_event_date_value']['id'] = 'field_reps_event_date_value';
  $handler->display->display_options['sorts']['field_reps_event_date_value']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['sorts']['field_reps_event_date_value']['field'] = 'field_reps_event_date_value';
  $handler->display->display_options['sorts']['field_reps_event_date_value']['order'] = 'DESC';
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
    'reps_event' => 'reps_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_reps_event_date) */
  $handler->display->display_options['filters']['field_reps_event_date_value']['id'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['filters']['field_reps_event_date_value']['field'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_reps_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: title not linked */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'title not linked';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: external url */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['ui_name'] = 'external url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_absolute';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['id'] = 'field_reps_core_external_url_1';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['alter']['text'] = '<h3><a href="[field_reps_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['click_sort_column'] = 'url';
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_event_date']['id'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['field'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['text'] = '<div class="text-muted">[field_reps_event_date]</div>';
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_reps_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_reps_event_date']['multi_type'] = 'ul';
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_reps_event_venue']['id'] = 'field_reps_event_venue';
  $handler->display->display_options['fields']['field_reps_event_venue']['table'] = 'field_data_field_reps_event_venue';
  $handler->display->display_options['fields']['field_reps_event_venue']['field'] = 'field_reps_event_venue';
  $handler->display->display_options['fields']['field_reps_event_venue']['empty'] = '[field_reps_event_location]';
  $handler->display->display_options['fields']['field_reps_event_venue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_venue']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date -  start date (field_reps_event_date) */
  $handler->display->display_options['sorts']['field_reps_event_date_value']['id'] = 'field_reps_event_date_value';
  $handler->display->display_options['sorts']['field_reps_event_date_value']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['sorts']['field_reps_event_date_value']['field'] = 'field_reps_event_date_value';
  $handler->display->display_options['sorts']['field_reps_event_date_value']['order'] = 'DESC';
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
    'reps_event' => 'reps_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_reps_event_date) */
  $handler->display->display_options['filters']['field_reps_event_date_value']['id'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['filters']['field_reps_event_date_value']['field'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_reps_event_date_value']['default_date'] = 'now';

  /* Display: Upcoming events listing */
  $handler = $view->new_display('block', 'Upcoming events listing', 'upcoming_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: title not linked */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'title not linked';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: external url */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['ui_name'] = 'external url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_absolute';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['id'] = 'field_reps_core_external_url_1';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['alter']['text'] = '<h3><a href="[field_reps_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['click_sort_column'] = 'url';
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_event_date']['id'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['field'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['text'] = '<div class="text-muted">[field_reps_event_date]</div>';
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_reps_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_reps_event_date']['multi_type'] = 'ul';
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
    'reps_event' => 'reps_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_reps_event_date) */
  $handler->display->display_options['filters']['field_reps_event_date_value']['id'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['filters']['field_reps_event_date_value']['field'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_reps_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reps_event_date_value']['default_date'] = 'now';

  /* Display: Past events listing */
  $handler = $view->new_display('block', 'Past events listing', 'past_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: title not linked */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'title not linked';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: external url */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['ui_name'] = 'external url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_absolute';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['id'] = 'field_reps_core_external_url_1';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['alter']['text'] = '<h3><a href="[field_reps_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url_1']['click_sort_column'] = 'url';
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_event_date']['id'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['field'] = 'field_reps_event_date';
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['text'] = '<div class="text-muted">[field_reps_event_date]</div>';
  $handler->display->display_options['fields']['field_reps_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_reps_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_reps_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_reps_event_date']['multi_type'] = 'ul';
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
    'reps_event' => 'reps_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_reps_event_date) */
  $handler->display->display_options['filters']['field_reps_event_date_value']['id'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['filters']['field_reps_event_date_value']['field'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_reps_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reps_event_date_value']['default_date'] = 'now';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title_field';
  $handler->display->display_options['row_options']['link_field'] = 'field_reps_core_external_url';
  $handler->display->display_options['row_options']['description_field'] = 'field_reps_core_abstract';
  $handler->display->display_options['row_options']['creator_field'] = 'name';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_plain';
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['type'] = 'text_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'event_date_format';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'event_date_format';
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
    'reps_event' => 'reps_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_reps_event_date) */
  $handler->display->display_options['filters']['field_reps_event_date_value']['id'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['table'] = 'field_data_field_reps_event_date';
  $handler->display->display_options['filters']['field_reps_event_date_value']['field'] = 'field_reps_event_date_value';
  $handler->display->display_options['filters']['field_reps_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_reps_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_reps_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'events.rss';
  $export['reps_events'] = $view;

  return $export;
}
