<?php
/**
 * @file
 * roragok_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roragok_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
