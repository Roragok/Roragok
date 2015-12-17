<?php
/**
 * @file
 * mafia_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mafia_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function mafia_search_default_search_api_index() {
  $items = array();
  $items['mafia'] = entity_import('search_api_index', '{
    "name" : "Mafia",
    "machine_name" : "mafia",
    "description" : "Mafia Shit",
    "server" : "localhost",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "mafia_game" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_day_1_lynch" : { "type" : "integer", "entity_type" : "node" },
        "field_game_winner" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mafia_game_name" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_mafia_game_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_mafia_players" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_mafia_players_b" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_mafia_roles" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_night_1_kills" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_signed_players" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_third_party" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_town_players" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function mafia_search_default_search_api_server() {
  $items = array();
  $items['localhost'] = entity_import('search_api_server', '{
    "name" : "localhost",
    "machine_name" : "localhost",
    "description" : "local db shit",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : { "mafia" : {
          "title" : { "table" : "search_api_db_mafia_text", "type" : "text", "boost" : "1.0" },
          "search_api_language" : {
            "table" : "search_api_db_mafia",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_mafia",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_mafia",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_town_players" : {
            "table" : "search_api_db_mafia_field_town_players",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_mafia_players" : {
            "table" : "search_api_db_mafia_field_mafia_players",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_third_party" : {
            "table" : "search_api_db_mafia_field_third_party",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_mafia_players_b" : {
            "table" : "search_api_db_mafia_field_mafia_players_b",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_signed_players" : {
            "table" : "search_api_db_mafia_field_signed_players",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_night_1_kills" : {
            "table" : "search_api_db_mafia_field_night_1_kills",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_mafia_roles" : {
            "table" : "search_api_db_mafia_field_mafia_roles",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_game_winner" : {
            "table" : "search_api_db_mafia_field_game_winner",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_mafia_game_type" : {
            "table" : "search_api_db_mafia",
            "column" : "field_mafia_game_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_mafia_game_name" : {
            "table" : "search_api_db_mafia",
            "column" : "field_mafia_game_name",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_day_1_lynch" : {
            "table" : "search_api_db_mafia",
            "column" : "field_day_1_lynch",
            "type" : "integer",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
