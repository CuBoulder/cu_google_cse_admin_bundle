<?php
/**
 * @file
 * cu_google_cse_admin_bundle.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_google_cse_admin_bundle_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cu_google_cse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'google cse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'google cse';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: creator */
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['id'] = 'field_cu_google_cse_creator';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['table'] = 'field_data_field_cu_google_cse_creator';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['field'] = 'field_cu_google_cse_creator';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['label'] = 'Creator';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cu_google_cse_creator']['field_api_classes'] = TRUE;
  /* Field: Content: id */
  $handler->display->display_options['fields']['field_cu_google_cse_id']['id'] = 'field_cu_google_cse_id';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['table'] = 'field_data_field_cu_google_cse_id';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['field'] = 'field_cu_google_cse_id';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['label'] = 'ID';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cu_google_cse_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cu_google_cse_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cu_google_cse_id']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cu_google_cse' => 'cu_google_cse',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/settings/google-cse';
  $export['cu_google_cse'] = $view;

  return $export;
}
