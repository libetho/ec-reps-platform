api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[admin_language][subdir] = "contrib"
projects[admin_language][version] = 1.0-beta1

projects[ckeditor_tabber][subdir] = "contrib"
projects[ckeditor_tabber][version] = 1.3

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = 1.0

projects[features_roles_permissions][subdir] = "contrib"
projects[features_roles_permissions][version] = 1.2

; Add an option to delete all nodes when the feed source is empty.
; https://www.drupal.org/project/feeds/issues/2333667
; https://webgate.ec.europa.eu/CITnet/jira/browse/REPR-1719?focusedCommentId=3485574&page=com.atlassian.jira.plugin.system.issuetabpanels%3Acomment-tabpanel#comment-3485574
projects[feeds][subdir] = "contrib"
projects[feeds][version] = 2.0-beta3
projects[feeds][patch][] = "patches/feeds_beta3_delete_if_empty_source-2333667-15.patch"

projects[mbp_sync][download][type] = git
projects[mbp_sync][download][url] = https://github.com/ec-europa/mbp-sync-reference.git
projects[mbp_sync][download][tag] = 1.0-rc1
projects[mbp_sync][subdir] = custom

projects[media_browser_plus][subdir] = "contrib"
projects[media_browser_plus][version] = 3.0-beta4
projects[media_browser_plus][patch][] = "https://www.drupal.org/files/issues/download-files-in-media-basket-does-not-work-2821063-2.patch"

projects[menu_admin_per_menu][subdir] = "contrib"
projects[menu_admin_per_menu][version] = 1.0

projects[multiform][subdir] = "contrib"
projects[multiform][version] = 1.4

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = 2.x

projects[page_title][subdir] = "contrib"
projects[page_title][version] = 2.7

projects[rabbit_hole][subdir] = "contrib"
projects[rabbit_hole][version] = 2.25

projects[redirect][subdir] = "contrib"
projects[redirect][version] = 1.x-dev
projects[redirect][patch][] = "https://www.drupal.org/files/issues/2019-10-03/3085342-2.patch"

projects[social_media_links][subdir] = "contrib"
projects[social_media_links][version] = 1.4

projects[taxonomy_access_fix][subdir] = "contrib"
projects[taxonomy_access_fix][version] = 2.2

projects[ultimate_cron][subdir] = "contrib"
projects[ultimate_cron][version] = 2.8
  
projects[views_tree][subdir] = "contrib"
projects[views_tree][version] = 2.0

projects[webform_features][subdir] = "contrib"
projects[webform_features][version] = 3.0-beta3

projects[weight][subdir] = "contrib"
projects[weight][version] = 2.4 


; =========
; Libraries
; =========


; ======
; Themes
; ======
