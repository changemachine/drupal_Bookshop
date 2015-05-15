<?php
/**
 * @file
 * book_review.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function book_review_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function book_review_node_info() {
  $items = array(
    'book_review' => array(
      'name' => t('Book Review'),
      'base' => 'node_content',
      'description' => t('Book Review (custom type).'),
      'has_title' => '1',
      'title_label' => t('Book Title'),
      'help' => t('*  Book Title, Book Author, Rating and Review are required fields'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}