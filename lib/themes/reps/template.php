<?php

/**
 * @file
 * Code for the reps theme.
 */

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
  drupal_add_js('https://ec.europa.eu/wel/surveys/wr_survey01/wr_survey.js', 'external');
}

/**
 * Implements theme_menu_tree_main_menu().
 */
function reps_menu_tree__main_submenu($variables) {
  if (strpos($variables['tree'], 'dropdown-menu')) {
    // There is a dropdown in this tree.
    $variables['tree'] = str_replace('nav navbar-nav', 'list-group list-group-flush list-unstyled', $variables['tree']);
  }
  return '<ul class="dropdown-menu menu clearfix nav navbar-nav">' . $variables['tree'] . '</ul>';
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
    $caret = '';

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
      // REPR-1878 menu broken when third level is used//.
      if ($element['#original_link']['menu_name'] === 'main-menu' && $variables['element']['#original_link']['depth'] == 1) {
        $caret = '<span><b class="caret"></b></span>';
      }

      // Render sub menu.
      $sub_menu = drupal_render($element['#below']);
    }

    $element['#localized_options']['html'] = TRUE;
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $caret . $sub_menu . "</li>\n";
  }
}

/**
 * Implements hook_preprocess_node().
 */
function reps_preprocess_node(&$variables) {

  // REPR-1538 add class when abstract is empty.
  $variables['no_abstract'] = '';
  if (empty($variables['content']['field_reps_core_abstract'])) {
    $variables['no_abstract'] = 'no-abstract';
  }
}

/**
 * Implements theme_preprocess_block().
 *
 * Remove unused block ipg info (just keep the date and the top link).
 */
function reps_preprocess_block(&$variables) {
  if (isset($variables['block']->bid)) {
    switch ($variables['block']->bid) {

      case 'locale-language':
        global $language;
        $languages = language_list();
        if (($node = menu_get_object('node'))) {
          $handler = entity_translation_get_handler('node', $node);
          $translations = $handler->getTranslations();
          foreach ($languages as $key => $link) {
            if (!isset($translations->data[$key]) || $translations->data[$key]['status'] == '0') {
              unset($languages[$key]);
            }
          }
        }

        $items = array();
        $items[] = array(
          'data' => t('<span class="off-screen"> Current language :</span> @language', array('@language' => $language->language)),
          'class' => array('selected'),
          'title' => $language->native,
          'lang' => $language->language,
        );
        // Get path of translated content.
        $translations = translation_path_get_translations(current_path());

        foreach ($languages as $language_object) {
          $prefix = $language_object->language;
          $language_name = $language_object->name;

          if (isset($translations[$prefix])) {
            $path = $translations[$prefix];
          }
          else {
            $path = current_path();
          }

          // Get the related url alias
          // Check if the multisite language negotiation
          // with suffix url is enabled.
          $language_negociation = variable_get('language_negotiation_language');
          if (isset($language_negociation['locale-url-suffix'])) {
            $alias = drupal_get_path_alias($path, $prefix);

            if ($alias == variable_get('site_frontpage', 'node')) {
              $path = ($prefix == 'en') ? '' : 'index';
            }
            else {
              if ($alias != $path) {
                $path = $alias;
              }
              else {
                $path = drupal_get_path_alias(isset($translations[$language_name]) ? $translations[$language_name] : $path, $language_name);
              }
            }
          }
          else {
            $path = drupal_get_path_alias($path, $prefix);
          }

          // Add enabled languages.
          if ($language_name != $language->name) {
            $items[] = array(
              'data' => l($language_name, filter_xss($path), array(
                'attributes' => array(
                  'hreflang' => $prefix,
                  'lang' => $prefix,
                  'title' => $language_name,
                ),
                'language' => $language_object,
              )),
            );
          }
        }

        $variables['language_list'] = theme('item_list', array('items' => $items));
        break;
    }
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
 * Implements hook_views_pre_render().
 *
 * Alter the link field to make target selectable for the homepage slider.
 */
function reps_views_pre_render(&$view) {
  if ($view->current_display == 'slider_homepage') {
    foreach ($view->result as $key => $row) {
      if (isset($row->field_field_reps_core_external_url) && isset($row->field_title_field)) {
        foreach ($row->field_field_reps_core_external_url as $k => $link) {
          $view->result[$key]->field_field_reps_core_external_url[$k]['rendered']['#element']['title'] = $row->field_title_field[0]['raw']['safe_value'];
        }
      }
    }
  }
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
  $variables['icon_path'] = $icon_folder . $name . '.png';
  $variables['icon_alt'] = isset($info['image alt']) ? $info['image alt'] : $info['title'] . ' ' . t('icon');
}

/**
 * Theme an unvailable translation.
 */
function reps_entity_translation_unavailable($variables) {
  global $language;
  $element = $variables['element'];
  if ($element['#entity_type'] == 'node') {
    // Get available langauges based on titles.
    $available_languages = array_keys($element['#entity']->title_field);
    // Get available languages of the website.
    $language_list = language_list();
    $classes = $element['#entity_type'] . ' ' . $element['#entity_type'] . '-' . $element['#view_mode'] . ' lang-available';
    $message = '<p>The requested information is not available in ' . $language->name . '</p><p>Language(s) available:</p><ul>';
    foreach ($available_languages as $language_extension) {
      // Display available languages for the current node.
      if ($element['#entity']->translations->data[$language_extension]['status'] == 1) {
        $message .= '<li>' . l($language_list[$language_extension]->native, current_path(), array('language' => $language_list[$language_extension])) . '</li>';
      }
    }
    $message .= '</ul>';
    return "<div class=\"$classes\">$message</div>";
  }
}

/**
 * Implements drupal_add_html_head().
 */
function reps_html_head_alter(&$head_elements) {
  // OG:image.
  if (!isset($head_elements['metatag_og:image_0'])) {
    global $base_url;
    $head_elements[] = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'og:image',
        'content' => $base_url . '/' . drupal_get_path('theme', 'reps') . '/images/logos/logo.png',
      ),
    );
  }

  // Meta date.
  if (node_load(arg(1)) != FALSE) {
    $date = node_load(arg(1))->created;
  }
  else {
    $date = time();
  }
  $head_elements['metatag_date_0']['#value'] = format_date($date, 'event_date_format');
}

