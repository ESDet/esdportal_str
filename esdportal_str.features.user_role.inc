<?php
/**
 * @file
 * esdportal_str.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function esdportal_str_user_default_roles() {
  $roles = array();

  // Exported role: ESD Administrator.
  $roles['ESD Administrator'] = array(
    'name' => 'ESD Administrator',
    'weight' => 3,
  );

  // Exported role: Logistics Coordinator.
  $roles['Logistics Coordinator'] = array(
    'name' => 'Logistics Coordinator',
    'weight' => 6,
  );

  // Exported role: School Leader.
  $roles['School Leader'] = array(
    'name' => 'School Leader',
    'weight' => 5,
  );

  // Exported role: Superintendent.
  $roles['Superintendent'] = array(
    'name' => 'Superintendent',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
