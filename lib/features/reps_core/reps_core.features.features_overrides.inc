<?php
/**
 * @file
 * reps_core.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function reps_core_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: metatag
  $overrides["metatag.node.config"] = array(
    'title' => array(
      'value' => '[node:title] | [site:name]',
    ),
    'description' => array(
      'value' => '[node:title]',
    ),
    'keywords' => array(
      'value' => '[node:field-tags]',
    ),
    'revisit-after' => array(
      'value' => 15,
      'period' => 'day',
    ),
    'dcterms.title' => array(
      'value' => '[node:title]',
    ),
    'dcterms.creator' => array(
      'value' => '[node:author]',
    ),
    'dcterms.description' => array(
      'value' => '[node:summary]',
    ),
    'dcterms.date' => array(
      'value' => '[node:created:custom:Y-m-d\\TH:iP]',
    ),
    'dcterms.language' => array(
      'value' => '[node:language]',
    ),
    'og:type' => array(
      'value' => '[node:content-type]',
    ),
    'og:title' => array(
      'value' => '[node:title] - [site:name] - European Commission',
    ),
    'og:description' => array(
      'value' => '[node:title]',
    ),
    'og:updated_time' => array(
      'value' => '[node:changed:custom:c]',
    ),
    'og:image' => array(
      'value' => '[node:field-reps-core-image:file:url]',
    ),
    'article:published_time' => array(
      'value' => '[node:created:custom:c]',
    ),
    'article:modified_time' => array(
      'value' => '[node:changed:custom:c]',
    ),
  );
  $overrides["metatag.node.disabled"] = FALSE;
  $overrides["metatag.node.instance"] = 'node';

 return $overrides;
}
