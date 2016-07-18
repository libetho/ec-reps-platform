<?php

/**
 * @file
 * Code for the reps theme.
 */

/**
 * Implements theme_preprocess_html().
 */
function reps_preprocess_html(&$variables) {
  if (empty(page_title_page_get_title())) {
    $title = strip_tags(drupal_get_title());
  }
  else {
    $title = page_title_page_get_title();
  }
  $variables['head_title'] = format_string('!title - European Commission', array('!title' => $title));
}

/**
 * Implements theme_preprocess_page().
 */
function reps_preprocess_page(&$variables) {
  if (drupal_is_front_page()) {
    $variables['is_front'] = 1;
  }

  // Change language of the image in the banner depening the current language.
  global $language;
  $variables['logo'] = base_path() . drupal_get_path('theme', 'reps') . '/images/logos/logo_' . $language->language . '.gif';

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
    'lg' => 12,
    'md' => 12,
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
  drupal_add_js('//europa.eu/webtools/load.js', 'external');
}

/**
 * Implements theme_menu_tree_main_menu().
 */
function reps_menu_tree__main_submenu($variables) {
  if (strpos($variables['tree'], 'dropdown-menu')) {
    // There is a dropdown in this tree.
    $variables['tree'] = str_replace('nav navbar-nav', 'list-group list-group-flush list-unstyled', $variables['tree']);
    return '<ul class="dropdown-menu menu clearfix nav navbar-nav">' . $variables['tree'] . '</ul>';
  }
  else {
    // There is no dropdown in this tree, simply return it in a <ul>.
    return '<span><b class="caret"></b></span><ul class="dropdown-menu menu clearfix nav navbar-nav">' . $variables['tree'] . '</ul>';
  }
}

/**
 * Implements theme_menu_tree().
 */
function reps_menu_tree__submenu($variables) {
  $classes = 'dropdown-menu menu clearfix list-group list-group-flush list-unstyled';

  return '<ul class="' . $classes . '">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_menu_link().
 */
function reps_menu_link(&$variables) {
  if ($variables['element']['#original_link']['depth'] < 3) {
    $element = $variables['element'];
    $sub_menu = '';

    // Test if there is a sub menu.
    if ($element['#below'] && !theme_get_setting('disable_dropdown_menu') && !in_array('dropdown', $element['#attributes']['class'])) {
      // Menu item has sub menu.
      // Add class.
      $element['#attributes']['class'][] = 'dropdown';

      // Add attributes to children items.
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';

      if ($element['#below']['#theme_wrappers'][0] == 'menu_tree__main_menu') {
        $element['#below']['#theme_wrappers'][0] = 'menu_tree__main_submenu';
      }
      else {
        $element['#below']['#theme_wrappers'][0] = 'menu_tree__submenu';
      }

      // Render sub menu.
      $sub_menu = drupal_render($element['#below']);
    }

    $element['#localized_options']['html'] = TRUE;
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
  }
}

/**
 * Implements theme_preprocess_node().
 *
 * Remove info about field reps_event_location (old field).
 * To force usage of the new field_reps_event venue in template (new field).
 */
function reps_preprocess_node(&$vars) {
  if ($vars['type'] == 'reps_event') {
    if ($vars['field_reps_event_venue']) {
      unset($vars['content']['field_reps_event_location']);
    }
  }
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
 * Implements hook_form_FORM_ID_alter().
 *
 * Change the label of the first option of the exposed filter select box.
 */
function reps_form_views_exposed_form_alter(&$form, $form_state, $form_id) {
  $form['field_reps_news_category_tid']['#options']['All'] = t('- Choose a category -');
}

/**
 * Implements theme_preprocess_views_view_unformatted().
 *
 * Add div to group items in the rendering of the unformated views.
 */
function reps_preprocess_views_view_unformatted(&$vars) {
  if($vars['view']->name !== 'reps_bean_blocks') {
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
}

/**
 * Implements hook_page_alter().
 *
 * Alter info in the html header to implment usage of page_title module.
 */
function reps_page_alter($page) {
  // Reference.
  $node = menu_get_object();
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
      'content' => filter_xss(variable_get('meta_creator')),
    ),
  );
  drupal_add_html_head($meta_creator, 'meta_creator');

  // Keywords.
  $keywords = '';
  if (!empty($node) && !empty($node->field_tags)) {
    $tags = field_view_field('node', $node, 'field_tags');
    if (isset($tags['#items'])) {
      foreach ($tags['#items'] as $value) {
        $keywords .= $value['taxonomy_term']->name . ', ';
      }
    }
  }
  $keywords .= filter_xss(variable_get('site_name')) . ', ';
  $keywords .= t('European Commission, European Union, EU');
  // Keywords.
  $meta_keywords = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'keywords',
      'content' => $keywords,
    ),
  );
  drupal_add_html_head($meta_keywords, 'meta_keywords');
}

/**
 * Implements theme_date_display_range().
 *
 * Returns HTML for a date element formatted as a range.
 */
function reps_date_display_range($variables) {
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];
  $show_remaining_days = $variables['show_remaining_days'];

  $start_date = '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $variables['dates']['value']['formatted_date'] . '</span>';
  $end_date = '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $variables['dates']['value2']['formatted_date'] . ' - ' . $variables['dates']['value']['formatted_time'] . ' - ' . $variables['dates']['value2']['formatted_time'] . '</span>';

  // If microdata attributes for the start date property have been passed in,
  // add the microdata in meta tags.
  if (!empty($variables['add_microdata'])) {
    $start_date .= '<meta' . drupal_attributes($variables['microdata']['value']['#attributes']) . '/>';
    $end_date .= '<meta' . drupal_attributes($variables['microdata']['value2']['#attributes']) . '/>';
  }

  // Wrap the result with the attributes.
  $output = '<div class="date-display-range">' . t('!start-date - !end-date', array(
    '!start-date' => $start_date,
    '!end-date' => $end_date,
  )) . '</div>';

  // Add remaining message and return.
  return $output . $show_remaining_days;
}

/**
 * Implements theme_preprocess_social_media_links_platform().
 *
 * Processes variables for social-media-links-platform.tpl.php.
 *
 * @see theme_social_media_links_platform()
 */
function reps_preprocess_social_media_links_platform(&$variables) {
  $info = $variables['info'];
  $name = $variables['name'];
  $value = $variables['value'];
  $icon_folder = base_path() . drupal_get_path('theme', 'reps') . '/images/social_media_links/';

  // Call the url callback of the platform to create the link url.
  $variables['link'] = $info['base url'] . $value;
  if (isset($info['url callback'])) {
    $platform_url_changed = call_user_func($info['url callback'], $info['base url'], $value);
    if ($platform_url_changed) {
      $variables['link'] = $platform_url_changed;
    }
  }

  $variables['attributes']['title'] = check_plain($info['title']);
  $variables['icon_path']  = $icon_folder . $name . '.png';
  $variables['icon_alt'] = isset($info['image alt']) ? $info['image alt'] : $info['title'] . ' ' . t('icon');
}
