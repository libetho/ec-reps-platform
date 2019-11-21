<?php

/**
 * @file
 * reps_core.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function reps_core_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'contact_points_edc-xpathparser_1-find_replace';
  $feeds_tamper->importer = 'contact_points_edc';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'href="www',
    'replace' => 'target="_blank" href="http://www',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace www';
  $export['contact_points_edc-xpathparser_1-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'contact_points_edc-xpathparser_1-find_replace_xxx';
  $feeds_tamper->importer = 'contact_points_edc';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<p class="website-url"><a href="xxx">xxx</a></p>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace xxx';
  $export['contact_points_edc-xpathparser_1-find_replace_xxx'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'contact_points_edic-xpathparser_1-find_replace';
  $feeds_tamper->importer = 'contact_points_edic';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'href="www',
    'replace' => 'target="_blank" href="http://www',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace www';
  $export['contact_points_edic-xpathparser_1-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'contact_points_edic-xpathparser_1-find_replace_xxx';
  $feeds_tamper->importer = 'contact_points_edic';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<p class="website-url"><a href="xxx">xxx</a></p>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace xxx';
  $export['contact_points_edic-xpathparser_1-find_replace_xxx'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'contact_points_tem-xpathparser_1-find_replace';
  $feeds_tamper->importer = 'contact_points_tem';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'href="www',
    'replace' => 'target="_blank" href="http://www',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace www';
  $export['contact_points_tem-xpathparser_1-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'contact_points_tem-xpathparser_1-find_replace_xxx';
  $feeds_tamper->importer = 'contact_points_tem';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '<p class="website-url"><a href="xxx">xxx</a></p>',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace xxx';
  $export['contact_points_tem-xpathparser_1-find_replace_xxx'] = $feeds_tamper;

  return $export;
}
