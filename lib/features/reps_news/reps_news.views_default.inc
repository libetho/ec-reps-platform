<?php

/**
 * @file
 * reps_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reps_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reps_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'REPS categories';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['label'] = '';
  $handler->display->display_options['fields']['name_field_et']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'reps_news_categories' => 'reps_news_categories',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name_field_et' => 'name_field_et',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['reps_categories'] = $view;

  $view = new view();
  $view->name = 'reps_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REPS News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['css_class'] = 'page-news';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_core_date']['id'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['table'] = 'field_data_field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['field'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_date']['element_class'] = 'label label-default label-small';
  $handler->display->display_options['fields']['field_reps_core_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'reps_news' => 'reps_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Home page news block */
  $handler = $view->new_display('block', 'Home page news block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-news';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More news';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity translation: Image: translated */
  $handler->display->display_options['fields']['field_reps_core_image_et']['id'] = 'field_reps_core_image_et';
  $handler->display->display_options['fields']['field_reps_core_image_et']['table'] = 'field_data_field_reps_core_image';
  $handler->display->display_options['fields']['field_reps_core_image_et']['field'] = 'field_reps_core_image_et';
  $handler->display->display_options['fields']['field_reps_core_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_image_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_image_et']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_reps_core_image_et']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: Linked title */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['ui_name'] = 'Linked title';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field_et']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Plain text title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'Plain text title';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['alter']['text'] = '<h3><a href="[field_reps_core_external_url-url]" target="_blank">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['empty'] = '[title_field_et]';
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_core_date']['id'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['table'] = 'field_data_field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['field'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_date']['element_class'] = 'label label-default label-small';
  $handler->display->display_options['fields']['field_reps_core_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_date']['settings'] = array(
    'format_type' => 'event_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'reps_news' => 'reps_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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

  /* Display: RSS News */
  $handler = $view->new_display('feed', 'RSS News', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['display_description'] = 'RSS including news listing for Follow us block';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'field_reps_core_external_url';
  $handler->display->display_options['row_options']['description_field'] = 'field_reps_core_abstract';
  $handler->display->display_options['row_options']['creator_field'] = 'name';
  $handler->display->display_options['row_options']['date_field'] = 'field_reps_core_date_1';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_plain';
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['preserve_tags'] = '<p><a><b><strong><i><em><br>';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_core_date_1']['id'] = 'field_reps_core_date_1';
  $handler->display->display_options['fields']['field_reps_core_date_1']['table'] = 'field_data_field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date_1']['field'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_date_1']['settings'] = array(
    'format_type' => 'event_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['path'] = 'news.rss';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: All news listing */
  $handler = $view->new_display('block', 'All news listing', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Plain text title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'Plain text title';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Linked Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Linked Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['alter']['text'] = '<h3><a href="[field_reps_core_external_url-url]" target="_blank">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_core_date']['id'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['table'] = 'field_data_field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['field'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_date']['element_class'] = 'label label-default label-small';
  $handler->display->display_options['fields']['field_reps_core_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_date']['settings'] = array(
    'format_type' => 'event_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_reps_news_category']['id'] = 'field_reps_news_category';
  $handler->display->display_options['fields']['field_reps_news_category']['table'] = 'field_data_field_reps_news_category';
  $handler->display->display_options['fields']['field_reps_news_category']['field'] = 'field_reps_news_category';
  $handler->display->display_options['fields']['field_reps_news_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_reps_news_category']['delta_offset'] = '0';
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
    'reps_news' => 'reps_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Category (field_reps_news_category) */
  $handler->display->display_options['filters']['field_reps_news_category_target_id']['id'] = 'field_reps_news_category_target_id';
  $handler->display->display_options['filters']['field_reps_news_category_target_id']['table'] = 'field_data_field_reps_news_category';
  $handler->display->display_options['filters']['field_reps_news_category_target_id']['field'] = 'field_reps_news_category_target_id';
  $handler->display->display_options['filters']['field_reps_news_category_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reps_news_category_target_id']['expose']['operator_id'] = 'field_reps_news_category_target_id_op';
  $handler->display->display_options['filters']['field_reps_news_category_target_id']['expose']['operator'] = 'field_reps_news_category_target_id_op';
  $handler->display->display_options['filters']['field_reps_news_category_target_id']['expose']['identifier'] = 'field_reps_news_category_target_id';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['remove_score'] = TRUE;

  /* Display: RSS Newsletter */
  $handler = $view->new_display('feed', 'RSS Newsletter', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['display_description'] = 'RSS including news listing for Follow us block';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'field_reps_core_abstract';
  $handler->display->display_options['row_options']['creator_field'] = 'name';
  $handler->display->display_options['row_options']['date_field'] = 'field_reps_core_date_1';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_reps_core_external_url']['id'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['table'] = 'field_data_field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['field'] = 'field_reps_core_external_url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_reps_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reps_core_external_url']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_reps_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_reps_core_external_url']['type'] = 'link_plain';
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['preserve_tags'] = '<p><a><b><strong><i><em><br>';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_core_date_1']['id'] = 'field_reps_core_date_1';
  $handler->display->display_options['fields']['field_reps_core_date_1']['table'] = 'field_data_field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date_1']['field'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_date_1']['settings'] = array(
    'format_type' => 'event_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['path'] = 'newsletter.rss';
  $handler->display->display_options['sitename_title'] = 0;
  $export['reps_news'] = $view;

  return $export;
}
