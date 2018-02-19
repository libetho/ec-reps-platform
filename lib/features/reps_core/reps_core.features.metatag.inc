<?php
/**
 * @file
 * reps_core.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function reps_core_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => TRUE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [current-page:pager]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.description' => array(
        'value' => '[site:slogan]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'og:description' => array(
        'value' => '[site:slogan]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node:page.
  $config['node:page'] = array(
    'instance' => 'node:page',
    'config' => array(),
  );

  // Exported Metatag config instance: node:reps_event.
  $config['node:reps_event'] = array(
    'instance' => 'node:reps_event',
    'config' => array(),
  );

  // Exported Metatag config instance: node:reps_homepage.
  $config['node:reps_homepage'] = array(
    'instance' => 'node:reps_homepage',
    'config' => array(
      'og:image' => array(
        'value' => '[site:base-url]/sites/all/themes/reps/reps/images/logos/logo.png',
      ),
    ),
  );

  // Exported Metatag config instance: node:reps_news.
  $config['node:reps_news'] = array(
    'instance' => 'node:reps_news',
    'config' => array(),
  );

  return $config;
}
