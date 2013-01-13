<?php
/**
 * @file
 * club_rotary.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function club_rotary_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'member_roster';
  $view->description = 'Complete list of each member, for use by other members';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Rotary Member Roster';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Member Roster';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Profile: Profile ID (hidden) */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['ui_name'] = 'Profile: Profile ID (hidden)';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: User UID (hidden) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'User UID (hidden)';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  /* Field: Concatenated Member Name (hidden) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenated Member Name (hidden)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Phone Numbers (hidden) */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_phone']['ui_name'] = 'Phone Numbers (hidden)';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'name' => 'phone_numbers',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  /* Field: Map to Work (link - hidden) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Map to Work (link - hidden)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'MAP';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'map-to-work/[uid]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = TRUE;
  /* Field: Map to Home (link - hidden) */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Map to Home (link - hidden)';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'MAP';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'map-to-home/[uid]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = TRUE;
  /* Field: Classification (hidden) */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_classification']['ui_name'] = 'Classification (hidden)';
  $handler->display->display_options['fields']['field_classification']['label'] = '';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_classification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Email (hidden) */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email (hidden)';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: Employer (hidden) */
  $handler->display->display_options['fields']['field_employer']['id'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['table'] = 'field_data_field_employer';
  $handler->display->display_options['fields']['field_employer']['field'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_employer']['ui_name'] = 'Employer (hidden)';
  $handler->display->display_options['fields']['field_employer']['label'] = '';
  $handler->display->display_options['fields']['field_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_employer']['element_label_colon'] = FALSE;
  /* Field: Project Chair (hidden) */
  $handler->display->display_options['fields']['field_project_chair']['id'] = 'field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['table'] = 'field_data_field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['field'] = 'field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_project_chair']['ui_name'] = 'Project Chair (hidden)';
  $handler->display->display_options['fields']['field_project_chair']['label'] = '';
  $handler->display->display_options['fields']['field_project_chair']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_chair']['alter']['text'] = 'Project Chair: [field_project_chair] ';
  $handler->display->display_options['fields']['field_project_chair']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_chair']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_chair']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_chair']['delta_offset'] = '0';
  /* Field: Project Member (hidden) */
  $handler->display->display_options['fields']['field_project_member']['id'] = 'field_project_member';
  $handler->display->display_options['fields']['field_project_member']['table'] = 'field_data_field_project_member';
  $handler->display->display_options['fields']['field_project_member']['field'] = 'field_project_member';
  $handler->display->display_options['fields']['field_project_member']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_project_member']['ui_name'] = 'Project Member (hidden)';
  $handler->display->display_options['fields']['field_project_member']['label'] = '';
  $handler->display->display_options['fields']['field_project_member']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_member']['alter']['text'] = 'Project Member: [field_project_member]';
  $handler->display->display_options['fields']['field_project_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_member']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_member']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_member']['delta_offset'] = '0';
  /* Field: Rotary name, classification, email &amp; phone */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Rotary name, classification, email & phone';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Rotarian';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[nothing]<BR>
