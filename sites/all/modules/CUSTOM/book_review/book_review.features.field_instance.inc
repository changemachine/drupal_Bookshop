<?php
/**
 * @file
 * book_review.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function book_review_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-book_review-field_book_author'
  $field_instances['node-book_review-field_book_author'] = array(
    'bundle' => 'book_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For co-authors use the \'Add more\' button.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_book_author',
    'label' => 'Book Author',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 25,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-book_review-field_book_image'
  $field_instances['node-book_review-field_book_image'] = array(
    'bundle' => 'book_review',
    'deleted' => 0,
    'description' => 'Please find an image of the book jacket.  Proper edition appreciated.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_book_image',
    'label' => 'Book Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 5,
      'file_directory' => 'book_reviews',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '200 KB',
      'max_resolution' => '1000x1000',
      'min_resolution' => '480x480',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'large',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -6,
    ),
  );

  // Exported field_instance: 'node-book_review-field_review_body'
  $field_instances['node-book_review-field_review_body'] = array(
    'bundle' => 'book_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your review goes here.  Try to make it look like you really value your opinion on literature.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_review_body',
    'label' => 'Review Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-book_review-field_star_rating'
  $field_instances['node-book_review-field_star_rating'] = array(
    'bundle' => 'book_review',
    'default_value' => array(
      0 => array(
        'value' => 'null',
      ),
    ),
    'deleted' => 0,
    'description' => 'Rate it from 1 ("Time I\'ll never get back") to 10 ("Don\'t bother me.  I\'m re-reading it!")',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 1,
          'icon_type' => 'star',
        ),
        'type' => 'starrating_rating_formatter',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_star_rating',
    'label' => 'Star_rating',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'starrating',
      'settings' => array(),
      'type' => 'starrating_rating_widget',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Book Author');
  t('Book Image');
  t('For co-authors use the \'Add more\' button.');
  t('Please find an image of the book jacket.  Proper edition appreciated.');
  t('Rate it from 1 ("Time I\'ll never get back") to 10 ("Don\'t bother me.  I\'m re-reading it!")');
  t('Review Body');
  t('Star_rating');
  t('Your review goes here.  Try to make it look like you really value your opinion on literature.');

  return $field_instances;
}
