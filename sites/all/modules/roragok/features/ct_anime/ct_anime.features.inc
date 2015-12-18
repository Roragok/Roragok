<?php
/**
 * @file
 * ct_anime.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_anime_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ct_anime_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ct_anime_image_default_styles() {
  $styles = array();

  // Exported image style: anime.
  $styles['anime'] = array(
    'label' => 'Anime',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 170,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ct_anime_node_info() {
  $items = array(
    'anime' => array(
      'name' => t('Anime'),
      'base' => 'node_content',
      'description' => t('Roragok\'s Anime'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
