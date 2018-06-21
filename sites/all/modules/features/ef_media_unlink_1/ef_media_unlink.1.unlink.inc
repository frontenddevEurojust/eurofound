<?php

/**
 * Unlink ef_media_unlink_1_views_view().
 */
function ef_media_unlink_1_views_view() {
$view = new view();
$view->name = 'ef_media';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Media';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Media';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['row_class'] = '[field_ef_main_image_1] [field_ef_photo_gallery_images_1]';
$handler->display->display_options['style_options']['class'] = 'small-block-grid-2 large-block-grid-3';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'changed' => 'changed',
  'type' => 'type',
);
$handler->display->display_options['row_options']['separator'] = '<span class="view-field-separator"> | </span>';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<span class="view-header-results">@total items found</span>';
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['content'] = '<span class="view-footer-results">Displaying @start - @end of @total</span>';
/* Field: Content: Images */
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['id'] = 'field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['table'] = 'field_data_field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['field'] = 'field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['label'] = '';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['alter']['path'] = 'news/media/photo-galleries/[field_ef_photo_gallery_images-title]';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['settings'] = array(
  'image_style' => 'large',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['separator'] = '';
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image']['alter']['path'] = '/news/media/videos/[field_ef_main_image-title]';
$handler->display->display_options['fields']['field_ef_main_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_ef_main_image']['element_wrapper_class'] = 'view-field-ef-image';
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'large',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = '';
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'ef_date_format';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Image css classes (photogallery) */
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['id'] = 'field_ef_photo_gallery_images_1';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['table'] = 'field_data_field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['field'] = 'field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['ui_name'] = 'Image css classes (photogallery)';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['alter']['text'] = 'has-photogallery-ef-image has-ef-image';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['empty'] = 'no-photogallery-ef-image';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_ef_photo_gallery_images_1']['separator'] = '';
/* Field: Image css classes (main) */
$handler->display->display_options['fields']['field_ef_main_image_1']['id'] = 'field_ef_main_image_1';
$handler->display->display_options['fields']['field_ef_main_image_1']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image_1']['ui_name'] = 'Image css classes (main)';
$handler->display->display_options['fields']['field_ef_main_image_1']['label'] = '';
$handler->display->display_options['fields']['field_ef_main_image_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ef_main_image_1']['alter']['text'] = 'has-main-ef-image has-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['empty'] = 'no-main-ef-image';
$handler->display->display_options['fields']['field_ef_main_image_1']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_ef_main_image_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image_1']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_photo_gallery' => 'ef_photo_gallery',
  'ef_video' => 'ef_video',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Media */
$handler = $view->new_display('page', 'Media', 'page');
$handler->display->display_options['path'] = 'news/media';
$handler->display->display_options['menu']['title'] = 'All';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$view->save();
$view = new view();
$view->name = 'ef_photo_galleries';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Photo Galleries';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Photo Galleries';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Images */
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['id'] = 'field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['table'] = 'field_data_field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['field'] = 'field_ef_photo_gallery_images';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['label'] = '';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['type'] = 'lightbox2__lightbox__thumbnail__thumbnail';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_ef_photo_gallery_images']['delta_offset'] = '0';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['null']['must_not_be'] = TRUE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_photo_gallery' => 'ef_photo_gallery',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'photo-galleries';

$view->save();
$view = new view();
$view->name = 'ef_videos';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Videos';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Videos';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Field: Main Image */
$handler->display->display_options['fields']['field_ef_main_image']['id'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['table'] = 'field_data_field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['field'] = 'field_ef_main_image';
$handler->display->display_options['fields']['field_ef_main_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ef_main_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Sort criterion: Node: Published at */
$handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
$handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
$handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
/* Contextual filter: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['null']['must_not_be'] = TRUE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ef_video' => 'ef_video',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'videos';

$view->save();
}
