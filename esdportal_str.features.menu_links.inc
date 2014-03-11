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

  // Exported menu link: menu-downloads:export-school-universe
  $menu_links['menu-downloads:export-school-universe'] = array(
    'menu_name' => 'menu-downloads',
    'link_path' => 'export-school-universe',
    'router_path' => 'export-school-universe',
    'link_title' => 'School Universe',
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
    'weight' => 0,
  );
  // Exported menu link: menu-footer-links:http://scorecard.excellentschoolsdetroit.org/
  $menu_links['menu-footer-links:http://scorecard.excellentschoolsdetroit.org/'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'http://scorecard.excellentschoolsdetroit.org/',
    'router_path' => '',
    'link_title' => 'Scorecard Website',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-footer-links:http://www.excellentschoolsdetroit.org
  $menu_links['menu-footer-links:http://www.excellentschoolsdetroit.org'] = array(
    'menu_name' => 'menu-footer-links',
    'link_path' => 'http://www.excellentschoolsdetroit.org',
    'router_path' => '',
    'link_title' => 'Our Main Website',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-moderator-menu:manage-school-profiles
  $menu_links['menu-moderator-menu:manage-school-profiles'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'manage-school-profiles',
    'router_path' => 'manage-school-profiles',
    'link_title' => 'Manage School Profiles',
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
  // Exported menu link: menu-moderator-menu:manage-schools
  $menu_links['menu-moderator-menu:manage-schools'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'manage-schools',
    'router_path' => 'manage-schools',
    'link_title' => 'Manage School Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-moderator-menu:manage-site-visit-status
  $menu_links['menu-moderator-menu:manage-site-visit-status'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'manage-site-visit-status',
    'router_path' => 'manage-site-visit-status',
    'link_title' => 'Manage Site Visit Status',
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
  // Exported menu link: menu-moderator-menu:manage-users
  $menu_links['menu-moderator-menu:manage-users'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'manage-users',
    'router_path' => 'manage-users',
    'link_title' => 'Manage Users',
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
    'weight' => -47,
  );
  // Exported menu link: menu-moderator-menu:send-user-emails
  $menu_links['menu-moderator-menu:send-user-emails'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'send-user-emails',
    'router_path' => 'send-user-emails',
    'link_title' => 'Send User Emails',
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
    'weight' => -46,
  );
  // Exported menu link: menu-moderator-menu:site-visit-status-report
  $menu_links['menu-moderator-menu:site-visit-status-report'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'site-visit-status-report',
    'router_path' => 'site-visit-status-report',
    'link_title' => 'Status Report',
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
    'weight' => -45,
  );
  // Exported menu link: menu-moderator-menu:user
  $menu_links['menu-moderator-menu:user'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Edit my account',
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
    'weight' => -44,
  );
  // Exported menu link: menu-moderator-menu:user/logout
  $menu_links['menu-moderator-menu:user/logout'] = array(
    'menu_name' => 'menu-moderator-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
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
    'weight' => -43,
  );
  // Exported menu link: navigation:node/add
  $menu_links['navigation:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: navigation:node/add/2013-k8-score
  $menu_links['navigation:node/add/2013-k8-score'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/2013-k8-score',
    'router_path' => 'node/add/2013-k8-score',
    'link_title' => '2013 K8 score',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page
  $menu_links['navigation:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/school-profile
  $menu_links['navigation:node/add/school-profile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/school-profile',
    'router_path' => 'node/add/school-profile',
    'link_title' => 'School Profile',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact and self-reported information for each school.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/webform
  $menu_links['navigation:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
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
  t('2013 K8 score');
  t('Add content');
  t('Edit My Account');
  t('Edit my account');
  t('Log out');
  t('Manage School Profiles');
  t('Manage School Taxonomy');
  t('Manage Site Visit Status');
  t('Manage Users');
  t('Our Main Website');
  t('Page');
  t('School Profile');
  t('School Universe');
  t('Scorecard Website');
  t('Send User Emails');
  t('Status Report');
  t('Webform');


  return $menu_links;
}
