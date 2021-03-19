<?php

/**
 * @file
 * reps_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reps_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reps_bean_block_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Reps - Bean Block Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Bean Block Overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view bean page';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40, 50, 60';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'label' => 'label',
    'delta' => 'delta',
    'type' => 'type',
    'operations' => 'operations',
    'delete_block' => 'operations',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delta' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'operations' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_block' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Block: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bean';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  /* Field: Block: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bean';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Block: Contextual / Operation links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'bean';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = 'Operations';
  $handler->display->display_options['fields']['operations']['add_destination'] = 0;
  /* Field: Block: Delete link */
  $handler->display->display_options['fields']['delete_block']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_block']['table'] = 'bean';
  $handler->display->display_options['fields']['delete_block']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_block']['label'] = '';
  $handler->display->display_options['fields']['delete_block']['element_label_colon'] = FALSE;
  /* Field: Block: Weight */
  $handler->display->display_options['fields']['field_reps_rightcol_weight']['id'] = 'field_reps_rightcol_weight';
  $handler->display->display_options['fields']['field_reps_rightcol_weight']['table'] = 'field_data_field_reps_rightcol_weight';
  $handler->display->display_options['fields']['field_reps_rightcol_weight']['field'] = 'field_reps_rightcol_weight';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;

  /* Display: Bean Block List */
  $handler = $view->new_display('page', 'Bean Block List', 'admin_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/blocks';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Blocks';
  $handler->display->display_options['menu']['description'] = 'Bean blocks overview';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['reps_bean_block_overview'] = $view;

  $view = new view();
  $view->name = 'reps_csv_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reps - CSV export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News - CSV Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Recherche';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_reps_core_date']['id'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['table'] = 'field_data_field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['field'] = 'field_reps_core_date';
  $handler->display->display_options['fields']['field_reps_core_date']['settings'] = array(
    'format_type' => 'event_date_format',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'event_date_format';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'event_date_format';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_reps_news_category']['id'] = 'field_reps_news_category';
  $handler->display->display_options['fields']['field_reps_news_category']['table'] = 'field_data_field_reps_news_category';
  $handler->display->display_options['fields']['field_reps_news_category']['field'] = 'field_reps_news_category';
  $handler->display->display_options['fields']['field_reps_news_category']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_reps_news_category']['delta_offset'] = '0';
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_reps_core_abstract']['id'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['table'] = 'field_data_field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['field'] = 'field_reps_core_abstract';
  $handler->display->display_options['fields']['field_reps_core_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_reps_core_abstract']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_reps_core_abstract']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Language(s)';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Filter criterion: Content: Published status */
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

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'csv-export/news';
  $handler->display->display_options['sitename_title'] = 0;
  $export['reps_csv_export'] = $view;

  return $export;
}