[field_classification]<BR>
[mail]<BR>
[field_contact_phone]<BR>
--<BR>
Projects<BR>
&nbsp; Chair: [field_project_chair]<BR>
&nbsp; Member: [field_project_member]';
  /* Field: Home Address (hidden) */
  $handler->display->display_options['fields']['field_postal_address']['id'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['field'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_postal_address']['ui_name'] = 'Home Address (hidden)';
  $handler->display->display_options['fields']['field_postal_address']['label'] = '';
  $handler->display->display_options['fields']['field_postal_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_postal_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_postal_address']['alter']['text'] = 'Home [nothing_2]<BR>
[field_postal_address]';
  $handler->display->display_options['fields']['field_postal_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_postal_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_postal_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Work Address (hidden) */
  $handler->display->display_options['fields']['field_work_address']['id'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['table'] = 'field_data_field_work_address';
  $handler->display->display_options['fields']['field_work_address']['field'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_work_address']['ui_name'] = 'Work Address (hidden)';
  $handler->display->display_options['fields']['field_work_address']['label'] = '';
  $handler->display->display_options['fields']['field_work_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_work_address']['alter']['text'] = 'Work [nothing_1]<BR>
[field_work_address] ';
  $handler->display->display_options['fields']['field_work_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_work_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Committee Chair (hidden) */
  $handler->display->display_options['fields']['field_committee_chair']['id'] = 'field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['table'] = 'field_data_field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['field'] = 'field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_committee_chair']['ui_name'] = 'Committee Chair (hidden)';
  $handler->display->display_options['fields']['field_committee_chair']['label'] = '';
  $handler->display->display_options['fields']['field_committee_chair']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_chair']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_committee_chair']['delta_offset'] = '0';
  /* Field: Committee Member (hidden) */
  $handler->display->display_options['fields']['field_committee_members']['id'] = 'field_committee_members';
  $handler->display->display_options['fields']['field_committee_members']['table'] = 'field_data_field_committee_members';
  $handler->display->display_options['fields']['field_committee_members']['field'] = 'field_committee_members';
  $handler->display->display_options['fields']['field_committee_members']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_committee_members']['ui_name'] = 'Committee Member (hidden)';
  $handler->display->display_options['fields']['field_committee_members']['label'] = '';
  $handler->display->display_options['fields']['field_committee_members']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_members']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_members']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_committee_members']['delta_offset'] = '0';
  /* Field: Addresses */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Addresses';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[field_postal_address]<BR>
[field_work_address]<BR>
--<BR>
Committees<BR>
&nbsp; Chair: [field_committee_chair] <BR>
&nbsp; Member: [field_committee_members] ';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'user';
  /* Contextual filter: Field: Club/Chapter (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['relationship'] = 'user';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'if (function_exists(\'club_base_get_chapter\')) { 
  return club_base_get_chapter();
} else {
  drupal_set_message(t(\'Error: function "club_base_get_chapter" not found; make sure "club_base" module is installed and activated\'));
}';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotary_information' => 'rotary_information',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'member-roster';
  $handler->display->display_options['menu']['title'] = 'Roster';
  $handler->display->display_options['menu']['description'] = 'Full Roster of members';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['member_roster'] = $view;

  $view = new view();
  $view->name = 'members';
  $view->description = 'Public view of Members';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: User UID (hidden) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'User UID (hidden)';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: User: Retired */
  $handler->display->display_options['fields']['field_retired']['id'] = 'field_retired';
  $handler->display->display_options['fields']['field_retired']['table'] = 'field_data_field_retired';
  $handler->display->display_options['fields']['field_retired']['field'] = 'field_retired';
  $handler->display->display_options['fields']['field_retired']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Retired?';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '         if (isset($data->field_field_retired[0][\'raw\'][\'safe_value\'])) {
            $retired = $data->field_field_retired[0][\'raw\'][\'value\'];
            if ($retired) {
               return " (retired)";
            }
         }';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Employer */
  $handler->display->display_options['fields']['field_employer']['id'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['table'] = 'field_data_field_employer';
  $handler->display->display_options['fields']['field_employer']['field'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_employer']['type'] = 'text_plain';
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  /* Field: Officer (hidden) */
  $handler->display->display_options['fields']['field_officer']['id'] = 'field_officer';
  $handler->display->display_options['fields']['field_officer']['table'] = 'field_data_field_officer';
  $handler->display->display_options['fields']['field_officer']['field'] = 'field_officer';
  $handler->display->display_options['fields']['field_officer']['ui_name'] = 'Officer (hidden)';
  $handler->display->display_options['fields']['field_officer']['label'] = '';
  $handler->display->display_options['fields']['field_officer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_officer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_officer']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_officer']['delta_offset'] = '0';
  /* Field: Classification (hidden) */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['ui_name'] = 'Classification (hidden)';
  $handler->display->display_options['fields']['field_classification']['label'] = '';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_classification']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Concatenated member name (hidden) */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Concatenated member name (hidden)';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix] ';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Concatenate Member Name + Officer */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenate Member Name + Officer';
  $handler->display->display_options['fields']['nothing']['label'] = 'Member';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[nothing_2]<BR>
[field_officer]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]';
  /* Field: Concatenate Classification + Employer */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Concatenate Classification + Employer';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Classification/Employer';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_classification]<BR>[field_employer] [php]';
  /* Sort criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Contextual filter: Field: Club/Chapter (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'if (function_exists(\'club_base_get_chapter\')) { 
  return club_base_get_chapter();
} else {
  drupal_set_message(t(\'Error: function "club_base_get_chapter" not found; make sure "club_base" module is installed and activated\'));
}';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Member Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    35 => '35',
  );
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'member_status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'members';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['members'] = $view;

  return $export;
}
