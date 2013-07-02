<?php
/**
 * @file
 * esdportal_str.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function esdportal_str_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'manage_school_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage School Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage School Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'log' => 'log',
    'timestamp' => 'timestamp',
    'phone' => 'phone',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'log' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'School Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'medium';
  /* Field: Content revision: Log message */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'school_profile' => 'school_profile',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage-school-profiles';
  $export['manage_school_profiles'] = $view;

  $view = new view();
  $view->name = 'manage_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Manage Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_fname' => 'field_fname',
    'field_lname' => 'field_lname',
    'access' => 'access',
    'login' => 'login',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'access';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="admin/people/create">+ Create New User</a>';
  /* Field: : field_fname */
  $handler->display->display_options['fields']['field_fname']['id'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['table'] = 'field_data_field_fname';
  $handler->display->display_options['fields']['field_fname']['field'] = 'field_fname';
  /* Field: : field_lname */
  $handler->display->display_options['fields']['field_lname']['id'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['table'] = 'field_data_field_lname';
  $handler->display->display_options['fields']['field_lname']['field'] = 'field_lname';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: User: Last login */
  $handler->display->display_options['sorts']['login']['id'] = 'login';
  $handler->display->display_options['sorts']['login']['table'] = 'users';
  $handler->display->display_options['sorts']['login']['field'] = 'login';
  $handler->display->display_options['sorts']['login']['order'] = 'DESC';
  $handler->display->display_options['sorts']['login']['granularity'] = 'minute';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: : field_fname (field_fname) */
  $handler->display->display_options['filters']['field_fname_value']['id'] = 'field_fname_value';
  $handler->display->display_options['filters']['field_fname_value']['table'] = 'field_data_field_fname';
  $handler->display->display_options['filters']['field_fname_value']['field'] = 'field_fname_value';
  $handler->display->display_options['filters']['field_fname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fname_value']['expose']['operator_id'] = 'field_fname_value_op';
  $handler->display->display_options['filters']['field_fname_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_fname_value']['expose']['operator'] = 'field_fname_value_op';
  $handler->display->display_options['filters']['field_fname_value']['expose']['identifier'] = 'field_fname_value';
  $handler->display->display_options['filters']['field_fname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_fname_value']['group_info']['label'] = 'First Name (field_fname)';
  $handler->display->display_options['filters']['field_fname_value']['group_info']['identifier'] = 'field_fname_value';
  $handler->display->display_options['filters']['field_fname_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_fname_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: : field_lname (field_lname:format) */
  $handler->display->display_options['filters']['field_lname_format']['id'] = 'field_lname_format';
  $handler->display->display_options['filters']['field_lname_format']['table'] = 'field_data_field_lname';
  $handler->display->display_options['filters']['field_lname_format']['field'] = 'field_lname_format';
  $handler->display->display_options['filters']['field_lname_format']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lname_format']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lname_format']['expose']['operator_id'] = 'field_lname_format_op';
  $handler->display->display_options['filters']['field_lname_format']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_lname_format']['expose']['operator'] = 'field_lname_format_op';
  $handler->display->display_options['filters']['field_lname_format']['expose']['identifier'] = 'field_lname_format';
  $handler->display->display_options['filters']['field_lname_format']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage-users';
  $export['manage_users'] = $view;

  $view = new view();
  $view->name = 'meap_2012';
  $view->description = 'Default view for data table MEAP 2012';
  $view->tag = 'data table';
  $view->base_table = 'meap_2012';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'MEAP 2012';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'SchoolYear' => 'SchoolYear',
    'ISDCode' => 'ISDCode',
    'ISDName' => 'ISDName',
    'DistrictCode' => 'DistrictCode',
    'DistrictName' => 'DistrictName',
    'BuildingCode' => 'BuildingCode',
    'BuildingName' => 'BuildingName',
    'LOCALE_NAME' => 'LOCALE_NAME',
    'TOTAL_ENROLLMENT' => 'TOTAL_ENROLLMENT',
    'MALE_ENROLLMENT' => 'MALE_ENROLLMENT',
    'FEMALE_ENROLLMENT' => 'FEMALE_ENROLLMENT',
    'AMERICAN_INDIAN_ENROLLMENT' => 'AMERICAN_INDIAN_ENROLLMENT',
    'ASIAN_ENROLLMENT' => 'ASIAN_ENROLLMENT',
    'AFRICAN_AMERICAN_ENROLLMENT' => 'AFRICAN_AMERICAN_ENROLLMENT',
    'HISPANIC_ENROLLMENT' => 'HISPANIC_ENROLLMENT',
    'HAWAIIAN_ENROLLMENT' => 'HAWAIIAN_ENROLLMENT',
    'WHITE_ENROLLMENT' => 'WHITE_ENROLLMENT',
    'TWO_OR_MORE_RACES_ENROLLMENT' => 'TWO_OR_MORE_RACES_ENROLLMENT',
    'KINDERGARTEN_ENROLLMENT' => 'KINDERGARTEN_ENROLLMENT',
    'GRADE_1_ENROLLMENT' => 'GRADE_1_ENROLLMENT',
    'GRADE_2_ENROLLMENT' => 'GRADE_2_ENROLLMENT',
    'GRADE_3_ENROLLMENT' => 'GRADE_3_ENROLLMENT',
    'GRADE_4_ENROLLMENT' => 'GRADE_4_ENROLLMENT',
    'GRADE_5_ENROLLMENT' => 'GRADE_5_ENROLLMENT',
    'GRADE_6_ENROLLMENT' => 'GRADE_6_ENROLLMENT',
    'GRADE_7_ENROLLMENT' => 'GRADE_7_ENROLLMENT',
    'GRADE_8_ENROLLMENT' => 'GRADE_8_ENROLLMENT',
    'GRADE_9_ENROLLMENT' => 'GRADE_9_ENROLLMENT',
    'GRADE_10_ENROLLMENT' => 'GRADE_10_ENROLLMENT',
    'GRADE_11_ENROLLMENT' => 'GRADE_11_ENROLLMENT',
    'GRADE_12_ENROLLMENT' => 'GRADE_12_ENROLLMENT',
    'ECONOMIC_DISADVANTAGED_ENROLLMENT' => 'ECONOMIC_DISADVANTAGED_ENROLLMENT',
    'SPECIAL_EDUCATION_ENROLLMENT' => 'SPECIAL_EDUCATION_ENROLLMENT',
    'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT',
    'HOMELESS_ENROLLMENT' => 'HOMELESS_ENROLLMENT',
    'MIGRANT_ENROLLMENT' => 'MIGRANT_ENROLLMENT',
    'AYP_STATUS' => 'AYP_STATUS',
    'AYP_PHASE' => 'AYP_PHASE',
    'GRADE_3_MATH_TESTED' => 'GRADE_3_MATH_TESTED',
    'GRADE_3_MATH_PROFICIENT' => 'GRADE_3_MATH_PROFICIENT',
    'GRADE_3_MATH_AVG_SS' => 'GRADE_3_MATH_AVG_SS',
    'GRADE_4_MATH_TESTED' => 'GRADE_4_MATH_TESTED',
    'GRADE_4_MATH_PROFICIENT' => 'GRADE_4_MATH_PROFICIENT',
    'GRADE_4_MATH_AVG_SS' => 'GRADE_4_MATH_AVG_SS',
    'GRADE_5_MATH_TESTED' => 'GRADE_5_MATH_TESTED',
    'GRADE_5_MATH_PROFICIENT' => 'GRADE_5_MATH_PROFICIENT',
    'GRADE_5_MATH_AVG_SS' => 'GRADE_5_MATH_AVG_SS',
    'GRADE_6_MATH_TESTED' => 'GRADE_6_MATH_TESTED',
    'GRADE_6_MATH_PROFICIENT' => 'GRADE_6_MATH_PROFICIENT',
    'GRADE_6_MATH_AVG_SS' => 'GRADE_6_MATH_AVG_SS',
    'GRADE_7_MATH_TESTED' => 'GRADE_7_MATH_TESTED',
    'GRADE_7_MATH_PROFICIENT' => 'GRADE_7_MATH_PROFICIENT',
    'GRADE_7_MATH_AVG_SS' => 'GRADE_7_MATH_AVG_SS',
    'GRADE_8_MATH_TESTED' => 'GRADE_8_MATH_TESTED',
    'GRADE_8_MATH_PROFICIENT' => 'GRADE_8_MATH_PROFICIENT',
    'GRADE_8_MATH_AVG_SS' => 'GRADE_8_MATH_AVG_SS',
    'GRADE_3_READING_TESTED' => 'GRADE_3_READING_TESTED',
    'GRADE_3_READING_PROFICIENT' => 'GRADE_3_READING_PROFICIENT',
    'GRADE_3_READING_AVG_SS' => 'GRADE_3_READING_AVG_SS',
    'GRADE_4_READING_TESTED' => 'GRADE_4_READING_TESTED',
    'GRADE_4_READING_PROFICIENT' => 'GRADE_4_READING_PROFICIENT',
    'GRADE_4_READING_AVG_SS' => 'GRADE_4_READING_AVG_SS',
    'GRADE_5_READING_TESTED' => 'GRADE_5_READING_TESTED',
    'GRADE_5_READING_PROFICIENT' => 'GRADE_5_READING_PROFICIENT',
    'GRADE_5_READING_AVG_SS' => 'GRADE_5_READING_AVG_SS',
    'GRADE_6_READING_TESTED' => 'GRADE_6_READING_TESTED',
    'GRADE_6_READING_PROFICIENT' => 'GRADE_6_READING_PROFICIENT',
    'GRADE_6_READING_AVG_SS' => 'GRADE_6_READING_AVG_SS',
    'GRADE_7_READING_TESTED' => 'GRADE_7_READING_TESTED',
    'GRADE_7_READING_PROFICIENT' => 'GRADE_7_READING_PROFICIENT',
    'GRADE_7_READING_AVG_SS' => 'GRADE_7_READING_AVG_SS',
    'GRADE_8_READING_TESTED' => 'GRADE_8_READING_TESTED',
    'GRADE_8_READING_PROFICIENT' => 'GRADE_8_READING_PROFICIENT',
    'GRADE_8_READING_AVG_SS' => 'GRADE_8_READING_AVG_SS',
    'GRADE_5_SCIENCE_TESTED' => 'GRADE_5_SCIENCE_TESTED',
    'GRADE_5_SCIENCE_PROFICIENT' => 'GRADE_5_SCIENCE_PROFICIENT',
    'GRADE_5_SCIENCE_AVG_SS' => 'GRADE_5_SCIENCE_AVG_SS',
    'GRADE_8_SCIENCE_TESTED' => 'GRADE_8_SCIENCE_TESTED',
    'GRADE_8_SCIENCE_PROFICIENT' => 'GRADE_8_SCIENCE_PROFICIENT',
    'GRADE_8_SCIENCE_AVG_SS' => 'GRADE_8_SCIENCE_AVG_SS',
    'GRADE_6_SOCIAL_STUDIES_TESTED' => 'GRADE_6_SOCIAL_STUDIES_TESTED',
    'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => 'GRADE_6_SOCIAL_STUDIES_PROFICIENT',
    'GRADE_6_SOCIAL_STUDIES_AVG_SS' => 'GRADE_6_SOCIAL_STUDIES_AVG_SS',
    'GRADE_9_SOCIAL_STUDIES_TESTED' => 'GRADE_9_SOCIAL_STUDIES_TESTED',
    'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => 'GRADE_9_SOCIAL_STUDIES_PROFICIENT',
    'GRADE_9_SOCIAL_STUDIES_AVG_SS' => 'GRADE_9_SOCIAL_STUDIES_AVG_SS',
    'GRADE_11_MATH_TESTED' => 'GRADE_11_MATH_TESTED',
    'GRADE_11_MATH_PROFICIENT' => 'GRADE_11_MATH_PROFICIENT',
    'GRADE_11_MATH_AVG_SS' => 'GRADE_11_MATH_AVG_SS',
    'GRADE_11_READING_TESTED' => 'GRADE_11_READING_TESTED',
    'GRADE_11_READING_PROFICIENT' => 'GRADE_11_READING_PROFICIENT',
    'GRADE_11_READING_AVG_SS' => 'GRADE_11_READING_AVG_SS',
    'GRADE_11_WRITING_TESTED' => 'GRADE_11_WRITING_TESTED',
    'GRADE_11_WRITING_PROFICIENT' => 'GRADE_11_WRITING_PROFICIENT',
    'GRADE_11_WRITING_AVG_SS' => 'GRADE_11_WRITING_AVG_SS',
    'GRADE_11_SCIENCE_TESTED' => 'GRADE_11_SCIENCE_TESTED',
    'GRADE_11_SCIENCE_PROFICIENT' => 'GRADE_11_SCIENCE_PROFICIENT',
    'GRADE_11_SCIENCE_AVG_SS' => 'GRADE_11_SCIENCE_AVG_SS',
    'GRADE_11_SOCIAL_STUDIES_TESTED' => 'GRADE_11_SOCIAL_STUDIES_TESTED',
    'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => 'GRADE_11_SOCIAL_STUDIES_PROFICIENT',
    'GRADE_11_SOCIAL_STUDIES_AVG_SS' => 'GRADE_11_SOCIAL_STUDIES_AVG_SS',
    'GRADE_11_MATH_PERCENT_READY' => 'GRADE_11_MATH_PERCENT_READY',
    'GRADE_11_READING_PERCENT_READY' => 'GRADE_11_READING_PERCENT_READY',
    'GRADE_11_SCIENCE_PERCENT_READY' => 'GRADE_11_SCIENCE_PERCENT_READY',
    'GRADE_11_ENGLISH_PERCENT_READY' => 'GRADE_11_ENGLISH_PERCENT_READY',
    'GRADE_11_ALL_SUBJECT_PERCENT_READY' => 'GRADE_11_ALL_SUBJECT_PERCENT_READY',
    'COHORT_4_YEAR' => 'COHORT_4_YEAR',
    'GRADUATION_RATE_4_YEAR' => 'GRADUATION_RATE_4_YEAR',
    'DROPOUT_RATE_4_YEAR' => 'DROPOUT_RATE_4_YEAR',
    'GRADUATES_4_YEAR' => 'GRADUATES_4_YEAR',
    'DROPOUTS_4_YEAR' => 'DROPOUTS_4_YEAR',
    'CONTINUING_4_YEAR' => 'CONTINUING_4_YEAR',
    'OTHER_COMPLETER_4_YEAR' => 'OTHER_COMPLETER_4_YEAR',
    'COHORT_5_YEAR' => 'COHORT_5_YEAR',
    'GRADUATION_RATE_5_YEAR' => 'GRADUATION_RATE_5_YEAR',
    'DROPOUT_RATE_5_YEAR' => 'DROPOUT_RATE_5_YEAR',
    'GRADUATES_5_YEAR' => 'GRADUATES_5_YEAR',
    'DROPOUTS_5_YEAR' => 'DROPOUTS_5_YEAR',
    'CONTINUING_5_YEAR' => 'CONTINUING_5_YEAR',
    'OTHER_COMPLETER_5_YEAR' => 'OTHER_COMPLETER_5_YEAR',
    'COHORT_6_YEAR' => 'COHORT_6_YEAR',
    'GRADUATION_RATE_6_YEAR' => 'GRADUATION_RATE_6_YEAR',
    'DROPOUT_RATE_6_YEAR' => 'DROPOUT_RATE_6_YEAR',
    'GRADUATES_6_YEAR' => 'GRADUATES_6_YEAR',
    'DROPOUTS_6_YEAR' => 'DROPOUTS_6_YEAR',
    'CONTINUING_6_YEAR' => 'CONTINUING_6_YEAR',
    'OTHER_COMPLETER_6_YEAR' => 'OTHER_COMPLETER_6_YEAR',
    'SORT_ORDER' => 'SORT_ORDER',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'SchoolYear' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ISDCode' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ISDName' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DistrictCode' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DistrictName' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'BuildingCode' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'BuildingName' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'LOCALE_NAME' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TOTAL_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'MALE_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'FEMALE_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'AMERICAN_INDIAN_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ASIAN_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'AFRICAN_AMERICAN_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'HISPANIC_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'HAWAIIAN_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'WHITE_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TWO_OR_MORE_RACES_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'KINDERGARTEN_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_1_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_2_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_3_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_4_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_7_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_9_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_10_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_12_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SPECIAL_EDUCATION_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'HOMELESS_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'MIGRANT_ENROLLMENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'AYP_STATUS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'AYP_PHASE' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_3_MATH_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_3_MATH_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_3_MATH_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_4_MATH_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_4_MATH_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_4_MATH_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_MATH_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_MATH_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_MATH_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_MATH_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_MATH_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_MATH_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_7_MATH_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_7_MATH_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_7_MATH_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_MATH_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_MATH_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_MATH_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_3_READING_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_3_READING_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_3_READING_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_4_READING_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_4_READING_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_4_READING_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_READING_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_READING_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_READING_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_READING_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_READING_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_READING_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_7_READING_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_7_READING_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_7_READING_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_READING_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_READING_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_READING_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_SCIENCE_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_SCIENCE_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_5_SCIENCE_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_SCIENCE_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_SCIENCE_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_8_SCIENCE_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_MATH_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_MATH_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_MATH_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_READING_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_READING_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_READING_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_WRITING_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_WRITING_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_WRITING_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_SCIENCE_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_SCIENCE_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_SCIENCE_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_MATH_PERCENT_READY' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_READING_PERCENT_READY' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_SCIENCE_PERCENT_READY' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_ENGLISH_PERCENT_READY' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'COHORT_4_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADUATION_RATE_4_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DROPOUT_RATE_4_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADUATES_4_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DROPOUTS_4_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'CONTINUING_4_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'OTHER_COMPLETER_4_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'COHORT_5_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADUATION_RATE_5_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DROPOUT_RATE_5_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADUATES_5_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DROPOUTS_5_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'CONTINUING_5_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'OTHER_COMPLETER_5_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'COHORT_6_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADUATION_RATE_6_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DROPOUT_RATE_6_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GRADUATES_6_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DROPOUTS_6_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'CONTINUING_6_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'OTHER_COMPLETER_6_YEAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SORT_ORDER' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'There is no data in this table.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: MEAP 2012: Schoolyear */
  $handler->display->display_options['fields']['SchoolYear']['id'] = 'SchoolYear';
  $handler->display->display_options['fields']['SchoolYear']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['SchoolYear']['field'] = 'SchoolYear';
  $handler->display->display_options['fields']['SchoolYear']['label'] = '';
  /* Field: MEAP 2012: Isdcode */
  $handler->display->display_options['fields']['ISDCode']['id'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['ISDCode']['field'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['label'] = '';
  /* Field: MEAP 2012: Isdname */
  $handler->display->display_options['fields']['ISDName']['id'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['ISDName']['field'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['label'] = '';
  /* Field: MEAP 2012: Districtcode */
  $handler->display->display_options['fields']['DistrictCode']['id'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['DistrictCode']['field'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['label'] = '';
  /* Field: MEAP 2012: Districtname */
  $handler->display->display_options['fields']['DistrictName']['id'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['DistrictName']['field'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['label'] = '';
  /* Field: MEAP 2012: bcode */
  $handler->display->display_options['fields']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['BuildingCode']['field'] = 'BuildingCode';
  /* Field: MEAP 2012: Buildingname */
  $handler->display->display_options['fields']['BuildingName']['id'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['BuildingName']['field'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['label'] = '';
  /* Field: MEAP 2012: Locale name */
  $handler->display->display_options['fields']['LOCALE_NAME']['id'] = 'LOCALE_NAME';
  $handler->display->display_options['fields']['LOCALE_NAME']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['LOCALE_NAME']['field'] = 'LOCALE_NAME';
  $handler->display->display_options['fields']['LOCALE_NAME']['label'] = '';
  /* Field: MEAP 2012: Total enrollment */
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['id'] = 'TOTAL_ENROLLMENT';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['field'] = 'TOTAL_ENROLLMENT';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Male enrollment */
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['id'] = 'MALE_ENROLLMENT';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['field'] = 'MALE_ENROLLMENT';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Female enrollment */
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['id'] = 'FEMALE_ENROLLMENT';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['field'] = 'FEMALE_ENROLLMENT';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: American indian enrollment */
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['id'] = 'AMERICAN_INDIAN_ENROLLMENT';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['field'] = 'AMERICAN_INDIAN_ENROLLMENT';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Asian enrollment */
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['id'] = 'ASIAN_ENROLLMENT';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['field'] = 'ASIAN_ENROLLMENT';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: African american enrollment */
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['id'] = 'AFRICAN_AMERICAN_ENROLLMENT';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['field'] = 'AFRICAN_AMERICAN_ENROLLMENT';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Hispanic enrollment */
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['id'] = 'HISPANIC_ENROLLMENT';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['field'] = 'HISPANIC_ENROLLMENT';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Hawaiian enrollment */
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['id'] = 'HAWAIIAN_ENROLLMENT';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['field'] = 'HAWAIIAN_ENROLLMENT';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: White enrollment */
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['id'] = 'WHITE_ENROLLMENT';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['field'] = 'WHITE_ENROLLMENT';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Two or more races enrollment */
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['id'] = 'TWO_OR_MORE_RACES_ENROLLMENT';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['field'] = 'TWO_OR_MORE_RACES_ENROLLMENT';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Kindergarten enrollment */
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['id'] = 'KINDERGARTEN_ENROLLMENT';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['field'] = 'KINDERGARTEN_ENROLLMENT';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 1 enrollment */
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['id'] = 'GRADE_1_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['field'] = 'GRADE_1_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 2 enrollment */
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['id'] = 'GRADE_2_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['field'] = 'GRADE_2_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 3 enrollment */
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['id'] = 'GRADE_3_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['field'] = 'GRADE_3_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 4 enrollment */
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['id'] = 'GRADE_4_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['field'] = 'GRADE_4_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 5 enrollment */
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['id'] = 'GRADE_5_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['field'] = 'GRADE_5_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 6 enrollment */
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['id'] = 'GRADE_6_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['field'] = 'GRADE_6_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 7 enrollment */
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['id'] = 'GRADE_7_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['field'] = 'GRADE_7_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 8 enrollment */
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['id'] = 'GRADE_8_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['field'] = 'GRADE_8_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 9 enrollment */
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['id'] = 'GRADE_9_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['field'] = 'GRADE_9_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 10 enrollment */
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['id'] = 'GRADE_10_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['field'] = 'GRADE_10_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 11 enrollment */
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['id'] = 'GRADE_11_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['field'] = 'GRADE_11_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Grade 12 enrollment */
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['id'] = 'GRADE_12_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['field'] = 'GRADE_12_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Economic disadvantaged enrollment */
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['id'] = 'ECONOMIC_DISADVANTAGED_ENROLLMENT';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['field'] = 'ECONOMIC_DISADVANTAGED_ENROLLMENT';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Special education enrollment */
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['id'] = 'SPECIAL_EDUCATION_ENROLLMENT';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['field'] = 'SPECIAL_EDUCATION_ENROLLMENT';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: English language learners enrollment */
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['id'] = 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['field'] = 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Homeless enrollment */
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['id'] = 'HOMELESS_ENROLLMENT';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['field'] = 'HOMELESS_ENROLLMENT';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Migrant enrollment */
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['id'] = 'MIGRANT_ENROLLMENT';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['field'] = 'MIGRANT_ENROLLMENT';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2012: Ayp status */
  $handler->display->display_options['fields']['AYP_STATUS']['id'] = 'AYP_STATUS';
  $handler->display->display_options['fields']['AYP_STATUS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['AYP_STATUS']['field'] = 'AYP_STATUS';
  $handler->display->display_options['fields']['AYP_STATUS']['label'] = '';
  /* Field: MEAP 2012: Ayp phase */
  $handler->display->display_options['fields']['AYP_PHASE']['id'] = 'AYP_PHASE';
  $handler->display->display_options['fields']['AYP_PHASE']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['AYP_PHASE']['field'] = 'AYP_PHASE';
  $handler->display->display_options['fields']['AYP_PHASE']['label'] = '';
  /* Field: MEAP 2012: Grade 3 math tested */
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['id'] = 'GRADE_3_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['field'] = 'GRADE_3_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 3 math proficient */
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['id'] = 'GRADE_3_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['field'] = 'GRADE_3_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 3 math avg ss */
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['id'] = 'GRADE_3_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['field'] = 'GRADE_3_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 4 math tested */
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['id'] = 'GRADE_4_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['field'] = 'GRADE_4_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 4 math proficient */
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['id'] = 'GRADE_4_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['field'] = 'GRADE_4_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 4 math avg ss */
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['id'] = 'GRADE_4_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['field'] = 'GRADE_4_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 5 math tested */
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['id'] = 'GRADE_5_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['field'] = 'GRADE_5_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 5 math proficient */
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['id'] = 'GRADE_5_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['field'] = 'GRADE_5_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 5 math avg ss */
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['id'] = 'GRADE_5_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['field'] = 'GRADE_5_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 6 math tested */
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['id'] = 'GRADE_6_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['field'] = 'GRADE_6_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 6 math proficient */
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['id'] = 'GRADE_6_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['field'] = 'GRADE_6_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 6 math avg ss */
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['id'] = 'GRADE_6_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['field'] = 'GRADE_6_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 7 math tested */
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['id'] = 'GRADE_7_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['field'] = 'GRADE_7_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 7 math proficient */
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['id'] = 'GRADE_7_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['field'] = 'GRADE_7_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 7 math avg ss */
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['id'] = 'GRADE_7_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['field'] = 'GRADE_7_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 8 math tested */
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['id'] = 'GRADE_8_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['field'] = 'GRADE_8_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 8 math proficient */
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['id'] = 'GRADE_8_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['field'] = 'GRADE_8_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 8 math avg ss */
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['id'] = 'GRADE_8_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['field'] = 'GRADE_8_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 3 reading tested */
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['id'] = 'GRADE_3_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['field'] = 'GRADE_3_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 3 reading proficient */
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['id'] = 'GRADE_3_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['field'] = 'GRADE_3_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 3 reading avg ss */
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['id'] = 'GRADE_3_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['field'] = 'GRADE_3_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 4 reading tested */
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['id'] = 'GRADE_4_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['field'] = 'GRADE_4_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 4 reading proficient */
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['id'] = 'GRADE_4_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['field'] = 'GRADE_4_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 4 reading avg ss */
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['id'] = 'GRADE_4_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['field'] = 'GRADE_4_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 5 reading tested */
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['id'] = 'GRADE_5_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['field'] = 'GRADE_5_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 5 reading proficient */
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['id'] = 'GRADE_5_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['field'] = 'GRADE_5_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 5 reading avg ss */
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['id'] = 'GRADE_5_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['field'] = 'GRADE_5_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 6 reading tested */
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['id'] = 'GRADE_6_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['field'] = 'GRADE_6_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 6 reading proficient */
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['id'] = 'GRADE_6_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['field'] = 'GRADE_6_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 6 reading avg ss */
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['id'] = 'GRADE_6_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['field'] = 'GRADE_6_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 7 reading tested */
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['id'] = 'GRADE_7_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['field'] = 'GRADE_7_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 7 reading proficient */
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['id'] = 'GRADE_7_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['field'] = 'GRADE_7_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 7 reading avg ss */
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['id'] = 'GRADE_7_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['field'] = 'GRADE_7_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 8 reading tested */
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['id'] = 'GRADE_8_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['field'] = 'GRADE_8_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 8 reading proficient */
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['id'] = 'GRADE_8_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['field'] = 'GRADE_8_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 8 reading avg ss */
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['id'] = 'GRADE_8_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['field'] = 'GRADE_8_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 5 science tested */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['id'] = 'GRADE_5_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['field'] = 'GRADE_5_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 5 science proficient */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['id'] = 'GRADE_5_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['field'] = 'GRADE_5_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 5 science avg ss */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['id'] = 'GRADE_5_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['field'] = 'GRADE_5_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 8 science tested */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['id'] = 'GRADE_8_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['field'] = 'GRADE_8_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 8 science proficient */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['id'] = 'GRADE_8_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['field'] = 'GRADE_8_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 8 science avg ss */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['id'] = 'GRADE_8_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['field'] = 'GRADE_8_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 6 social studies tested */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_6_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_6_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 6 social studies proficient */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_6_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_6_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 6 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_6_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_6_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 9 social studies tested */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_9_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_9_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 9 social studies proficient */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_9_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_9_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 9 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_9_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_9_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 11 math tested */
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['id'] = 'GRADE_11_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['field'] = 'GRADE_11_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 11 math proficient */
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['id'] = 'GRADE_11_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['field'] = 'GRADE_11_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 11 math avg ss */
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['id'] = 'GRADE_11_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['field'] = 'GRADE_11_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 11 reading tested */
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['id'] = 'GRADE_11_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['field'] = 'GRADE_11_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 11 reading proficient */
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['id'] = 'GRADE_11_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['field'] = 'GRADE_11_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 11 reading avg ss */
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['id'] = 'GRADE_11_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['field'] = 'GRADE_11_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 11 writing tested */
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['id'] = 'GRADE_11_WRITING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['field'] = 'GRADE_11_WRITING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 11 writing proficient */
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['id'] = 'GRADE_11_WRITING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['field'] = 'GRADE_11_WRITING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 11 writing avg ss */
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['id'] = 'GRADE_11_WRITING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['field'] = 'GRADE_11_WRITING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 11 science tested */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['id'] = 'GRADE_11_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['field'] = 'GRADE_11_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 11 science proficient */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['id'] = 'GRADE_11_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['field'] = 'GRADE_11_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 11 science avg ss */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['id'] = 'GRADE_11_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['field'] = 'GRADE_11_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 11 social studies tested */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_11_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_11_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2012: Grade 11 social studies proficient */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_11_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_11_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2012: Grade 11 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_11_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_11_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2012: Grade 11 math percent ready */
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['id'] = 'GRADE_11_MATH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['field'] = 'GRADE_11_MATH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2012: Grade 11 reading percent ready */
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['id'] = 'GRADE_11_READING_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['field'] = 'GRADE_11_READING_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2012: Grade 11 science percent ready */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['id'] = 'GRADE_11_SCIENCE_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['field'] = 'GRADE_11_SCIENCE_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2012: Grade 11 english percent ready */
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['id'] = 'GRADE_11_ENGLISH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['field'] = 'GRADE_11_ENGLISH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2012: Grade 11 all subject percent ready */
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['id'] = 'GRADE_11_ALL_SUBJECT_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['field'] = 'GRADE_11_ALL_SUBJECT_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2012: Cohort 4 year */
  $handler->display->display_options['fields']['COHORT_4_YEAR']['id'] = 'COHORT_4_YEAR';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['field'] = 'COHORT_4_YEAR';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['label'] = '';
  /* Field: MEAP 2012: Graduation rate 4 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['id'] = 'GRADUATION_RATE_4_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['field'] = 'GRADUATION_RATE_4_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['label'] = '';
  /* Field: MEAP 2012: Dropout rate 4 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['id'] = 'DROPOUT_RATE_4_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['field'] = 'DROPOUT_RATE_4_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['label'] = '';
  /* Field: MEAP 2012: Graduates 4 year */
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['id'] = 'GRADUATES_4_YEAR';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['field'] = 'GRADUATES_4_YEAR';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['label'] = '';
  /* Field: MEAP 2012: Dropouts 4 year */
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['id'] = 'DROPOUTS_4_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['field'] = 'DROPOUTS_4_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['label'] = '';
  /* Field: MEAP 2012: Continuing 4 year */
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['id'] = 'CONTINUING_4_YEAR';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['field'] = 'CONTINUING_4_YEAR';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['label'] = '';
  /* Field: MEAP 2012: Other completer 4 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['id'] = 'OTHER_COMPLETER_4_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['field'] = 'OTHER_COMPLETER_4_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['label'] = '';
  /* Field: MEAP 2012: Cohort 5 year */
  $handler->display->display_options['fields']['COHORT_5_YEAR']['id'] = 'COHORT_5_YEAR';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['field'] = 'COHORT_5_YEAR';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['label'] = '';
  /* Field: MEAP 2012: Graduation rate 5 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['id'] = 'GRADUATION_RATE_5_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['field'] = 'GRADUATION_RATE_5_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['label'] = '';
  /* Field: MEAP 2012: Dropout rate 5 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['id'] = 'DROPOUT_RATE_5_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['field'] = 'DROPOUT_RATE_5_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['label'] = '';
  /* Field: MEAP 2012: Graduates 5 year */
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['id'] = 'GRADUATES_5_YEAR';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['field'] = 'GRADUATES_5_YEAR';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['label'] = '';
  /* Field: MEAP 2012: Dropouts 5 year */
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['id'] = 'DROPOUTS_5_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['field'] = 'DROPOUTS_5_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['label'] = '';
  /* Field: MEAP 2012: Continuing 5 year */
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['id'] = 'CONTINUING_5_YEAR';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['field'] = 'CONTINUING_5_YEAR';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['label'] = '';
  /* Field: MEAP 2012: Other completer 5 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['id'] = 'OTHER_COMPLETER_5_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['field'] = 'OTHER_COMPLETER_5_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['label'] = '';
  /* Field: MEAP 2012: Cohort 6 year */
  $handler->display->display_options['fields']['COHORT_6_YEAR']['id'] = 'COHORT_6_YEAR';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['field'] = 'COHORT_6_YEAR';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['label'] = '';
  /* Field: MEAP 2012: Graduation rate 6 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['id'] = 'GRADUATION_RATE_6_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['field'] = 'GRADUATION_RATE_6_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['label'] = '';
  /* Field: MEAP 2012: Dropout rate 6 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['id'] = 'DROPOUT_RATE_6_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['field'] = 'DROPOUT_RATE_6_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['label'] = '';
  /* Field: MEAP 2012: Graduates 6 year */
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['id'] = 'GRADUATES_6_YEAR';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['field'] = 'GRADUATES_6_YEAR';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['label'] = '';
  /* Field: MEAP 2012: Dropouts 6 year */
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['id'] = 'DROPOUTS_6_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['field'] = 'DROPOUTS_6_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['label'] = '';
  /* Field: MEAP 2012: Continuing 6 year */
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['id'] = 'CONTINUING_6_YEAR';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['field'] = 'CONTINUING_6_YEAR';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['label'] = '';
  /* Field: MEAP 2012: Other completer 6 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['id'] = 'OTHER_COMPLETER_6_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['field'] = 'OTHER_COMPLETER_6_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['label'] = '';
  /* Field: MEAP 2012: Sort order */
  $handler->display->display_options['fields']['SORT_ORDER']['id'] = 'SORT_ORDER';
  $handler->display->display_options['fields']['SORT_ORDER']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['SORT_ORDER']['field'] = 'SORT_ORDER';
  $handler->display->display_options['fields']['SORT_ORDER']['label'] = '';
  /* Field: MEAP 2012: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'meap_2012';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: MEAP 2012: Schoolyear */
  $handler->display->display_options['arguments']['SchoolYear']['id'] = 'SchoolYear';
  $handler->display->display_options['arguments']['SchoolYear']['table'] = 'meap_2012';
  $handler->display->display_options['arguments']['SchoolYear']['field'] = 'SchoolYear';
  $handler->display->display_options['arguments']['SchoolYear']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolYear']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolYear']['title'] = 'MEAP 2012 %1';
  $handler->display->display_options['arguments']['SchoolYear']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['SchoolYear']['summary']['format'] = 'default_summary';
  /* Filter criterion: MEAP 2012: bcode */
  $handler->display->display_options['filters']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['table'] = 'meap_2012';
  $handler->display->display_options['filters']['BuildingCode']['field'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['exposed'] = TRUE;
  $handler->display->display_options['filters']['BuildingCode']['expose']['operator_id'] = 'BuildingCode_op';
  $handler->display->display_options['filters']['BuildingCode']['expose']['label'] = 'bcode';
  $handler->display->display_options['filters']['BuildingCode']['expose']['operator'] = 'BuildingCode_op';
  $handler->display->display_options['filters']['BuildingCode']['expose']['identifier'] = 'bcode';
  $handler->display->display_options['filters']['BuildingCode']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/data/view/meap_2012';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MEAP 2012';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_by_bcode');
  $handler->display->display_options['path'] = 'meapbybcode';
  $export['meap_2012'] = $view;

  $view = new view();
  $view->name = 'school_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'school profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My school profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'schools';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'schools' => 'schools',
    'school_scorecard_status' => 0,
    'school_status' => 0,
    'school_type' => 0,
    'tags' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'School';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Field: Building code */
  $handler->display->display_options['fields']['field_bcode']['id'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['table'] = 'field_data_field_bcode';
  $handler->display->display_options['fields']['field_bcode']['field'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_bcode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Scores';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/admin/content/data/view/esd_hs_2013?bcode=[field_bcode]">ESD HS 2013</a>, <a href="/admin/content/data/view/esd_k8_2013?bcode=[field_bcode]">ESD K8 2013</a>, <a href="/admin/content/data/view/meap_2012?bcode=[field_bcode]">MEAP 2012</a>';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'global $user;
$nids = db_query("SELECT GROUP_CONCAT(CAST(an.nid AS CHAR) SEPARATOR \',\') FROM {acl_user} au INNER JOIN {acl_node} an ON au.acl_id = an.acl_id WHERE an.grant_update = 1 AND au.uid = :uid", array("uid" => $user->uid))->fetchField();
return $nids;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'school_profile' => 'school_profile',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['nid_type'] = 'nids';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'school_profile' => 'school_profile',
  );

  /* Display: school leader page */
  $handler = $view->new_display('page', 'school leader page', 'page');
  $handler->display->display_options['path'] = 'my-school-profiles';
  $export['school_profiles'] = $view;

  return $export;
}
