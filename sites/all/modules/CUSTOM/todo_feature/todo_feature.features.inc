<?php
/**
 * @file
 * todo_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function todo_feature_node_info() {
  $items = array(
    'todo_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Task to add to ToDoList.  
New type added for task-list tutorial:  befused.com/drupal/features-first'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
