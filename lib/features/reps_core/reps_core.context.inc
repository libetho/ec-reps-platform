<?php

/**
 * @file
 * reps_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function reps_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-contact-points';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'services/contact-points' => 'services/contact-points',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reps_contact_points-block' => array(
          'module' => 'views',
          'delta' => 'reps_contact_points-block',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-reps_contact_points-block_1' => array(
          'module' => 'views',
          'delta' => 'reps_contact_points-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('REPS');
  $export['reps-contact-points'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-homepage';
  $context->description = '';
  $context->tag = 'REPS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-bean-twitter' => array(
          'module' => 'bean',
          'delta' => 'bean-twitter',
          'region' => 'sidebar_right',
          'weight' => '1',
        ),
        'views-reps_sliders-slider_homepage' => array(
          'module' => 'views',
          'delta' => 'reps_sliders-slider_homepage',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-reps_news-block' => array(
          'module' => 'views',
          'delta' => 'reps_news-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-reps_events-block' => array(
          'module' => 'views',
          'delta' => 'reps_events-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-reps_bean_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'reps_bean_blocks-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-12da212b2f93e289c2bd907729707482' => array(
          'module' => 'views',
          'delta' => '12da212b2f93e289c2bd907729707482',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-reps_videos-block' => array(
          'module' => 'views',
          'delta' => 'reps_videos-block',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-reps_publications-block' => array(
          'module' => 'views',
          'delta' => 'reps_publications-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-reps_sliders-block_1' => array(
          'module' => 'views',
          'delta' => 'reps_sliders-block_1',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('REPS');
  $export['reps-homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'reps-sitewide';
  $context->description = 'Reps sitewide used on every page';
  $context->tag = 'REPS';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-reps-services' => array(
          'module' => 'menu',
          'delta' => 'menu-reps-services',
          'region' => 'header_top',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header_top',
          'weight' => '-9',
        ),
        'easy_breadcrumb-easy_breadcrumb' => array(
          'module' => 'easy_breadcrumb',
          'delta' => 'easy_breadcrumb',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'featured',
          'weight' => '-9',
        ),
        'nexteuropa_europa_search-nexteuropa_europa_search_form' => array(
          'module' => 'nexteuropa_europa_search',
          'delta' => 'nexteuropa_europa_search_form',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
        'bean-bean-share' => array(
          'module' => 'bean',
          'delta' => 'bean-share',
          'region' => 'sidebar_right',
          'weight' => '-9',
        ),
        'social_media_links-social-media-links' => array(
          'module' => 'social_media_links',
          'delta' => 'social-media-links',
          'region' => 'sidebar_right',
          'weight' => '-8',
        ),
        'views-reps_bean_blocks-block_3' => array(
          'module' => 'views',
          'delta' => 'reps_bean_blocks-block_3',
          'region' => 'sidebar_right',
          'weight' => '-7',
        ),
        'views-reps_bean_blocks-block' => array(
          'module' => 'views',
          'delta' => 'reps_bean_blocks-block',
          'region' => 'sidebar_right',
          'weight' => '-6',
        ),
        'views-reps_bean_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'reps_bean_blocks-block_2',
          'region' => 'sidebar_right',
          'weight' => '-5',
        ),
        'views-reps_bean_blocks-block_4' => array(
          'module' => 'views',
          'delta' => 'reps_bean_blocks-block_4',
          'region' => 'sidebar_right',
          'weight' => '-4',
        ),
        'reps_core-reps_core_feedback_form' => array(
          'module' => 'reps_core',
          'delta' => 'reps_core_feedback_form',
          'region' => 'sidebar_right',
          'weight' => '-3',
        ),
        'cce_basic_config-footer_ipg' => array(
          'module' => 'cce_basic_config',
          'delta' => 'footer_ipg',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'bean-bean-laco' => array(
          'module' => 'bean',
          'delta' => 'bean-laco',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('REPS');
  t('Reps sitewide used on every page');
  $export['reps-sitewide'] = $context;

  return $export;
}
