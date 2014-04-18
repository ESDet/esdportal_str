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

  // Exported role: Logistics Coordinator.
  $roles['Logistics Coordinator'] = array(
    'name' => 'Logistics Coordinator',
    'weight' => 6,
  );

  // Exported role: School Representative.
  $roles['School Representative'] = array(
    'name' => 'School Representative',
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

  // Exported role: results viewer.
  $roles['results viewer'] = array(
    'name' => 'results viewer',
    'weight' => 4,
  );

  return $roles;
}
