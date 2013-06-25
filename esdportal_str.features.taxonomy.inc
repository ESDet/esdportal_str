<?php
/**
 * @file
 * esdportal_str.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function esdportal_str_taxonomy_default_vocabularies() {
  return array(
    'school_scorecard_status' => array(
      'name' => 'School scorecard status',
      'machine_name' => 'school_scorecard_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'school_status' => array(
      'name' => 'School status',
      'machine_name' => 'school_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'school_type' => array(
      'name' => 'School type',
      'machine_name' => 'school_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'schools' => array(
      'name' => 'Schools',
      'machine_name' => 'schools',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
