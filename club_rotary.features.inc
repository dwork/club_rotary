<?php
/**
 * @file
 * club_rotary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function club_rotary_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function club_rotary_default_profile2_type() {
  $items = array();
  $items['rotary_information'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "rotary_information",
    "label" : "Rotary Information",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
