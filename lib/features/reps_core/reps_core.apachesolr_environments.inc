<?php

/**
 * @file
 * reps_core.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function reps_core_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'Multisite production Solr';
  $environment->url = 'http://artocarpus.cc.cec.eu.int:8983/solr/fpfis-cms-production-1.5';
  $environment->service_class = '';
  $environment->conf = array();
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'editorial_team',
      2 => 'flexslider_example',
      3 => 'page',
      4 => 'reps_contact_point',
      5 => 'reps_event',
      6 => 'reps_homepage',
      7 => 'reps_homepage_additional_block',
      8 => 'reps_news',
      9 => 'reps_slide_footer',
      10 => 'reps_slide_homepage',
      11 => 'reps_video',
    ),
    'file' => array(
      0 => 'audio',
      1 => 'document',
      2 => 'image',
      3 => 'video',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
