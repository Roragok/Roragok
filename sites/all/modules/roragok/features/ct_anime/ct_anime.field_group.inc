<?php
/**
 * @file
 * ct_anime.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_anime_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stats|node|anime|form';
  $field_group->group_name = 'group_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'anime';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stats',
    'weight' => '4',
    'children' => array(
      0 => 'field_anime_status',
      1 => 'field_anime_score',
      2 => 'field_anime_episodes_watched',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Stats',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-stats field-group-fieldset',
        'description' => 'Metadata bout anime',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_stats|node|anime|form'] = $field_group;

  return $export;
}
