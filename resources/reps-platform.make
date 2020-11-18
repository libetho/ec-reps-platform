api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[ckeditor_tabber][subdir] = "contrib"
projects[ckeditor_tabber][version] = 1.3

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = 1.0

projects[feeds][subdir] = "contrib"
projects[feeds][version] = 2.0-beta5
projects[feeds][patch][] = https://www.drupal.org/files/issues/feeds_delete_if_empty_source-2333667-8.patch
projects[feeds][patch][] = patches/phpcs_ignore_safe_mode.patch

projects[mbp_sync][download][type] = git
projects[mbp_sync][download][url] = https://github.com/ec-europa/mbp-sync-reference.git
projects[mbp_sync][download][tag] = 1.0-rc1
projects[mbp_sync][subdir] = custom

projects[media_browser_plus][subdir] = "contrib"
projects[media_browser_plus][version] = 3.0-beta4
projects[media_browser_plus][patch][] = "https://www.drupal.org/files/issues/download-files-in-media-basket-does-not-work-2821063-2.patch"

projects[menu_admin_per_menu][subdir] = "contrib"
projects[menu_admin_per_menu][version] = 1.1

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = 2.2

projects[page_title][subdir] = "contrib"
projects[page_title][version] = 2.7

projects[rabbit_hole][subdir] = "contrib"
projects[rabbit_hole][version] = 2.25

projects[social_media_links][subdir] = "contrib"
projects[social_media_links][version] = 1.5

projects[taxonomy_access_fix][subdir] = "contrib"
projects[taxonomy_access_fix][version] = 2.3

projects[ultimate_cron][subdir] = "contrib"
projects[ultimate_cron][version] = 2.8

projects[views_tree][subdir] = "contrib"
projects[views_tree][version] = 2.0

; =========
; Libraries
; =========


; ======
; Themes
; ======
