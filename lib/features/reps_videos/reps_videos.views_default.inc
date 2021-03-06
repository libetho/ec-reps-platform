<?php

/**
 * @file
 * Reps_videos.views_default.inc.
 */

/**
 * Implements hook_views_default_views().
 */
function reps_videos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reps_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REPS videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['css_class'] = 'page-videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'videos' => 'videos',
    'homepage_additional_block' => 0,
    'slider_footer' => 0,
    'slider_homepage' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'video_thumbs__209x156_',
    'image_link' => 'content',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'reps_video' => 'reps_video',
  );
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Video';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity translation: Link: translated */
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['id'] = 'field_reps_core_external_url_et';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['field'] = 'field_reps_core_external_url_et';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['type'] = 'link_plain';
  /* Field: Entity translation: Image: translated */
  $handler->display->display_options['fields']['field_reps_core_image_et']['id'] = 'field_reps_core_image_et';
  $handler->display->display_options['fields']['field_reps_core_image_et']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image_et']['field'] = 'field_reps_core_image_et';
  $handler->display->display_options['fields']['field_reps_core_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image_et']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image_et']['settings'] = array(
    'image_style' => 'thumb_videos__209x156_',
    'image_link' => '',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[field_reps_core_external_url_et]';
  $handler->display->display_options['fields']['title_field_et']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
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
    'reps_video' => 'reps_video',
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
  $handler->display->display_options['path'] = 'news/videos';
  $handler->display->display_options['menu']['title'] = 'Videos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-videos';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More videos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity translation: Link: translated */
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['id'] = 'field_reps_core_external_url_et';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['field'] = 'field_reps_core_external_url_et';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url_et']['type'] = 'link_plain';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image']['id'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image']['settings'] = array(
    'image_style' => 'thumb_videos__209x156_',
    'image_link' => '',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['alter']['text'] = '<a href="[path]" title="[title_field_et]" target="_blank">[title_field_et]</a>';
  $handler->display->display_options['fields']['title_field_et']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[field_reps_core_external_url_et]';
  $handler->display->display_options['fields']['title_field_et']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
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
    'reps_video' => 'reps_video',
  );
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Block Full listing */
  $handler = $view->new_display('block', 'Block Full listing', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_plain';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_reps_core_image_1']['id'] = 'field_reps_core_image_1';
  $handler->display->display_options['fields']['field_reps_core_image_1']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image_1']['field'] = 'field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image_1']['settings'] = array(
    'image_style' => 'thumb_videos__209x156_',
    'image_link' => '',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '[field_reps_core_external_url]';
  $handler->display->display_options['fields']['title_field']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  $export['reps_videos'] = $view;

  return $export;
}
