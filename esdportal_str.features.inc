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
 * Implements hook_image_default_styles().
 */
function esdportal_str_image_default_styles() {
  $styles = array();

  // Exported image style: preview.
  $styles['preview'] = array(
    'name' => 'preview',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 180,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: video_thumbnail.
  $styles['video_thumbnail'] = array(
    'name' => 'video_thumbnail',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 430,
          'height' => 290,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
