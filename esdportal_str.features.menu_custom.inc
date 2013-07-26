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
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Logistics Coordinator Menu');
  t('User menu');


  return $menus;
}
