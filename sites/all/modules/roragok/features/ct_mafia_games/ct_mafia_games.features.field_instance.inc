<?php
/**
 * @file
 * ct_mafia_games.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ct_mafia_games_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-mafia_game-body'.
  $field_instances['node-mafia_game-body'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Any additional notes',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_day_1_lynch'.
  $field_instances['node-mafia_game-field_day_1_lynch'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the person who may have been lynched during the first day.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_day_1_lynch',
    'label' => 'Day 1 Lynch',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_game_url'.
  $field_instances['node-mafia_game-field_game_url'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL to the game',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_game_url',
    'label' => 'Game URL',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_game_winner'.
  $field_instances['node-mafia_game-field_game_winner'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the winning faction.  If using a themed answer select it\'s parent as well.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_game_winner',
    'label' => 'Game Winner',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_mafia_game_name'.
  $field_instances['node-mafia_game-field_mafia_game_name'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Game Name or Theme',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mafia_game_name',
    'label' => 'Mafia Game Name',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_mafia_game_type'.
  $field_instances['node-mafia_game-field_mafia_game_type'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Game type Format eg. Open, Closed',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mafia_game_type',
    'label' => 'Mafia Game Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_mafia_players'.
  $field_instances['node-mafia_game-field_mafia_players'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of Mafia players for the first faction or only faction',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mafia_players',
    'label' => 'Mafia Players A',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_mafia_players_b'.
  $field_instances['node-mafia_game-field_mafia_players_b'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of Mafia players not apart of the first faction',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mafia_players_b',
    'label' => 'Mafia Players B',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_mafia_roles'.
  $field_instances['node-mafia_game-field_mafia_roles'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of Roles in the Game',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mafia_roles',
    'label' => 'Roles',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_mafia_size'.
  $field_instances['node-mafia_game-field_mafia_size'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Size. Mini <10.  Micro 10-13. Large 14+',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mafia_size',
    'label' => 'Mafia Size',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_night_1_kills'.
  $field_instances['node-mafia_game-field_night_1_kills'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select any players killed during Night 1.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_night_1_kills',
    'label' => 'Night 1 Kills',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_signed_players'.
  $field_instances['node-mafia_game-field_signed_players'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of Players in the game',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_signed_players',
    'label' => 'Signed Players',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_third_party'.
  $field_instances['node-mafia_game-field_third_party'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Any Third Party role. eg. Serial Killer.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_third_party',
    'label' => 'Third Party',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_town_players'.
  $field_instances['node-mafia_game-field_town_players'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of Town Players',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_town_players',
    'label' => 'Town Players',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-mafia_game-field_winning_team'.
  $field_instances['node-mafia_game-field_winning_team'] = array(
    'bundle' => 'mafia_game',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the winning faction.  Needed to automate scoring in conjunction with town/mafia/third player list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_winning_team',
    'label' => 'Winning Team',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Any Third Party role. eg. Serial Killer.');
  t('Any additional notes');
  t('Body');
  t('Day 1 Lynch');
  t('Game Name or Theme');
  t('Game URL');
  t('Game Winner');
  t('List of Mafia players for the first faction or only faction');
  t('List of Mafia players not apart of the first faction');
  t('List of Players in the game');
  t('List of Roles in the Game');
  t('List of Town Players');
  t('Mafia Game Name');
  t('Mafia Game Type');
  t('Mafia Players A');
  t('Mafia Players B');
  t('Mafia Size');
  t('Night 1 Kills');
  t('Roles');
  t('Select any players killed during Night 1.');
  t('Select the person who may have been lynched during the first day.');
  t('Select the winning faction.  If using a themed answer select it\'s parent as well.');
  t('Select the winning faction.  Needed to automate scoring in conjunction with town/mafia/third player list.');
  t('Signed Players');
  t('Size. Mini <10.  Micro 10-13. Large 14+');
  t('The Game type Format eg. Open, Closed');
  t('Third Party');
  t('Town Players');
  t('URL to the game');
  t('Winning Team');

  return $field_instances;
}
