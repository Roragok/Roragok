<?php
/**
 * @file
 * ct_mafia_players.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_mafia_players_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mafia_player_stats';
  $view->description = 'Overview of Mafia Players';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mafia Player Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mafia Player Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_total_games' => 'field_total_games',
    'field_total_wins' => 'field_total_wins',
    'field_town_games' => 'field_town_games',
    'field_town_wins' => 'field_town_wins',
    'field_mafia_games' => 'field_mafia_games',
    'field_mafia_wins' => 'field_mafia_wins',
    'field_third_games' => 'field_third_games',
    'field_third_wins' => 'field_third_wins',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_games' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_wins' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_town_games' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_town_wins' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mafia_games' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mafia_wins' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_games' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_third_wins' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Total Games */
  $handler->display->display_options['fields']['field_total_games']['id'] = 'field_total_games';
  $handler->display->display_options['fields']['field_total_games']['table'] = 'field_data_field_total_games';
  $handler->display->display_options['fields']['field_total_games']['field'] = 'field_total_games';
  /* Field: Content: Total Wins */
  $handler->display->display_options['fields']['field_total_wins']['id'] = 'field_total_wins';
  $handler->display->display_options['fields']['field_total_wins']['table'] = 'field_data_field_total_wins';
  $handler->display->display_options['fields']['field_total_wins']['field'] = 'field_total_wins';
  /* Field: Content: Town Games */
  $handler->display->display_options['fields']['field_town_games']['id'] = 'field_town_games';
  $handler->display->display_options['fields']['field_town_games']['table'] = 'field_data_field_town_games';
  $handler->display->display_options['fields']['field_town_games']['field'] = 'field_town_games';
  /* Field: Content: Town Wins */
  $handler->display->display_options['fields']['field_town_wins']['id'] = 'field_town_wins';
  $handler->display->display_options['fields']['field_town_wins']['table'] = 'field_data_field_town_wins';
  $handler->display->display_options['fields']['field_town_wins']['field'] = 'field_town_wins';
  /* Field: Content: Mafia Games */
  $handler->display->display_options['fields']['field_mafia_games']['id'] = 'field_mafia_games';
  $handler->display->display_options['fields']['field_mafia_games']['table'] = 'field_data_field_mafia_games';
  $handler->display->display_options['fields']['field_mafia_games']['field'] = 'field_mafia_games';
  /* Field: Content: Mafia Wins */
  $handler->display->display_options['fields']['field_mafia_wins']['id'] = 'field_mafia_wins';
  $handler->display->display_options['fields']['field_mafia_wins']['table'] = 'field_data_field_mafia_wins';
  $handler->display->display_options['fields']['field_mafia_wins']['field'] = 'field_mafia_wins';
  /* Field: Content: Third Games */
  $handler->display->display_options['fields']['field_third_games']['id'] = 'field_third_games';
  $handler->display->display_options['fields']['field_third_games']['table'] = 'field_data_field_third_games';
  $handler->display->display_options['fields']['field_third_games']['field'] = 'field_third_games';
  /* Field: Content: Third Wins */
  $handler->display->display_options['fields']['field_third_wins']['id'] = 'field_third_wins';
  $handler->display->display_options['fields']['field_third_wins']['table'] = 'field_data_field_third_wins';
  $handler->display->display_options['fields']['field_third_wins']['field'] = 'field_third_wins';
  /* Sort criterion: Content: Total Games (field_total_games) */
  $handler->display->display_options['sorts']['field_total_games_value']['id'] = 'field_total_games_value';
  $handler->display->display_options['sorts']['field_total_games_value']['table'] = 'field_data_field_total_games';
  $handler->display->display_options['sorts']['field_total_games_value']['field'] = 'field_total_games_value';
  $handler->display->display_options['sorts']['field_total_games_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'players' => 'players',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mafia-player-stats';
  $export['mafia_player_stats'] = $view;

  return $export;
}
