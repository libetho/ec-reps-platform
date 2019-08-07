<?php

/**
 * @file
 * Reps core administration page.
 */

include_once 'theme/reps.admin.theme.inc';

/**
 * Reps core admin form.
 */
function _reps_admin_feedback($form, &$form_state) {
  $form['reps_core_feedback_form_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Feedback form ID'),
    '#default_value' => variable_get('reps_core_feedback_form_id', NULL),
    '#element_validate' => array('element_validate_number'),
  );

  $form['#validate'][] = '_reps_admin_feedback_validate';

  return system_settings_form($form);
}

/**
 * Reps core menu admin form.
 */
function _reps_admin_menu_add($form, &$form_state, $mlid = NULL) {
  global $language;

  $form['parent'] = array(
    '#type' => 'select',
    '#title' => t('Section'),
    '#default_value' => is_numeric($mlid) ? $mlid : '',
    '#options' => _reps_admin_get_menu_items('main-menu', 1, $language->language),
    '#required' => TRUE,
    '#description' => t('You have to choose the section where this menu item will be added'),
  );

  $form['lang'] = array(
    '#type' => 'select',
    '#disabled' => TRUE,
    '#default_value' => LANGUAGE_NONE,
    '#title' => t('Language'),
    '#options' => array(LANGUAGE_NONE),
    '#required' => TRUE,
    '#description' => t('You can only create menu items in the default language.'),
  );

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => '',
    '#required' => TRUE,
    '#description' => t('This is the text that the users will see'),
  );

  $form['path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path'),
    '#default_value' => '',
    '#required' => TRUE,
    '#description' => t("You can insert here the path to an existing internal page o a full Url pointing to an external resource"),
  );

  $form['weight'] = array(
    '#type' => 'weight',
    '#title' => t('Weight'),
    '#default_value' => '0',
    '#required' => TRUE,
    '#description' => t("You can use this field to sort the items belonging to the same section"),
  );

  $form['actions']['cancel'] = array(
    '#type' => 'link',
    '#title' => t('Back to the menu list'),
    '#href' => 'admin/reps/menu',
    '#weight' => 50,
    '#attributes' => array('class' => array('button')),
  );

  // Maintain the structure.
  $form['#tree'] = TRUE;

  // Attach a css to the admin settings form.
  $form['#attached']['css'] = array(
    drupal_get_path('module', 'reps_admin') . '/theme/reps_admin.css',
  );

  // Validate function.
  $form['#validate'][] = '_reps_admin_menu_add_validate';

  // Submit handler.
  $form['#submit'][] = '_reps_admin_menu_add_submit';

  return system_settings_form($form);
}

/**
 * Reps core menu admin form.
 */
