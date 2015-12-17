<?php
/**
 * @file
 * ct_mafia_games.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_mafia_games_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ct_mafia_games_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_mafia_games_node_info() {
  $items = array(
    'mafia_game' => array(
      'name' => t('Mafia Game'),
      'base' => 'node_content',
      'description' => t('Previous Games of Mafia TODO things and shit'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
