<?php

/**
 * @file
 * reps_admin.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function reps_admin_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html.
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'TextColor' => 1,
          'BGColor' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'Format' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Smiley' => 1,
          'Maximize' => 1,
        ),
        'tabber' => array(
          'addTab' => 1,
        ),
        'multisite_wysiwyg_link_hreflang' => array(
          'Link' => 1,
        ),
        'nexteuropa_token_ckeditor' => array(
          'NextEuropaToken' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'break' => 1,
        ),
        'reps_accordion_plugin' => array(
          'reps_accordion_plugin_button' => 1,
        ),
      ),
      'theme' => 'advanced',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'none',
      'css_theme' => 'seven',
      'css_path' => '',
      'stylesSet' => 'Top Button=p.top-button
Italic Title=h2.italic-title
Subtitle=h3.subtitle
Special Container=div.special-container
Marker=span.marker
Big=big
Small=small
Typewriter=tt
Computer Code=code
Keyboard Phrase=kbd
Sample Text=samp
Variable=var
Deleted Text=del
Inserted Text=ins
Cited Work=cite
Inline Quotation=q
Language: RTL=span.rtl
Language: LTR=span.ltr',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'forcePasteAsPlainText' => 0,
      'pasteFromWordNumberedHeadingToList' => 0,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 1,
      'pasteFromWordRemoveStyles' => 1,
    ),
    'preferences' => array(
      'add_to_summaries' => 1,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '4.4.8.ccd0038',
    ),
    'name' => 'formatfull_html',
    'entity_type' => 'wysiwyg_profile',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
