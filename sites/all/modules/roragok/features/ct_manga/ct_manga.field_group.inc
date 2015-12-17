<?php
/**
 * @file
 * ct_manga.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_manga_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manga_stats|node|manga|form';
  $field_group->group_name = 'group_manga_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manga';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stats',
    'weight' => '37',
    'children' => array(
      0 => 'field_manga_status',
      1 => 'field_manga_score',
      2 => 'field_read_volumes',
      3 => 'field_read_chapters',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-manga-stats field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_manga_stats|node|manga|form'] = $field_group;

  return $export;
}
