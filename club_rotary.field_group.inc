<?php
/**
 * @file
 * club_rotary.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function club_rotary_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clubinvolvement|profile2|rotary_information|form';
  $field_group->group_name = 'group_clubinvolvement';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'rotary_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Club Involvement',
    'weight' => '40',
    'children' => array(
      0 => 'field_officer',
      1 => 'field_project_chair',
      2 => 'field_project_member',
      3 => 'field_committee_chair',
      4 => 'field_committee_members',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_clubinvolvement|profile2|rotary_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foundation|profile2|rotary_information|form';
  $field_group->group_name = 'group_foundation';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'rotary_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Foundation',
    'weight' => '50',
    'children' => array(
      0 => 'field_phf',
      1 => 'field_benefactor',
      2 => 'field_spouse_phf',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_foundation|profile2|rotary_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_interests|profile2|rotary_information|form';
  $field_group->group_name = 'group_interests';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'rotary_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Interests and Involvement',
    'weight' => '60',
    'children' => array(
      0 => 'field_foundation',
      1 => 'field_district',
      2 => 'field_club',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_interests|profile2|rotary_information|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rotarydata|profile2|rotary_information|form';
  $field_group->group_name = 'group_rotarydata';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'rotary_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rotary Data',
    'weight' => '30',
    'children' => array(
      0 => 'field_ri_member',
      1 => 'field_sponsor',
      2 => 'field_date_joined',
      3 => 'field_former_club_s_',
      4 => 'field_date_joined_rotary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rotarydata|profile2|rotary_information|form'] = $field_group;

  return $export;
}
