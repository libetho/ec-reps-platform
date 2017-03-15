<?php
/**
 * @file
 * reps_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function reps_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'administration_language_negotiation_default';
  $strongarm->value = 'en';
  $export['administration_language_negotiation_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'administration_language_negotiation_paths';
  $strongarm->value = array(
    0 => 'admin/*',
    1 => 'node/*/edit',
    2 => 'admin_menu/*',
  );
  $export['administration_language_negotiation_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'nexteuropa_multilingual_url_suffix' => array(
      'callbacks' => array(
        'language' => 'nexteuropa_multilingual_language_negotiation_provider_callback',
        'url_rewrite' => 'nexteuropa_multilingual_language_negotiation_url_rewrite_callback',
        'switcher' => 'nexteuropa_multilingual_language_negotiation_switcher_url',
      ),
      'file' => 'profiles/multisite_drupal_standard/modules/features/nexteuropa_multilingual/nexteuropa_multilingual.callbacks.inc',
    ),
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language_cookie' => array(
      'callbacks' => array(
        'language' => 'language_cookie_language',
        'switcher' => 'language_cookie_language_switcher',
        'url_rewrite' => 'language_cookie_language_rewrite',
      ),
      'file' => 'profiles/multisite_drupal_standard/modules/contrib/language_cookie/language_cookie.module',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  return $export;
}