function _reps_admin_menu_edit($form, &$form_state) {
  global $language;

  if ($language->language != language_default()->language) {
    $advice = t('If you edit this you will create or update the %lang translation for the source %def_lang title', array('%lang' => $language->name, '%def_lang' => language_default()->name));
    $warning = t('Be careful, you are in the %lang interface, but if you edit this it will also change the %def_lang path.', array('%lang' => $language->name, '%def_lang' => language_default()->name));
  }

  $items = _reps_admin_prepare_menu_tree('main-menu');

  if (!empty($items)) {
    $old_values = _reps_admin_format_values($items);
    $form['#old_values'] = $old_values;

    foreach ($items as $parent_mlid => $parent) {

      $form['items'][$parent_mlid] = array(
        '#type' => 'fieldset',
        '#title' => $parent['title'],
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
        '#description' => t('Here you can manage menu items belonging to the %parent section. Drag items to reorder them, change values for the title and the link or use the delete links.', array('%parent' => $parent['title'])),
      );

      if (!empty($parent['children'])) {
        foreach ($parent['children'] as $child_mlid => $child) {

          $form['items'][$parent_mlid]['children'][$child_mlid]['link_title'] = array(
            '#type' => 'textfield',
            '#title' => t('Title'),
            '#required' => TRUE,
            '#default_value' => $child['link_title'],
            '#description' => t('The menu item title'),
            '#size' => 40,
          );

          if (isset($advice)) {
            $form['items'][$parent_mlid]['children'][$child_mlid]['link_title']['#description'] = $advice;
          }

          $form['items'][$parent_mlid]['children'][$child_mlid]['link_path'] = array(
            '#type' => 'textfield',
            '#title' => t('Path'),
            '#default_value' => $child['link_path'],
            '#required' => TRUE,
            '#description' => t("You can insert here the path to an existing internal page o a full Url pointing to an external resource"),
            '#size' => 60,
          );

          if (isset($warning)) {
            $form['items'][$parent_mlid]['children'][$child_mlid]['link_path']['#description'] = $warning;
          }

          $form['items'][$parent_mlid]['children'][$child_mlid]['translate'] = array(
            '#type' => 'link',
            '#title' => t('Translate'),
            '#weight' => 1,
            '#href' => '/admin/reps/menu/' . $child_mlid . '/translate',
          );

          $form['items'][$parent_mlid]['children'][$child_mlid]['delete'] = array(
            '#type' => 'link',
            '#title' => t('Delete'),
            '#weight' => 1,
            '#href' => '/admin/reps/menu/' . $child_mlid . '/delete',
          );

          $form['items'][$parent_mlid]['children'][$child_mlid]['weight'] = array(
            '#type' => 'weight',
            '#title' => t('Weight'),
            '#title_display' => 'invisible',
            '#default_value' => $child['weight'],
            '#delta' => 50,
            '#attributes' => array('class' => array('reps-menu-weight')),
          );

          // Sort the rows.
          uasort($form['items'][$parent_mlid]['children'][$child_mlid], '_reps_admin_form_weight');
        }
      }
    }

    // Attach a css to the admin settings form.
    $form['#attached']['css'] = array(
      drupal_get_path('module', 'reps_admin') . '/theme/reps_admin.css',
    );

    // Attach a js to the admin settings form.
    $form['#attached']['js'] = array(
      drupal_get_path('module', 'reps_admin') . '/theme/reps_admin.js',
    );

    // Maintain the structure.
    $form['#tree'] = TRUE;

    // Validate function.
    $form['#validate'][] = '_reps_admin_menu_edit_validate';

    // Theming function.
    $form['#theme'] = 'reps_admin_menu';

    // Submit handler.
    $form['#submit'][] = '_reps_admin_menu_edit_submit';

    return system_settings_form($form);
  }
}

/**
 * Reps core menu admin form.
 */
function _reps_admin_menu_translate($form, &$form_state, $mlid = NULL) {
  $lang_default = language_default()->language;
  if (is_numeric($mlid)) {
    $item = menu_link_load($mlid);
    $form['default_title'] = array(
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#disabled' => TRUE,
      '#default_value' => $item['link_title'],
      '#description' => t('The original title for this menu item'),
      '#size' => 40,
    );

    $form['default_mlid'] = array(
      '#type' => 'hidden',
      '#title' => t('Mlid'),
      '#default_value' => $item['mlid'],
    );

    $langs = _reps_admin_get_languages();
    unset($langs[$lang_default]);

    foreach ($langs as $lang_code => $lang_name) {
      $translate = i18n_string_translate('menu:item:' . $mlid . ':title', $item['link_title'], array('langcode' => $lang_code));
      $def_title = $translate != $item['link_title'] ? $translate : '';

      $form['translated_title'][$lang_code] = array(
        '#type' => 'textfield',
        '#title' => t('Translation in %lang', array('%lang' => $lang_name)),
        '#default_value' => $def_title,
        '#description' => t('The translated title'),
        '#size' => 40,
      );
    }

    $form['actions']['translate'] = array(
      '#value' => t('Translate'),
      '#type' => 'submit',
    );

    $form['actions']['cancel'] = array(
      '#type' => 'link',
      '#title' => t('Back to the menu list'),
      '#href' => 'admin/reps/menu',
      '#weight' => 50,
      '#attributes' => array('class' => array('button')),
    );

    $form['#tree'] = TRUE;
  }
  else {
    $check = _reps_admin_get_menu_items('main-menu', 2);
    if (!empty($check)) {
      $form['select_mlid'] = array(
        '#type' => 'select',
        '#title' => t('Choose menu item'),
        '#options' => _reps_admin_get_menu_items('main-menu', 2),
        '#multiple' => FALSE,
      );

      $form['actions']['translate'] = array(
        '#value' => t('Translate'),
        '#type' => 'submit',
        '#submit' => array('_reps_admin_menu_translate_redirect'),
      );

      $form['actions']['cancel'] = array(
        '#type' => 'link',
        '#title' => t('Back to the menu list'),
        '#href' => 'admin/reps/menu',
        '#weight' => 50,
        '#attributes' => array('class' => array('button')),
      );
    }
    else {
      drupal_set_message(t("You don't have translatable menu items in your website, would you create one?"), 'warning');

      $form['add-item'] = array(
        '#type' => 'link',
        '#href' => 'admin/reps/menu/add',
        '#title' => t('Create a menu item'),
        '#attributes' => array('class' => array('button')),
      );

      $form['cancel'] = array(
        '#type' => 'link',
        '#title' => t('Back to the menu list'),
        '#href' => 'admin/reps/menu',
        '#weight' => 50,
        '#attributes' => array('class' => array('button')),
      );
    }
    $form['#submit'][] = '_reps_admin_translate_redirect';
  }

  // Attach a css to the admin settings form.
  $form['#attached']['css'] = array(
    drupal_get_path('module', 'reps_admin') . '/theme/reps_admin.css',
  );

  $form['#validate'][] = '_reps_admin_menu_translate_validate';
  $form['#submit'][] = '_reps_admin_menu_translate_submit';

  return $form;
}

