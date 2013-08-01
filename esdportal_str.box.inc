<?php
/**
 * @file
 * esdportal_str.box.inc
 */

/**
 * Implements hook_default_box().
 */
function esdportal_str_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_info';
  $box->plugin_key = 'simple';
  $box->title = 'Contact Us';
  $box->description = 'Contact Info footer block';
  $box->options = array(
    'body' => array(
      'value' => '1938 Franklin Street, Suite 111
Detroit, MI 48207
(313) 285-9156',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['contact_info'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_share';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social Share links';
  $box->options = array(
    'body' => array(
      'value' => '<p><a class="sprite-facebook" href="https://www.facebook.com/ExcellentSchoolsDetroit" target="_blank" title="Facebook">Facebook</a> <a class="sprite-twitter" href="https://twitter.com/ESDet" target="_blank" title="Twitter">Twitter</a> <a class="sprite-googleplus" href="https://plus.google.com/109044606194096088793" target="_blank" title="Google+">Google+</a> <a class="sprite-pinterest" href="http://pinterest.com/esdetroit/" target="_blank" title="Pinterest">Pinterest</a></p>',
      'format' => 'full_html',
    ),
  );
  $export['social_share'] = $box;

  return $export;
}
