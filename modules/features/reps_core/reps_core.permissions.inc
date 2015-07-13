<?php
/**
 * @file
 * Reps_core.permissions.inc.
 */

function reps_core_set_generic_permissions() {
  $modules = array(
    'workbench_moderation',
    'scheduler',
    'weight',
    'multisite_twitterblock',
  );

  foreach ($modules as $module) {
    if (!module_exists($module)) {
      module_enable($module);
    }
  }

  // Set permissions for REPS Administrator.
  $rid = reps_core_check_reps_roles('REPS Administrator');
  user_role_grant_permissions($rid, array(
    'access administration menu',
    'access administration pages',
    'access broken links report',
    'access content overview',
    'access media browser',
    'access own broken links report',
    'access site map',
    'access user profiles',
    'add media from remote sources',
    'administer content translations',
    'administer files',
    'administer fpfis twitter feature',
    'administer fpfis twitter widget',
    'administer languages',
    'administer users',
    'assign node weight',
    'create files',
    'create page content',
    'delete any audio files',
    'delete any document files',
    'delete any image files',
    'delete revisions',
    'download any audio files',
    'download any document files',
    'download any image files',
    'download any video files',
    'download own audio files',
    'download own document files',
    'download own image files',
    'download own video files',
    'edit any audio files',
    'edit any document files',
    'edit any image files',
    'edit any video files',
    'moderate content from draft to expired',
    'moderate content from draft to published',
    'moderate content from expired to draft',
    'moderate content from expired to needs_review',
    'moderate content from expired to published',
    'moderate content from expired to validated',
    'moderate content from needs_review to expired',
    'moderate content from published to draft',
    'moderate content from published to expired',
    'moderate content from published to needs_review',
    'moderate content from published to validated',
    'moderate content from validated to draft',
    'moderate content from validated to expired',
    'moderate content from validated to needs_review',
    'override fpfis twitter widget',
    'show format selection for bean',
    'translate any entity',
    'translate content',
    'translate node entities',
    'translate taxonomy_term entities',
    'translate user-defined strings',
    'use media wysiwyg',
    'view private files',
    'view the administration theme',
    'schedule (un)publishing of nodes',
  ));

  // Set permissions for the Editor role.
  $rid = reps_core_check_reps_roles('editor');
  user_role_grant_permissions($rid, array(
    'access administration pages',
    'access bean overview',
    'access content overview',
    'access media browser',
    'administer content translations',
    'administer files',
    'assign node weight',
    'create page content',
    'create reps_contact_point content',
    'create reps_slide_footer content',
    'create reps_slide_homepage content',
    'download any audio files',
    'download any document files',
    'download any image files',
    'download any video files',
    'edit any audio files',
    'edit any document files',
    'edit any image files',
    'edit any mapeditor_map content',
    'edit any page content',
    'edit any reps_contact_point content',
    'edit any reps_core_quicklinks bean',
    'edit any reps_core_sb_right_free_content bean',
    'edit any reps_core_sb_right_image_link bean',
    'edit any reps_slide_footer content',
    'edit any reps_slide_homepage content',
    'edit any video files',
    'moderate content from draft to expired',
    'moderate content from draft to published',
    'moderate content from expired to draft',
    'moderate content from expired to needs_review',
    'moderate content from expired to published',
    'moderate content from expired to validated',
    'moderate content from needs_review to expired',
    'moderate content from published to draft',
    'moderate content from published to expired',
    'moderate content from published to needs_review',
    'moderate content from published to validated',
    'moderate content from validated to draft',
    'moderate content from validated to expired',
    'moderate content from validated to needs_review',
    'schedule (un)publishing of nodes',
    'show format selection for bean',
    'translate any entity',
    'translate content',
    'translate node entities',
    'translate taxonomy_term entities',
    'translate user-defined strings',
    'use media wysiwyg',
    'view bean revisions',
    'view the administration theme',
  ));

  // Revoke permissions for the Editor role.
  user_role_revoke_permissions($rid, array(
    'administer quicktabs',
  ));
}
