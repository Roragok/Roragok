<?php
/**
 * @file
 * ct_manga.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_manga_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ct_manga_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_manga_node_info() {
  $items = array(
    'manga' => array(
      'name' => t('Manga'),
      'base' => 'node_content',
      'description' => t('Roragok\'s manga'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
