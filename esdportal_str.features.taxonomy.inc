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
    'authorizer' => array(
      'name' => 'Authorizer',
      'machine_name' => 'authorizer',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'operator' => array(
      'name' => 'School operator',
      'machine_name' => 'operator',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'school_district' => array(
      'name' => 'School district',
      'machine_name' => 'school_district',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'school_gov' => array(
      'name' => 'School governance',
      'machine_name' => 'school_gov',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'school_grades' => array(
      'name' => 'School grades',
      'machine_name' => 'school_grades',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
    'state_school_status' => array(
      'name' => 'State school status',
      'machine_name' => 'state_school_status',
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
