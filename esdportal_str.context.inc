<?php
/**
 * @file
 * esdportal_str.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function esdportal_str_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'user/*' => 'user/*',
        'user' => 'user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'post_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'results_viewer_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'results viewer' => 'results viewer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-webform-results' => array(
          'module' => 'menu',
          'delta' => 'menu-webform-results',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['results_viewer_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scoresbycode';
  $context->description = 'schoolscores/[bcode] pages';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'schoolscores/*' => 'schoolscores/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('schoolscores/[bcode] pages');
  $export['scoresbycode'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
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
        'menu-menu-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'boxes-social_share' => array(
          'module' => 'boxes',
          'delta' => 'social_share',
          'region' => 'footer_first',
          'weight' => '-9',
        ),
        'esdportal_str-feedback' => array(
          'module' => 'esdportal_str',
          'delta' => 'feedback',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'boxes-contact_info' => array(
          'module' => 'boxes',
          'delta' => 'contact_info',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_admin';
  $context->description = 'ESD Administrator role';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-moderator-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-moderator-menu',
          'region' => 'branding',
          'weight' => '-15',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'branding',
          'weight' => '-13',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'branding',
          'weight' => '-12',
        ),
        'menu-menu-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'boxes-social_share' => array(
          'module' => 'boxes',
          'delta' => 'social_share',
          'region' => 'footer_first',
          'weight' => '-9',
        ),
        'esdportal_str-feedback' => array(
          'module' => 'esdportal_str',
          'delta' => 'feedback',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'boxes-contact_info' => array(
          'module' => 'boxes',
          'delta' => 'contact_info',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ESD Administrator role');
  $export['sitewide_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_moderator';
  $context->description = 'Logistics Coordinator role';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Logistics Coordinator' => 'Logistics Coordinator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-moderator-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-moderator-menu',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'menu-menu-downloads' => array(
          'module' => 'menu',
          'delta' => 'menu-downloads',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'branding',
          'weight' => '-8',
        ),
        'menu-menu-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'boxes-social_share' => array(
          'module' => 'boxes',
          'delta' => 'social_share',
          'region' => 'footer_first',
          'weight' => '-9',
        ),
        'esdportal_str-feedback' => array(
          'module' => 'esdportal_str',
          'delta' => 'feedback',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'boxes-contact_info' => array(
          'module' => 'boxes',
          'delta' => 'contact_info',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Logistics Coordinator role');
  $export['sitewide_moderator'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_schoolrep';
  $context->description = 'School Representative and Superintendent roles';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'School Representative' => 'School Representative',
        'Superintendent' => 'Superintendent',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'esdportal_dash-my_schools' => array(
          'module' => 'esdportal_dash',
          'delta' => 'my_schools',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'esdportal_dash-sitevisitask' => array(
          'module' => 'esdportal_dash',
          'delta' => 'sitevisitask',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('School Representative and Superintendent roles');
  $export['sitewide_schoolrep'] = $context;

  return $export;
}
