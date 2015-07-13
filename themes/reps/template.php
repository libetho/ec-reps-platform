<?php
/**
 * @file
 * Code for the reps theme.
 */

/**
 * Implements theme_preprocess_page().
 */
function reps_preprocess_page(&$variables) {
  $title = drupal_get_title();

  // Format regions.
  $regions = array();
  $regions['header_right'] = (isset($variables['page']['header_right']) ? render($variables['page']['header_right']) : '');
  $regions['header_top'] = (isset($variables['page']['header_top']) ? render($variables['page']['header_top']) : '');
  $regions['featured'] = (isset($variables['page']['featured']) ? render($variables['page']['featured']) : '');
  $regions['sidebar_left'] = (isset($variables['page']['sidebar_left']) ? render($variables['page']['sidebar_left']) : '');
  $regions['tools'] = (isset($variables['page']['tools']) ? render($variables['page']['tools']) : '');
  $regions['content_top'] = (isset($variables['page']['content_top']) ? render($variables['page']['content_top']) : '');
  $regions['help'] = (isset($variables['page']['help']) ? render($variables['page']['help']) : '');
  $regions['content'] = (isset($variables['page']['content']) ? render($variables['page']['content']) : '');
  $regions['content_right'] = (isset($variables['page']['content_right']) ? render($variables['page']['content_right']) : '');
  $regions['content_bottom'] = (isset($variables['page']['content_bottom']) ? render($variables['page']['content_bottom']) : '');
  $regions['sidebar_right'] = (isset($variables['page']['sidebar_right']) ? render($variables['page']['sidebar_right']) : '');
  $regions['footer'] = (isset($variables['page']['footer']) ? render($variables['page']['footer']) : '');

  // Check if there is a responsive sidebar or not.
  $has_responsive_sidebar = 0;

  // Calculate size of regions.
  $cols = array();
  // Sidebars.
  $cols['sidebar_left'] = array(
    'lg' => (!empty($regions['sidebar_left']) ? 3 : 0),
    'md' => (!empty($regions['sidebar_left']) ? 4 : 0),
    'sm' => 0,
    'xs' => 0,
  );
  $cols['sidebar_right'] = array(
    'lg' => (!empty($regions['sidebar_right']) ? 3 : 0),
    'md' => (!empty($regions['sidebar_right']) ? 3 : 0),
    'sm' => (!empty($regions['sidebar_right']) ? 4 : 0),
    'xs' => 12,
  );

  // Content.
  $cols['content_main'] = array(
    'lg' => 12 - $cols['sidebar_left']['lg'] - $cols['sidebar_right']['lg'],
    'md' => 12 - $cols['sidebar_left']['md'] - $cols['sidebar_right']['md'],
    'sm' => 12 - $cols['sidebar_left']['sm'] - $cols['sidebar_right']['sm'],
    'xs' => 12,
  );
  $cols['content_right'] = array(
    'lg' => (!empty($regions['content_right']) ? 6 : 0),
    'md' => (!empty($regions['content_right']) ? 6 : 0),
    'sm' => (!empty($regions['content_right']) ? 12 : 0),
    'xs' => (!empty($regions['content_right']) ? 12 : 0),
  );
  $cols['content'] = array(
    'lg' => 12 - $cols['content_right']['lg'],
    'md' => 12 - $cols['content_right']['md'],
    'sm' => 12,
    'xs' => 12,
  );

  // Tools.
  $cols['sidebar_button'] = array(
    'sm' => ($has_responsive_sidebar ? 2 : 0),
    'xs' => ($has_responsive_sidebar ? 2 : 0),
  );
  $cols['tools'] = array(
    'lg' => (empty($title) ? 12 : 4),
    'md' => (empty($title) ? 12 : 4),
    'sm' => 12,
    'xs' => 12,
  );

  // Title.
  $cols['title'] = array(
    'lg' => 12 - $cols['tools']['lg'],
    'md' => 12 - $cols['tools']['md'],
    'sm' => 12,
    'xs' => 12,
  );

  // Add variables to template file.
  $variables['regions'] = $regions;
  $variables['cols'] = $cols;
  $variables['has_responsive_sidebar'] = $has_responsive_sidebar;

  // Adding pathToTheme for Drupal.settings to be used in js files.
  $base_theme = multisite_drupal_toolbox_get_base_theme();
  drupal_add_js('jQuery.extend(Drupal.settings, { "pathToTheme": "' . drupal_get_path('theme', $base_theme) . '" });', 'inline');
}

