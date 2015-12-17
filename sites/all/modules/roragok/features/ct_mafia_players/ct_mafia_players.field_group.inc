<?php
/**
 * @file
 * ct_mafia_players.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_mafia_players_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stats|node|players|form';
  $field_group->group_name = 'group_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'players';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stats',
    'weight' => '33',
    'children' => array(
      0 => 'field_town_games',
      1 => 'field_town_wins',
      2 => 'field_mafia_games',
      3 => 'field_mafia_wins',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Stats',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-stats field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_stats|node|players|form'] = $field_group;

  return $export;
}