/**
 * Reps core menu admin form.
 */
function _reps_admin_menu_delete($form, &$form_state, $mlid = NULL) {
  if (is_numeric($mlid)) {
    $item = menu_link_load($mlid);
    $parent = menu_link_load($item['plid']);
    $form = array();

    $form['parent'] = array(
      '#type' => 'hidden',
      '#title' => t('Section'),
      '#default_value' => $item['plid'],
    );

    $form['mlid'] = array(
      '#type' => 'hidden',
      '#title' => t('Mlid'),
      '#default_value' => $item['mlid'],
    );

    $form['section'] = array(
      '#type' => 'textfield',
      '#title' => t('Section'),
      '#default_value' => $parent['link_title'],
      '#disabled' => TRUE,
    );

    $form['title'] = array(
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#default_value' => $item['link_title'],
      '#disabled' => TRUE,
    );

    $form['path'] = array(
      '#type' => 'textfield',
      '#title' => t('Path'),
      '#default_value' => $item['link_path'],
      '#disabled' => TRUE,
    );

    $form['delete'] = array(
      '#type' => 'submit',
      '#value' => t('I confirm, i want to delete this'),
      '#submit' => array('_reps_admin_menu_delete_submit'),
    );

    $form['cancel'] = array(
      '#type' => 'link',
      '#title' => t('Back to the menu list'),
      '#href' => 'admin/reps/menu',
      '#weight' => 50,
      '#attributes' => array('class' => array('button')),
    );

    $form['#validate'][] = '_reps_admin_menu_delete_validate';
  }

  else {
    $check = _reps_admin_get_menu_items('main-menu', 2);

    if (!empty($check)) {
      $form['select_mlid'] = array(
        '#type' => 'select',
        '#title' => t('Choose menu item'),
        '#options' => _reps_admin_get_menu_items('main-menu', 2),
        '#multiple' => FALSE,
      );

      $form['delete'] = array(
        '#value' => t('Delete'),
        '#type' => 'submit',
      );

      $form['cancel'] = array(
        '#type' => 'link',
        '#title' => t('Back to the menu list'),
        '#href' => 'admin/reps/menu',
        '#weight' => 50,
        '#attributes' => array('class' => array('button')),
      );

      $form['#submit'][] = '_reps_admin_menu_delete_redirect';
    }

    else {
      $form['add-item'] = array(
        '#type' => 'link',
        '#href' => 'admin/reps/menu/add',
        '#title' => t('Create a menu item'),
        '#attributes' => array('class' => array('button')),
      );

      $form['cancel'] = array(
        '#type' => 'link',
        '#title' => t('Back to the menu list'),
        '#href' => 'admin/reps/menu',
        '#weight' => 50,
        '#attributes' => array('class' => array('button')),
      );
    }
  }

  // Attach a css to the admin settings form.
  $form['#attached']['css'] = array(
    drupal_get_path('module', 'reps_admin') . '/theme/reps_admin.css',
  );

  return $form;
}

