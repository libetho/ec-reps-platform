<?php
/**
 * @file
 * reps_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function reps_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'add terms in reps_news_categories'.
  $permissions['add terms in reps_news_categories'] = array(
    'name' => 'add terms in reps_news_categories',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-reps-services menu items'.
  $permissions['administer menu-reps-services menu items'] = array(
    'name' => 'administer menu-reps-services menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer reps settings'.
  $permissions['administer reps settings'] = array(
    'name' => 'administer reps settings',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'reps_admin',
  );

  // Exported permission: 'administer reps social links'.
  $permissions['administer reps social links'] = array(
    'name' => 'administer reps social links',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'reps_admin',
  );

  // Exported permission: 'administer reps twitter webtools'.
  $permissions['administer reps twitter webtools'] = array(
    'name' => 'administer reps twitter webtools',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'reps_admin',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'assign node weight'.
  $permissions['assign node weight'] = array(
    'name' => 'assign node weight',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'weight',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'create any reps_core_quicklinks bean'.
  $permissions['create any reps_core_quicklinks bean'] = array(
    'name' => 'create any reps_core_quicklinks bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any reps_core_sb_right_blue_button bean'.
  $permissions['create any reps_core_sb_right_blue_button bean'] = array(
    'name' => 'create any reps_core_sb_right_blue_button bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any reps_core_sb_right_free_content bean'.
  $permissions['create any reps_core_sb_right_free_content bean'] = array(
    'name' => 'create any reps_core_sb_right_free_content bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any reps_core_sb_right_image_link bean'.
  $permissions['create any reps_core_sb_right_image_link bean'] = array(
    'name' => 'create any reps_core_sb_right_image_link bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reps_homepage content'.
  $permissions['create reps_homepage content'] = array(
    'name' => 'create reps_homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create reps_homepage_additional_block content'.
  $permissions['create reps_homepage_additional_block content'] = array(
    'name' => 'create reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reps_slide_footer content'.
  $permissions['create reps_slide_footer content'] = array(
    'name' => 'create reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reps_slide_homepage content'.
  $permissions['create reps_slide_homepage content'] = array(
    'name' => 'create reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_core_quicklinks bean'.
  $permissions['delete any reps_core_quicklinks bean'] = array(
    'name' => 'delete any reps_core_quicklinks bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any reps_core_sb_right_blue_button bean'.
  $permissions['delete any reps_core_sb_right_blue_button bean'] = array(
    'name' => 'delete any reps_core_sb_right_blue_button bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any reps_core_sb_right_free_content bean'.
  $permissions['delete any reps_core_sb_right_free_content bean'] = array(
    'name' => 'delete any reps_core_sb_right_free_content bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any reps_core_sb_right_image_link bean'.
  $permissions['delete any reps_core_sb_right_image_link bean'] = array(
    'name' => 'delete any reps_core_sb_right_image_link bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any reps_homepage content'.
  $permissions['delete any reps_homepage content'] = array(
    'name' => 'delete any reps_homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_homepage_additional_block content'.
  $permissions['delete any reps_homepage_additional_block content'] = array(
    'name' => 'delete any reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_slide_footer content'.
  $permissions['delete any reps_slide_footer content'] = array(
    'name' => 'delete any reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any reps_slide_homepage content'.
  $permissions['delete any reps_slide_homepage content'] = array(
    'name' => 'delete any reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_homepage content'.
  $permissions['delete own reps_homepage content'] = array(
    'name' => 'delete own reps_homepage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_homepage_additional_block content'.
  $permissions['delete own reps_homepage_additional_block content'] = array(
    'name' => 'delete own reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_slide_footer content'.
  $permissions['delete own reps_slide_footer content'] = array(
    'name' => 'delete own reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reps_slide_homepage content'.
  $permissions['delete own reps_slide_homepage content'] = array(
    'name' => 'delete own reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_core_quicklinks bean'.
  $permissions['edit any reps_core_quicklinks bean'] = array(
    'name' => 'edit any reps_core_quicklinks bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any reps_core_sb_right_blue_button bean'.
  $permissions['edit any reps_core_sb_right_blue_button bean'] = array(
    'name' => 'edit any reps_core_sb_right_blue_button bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any reps_core_sb_right_free_content bean'.
  $permissions['edit any reps_core_sb_right_free_content bean'] = array(
    'name' => 'edit any reps_core_sb_right_free_content bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any reps_core_sb_right_image_link bean'.
  $permissions['edit any reps_core_sb_right_image_link bean'] = array(
    'name' => 'edit any reps_core_sb_right_image_link bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any reps_homepage content'.
  $permissions['edit any reps_homepage content'] = array(
    'name' => 'edit any reps_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_homepage_additional_block content'.
  $permissions['edit any reps_homepage_additional_block content'] = array(
    'name' => 'edit any reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_slide_footer content'.
  $permissions['edit any reps_slide_footer content'] = array(
    'name' => 'edit any reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reps_slide_homepage content'.
  $permissions['edit any reps_slide_homepage content'] = array(
    'name' => 'edit any reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_homepage content'.
  $permissions['edit own reps_homepage content'] = array(
    'name' => 'edit own reps_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_homepage_additional_block content'.
  $permissions['edit own reps_homepage_additional_block content'] = array(
    'name' => 'edit own reps_homepage_additional_block content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_slide_footer content'.
  $permissions['edit own reps_slide_footer content'] = array(
    'name' => 'edit own reps_slide_footer content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reps_slide_homepage content'.
  $permissions['edit own reps_slide_homepage content'] = array(
    'name' => 'edit own reps_slide_homepage content',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'moderate content from draft to expired'.
  $permissions['moderate content from draft to expired'] = array(
    'name' => 'moderate content from draft to expired',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to published'.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to validated'.
  $permissions['moderate content from draft to validated'] = array(
    'name' => 'moderate content from draft to validated',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from expired to draft'.
  $permissions['moderate content from expired to draft'] = array(
    'name' => 'moderate content from expired to draft',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from expired to needs_review'.
  $permissions['moderate content from expired to needs_review'] = array(
    'name' => 'moderate content from expired to needs_review',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from expired to published'.
  $permissions['moderate content from expired to published'] = array(
    'name' => 'moderate content from expired to published',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from expired to validated'.
  $permissions['moderate content from expired to validated'] = array(
    'name' => 'moderate content from expired to validated',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to expired'.
  $permissions['moderate content from needs_review to expired'] = array(
    'name' => 'moderate content from needs_review to expired',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to draft'.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to expired'.
  $permissions['moderate content from published to expired'] = array(
    'name' => 'moderate content from published to expired',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to needs_review'.
  $permissions['moderate content from published to needs_review'] = array(
    'name' => 'moderate content from published to needs_review',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to validated'.
  $permissions['moderate content from published to validated'] = array(
    'name' => 'moderate content from published to validated',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from validated to draft'.
  $permissions['moderate content from validated to draft'] = array(
    'name' => 'moderate content from validated to draft',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from validated to expired'.
  $permissions['moderate content from validated to expired'] = array(
    'name' => 'moderate content from validated to expired',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from validated to needs_review'.
  $permissions['moderate content from validated to needs_review'] = array(
    'name' => 'moderate content from validated to needs_review',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'multisite_workbench_moderation_view_bulk_update'.
  $permissions['multisite_workbench_moderation_view_bulk_update'] = array(
    'name' => 'multisite_workbench_moderation_view_bulk_update',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'multisite_workbench_moderation_view',
  );

  // Exported permission: 'show format selection for bean'.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate bean entities'.
  $permissions['translate bean entities'] = array(
    'name' => 'translate bean entities',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'version management edits'.
  $permissions['version management edits'] = array(
    'name' => 'version management edits',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'version_management',
  );

  // Exported permission: 'view any reps_core_quicklinks bean'.
  $permissions['view any reps_core_quicklinks bean'] = array(
    'name' => 'view any reps_core_quicklinks bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any reps_core_sb_right_blue_button bean'.
  $permissions['view any reps_core_sb_right_blue_button bean'] = array(
    'name' => 'view any reps_core_sb_right_blue_button bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any reps_core_sb_right_free_content bean'.
  $permissions['view any reps_core_sb_right_free_content bean'] = array(
    'name' => 'view any reps_core_sb_right_free_content bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any reps_core_sb_right_image_link bean'.
  $permissions['view any reps_core_sb_right_image_link bean'] = array(
    'name' => 'view any reps_core_sb_right_image_link bean',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'REPS Administrator' => 'REPS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
