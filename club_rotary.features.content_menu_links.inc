<?php
/**
 * @file
 * club_rotary.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function club_rotary_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:birthdays
  $menu_links['main-menu:birthdays'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'birthdays',
    'router_path' => 'birthdays',
    'link_title' => 'Birthdays',
    'options' => array(
      'attributes' => array(
        'title' => 'Birthday List',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:clubmembers
  $menu_links['main-menu:clubmembers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'clubmembers',
    'router_path' => 'clubmembers',
    'link_title' => 'Members',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Birthdays');
  t('Members');


  return $menu_links;
}