/**
 * Reps core admin form.
 */
function _reps_admin_settings_social($form, &$form_state) {
  $social_links = variable_get('social_media_links_platforms', array());
  $enabled = _reps_admin_retrieve_socials();

  $def = array();
  if (empty($social_links)) {
    foreach ($enabled as $social) {
      $def[$social]['platform_value'] = '';
      $def[$social]['weight'] = 0;
    }
  }
  else {
    foreach ($enabled as $social) {
      if (!empty($social_links[$social])) {
        $def[$social]['platform_value'] = $social_links[$social]['platform_value'];
        $def[$social]['weight'] = $social_links[$social]['weight'];
      }
      else {
        $def[$social]['platform_value'] = '';
        $def[$social]['weight'] = 0;
      }
    }
  }

  foreach ($enabled as $social) {
    $form['social_media'][$social] = array(
      '#markup' => '<strong>' . $social . '</strong>',
      '#weight' => $def[$social]['weight'],
    );

    $form['social_media'][$social]['platform_value'] = array(
      '#type' => 'textfield',
      '#title' => t('Url'),
      '#default_value' => $def[$social]['platform_value'],
      '#description' => t('Insert here your %social profile Url.', array('%social' => $social)),
    );

    $form['social_media'][$social]['weight'] = array(
      '#type' => 'weight',
      '#title' => t('Weight'),
      '#title_display' => 'invisible',
      '#default_value' => $def[$social]['weight'],
      '#attributes' => array('class' => array('social-links-weight')),
    );
  }

  // Sort the rows.
  uasort($form['social_media'], '_reps_admin_form_weight');

  // Maintain the structure.
  $form['social_media']['#tree'] = TRUE;

  // Theming function.
  $form['#theme'] = 'reps_admin_social';

  // Validate function.
  $form['#validate'][] = '_reps_admin_social_validate';

  // Submit handler.
  $form['#submit'][] = '_reps_admin_social_submit';

  return system_settings_form($form);
}

/**
 * Validate function for the reps admin settings.
 */
function _reps_admin_feedback_validate($form, &$form_state) {
  if (isset($form_state['values']) && isset($form_state['values']['reps_core_feedback_form_id'])) {
    $value = $form_state['values']['reps_core_feedback_form_id'];
    if ($value == '' || $value == 'NULL' || !is_numeric($value)) {
      form_error($form['reps_core_feedback_form_id'], t('%name must be a number.', array('%name' => $form['reps_core_feedback_form_id']['#title'])));
    }
  }
}

/**
 * Validation handler for social links.
 */
function _reps_admin_social_validate($form, &$form_state) {
  foreach ($form_state['values']['social_media'] as $key => $value) {
    $social[$key] = $value['platform_value'];
  }

  foreach ($social as $key => $value) {
    if ($value != '') {
      $test[$key] = valid_url($value, TRUE) ? $value : FALSE;
    }
    else {
      $test[$key] = '';
    }
  }

  if ($social !== $test) {
    $diff = array_diff($social, $test);
    if (!empty($diff)) {
      foreach ($diff as $key => $value) {
        $head = strip_tags($form['social_media'][$key]['#markup']);
        form_set_error("social_media][$key][platform_value", t('Check the value you entered for %social, %url is not a valid url.', array('%social' => $head, '%url' => $form_state['values']['social_media'][$key]['platform_value'])));
      }
    }
  }
}

/**
 * Validate function for the reps admin settings.
 */
