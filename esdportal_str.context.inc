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
  $context->name = 'sitewide_moderator';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'moderator' => 'moderator',
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
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide_moderator'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_schoolrep';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'School Representative' => 'School Representative',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-54e4930dd771c60a38e87c5edbc733bb' => array(
          'module' => 'views',
          'delta' => '54e4930dd771c60a38e87c5edbc733bb',
          'region' => 'branding',
          'weight' => '-12',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'branding',
          'weight' => '-11',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide_schoolrep'] = $context;

  return $export;
}
