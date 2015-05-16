<?php
/**
 * @file
 * coupon_thing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function coupon_thing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function coupon_thing_node_info() {
  $items = array(
    'coupon' => array(
      'name' => t('Coupon'),
      'base' => 'node_content',
      'description' => t('A coupon only visible to authenticated (logged in) users.'),
      'has_title' => '1',
      'title_label' => t('Coupon Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