function _reps_admin_menu_add_validate($form, &$form_state) {
  $path = $form_state['values']['path'];
  $view = drupal_valid_path($path);
  if (!$view) {
    form_error($form['path'], t('%path seems not to exist in your system.', array('%path' => $form_state['values']['path'])));
  }

  $title = $form_state['values']['title'];
  $test = $title != strip_tags($title) ? FALSE : TRUE;

  if (!$test) {
    form_error($form['title'], t('%title contains invalid characters, you can only insert plain text here', array('%title' => $form_state['values']['title'])));
  }
  else {
    $form_state['values']['title'] = check_plain($title);
  }
}

/**
 * Validate function for the reps admin settings.
 */
function _reps_admin_menu_edit_validate($form, &$form_state) {
  $values = $form_state['values']['items'];
  $previous = $form['#old_values'];
  $checks = _reps_admin_menu_edit_check($values, $previous);
  if (empty($checks)) {
    drupal_set_message(t("There were no changes to save!"), 'warning');
    return FALSE;
  }
  else {
    $operations = array_filter($checks);
    foreach ($operations as $changes) {
      if (isset($changes['link_path'])) {
        $view = drupal_valid_path($changes['link_path']);
        if (!$view) {
          form_error($form, t('%path seems not to exist in your system.', array('%path' => $changes['link_path'])));
        }
      }
      if (isset($changes['link_title'])) {
        $title = $changes['link_title'];
        $test = $title != strip_tags($title) ? FALSE : TRUE;
        if (!$test) {
          form_error($form, t('%title contains invalid characters, you can only insert plain text here', array('%title' => $form_state['values']['link_title'])));
        }
      }
    }
  }
}

/**
 * Submit handler for the menu item translate form.
 */
function _reps_admin_menu_translate_validate($form, &$form_state) {
  if (!empty($form_state['values']['translated_title'])) {
    foreach ($form_state['values']['translated_title'] as $lang => $value) {
      $test = $value != strip_tags($value) ? FALSE : TRUE;

      if (!$test) {
        form_error($form['translated_title'][$lang], t('%title contains invalid characters, you can only insert plain text here', array('%title' => $form_state['values']['translated_title'][$lang])));
      }
      else {
        $form_state['values']['translated_title'][$lang] = filter_xss($value);
      }
    }

    $string = $form_state['values']['default_title'];
    $mlid = $form_state['values']['default_mlid'];
    $translations = _reps_admin_get_string_translations($mlid, $string);
    $check = array_diff($form_state['values']['translated_title'], $translations);

    if (!empty($check)) {
      $form_state['changes'] = $check;
    }
    else {
      drupal_set_message(t("There were no changes to save!"), 'warning');
      return FALSE;
    }
  }
}

/**
 * Submit handler for the menu item translate form.
 */
function _reps_admin_menu_delete_redirect($form, &$form_state) {
  if (!empty($form_state['values']['select_mlid'])) {
    $mlid = $form_state['values']['select_mlid'];
    $form_state['redirect'] = 'admin/reps/menu/' . $mlid . '/delete';
  }
}

/**
 * Validate function for the reps admin settings.
 */
function _reps_admin_menu_delete_validate($form, &$form_state) {
  if (isset($form_state['values']['mlid'])) {
    $mlid = $form_state['values']['mlid'];
    $allowed = _reps_admin_get_menu_items('main-menu', 2);
    $deletable = array();

    if (!empty($allowed)) {
      foreach ($allowed as $items) {
        if (!empty($items)) {
          foreach ($items as $del_mlid => $delete) {
            $deletable[$del_mlid] = $delete;
          }
        }
      }
    }

    if (empty($deletable) || !array_key_exists($mlid, $deletable)) {
      form_set_error('form', t('We cannot delete the %item menu item, it seems that you are not authorized to do this, sorry.', array('%item' => $form_state['values']['title'])));
    }
  }
}

/**
 * Submit handler for the menu item delete form.
 */
function _reps_admin_menu_delete_submit($form, &$form_state) {
  if (!empty($form_state['values']['mlid'])) {
    $mlid = $form_state['values']['mlid'];
    menu_link_delete($mlid);
    drupal_set_message(t('The %item menu item has been removed as you requested', array('%item' => $form_state['values']['title'])), 'status');
  }
  else {
    drupal_set_message(t("We couldn't find a menu item to remove, sorry", 'warning'));
  }

  $form_state['redirect'] = 'admin/reps/menu';
}

