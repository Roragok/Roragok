<?php
/**
 * @file
 * ct_anime.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_anime_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'anime';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Anime';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Anime';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_anime_status',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="http://myanimelist.net/anime/[field_anime_id]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Anime Score (field_anime_score) */
  $handler->display->display_options['sorts']['field_anime_score_value']['id'] = 'field_anime_score_value';
  $handler->display->display_options['sorts']['field_anime_score_value']['table'] = 'field_data_field_anime_score';
  $handler->display->display_options['sorts']['field_anime_score_value']['field'] = 'field_anime_score_value';
  /* Sort criterion: Content: Anime Status (field_anime_status) */
  $handler->display->display_options['sorts']['field_anime_status_tid']['id'] = 'field_anime_status_tid';
  $handler->display->display_options['sorts']['field_anime_status_tid']['table'] = 'field_data_field_anime_status';
  $handler->display->display_options['sorts']['field_anime_status_tid']['field'] = 'field_anime_status_tid';
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
    'anime' => 'anime',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Anime Status */
  $handler->display->display_options['fields']['field_anime_status']['id'] = 'field_anime_status';
  $handler->display->display_options['fields']['field_anime_status']['table'] = 'field_data_field_anime_status';
  $handler->display->display_options['fields']['field_anime_status']['field'] = 'field_anime_status';
  $handler->display->display_options['fields']['field_anime_status']['label'] = '';
  $handler->display->display_options['fields']['field_anime_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_anime_status']['element_label_colon'] = FALSE;
  /* Field: Content: Anime ID */
  $handler->display->display_options['fields']['field_anime_id']['id'] = 'field_anime_id';
  $handler->display->display_options['fields']['field_anime_id']['table'] = 'field_data_field_anime_id';
  $handler->display->display_options['fields']['field_anime_id']['field'] = 'field_anime_id';
  $handler->display->display_options['fields']['field_anime_id']['label'] = '';
  $handler->display->display_options['fields']['field_anime_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_anime_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_anime_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="http://myanimelist.net/anime/[field_anime_id]">[title]</a>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Anime Status (field_anime_status) */
  $handler->display->display_options['sorts']['field_anime_status_tid']['id'] = 'field_anime_status_tid';
  $handler->display->display_options['sorts']['field_anime_status_tid']['table'] = 'field_data_field_anime_status';
  $handler->display->display_options['sorts']['field_anime_status_tid']['field'] = 'field_anime_status_tid';
  /* Sort criterion: Content: Anime Score (field_anime_score) */
  $handler->display->display_options['sorts']['field_anime_score_value']['id'] = 'field_anime_score_value';
  $handler->display->display_options['sorts']['field_anime_score_value']['table'] = 'field_data_field_anime_score';
  $handler->display->display_options['sorts']['field_anime_score_value']['field'] = 'field_anime_score_value';
  $handler->display->display_options['sorts']['field_anime_score_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'anime';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Anime';
  $handler->display->display_options['menu']['description'] = 'ANIMU';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Recent Anime';
  $export['anime'] = $view;

  $view = new view();
  $view->name = 'random_anime';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Random Anime';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Random Anime';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Anime ID */
  $handler->display->display_options['fields']['field_anime_id']['id'] = 'field_anime_id';
  $handler->display->display_options['fields']['field_anime_id']['table'] = 'field_data_field_anime_id';
  $handler->display->display_options['fields']['field_anime_id']['field'] = 'field_anime_id';
  $handler->display->display_options['fields']['field_anime_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_anime_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="http://myanimelist.net/anime/[field_anime_id]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'anime' => 'anime',
  );
  /* Filter criterion: Content: Anime Score (field_anime_score) */
  $handler->display->display_options['filters']['field_anime_score_value']['id'] = 'field_anime_score_value';
  $handler->display->display_options['filters']['field_anime_score_value']['table'] = 'field_data_field_anime_score';
  $handler->display->display_options['filters']['field_anime_score_value']['field'] = 'field_anime_score_value';
  $handler->display->display_options['filters']['field_anime_score_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_anime_score_value']['value']['value'] = '7';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Random Anime';
  $export['random_anime'] = $view;

  return $export;
}
