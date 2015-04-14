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

  // Exported menu: menu-data-entry.
  $menus['menu-data-entry'] = array(
    'menu_name' => 'menu-data-entry',
    'title' => 'Data Entry',
    'description' => '',
  );
  // Exported menu: menu-downloads.
  $menus['menu-downloads'] = array(
    'menu_name' => 'menu-downloads',
    'title' => 'Downloads',
    'description' => '',
  );
  // Exported menu: menu-footer-links.
  $menus['menu-footer-links'] = array(
    'menu_name' => 'menu-footer-links',
    'title' => 'Footer Links',
    'description' => 'This menu is enabled in the footer for all users.',
  );
  // Exported menu: menu-moderator-menu.
  $menus['menu-moderator-menu'] = array(
    'menu_name' => 'menu-moderator-menu',
    'title' => 'Logistics Coordinator Menu',
    'description' => 'This menu is enabled for users with the Logistics Coordinator role.',
  );
  // Exported menu: menu-webform-results.
  $menus['menu-webform-results'] = array(
    'menu_name' => 'menu-webform-results',
    'title' => 'Webform Results',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'This menu is enabled for administrators.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'This menu is enabled for all users.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Data Entry');
  t('Downloads');
  t('Footer Links');
  t('Logistics Coordinator Menu');
  t('Navigation');
  t('This menu is enabled for administrators.');
  t('This menu is enabled for all users.');
  t('This menu is enabled for users with the Logistics Coordinator role.');
  t('This menu is enabled in the footer for all users.');
  t('User menu');
  t('Webform Results');


  return $menus;
}
