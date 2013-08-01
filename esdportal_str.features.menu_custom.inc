<?php
/**
 * @file
 * esdportal_str.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function esdportal_str_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-moderator-menu.
  $menus['menu-moderator-menu'] = array(
    'menu_name' => 'menu-moderator-menu',
    'title' => 'Logistics Coordinator Menu',
    'description' => 'This menu is enabled for users with the Logistics Coordinator role.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'This menu is enabled for all users.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Logistics Coordinator Menu');
  t('This menu is enabled for all users.');
  t('This menu is enabled for users with the Logistics Coordinator role.');
  t('User menu');


  return $menus;
}
