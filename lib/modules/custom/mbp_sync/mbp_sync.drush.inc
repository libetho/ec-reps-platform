<?php

/**
 * @file
 * Defines the drush commands for this module.
 */

/**
 * Implements hook_drush_command().
 */
function mbp_sync_drush_command() {
  $items  = array();
  $items['mbp-sync-folder-terms'] = array(
    'callback' => 'drush_mbp_sync_folder_terms',
    'description' => dt('Parse the file entities and assign the term folders.'),
    'aliases' => array('mbpt'),
  );
  $items['mbp-sync-file-tokens'] = array(
    'callback' => 'drush_mbp_sync_file_tokens',
    'description' => dt('Convert hard coded links into file entities.'),
    'aliases' => array('mbpf'),
  );
  return $items;
}

/**
 * Implements hook_drush_help().
 */
function mbp_sync_drush_help($section) {
  switch ($section) {
    case 'drush:mbp-sync-folder-terms':
      return dt("Parse the file entities and assign the term folders. This will call the batch api so it may take a while.");

    case 'drush:mbp-sync-file-tokens':
      return dt("Parses entities for hard coded links and replaces them with file url tokens. This will call the batch api so it may take a while.");
  }
}

/**
 * Callback for the mbp-sync-folder-terms command.
 */
function drush_mbp_sync_folder_terms() {
  // Message displayed in drush console.
  drush_print(dt('Parsing files for folder tree & creating mbp folders'));
  _mbp_sync_folders_setup_batch();
}

/**
 * Callback for the mbp-sync-file-tokens command.
 */
function drush_mbp_sync_file_tokens() {
  // Message displayed in drush console.
  drush_print(dt('Parsing content for file entity url\'s'));
  _mbp_sync_file_tokens_setup_batch();
}
