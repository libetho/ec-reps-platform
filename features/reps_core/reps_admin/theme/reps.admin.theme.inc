<?php

/**
 * @file
 * Theme functions for the REPS admin interface.
 */

/**
 * Theme function.
 */
function theme_reps_admin_social($variables) {
  $form = $variables['form'];
  $rows = array();

  foreach (element_children($form['social_media']) as $element) {
    $rows[] = array(
      'data' => array(
        drupal_render($form['social_media'][$element]),
        drupal_render($form['social_media'][$element]['platform_value']),
        drupal_render($form['social_media'][$element]['weight']),
      ),
      'class' => array('draggable'),
    );
  }

  $header = array(t('Social network'), t('url'), t('position'));
  $table_id = 'social-links-order';
  $output = theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array('id' => $table_id),
  ));

  $output .= drupal_render_children($form);

  drupal_add_tabledrag('social-links-order', 'order', 'sibling', 'social-links-weight');

  return $output;
}

/**
 * Theme function.
 */
function theme_reps_admin_menu($variables) {
  $form = $variables['form'];
  $rows = array();
  $output = '';
  $check = element_children($form['items']);
  if (!empty($check)) {
    $i = 0;
    foreach (element_children($form['items']) as $parent) {
      $rows = array();
      if (!empty($form['items'][$parent]['children'])) {
        foreach (element_children($form['items'][$parent]['children']) as $child) {
          $rows[] = array(
            'data' => array(
              drupal_render($form['items'][$parent]['children'][$child]['link_title']),
              drupal_render($form['items'][$parent]['children'][$child]['link_path']),
              drupal_render($form['items'][$parent]['children'][$child]['translate']),
              drupal_render($form['items'][$parent]['children'][$child]['delete']),
              drupal_render($form['items'][$parent]['children'][$child]['weight']),
            ),
            'class' => array('draggable'),
          );
        }

        $header = array(
          t('Menu item'),
          t('path'),
          t('translate'),
          t('delete'),
          t('Position'),
        );
        $table_id = 'menu-links-order-' . $i;
        $output = theme('table', array(
          'header' => $header,
          'rows' => $rows,
          'attributes' => array('id' => $table_id),
        ));

        drupal_add_tabledrag($table_id, 'order', 'sibling', 'reps-menu-weight', NULL, NULL, FALSE);
        $i++;

        $form['items'][$parent]['children'] = array(
          '#markup' => $output,
        );
      }
      else {
        $form['items'][$parent]['add-item'] = array(
          '#type' => 'link',
          '#href' => 'admin/config/reps/menu/' . $parent . '/add',
          '#title' => t('Create a menu item in this section'),
        );
      }
    }
  }
  return drupal_render_children($form);
}
