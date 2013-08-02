<?php
/**
 * @file
 * esdportal_str.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function esdportal_str_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-moderator-menu:manage-school-profiles
  $menu_links['menu-moderator-menu:manage-school-profiles'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'manage-school-profiles',
    'router_path' => 'manage-school-profiles',
    'link_title' => 'Manage school profiles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-moderator-menu:manage-users
  $menu_links['menu-moderator-menu:manage-users'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'manage-users',
    'router_path' => 'manage-users',
    'link_title' => 'Manage users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: user-menu:my-school-profiles
  $menu_links['user-menu:my-school-profiles'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-school-profiles',
    'router_path' => 'my-school-profiles',
    'link_title' => 'My school profiles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Edit My Account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Edit My Account');
  t('Log out');
  t('Manage school profiles');
  t('Manage users');
  t('My school profiles');


  return $menu_links;
}
