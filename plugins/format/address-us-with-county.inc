<?php

/**
 * @file
 * Enable sub_administrative_area addressfield component in order to store county for US addresses.
 */

$plugin = array(
  'title' => t('Add sub_administrative_area as county for US addresses'),
  'format callback' => 'addressfield_format_add_county',
  'type' => 'address',
  'weight' => 101,
);

/**
 * Format callback.
 *
 * Add sub_administrative_area as county.
 */
function addressfield_format_add_county(&$format, $address, $context = array()) {
  if ($address['country'] == 'US' && $context['mode'] == 'form') {
    $format['locality_block']['sub_administrative_area'] = array(
      '#title' => t('County'),
      '#tag' => 'div',
      '#attributes' => array(
        'class' => array('sub_administrative_area'),
        'x-autocompletetype' => 'sub_administrative_area',
        'autocomplete' => 'sub_administrative_area',
      ),
      '#size' => 30,
    );
  }
}
