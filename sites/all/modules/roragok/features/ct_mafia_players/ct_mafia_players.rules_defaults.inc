<?php
/**
 * @file
 * ct_mafia_players.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ct_mafia_players_default_rules_configuration() {
  $items = array();
  $items['rules_update_mafia_players'] = entity_import('rules_config', '{ "rules_update_mafia_players" : {
      "LABEL" : "Update Mafia Players",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : {
        "node_update--mafia_game" : { "bundle" : "mafia_game" },
        "node_insert--mafia_game" : { "bundle" : "mafia_game" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "mafia_game" : "mafia_game", "players" : "players" } }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "$nodes = node_load_multiple(array(), array(\\u0027type\\u0027 =\\u003E \\u0027players\\u0027)); \\r\\nforeach($nodes as $player){\\r\\nnode_save($player);\\r\\n}" } }
      ]
    }
  }');
  return $items;
}
