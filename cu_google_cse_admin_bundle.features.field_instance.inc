<?php
/**
 * @file
 * cu_google_cse_admin_bundle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cu_google_cse_admin_bundle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-cu_google_cse-field_cu_google_cse_creator'.
  $field_instances['node-cu_google_cse-field_cu_google_cse_creator'] = array(
    'bundle' => 'cu_google_cse',
    'default_value' => array(
      0 => array(
        'value' => '016005321760733004813',
      ),
    ),
    'deleted' => 0,
    'description' => 'Longer value generated by Google when CSE is created.  Will look like 016005321760733004813.',
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
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_cu_google_cse_creator',
    'label' => 'Creator',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-cu_google_cse-field_cu_google_cse_id'.
  $field_instances['node-cu_google_cse-field_cu_google_cse_id'] = array(
    'bundle' => 'cu_google_cse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Smaller value generated by Google when CSE is created.  Will look like e4wt0neirvy.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_cu_google_cse_id',
    'label' => 'id',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-cu_google_cse-field_cu_google_cse_path'.
  $field_instances['node-cu_google_cse-field_cu_google_cse_path'] = array(
    'bundle' => 'cu_google_cse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_cu_google_cse_path',
    'label' => 'Path',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Creator');
  t('Longer value generated by Google when CSE is created.  Will look like 016005321760733004813.');
  t('Path');
  t('Smaller value generated by Google when CSE is created.  Will look like e4wt0neirvy.');
  t('id');

  return $field_instances;
}