/**
 * Implements hook_block_view_alter().
 */
function reps_block_view_alter(&$data, $block) {
  if (isset($data['subject'])) {
    switch ($data['subject']) {
      case 'Latest update':
        $content = array(
          // @todo Instead of hardcoding the date format, use format_date().
          t('Last update: @date', array('@date' => date('d/m/Y'))),
          '|',
          t('<a href="#top-page">Top</a>'),
        );
        $data['content'] = implode(' ', $content);
        break;
    }
  }
}

/**
 * Preprocesses the wrapping HTML.
 *
 * @param array &$variables
 *   Template variables.
 */
function reps_preprocess_html(&$variables) {
  // Avoid Styling on phone number with Edge.
  $meta_format_detection = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'format-detection',
      'content' => 'telephone=no',
    ),
  );

  // Add header meta tag.
  drupal_add_html_head($meta_format_detection, 'meta_format_detection');
}

/**
 * Theme the way an 'all day' label will look.
 */
function reps_date_all_day_label() {
  return '';
}

/**
 * Implements theme_preprocess_entity().
 */
function reps_process_entity(&$variables) {
  if ($variables['entity_type'] == 'bean'
    and in_array($variables['bean']->type, array(
      'reps_core_sb_right_image_link',
      'reps_core_sb_right_blue_button',
    ))) {
    if (!empty($variables['content']['title_field'])) {
      $variables['content']['#markup']['title'] = l(
        $variables['content']['title_field']['#items'][0]['value'],
        $variables['content']['field_reps_core_external_url']['#items'][0]['original_url'],
        array('attributes' => $variables['content']['field_reps_core_external_url']['#items'][0]['attributes'])
      );
      if ($variables['bean']->type == 'reps_core_sb_right_image_link') {
        $variables['content']['#markup']['image'] = l(
          render($variables['content']['field_reps_core_image']),
          $variables['content']['field_reps_core_external_url']['#items'][0]['original_url'],
          array(
            'attributes' => $variables['content']['field_reps_core_external_url']['#items'][0]['attributes'],
            'html' => TRUE,
          )
        );
      }
    }
  }
}

/**
 * Implements template_preprocess_views_view_fields().
 */
function reps_preprocess_views_view_unformatted(&$vars) {
  if ($vars['view']->name == 'reps_bean_blocks_global'
    && $vars['view']->current_display == 'block_reps_bean') {
    $vars['rows'] = array_unique($vars['rows']);
  }
}