/**
 * Submit handler for the menu add form.
 */
function _reps_admin_menu_add_submit($form, &$form_state) {
  $values = $form_state['values'];
  if ($form) {
    drupal_set_message(t("We've successfully created the menu item %title", array('%title' => $values['title'])));
    $form_state['redirect'] = 'admin/reps/menu';
  }
}

/**
 * Submit handler for the menu item translate form.
 */
function _reps_admin_menu_translate_submit($form, &$form_state) {
  $languages = _reps_admin_get_languages();
  $title = $form['default_title']['#default_value'];
  $mlid = $form['default_mlid']['#default_value'];
  $name = 'menu:item:' . $mlid . ':title';

  if (!empty($form_state['changes'])) {
    foreach ($form_state['changes'] as $lang => $value) {
      $language = $languages[$lang];
      i18n_string_translation_update($name, $value, $lang);
      drupal_set_message(t('The %lang translation for the %title menu item has been set to %translation', array(
        '%lang' => $language,
        '%title' => $title,
        '%translation' => $value,
      )
      ));
    }
  }
  else {
    form_error($form, t('Something went wrong, the translation for the %title menu item could not be saved, sorry', array('%title' => $title)));
  }
}

/**
 * Submit handler for the menu item translate form.
 */
function _reps_admin_menu_translate_redirect($form, &$form_state) {
  if (!empty($form_state['values']['select_mlid'])) {
    $mlid = $form_state['values']['select_mlid'];
    $form_state['redirect'] = 'admin/reps/menu/' . $mlid . '/translate';
  }
}

/**
 * Submit handler for social links.
 */
function _reps_admin_social_submit($form, &$form_state) {
  $social = variable_get('social_media_links_platforms', array());

  foreach ($form_state['values']['social_media'] as $key => $value) {
    $social[$key] = $form_state['values']['social_media'][$key];
  }
  variable_set('social_media_links_platforms', $social);
}

/**
 * Submit handler for social links.
 */
function _reps_admin_menu_edit_submit($form, &$form_state) {
  global $language;
  $values = $form_state['values']['items'];
  $previous = $form['#old_values'];
  $checks = _reps_admin_menu_edit_check($values, $previous);
  $operations = array_filter($checks);
  if (!empty($operations)) {
    if ($language->language == language_default()->language) {
      foreach ($operations as $mlid => $changes) {
        $item = menu_link_load($mlid);
        foreach ($changes as $key => $value) {
          $item[$key] = $value;
        }
        menu_link_save($item);
      }
    }
    else {
      foreach ($operations as $mlid => $changes) {
        if (isset($changes['link_title'])) {
          $name = 'menu:item:' . $mlid . ':title';
          i18n_string_translation_update($name, $changes['link_title'], $language->language);
          unset($changes['link_title']);
        }
        else {
          $item = menu_link_load($mlid);
          foreach ($changes as $key => $value) {
            $item[$key] = $value;
          }
          menu_link_save($item);
        }
      }
    }
  }
}

/**
 * Helper function to get differences.
 */
function _reps_admin_menu_edit_check($values, $previous) {
  $check = array();
  if ($values != $previous) {
    foreach ($values as $parent => $group) {
      if (!empty($group['children'])) {
        foreach ($group['children'] as $child => $subgroup) {
          $check[$child] = array_diff($subgroup, $previous[$parent]['children'][$child]);
        }
      }
    }
  }
  return $check;
}

/**
 * Helper function to format form values.
 */
function _reps_admin_format_values($items) {
  $old_values = array();
  foreach ($items as $key => $values) {
    $old_values[$key] = array();
    if (!empty($values['children'])) {
      foreach ($values['children'] as $item) {
        $old_values[$key]['children'][$item['mlid']] = array(
          'link_title' => $item['link_title'],
          'weight' => $item['weight'],
          'delete' => 'Delete',
          'link_path' => $item['link_path'],
        );
      }
    }
  }
  return $old_values;
}
