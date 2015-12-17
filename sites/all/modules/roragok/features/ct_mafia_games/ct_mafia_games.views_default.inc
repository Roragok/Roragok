<?php
/**
 * @file
 * ct_mafia_games.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_mafia_games_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'last_mafia';
  $view->description = 'Last Mafia Game';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Last Mafia';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Last Mafia';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'mafia_game' => 'mafia_game',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['last_mafia'] = $view;

  $view = new view();
  $view->name = 'mafia';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_mafia';
  $view->human_name = 'Mafia';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mafia';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['query']['options']['parse_mode'] = 'single';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['animated'] = 'swing';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['style_options']['clearstyle'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Dump of all our mafia games for filtering. TODO everything
<hr/>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_mafia';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Signed Players */
  $handler->display->display_options['fields']['field_signed_players']['id'] = 'field_signed_players';
  $handler->display->display_options['fields']['field_signed_players']['table'] = 'search_api_index_mafia';
  $handler->display->display_options['fields']['field_signed_players']['field'] = 'field_signed_players';
  $handler->display->display_options['fields']['field_signed_players']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_signed_players']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_signed_players']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_signed_players']['bypass_access'] = 0;
  /* Field: Indexed Content: Game Winner */
  $handler->display->display_options['fields']['field_game_winner']['id'] = 'field_game_winner';
  $handler->display->display_options['fields']['field_game_winner']['table'] = 'search_api_index_mafia';
  $handler->display->display_options['fields']['field_game_winner']['field'] = 'field_game_winner';
  $handler->display->display_options['fields']['field_game_winner']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_game_winner']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_game_winner']['bypass_access'] = 0;
  /* Field: Indexed Content: Game URL */
  $handler->display->display_options['fields']['field_game_url']['id'] = 'field_game_url';
  $handler->display->display_options['fields']['field_game_url']['table'] = 'search_api_index_mafia';
  $handler->display->display_options['fields']['field_game_url']['field'] = 'field_game_url';
  $handler->display->display_options['fields']['field_game_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_game_url']['alter']['text'] = '<a href="[field_game_url]" target="_blank">[field_game_url]</a>';
  $handler->display->display_options['fields']['field_game_url']['alter']['external'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mafia';
  $export['mafia'] = $view;

  return $export;
}