/**
 * Implements theme_menu_link().
 */
function reps_menu_link($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  // Test if there is a sub menu.
  if ($element['#below'] && !theme_get_setting('disable_dropdown_menu') && !in_array('dropdown', $element['#attributes']['class'])) {
    // Menu item has sub menu.

    // Add carret and class.
    $element['#title'] .= '<span><b class="caret"></b></span>';
    $element['#attributes']['class'][] = 'dropdown';

    // Add attributes to children items.
    $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
    $element['#localized_options']['attributes']['data-toggle'][] = 'dropdown';

    // Render sub menu.
    $sub_menu = drupal_render($element['#below']);

    // Add CSS class to ul tag
    // Dirty, but I see no better way to do it.
    $sub_menu = str_replace('<ul class="', '<ul class="dropdown-menu ', $sub_menu);
  }

  $element['#localized_options']['html'] = TRUE;
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implements theme_preprocess_block().
 *
 * Remove unused block ipg info (just keep the date and the top link).
 */
function reps_preprocess_block(&$vars) {
  if ($vars['block']->bid === 'cce_basic_config-footer_ipg') {
    $pos = strpos($vars['content'], "<ul");
    $vars['content'] = substr($vars['content'], 0, ($pos - 3));
  }
}

/**
 * Implements hook_form_alter().
 *
 * Change the label of the first option of the exposed filter select box.
 */
function reps_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'views_exposed_form') {
    $form['field_reps_news_category_tid']['#options']['All'] = '- ' . t('Choose a category') . ' -';
  }
}

/**
 * Implements reps_preprocess_views_view_unformatted().
 *
 * Add grouping div to the rendering of the unformated views.
 */
function reps_preprocess_views_view_unformatted(&$vars) {

  $vars['prefix'] = array();
  $vars['suffix'] = array();
  $group = 1;
  $last_row = count($vars['rows']) - 1;

  foreach ($vars['rows'] as $id => &$row) {

    $vars['prefix'][$id] = '';
    $vars['suffix'][$id] = '';

    // Apply modular arithmetic.
    $remainder = $id % 3;

    // First div => 3 items.
    if ($remainder == 0) {
      $vars['prefix'][$id] = "<div class=\"group group-$group\">";
    }

    if ($remainder == 2) {
      $vars['suffix'][$id] = '<div class="clearfix"></div></div>';
      $group++;
    }

    // Close the div in case there are not enough items.
    if ($last_row == $id && $remainder != 2 && $remainder != 8) {
      $vars['suffix'][$id] = '</div>';
    }
  }
}

/**
 * Implements reps_js_alter().
 */
function reps_js_alter(&$javascript) {
  unset($javascript['sites/reps/modules/contrib/ckeditor_tabber/semantic-tabs.js']);
  drupal_add_js('sites/reps/themes/reps/scripts/reps_tabber.js');
}

/**
 * Implements reps_alter-page().
 */
function reps_page_alter($page){

  // Reference.
  $meta_reference = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'reference',
      'content' => filter_xss(variable_get('meta_reference')),
    ),
  );
  drupal_add_html_head($meta_reference, 'meta_reference');

  // Creator.
  $meta_creator = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'creator',
      'content' =>  filter_xss(variable_get('meta_creator')),
    ),
  );
  drupal_add_html_head($meta_creator, 'meta_creator');
}
