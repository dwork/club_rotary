<?php
/**
 * @file
 * club_rotary.features.inc
 */

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
