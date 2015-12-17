<?php
/**
 * @file
 * ct_mafia_games.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_mafia_games_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actions|node|mafia_game|form';
  $field_group->group_name = 'group_actions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Actions',
    'weight' => '5',
    'children' => array(
      0 => 'group_night',
      1 => 'group_day',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-actions field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_actions|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_day|node|mafia_game|form';
  $field_group->group_name = 'group_day';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Day Actions',
    'weight' => '12',
    'children' => array(
      0 => 'field_day_1_lynch',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Day Actions',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-day field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_day|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|mafia_game|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Game Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_game_url',
      1 => 'field_mafia_game_type',
      2 => 'field_mafia_game_name',
      3 => 'field_mafia_size',
      4 => 'title',
      5 => 'group_roles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_info|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mafia|node|mafia_game|form';
  $field_group->group_name = 'group_mafia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_players';
  $field_group->data = array(
    'label' => 'Mafia',
    'weight' => '23',
    'children' => array(
      0 => 'field_mafia_players',
      1 => 'field_mafia_players_b',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mafia',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-mafia field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_mafia|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_night|node|mafia_game|form';
  $field_group->group_name = 'group_night';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Night Actions',
    'weight' => '13',
    'children' => array(
      0 => 'field_night_1_kills',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Night Actions',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-night field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_night|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_players|node|mafia_game|form';
  $field_group->group_name = 'group_players';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Players',
    'weight' => '1',
    'children' => array(
      0 => 'group_town',
      1 => 'group_mafia',
      2 => 'group_third',
      3 => 'group_signed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Players',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-players field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_players|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_results|node|mafia_game|form';
  $field_group->group_name = 'group_results';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Results',
    'weight' => '6',
    'children' => array(
      0 => 'field_game_winner',
      1 => 'field_winning_team',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-results field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_results|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_roles|node|mafia_game|form';
  $field_group->group_name = 'group_roles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info';
  $field_group->data = array(
    'label' => 'Roles',
    'weight' => '5',
    'children' => array(
      0 => 'field_mafia_roles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Roles',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-roles field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_roles|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_signed|node|mafia_game|form';
  $field_group->group_name = 'group_signed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_players';
  $field_group->data = array(
    'label' => 'Signed Players',
    'weight' => '20',
    'children' => array(
      0 => 'field_signed_players',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Signed Players',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-signed field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_signed|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third|node|mafia_game|form';
  $field_group->group_name = 'group_third';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_players';
  $field_group->data = array(
    'label' => 'Third Party',
    'weight' => '24',
    'children' => array(
      0 => 'field_third_party',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Third Party',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-third field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_third|node|mafia_game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_town|node|mafia_game|form';
  $field_group->group_name = 'group_town';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mafia_game';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_players';
  $field_group->data = array(
    'label' => 'Town',
    'weight' => '22',
    'children' => array(
      0 => 'field_town_players',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Town',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-town field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_town|node|mafia_game|form'] = $field_group;

  return $export;
}
