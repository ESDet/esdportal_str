<?php
/**
 * @file
 * esdportal_str.features.inc
 */

/**
 * Implements hook_views_api().
 */
function esdportal_str_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function esdportal_str_node_info() {
  $items = array(
    'school_profile' => array(
      'name' => t('School Profile'),
      'base' => 'node_content',
      'description' => t('Contact and self-reported information for each school.'),
      'has_title' => '1',
      'title_label' => t('School Name'),
      'help' => t('We appreciate you taking the time to update this information which will be published along with your school\'s score in the 2013 annual scorecard.'),
    ),
  );
  return $items;
}
