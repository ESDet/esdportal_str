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
  $view->name = 'act_2011';
  $view->description = 'Default view for data table ACT 2011';
  $view->tag = 'data table';
  $view->base_table = 'act_2011';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'ACT 2011';
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
    'SchoolType' => 'SchoolType',
    'ISDCode' => 'ISDCode',
    'ISDName' => 'ISDName',
    'DistrictCode' => 'DistrictCode',
    'DistrictName' => 'DistrictName',
    'BuildingCode' => 'BuildingCode',
    'BuildingName' => 'BuildingName',
    'NumberTested' => 'NumberTested',
    'allsubAverage' => 'allsubAverage',
    'allsubPercentMeeting' => 'allsubPercentMeeting',
    'readingAverage' => 'readingAverage',
    'readingPercentMeeting' => 'readingPercentMeeting',
    'mathAverage' => 'mathAverage',
    'mathPercentMeeting' => 'mathPercentMeeting',
    'englishAverage' => 'englishAverage',
    'englishPercentMeeting' => 'englishPercentMeeting',
    'scienceAverage' => 'scienceAverage',
    'sciencePercentMeeting' => 'sciencePercentMeeting',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'SchoolType' => array(
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
    'NumberTested' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'allsubAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'allsubPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'readingAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'readingPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mathAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mathPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'englishAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'englishPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'scienceAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'sciencePercentMeeting' => array(
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
  /* Field: Act 2011: Schooltype */
  $handler->display->display_options['fields']['SchoolType']['id'] = 'SchoolType';
  $handler->display->display_options['fields']['SchoolType']['table'] = 'act_2011';
  $handler->display->display_options['fields']['SchoolType']['field'] = 'SchoolType';
  $handler->display->display_options['fields']['SchoolType']['label'] = '';
  /* Field: Act 2011: Isdcode */
  $handler->display->display_options['fields']['ISDCode']['id'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['table'] = 'act_2011';
  $handler->display->display_options['fields']['ISDCode']['field'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['label'] = '';
  /* Field: Act 2011: Isdname */
  $handler->display->display_options['fields']['ISDName']['id'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['table'] = 'act_2011';
  $handler->display->display_options['fields']['ISDName']['field'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['label'] = '';
  /* Field: Act 2011: Districtcode */
  $handler->display->display_options['fields']['DistrictCode']['id'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['table'] = 'act_2011';
  $handler->display->display_options['fields']['DistrictCode']['field'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['label'] = 'DistrictCode';
  /* Field: Act 2011: Districtname */
  $handler->display->display_options['fields']['DistrictName']['id'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['table'] = 'act_2011';
  $handler->display->display_options['fields']['DistrictName']['field'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['label'] = '';
  /* Field: Act 2011: Buildingcode */
  $handler->display->display_options['fields']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['table'] = 'act_2011';
  $handler->display->display_options['fields']['BuildingCode']['field'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['label'] = '';
  /* Field: Act 2011: Buildingname */
  $handler->display->display_options['fields']['BuildingName']['id'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['table'] = 'act_2011';
  $handler->display->display_options['fields']['BuildingName']['field'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['label'] = '';
  /* Field: Act 2011: Numbertested */
  $handler->display->display_options['fields']['NumberTested']['id'] = 'NumberTested';
  $handler->display->display_options['fields']['NumberTested']['table'] = 'act_2011';
  $handler->display->display_options['fields']['NumberTested']['field'] = 'NumberTested';
  $handler->display->display_options['fields']['NumberTested']['label'] = '';
  /* Field: Act 2011: Allsubaverage */
  $handler->display->display_options['fields']['allsubAverage']['id'] = 'allsubAverage';
  $handler->display->display_options['fields']['allsubAverage']['table'] = 'act_2011';
  $handler->display->display_options['fields']['allsubAverage']['field'] = 'allsubAverage';
  $handler->display->display_options['fields']['allsubAverage']['label'] = '';
  /* Field: Act 2011: Allsubpercentmeeting */
  $handler->display->display_options['fields']['allsubPercentMeeting']['id'] = 'allsubPercentMeeting';
  $handler->display->display_options['fields']['allsubPercentMeeting']['table'] = 'act_2011';
  $handler->display->display_options['fields']['allsubPercentMeeting']['field'] = 'allsubPercentMeeting';
  $handler->display->display_options['fields']['allsubPercentMeeting']['label'] = '';
  /* Field: Act 2011: Readingaverage */
  $handler->display->display_options['fields']['readingAverage']['id'] = 'readingAverage';
  $handler->display->display_options['fields']['readingAverage']['table'] = 'act_2011';
  $handler->display->display_options['fields']['readingAverage']['field'] = 'readingAverage';
  $handler->display->display_options['fields']['readingAverage']['label'] = '';
  /* Field: Act 2011: Readingpercentmeeting */
  $handler->display->display_options['fields']['readingPercentMeeting']['id'] = 'readingPercentMeeting';
  $handler->display->display_options['fields']['readingPercentMeeting']['table'] = 'act_2011';
  $handler->display->display_options['fields']['readingPercentMeeting']['field'] = 'readingPercentMeeting';
  $handler->display->display_options['fields']['readingPercentMeeting']['label'] = '';
  /* Field: Act 2011: Mathaverage */
  $handler->display->display_options['fields']['mathAverage']['id'] = 'mathAverage';
  $handler->display->display_options['fields']['mathAverage']['table'] = 'act_2011';
  $handler->display->display_options['fields']['mathAverage']['field'] = 'mathAverage';
  $handler->display->display_options['fields']['mathAverage']['label'] = '';
  /* Field: Act 2011: Mathpercentmeeting */
  $handler->display->display_options['fields']['mathPercentMeeting']['id'] = 'mathPercentMeeting';
  $handler->display->display_options['fields']['mathPercentMeeting']['table'] = 'act_2011';
  $handler->display->display_options['fields']['mathPercentMeeting']['field'] = 'mathPercentMeeting';
  $handler->display->display_options['fields']['mathPercentMeeting']['label'] = '';
  /* Field: Act 2011: Englishaverage */
  $handler->display->display_options['fields']['englishAverage']['id'] = 'englishAverage';
  $handler->display->display_options['fields']['englishAverage']['table'] = 'act_2011';
  $handler->display->display_options['fields']['englishAverage']['field'] = 'englishAverage';
  $handler->display->display_options['fields']['englishAverage']['label'] = '';
  /* Field: Act 2011: Englishpercentmeeting */
  $handler->display->display_options['fields']['englishPercentMeeting']['id'] = 'englishPercentMeeting';
  $handler->display->display_options['fields']['englishPercentMeeting']['table'] = 'act_2011';
  $handler->display->display_options['fields']['englishPercentMeeting']['field'] = 'englishPercentMeeting';
  $handler->display->display_options['fields']['englishPercentMeeting']['label'] = '';
  /* Field: Act 2011: Scienceaverage */
  $handler->display->display_options['fields']['scienceAverage']['id'] = 'scienceAverage';
  $handler->display->display_options['fields']['scienceAverage']['table'] = 'act_2011';
  $handler->display->display_options['fields']['scienceAverage']['field'] = 'scienceAverage';
  $handler->display->display_options['fields']['scienceAverage']['label'] = '';
  /* Field: Act 2011: Sciencepercentmeeting */
  $handler->display->display_options['fields']['sciencePercentMeeting']['id'] = 'sciencePercentMeeting';
  $handler->display->display_options['fields']['sciencePercentMeeting']['table'] = 'act_2011';
  $handler->display->display_options['fields']['sciencePercentMeeting']['field'] = 'sciencePercentMeeting';
  $handler->display->display_options['fields']['sciencePercentMeeting']['label'] = '';
  /* Field: Act 2011: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'act_2011';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: Act 2011: Schooltype */
  $handler->display->display_options['arguments']['SchoolType']['id'] = 'SchoolType';
  $handler->display->display_options['arguments']['SchoolType']['table'] = 'act_2011';
  $handler->display->display_options['arguments']['SchoolType']['field'] = 'SchoolType';
  $handler->display->display_options['arguments']['SchoolType']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolType']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolType']['title'] = 'ACT 2011 %1';
  $handler->display->display_options['arguments']['SchoolType']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['SchoolType']['summary']['format'] = 'default_summary';
  /* Filter criterion: Act 2011: Buildingcode */
  $handler->display->display_options['filters']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['table'] = 'act_2011';
  $handler->display->display_options['filters']['BuildingCode']['field'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['exposed'] = TRUE;
  $handler->display->display_options['filters']['BuildingCode']['expose']['operator_id'] = 'BuildingCode_op';
  $handler->display->display_options['filters']['BuildingCode']['expose']['label'] = 'bcode';
  $handler->display->display_options['filters']['BuildingCode']['expose']['operator'] = 'BuildingCode_op';
  $handler->display->display_options['filters']['BuildingCode']['expose']['identifier'] = 'BuildingCode';
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
  $handler->display->display_options['path'] = 'admin/content/data/view/act_2011';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'ACT 2011';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'act_2011';
  $export['act_2011'] = $view;

  $view = new view();
  $view->name = 'act_2012';
  $view->description = 'Default view for data table ACT 2012';
  $view->tag = 'data table';
  $view->base_table = 'act_2012';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'ACT 2012';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'SchoolType' => 'SchoolType',
    'ISDCode' => 'ISDCode',
    'ISDName' => 'ISDName',
    'DistrictCode' => 'DistrictCode',
    'DistrictName' => 'DistrictName',
    'BuildingCode' => 'BuildingCode',
    'BuildingName' => 'BuildingName',
    'NumberTested' => 'NumberTested',
    'allsubAverage' => 'allsubAverage',
    'allsubPercentMeeting' => 'allsubPercentMeeting',
    'readingAverage' => 'readingAverage',
    'readingPercentMeeting' => 'readingPercentMeeting',
    'mathAverage' => 'mathAverage',
    'mathPercentMeeting' => 'mathPercentMeeting',
    'englishAverage' => 'englishAverage',
    'englishPercentMeeting' => 'englishPercentMeeting',
    'scienceAverage' => 'scienceAverage',
    'sciencePercentMeeting' => 'sciencePercentMeeting',
    'writingAverage' => 'writingAverage',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'SchoolType' => array(
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
    'NumberTested' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'allsubAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'allsubPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'readingAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'readingPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mathAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mathPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'englishAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'englishPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'scienceAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'sciencePercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'writingAverage' => array(
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
  /* Field: Act 2012: Schooltype */
  $handler->display->display_options['fields']['SchoolType']['id'] = 'SchoolType';
  $handler->display->display_options['fields']['SchoolType']['table'] = 'act_2012';
  $handler->display->display_options['fields']['SchoolType']['field'] = 'SchoolType';
  $handler->display->display_options['fields']['SchoolType']['label'] = '';
  /* Field: Act 2012: Isdcode */
  $handler->display->display_options['fields']['ISDCode']['id'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['table'] = 'act_2012';
  $handler->display->display_options['fields']['ISDCode']['field'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['label'] = '';
  /* Field: Act 2012: Isdname */
  $handler->display->display_options['fields']['ISDName']['id'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['table'] = 'act_2012';
  $handler->display->display_options['fields']['ISDName']['field'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['label'] = '';
  /* Field: Act 2012: Districtcode */
  $handler->display->display_options['fields']['DistrictCode']['id'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['table'] = 'act_2012';
  $handler->display->display_options['fields']['DistrictCode']['field'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['label'] = 'DistrictCode';
  /* Field: Act 2012: Districtname */
  $handler->display->display_options['fields']['DistrictName']['id'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['table'] = 'act_2012';
  $handler->display->display_options['fields']['DistrictName']['field'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['label'] = '';
  /* Field: Act 2012: Buildingcode */
  $handler->display->display_options['fields']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['table'] = 'act_2012';
  $handler->display->display_options['fields']['BuildingCode']['field'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['label'] = '';
  /* Field: Act 2012: Buildingname */
  $handler->display->display_options['fields']['BuildingName']['id'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['table'] = 'act_2012';
  $handler->display->display_options['fields']['BuildingName']['field'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['label'] = '';
  /* Field: Act 2012: Numbertested */
  $handler->display->display_options['fields']['NumberTested']['id'] = 'NumberTested';
  $handler->display->display_options['fields']['NumberTested']['table'] = 'act_2012';
  $handler->display->display_options['fields']['NumberTested']['field'] = 'NumberTested';
  $handler->display->display_options['fields']['NumberTested']['label'] = '';
  /* Field: Act 2012: Allsubaverage */
  $handler->display->display_options['fields']['allsubAverage']['id'] = 'allsubAverage';
  $handler->display->display_options['fields']['allsubAverage']['table'] = 'act_2012';
  $handler->display->display_options['fields']['allsubAverage']['field'] = 'allsubAverage';
  $handler->display->display_options['fields']['allsubAverage']['label'] = '';
  /* Field: Act 2012: Allsubpercentmeeting */
  $handler->display->display_options['fields']['allsubPercentMeeting']['id'] = 'allsubPercentMeeting';
  $handler->display->display_options['fields']['allsubPercentMeeting']['table'] = 'act_2012';
  $handler->display->display_options['fields']['allsubPercentMeeting']['field'] = 'allsubPercentMeeting';
  $handler->display->display_options['fields']['allsubPercentMeeting']['label'] = '';
  /* Field: Act 2012: Readingaverage */
  $handler->display->display_options['fields']['readingAverage']['id'] = 'readingAverage';
  $handler->display->display_options['fields']['readingAverage']['table'] = 'act_2012';
  $handler->display->display_options['fields']['readingAverage']['field'] = 'readingAverage';
  $handler->display->display_options['fields']['readingAverage']['label'] = '';
  /* Field: Act 2012: Readingpercentmeeting */
  $handler->display->display_options['fields']['readingPercentMeeting']['id'] = 'readingPercentMeeting';
  $handler->display->display_options['fields']['readingPercentMeeting']['table'] = 'act_2012';
  $handler->display->display_options['fields']['readingPercentMeeting']['field'] = 'readingPercentMeeting';
  $handler->display->display_options['fields']['readingPercentMeeting']['label'] = '';
  /* Field: Act 2012: Mathaverage */
  $handler->display->display_options['fields']['mathAverage']['id'] = 'mathAverage';
  $handler->display->display_options['fields']['mathAverage']['table'] = 'act_2012';
  $handler->display->display_options['fields']['mathAverage']['field'] = 'mathAverage';
  $handler->display->display_options['fields']['mathAverage']['label'] = '';
  /* Field: Act 2012: Mathpercentmeeting */
  $handler->display->display_options['fields']['mathPercentMeeting']['id'] = 'mathPercentMeeting';
  $handler->display->display_options['fields']['mathPercentMeeting']['table'] = 'act_2012';
  $handler->display->display_options['fields']['mathPercentMeeting']['field'] = 'mathPercentMeeting';
  $handler->display->display_options['fields']['mathPercentMeeting']['label'] = '';
  /* Field: Act 2012: Englishaverage */
  $handler->display->display_options['fields']['englishAverage']['id'] = 'englishAverage';
  $handler->display->display_options['fields']['englishAverage']['table'] = 'act_2012';
  $handler->display->display_options['fields']['englishAverage']['field'] = 'englishAverage';
  $handler->display->display_options['fields']['englishAverage']['label'] = '';
  /* Field: Act 2012: Englishpercentmeeting */
  $handler->display->display_options['fields']['englishPercentMeeting']['id'] = 'englishPercentMeeting';
  $handler->display->display_options['fields']['englishPercentMeeting']['table'] = 'act_2012';
  $handler->display->display_options['fields']['englishPercentMeeting']['field'] = 'englishPercentMeeting';
  $handler->display->display_options['fields']['englishPercentMeeting']['label'] = '';
  /* Field: Act 2012: Scienceaverage */
  $handler->display->display_options['fields']['scienceAverage']['id'] = 'scienceAverage';
  $handler->display->display_options['fields']['scienceAverage']['table'] = 'act_2012';
  $handler->display->display_options['fields']['scienceAverage']['field'] = 'scienceAverage';
  $handler->display->display_options['fields']['scienceAverage']['label'] = '';
  /* Field: Act 2012: Sciencepercentmeeting */
  $handler->display->display_options['fields']['sciencePercentMeeting']['id'] = 'sciencePercentMeeting';
  $handler->display->display_options['fields']['sciencePercentMeeting']['table'] = 'act_2012';
  $handler->display->display_options['fields']['sciencePercentMeeting']['field'] = 'sciencePercentMeeting';
  $handler->display->display_options['fields']['sciencePercentMeeting']['label'] = '';
  /* Field: Act 2012: Writingaverage */
  $handler->display->display_options['fields']['writingAverage']['id'] = 'writingAverage';
  $handler->display->display_options['fields']['writingAverage']['table'] = 'act_2012';
  $handler->display->display_options['fields']['writingAverage']['field'] = 'writingAverage';
  $handler->display->display_options['fields']['writingAverage']['label'] = '';
  /* Field: Act 2012: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'act_2012';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: Act 2012: Schooltype */
  $handler->display->display_options['arguments']['SchoolType']['id'] = 'SchoolType';
  $handler->display->display_options['arguments']['SchoolType']['table'] = 'act_2012';
  $handler->display->display_options['arguments']['SchoolType']['field'] = 'SchoolType';
  $handler->display->display_options['arguments']['SchoolType']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolType']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolType']['title'] = 'ACT 2012 %1';
  $handler->display->display_options['arguments']['SchoolType']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['SchoolType']['summary']['format'] = 'default_summary';
  /* Filter criterion: Act 2012: Buildingcode */
  $handler->display->display_options['filters']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['table'] = 'act_2012';
  $handler->display->display_options['filters']['BuildingCode']['field'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['exposed'] = TRUE;
  $handler->display->display_options['filters']['BuildingCode']['expose']['operator_id'] = 'BuildingCode_op';
  $handler->display->display_options['filters']['BuildingCode']['expose']['label'] = 'bcode';
  $handler->display->display_options['filters']['BuildingCode']['expose']['operator'] = 'BuildingCode_op';
  $handler->display->display_options['filters']['BuildingCode']['expose']['identifier'] = 'BuildingCode';
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
  $handler->display->display_options['path'] = 'admin/content/data/view/act_2012';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'ACT 2012';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'act_2012';
  $export['act_2012'] = $view;

  $view = new view();
  $view->name = 'act_2013';
  $view->description = 'Default view for data table Act 2013';
  $view->tag = 'data table';
  $view->base_table = 'act_2013';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'Act 2013';
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
    'SchoolType' => 'SchoolType',
    'ISDCode' => 'ISDCode',
    'ISDName' => 'ISDName',
    'DistrictCode' => 'DistrictCode',
    'DistrictName' => 'DistrictName',
    'BuildingCode' => 'BuildingCode',
    'BuildingName' => 'BuildingName',
    'NumberTested' => 'NumberTested',
    'allsubAverage' => 'allsubAverage',
    'allsubPercentMeeting' => 'allsubPercentMeeting',
    'readingAverage' => 'readingAverage',
    'readingPercentMeeting' => 'readingPercentMeeting',
    'mathAverage' => 'mathAverage',
    'mathPercentMeeting' => 'mathPercentMeeting',
    'englishAverage' => 'englishAverage',
    'englishPercentMeeting' => 'englishPercentMeeting',
    'scienceAverage' => 'scienceAverage',
    'sciencePercentMeeting' => 'sciencePercentMeeting',
    'writingAverage' => 'writingAverage',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'SchoolType' => array(
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
    'NumberTested' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'allsubAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'allsubPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'readingAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'readingPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mathAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mathPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'englishAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'englishPercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'scienceAverage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'sciencePercentMeeting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'writingAverage' => array(
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
  /* Field: Act 2013: Schooltype */
  $handler->display->display_options['fields']['SchoolType']['id'] = 'SchoolType';
  $handler->display->display_options['fields']['SchoolType']['table'] = 'act_2013';
  $handler->display->display_options['fields']['SchoolType']['field'] = 'SchoolType';
  $handler->display->display_options['fields']['SchoolType']['label'] = 'SchoolType';
  /* Field: Act 2013: Isdcode */
  $handler->display->display_options['fields']['ISDCode']['id'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['table'] = 'act_2013';
  $handler->display->display_options['fields']['ISDCode']['field'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['label'] = 'ISDCode';
  /* Field: Act 2013: Isdname */
  $handler->display->display_options['fields']['ISDName']['id'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['table'] = 'act_2013';
  $handler->display->display_options['fields']['ISDName']['field'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['label'] = 'ISDName';
  /* Field: Act 2013: Districtcode */
  $handler->display->display_options['fields']['DistrictCode']['id'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['table'] = 'act_2013';
  $handler->display->display_options['fields']['DistrictCode']['field'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['label'] = 'DistrictCode';
  /* Field: Act 2013: Districtname */
  $handler->display->display_options['fields']['DistrictName']['id'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['table'] = 'act_2013';
  $handler->display->display_options['fields']['DistrictName']['field'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['label'] = 'DistrictName';
  /* Field: Act 2013: Buildingcode */
  $handler->display->display_options['fields']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['table'] = 'act_2013';
  $handler->display->display_options['fields']['BuildingCode']['field'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['label'] = 'BuildingCode';
  /* Field: Act 2013: Buildingname */
  $handler->display->display_options['fields']['BuildingName']['id'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['table'] = 'act_2013';
  $handler->display->display_options['fields']['BuildingName']['field'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['label'] = 'BuildingName';
  /* Field: Act 2013: Numbertested */
  $handler->display->display_options['fields']['NumberTested']['id'] = 'NumberTested';
  $handler->display->display_options['fields']['NumberTested']['table'] = 'act_2013';
  $handler->display->display_options['fields']['NumberTested']['field'] = 'NumberTested';
  $handler->display->display_options['fields']['NumberTested']['label'] = 'NumberTested';
  /* Field: Act 2013: Allsubaverage */
  $handler->display->display_options['fields']['allsubAverage']['id'] = 'allsubAverage';
  $handler->display->display_options['fields']['allsubAverage']['table'] = 'act_2013';
  $handler->display->display_options['fields']['allsubAverage']['field'] = 'allsubAverage';
  $handler->display->display_options['fields']['allsubAverage']['label'] = 'allsubAverage';
  /* Field: Act 2013: Allsubpercentmeeting */
  $handler->display->display_options['fields']['allsubPercentMeeting']['id'] = 'allsubPercentMeeting';
  $handler->display->display_options['fields']['allsubPercentMeeting']['table'] = 'act_2013';
  $handler->display->display_options['fields']['allsubPercentMeeting']['field'] = 'allsubPercentMeeting';
  $handler->display->display_options['fields']['allsubPercentMeeting']['label'] = 'allsubPercentMeeting';
  /* Field: Act 2013: Readingaverage */
  $handler->display->display_options['fields']['readingAverage']['id'] = 'readingAverage';
  $handler->display->display_options['fields']['readingAverage']['table'] = 'act_2013';
  $handler->display->display_options['fields']['readingAverage']['field'] = 'readingAverage';
  $handler->display->display_options['fields']['readingAverage']['label'] = 'readingAverage';
  /* Field: Act 2013: Readingpercentmeeting */
  $handler->display->display_options['fields']['readingPercentMeeting']['id'] = 'readingPercentMeeting';
  $handler->display->display_options['fields']['readingPercentMeeting']['table'] = 'act_2013';
  $handler->display->display_options['fields']['readingPercentMeeting']['field'] = 'readingPercentMeeting';
  $handler->display->display_options['fields']['readingPercentMeeting']['label'] = 'readingPercentMeeting';
  /* Field: Act 2013: Mathaverage */
  $handler->display->display_options['fields']['mathAverage']['id'] = 'mathAverage';
  $handler->display->display_options['fields']['mathAverage']['table'] = 'act_2013';
  $handler->display->display_options['fields']['mathAverage']['field'] = 'mathAverage';
  $handler->display->display_options['fields']['mathAverage']['label'] = 'mathAverage';
  /* Field: Act 2013: Mathpercentmeeting */
  $handler->display->display_options['fields']['mathPercentMeeting']['id'] = 'mathPercentMeeting';
  $handler->display->display_options['fields']['mathPercentMeeting']['table'] = 'act_2013';
  $handler->display->display_options['fields']['mathPercentMeeting']['field'] = 'mathPercentMeeting';
  $handler->display->display_options['fields']['mathPercentMeeting']['label'] = 'mathPercentMeeting';
  /* Field: Act 2013: Englishaverage */
  $handler->display->display_options['fields']['englishAverage']['id'] = 'englishAverage';
  $handler->display->display_options['fields']['englishAverage']['table'] = 'act_2013';
  $handler->display->display_options['fields']['englishAverage']['field'] = 'englishAverage';
  $handler->display->display_options['fields']['englishAverage']['label'] = 'englishAverage';
  /* Field: Act 2013: Englishpercentmeeting */
  $handler->display->display_options['fields']['englishPercentMeeting']['id'] = 'englishPercentMeeting';
  $handler->display->display_options['fields']['englishPercentMeeting']['table'] = 'act_2013';
  $handler->display->display_options['fields']['englishPercentMeeting']['field'] = 'englishPercentMeeting';
  $handler->display->display_options['fields']['englishPercentMeeting']['label'] = 'englishPercentMeeting';
  /* Field: Act 2013: Scienceaverage */
  $handler->display->display_options['fields']['scienceAverage']['id'] = 'scienceAverage';
  $handler->display->display_options['fields']['scienceAverage']['table'] = 'act_2013';
  $handler->display->display_options['fields']['scienceAverage']['field'] = 'scienceAverage';
  $handler->display->display_options['fields']['scienceAverage']['label'] = 'scienceAverage';
  /* Field: Act 2013: Sciencepercentmeeting */
  $handler->display->display_options['fields']['sciencePercentMeeting']['id'] = 'sciencePercentMeeting';
  $handler->display->display_options['fields']['sciencePercentMeeting']['table'] = 'act_2013';
  $handler->display->display_options['fields']['sciencePercentMeeting']['field'] = 'sciencePercentMeeting';
  $handler->display->display_options['fields']['sciencePercentMeeting']['label'] = 'sciencePercentMeeting';
  /* Field: Act 2013: Writingaverage */
  $handler->display->display_options['fields']['writingAverage']['id'] = 'writingAverage';
  $handler->display->display_options['fields']['writingAverage']['table'] = 'act_2013';
  $handler->display->display_options['fields']['writingAverage']['field'] = 'writingAverage';
  $handler->display->display_options['fields']['writingAverage']['label'] = 'writingAverage';
  /* Field: Act 2013: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'act_2013';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: Act 2013: Schooltype */
  $handler->display->display_options['arguments']['SchoolType']['id'] = 'SchoolType';
  $handler->display->display_options['arguments']['SchoolType']['table'] = 'act_2013';
  $handler->display->display_options['arguments']['SchoolType']['field'] = 'SchoolType';
  $handler->display->display_options['arguments']['SchoolType']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolType']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolType']['title'] = 'Act 2013 %1';
  $handler->display->display_options['arguments']['SchoolType']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['SchoolType']['summary']['format'] = 'default_summary';
  /* Filter criterion: Act 2013: Buildingcode */
  $handler->display->display_options['filters']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['table'] = 'act_2013';
  $handler->display->display_options['filters']['BuildingCode']['field'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['exposed'] = TRUE;
  $handler->display->display_options['filters']['BuildingCode']['expose']['operator_id'] = 'BuildingCode_op';
  $handler->display->display_options['filters']['BuildingCode']['expose']['label'] = 'bcode';
  $handler->display->display_options['filters']['BuildingCode']['expose']['operator'] = 'BuildingCode_op';
  $handler->display->display_options['filters']['BuildingCode']['expose']['identifier'] = 'BuildingCode';
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
  $handler->display->display_options['path'] = 'admin/content/data/view/act_2013';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Act 2013';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'act_2013';
  $export['act_2013'] = $view;

  $view = new view();
  $view->name = 'bulk';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'bulk';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'bulk';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'uid' => 'uid',
    'nid' => 'nid',
    'field_bcode' => 'field_bcode',
    'created' => 'created',
    'changed' => 'changed',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_school' => 'field_school',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcode' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_school' => array(
      'sortable' => 1,
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Field: Building code */
  $handler->display->display_options['fields']['field_bcode']['id'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['table'] = 'field_data_field_bcode';
  $handler->display->display_options['fields']['field_bcode']['field'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['label'] = 'bcode';
  $handler->display->display_options['fields']['field_bcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: School */
  $handler->display->display_options['fields']['field_school']['id'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['table'] = 'field_data_field_school';
  $handler->display->display_options['fields']['field_school']['field'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_school']['alter']['text'] = '[field_school-tid]';
  $handler->display->display_options['fields']['field_school']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_school']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    17 => 0,
    7 => 0,
    3 => 0,
    18 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/bulk';
  $export['bulk'] = $view;

  $view = new view();
  $view->name = 'earlychild';
  $view->description = 'Default view for data table Early Childhood Centers';
  $view->tag = 'data table';
  $view->base_table = 'earlychild';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'Early Childhood Centers';
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
    'BusinessName' => 'BusinessName',
    'LicenseNumber' => 'LicenseNumber',
    'Address' => 'Address',
    'City' => 'City',
    'ZipCode' => 'ZipCode',
    'LicenseType' => 'LicenseType',
    'County' => 'County',
    'SASRating' => 'SASRating',
    'SASStatus' => 'SASStatus',
    'PublishedRating' => 'PublishedRating',
    'Phone' => 'Phone',
    'Website' => 'Website',
    'AgeFrom' => 'AgeFrom',
    'AgeTo' => 'AgeTo',
    'MonthsOfOperation' => 'MonthsOfOperation',
    'SundayDayOpen' => 'SundayDayOpen',
    'SundayDayClose' => 'SundayDayClose',
    'MondayDayOpen' => 'MondayDayOpen',
    'MondayDayClose' => 'MondayDayClose',
    'TuesdayDayOpen' => 'TuesdayDayOpen',
    'TuesdayDayClose' => 'TuesdayDayClose',
    'WednesdayDayOpen' => 'WednesdayDayOpen',
    'WednesdayDayClose' => 'WednesdayDayClose',
    'ThursdayDayOpen' => 'ThursdayDayOpen',
    'ThursdayDayClose' => 'ThursdayDayClose',
    'FridayDayOpen' => 'FridayDayOpen',
    'FridayDayClose' => 'FridayDayClose',
    'SaturdayDayOpen' => 'SaturdayDayOpen',
    'SaturdayDayClose' => 'SaturdayDayClose',
    'Transportation' => 'Transportation',
    'Environment' => 'Environment',
    'Meals' => 'Meals',
    'Lat' => 'Lat',
    'Lon' => 'Lon',
    'GSCProviderID' => 'GSCProviderID',
    'GSCLicensedDate' => 'GSCLicensedDate',
    'GSCpts' => 'GSCpts',
    'GSCptsStaff' => 'GSCptsStaff',
    'GSCptsFamily' => 'GSCptsFamily',
    'GSCptsAdmin' => 'GSCptsAdmin',
    'GSCptsEnv' => 'GSCptsEnv',
    'GSCptsCurr' => 'GSCptsCurr',
    'GSCeligibility' => 'GSCeligibility',
    'GSCspecial' => 'GSCspecial',
    'GSCsubsidy' => 'GSCsubsidy',
    'GSCcapacity' => 'GSCcapacity',
    'GSCcontract' => 'GSCcontract',
    'GSCfee' => 'GSCfee',
    'GSCemail' => 'GSCemail',
    'GSCcontact' => 'GSCcontact',
    'GSCmessage' => 'GSCmessage',
    'GSCspecialty' => 'GSCspecialty',
    'GSCschedule' => 'GSCschedule',
    'GSCsetting' => 'GSCsetting',
    'GSCpaySchedule' => 'GSCpaySchedule',
    'id' => 'id',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'BusinessName' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'LicenseNumber' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Address' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'City' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ZipCode' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'LicenseType' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'County' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SASRating' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SASStatus' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'PublishedRating' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Phone' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Website' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'AgeFrom' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'AgeTo' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'MonthsOfOperation' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SundayDayOpen' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SundayDayClose' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'MondayDayOpen' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'MondayDayClose' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TuesdayDayOpen' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TuesdayDayClose' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'WednesdayDayOpen' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'WednesdayDayClose' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ThursdayDayOpen' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ThursdayDayClose' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'FridayDayOpen' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'FridayDayClose' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SaturdayDayOpen' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SaturdayDayClose' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Transportation' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Environment' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Meals' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Lat' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Lon' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCProviderID' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCLicensedDate' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCpts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCptsStaff' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCptsFamily' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCptsAdmin' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCptsEnv' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCptsCurr' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCeligibility' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCspecial' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCsubsidy' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCcapacity' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCcontract' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCfee' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCemail' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCcontact' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCmessage' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCspecialty' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCschedule' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCsetting' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'GSCpaySchedule' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'id' => array(
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
  /* Field: Early Childhood Centers: BusinessName */
  $handler->display->display_options['fields']['BusinessName']['id'] = 'BusinessName';
  $handler->display->display_options['fields']['BusinessName']['table'] = 'earlychild';
  $handler->display->display_options['fields']['BusinessName']['field'] = 'BusinessName';
  /* Field: Early Childhood Centers: LicenseNumber */
  $handler->display->display_options['fields']['LicenseNumber']['id'] = 'LicenseNumber';
  $handler->display->display_options['fields']['LicenseNumber']['table'] = 'earlychild';
  $handler->display->display_options['fields']['LicenseNumber']['field'] = 'LicenseNumber';
  /* Field: Early Childhood Centers: Address */
  $handler->display->display_options['fields']['Address']['id'] = 'Address';
  $handler->display->display_options['fields']['Address']['table'] = 'earlychild';
  $handler->display->display_options['fields']['Address']['field'] = 'Address';
  /* Field: Early Childhood Centers: City */
  $handler->display->display_options['fields']['City']['id'] = 'City';
  $handler->display->display_options['fields']['City']['table'] = 'earlychild';
  $handler->display->display_options['fields']['City']['field'] = 'City';
  /* Field: Early Childhood Centers: ZipCode */
  $handler->display->display_options['fields']['ZipCode']['id'] = 'ZipCode';
  $handler->display->display_options['fields']['ZipCode']['table'] = 'earlychild';
  $handler->display->display_options['fields']['ZipCode']['field'] = 'ZipCode';
  /* Field: Early Childhood Centers: LicenseType */
  $handler->display->display_options['fields']['LicenseType']['id'] = 'LicenseType';
  $handler->display->display_options['fields']['LicenseType']['table'] = 'earlychild';
  $handler->display->display_options['fields']['LicenseType']['field'] = 'LicenseType';
  /* Field: Early Childhood Centers: County */
  $handler->display->display_options['fields']['County']['id'] = 'County';
  $handler->display->display_options['fields']['County']['table'] = 'earlychild';
  $handler->display->display_options['fields']['County']['field'] = 'County';
  /* Field: Early Childhood Centers: SASRating */
  $handler->display->display_options['fields']['SASRating']['id'] = 'SASRating';
  $handler->display->display_options['fields']['SASRating']['table'] = 'earlychild';
  $handler->display->display_options['fields']['SASRating']['field'] = 'SASRating';
  /* Field: Early Childhood Centers: SASStatus */
  $handler->display->display_options['fields']['SASStatus']['id'] = 'SASStatus';
  $handler->display->display_options['fields']['SASStatus']['table'] = 'earlychild';
  $handler->display->display_options['fields']['SASStatus']['field'] = 'SASStatus';
  /* Field: Early Childhood Centers: PublishedRating */
  $handler->display->display_options['fields']['PublishedRating']['id'] = 'PublishedRating';
  $handler->display->display_options['fields']['PublishedRating']['table'] = 'earlychild';
  $handler->display->display_options['fields']['PublishedRating']['field'] = 'PublishedRating';
  /* Field: Early Childhood Centers: Phone */
  $handler->display->display_options['fields']['Phone']['id'] = 'Phone';
  $handler->display->display_options['fields']['Phone']['table'] = 'earlychild';
  $handler->display->display_options['fields']['Phone']['field'] = 'Phone';
  /* Field: Early Childhood Centers: Website */
  $handler->display->display_options['fields']['Website']['id'] = 'Website';
  $handler->display->display_options['fields']['Website']['table'] = 'earlychild';
  $handler->display->display_options['fields']['Website']['field'] = 'Website';
  /* Field: Early Childhood Centers: AgeFrom */
  $handler->display->display_options['fields']['AgeFrom']['id'] = 'AgeFrom';
  $handler->display->display_options['fields']['AgeFrom']['table'] = 'earlychild';
  $handler->display->display_options['fields']['AgeFrom']['field'] = 'AgeFrom';
  /* Field: Early Childhood Centers: AgeTo */
  $handler->display->display_options['fields']['AgeTo']['id'] = 'AgeTo';
  $handler->display->display_options['fields']['AgeTo']['table'] = 'earlychild';
  $handler->display->display_options['fields']['AgeTo']['field'] = 'AgeTo';
  /* Field: Early Childhood Centers: MonthsOfOperation */
  $handler->display->display_options['fields']['MonthsOfOperation']['id'] = 'MonthsOfOperation';
  $handler->display->display_options['fields']['MonthsOfOperation']['table'] = 'earlychild';
  $handler->display->display_options['fields']['MonthsOfOperation']['field'] = 'MonthsOfOperation';
  /* Field: Early Childhood Centers: SundayDayOpen */
  $handler->display->display_options['fields']['SundayDayOpen']['id'] = 'SundayDayOpen';
  $handler->display->display_options['fields']['SundayDayOpen']['table'] = 'earlychild';
  $handler->display->display_options['fields']['SundayDayOpen']['field'] = 'SundayDayOpen';
  /* Field: Early Childhood Centers: SundayDayClose */
  $handler->display->display_options['fields']['SundayDayClose']['id'] = 'SundayDayClose';
  $handler->display->display_options['fields']['SundayDayClose']['table'] = 'earlychild';
  $handler->display->display_options['fields']['SundayDayClose']['field'] = 'SundayDayClose';
  /* Field: Early Childhood Centers: MondayDayOpen */
  $handler->display->display_options['fields']['MondayDayOpen']['id'] = 'MondayDayOpen';
  $handler->display->display_options['fields']['MondayDayOpen']['table'] = 'earlychild';
  $handler->display->display_options['fields']['MondayDayOpen']['field'] = 'MondayDayOpen';
  /* Field: Early Childhood Centers: MondayDayClose */
  $handler->display->display_options['fields']['MondayDayClose']['id'] = 'MondayDayClose';
  $handler->display->display_options['fields']['MondayDayClose']['table'] = 'earlychild';
  $handler->display->display_options['fields']['MondayDayClose']['field'] = 'MondayDayClose';
  /* Field: Early Childhood Centers: TuesdayDayOpen */
  $handler->display->display_options['fields']['TuesdayDayOpen']['id'] = 'TuesdayDayOpen';
  $handler->display->display_options['fields']['TuesdayDayOpen']['table'] = 'earlychild';
  $handler->display->display_options['fields']['TuesdayDayOpen']['field'] = 'TuesdayDayOpen';
  /* Field: Early Childhood Centers: TuesdayDayClose */
  $handler->display->display_options['fields']['TuesdayDayClose']['id'] = 'TuesdayDayClose';
  $handler->display->display_options['fields']['TuesdayDayClose']['table'] = 'earlychild';
  $handler->display->display_options['fields']['TuesdayDayClose']['field'] = 'TuesdayDayClose';
  /* Field: Early Childhood Centers: WednesdayDayOpen */
  $handler->display->display_options['fields']['WednesdayDayOpen']['id'] = 'WednesdayDayOpen';
  $handler->display->display_options['fields']['WednesdayDayOpen']['table'] = 'earlychild';
  $handler->display->display_options['fields']['WednesdayDayOpen']['field'] = 'WednesdayDayOpen';
  /* Field: Early Childhood Centers: WednesdayDayClose */
  $handler->display->display_options['fields']['WednesdayDayClose']['id'] = 'WednesdayDayClose';
  $handler->display->display_options['fields']['WednesdayDayClose']['table'] = 'earlychild';
  $handler->display->display_options['fields']['WednesdayDayClose']['field'] = 'WednesdayDayClose';
  /* Field: Early Childhood Centers: ThursdayDayOpen */
  $handler->display->display_options['fields']['ThursdayDayOpen']['id'] = 'ThursdayDayOpen';
  $handler->display->display_options['fields']['ThursdayDayOpen']['table'] = 'earlychild';
  $handler->display->display_options['fields']['ThursdayDayOpen']['field'] = 'ThursdayDayOpen';
  /* Field: Early Childhood Centers: ThursdayDayClose */
  $handler->display->display_options['fields']['ThursdayDayClose']['id'] = 'ThursdayDayClose';
  $handler->display->display_options['fields']['ThursdayDayClose']['table'] = 'earlychild';
  $handler->display->display_options['fields']['ThursdayDayClose']['field'] = 'ThursdayDayClose';
  /* Field: Early Childhood Centers: FridayDayOpen */
  $handler->display->display_options['fields']['FridayDayOpen']['id'] = 'FridayDayOpen';
  $handler->display->display_options['fields']['FridayDayOpen']['table'] = 'earlychild';
  $handler->display->display_options['fields']['FridayDayOpen']['field'] = 'FridayDayOpen';
  /* Field: Early Childhood Centers: FridayDayClose */
  $handler->display->display_options['fields']['FridayDayClose']['id'] = 'FridayDayClose';
  $handler->display->display_options['fields']['FridayDayClose']['table'] = 'earlychild';
  $handler->display->display_options['fields']['FridayDayClose']['field'] = 'FridayDayClose';
  /* Field: Early Childhood Centers: SaturdayDayOpen */
  $handler->display->display_options['fields']['SaturdayDayOpen']['id'] = 'SaturdayDayOpen';
  $handler->display->display_options['fields']['SaturdayDayOpen']['table'] = 'earlychild';
  $handler->display->display_options['fields']['SaturdayDayOpen']['field'] = 'SaturdayDayOpen';
  /* Field: Early Childhood Centers: SaturdayDayClose */
  $handler->display->display_options['fields']['SaturdayDayClose']['id'] = 'SaturdayDayClose';
  $handler->display->display_options['fields']['SaturdayDayClose']['table'] = 'earlychild';
  $handler->display->display_options['fields']['SaturdayDayClose']['field'] = 'SaturdayDayClose';
  /* Field: Early Childhood Centers: Transportation */
  $handler->display->display_options['fields']['Transportation']['id'] = 'Transportation';
  $handler->display->display_options['fields']['Transportation']['table'] = 'earlychild';
  $handler->display->display_options['fields']['Transportation']['field'] = 'Transportation';
  /* Field: Early Childhood Centers: Environment */
  $handler->display->display_options['fields']['Environment']['id'] = 'Environment';
  $handler->display->display_options['fields']['Environment']['table'] = 'earlychild';
  $handler->display->display_options['fields']['Environment']['field'] = 'Environment';
  /* Field: Early Childhood Centers: Meals */
  $handler->display->display_options['fields']['Meals']['id'] = 'Meals';
  $handler->display->display_options['fields']['Meals']['table'] = 'earlychild';
  $handler->display->display_options['fields']['Meals']['field'] = 'Meals';
  /* Field: Early Childhood Centers: Lat */
  $handler->display->display_options['fields']['Lat']['id'] = 'Lat';
  $handler->display->display_options['fields']['Lat']['table'] = 'earlychild';
  $handler->display->display_options['fields']['Lat']['field'] = 'Lat';
  /* Field: Early Childhood Centers: Lon */
  $handler->display->display_options['fields']['Lon']['id'] = 'Lon';
  $handler->display->display_options['fields']['Lon']['table'] = 'earlychild';
  $handler->display->display_options['fields']['Lon']['field'] = 'Lon';
  /* Field: Early Childhood Centers: GSCProviderID */
  $handler->display->display_options['fields']['GSCProviderID']['id'] = 'GSCProviderID';
  $handler->display->display_options['fields']['GSCProviderID']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCProviderID']['field'] = 'GSCProviderID';
  /* Field: Early Childhood Centers: GSCLicensedDate */
  $handler->display->display_options['fields']['GSCLicensedDate']['id'] = 'GSCLicensedDate';
  $handler->display->display_options['fields']['GSCLicensedDate']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCLicensedDate']['field'] = 'GSCLicensedDate';
  /* Field: Early Childhood Centers: GSCpts */
  $handler->display->display_options['fields']['GSCpts']['id'] = 'GSCpts';
  $handler->display->display_options['fields']['GSCpts']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCpts']['field'] = 'GSCpts';
  /* Field: Early Childhood Centers: GSCptsStaff */
  $handler->display->display_options['fields']['GSCptsStaff']['id'] = 'GSCptsStaff';
  $handler->display->display_options['fields']['GSCptsStaff']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCptsStaff']['field'] = 'GSCptsStaff';
  /* Field: Early Childhood Centers: GSCptsFamily */
  $handler->display->display_options['fields']['GSCptsFamily']['id'] = 'GSCptsFamily';
  $handler->display->display_options['fields']['GSCptsFamily']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCptsFamily']['field'] = 'GSCptsFamily';
  /* Field: Early Childhood Centers: GSCptsAdmin */
  $handler->display->display_options['fields']['GSCptsAdmin']['id'] = 'GSCptsAdmin';
  $handler->display->display_options['fields']['GSCptsAdmin']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCptsAdmin']['field'] = 'GSCptsAdmin';
  /* Field: Early Childhood Centers: GSCptsEnv */
  $handler->display->display_options['fields']['GSCptsEnv']['id'] = 'GSCptsEnv';
  $handler->display->display_options['fields']['GSCptsEnv']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCptsEnv']['field'] = 'GSCptsEnv';
  /* Field: Early Childhood Centers: GSCptsCurr */
  $handler->display->display_options['fields']['GSCptsCurr']['id'] = 'GSCptsCurr';
  $handler->display->display_options['fields']['GSCptsCurr']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCptsCurr']['field'] = 'GSCptsCurr';
  /* Field: Early Childhood Centers: GSCeligibility */
  $handler->display->display_options['fields']['GSCeligibility']['id'] = 'GSCeligibility';
  $handler->display->display_options['fields']['GSCeligibility']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCeligibility']['field'] = 'GSCeligibility';
  /* Field: Early Childhood Centers: GSCspecial */
  $handler->display->display_options['fields']['GSCspecial']['id'] = 'GSCspecial';
  $handler->display->display_options['fields']['GSCspecial']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCspecial']['field'] = 'GSCspecial';
  /* Field: Early Childhood Centers: GSCsubsidy */
  $handler->display->display_options['fields']['GSCsubsidy']['id'] = 'GSCsubsidy';
  $handler->display->display_options['fields']['GSCsubsidy']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCsubsidy']['field'] = 'GSCsubsidy';
  /* Field: Early Childhood Centers: GSCcapacity */
  $handler->display->display_options['fields']['GSCcapacity']['id'] = 'GSCcapacity';
  $handler->display->display_options['fields']['GSCcapacity']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCcapacity']['field'] = 'GSCcapacity';
  /* Field: Early Childhood Centers: GSCcontract */
  $handler->display->display_options['fields']['GSCcontract']['id'] = 'GSCcontract';
  $handler->display->display_options['fields']['GSCcontract']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCcontract']['field'] = 'GSCcontract';
  /* Field: Early Childhood Centers: GSCfee */
  $handler->display->display_options['fields']['GSCfee']['id'] = 'GSCfee';
  $handler->display->display_options['fields']['GSCfee']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCfee']['field'] = 'GSCfee';
  /* Field: Early Childhood Centers: GSCemail */
  $handler->display->display_options['fields']['GSCemail']['id'] = 'GSCemail';
  $handler->display->display_options['fields']['GSCemail']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCemail']['field'] = 'GSCemail';
  /* Field: Early Childhood Centers: GSCcontact */
  $handler->display->display_options['fields']['GSCcontact']['id'] = 'GSCcontact';
  $handler->display->display_options['fields']['GSCcontact']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCcontact']['field'] = 'GSCcontact';
  /* Field: Early Childhood Centers: GSCmessage */
  $handler->display->display_options['fields']['GSCmessage']['id'] = 'GSCmessage';
  $handler->display->display_options['fields']['GSCmessage']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCmessage']['field'] = 'GSCmessage';
  /* Field: Early Childhood Centers: GSCspecialty */
  $handler->display->display_options['fields']['GSCspecialty']['id'] = 'GSCspecialty';
  $handler->display->display_options['fields']['GSCspecialty']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCspecialty']['field'] = 'GSCspecialty';
  /* Field: Early Childhood Centers: GSCschedule */
  $handler->display->display_options['fields']['GSCschedule']['id'] = 'GSCschedule';
  $handler->display->display_options['fields']['GSCschedule']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCschedule']['field'] = 'GSCschedule';
  /* Field: Early Childhood Centers: GSCsetting */
  $handler->display->display_options['fields']['GSCsetting']['id'] = 'GSCsetting';
  $handler->display->display_options['fields']['GSCsetting']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCsetting']['field'] = 'GSCsetting';
  /* Field: Early Childhood Centers: GSCpaySchedule */
  $handler->display->display_options['fields']['GSCpaySchedule']['id'] = 'GSCpaySchedule';
  $handler->display->display_options['fields']['GSCpaySchedule']['table'] = 'earlychild';
  $handler->display->display_options['fields']['GSCpaySchedule']['field'] = 'GSCpaySchedule';
  /* Field: Early Childhood Centers: id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'earlychild';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: Early Childhood Centers: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'earlychild';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: Early Childhood Centers: BusinessName */
  $handler->display->display_options['arguments']['BusinessName']['id'] = 'BusinessName';
  $handler->display->display_options['arguments']['BusinessName']['table'] = 'earlychild';
  $handler->display->display_options['arguments']['BusinessName']['field'] = 'BusinessName';
  $handler->display->display_options['arguments']['BusinessName']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['BusinessName']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['BusinessName']['title'] = 'Early Childhood Centers %1';
  $handler->display->display_options['arguments']['BusinessName']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['BusinessName']['summary']['format'] = 'default_summary';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/data/view/earlychild';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Early Childhood Centers';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'earlychild';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'csv/earlychild';
  $export['earlychild'] = $view;

  $view = new view();
  $view->name = 'esd_hs_2013';
  $view->description = 'Default view for data table Esd hs 2013';
  $view->tag = 'data table';
  $view->base_table = 'esd_hs_2013';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'Esd hs 2013';
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
    'buildingcode' => 'buildingcode',
    'buildingname' => 'buildingname',
    'SchoolCategory' => 'SchoolCategory',
    'entitytypename' => 'entitytypename',
    'entitycharteringagencyname' => 'entitycharteringagencyname',
    'entityactualgrades' => 'entityactualgrades',
    'total_enrollment' => 'total_enrollment',
    'act2_comp' => 'act2_comp',
    'act2_comp_pts' => 'act2_comp_pts',
    'act2_comp_psspts' => 'act2_comp_psspts',
    'act2_pcr' => 'act2_pcr',
    'act2_pcr_pts' => 'act2_pcr_pts',
    'act2_pcr_psspts' => 'act2_pcr_psspts',
    'gradrate' => 'gradrate',
    'gradrate_pts' => 'gradrate_pts',
    'gradrate_psspts' => 'gradrate_psspts',
    'status_pts' => 'status_pts',
    'status_psspts' => 'status_psspts',
    'status_pct' => 'status_pct',
    'status_ltrgrade' => 'status_ltrgrade',
    'act_grwth' => 'act_grwth',
    'act_grwth_pts' => 'act_grwth_pts',
    'act_grwth_psspts' => 'act_grwth_psspts',
    'progress_pts' => 'progress_pts',
    'progress_psspts' => 'progress_psspts',
    'progress_pct' => 'progress_pct',
    'progress_ltrgrade' => 'progress_ltrgrade',
    'site_s' => 'site_s',
    'site_s_pts' => 'site_s_pts',
    'site_s_psspts' => 'site_s_psspts',
    'net5e_1213' => 'net5e_1213',
    'net5e_1213_pts' => 'net5e_1213_pts',
    'net5e_1213_psspts' => 'net5e_1213_psspts',
    'five_e_grwth' => 'five_e_grwth',
    'five_e_grwth_pts' => 'five_e_grwth_pts',
    'five_e_grwth_psspts' => 'five_e_grwth_psspts',
    'culture_pts' => 'culture_pts',
    'culture_psspts' => 'culture_psspts',
    'culture_pct' => 'culture_pct',
    'culture_ltrgrade' => 'culture_ltrgrade',
    'econdis_pct' => 'econdis_pct',
    'sped_pct' => 'sped_pct',
    'ell_pct' => 'ell_pct',
    'studchrs' => 'studchrs',
    'studchrs_pts' => 'studchrs_pts',
    'fafsa_rate' => 'fafsa_rate',
    'fafsa_rate_pts' => 'fafsa_rate_pts',
    'total_pts' => 'total_pts',
    'turnaround_pts' => 'turnaround_pts',
    'total_psspts' => 'total_psspts',
    'turnaround_psspts' => 'turnaround_psspts',
    'mature_pct' => 'mature_pct',
    'turnaround_pct' => 'turnaround_pct',
    'newschool_pct' => 'newschool_pct',
    'mature_ltrgrade' => 'mature_ltrgrade',
    'turnaround_designation' => 'turnaround_designation',
    'newschool_designation' => 'newschool_designation',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'buildingcode' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'buildingname' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SchoolCategory' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'entitytypename' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'entitycharteringagencyname' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'entityactualgrades' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'total_enrollment' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act2_comp' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act2_comp_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act2_comp_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act2_pcr' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act2_pcr_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act2_pcr_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'gradrate' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'gradrate_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'gradrate_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status_ltrgrade' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act_grwth' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act_grwth_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'act_grwth_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'progress_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'progress_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'progress_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'progress_ltrgrade' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'site_s' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'site_s_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'site_s_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'net5e_1213' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'net5e_1213_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'net5e_1213_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'five_e_grwth' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'five_e_grwth_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'five_e_grwth_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'culture_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'culture_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'culture_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'culture_ltrgrade' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'econdis_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'sped_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ell_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'studchrs' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'studchrs_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'fafsa_rate' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'fafsa_rate_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'total_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'turnaround_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'total_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'turnaround_psspts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mature_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'turnaround_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'newschool_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mature_ltrgrade' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'turnaround_designation' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'newschool_designation' => array(
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
  /* Field: Esd hs 2013: Buildingcode */
  $handler->display->display_options['fields']['buildingcode']['id'] = 'buildingcode';
  $handler->display->display_options['fields']['buildingcode']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['buildingcode']['field'] = 'buildingcode';
  $handler->display->display_options['fields']['buildingcode']['label'] = 'buildingcode';
  /* Field: Esd hs 2013: Buildingname */
  $handler->display->display_options['fields']['buildingname']['id'] = 'buildingname';
  $handler->display->display_options['fields']['buildingname']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['buildingname']['field'] = 'buildingname';
  $handler->display->display_options['fields']['buildingname']['label'] = 'buildingname';
  /* Field: Esd hs 2013: Schoolcategory */
  $handler->display->display_options['fields']['SchoolCategory']['id'] = 'SchoolCategory';
  $handler->display->display_options['fields']['SchoolCategory']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['SchoolCategory']['field'] = 'SchoolCategory';
  $handler->display->display_options['fields']['SchoolCategory']['label'] = 'SchoolCategory';
  /* Field: Esd hs 2013: Entitytypename */
  $handler->display->display_options['fields']['entitytypename']['id'] = 'entitytypename';
  $handler->display->display_options['fields']['entitytypename']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['entitytypename']['field'] = 'entitytypename';
  $handler->display->display_options['fields']['entitytypename']['label'] = 'entitytypename';
  /* Field: Esd hs 2013: Entitycharteringagencyname */
  $handler->display->display_options['fields']['entitycharteringagencyname']['id'] = 'entitycharteringagencyname';
  $handler->display->display_options['fields']['entitycharteringagencyname']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['entitycharteringagencyname']['field'] = 'entitycharteringagencyname';
  $handler->display->display_options['fields']['entitycharteringagencyname']['label'] = 'entitycharteringagencyname';
  /* Field: Esd hs 2013: Entityactualgrades */
  $handler->display->display_options['fields']['entityactualgrades']['id'] = 'entityactualgrades';
  $handler->display->display_options['fields']['entityactualgrades']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['entityactualgrades']['field'] = 'entityactualgrades';
  $handler->display->display_options['fields']['entityactualgrades']['label'] = 'entityactualgrades';
  /* Field: Esd hs 2013: Total enrollment */
  $handler->display->display_options['fields']['total_enrollment']['id'] = 'total_enrollment';
  $handler->display->display_options['fields']['total_enrollment']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['total_enrollment']['field'] = 'total_enrollment';
  $handler->display->display_options['fields']['total_enrollment']['label'] = 'total_enrollment';
  /* Field: Esd hs 2013: Act2 comp */
  $handler->display->display_options['fields']['act2_comp']['id'] = 'act2_comp';
  $handler->display->display_options['fields']['act2_comp']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act2_comp']['field'] = 'act2_comp';
  $handler->display->display_options['fields']['act2_comp']['label'] = 'act2_comp';
  $handler->display->display_options['fields']['act2_comp']['hide_empty'] = TRUE;
  /* Field: Esd hs 2013: Act2 comp pts */
  $handler->display->display_options['fields']['act2_comp_pts']['id'] = 'act2_comp_pts';
  $handler->display->display_options['fields']['act2_comp_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act2_comp_pts']['field'] = 'act2_comp_pts';
  $handler->display->display_options['fields']['act2_comp_pts']['label'] = 'act2_comp_pts';
  $handler->display->display_options['fields']['act2_comp_pts']['hide_alter_empty'] = FALSE;
  /* Field: Esd hs 2013: Act2 comp psspts */
  $handler->display->display_options['fields']['act2_comp_psspts']['id'] = 'act2_comp_psspts';
  $handler->display->display_options['fields']['act2_comp_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act2_comp_psspts']['field'] = 'act2_comp_psspts';
  $handler->display->display_options['fields']['act2_comp_psspts']['label'] = 'act2_comp_psspts';
  /* Field: Esd hs 2013: Act2 pcr */
  $handler->display->display_options['fields']['act2_pcr']['id'] = 'act2_pcr';
  $handler->display->display_options['fields']['act2_pcr']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act2_pcr']['field'] = 'act2_pcr';
  $handler->display->display_options['fields']['act2_pcr']['label'] = 'act2_pcr';
  /* Field: Esd hs 2013: Act2 pcr pts */
  $handler->display->display_options['fields']['act2_pcr_pts']['id'] = 'act2_pcr_pts';
  $handler->display->display_options['fields']['act2_pcr_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act2_pcr_pts']['field'] = 'act2_pcr_pts';
  $handler->display->display_options['fields']['act2_pcr_pts']['label'] = 'act2_pcr_pts';
  /* Field: Esd hs 2013: Act2 pcr psspts */
  $handler->display->display_options['fields']['act2_pcr_psspts']['id'] = 'act2_pcr_psspts';
  $handler->display->display_options['fields']['act2_pcr_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act2_pcr_psspts']['field'] = 'act2_pcr_psspts';
  $handler->display->display_options['fields']['act2_pcr_psspts']['label'] = 'act2_pcr_psspts';
  /* Field: Esd hs 2013: Gradrate */
  $handler->display->display_options['fields']['gradrate']['id'] = 'gradrate';
  $handler->display->display_options['fields']['gradrate']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['gradrate']['field'] = 'gradrate';
  $handler->display->display_options['fields']['gradrate']['label'] = 'gradrate';
  /* Field: Esd hs 2013: Gradrate pts */
  $handler->display->display_options['fields']['gradrate_pts']['id'] = 'gradrate_pts';
  $handler->display->display_options['fields']['gradrate_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['gradrate_pts']['field'] = 'gradrate_pts';
  $handler->display->display_options['fields']['gradrate_pts']['label'] = 'gradrate_pts';
  /* Field: Esd hs 2013: Gradrate psspts */
  $handler->display->display_options['fields']['gradrate_psspts']['id'] = 'gradrate_psspts';
  $handler->display->display_options['fields']['gradrate_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['gradrate_psspts']['field'] = 'gradrate_psspts';
  $handler->display->display_options['fields']['gradrate_psspts']['label'] = 'gradrate_psspts';
  /* Field: Esd hs 2013: Status pts */
  $handler->display->display_options['fields']['status_pts']['id'] = 'status_pts';
  $handler->display->display_options['fields']['status_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['status_pts']['field'] = 'status_pts';
  $handler->display->display_options['fields']['status_pts']['label'] = 'status_pts';
  /* Field: Esd hs 2013: Status psspts */
  $handler->display->display_options['fields']['status_psspts']['id'] = 'status_psspts';
  $handler->display->display_options['fields']['status_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['status_psspts']['field'] = 'status_psspts';
  $handler->display->display_options['fields']['status_psspts']['label'] = 'status_psspts';
  /* Field: Esd hs 2013: Status pct */
  $handler->display->display_options['fields']['status_pct']['id'] = 'status_pct';
  $handler->display->display_options['fields']['status_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['status_pct']['field'] = 'status_pct';
  $handler->display->display_options['fields']['status_pct']['label'] = 'status_pct';
  /* Field: Esd hs 2013: Status ltrgrade */
  $handler->display->display_options['fields']['status_ltrgrade']['id'] = 'status_ltrgrade';
  $handler->display->display_options['fields']['status_ltrgrade']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['status_ltrgrade']['field'] = 'status_ltrgrade';
  $handler->display->display_options['fields']['status_ltrgrade']['label'] = 'status_ltrgrade';
  /* Field: Esd hs 2013: Act grwth */
  $handler->display->display_options['fields']['act_grwth']['id'] = 'act_grwth';
  $handler->display->display_options['fields']['act_grwth']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act_grwth']['field'] = 'act_grwth';
  $handler->display->display_options['fields']['act_grwth']['label'] = 'act_grwth';
  /* Field: Esd hs 2013: Act grwth pts */
  $handler->display->display_options['fields']['act_grwth_pts']['id'] = 'act_grwth_pts';
  $handler->display->display_options['fields']['act_grwth_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act_grwth_pts']['field'] = 'act_grwth_pts';
  $handler->display->display_options['fields']['act_grwth_pts']['label'] = 'act_grwth_pts';
  /* Field: Esd hs 2013: Act grwth psspts */
  $handler->display->display_options['fields']['act_grwth_psspts']['id'] = 'act_grwth_psspts';
  $handler->display->display_options['fields']['act_grwth_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['act_grwth_psspts']['field'] = 'act_grwth_psspts';
  $handler->display->display_options['fields']['act_grwth_psspts']['label'] = 'act_grwth_psspts';
  /* Field: Esd hs 2013: Progress pts */
  $handler->display->display_options['fields']['progress_pts']['id'] = 'progress_pts';
  $handler->display->display_options['fields']['progress_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['progress_pts']['field'] = 'progress_pts';
  $handler->display->display_options['fields']['progress_pts']['label'] = 'progress_pts';
  /* Field: Esd hs 2013: Progress psspts */
  $handler->display->display_options['fields']['progress_psspts']['id'] = 'progress_psspts';
  $handler->display->display_options['fields']['progress_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['progress_psspts']['field'] = 'progress_psspts';
  $handler->display->display_options['fields']['progress_psspts']['label'] = 'progress_psspts';
  /* Field: Esd hs 2013: Progress pct */
  $handler->display->display_options['fields']['progress_pct']['id'] = 'progress_pct';
  $handler->display->display_options['fields']['progress_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['progress_pct']['field'] = 'progress_pct';
  $handler->display->display_options['fields']['progress_pct']['label'] = 'progress_pct';
  /* Field: Esd hs 2013: Progress ltrgrade */
  $handler->display->display_options['fields']['progress_ltrgrade']['id'] = 'progress_ltrgrade';
  $handler->display->display_options['fields']['progress_ltrgrade']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['progress_ltrgrade']['field'] = 'progress_ltrgrade';
  $handler->display->display_options['fields']['progress_ltrgrade']['label'] = 'progress_ltrgrade';
  /* Field: Esd hs 2013: Site s */
  $handler->display->display_options['fields']['site_s']['id'] = 'site_s';
  $handler->display->display_options['fields']['site_s']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['site_s']['field'] = 'site_s';
  $handler->display->display_options['fields']['site_s']['label'] = 'site_s';
  /* Field: Esd hs 2013: Site s pts */
  $handler->display->display_options['fields']['site_s_pts']['id'] = 'site_s_pts';
  $handler->display->display_options['fields']['site_s_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['site_s_pts']['field'] = 'site_s_pts';
  $handler->display->display_options['fields']['site_s_pts']['label'] = 'site_s_pts';
  /* Field: Esd hs 2013: Site s psspts */
  $handler->display->display_options['fields']['site_s_psspts']['id'] = 'site_s_psspts';
  $handler->display->display_options['fields']['site_s_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['site_s_psspts']['field'] = 'site_s_psspts';
  $handler->display->display_options['fields']['site_s_psspts']['label'] = 'site_s_psspts';
  /* Field: Esd hs 2013: Net5e 1213 */
  $handler->display->display_options['fields']['net5e_1213']['id'] = 'net5e_1213';
  $handler->display->display_options['fields']['net5e_1213']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['net5e_1213']['field'] = 'net5e_1213';
  $handler->display->display_options['fields']['net5e_1213']['label'] = 'net5e_1213';
  /* Field: Esd hs 2013: Net5e 1213 pts */
  $handler->display->display_options['fields']['net5e_1213_pts']['id'] = 'net5e_1213_pts';
  $handler->display->display_options['fields']['net5e_1213_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['net5e_1213_pts']['field'] = 'net5e_1213_pts';
  $handler->display->display_options['fields']['net5e_1213_pts']['label'] = 'net5e_1213_pts';
  /* Field: Esd hs 2013: Net5e 1213 psspts */
  $handler->display->display_options['fields']['net5e_1213_psspts']['id'] = 'net5e_1213_psspts';
  $handler->display->display_options['fields']['net5e_1213_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['net5e_1213_psspts']['field'] = 'net5e_1213_psspts';
  $handler->display->display_options['fields']['net5e_1213_psspts']['label'] = 'net5e_1213_psspts';
  /* Field: Esd hs 2013: Five e grwth */
  $handler->display->display_options['fields']['five_e_grwth']['id'] = 'five_e_grwth';
  $handler->display->display_options['fields']['five_e_grwth']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['five_e_grwth']['field'] = 'five_e_grwth';
  $handler->display->display_options['fields']['five_e_grwth']['label'] = 'five_e_grwth';
  /* Field: Esd hs 2013: Five e grwth pts */
  $handler->display->display_options['fields']['five_e_grwth_pts']['id'] = 'five_e_grwth_pts';
  $handler->display->display_options['fields']['five_e_grwth_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['five_e_grwth_pts']['field'] = 'five_e_grwth_pts';
  $handler->display->display_options['fields']['five_e_grwth_pts']['label'] = 'five_e_grwth_pts';
  /* Field: Esd hs 2013: Five e grwth psspts */
  $handler->display->display_options['fields']['five_e_grwth_psspts']['id'] = 'five_e_grwth_psspts';
  $handler->display->display_options['fields']['five_e_grwth_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['five_e_grwth_psspts']['field'] = 'five_e_grwth_psspts';
  $handler->display->display_options['fields']['five_e_grwth_psspts']['label'] = 'five_e_grwth_psspts';
  /* Field: Esd hs 2013: Culture pts */
  $handler->display->display_options['fields']['culture_pts']['id'] = 'culture_pts';
  $handler->display->display_options['fields']['culture_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['culture_pts']['field'] = 'culture_pts';
  $handler->display->display_options['fields']['culture_pts']['label'] = 'culture_pts';
  /* Field: Esd hs 2013: Culture psspts */
  $handler->display->display_options['fields']['culture_psspts']['id'] = 'culture_psspts';
  $handler->display->display_options['fields']['culture_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['culture_psspts']['field'] = 'culture_psspts';
  $handler->display->display_options['fields']['culture_psspts']['label'] = 'culture_psspts';
  /* Field: Esd hs 2013: Culture pct */
  $handler->display->display_options['fields']['culture_pct']['id'] = 'culture_pct';
  $handler->display->display_options['fields']['culture_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['culture_pct']['field'] = 'culture_pct';
  $handler->display->display_options['fields']['culture_pct']['label'] = 'culture_pct';
  /* Field: Esd hs 2013: Culture ltrgrade */
  $handler->display->display_options['fields']['culture_ltrgrade']['id'] = 'culture_ltrgrade';
  $handler->display->display_options['fields']['culture_ltrgrade']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['culture_ltrgrade']['field'] = 'culture_ltrgrade';
  $handler->display->display_options['fields']['culture_ltrgrade']['label'] = 'culture_ltrgrade';
  /* Field: Esd hs 2013: Econdis pct */
  $handler->display->display_options['fields']['econdis_pct']['id'] = 'econdis_pct';
  $handler->display->display_options['fields']['econdis_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['econdis_pct']['field'] = 'econdis_pct';
  $handler->display->display_options['fields']['econdis_pct']['label'] = 'econdis_pct';
  /* Field: Esd hs 2013: Sped pct */
  $handler->display->display_options['fields']['sped_pct']['id'] = 'sped_pct';
  $handler->display->display_options['fields']['sped_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['sped_pct']['field'] = 'sped_pct';
  $handler->display->display_options['fields']['sped_pct']['label'] = 'sped_pct';
  /* Field: Esd hs 2013: Ell pct */
  $handler->display->display_options['fields']['ell_pct']['id'] = 'ell_pct';
  $handler->display->display_options['fields']['ell_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['ell_pct']['field'] = 'ell_pct';
  $handler->display->display_options['fields']['ell_pct']['label'] = 'ell_pct';
  /* Field: Esd hs 2013: Studchrs */
  $handler->display->display_options['fields']['studchrs']['id'] = 'studchrs';
  $handler->display->display_options['fields']['studchrs']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['studchrs']['field'] = 'studchrs';
  $handler->display->display_options['fields']['studchrs']['label'] = 'studchrs';
  /* Field: Esd hs 2013: Studchrs pts */
  $handler->display->display_options['fields']['studchrs_pts']['id'] = 'studchrs_pts';
  $handler->display->display_options['fields']['studchrs_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['studchrs_pts']['field'] = 'studchrs_pts';
  $handler->display->display_options['fields']['studchrs_pts']['label'] = 'studchrs_pts';
  /* Field: Esd hs 2013: Fafsa rate */
  $handler->display->display_options['fields']['fafsa_rate']['id'] = 'fafsa_rate';
  $handler->display->display_options['fields']['fafsa_rate']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['fafsa_rate']['field'] = 'fafsa_rate';
  $handler->display->display_options['fields']['fafsa_rate']['label'] = 'fafsa_rate';
  /* Field: Esd hs 2013: Fafsa rate pts */
  $handler->display->display_options['fields']['fafsa_rate_pts']['id'] = 'fafsa_rate_pts';
  $handler->display->display_options['fields']['fafsa_rate_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['fafsa_rate_pts']['field'] = 'fafsa_rate_pts';
  $handler->display->display_options['fields']['fafsa_rate_pts']['label'] = 'fafsa_rate_pts';
  /* Field: Esd hs 2013: Total pts */
  $handler->display->display_options['fields']['total_pts']['id'] = 'total_pts';
  $handler->display->display_options['fields']['total_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['total_pts']['field'] = 'total_pts';
  $handler->display->display_options['fields']['total_pts']['label'] = 'total_pts';
  /* Field: Esd hs 2013: Turnaround pts */
  $handler->display->display_options['fields']['turnaround_pts']['id'] = 'turnaround_pts';
  $handler->display->display_options['fields']['turnaround_pts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['turnaround_pts']['field'] = 'turnaround_pts';
  $handler->display->display_options['fields']['turnaround_pts']['label'] = 'turnaround_pts';
  /* Field: Esd hs 2013: Total psspts */
  $handler->display->display_options['fields']['total_psspts']['id'] = 'total_psspts';
  $handler->display->display_options['fields']['total_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['total_psspts']['field'] = 'total_psspts';
  $handler->display->display_options['fields']['total_psspts']['label'] = 'total_psspts';
  /* Field: Esd hs 2013: Turnaround psspts */
  $handler->display->display_options['fields']['turnaround_psspts']['id'] = 'turnaround_psspts';
  $handler->display->display_options['fields']['turnaround_psspts']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['turnaround_psspts']['field'] = 'turnaround_psspts';
  $handler->display->display_options['fields']['turnaround_psspts']['label'] = 'turnaround_psspts';
  /* Field: Esd hs 2013: Mature pct */
  $handler->display->display_options['fields']['mature_pct']['id'] = 'mature_pct';
  $handler->display->display_options['fields']['mature_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['mature_pct']['field'] = 'mature_pct';
  $handler->display->display_options['fields']['mature_pct']['label'] = 'mature_pct';
  /* Field: Esd hs 2013: Turnaround pct */
  $handler->display->display_options['fields']['turnaround_pct']['id'] = 'turnaround_pct';
  $handler->display->display_options['fields']['turnaround_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['turnaround_pct']['field'] = 'turnaround_pct';
  $handler->display->display_options['fields']['turnaround_pct']['label'] = 'turnaround_pct';
  /* Field: Esd hs 2013: Newschool pct */
  $handler->display->display_options['fields']['newschool_pct']['id'] = 'newschool_pct';
  $handler->display->display_options['fields']['newschool_pct']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['newschool_pct']['field'] = 'newschool_pct';
  $handler->display->display_options['fields']['newschool_pct']['label'] = 'newschool_pct';
  /* Field: Esd hs 2013: Mature ltrgrade */
  $handler->display->display_options['fields']['mature_ltrgrade']['id'] = 'mature_ltrgrade';
  $handler->display->display_options['fields']['mature_ltrgrade']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['mature_ltrgrade']['field'] = 'mature_ltrgrade';
  $handler->display->display_options['fields']['mature_ltrgrade']['label'] = 'mature_ltrgrade';
  /* Field: Esd hs 2013: Turnaround designation */
  $handler->display->display_options['fields']['turnaround_designation']['id'] = 'turnaround_designation';
  $handler->display->display_options['fields']['turnaround_designation']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['turnaround_designation']['field'] = 'turnaround_designation';
  $handler->display->display_options['fields']['turnaround_designation']['label'] = 'turnaround_designation';
  /* Field: Esd hs 2013: Newschool designation */
  $handler->display->display_options['fields']['newschool_designation']['id'] = 'newschool_designation';
  $handler->display->display_options['fields']['newschool_designation']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['newschool_designation']['field'] = 'newschool_designation';
  $handler->display->display_options['fields']['newschool_designation']['label'] = 'newschool_designation';
  /* Field: Esd hs 2013: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'esd_hs_2013';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: Esd hs 2013: Buildingcode */
  $handler->display->display_options['arguments']['buildingcode']['id'] = 'buildingcode';
  $handler->display->display_options['arguments']['buildingcode']['table'] = 'esd_hs_2013';
  $handler->display->display_options['arguments']['buildingcode']['field'] = 'buildingcode';
  $handler->display->display_options['arguments']['buildingcode']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['buildingcode']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['buildingcode']['title'] = 'Esd hs 2013 %1';
  $handler->display->display_options['arguments']['buildingcode']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['buildingcode']['summary']['format'] = 'default_summary';
  /* Filter criterion: Esd hs 2013: Buildingcode */
  $handler->display->display_options['filters']['buildingcode']['id'] = 'buildingcode';
  $handler->display->display_options['filters']['buildingcode']['table'] = 'esd_hs_2013';
  $handler->display->display_options['filters']['buildingcode']['field'] = 'buildingcode';
  $handler->display->display_options['filters']['buildingcode']['exposed'] = TRUE;
  $handler->display->display_options['filters']['buildingcode']['expose']['operator_id'] = 'buildingcode_op';
  $handler->display->display_options['filters']['buildingcode']['expose']['label'] = 'bcode';
  $handler->display->display_options['filters']['buildingcode']['expose']['operator'] = 'buildingcode_op';
  $handler->display->display_options['filters']['buildingcode']['expose']['identifier'] = 'bcode';
  $handler->display->display_options['filters']['buildingcode']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    7 => 0,
    3 => 0,
    10 => 0,
    6 => 0,
    11 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/data/view/esd_hs_2013';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Esd hs 2013';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'esd_hs_2013';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'csv/esd_hs_2013';
  $export['esd_hs_2013'] = $view;

  $view = new view();
  $view->name = 'esd_k8_2013';
  $view->description = 'Default view for data table Esd k8 2013';
  $view->tag = 'data table';
  $view->base_table = 'esd_k8_2013';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'Esd k8 2013';
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
    'buildingcode' => 'buildingcode',
    'buildingname' => 'buildingname',
    'SchoolCategory' => 'SchoolCategory',
    'entitytypename' => 'entitytypename',
    'entitycharteringagencyname' => 'entitycharteringagencyname',
    'entityactualgrades' => 'entityactualgrades',
    'total_enrollment' => 'total_enrollment',
    'pr2_math' => 'pr2_math',
    'pr2_math_pts' => 'pr2_math_pts',
    'pr2_math_ptsps' => 'pr2_math_ptsps',
    'pr2_ela' => 'pr2_ela',
    'pr2_ela_pts' => 'pr2_ela_pts',
    'pr2_ela_ptsps' => 'pr2_ela_ptsps',
    'pr2_other' => 'pr2_other',
    'pr2_other_pts' => 'pr2_other_pts',
    'pr2_other_ptsps' => 'pr2_other_ptsps',
    'pts_status' => 'pts_status',
    'ptspos_status' => 'ptspos_status',
    'status_pct' => 'status_pct',
    'status_ltrgrade' => 'status_ltrgrade',
    'plc_comp' => 'plc_comp',
    'plc_comp_pts' => 'plc_comp_pts',
    'plc_comp_ptsps' => 'plc_comp_ptsps',
    'bench_comp' => 'bench_comp',
    'bench_comp_pts' => 'bench_comp_pts',
    'bench_comp_ptsps' => 'bench_comp_ptsps',
    'pts_progress' => 'pts_progress',
    'ptspos_progress' => 'ptspos_progress',
    'progress_pct' => 'progress_pct',
    'progress_ltrgrade' => 'progress_ltrgrade',
    'site_s' => 'site_s',
    'site_s_pts' => 'site_s_pts',
    'site_s_ptsps' => 'site_s_ptsps',
    'net5e_1213' => 'net5e_1213',
    'net5e_1213_pts' => 'net5e_1213_pts',
    'net5e_1213_ptsps' => 'net5e_1213_ptsps',
    'five_e_grwth' => 'five_e_grwth',
    'five_e_grwth_pts' => 'five_e_grwth_pts',
    'five_e_grwth_ptsps' => 'five_e_grwth_ptsps',
    'pts_culture' => 'pts_culture',
    'ptspos_culture' => 'ptspos_culture',
    'culture_pct' => 'culture_pct',
    'culture_ltrgrade' => 'culture_ltrgrade',
    'econdis_pct' => 'econdis_pct',
    'sped_pct' => 'sped_pct',
    'ell_pct' => 'ell_pct',
    'studchrs' => 'studchrs',
    'studchrs_pts' => 'studchrs_pts',
    'pts_earned' => 'pts_earned',
    'pts_possible' => 'pts_possible',
    'turnaround_pts_earned' => 'turnaround_pts_earned',
    'turnaround_pts_possible' => 'turnaround_pts_possible',
    'mature_pct' => 'mature_pct',
    'turnaround_pct' => 'turnaround_pct',
    'newschool_pct' => 'newschool_pct',
    'mature_ltrgrade' => 'mature_ltrgrade',
    'turnaround_designation' => 'turnaround_designation',
    'newschool_designation' => 'newschool_designation',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'buildingcode' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'buildingname' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SchoolCategory' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'entitytypename' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'entitycharteringagencyname' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'entityactualgrades' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'total_enrollment' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_math' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_math_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_math_ptsps' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_ela' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_ela_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_ela_ptsps' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_other' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_other_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pr2_other_ptsps' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pts_status' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ptspos_status' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status_ltrgrade' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'plc_comp' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'plc_comp_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'plc_comp_ptsps' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'bench_comp' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'bench_comp_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'bench_comp_ptsps' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pts_progress' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ptspos_progress' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'progress_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'progress_ltrgrade' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'site_s' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'site_s_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'site_s_ptsps' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'net5e_1213' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'net5e_1213_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'net5e_1213_ptsps' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'five_e_grwth' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'five_e_grwth_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'five_e_grwth_ptsps' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pts_culture' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ptspos_culture' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'culture_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'culture_ltrgrade' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'econdis_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'sped_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ell_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'studchrs' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'studchrs_pts' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pts_earned' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'pts_possible' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'turnaround_pts_earned' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'turnaround_pts_possible' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mature_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'turnaround_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'newschool_pct' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mature_ltrgrade' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'turnaround_designation' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'newschool_designation' => array(
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
  /* Field: Esd k8 2013: Buildingcode */
  $handler->display->display_options['fields']['buildingcode']['id'] = 'buildingcode';
  $handler->display->display_options['fields']['buildingcode']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['buildingcode']['field'] = 'buildingcode';
  $handler->display->display_options['fields']['buildingcode']['label'] = 'buildingcode';
  /* Field: Esd k8 2013: Buildingname */
  $handler->display->display_options['fields']['buildingname']['id'] = 'buildingname';
  $handler->display->display_options['fields']['buildingname']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['buildingname']['field'] = 'buildingname';
  $handler->display->display_options['fields']['buildingname']['label'] = 'buildingname';
  /* Field: Esd k8 2013: Schoolcategory */
  $handler->display->display_options['fields']['SchoolCategory']['id'] = 'SchoolCategory';
  $handler->display->display_options['fields']['SchoolCategory']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['SchoolCategory']['field'] = 'SchoolCategory';
  $handler->display->display_options['fields']['SchoolCategory']['label'] = 'SchoolCategory';
  /* Field: Esd k8 2013: Entitytypename */
  $handler->display->display_options['fields']['entitytypename']['id'] = 'entitytypename';
  $handler->display->display_options['fields']['entitytypename']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['entitytypename']['field'] = 'entitytypename';
  $handler->display->display_options['fields']['entitytypename']['label'] = 'entitytypename';
  /* Field: Esd k8 2013: Entitycharteringagencyname */
  $handler->display->display_options['fields']['entitycharteringagencyname']['id'] = 'entitycharteringagencyname';
  $handler->display->display_options['fields']['entitycharteringagencyname']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['entitycharteringagencyname']['field'] = 'entitycharteringagencyname';
  $handler->display->display_options['fields']['entitycharteringagencyname']['label'] = 'entitycharteringagencyname';
  /* Field: Esd k8 2013: Entityactualgrades */
  $handler->display->display_options['fields']['entityactualgrades']['id'] = 'entityactualgrades';
  $handler->display->display_options['fields']['entityactualgrades']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['entityactualgrades']['field'] = 'entityactualgrades';
  $handler->display->display_options['fields']['entityactualgrades']['label'] = 'entityactualgrades';
  /* Field: Esd k8 2013: Total enrollment */
  $handler->display->display_options['fields']['total_enrollment']['id'] = 'total_enrollment';
  $handler->display->display_options['fields']['total_enrollment']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['total_enrollment']['field'] = 'total_enrollment';
  $handler->display->display_options['fields']['total_enrollment']['label'] = 'total_enrollment';
  /* Field: Esd k8 2013: Pr2 math */
  $handler->display->display_options['fields']['pr2_math']['id'] = 'pr2_math';
  $handler->display->display_options['fields']['pr2_math']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_math']['field'] = 'pr2_math';
  $handler->display->display_options['fields']['pr2_math']['label'] = 'pr2_math';
  /* Field: Esd k8 2013: Pr2 math pts */
  $handler->display->display_options['fields']['pr2_math_pts']['id'] = 'pr2_math_pts';
  $handler->display->display_options['fields']['pr2_math_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_math_pts']['field'] = 'pr2_math_pts';
  $handler->display->display_options['fields']['pr2_math_pts']['label'] = 'pr2_math_pts';
  /* Field: Esd k8 2013: Pr2 math ptsps */
  $handler->display->display_options['fields']['pr2_math_ptsps']['id'] = 'pr2_math_ptsps';
  $handler->display->display_options['fields']['pr2_math_ptsps']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_math_ptsps']['field'] = 'pr2_math_ptsps';
  $handler->display->display_options['fields']['pr2_math_ptsps']['label'] = 'pr2_math_ptsps';
  /* Field: Esd k8 2013: Pr2 ela */
  $handler->display->display_options['fields']['pr2_ela']['id'] = 'pr2_ela';
  $handler->display->display_options['fields']['pr2_ela']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_ela']['field'] = 'pr2_ela';
  $handler->display->display_options['fields']['pr2_ela']['label'] = 'pr2_ela';
  /* Field: Esd k8 2013: Pr2 ela pts */
  $handler->display->display_options['fields']['pr2_ela_pts']['id'] = 'pr2_ela_pts';
  $handler->display->display_options['fields']['pr2_ela_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_ela_pts']['field'] = 'pr2_ela_pts';
  $handler->display->display_options['fields']['pr2_ela_pts']['label'] = 'pr2_ela_pts';
  /* Field: Esd k8 2013: Pr2 ela ptsps */
  $handler->display->display_options['fields']['pr2_ela_ptsps']['id'] = 'pr2_ela_ptsps';
  $handler->display->display_options['fields']['pr2_ela_ptsps']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_ela_ptsps']['field'] = 'pr2_ela_ptsps';
  $handler->display->display_options['fields']['pr2_ela_ptsps']['label'] = 'pr2_ela_ptsps';
  /* Field: Esd k8 2013: Pr2 other */
  $handler->display->display_options['fields']['pr2_other']['id'] = 'pr2_other';
  $handler->display->display_options['fields']['pr2_other']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_other']['field'] = 'pr2_other';
  $handler->display->display_options['fields']['pr2_other']['label'] = 'pr2_other';
  /* Field: Esd k8 2013: Pr2 other pts */
  $handler->display->display_options['fields']['pr2_other_pts']['id'] = 'pr2_other_pts';
  $handler->display->display_options['fields']['pr2_other_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_other_pts']['field'] = 'pr2_other_pts';
  $handler->display->display_options['fields']['pr2_other_pts']['label'] = 'pr2_other_pts';
  /* Field: Esd k8 2013: Pr2 other ptsps */
  $handler->display->display_options['fields']['pr2_other_ptsps']['id'] = 'pr2_other_ptsps';
  $handler->display->display_options['fields']['pr2_other_ptsps']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pr2_other_ptsps']['field'] = 'pr2_other_ptsps';
  $handler->display->display_options['fields']['pr2_other_ptsps']['label'] = 'pr2_other_ptsps';
  /* Field: Esd k8 2013: Pts status */
  $handler->display->display_options['fields']['pts_status']['id'] = 'pts_status';
  $handler->display->display_options['fields']['pts_status']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pts_status']['field'] = 'pts_status';
  $handler->display->display_options['fields']['pts_status']['label'] = 'pts_status';
  /* Field: Esd k8 2013: Ptspos status */
  $handler->display->display_options['fields']['ptspos_status']['id'] = 'ptspos_status';
  $handler->display->display_options['fields']['ptspos_status']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['ptspos_status']['field'] = 'ptspos_status';
  $handler->display->display_options['fields']['ptspos_status']['label'] = 'ptspos_status';
  /* Field: Esd k8 2013: Status pct */
  $handler->display->display_options['fields']['status_pct']['id'] = 'status_pct';
  $handler->display->display_options['fields']['status_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['status_pct']['field'] = 'status_pct';
  $handler->display->display_options['fields']['status_pct']['label'] = 'status_pct';
  /* Field: Esd k8 2013: Status ltrgrade */
  $handler->display->display_options['fields']['status_ltrgrade']['id'] = 'status_ltrgrade';
  $handler->display->display_options['fields']['status_ltrgrade']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['status_ltrgrade']['field'] = 'status_ltrgrade';
  $handler->display->display_options['fields']['status_ltrgrade']['label'] = 'status_ltrgrade';
  /* Field: Esd k8 2013: Plc comp */
  $handler->display->display_options['fields']['plc_comp']['id'] = 'plc_comp';
  $handler->display->display_options['fields']['plc_comp']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['plc_comp']['field'] = 'plc_comp';
  $handler->display->display_options['fields']['plc_comp']['label'] = 'plc_comp';
  /* Field: Esd k8 2013: Plc comp pts */
  $handler->display->display_options['fields']['plc_comp_pts']['id'] = 'plc_comp_pts';
  $handler->display->display_options['fields']['plc_comp_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['plc_comp_pts']['field'] = 'plc_comp_pts';
  $handler->display->display_options['fields']['plc_comp_pts']['label'] = 'plc_comp_pts';
  /* Field: Esd k8 2013: Plc comp ptsps */
  $handler->display->display_options['fields']['plc_comp_ptsps']['id'] = 'plc_comp_ptsps';
  $handler->display->display_options['fields']['plc_comp_ptsps']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['plc_comp_ptsps']['field'] = 'plc_comp_ptsps';
  $handler->display->display_options['fields']['plc_comp_ptsps']['label'] = 'plc_comp_ptsps';
  /* Field: Esd k8 2013: Bench comp */
  $handler->display->display_options['fields']['bench_comp']['id'] = 'bench_comp';
  $handler->display->display_options['fields']['bench_comp']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['bench_comp']['field'] = 'bench_comp';
  $handler->display->display_options['fields']['bench_comp']['label'] = 'bench_comp';
  /* Field: Esd k8 2013: Bench comp pts */
  $handler->display->display_options['fields']['bench_comp_pts']['id'] = 'bench_comp_pts';
  $handler->display->display_options['fields']['bench_comp_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['bench_comp_pts']['field'] = 'bench_comp_pts';
  $handler->display->display_options['fields']['bench_comp_pts']['label'] = 'bench_comp_pts';
  /* Field: Esd k8 2013: Bench comp ptsps */
  $handler->display->display_options['fields']['bench_comp_ptsps']['id'] = 'bench_comp_ptsps';
  $handler->display->display_options['fields']['bench_comp_ptsps']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['bench_comp_ptsps']['field'] = 'bench_comp_ptsps';
  $handler->display->display_options['fields']['bench_comp_ptsps']['label'] = 'bench_comp_ptsps';
  /* Field: Esd k8 2013: Pts progress */
  $handler->display->display_options['fields']['pts_progress']['id'] = 'pts_progress';
  $handler->display->display_options['fields']['pts_progress']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pts_progress']['field'] = 'pts_progress';
  $handler->display->display_options['fields']['pts_progress']['label'] = 'pts_progress';
  /* Field: Esd k8 2013: Ptspos progress */
  $handler->display->display_options['fields']['ptspos_progress']['id'] = 'ptspos_progress';
  $handler->display->display_options['fields']['ptspos_progress']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['ptspos_progress']['field'] = 'ptspos_progress';
  $handler->display->display_options['fields']['ptspos_progress']['label'] = 'ptspos_progress';
  /* Field: Esd k8 2013: Progress pct */
  $handler->display->display_options['fields']['progress_pct']['id'] = 'progress_pct';
  $handler->display->display_options['fields']['progress_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['progress_pct']['field'] = 'progress_pct';
  $handler->display->display_options['fields']['progress_pct']['label'] = 'progress_pct';
  /* Field: Esd k8 2013: Progress ltrgrade */
  $handler->display->display_options['fields']['progress_ltrgrade']['id'] = 'progress_ltrgrade';
  $handler->display->display_options['fields']['progress_ltrgrade']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['progress_ltrgrade']['field'] = 'progress_ltrgrade';
  $handler->display->display_options['fields']['progress_ltrgrade']['label'] = 'progress_ltrgrade';
  /* Field: Esd k8 2013: Site s */
  $handler->display->display_options['fields']['site_s']['id'] = 'site_s';
  $handler->display->display_options['fields']['site_s']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['site_s']['field'] = 'site_s';
  $handler->display->display_options['fields']['site_s']['label'] = 'site_s';
  /* Field: Esd k8 2013: Site s pts */
  $handler->display->display_options['fields']['site_s_pts']['id'] = 'site_s_pts';
  $handler->display->display_options['fields']['site_s_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['site_s_pts']['field'] = 'site_s_pts';
  $handler->display->display_options['fields']['site_s_pts']['label'] = 'site_s_pts';
  /* Field: Esd k8 2013: Site s ptsps */
  $handler->display->display_options['fields']['site_s_ptsps']['id'] = 'site_s_ptsps';
  $handler->display->display_options['fields']['site_s_ptsps']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['site_s_ptsps']['field'] = 'site_s_ptsps';
  $handler->display->display_options['fields']['site_s_ptsps']['label'] = 'site_s_ptsps';
  /* Field: Esd k8 2013: Net5e 1213 */
  $handler->display->display_options['fields']['net5e_1213']['id'] = 'net5e_1213';
  $handler->display->display_options['fields']['net5e_1213']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['net5e_1213']['field'] = 'net5e_1213';
  $handler->display->display_options['fields']['net5e_1213']['label'] = 'net5e_1213';
  /* Field: Esd k8 2013: Net5e 1213 pts */
  $handler->display->display_options['fields']['net5e_1213_pts']['id'] = 'net5e_1213_pts';
  $handler->display->display_options['fields']['net5e_1213_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['net5e_1213_pts']['field'] = 'net5e_1213_pts';
  $handler->display->display_options['fields']['net5e_1213_pts']['label'] = 'net5e_1213_pts';
  /* Field: Esd k8 2013: Net5e 1213 ptsps */
  $handler->display->display_options['fields']['net5e_1213_ptsps']['id'] = 'net5e_1213_ptsps';
  $handler->display->display_options['fields']['net5e_1213_ptsps']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['net5e_1213_ptsps']['field'] = 'net5e_1213_ptsps';
  $handler->display->display_options['fields']['net5e_1213_ptsps']['label'] = 'net5e_1213_ptsps';
  /* Field: Esd k8 2013: Five e grwth */
  $handler->display->display_options['fields']['five_e_grwth']['id'] = 'five_e_grwth';
  $handler->display->display_options['fields']['five_e_grwth']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['five_e_grwth']['field'] = 'five_e_grwth';
  $handler->display->display_options['fields']['five_e_grwth']['label'] = 'five_e_grwth';
  /* Field: Esd k8 2013: Five e grwth pts */
  $handler->display->display_options['fields']['five_e_grwth_pts']['id'] = 'five_e_grwth_pts';
  $handler->display->display_options['fields']['five_e_grwth_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['five_e_grwth_pts']['field'] = 'five_e_grwth_pts';
  $handler->display->display_options['fields']['five_e_grwth_pts']['label'] = 'five_e_grwth_pts';
  /* Field: Esd k8 2013: Five e grwth ptsps */
  $handler->display->display_options['fields']['five_e_grwth_ptsps']['id'] = 'five_e_grwth_ptsps';
  $handler->display->display_options['fields']['five_e_grwth_ptsps']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['five_e_grwth_ptsps']['field'] = 'five_e_grwth_ptsps';
  $handler->display->display_options['fields']['five_e_grwth_ptsps']['label'] = 'five_e_grwth_ptsps';
  /* Field: Esd k8 2013: Pts culture */
  $handler->display->display_options['fields']['pts_culture']['id'] = 'pts_culture';
  $handler->display->display_options['fields']['pts_culture']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pts_culture']['field'] = 'pts_culture';
  $handler->display->display_options['fields']['pts_culture']['label'] = 'pts_culture';
  /* Field: Esd k8 2013: Ptspos culture */
  $handler->display->display_options['fields']['ptspos_culture']['id'] = 'ptspos_culture';
  $handler->display->display_options['fields']['ptspos_culture']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['ptspos_culture']['field'] = 'ptspos_culture';
  $handler->display->display_options['fields']['ptspos_culture']['label'] = 'ptspos_culture';
  /* Field: Esd k8 2013: Culture pct */
  $handler->display->display_options['fields']['culture_pct']['id'] = 'culture_pct';
  $handler->display->display_options['fields']['culture_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['culture_pct']['field'] = 'culture_pct';
  $handler->display->display_options['fields']['culture_pct']['label'] = 'culture_pct';
  /* Field: Esd k8 2013: Culture ltrgrade */
  $handler->display->display_options['fields']['culture_ltrgrade']['id'] = 'culture_ltrgrade';
  $handler->display->display_options['fields']['culture_ltrgrade']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['culture_ltrgrade']['field'] = 'culture_ltrgrade';
  $handler->display->display_options['fields']['culture_ltrgrade']['label'] = 'culture_ltrgrade';
  /* Field: Esd k8 2013: Econdis pct */
  $handler->display->display_options['fields']['econdis_pct']['id'] = 'econdis_pct';
  $handler->display->display_options['fields']['econdis_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['econdis_pct']['field'] = 'econdis_pct';
  $handler->display->display_options['fields']['econdis_pct']['label'] = 'econdis_pct';
  /* Field: Esd k8 2013: Sped pct */
  $handler->display->display_options['fields']['sped_pct']['id'] = 'sped_pct';
  $handler->display->display_options['fields']['sped_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['sped_pct']['field'] = 'sped_pct';
  $handler->display->display_options['fields']['sped_pct']['label'] = 'sped_pct';
  /* Field: Esd k8 2013: Ell pct */
  $handler->display->display_options['fields']['ell_pct']['id'] = 'ell_pct';
  $handler->display->display_options['fields']['ell_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['ell_pct']['field'] = 'ell_pct';
  $handler->display->display_options['fields']['ell_pct']['label'] = 'ell_pct';
  /* Field: Esd k8 2013: Studchrs */
  $handler->display->display_options['fields']['studchrs']['id'] = 'studchrs';
  $handler->display->display_options['fields']['studchrs']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['studchrs']['field'] = 'studchrs';
  $handler->display->display_options['fields']['studchrs']['label'] = 'studchrs';
  /* Field: Esd k8 2013: Studchrs pts */
  $handler->display->display_options['fields']['studchrs_pts']['id'] = 'studchrs_pts';
  $handler->display->display_options['fields']['studchrs_pts']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['studchrs_pts']['field'] = 'studchrs_pts';
  $handler->display->display_options['fields']['studchrs_pts']['label'] = 'studchrs_pts';
  /* Field: Esd k8 2013: Pts earned */
  $handler->display->display_options['fields']['pts_earned']['id'] = 'pts_earned';
  $handler->display->display_options['fields']['pts_earned']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pts_earned']['field'] = 'pts_earned';
  $handler->display->display_options['fields']['pts_earned']['label'] = 'pts_earned';
  /* Field: Esd k8 2013: Pts possible */
  $handler->display->display_options['fields']['pts_possible']['id'] = 'pts_possible';
  $handler->display->display_options['fields']['pts_possible']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['pts_possible']['field'] = 'pts_possible';
  $handler->display->display_options['fields']['pts_possible']['label'] = 'pts_possible';
  /* Field: Esd k8 2013: Turnaround pts earned */
  $handler->display->display_options['fields']['turnaround_pts_earned']['id'] = 'turnaround_pts_earned';
  $handler->display->display_options['fields']['turnaround_pts_earned']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['turnaround_pts_earned']['field'] = 'turnaround_pts_earned';
  $handler->display->display_options['fields']['turnaround_pts_earned']['label'] = 'turnaround_pts_earned';
  /* Field: Esd k8 2013: Turnaround pts possible */
  $handler->display->display_options['fields']['turnaround_pts_possible']['id'] = 'turnaround_pts_possible';
  $handler->display->display_options['fields']['turnaround_pts_possible']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['turnaround_pts_possible']['field'] = 'turnaround_pts_possible';
  $handler->display->display_options['fields']['turnaround_pts_possible']['label'] = 'turnaround_pts_possible';
  /* Field: Esd k8 2013: Mature pct */
  $handler->display->display_options['fields']['mature_pct']['id'] = 'mature_pct';
  $handler->display->display_options['fields']['mature_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['mature_pct']['field'] = 'mature_pct';
  $handler->display->display_options['fields']['mature_pct']['label'] = 'mature_pct';
  /* Field: Esd k8 2013: Turnaround pct */
  $handler->display->display_options['fields']['turnaround_pct']['id'] = 'turnaround_pct';
  $handler->display->display_options['fields']['turnaround_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['turnaround_pct']['field'] = 'turnaround_pct';
  $handler->display->display_options['fields']['turnaround_pct']['label'] = 'turnaround_pct';
  /* Field: Esd k8 2013: Newschool pct */
  $handler->display->display_options['fields']['newschool_pct']['id'] = 'newschool_pct';
  $handler->display->display_options['fields']['newschool_pct']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['newschool_pct']['field'] = 'newschool_pct';
  $handler->display->display_options['fields']['newschool_pct']['label'] = 'newschool_pct';
  /* Field: Esd k8 2013: Mature ltrgrade */
  $handler->display->display_options['fields']['mature_ltrgrade']['id'] = 'mature_ltrgrade';
  $handler->display->display_options['fields']['mature_ltrgrade']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['mature_ltrgrade']['field'] = 'mature_ltrgrade';
  $handler->display->display_options['fields']['mature_ltrgrade']['label'] = 'mature_ltrgrade';
  /* Field: Esd k8 2013: Turnaround designation */
  $handler->display->display_options['fields']['turnaround_designation']['id'] = 'turnaround_designation';
  $handler->display->display_options['fields']['turnaround_designation']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['turnaround_designation']['field'] = 'turnaround_designation';
  $handler->display->display_options['fields']['turnaround_designation']['label'] = 'turnaround_designation';
  /* Field: Esd k8 2013: Newschool designation */
  $handler->display->display_options['fields']['newschool_designation']['id'] = 'newschool_designation';
  $handler->display->display_options['fields']['newschool_designation']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['newschool_designation']['field'] = 'newschool_designation';
  $handler->display->display_options['fields']['newschool_designation']['label'] = 'newschool_designation';
  /* Field: Esd k8 2013: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'esd_k8_2013';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: Esd k8 2013: Buildingcode */
  $handler->display->display_options['arguments']['buildingcode']['id'] = 'buildingcode';
  $handler->display->display_options['arguments']['buildingcode']['table'] = 'esd_k8_2013';
  $handler->display->display_options['arguments']['buildingcode']['field'] = 'buildingcode';
  $handler->display->display_options['arguments']['buildingcode']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['buildingcode']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['buildingcode']['title'] = 'Esd k8 2013 %1';
  $handler->display->display_options['arguments']['buildingcode']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['buildingcode']['summary']['format'] = 'default_summary';
  /* Filter criterion: Esd k8 2013: Buildingcode */
  $handler->display->display_options['filters']['buildingcode']['id'] = 'buildingcode';
  $handler->display->display_options['filters']['buildingcode']['table'] = 'esd_k8_2013';
  $handler->display->display_options['filters']['buildingcode']['field'] = 'buildingcode';
  $handler->display->display_options['filters']['buildingcode']['exposed'] = TRUE;
  $handler->display->display_options['filters']['buildingcode']['expose']['operator_id'] = 'buildingcode_op';
  $handler->display->display_options['filters']['buildingcode']['expose']['label'] = 'bcode';
  $handler->display->display_options['filters']['buildingcode']['expose']['operator'] = 'buildingcode_op';
  $handler->display->display_options['filters']['buildingcode']['expose']['identifier'] = 'bcode';
  $handler->display->display_options['filters']['buildingcode']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    7 => 0,
    3 => 0,
    10 => 0,
    6 => 0,
    11 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/data/view/esd_k8_2013';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Esd k8 2013';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'esd_k8_2013';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'csv/esd_k8_2013';
  $export['esd_k8_2013'] = $view;

  $view = new view();
  $view->name = 'fiveessentials_2013';
  $view->description = 'Default view for data table Five Essentials 2013';
  $view->tag = 'data table';
  $view->base_table = 'fiveessentials_2013';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'Five Essentials 2013';
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
    'BCODE' => 'BCODE',
    'School_Name' => 'School_Name',
    'School_Reporting_Slug' => 'School_Reporting_Slug',
    'State_Schl_ID' => 'State_Schl_ID',
    'District_Schl_ID' => 'District_Schl_ID',
    'School_Level' => 'School_Level',
    'Student_Report' => 'Student_Report',
    'Teacher_Report' => 'Teacher_Report',
    'Student_Response_Rate' => 'Student_Response_Rate',
    'Teacher_Response_Rate' => 'Teacher_Response_Rate',
    'Student_Lazy_Rate' => 'Student_Lazy_Rate',
    'Teacher_Lazy_Rate' => 'Teacher_Lazy_Rate',
    'Student_N' => 'Student_N',
    'Teacher_N' => 'Teacher_N',
    'ACNO' => 'ACNO',
    'CLAR' => 'CLAR',
    'COLB' => 'COLB',
    'COLR' => 'COLR',
    'DATA' => 'DATA',
    'ENGG' => 'ENGG',
    'ENGL' => 'ENGL',
    'HUMR' => 'HUMR',
    'INFL' => 'INFL',
    'INST' => 'INST',
    'MATH' => 'MATH',
    'OUTR' => 'OUTR',
    'PART' => 'PART',
    'PEER' => 'PEER',
    'PERC' => 'PERC',
    'PGMC' => 'PGMC',
    'PRES' => 'PRES',
    'PRT2' => 'PRT2',
    'PRTI' => 'PRTI',
    'QPD2' => 'QPD2',
    'REFD' => 'REFD',
    'SAFE' => 'SAFE',
    'SCMT' => 'SCMT',
    'SDIS' => 'SDIS',
    'SLAP' => 'SLAP',
    'SOCZ' => 'SOCZ',
    'STDY' => 'STDY',
    'TRPA' => 'TRPA',
    'TRPR' => 'TRPR',
    'TRTE' => 'TRTE',
    'TRTS' => 'TRTS',
    'TSAF' => 'TSAF',
    'UEXP' => 'UEXP',
    'Category5E' => 'Category5E',
    'Net5e' => 'Net5e',
    'E_leaders' => 'E_leaders',
    'E_teachers' => 'E_teachers',
    'E_families' => 'E_families',
    'E_environment' => 'E_environment',
    'E_instruction' => 'E_instruction',
    'Location' => 'Location',
  );
  $handler->display->display_options['style_options']['default'] = -1;
  $handler->display->display_options['style_options']['info'] = array(
    'BCODE' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'School_Name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'School_Reporting_Slug' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'State_Schl_ID' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'District_Schl_ID' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'School_Level' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Student_Report' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Teacher_Report' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Student_Response_Rate' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Teacher_Response_Rate' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Student_Lazy_Rate' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Teacher_Lazy_Rate' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Student_N' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Teacher_N' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ACNO' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'CLAR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'COLB' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'COLR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'DATA' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ENGG' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ENGL' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'HUMR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'INFL' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'INST' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'MATH' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'OUTR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'PART' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'PEER' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'PERC' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'PGMC' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'PRES' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'PRT2' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'PRTI' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'QPD2' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'REFD' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SAFE' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SCMT' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SDIS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SLAP' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'SOCZ' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'STDY' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TRPA' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TRPR' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TRTE' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TRTS' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'TSAF' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'UEXP' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Category5E' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Net5e' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'E_leaders' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'E_teachers' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'E_families' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'E_environment' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'E_instruction' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'Location' => array(
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
  /* Field: Five Essentials 2013: Bcode */
  $handler->display->display_options['fields']['BCODE']['id'] = 'BCODE';
  $handler->display->display_options['fields']['BCODE']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['BCODE']['field'] = 'BCODE';
  $handler->display->display_options['fields']['BCODE']['label'] = 'BCODE';
  /* Field: Five Essentials 2013: School name */
  $handler->display->display_options['fields']['School_Name']['id'] = 'School_Name';
  $handler->display->display_options['fields']['School_Name']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['School_Name']['field'] = 'School_Name';
  $handler->display->display_options['fields']['School_Name']['label'] = 'School_Name';
  /* Field: Five Essentials 2013: 5Essentials Internal School Identifier */
  $handler->display->display_options['fields']['School_Reporting_Slug']['id'] = 'School_Reporting_Slug';
  $handler->display->display_options['fields']['School_Reporting_Slug']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['School_Reporting_Slug']['field'] = 'School_Reporting_Slug';
  /* Field: Five Essentials 2013: School&#039;s State Identifier */
  $handler->display->display_options['fields']['State_Schl_ID']['id'] = 'State_Schl_ID';
  $handler->display->display_options['fields']['State_Schl_ID']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['State_Schl_ID']['field'] = 'State_Schl_ID';
  /* Field: Five Essentials 2013: District schl id */
  $handler->display->display_options['fields']['District_Schl_ID']['id'] = 'District_Schl_ID';
  $handler->display->display_options['fields']['District_Schl_ID']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['District_Schl_ID']['field'] = 'District_Schl_ID';
  $handler->display->display_options['fields']['District_Schl_ID']['label'] = 'District_Schl_ID';
  /* Field: Five Essentials 2013: 1 or 2: 1 if elementary (PK-8) and 2 if high school */
  $handler->display->display_options['fields']['School_Level']['id'] = 'School_Level';
  $handler->display->display_options['fields']['School_Level']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['School_Level']['field'] = 'School_Level';
  /* Field: Five Essentials 2013: 0 or 1: 1 if eligible for student report */
  $handler->display->display_options['fields']['Student_Report']['id'] = 'Student_Report';
  $handler->display->display_options['fields']['Student_Report']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Student_Report']['field'] = 'Student_Report';
  /* Field: Five Essentials 2013: 0 or 1: 1 if eligible for teacher report */
  $handler->display->display_options['fields']['Teacher_Report']['id'] = 'Teacher_Report';
  $handler->display->display_options['fields']['Teacher_Report']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Teacher_Report']['field'] = 'Teacher_Report';
  /* Field: Five Essentials 2013: Response rate on student survey */
  $handler->display->display_options['fields']['Student_Response_Rate']['id'] = 'Student_Response_Rate';
  $handler->display->display_options['fields']['Student_Response_Rate']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Student_Response_Rate']['field'] = 'Student_Response_Rate';
  /* Field: Five Essentials 2013: Response rate on teacher survey */
  $handler->display->display_options['fields']['Teacher_Response_Rate']['id'] = 'Teacher_Response_Rate';
  $handler->display->display_options['fields']['Teacher_Response_Rate']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Teacher_Response_Rate']['field'] = 'Teacher_Response_Rate';
  /* Field: Five Essentials 2013: Percentage of &quot;lazy&quot; respondents for students */
  $handler->display->display_options['fields']['Student_Lazy_Rate']['id'] = 'Student_Lazy_Rate';
  $handler->display->display_options['fields']['Student_Lazy_Rate']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Student_Lazy_Rate']['field'] = 'Student_Lazy_Rate';
  /* Field: Five Essentials 2013: Percentage of &quot;lazy&quot; respondents for teachers */
  $handler->display->display_options['fields']['Teacher_Lazy_Rate']['id'] = 'Teacher_Lazy_Rate';
  $handler->display->display_options['fields']['Teacher_Lazy_Rate']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Teacher_Lazy_Rate']['field'] = 'Teacher_Lazy_Rate';
  /* Field: Five Essentials 2013: Total number of students listed on roster */
  $handler->display->display_options['fields']['Student_N']['id'] = 'Student_N';
  $handler->display->display_options['fields']['Student_N']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Student_N']['field'] = 'Student_N';
  /* Field: Five Essentials 2013: Total number of teachers listed on roster */
  $handler->display->display_options['fields']['Teacher_N']['id'] = 'Teacher_N';
  $handler->display->display_options['fields']['Teacher_N']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Teacher_N']['field'] = 'Teacher_N';
  /* Field: Five Essentials 2013: Peer Support for Academic Work (Student) */
  $handler->display->display_options['fields']['ACNO']['id'] = 'ACNO';
  $handler->display->display_options['fields']['ACNO']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['ACNO']['field'] = 'ACNO';
  /* Field: Five Essentials 2013: Course Clarity (Student) */
  $handler->display->display_options['fields']['CLAR']['id'] = 'CLAR';
  $handler->display->display_options['fields']['CLAR']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['CLAR']['field'] = 'CLAR';
  /* Field: Five Essentials 2013: Teacher Collaboration (Teacher) */
  $handler->display->display_options['fields']['COLB']['id'] = 'COLB';
  $handler->display->display_options['fields']['COLB']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['COLB']['field'] = 'COLB';
  /* Field: Five Essentials 2013: Collective Responsibility (Teacher) */
  $handler->display->display_options['fields']['COLR']['id'] = 'COLR';
  $handler->display->display_options['fields']['COLR']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['COLR']['field'] = 'COLR';
  /* Field: Five Essentials 2013: Collective Use of Assessment Data (Teacher) */
  $handler->display->display_options['fields']['DATA']['id'] = 'DATA';
  $handler->display->display_options['fields']['DATA']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['DATA']['field'] = 'DATA';
  /* Field: Five Essentials 2013: Academic Engagement (Student) */
  $handler->display->display_options['fields']['ENGG']['id'] = 'ENGG';
  $handler->display->display_options['fields']['ENGG']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['ENGG']['field'] = 'ENGG';
  /* Field: Five Essentials 2013: English Instruction (Student) */
  $handler->display->display_options['fields']['ENGL']['id'] = 'ENGL';
  $handler->display->display_options['fields']['ENGL']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['ENGL']['field'] = 'ENGL';
  /* Field: Five Essentials 2013: Human &amp; Social Resources in the Community (Student) */
  $handler->display->display_options['fields']['HUMR']['id'] = 'HUMR';
  $handler->display->display_options['fields']['HUMR']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['HUMR']['field'] = 'HUMR';
  /* Field: Five Essentials 2013: Teacher Influence (Teacher) */
  $handler->display->display_options['fields']['INFL']['id'] = 'INFL';
  $handler->display->display_options['fields']['INFL']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['INFL']['field'] = 'INFL';
  /* Field: Five Essentials 2013: Principal Instructional Leadership (Teacher) */
  $handler->display->display_options['fields']['INST']['id'] = 'INST';
  $handler->display->display_options['fields']['INST']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['INST']['field'] = 'INST';
  /* Field: Five Essentials 2013: Math Instruction (Student) */
  $handler->display->display_options['fields']['MATH']['id'] = 'MATH';
  $handler->display->display_options['fields']['MATH']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['MATH']['field'] = 'MATH';
  /* Field: Five Essentials 2013: Outreach to Parents (Teacher) */
  $handler->display->display_options['fields']['OUTR']['id'] = 'OUTR';
  $handler->display->display_options['fields']['OUTR']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['OUTR']['field'] = 'OUTR';
  /* Field: Five Essentials 2013: Parent Involvement in School (Teacher) */
  $handler->display->display_options['fields']['PART']['id'] = 'PART';
  $handler->display->display_options['fields']['PART']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['PART']['field'] = 'PART';
  /* Field: Five Essentials 2013: Student Classroom Behavior (Student) */
  $handler->display->display_options['fields']['PEER']['id'] = 'PEER';
  $handler->display->display_options['fields']['PEER']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['PEER']['field'] = 'PEER';
  /* Field: Five Essentials 2013: Academic Personalism (Student) */
  $handler->display->display_options['fields']['PERC']['id'] = 'PERC';
  $handler->display->display_options['fields']['PERC']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['PERC']['field'] = 'PERC';
  /* Field: Five Essentials 2013: Program Coherence (Teacher) */
  $handler->display->display_options['fields']['PGMC']['id'] = 'PGMC';
  $handler->display->display_options['fields']['PGMC']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['PGMC']['field'] = 'PGMC';
  /* Field: Five Essentials 2013: Academic Press (Student) */
  $handler->display->display_options['fields']['PRES']['id'] = 'PRES';
  $handler->display->display_options['fields']['PRES']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['PRES']['field'] = 'PRES';
  /* Field: Five Essentials 2013: Prt2 */
  $handler->display->display_options['fields']['PRT2']['id'] = 'PRT2';
  $handler->display->display_options['fields']['PRT2']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['PRT2']['field'] = 'PRT2';
  $handler->display->display_options['fields']['PRT2']['label'] = 'PRT2';
  /* Field: Five Essentials 2013: Student Responsibility (Teacher) */
  $handler->display->display_options['fields']['PRTI']['id'] = 'PRTI';
  $handler->display->display_options['fields']['PRTI']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['PRTI']['field'] = 'PRTI';
  /* Field: Five Essentials 2013: Quality Professional Development (Teacher) */
  $handler->display->display_options['fields']['QPD2']['id'] = 'QPD2';
  $handler->display->display_options['fields']['QPD2']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['QPD2']['field'] = 'QPD2';
  /* Field: Five Essentials 2013: Reflective Dialogue (Teacher) */
  $handler->display->display_options['fields']['REFD']['id'] = 'REFD';
  $handler->display->display_options['fields']['REFD']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['REFD']['field'] = 'REFD';
  /* Field: Five Essentials 2013: Safety (Student) */
  $handler->display->display_options['fields']['SAFE']['id'] = 'SAFE';
  $handler->display->display_options['fields']['SAFE']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['SAFE']['field'] = 'SAFE';
  /* Field: Five Essentials 2013: School Commitment (Teacher) */
  $handler->display->display_options['fields']['SCMT']['id'] = 'SCMT';
  $handler->display->display_options['fields']['SCMT']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['SCMT']['field'] = 'SCMT';
  /* Field: Five Essentials 2013: Quality of Student Discussion (Teacher) */
  $handler->display->display_options['fields']['SDIS']['id'] = 'SDIS';
  $handler->display->display_options['fields']['SDIS']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['SDIS']['field'] = 'SDIS';
  /* Field: Five Essentials 2013: School-Wide Future Orientation (Student) */
  $handler->display->display_options['fields']['SLAP']['id'] = 'SLAP';
  $handler->display->display_options['fields']['SLAP']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['SLAP']['field'] = 'SLAP';
  /* Field: Five Essentials 2013: Socialization of New Teachers (Teacher) */
  $handler->display->display_options['fields']['SOCZ']['id'] = 'SOCZ';
  $handler->display->display_options['fields']['SOCZ']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['SOCZ']['field'] = 'SOCZ';
  /* Field: Five Essentials 2013: Rigorous Study Habits (Student) */
  $handler->display->display_options['fields']['STDY']['id'] = 'STDY';
  $handler->display->display_options['fields']['STDY']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['STDY']['field'] = 'STDY';
  /* Field: Five Essentials 2013: Teacher-Parent Trust (Teacher) */
  $handler->display->display_options['fields']['TRPA']['id'] = 'TRPA';
  $handler->display->display_options['fields']['TRPA']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['TRPA']['field'] = 'TRPA';
  /* Field: Five Essentials 2013: Teacher-Principal Trust (Teacher) */
  $handler->display->display_options['fields']['TRPR']['id'] = 'TRPR';
  $handler->display->display_options['fields']['TRPR']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['TRPR']['field'] = 'TRPR';
  /* Field: Five Essentials 2013: Teacher-Teacher Trust (Teacher) */
  $handler->display->display_options['fields']['TRTE']['id'] = 'TRTE';
  $handler->display->display_options['fields']['TRTE']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['TRTE']['field'] = 'TRTE';
  /* Field: Five Essentials 2013: Student-Teacher Trust (Student) */
  $handler->display->display_options['fields']['TRTS']['id'] = 'TRTS';
  $handler->display->display_options['fields']['TRTS']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['TRTS']['field'] = 'TRTS';
  /* Field: Five Essentials 2013: Teacher Safety (Teacher) */
  $handler->display->display_options['fields']['TSAF']['id'] = 'TSAF';
  $handler->display->display_options['fields']['TSAF']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['TSAF']['field'] = 'TSAF';
  /* Field: Five Essentials 2013: Expectations for Postsecondary Education (Student) */
  $handler->display->display_options['fields']['UEXP']['id'] = 'UEXP';
  $handler->display->display_options['fields']['UEXP']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['UEXP']['field'] = 'UEXP';
  /* Field: Five Essentials 2013: Category5e */
  $handler->display->display_options['fields']['Category5E']['id'] = 'Category5E';
  $handler->display->display_options['fields']['Category5E']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Category5E']['field'] = 'Category5E';
  $handler->display->display_options['fields']['Category5E']['label'] = 'Category5E';
  /* Field: Five Essentials 2013: Net5e */
  $handler->display->display_options['fields']['Net5e']['id'] = 'Net5e';
  $handler->display->display_options['fields']['Net5e']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Net5e']['field'] = 'Net5e';
  /* Field: Five Essentials 2013: Essential: Effective Leaders */
  $handler->display->display_options['fields']['E_leaders']['id'] = 'E_leaders';
  $handler->display->display_options['fields']['E_leaders']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['E_leaders']['field'] = 'E_leaders';
  /* Field: Five Essentials 2013: Essential: Collaborative Teachers */
  $handler->display->display_options['fields']['E_teachers']['id'] = 'E_teachers';
  $handler->display->display_options['fields']['E_teachers']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['E_teachers']['field'] = 'E_teachers';
  /* Field: Five Essentials 2013: Essential: Involved Families */
  $handler->display->display_options['fields']['E_families']['id'] = 'E_families';
  $handler->display->display_options['fields']['E_families']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['E_families']['field'] = 'E_families';
  /* Field: Five Essentials 2013: Essential: Supportive Environment */
  $handler->display->display_options['fields']['E_environment']['id'] = 'E_environment';
  $handler->display->display_options['fields']['E_environment']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['E_environment']['field'] = 'E_environment';
  /* Field: Five Essentials 2013: Essential: Ambitious Instruction */
  $handler->display->display_options['fields']['E_instruction']['id'] = 'E_instruction';
  $handler->display->display_options['fields']['E_instruction']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['E_instruction']['field'] = 'E_instruction';
  /* Field: Five Essentials 2013: School Address */
  $handler->display->display_options['fields']['Location']['id'] = 'Location';
  $handler->display->display_options['fields']['Location']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['Location']['field'] = 'Location';
  /* Field: Five Essentials 2013: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: Five Essentials 2013: Bcode */
  $handler->display->display_options['arguments']['BCODE']['id'] = 'BCODE';
  $handler->display->display_options['arguments']['BCODE']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['arguments']['BCODE']['field'] = 'BCODE';
  $handler->display->display_options['arguments']['BCODE']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['BCODE']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['BCODE']['title'] = 'Five Essentials 2013 %1';
  $handler->display->display_options['arguments']['BCODE']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['BCODE']['summary']['format'] = 'default_summary';
  /* Filter criterion: Five Essentials 2013: Bcode */
  $handler->display->display_options['filters']['BCODE']['id'] = 'BCODE';
  $handler->display->display_options['filters']['BCODE']['table'] = 'fiveessentials_2013';
  $handler->display->display_options['filters']['BCODE']['field'] = 'BCODE';
  $handler->display->display_options['filters']['BCODE']['exposed'] = TRUE;
  $handler->display->display_options['filters']['BCODE']['expose']['operator_id'] = 'BCODE_op';
  $handler->display->display_options['filters']['BCODE']['expose']['label'] = 'bcode';
  $handler->display->display_options['filters']['BCODE']['expose']['operator'] = 'BCODE_op';
  $handler->display->display_options['filters']['BCODE']['expose']['identifier'] = 'bcode';
  $handler->display->display_options['filters']['BCODE']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/data/view/fiveessentials_2013';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Five Essentials 2013';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'fiveessentials_2013';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'csv/fiveessentials_2013';
  $export['fiveessentials_2013'] = $view;

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
    4 => '4',
    6 => '6',
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
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_school_contact_first_name' => 'field_school_contact_first_name',
    'field_school_contact_last_name' => 'field_school_contact_last_name',
    'uid' => 'uid',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'field_bcode' => 'field_bcode',
    'changed' => 'changed',
    'field_site_visit_status' => 'field_site_visit_status',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_school_contact_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_school_contact_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcode' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_site_visit_status' => array(
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
  $handler->display->display_options['fields']['title']['label'] = 'School Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Principal First Name */
  $handler->display->display_options['fields']['field_school_contact_first_name']['id'] = 'field_school_contact_first_name';
  $handler->display->display_options['fields']['field_school_contact_first_name']['table'] = 'field_data_field_school_contact_first_name';
  $handler->display->display_options['fields']['field_school_contact_first_name']['field'] = 'field_school_contact_first_name';
  /* Field: Content: Principal Last Name */
  $handler->display->display_options['fields']['field_school_contact_last_name']['id'] = 'field_school_contact_last_name';
  $handler->display->display_options['fields']['field_school_contact_last_name']['table'] = 'field_data_field_school_contact_last_name';
  $handler->display->display_options['fields']['field_school_contact_last_name']['field'] = 'field_school_contact_last_name';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Author UID';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
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
  $handler->display->display_options['fields']['field_bcode']['label'] = 'bcode';
  $handler->display->display_options['fields']['field_bcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by School Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'VBO';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
  /* Field: Content: Principal First Name */
  $handler->display->display_options['fields']['field_school_contact_first_name']['id'] = 'field_school_contact_first_name';
  $handler->display->display_options['fields']['field_school_contact_first_name']['table'] = 'field_data_field_school_contact_first_name';
  $handler->display->display_options['fields']['field_school_contact_first_name']['field'] = 'field_school_contact_first_name';
  /* Field: Content: Principal Last Name */
  $handler->display->display_options['fields']['field_school_contact_last_name']['id'] = 'field_school_contact_last_name';
  $handler->display->display_options['fields']['field_school_contact_last_name']['table'] = 'field_data_field_school_contact_last_name';
  $handler->display->display_options['fields']['field_school_contact_last_name']['field'] = 'field_school_contact_last_name';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Author UID';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
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
  $handler->display->display_options['fields']['field_bcode']['label'] = 'bcode';
  $handler->display->display_options['fields']['field_bcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Content: Site visit status */
  $handler->display->display_options['fields']['field_site_visit_status']['id'] = 'field_site_visit_status';
  $handler->display->display_options['fields']['field_site_visit_status']['table'] = 'field_data_field_site_visit_status';
  $handler->display->display_options['fields']['field_site_visit_status']['field'] = 'field_site_visit_status';
  $handler->display->display_options['fields']['field_site_visit_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'manage-school-profiles';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'schools' => 'schools',
    'school_scorecard_status' => 0,
    'school_status' => 0,
    'school_type' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Building code */
  $handler->display->display_options['fields']['field_bcode']['id'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['table'] = 'field_data_field_bcode';
  $handler->display->display_options['fields']['field_bcode']['field'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_bcode']['label'] = 'bcode';
  $handler->display->display_options['fields']['field_bcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'School Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Principal First Name */
  $handler->display->display_options['fields']['field_school_contact_first_name']['id'] = 'field_school_contact_first_name';
  $handler->display->display_options['fields']['field_school_contact_first_name']['table'] = 'field_data_field_school_contact_first_name';
  $handler->display->display_options['fields']['field_school_contact_first_name']['field'] = 'field_school_contact_first_name';
  /* Field: Content: Principal Last Name */
  $handler->display->display_options['fields']['field_school_contact_last_name']['id'] = 'field_school_contact_last_name';
  $handler->display->display_options['fields']['field_school_contact_last_name']['table'] = 'field_data_field_school_contact_last_name';
  $handler->display->display_options['fields']['field_school_contact_last_name']['field'] = 'field_school_contact_last_name';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_fname']['id'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['table'] = 'field_data_field_fname';
  $handler->display->display_options['fields']['field_fname']['field'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_fname']['label'] = 'User First Name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lname']['id'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['table'] = 'field_data_field_lname';
  $handler->display->display_options['fields']['field_lname']['field'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_lname']['label'] = 'User Last Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'uid';
  $handler->display->display_options['fields']['login']['label'] = 'User Last login';
  $handler->display->display_options['fields']['login']['date_format'] = 'long';
  /* Field: Taxonomy term: Governance */
  $handler->display->display_options['fields']['field_governance']['id'] = 'field_governance';
  $handler->display->display_options['fields']['field_governance']['table'] = 'field_data_field_governance';
  $handler->display->display_options['fields']['field_governance']['field'] = 'field_governance';
  $handler->display->display_options['fields']['field_governance']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Opted in? */
  $handler->display->display_options['fields']['field_opted_in']['id'] = 'field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['table'] = 'field_data_field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['field'] = 'field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School Scorecard status */
  $handler->display->display_options['fields']['field_school_scorecard_status']['id'] = 'field_school_scorecard_status';
  $handler->display->display_options['fields']['field_school_scorecard_status']['table'] = 'field_data_field_school_scorecard_status';
  $handler->display->display_options['fields']['field_school_scorecard_status']['field'] = 'field_school_scorecard_status';
  $handler->display->display_options['fields']['field_school_scorecard_status']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School status */
  $handler->display->display_options['fields']['field_school_status']['id'] = 'field_school_status';
  $handler->display->display_options['fields']['field_school_status']['table'] = 'field_data_field_school_status';
  $handler->display->display_options['fields']['field_school_status']['field'] = 'field_school_status';
  $handler->display->display_options['fields']['field_school_status']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School type */
  $handler->display->display_options['fields']['field_school_type']['id'] = 'field_school_type';
  $handler->display->display_options['fields']['field_school_type']['table'] = 'field_data_field_school_type';
  $handler->display->display_options['fields']['field_school_type']['field'] = 'field_school_type';
  $handler->display->display_options['fields']['field_school_type']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Scorecard Display */
  $handler->display->display_options['fields']['field_scorecard_display']['id'] = 'field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['table'] = 'field_data_field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['field'] = 'field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['relationship'] = 'term_node_tid';
  $handler->display->display_options['path'] = 'export-school-profiles';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: School Universe Export */
  $handler = $view->new_display('views_data_export', 'School Universe Export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'school_universe_%timestamp-mmm_%timestamp-dd.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'schools' => 'schools',
    'school_scorecard_status' => 0,
    'school_status' => 0,
    'school_type' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Building code */
  $handler->display->display_options['fields']['field_bcode']['id'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['table'] = 'field_data_field_bcode';
  $handler->display->display_options['fields']['field_bcode']['field'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_bcode']['label'] = 'bcode';
  $handler->display->display_options['fields']['field_bcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Building code */
  $handler->display->display_options['fields']['field_bcode_1']['id'] = 'field_bcode_1';
  $handler->display->display_options['fields']['field_bcode_1']['table'] = 'field_data_field_bcode';
  $handler->display->display_options['fields']['field_bcode_1']['field'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_bcode_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'School Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Principal First Name */
  $handler->display->display_options['fields']['field_school_contact_first_name']['id'] = 'field_school_contact_first_name';
  $handler->display->display_options['fields']['field_school_contact_first_name']['table'] = 'field_data_field_school_contact_first_name';
  $handler->display->display_options['fields']['field_school_contact_first_name']['field'] = 'field_school_contact_first_name';
  /* Field: Content: Principal Last Name */
  $handler->display->display_options['fields']['field_school_contact_last_name']['id'] = 'field_school_contact_last_name';
  $handler->display->display_options['fields']['field_school_contact_last_name']['table'] = 'field_data_field_school_contact_last_name';
  $handler->display->display_options['fields']['field_school_contact_last_name']['field'] = 'field_school_contact_last_name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_fname']['id'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['table'] = 'field_data_field_fname';
  $handler->display->display_options['fields']['field_fname']['field'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_fname']['label'] = 'User First Name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lname']['id'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['table'] = 'field_data_field_lname';
  $handler->display->display_options['fields']['field_lname']['field'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_lname']['label'] = 'User Last Name';
  /* Field: Taxonomy term: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: geo */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Taxonomy term: Authorized grades */
  $handler->display->display_options['fields']['field_authorized_grades']['id'] = 'field_authorized_grades';
  $handler->display->display_options['fields']['field_authorized_grades']['table'] = 'field_data_field_authorized_grades';
  $handler->display->display_options['fields']['field_authorized_grades']['field'] = 'field_authorized_grades';
  $handler->display->display_options['fields']['field_authorized_grades']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_authorized_grades']['delta_offset'] = '0';
  /* Field: Taxonomy term: Governance */
  $handler->display->display_options['fields']['field_governance_1']['id'] = 'field_governance_1';
  $handler->display->display_options['fields']['field_governance_1']['table'] = 'field_data_field_governance';
  $handler->display->display_options['fields']['field_governance_1']['field'] = 'field_governance';
  $handler->display->display_options['fields']['field_governance_1']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Authorizer */
  $handler->display->display_options['fields']['field_authorizer']['id'] = 'field_authorizer';
  $handler->display->display_options['fields']['field_authorizer']['table'] = 'field_data_field_authorizer';
  $handler->display->display_options['fields']['field_authorizer']['field'] = 'field_authorizer';
  $handler->display->display_options['fields']['field_authorizer']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Operator */
  $handler->display->display_options['fields']['field_operator']['id'] = 'field_operator';
  $handler->display->display_options['fields']['field_operator']['table'] = 'field_data_field_operator';
  $handler->display->display_options['fields']['field_operator']['field'] = 'field_operator';
  $handler->display->display_options['fields']['field_operator']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: District */
  $handler->display->display_options['fields']['field_district']['id'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
  $handler->display->display_options['fields']['field_district']['field'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School type */
  $handler->display->display_options['fields']['field_school_type_1']['id'] = 'field_school_type_1';
  $handler->display->display_options['fields']['field_school_type_1']['table'] = 'field_data_field_school_type';
  $handler->display->display_options['fields']['field_school_type_1']['field'] = 'field_school_type';
  $handler->display->display_options['fields']['field_school_type_1']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School status */
  $handler->display->display_options['fields']['field_school_status_1']['id'] = 'field_school_status_1';
  $handler->display->display_options['fields']['field_school_status_1']['table'] = 'field_data_field_school_status';
  $handler->display->display_options['fields']['field_school_status_1']['field'] = 'field_school_status';
  $handler->display->display_options['fields']['field_school_status_1']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School Scorecard status */
  $handler->display->display_options['fields']['field_school_scorecard_status_1']['id'] = 'field_school_scorecard_status_1';
  $handler->display->display_options['fields']['field_school_scorecard_status_1']['table'] = 'field_data_field_school_scorecard_status';
  $handler->display->display_options['fields']['field_school_scorecard_status_1']['field'] = 'field_school_scorecard_status';
  $handler->display->display_options['fields']['field_school_scorecard_status_1']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: 2011 Percent Detroit resident */
  $handler->display->display_options['fields']['field_2011_pct_det_res_1']['id'] = 'field_2011_pct_det_res_1';
  $handler->display->display_options['fields']['field_2011_pct_det_res_1']['table'] = 'field_data_field_2011_pct_det_res';
  $handler->display->display_options['fields']['field_2011_pct_det_res_1']['field'] = 'field_2011_pct_det_res';
  $handler->display->display_options['fields']['field_2011_pct_det_res_1']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: State status */
  $handler->display->display_options['fields']['field_state_status']['id'] = 'field_state_status';
  $handler->display->display_options['fields']['field_state_status']['table'] = 'field_data_field_state_status';
  $handler->display->display_options['fields']['field_state_status']['field'] = 'field_state_status';
  $handler->display->display_options['fields']['field_state_status']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: 2013 site visit date */
  $handler->display->display_options['fields']['field_2013_site_visit_date']['id'] = 'field_2013_site_visit_date';
  $handler->display->display_options['fields']['field_2013_site_visit_date']['table'] = 'field_data_field_2013_site_visit_date';
  $handler->display->display_options['fields']['field_2013_site_visit_date']['field'] = 'field_2013_site_visit_date';
  $handler->display->display_options['fields']['field_2013_site_visit_date']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Opted in? */
  $handler->display->display_options['fields']['field_opted_in']['id'] = 'field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['table'] = 'field_data_field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['field'] = 'field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_opted_in']['type'] = 'list_key';
  /* Field: Taxonomy term: grDataLetter */
  $handler->display->display_options['fields']['field_grdataletter']['id'] = 'field_grdataletter';
  $handler->display->display_options['fields']['field_grdataletter']['table'] = 'field_data_field_grdataletter';
  $handler->display->display_options['fields']['field_grdataletter']['field'] = 'field_grdataletter';
  $handler->display->display_options['fields']['field_grdataletter']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_grdataletter']['type'] = 'list_key';
  /* Field: Taxonomy term: grDataType */
  $handler->display->display_options['fields']['field_grdatatype']['id'] = 'field_grdatatype';
  $handler->display->display_options['fields']['field_grdatatype']['table'] = 'field_data_field_grdatatype';
  $handler->display->display_options['fields']['field_grdatatype']['field'] = 'field_grdatatype';
  $handler->display->display_options['fields']['field_grdatatype']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: 5E roster */
  $handler->display->display_options['fields']['field_5e_roster']['id'] = 'field_5e_roster';
  $handler->display->display_options['fields']['field_5e_roster']['table'] = 'field_data_field_5e_roster';
  $handler->display->display_options['fields']['field_5e_roster']['field'] = 'field_5e_roster';
  $handler->display->display_options['fields']['field_5e_roster']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_5e_roster']['type'] = 'list_key';
  /* Field: Taxonomy term: Scorecard Display */
  $handler->display->display_options['fields']['field_scorecard_display']['id'] = 'field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['table'] = 'field_data_field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['field'] = 'field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_scorecard_display']['type'] = 'list_key';
  /* Field: Taxonomy term: Specialty School */
  $handler->display->display_options['fields']['field_specialty_school']['id'] = 'field_specialty_school';
  $handler->display->display_options['fields']['field_specialty_school']['table'] = 'field_data_field_specialty_school';
  $handler->display->display_options['fields']['field_specialty_school']['field'] = 'field_specialty_school';
  $handler->display->display_options['fields']['field_specialty_school']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_specialty_school']['type'] = 'list_key';
  /* Field: Taxonomy term: Special Ed Emphasis */
  $handler->display->display_options['fields']['field_special_ed_emphasis']['id'] = 'field_special_ed_emphasis';
  $handler->display->display_options['fields']['field_special_ed_emphasis']['table'] = 'field_data_field_special_ed_emphasis';
  $handler->display->display_options['fields']['field_special_ed_emphasis']['field'] = 'field_special_ed_emphasis';
  $handler->display->display_options['fields']['field_special_ed_emphasis']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_special_ed_emphasis']['type'] = 'list_key';
  /* Field: Taxonomy term: Career Technical Emphasis */
  $handler->display->display_options['fields']['field_career_technical_emphasis']['id'] = 'field_career_technical_emphasis';
  $handler->display->display_options['fields']['field_career_technical_emphasis']['table'] = 'field_data_field_career_technical_emphasis';
  $handler->display->display_options['fields']['field_career_technical_emphasis']['field'] = 'field_career_technical_emphasis';
  $handler->display->display_options['fields']['field_career_technical_emphasis']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_career_technical_emphasis']['type'] = 'list_key';
  /* Field: Taxonomy term: Alternative School */
  $handler->display->display_options['fields']['field_alternative_school']['id'] = 'field_alternative_school';
  $handler->display->display_options['fields']['field_alternative_school']['table'] = 'field_data_field_alternative_school';
  $handler->display->display_options['fields']['field_alternative_school']['field'] = 'field_alternative_school';
  $handler->display->display_options['fields']['field_alternative_school']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_alternative_school']['type'] = 'list_key';
  /* Field: Taxonomy term: Strict Discipline Academy */
  $handler->display->display_options['fields']['field_strict_discipline_academy']['id'] = 'field_strict_discipline_academy';
  $handler->display->display_options['fields']['field_strict_discipline_academy']['table'] = 'field_data_field_strict_discipline_academy';
  $handler->display->display_options['fields']['field_strict_discipline_academy']['field'] = 'field_strict_discipline_academy';
  $handler->display->display_options['fields']['field_strict_discipline_academy']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_strict_discipline_academy']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_strict_discipline_academy']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Taxonomy term: Superintendents */
  $handler->display->display_options['fields']['field_superintendents']['id'] = 'field_superintendents';
  $handler->display->display_options['fields']['field_superintendents']['table'] = 'field_data_field_superintendents';
  $handler->display->display_options['fields']['field_superintendents']['field'] = 'field_superintendents';
  $handler->display->display_options['fields']['field_superintendents']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_superintendents']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_superintendents']['delta_offset'] = '0';
  /* Field: Taxonomy term: Skillman Good Neighborhood */
  $handler->display->display_options['fields']['field_skillman_good_neighborhood']['id'] = 'field_skillman_good_neighborhood';
  $handler->display->display_options['fields']['field_skillman_good_neighborhood']['table'] = 'field_data_field_skillman_good_neighborhood';
  $handler->display->display_options['fields']['field_skillman_good_neighborhood']['field'] = 'field_skillman_good_neighborhood';
  $handler->display->display_options['fields']['field_skillman_good_neighborhood']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_skillman_good_neighborhood']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'export-school-universe';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Export Status */
  $handler = $view->new_display('views_data_export', 'Export Status', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'schools' => 'schools',
    'school_scorecard_status' => 0,
    'school_status' => 0,
    'school_type' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Building code */
  $handler->display->display_options['fields']['field_bcode']['id'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['table'] = 'field_data_field_bcode';
  $handler->display->display_options['fields']['field_bcode']['field'] = 'field_bcode';
  $handler->display->display_options['fields']['field_bcode']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_bcode']['label'] = 'bcode';
  $handler->display->display_options['fields']['field_bcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'School Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_fname']['id'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['table'] = 'field_data_field_fname';
  $handler->display->display_options['fields']['field_fname']['field'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_fname']['label'] = 'User First Name';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lname']['id'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['table'] = 'field_data_field_lname';
  $handler->display->display_options['fields']['field_lname']['field'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_lname']['label'] = 'User Last Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Site visit status */
  $handler->display->display_options['fields']['field_site_visit_status']['id'] = 'field_site_visit_status';
  $handler->display->display_options['fields']['field_site_visit_status']['table'] = 'field_data_field_site_visit_status';
  $handler->display->display_options['fields']['field_site_visit_status']['field'] = 'field_site_visit_status';
  $handler->display->display_options['fields']['field_site_visit_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Governance */
  $handler->display->display_options['fields']['field_governance']['id'] = 'field_governance';
  $handler->display->display_options['fields']['field_governance']['table'] = 'field_data_field_governance';
  $handler->display->display_options['fields']['field_governance']['field'] = 'field_governance';
  $handler->display->display_options['fields']['field_governance']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Opted in? */
  $handler->display->display_options['fields']['field_opted_in']['id'] = 'field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['table'] = 'field_data_field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['field'] = 'field_opted_in';
  $handler->display->display_options['fields']['field_opted_in']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School Scorecard status */
  $handler->display->display_options['fields']['field_school_scorecard_status']['id'] = 'field_school_scorecard_status';
  $handler->display->display_options['fields']['field_school_scorecard_status']['table'] = 'field_data_field_school_scorecard_status';
  $handler->display->display_options['fields']['field_school_scorecard_status']['field'] = 'field_school_scorecard_status';
  $handler->display->display_options['fields']['field_school_scorecard_status']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School status */
  $handler->display->display_options['fields']['field_school_status']['id'] = 'field_school_status';
  $handler->display->display_options['fields']['field_school_status']['table'] = 'field_data_field_school_status';
  $handler->display->display_options['fields']['field_school_status']['field'] = 'field_school_status';
  $handler->display->display_options['fields']['field_school_status']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: School type */
  $handler->display->display_options['fields']['field_school_type']['id'] = 'field_school_type';
  $handler->display->display_options['fields']['field_school_type']['table'] = 'field_data_field_school_type';
  $handler->display->display_options['fields']['field_school_type']['field'] = 'field_school_type';
  $handler->display->display_options['fields']['field_school_type']['relationship'] = 'term_node_tid';
  /* Field: Taxonomy term: Scorecard Display */
  $handler->display->display_options['fields']['field_scorecard_display']['id'] = 'field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['table'] = 'field_data_field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['field'] = 'field_scorecard_display';
  $handler->display->display_options['fields']['field_scorecard_display']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_scorecard_display']['type'] = 'list_key';
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['path'] = 'export-status';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['manage_school_profiles'] = $view;

  $view = new view();
  $view->name = 'manage_schools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'manage schools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage School Taxonomy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'view_node' => 'view_node',
    'nid' => 'nid',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Taxonomy term: Representative node */
  $handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.nid';
  $handler->display->display_options['relationships']['tid_representative']['subquery_view'] = '';
  $handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'School Name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['view_node']['label'] = 'Profile';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['nid']['label'] = 'Profile NID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['changed']['label'] = 'Profile last updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* Field: Bulk operations: Taxonomy vocabulary */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'schools' => 'schools',
  );
  $handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Machine name';
  $handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Filter by School Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'School Name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['view_node']['label'] = 'Profile';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['nid']['label'] = 'Profile NID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['changed']['label'] = 'Profile last updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Bulk operations: Taxonomy term */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::esdportal_str_send_unsafe_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['path'] = 'manage-schools';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage school taxonomy';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'menu-moderator-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: dev info */
  $handler = $view->new_display('page', 'dev info', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'view_node' => 'view_node',
    'nid' => 'nid',
    'changed' => 'changed',
    'field_geo' => 'field_geo',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geo' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'School Name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['view_node']['label'] = 'Profile';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['nid']['label'] = 'Profile NID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['changed']['label'] = 'Profile last updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Taxonomy term: geo */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_geo']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['path'] = 'manage-schools/devel';
  $export['manage_schools'] = $view;

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
    'mail' => 'mail',
    'access' => 'access',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'access';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
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
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'VBO';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::esdportal_str_send_unsafe_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
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
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Filter by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_lname) */
  $handler->display->display_options['filters']['field_lname_value']['id'] = 'field_lname_value';
  $handler->display->display_options['filters']['field_lname_value']['table'] = 'field_data_field_lname';
  $handler->display->display_options['filters']['field_lname_value']['field'] = 'field_lname_value';
  $handler->display->display_options['filters']['field_lname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lname_value']['expose']['operator_id'] = 'field_lname_value_op';
  $handler->display->display_options['filters']['field_lname_value']['expose']['label'] = 'Filter by Last Name';
  $handler->display->display_options['filters']['field_lname_value']['expose']['operator'] = 'field_lname_value_op';
  $handler->display->display_options['filters']['field_lname_value']['expose']['identifier'] = 'field_lname_value';
  $handler->display->display_options['filters']['field_lname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
    3 => '3',
    18 => '18',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    17 => 0,
    7 => 0,
    18 => 0,
    6 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Filter by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_lname) */
  $handler->display->display_options['filters']['field_lname_value']['id'] = 'field_lname_value';
  $handler->display->display_options['filters']['field_lname_value']['table'] = 'field_data_field_lname';
  $handler->display->display_options['filters']['field_lname_value']['field'] = 'field_lname_value';
  $handler->display->display_options['filters']['field_lname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lname_value']['expose']['operator_id'] = 'field_lname_value_op';
  $handler->display->display_options['filters']['field_lname_value']['expose']['label'] = 'Filter by Last Name';
  $handler->display->display_options['filters']['field_lname_value']['expose']['operator'] = 'field_lname_value_op';
  $handler->display->display_options['filters']['field_lname_value']['expose']['identifier'] = 'field_lname_value';
  $handler->display->display_options['filters']['field_lname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'manage-users';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_lname']['id'] = 'field_lname';
  $handler->display->display_options['fields']['field_lname']['table'] = 'field_data_field_lname';
  $handler->display->display_options['fields']['field_lname']['field'] = 'field_lname';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_fname']['id'] = 'field_fname';
  $handler->display->display_options['fields']['field_fname']['table'] = 'field_data_field_fname';
  $handler->display->display_options['fields']['field_fname']['field'] = 'field_fname';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'short';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Last Name (field_lname) */
  $handler->display->display_options['sorts']['field_lname_value']['id'] = 'field_lname_value';
  $handler->display->display_options['sorts']['field_lname_value']['table'] = 'field_data_field_lname';
  $handler->display->display_options['sorts']['field_lname_value']['field'] = 'field_lname_value';
  $handler->display->display_options['sorts']['field_lname_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'export-users';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['manage_users'] = $view;

  $view = new view();
  $view->name = 'meap_2009';
  $view->description = 'Default view for data table MEAP 2009';
  $view->tag = 'data table';
  $view->base_table = 'meap_2009';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'MEAP 2009';
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
  /* Field: MEAP 2009: Schoolyear */
  $handler->display->display_options['fields']['SchoolYear']['id'] = 'SchoolYear';
  $handler->display->display_options['fields']['SchoolYear']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['SchoolYear']['field'] = 'SchoolYear';
  $handler->display->display_options['fields']['SchoolYear']['label'] = '';
  /* Field: MEAP 2009: Isdcode */
  $handler->display->display_options['fields']['ISDCode']['id'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['ISDCode']['field'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['label'] = '';
  /* Field: MEAP 2009: Isdname */
  $handler->display->display_options['fields']['ISDName']['id'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['ISDName']['field'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['label'] = '';
  /* Field: MEAP 2009: Districtcode */
  $handler->display->display_options['fields']['DistrictCode']['id'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['DistrictCode']['field'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['label'] = '';
  /* Field: MEAP 2009: Districtname */
  $handler->display->display_options['fields']['DistrictName']['id'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['DistrictName']['field'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['label'] = '';
  /* Field: MEAP 2009: bcode */
  $handler->display->display_options['fields']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['BuildingCode']['field'] = 'BuildingCode';
  /* Field: MEAP 2009: Buildingname */
  $handler->display->display_options['fields']['BuildingName']['id'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['BuildingName']['field'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['label'] = '';
  /* Field: MEAP 2009: Locale name */
  $handler->display->display_options['fields']['LOCALE_NAME']['id'] = 'LOCALE_NAME';
  $handler->display->display_options['fields']['LOCALE_NAME']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['LOCALE_NAME']['field'] = 'LOCALE_NAME';
  $handler->display->display_options['fields']['LOCALE_NAME']['label'] = '';
  /* Field: MEAP 2009: Total enrollment */
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['id'] = 'TOTAL_ENROLLMENT';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['field'] = 'TOTAL_ENROLLMENT';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Male enrollment */
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['id'] = 'MALE_ENROLLMENT';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['field'] = 'MALE_ENROLLMENT';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Female enrollment */
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['id'] = 'FEMALE_ENROLLMENT';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['field'] = 'FEMALE_ENROLLMENT';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: American indian enrollment */
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['id'] = 'AMERICAN_INDIAN_ENROLLMENT';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['field'] = 'AMERICAN_INDIAN_ENROLLMENT';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Asian enrollment */
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['id'] = 'ASIAN_ENROLLMENT';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['field'] = 'ASIAN_ENROLLMENT';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: African american enrollment */
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['id'] = 'AFRICAN_AMERICAN_ENROLLMENT';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['field'] = 'AFRICAN_AMERICAN_ENROLLMENT';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Hispanic enrollment */
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['id'] = 'HISPANIC_ENROLLMENT';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['field'] = 'HISPANIC_ENROLLMENT';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Hawaiian enrollment */
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['id'] = 'HAWAIIAN_ENROLLMENT';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['field'] = 'HAWAIIAN_ENROLLMENT';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: White enrollment */
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['id'] = 'WHITE_ENROLLMENT';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['field'] = 'WHITE_ENROLLMENT';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Two or more races enrollment */
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['id'] = 'TWO_OR_MORE_RACES_ENROLLMENT';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['field'] = 'TWO_OR_MORE_RACES_ENROLLMENT';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Kindergarten enrollment */
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['id'] = 'KINDERGARTEN_ENROLLMENT';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['field'] = 'KINDERGARTEN_ENROLLMENT';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 1 enrollment */
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['id'] = 'GRADE_1_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['field'] = 'GRADE_1_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 2 enrollment */
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['id'] = 'GRADE_2_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['field'] = 'GRADE_2_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 3 enrollment */
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['id'] = 'GRADE_3_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['field'] = 'GRADE_3_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 4 enrollment */
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['id'] = 'GRADE_4_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['field'] = 'GRADE_4_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 5 enrollment */
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['id'] = 'GRADE_5_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['field'] = 'GRADE_5_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 6 enrollment */
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['id'] = 'GRADE_6_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['field'] = 'GRADE_6_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 7 enrollment */
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['id'] = 'GRADE_7_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['field'] = 'GRADE_7_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 8 enrollment */
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['id'] = 'GRADE_8_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['field'] = 'GRADE_8_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 9 enrollment */
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['id'] = 'GRADE_9_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['field'] = 'GRADE_9_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 10 enrollment */
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['id'] = 'GRADE_10_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['field'] = 'GRADE_10_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 11 enrollment */
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['id'] = 'GRADE_11_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['field'] = 'GRADE_11_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Grade 12 enrollment */
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['id'] = 'GRADE_12_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['field'] = 'GRADE_12_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Economic disadvantaged enrollment */
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['id'] = 'ECONOMIC_DISADVANTAGED_ENROLLMENT';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['field'] = 'ECONOMIC_DISADVANTAGED_ENROLLMENT';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Special education enrollment */
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['id'] = 'SPECIAL_EDUCATION_ENROLLMENT';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['field'] = 'SPECIAL_EDUCATION_ENROLLMENT';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: English language learners enrollment */
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['id'] = 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['field'] = 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Homeless enrollment */
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['id'] = 'HOMELESS_ENROLLMENT';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['field'] = 'HOMELESS_ENROLLMENT';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Migrant enrollment */
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['id'] = 'MIGRANT_ENROLLMENT';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['field'] = 'MIGRANT_ENROLLMENT';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2009: Ayp status */
  $handler->display->display_options['fields']['AYP_STATUS']['id'] = 'AYP_STATUS';
  $handler->display->display_options['fields']['AYP_STATUS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['AYP_STATUS']['field'] = 'AYP_STATUS';
  $handler->display->display_options['fields']['AYP_STATUS']['label'] = '';
  /* Field: MEAP 2009: Ayp phase */
  $handler->display->display_options['fields']['AYP_PHASE']['id'] = 'AYP_PHASE';
  $handler->display->display_options['fields']['AYP_PHASE']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['AYP_PHASE']['field'] = 'AYP_PHASE';
  $handler->display->display_options['fields']['AYP_PHASE']['label'] = '';
  /* Field: MEAP 2009: Grade 3 math tested */
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['id'] = 'GRADE_3_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['field'] = 'GRADE_3_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 3 math proficient */
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['id'] = 'GRADE_3_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['field'] = 'GRADE_3_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 3 math avg ss */
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['id'] = 'GRADE_3_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['field'] = 'GRADE_3_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 4 math tested */
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['id'] = 'GRADE_4_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['field'] = 'GRADE_4_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 4 math proficient */
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['id'] = 'GRADE_4_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['field'] = 'GRADE_4_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 4 math avg ss */
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['id'] = 'GRADE_4_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['field'] = 'GRADE_4_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 5 math tested */
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['id'] = 'GRADE_5_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['field'] = 'GRADE_5_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 5 math proficient */
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['id'] = 'GRADE_5_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['field'] = 'GRADE_5_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 5 math avg ss */
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['id'] = 'GRADE_5_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['field'] = 'GRADE_5_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 6 math tested */
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['id'] = 'GRADE_6_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['field'] = 'GRADE_6_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 6 math proficient */
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['id'] = 'GRADE_6_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['field'] = 'GRADE_6_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 6 math avg ss */
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['id'] = 'GRADE_6_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['field'] = 'GRADE_6_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 7 math tested */
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['id'] = 'GRADE_7_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['field'] = 'GRADE_7_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 7 math proficient */
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['id'] = 'GRADE_7_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['field'] = 'GRADE_7_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 7 math avg ss */
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['id'] = 'GRADE_7_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['field'] = 'GRADE_7_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 8 math tested */
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['id'] = 'GRADE_8_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['field'] = 'GRADE_8_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 8 math proficient */
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['id'] = 'GRADE_8_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['field'] = 'GRADE_8_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 8 math avg ss */
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['id'] = 'GRADE_8_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['field'] = 'GRADE_8_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 3 reading tested */
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['id'] = 'GRADE_3_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['field'] = 'GRADE_3_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 3 reading proficient */
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['id'] = 'GRADE_3_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['field'] = 'GRADE_3_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 3 reading avg ss */
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['id'] = 'GRADE_3_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['field'] = 'GRADE_3_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 4 reading tested */
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['id'] = 'GRADE_4_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['field'] = 'GRADE_4_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 4 reading proficient */
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['id'] = 'GRADE_4_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['field'] = 'GRADE_4_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 4 reading avg ss */
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['id'] = 'GRADE_4_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['field'] = 'GRADE_4_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 5 reading tested */
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['id'] = 'GRADE_5_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['field'] = 'GRADE_5_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 5 reading proficient */
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['id'] = 'GRADE_5_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['field'] = 'GRADE_5_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 5 reading avg ss */
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['id'] = 'GRADE_5_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['field'] = 'GRADE_5_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 6 reading tested */
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['id'] = 'GRADE_6_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['field'] = 'GRADE_6_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 6 reading proficient */
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['id'] = 'GRADE_6_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['field'] = 'GRADE_6_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 6 reading avg ss */
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['id'] = 'GRADE_6_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['field'] = 'GRADE_6_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 7 reading tested */
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['id'] = 'GRADE_7_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['field'] = 'GRADE_7_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 7 reading proficient */
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['id'] = 'GRADE_7_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['field'] = 'GRADE_7_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 7 reading avg ss */
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['id'] = 'GRADE_7_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['field'] = 'GRADE_7_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 8 reading tested */
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['id'] = 'GRADE_8_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['field'] = 'GRADE_8_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 8 reading proficient */
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['id'] = 'GRADE_8_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['field'] = 'GRADE_8_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 8 reading avg ss */
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['id'] = 'GRADE_8_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['field'] = 'GRADE_8_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 5 science tested */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['id'] = 'GRADE_5_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['field'] = 'GRADE_5_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 5 science proficient */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['id'] = 'GRADE_5_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['field'] = 'GRADE_5_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 5 science avg ss */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['id'] = 'GRADE_5_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['field'] = 'GRADE_5_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 8 science tested */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['id'] = 'GRADE_8_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['field'] = 'GRADE_8_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 8 science proficient */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['id'] = 'GRADE_8_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['field'] = 'GRADE_8_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 8 science avg ss */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['id'] = 'GRADE_8_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['field'] = 'GRADE_8_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 6 social studies tested */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_6_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_6_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 6 social studies proficient */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_6_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_6_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 6 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_6_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_6_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 9 social studies tested */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_9_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_9_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 9 social studies proficient */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_9_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_9_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 9 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_9_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_9_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 11 math tested */
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['id'] = 'GRADE_11_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['field'] = 'GRADE_11_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 11 math proficient */
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['id'] = 'GRADE_11_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['field'] = 'GRADE_11_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 11 math avg ss */
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['id'] = 'GRADE_11_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['field'] = 'GRADE_11_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 11 reading tested */
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['id'] = 'GRADE_11_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['field'] = 'GRADE_11_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 11 reading proficient */
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['id'] = 'GRADE_11_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['field'] = 'GRADE_11_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 11 reading avg ss */
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['id'] = 'GRADE_11_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['field'] = 'GRADE_11_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 11 writing tested */
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['id'] = 'GRADE_11_WRITING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['field'] = 'GRADE_11_WRITING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 11 writing proficient */
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['id'] = 'GRADE_11_WRITING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['field'] = 'GRADE_11_WRITING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 11 writing avg ss */
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['id'] = 'GRADE_11_WRITING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['field'] = 'GRADE_11_WRITING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 11 science tested */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['id'] = 'GRADE_11_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['field'] = 'GRADE_11_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 11 science proficient */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['id'] = 'GRADE_11_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['field'] = 'GRADE_11_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 11 science avg ss */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['id'] = 'GRADE_11_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['field'] = 'GRADE_11_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 11 social studies tested */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_11_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_11_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2009: Grade 11 social studies proficient */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_11_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_11_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2009: Grade 11 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_11_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_11_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2009: Grade 11 math percent ready */
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['id'] = 'GRADE_11_MATH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['field'] = 'GRADE_11_MATH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2009: Grade 11 reading percent ready */
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['id'] = 'GRADE_11_READING_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['field'] = 'GRADE_11_READING_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2009: Grade 11 science percent ready */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['id'] = 'GRADE_11_SCIENCE_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['field'] = 'GRADE_11_SCIENCE_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2009: Grade 11 english percent ready */
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['id'] = 'GRADE_11_ENGLISH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['field'] = 'GRADE_11_ENGLISH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2009: Grade 11 all subject percent ready */
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['id'] = 'GRADE_11_ALL_SUBJECT_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['field'] = 'GRADE_11_ALL_SUBJECT_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2009: Cohort 4 year */
  $handler->display->display_options['fields']['COHORT_4_YEAR']['id'] = 'COHORT_4_YEAR';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['field'] = 'COHORT_4_YEAR';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['label'] = '';
  /* Field: MEAP 2009: Graduation rate 4 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['id'] = 'GRADUATION_RATE_4_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['field'] = 'GRADUATION_RATE_4_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['label'] = '';
  /* Field: MEAP 2009: Dropout rate 4 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['id'] = 'DROPOUT_RATE_4_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['field'] = 'DROPOUT_RATE_4_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['label'] = '';
  /* Field: MEAP 2009: Graduates 4 year */
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['id'] = 'GRADUATES_4_YEAR';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['field'] = 'GRADUATES_4_YEAR';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['label'] = '';
  /* Field: MEAP 2009: Dropouts 4 year */
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['id'] = 'DROPOUTS_4_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['field'] = 'DROPOUTS_4_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['label'] = '';
  /* Field: MEAP 2009: Continuing 4 year */
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['id'] = 'CONTINUING_4_YEAR';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['field'] = 'CONTINUING_4_YEAR';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['label'] = '';
  /* Field: MEAP 2009: Other completer 4 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['id'] = 'OTHER_COMPLETER_4_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['field'] = 'OTHER_COMPLETER_4_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['label'] = '';
  /* Field: MEAP 2009: Cohort 5 year */
  $handler->display->display_options['fields']['COHORT_5_YEAR']['id'] = 'COHORT_5_YEAR';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['field'] = 'COHORT_5_YEAR';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['label'] = '';
  /* Field: MEAP 2009: Graduation rate 5 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['id'] = 'GRADUATION_RATE_5_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['field'] = 'GRADUATION_RATE_5_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['label'] = '';
  /* Field: MEAP 2009: Dropout rate 5 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['id'] = 'DROPOUT_RATE_5_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['field'] = 'DROPOUT_RATE_5_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['label'] = '';
  /* Field: MEAP 2009: Graduates 5 year */
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['id'] = 'GRADUATES_5_YEAR';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['field'] = 'GRADUATES_5_YEAR';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['label'] = '';
  /* Field: MEAP 2009: Dropouts 5 year */
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['id'] = 'DROPOUTS_5_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['field'] = 'DROPOUTS_5_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['label'] = '';
  /* Field: MEAP 2009: Continuing 5 year */
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['id'] = 'CONTINUING_5_YEAR';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['field'] = 'CONTINUING_5_YEAR';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['label'] = '';
  /* Field: MEAP 2009: Other completer 5 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['id'] = 'OTHER_COMPLETER_5_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['field'] = 'OTHER_COMPLETER_5_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['label'] = '';
  /* Field: MEAP 2009: Cohort 6 year */
  $handler->display->display_options['fields']['COHORT_6_YEAR']['id'] = 'COHORT_6_YEAR';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['field'] = 'COHORT_6_YEAR';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['label'] = '';
  /* Field: MEAP 2009: Graduation rate 6 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['id'] = 'GRADUATION_RATE_6_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['field'] = 'GRADUATION_RATE_6_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['label'] = '';
  /* Field: MEAP 2009: Dropout rate 6 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['id'] = 'DROPOUT_RATE_6_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['field'] = 'DROPOUT_RATE_6_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['label'] = '';
  /* Field: MEAP 2009: Graduates 6 year */
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['id'] = 'GRADUATES_6_YEAR';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['field'] = 'GRADUATES_6_YEAR';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['label'] = '';
  /* Field: MEAP 2009: Dropouts 6 year */
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['id'] = 'DROPOUTS_6_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['field'] = 'DROPOUTS_6_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['label'] = '';
  /* Field: MEAP 2009: Continuing 6 year */
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['id'] = 'CONTINUING_6_YEAR';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['field'] = 'CONTINUING_6_YEAR';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['label'] = '';
  /* Field: MEAP 2009: Other completer 6 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['id'] = 'OTHER_COMPLETER_6_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['field'] = 'OTHER_COMPLETER_6_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['label'] = '';
  /* Field: MEAP 2009: Sort order */
  $handler->display->display_options['fields']['SORT_ORDER']['id'] = 'SORT_ORDER';
  $handler->display->display_options['fields']['SORT_ORDER']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['SORT_ORDER']['field'] = 'SORT_ORDER';
  $handler->display->display_options['fields']['SORT_ORDER']['label'] = '';
  /* Field: MEAP 2009: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'meap_2009';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: MEAP 2009: Schoolyear */
  $handler->display->display_options['arguments']['SchoolYear']['id'] = 'SchoolYear';
  $handler->display->display_options['arguments']['SchoolYear']['table'] = 'meap_2009';
  $handler->display->display_options['arguments']['SchoolYear']['field'] = 'SchoolYear';
  $handler->display->display_options['arguments']['SchoolYear']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolYear']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolYear']['title'] = 'MEAP 2009 %1';
  $handler->display->display_options['arguments']['SchoolYear']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['SchoolYear']['summary']['format'] = 'default_summary';
  /* Filter criterion: MEAP 2009: bcode */
  $handler->display->display_options['filters']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['table'] = 'meap_2009';
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
  $handler->display->display_options['path'] = 'admin/content/data/view/meap_2009';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MEAP 2009';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_by_bcode');
  $handler->display->display_options['path'] = 'meapbybcode';
  $export['meap_2009'] = $view;

  $view = new view();
  $view->name = 'meap_2010';
  $view->description = 'Default view for data table MEAP 2010';
  $view->tag = 'data table';
  $view->base_table = 'meap_2010';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'MEAP 2010';
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
  /* Field: MEAP 2010: Schoolyear */
  $handler->display->display_options['fields']['SchoolYear']['id'] = 'SchoolYear';
  $handler->display->display_options['fields']['SchoolYear']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['SchoolYear']['field'] = 'SchoolYear';
  $handler->display->display_options['fields']['SchoolYear']['label'] = '';
  /* Field: MEAP 2010: Isdcode */
  $handler->display->display_options['fields']['ISDCode']['id'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['ISDCode']['field'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['label'] = '';
  /* Field: MEAP 2010: Isdname */
  $handler->display->display_options['fields']['ISDName']['id'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['ISDName']['field'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['label'] = '';
  /* Field: MEAP 2010: Districtcode */
  $handler->display->display_options['fields']['DistrictCode']['id'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['DistrictCode']['field'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['label'] = '';
  /* Field: MEAP 2010: Districtname */
  $handler->display->display_options['fields']['DistrictName']['id'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['DistrictName']['field'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['label'] = '';
  /* Field: MEAP 2010: bcode */
  $handler->display->display_options['fields']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['BuildingCode']['field'] = 'BuildingCode';
  /* Field: MEAP 2010: Buildingname */
  $handler->display->display_options['fields']['BuildingName']['id'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['BuildingName']['field'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['label'] = '';
  /* Field: MEAP 2010: Locale name */
  $handler->display->display_options['fields']['LOCALE_NAME']['id'] = 'LOCALE_NAME';
  $handler->display->display_options['fields']['LOCALE_NAME']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['LOCALE_NAME']['field'] = 'LOCALE_NAME';
  $handler->display->display_options['fields']['LOCALE_NAME']['label'] = '';
  /* Field: MEAP 2010: Total enrollment */
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['id'] = 'TOTAL_ENROLLMENT';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['field'] = 'TOTAL_ENROLLMENT';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Male enrollment */
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['id'] = 'MALE_ENROLLMENT';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['field'] = 'MALE_ENROLLMENT';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Female enrollment */
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['id'] = 'FEMALE_ENROLLMENT';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['field'] = 'FEMALE_ENROLLMENT';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: American indian enrollment */
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['id'] = 'AMERICAN_INDIAN_ENROLLMENT';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['field'] = 'AMERICAN_INDIAN_ENROLLMENT';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Asian enrollment */
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['id'] = 'ASIAN_ENROLLMENT';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['field'] = 'ASIAN_ENROLLMENT';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: African american enrollment */
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['id'] = 'AFRICAN_AMERICAN_ENROLLMENT';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['field'] = 'AFRICAN_AMERICAN_ENROLLMENT';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Hispanic enrollment */
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['id'] = 'HISPANIC_ENROLLMENT';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['field'] = 'HISPANIC_ENROLLMENT';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Hawaiian enrollment */
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['id'] = 'HAWAIIAN_ENROLLMENT';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['field'] = 'HAWAIIAN_ENROLLMENT';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: White enrollment */
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['id'] = 'WHITE_ENROLLMENT';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['field'] = 'WHITE_ENROLLMENT';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Two or more races enrollment */
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['id'] = 'TWO_OR_MORE_RACES_ENROLLMENT';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['field'] = 'TWO_OR_MORE_RACES_ENROLLMENT';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Kindergarten enrollment */
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['id'] = 'KINDERGARTEN_ENROLLMENT';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['field'] = 'KINDERGARTEN_ENROLLMENT';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 1 enrollment */
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['id'] = 'GRADE_1_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['field'] = 'GRADE_1_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 2 enrollment */
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['id'] = 'GRADE_2_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['field'] = 'GRADE_2_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 3 enrollment */
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['id'] = 'GRADE_3_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['field'] = 'GRADE_3_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 4 enrollment */
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['id'] = 'GRADE_4_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['field'] = 'GRADE_4_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 5 enrollment */
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['id'] = 'GRADE_5_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['field'] = 'GRADE_5_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 6 enrollment */
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['id'] = 'GRADE_6_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['field'] = 'GRADE_6_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 7 enrollment */
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['id'] = 'GRADE_7_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['field'] = 'GRADE_7_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 8 enrollment */
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['id'] = 'GRADE_8_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['field'] = 'GRADE_8_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 9 enrollment */
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['id'] = 'GRADE_9_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['field'] = 'GRADE_9_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 10 enrollment */
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['id'] = 'GRADE_10_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['field'] = 'GRADE_10_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 11 enrollment */
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['id'] = 'GRADE_11_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['field'] = 'GRADE_11_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Grade 12 enrollment */
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['id'] = 'GRADE_12_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['field'] = 'GRADE_12_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Economic disadvantaged enrollment */
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['id'] = 'ECONOMIC_DISADVANTAGED_ENROLLMENT';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['field'] = 'ECONOMIC_DISADVANTAGED_ENROLLMENT';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Special education enrollment */
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['id'] = 'SPECIAL_EDUCATION_ENROLLMENT';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['field'] = 'SPECIAL_EDUCATION_ENROLLMENT';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: English language learners enrollment */
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['id'] = 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['field'] = 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Homeless enrollment */
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['id'] = 'HOMELESS_ENROLLMENT';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['field'] = 'HOMELESS_ENROLLMENT';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Migrant enrollment */
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['id'] = 'MIGRANT_ENROLLMENT';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['field'] = 'MIGRANT_ENROLLMENT';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2010: Ayp status */
  $handler->display->display_options['fields']['AYP_STATUS']['id'] = 'AYP_STATUS';
  $handler->display->display_options['fields']['AYP_STATUS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['AYP_STATUS']['field'] = 'AYP_STATUS';
  $handler->display->display_options['fields']['AYP_STATUS']['label'] = '';
  /* Field: MEAP 2010: Ayp phase */
  $handler->display->display_options['fields']['AYP_PHASE']['id'] = 'AYP_PHASE';
  $handler->display->display_options['fields']['AYP_PHASE']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['AYP_PHASE']['field'] = 'AYP_PHASE';
  $handler->display->display_options['fields']['AYP_PHASE']['label'] = '';
  /* Field: MEAP 2010: Grade 3 math tested */
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['id'] = 'GRADE_3_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['field'] = 'GRADE_3_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 3 math proficient */
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['id'] = 'GRADE_3_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['field'] = 'GRADE_3_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 3 math avg ss */
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['id'] = 'GRADE_3_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['field'] = 'GRADE_3_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 4 math tested */
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['id'] = 'GRADE_4_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['field'] = 'GRADE_4_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 4 math proficient */
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['id'] = 'GRADE_4_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['field'] = 'GRADE_4_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 4 math avg ss */
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['id'] = 'GRADE_4_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['field'] = 'GRADE_4_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 5 math tested */
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['id'] = 'GRADE_5_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['field'] = 'GRADE_5_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 5 math proficient */
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['id'] = 'GRADE_5_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['field'] = 'GRADE_5_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 5 math avg ss */
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['id'] = 'GRADE_5_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['field'] = 'GRADE_5_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 6 math tested */
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['id'] = 'GRADE_6_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['field'] = 'GRADE_6_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 6 math proficient */
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['id'] = 'GRADE_6_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['field'] = 'GRADE_6_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 6 math avg ss */
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['id'] = 'GRADE_6_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['field'] = 'GRADE_6_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 7 math tested */
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['id'] = 'GRADE_7_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['field'] = 'GRADE_7_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 7 math proficient */
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['id'] = 'GRADE_7_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['field'] = 'GRADE_7_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 7 math avg ss */
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['id'] = 'GRADE_7_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['field'] = 'GRADE_7_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 8 math tested */
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['id'] = 'GRADE_8_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['field'] = 'GRADE_8_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 8 math proficient */
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['id'] = 'GRADE_8_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['field'] = 'GRADE_8_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 8 math avg ss */
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['id'] = 'GRADE_8_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['field'] = 'GRADE_8_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 3 reading tested */
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['id'] = 'GRADE_3_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['field'] = 'GRADE_3_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 3 reading proficient */
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['id'] = 'GRADE_3_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['field'] = 'GRADE_3_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 3 reading avg ss */
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['id'] = 'GRADE_3_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['field'] = 'GRADE_3_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 4 reading tested */
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['id'] = 'GRADE_4_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['field'] = 'GRADE_4_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 4 reading proficient */
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['id'] = 'GRADE_4_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['field'] = 'GRADE_4_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 4 reading avg ss */
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['id'] = 'GRADE_4_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['field'] = 'GRADE_4_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 5 reading tested */
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['id'] = 'GRADE_5_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['field'] = 'GRADE_5_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 5 reading proficient */
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['id'] = 'GRADE_5_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['field'] = 'GRADE_5_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 5 reading avg ss */
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['id'] = 'GRADE_5_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['field'] = 'GRADE_5_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 6 reading tested */
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['id'] = 'GRADE_6_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['field'] = 'GRADE_6_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 6 reading proficient */
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['id'] = 'GRADE_6_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['field'] = 'GRADE_6_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 6 reading avg ss */
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['id'] = 'GRADE_6_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['field'] = 'GRADE_6_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 7 reading tested */
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['id'] = 'GRADE_7_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['field'] = 'GRADE_7_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 7 reading proficient */
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['id'] = 'GRADE_7_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['field'] = 'GRADE_7_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 7 reading avg ss */
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['id'] = 'GRADE_7_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['field'] = 'GRADE_7_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 8 reading tested */
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['id'] = 'GRADE_8_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['field'] = 'GRADE_8_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 8 reading proficient */
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['id'] = 'GRADE_8_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['field'] = 'GRADE_8_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 8 reading avg ss */
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['id'] = 'GRADE_8_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['field'] = 'GRADE_8_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 5 science tested */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['id'] = 'GRADE_5_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['field'] = 'GRADE_5_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 5 science proficient */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['id'] = 'GRADE_5_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['field'] = 'GRADE_5_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 5 science avg ss */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['id'] = 'GRADE_5_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['field'] = 'GRADE_5_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 8 science tested */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['id'] = 'GRADE_8_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['field'] = 'GRADE_8_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 8 science proficient */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['id'] = 'GRADE_8_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['field'] = 'GRADE_8_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 8 science avg ss */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['id'] = 'GRADE_8_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['field'] = 'GRADE_8_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 6 social studies tested */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_6_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_6_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 6 social studies proficient */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_6_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_6_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 6 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_6_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_6_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 9 social studies tested */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_9_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_9_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 9 social studies proficient */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_9_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_9_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 9 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_9_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_9_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 11 math tested */
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['id'] = 'GRADE_11_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['field'] = 'GRADE_11_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 11 math proficient */
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['id'] = 'GRADE_11_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['field'] = 'GRADE_11_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 11 math avg ss */
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['id'] = 'GRADE_11_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['field'] = 'GRADE_11_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 11 reading tested */
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['id'] = 'GRADE_11_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['field'] = 'GRADE_11_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 11 reading proficient */
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['id'] = 'GRADE_11_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['field'] = 'GRADE_11_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 11 reading avg ss */
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['id'] = 'GRADE_11_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['field'] = 'GRADE_11_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 11 writing tested */
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['id'] = 'GRADE_11_WRITING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['field'] = 'GRADE_11_WRITING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 11 writing proficient */
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['id'] = 'GRADE_11_WRITING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['field'] = 'GRADE_11_WRITING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 11 writing avg ss */
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['id'] = 'GRADE_11_WRITING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['field'] = 'GRADE_11_WRITING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 11 science tested */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['id'] = 'GRADE_11_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['field'] = 'GRADE_11_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 11 science proficient */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['id'] = 'GRADE_11_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['field'] = 'GRADE_11_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 11 science avg ss */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['id'] = 'GRADE_11_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['field'] = 'GRADE_11_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 11 social studies tested */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_11_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_11_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2010: Grade 11 social studies proficient */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_11_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_11_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2010: Grade 11 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_11_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_11_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2010: Grade 11 math percent ready */
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['id'] = 'GRADE_11_MATH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['field'] = 'GRADE_11_MATH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2010: Grade 11 reading percent ready */
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['id'] = 'GRADE_11_READING_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['field'] = 'GRADE_11_READING_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2010: Grade 11 science percent ready */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['id'] = 'GRADE_11_SCIENCE_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['field'] = 'GRADE_11_SCIENCE_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2010: Grade 11 english percent ready */
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['id'] = 'GRADE_11_ENGLISH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['field'] = 'GRADE_11_ENGLISH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2010: Grade 11 all subject percent ready */
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['id'] = 'GRADE_11_ALL_SUBJECT_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['field'] = 'GRADE_11_ALL_SUBJECT_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2010: Cohort 4 year */
  $handler->display->display_options['fields']['COHORT_4_YEAR']['id'] = 'COHORT_4_YEAR';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['field'] = 'COHORT_4_YEAR';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['label'] = '';
  /* Field: MEAP 2010: Graduation rate 4 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['id'] = 'GRADUATION_RATE_4_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['field'] = 'GRADUATION_RATE_4_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['label'] = '';
  /* Field: MEAP 2010: Dropout rate 4 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['id'] = 'DROPOUT_RATE_4_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['field'] = 'DROPOUT_RATE_4_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['label'] = '';
  /* Field: MEAP 2010: Graduates 4 year */
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['id'] = 'GRADUATES_4_YEAR';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['field'] = 'GRADUATES_4_YEAR';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['label'] = '';
  /* Field: MEAP 2010: Dropouts 4 year */
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['id'] = 'DROPOUTS_4_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['field'] = 'DROPOUTS_4_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['label'] = '';
  /* Field: MEAP 2010: Continuing 4 year */
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['id'] = 'CONTINUING_4_YEAR';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['field'] = 'CONTINUING_4_YEAR';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['label'] = '';
  /* Field: MEAP 2010: Other completer 4 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['id'] = 'OTHER_COMPLETER_4_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['field'] = 'OTHER_COMPLETER_4_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['label'] = '';
  /* Field: MEAP 2010: Cohort 5 year */
  $handler->display->display_options['fields']['COHORT_5_YEAR']['id'] = 'COHORT_5_YEAR';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['field'] = 'COHORT_5_YEAR';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['label'] = '';
  /* Field: MEAP 2010: Graduation rate 5 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['id'] = 'GRADUATION_RATE_5_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['field'] = 'GRADUATION_RATE_5_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['label'] = '';
  /* Field: MEAP 2010: Dropout rate 5 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['id'] = 'DROPOUT_RATE_5_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['field'] = 'DROPOUT_RATE_5_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['label'] = '';
  /* Field: MEAP 2010: Graduates 5 year */
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['id'] = 'GRADUATES_5_YEAR';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['field'] = 'GRADUATES_5_YEAR';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['label'] = '';
  /* Field: MEAP 2010: Dropouts 5 year */
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['id'] = 'DROPOUTS_5_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['field'] = 'DROPOUTS_5_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['label'] = '';
  /* Field: MEAP 2010: Continuing 5 year */
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['id'] = 'CONTINUING_5_YEAR';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['field'] = 'CONTINUING_5_YEAR';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['label'] = '';
  /* Field: MEAP 2010: Other completer 5 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['id'] = 'OTHER_COMPLETER_5_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['field'] = 'OTHER_COMPLETER_5_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['label'] = '';
  /* Field: MEAP 2010: Cohort 6 year */
  $handler->display->display_options['fields']['COHORT_6_YEAR']['id'] = 'COHORT_6_YEAR';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['field'] = 'COHORT_6_YEAR';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['label'] = '';
  /* Field: MEAP 2010: Graduation rate 6 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['id'] = 'GRADUATION_RATE_6_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['field'] = 'GRADUATION_RATE_6_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['label'] = '';
  /* Field: MEAP 2010: Dropout rate 6 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['id'] = 'DROPOUT_RATE_6_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['field'] = 'DROPOUT_RATE_6_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['label'] = '';
  /* Field: MEAP 2010: Graduates 6 year */
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['id'] = 'GRADUATES_6_YEAR';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['field'] = 'GRADUATES_6_YEAR';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['label'] = '';
  /* Field: MEAP 2010: Dropouts 6 year */
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['id'] = 'DROPOUTS_6_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['field'] = 'DROPOUTS_6_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['label'] = '';
  /* Field: MEAP 2010: Continuing 6 year */
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['id'] = 'CONTINUING_6_YEAR';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['field'] = 'CONTINUING_6_YEAR';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['label'] = '';
  /* Field: MEAP 2010: Other completer 6 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['id'] = 'OTHER_COMPLETER_6_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['field'] = 'OTHER_COMPLETER_6_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['label'] = '';
  /* Field: MEAP 2010: Sort order */
  $handler->display->display_options['fields']['SORT_ORDER']['id'] = 'SORT_ORDER';
  $handler->display->display_options['fields']['SORT_ORDER']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['SORT_ORDER']['field'] = 'SORT_ORDER';
  $handler->display->display_options['fields']['SORT_ORDER']['label'] = '';
  /* Field: MEAP 2010: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'meap_2010';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: MEAP 2010: Schoolyear */
  $handler->display->display_options['arguments']['SchoolYear']['id'] = 'SchoolYear';
  $handler->display->display_options['arguments']['SchoolYear']['table'] = 'meap_2010';
  $handler->display->display_options['arguments']['SchoolYear']['field'] = 'SchoolYear';
  $handler->display->display_options['arguments']['SchoolYear']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolYear']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolYear']['title'] = 'MEAP 2010 %1';
  $handler->display->display_options['arguments']['SchoolYear']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['SchoolYear']['summary']['format'] = 'default_summary';
  /* Filter criterion: MEAP 2010: bcode */
  $handler->display->display_options['filters']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['table'] = 'meap_2010';
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
  $handler->display->display_options['path'] = 'admin/content/data/view/meap_2010';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MEAP 2010';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_by_bcode');
  $handler->display->display_options['path'] = 'meapbybcode';
  $export['meap_2010'] = $view;

  $view = new view();
  $view->name = 'meap_2011';
  $view->description = 'Default view for data table MEAP 2011';
  $view->tag = 'data table';
  $view->base_table = 'meap_2011';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'MEAP 2011';
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
  /* Field: MEAP 2011: Schoolyear */
  $handler->display->display_options['fields']['SchoolYear']['id'] = 'SchoolYear';
  $handler->display->display_options['fields']['SchoolYear']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['SchoolYear']['field'] = 'SchoolYear';
  $handler->display->display_options['fields']['SchoolYear']['label'] = '';
  /* Field: MEAP 2011: Isdcode */
  $handler->display->display_options['fields']['ISDCode']['id'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['ISDCode']['field'] = 'ISDCode';
  $handler->display->display_options['fields']['ISDCode']['label'] = '';
  /* Field: MEAP 2011: Isdname */
  $handler->display->display_options['fields']['ISDName']['id'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['ISDName']['field'] = 'ISDName';
  $handler->display->display_options['fields']['ISDName']['label'] = '';
  /* Field: MEAP 2011: Districtcode */
  $handler->display->display_options['fields']['DistrictCode']['id'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['DistrictCode']['field'] = 'DistrictCode';
  $handler->display->display_options['fields']['DistrictCode']['label'] = '';
  /* Field: MEAP 2011: Districtname */
  $handler->display->display_options['fields']['DistrictName']['id'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['DistrictName']['field'] = 'DistrictName';
  $handler->display->display_options['fields']['DistrictName']['label'] = '';
  /* Field: MEAP 2011: bcode */
  $handler->display->display_options['fields']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['fields']['BuildingCode']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['BuildingCode']['field'] = 'BuildingCode';
  /* Field: MEAP 2011: Buildingname */
  $handler->display->display_options['fields']['BuildingName']['id'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['BuildingName']['field'] = 'BuildingName';
  $handler->display->display_options['fields']['BuildingName']['label'] = '';
  /* Field: MEAP 2011: Locale name */
  $handler->display->display_options['fields']['LOCALE_NAME']['id'] = 'LOCALE_NAME';
  $handler->display->display_options['fields']['LOCALE_NAME']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['LOCALE_NAME']['field'] = 'LOCALE_NAME';
  $handler->display->display_options['fields']['LOCALE_NAME']['label'] = '';
  /* Field: MEAP 2011: Total enrollment */
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['id'] = 'TOTAL_ENROLLMENT';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['field'] = 'TOTAL_ENROLLMENT';
  $handler->display->display_options['fields']['TOTAL_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Male enrollment */
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['id'] = 'MALE_ENROLLMENT';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['field'] = 'MALE_ENROLLMENT';
  $handler->display->display_options['fields']['MALE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Female enrollment */
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['id'] = 'FEMALE_ENROLLMENT';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['field'] = 'FEMALE_ENROLLMENT';
  $handler->display->display_options['fields']['FEMALE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: American indian enrollment */
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['id'] = 'AMERICAN_INDIAN_ENROLLMENT';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['field'] = 'AMERICAN_INDIAN_ENROLLMENT';
  $handler->display->display_options['fields']['AMERICAN_INDIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Asian enrollment */
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['id'] = 'ASIAN_ENROLLMENT';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['field'] = 'ASIAN_ENROLLMENT';
  $handler->display->display_options['fields']['ASIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: African american enrollment */
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['id'] = 'AFRICAN_AMERICAN_ENROLLMENT';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['field'] = 'AFRICAN_AMERICAN_ENROLLMENT';
  $handler->display->display_options['fields']['AFRICAN_AMERICAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Hispanic enrollment */
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['id'] = 'HISPANIC_ENROLLMENT';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['field'] = 'HISPANIC_ENROLLMENT';
  $handler->display->display_options['fields']['HISPANIC_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Hawaiian enrollment */
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['id'] = 'HAWAIIAN_ENROLLMENT';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['field'] = 'HAWAIIAN_ENROLLMENT';
  $handler->display->display_options['fields']['HAWAIIAN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: White enrollment */
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['id'] = 'WHITE_ENROLLMENT';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['field'] = 'WHITE_ENROLLMENT';
  $handler->display->display_options['fields']['WHITE_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Two or more races enrollment */
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['id'] = 'TWO_OR_MORE_RACES_ENROLLMENT';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['field'] = 'TWO_OR_MORE_RACES_ENROLLMENT';
  $handler->display->display_options['fields']['TWO_OR_MORE_RACES_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Kindergarten enrollment */
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['id'] = 'KINDERGARTEN_ENROLLMENT';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['field'] = 'KINDERGARTEN_ENROLLMENT';
  $handler->display->display_options['fields']['KINDERGARTEN_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 1 enrollment */
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['id'] = 'GRADE_1_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['field'] = 'GRADE_1_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_1_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 2 enrollment */
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['id'] = 'GRADE_2_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['field'] = 'GRADE_2_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_2_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 3 enrollment */
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['id'] = 'GRADE_3_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['field'] = 'GRADE_3_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_3_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 4 enrollment */
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['id'] = 'GRADE_4_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['field'] = 'GRADE_4_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_4_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 5 enrollment */
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['id'] = 'GRADE_5_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['field'] = 'GRADE_5_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_5_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 6 enrollment */
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['id'] = 'GRADE_6_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['field'] = 'GRADE_6_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_6_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 7 enrollment */
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['id'] = 'GRADE_7_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['field'] = 'GRADE_7_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_7_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 8 enrollment */
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['id'] = 'GRADE_8_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['field'] = 'GRADE_8_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_8_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 9 enrollment */
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['id'] = 'GRADE_9_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['field'] = 'GRADE_9_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_9_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 10 enrollment */
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['id'] = 'GRADE_10_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['field'] = 'GRADE_10_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_10_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 11 enrollment */
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['id'] = 'GRADE_11_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['field'] = 'GRADE_11_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_11_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Grade 12 enrollment */
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['id'] = 'GRADE_12_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['field'] = 'GRADE_12_ENROLLMENT';
  $handler->display->display_options['fields']['GRADE_12_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Economic disadvantaged enrollment */
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['id'] = 'ECONOMIC_DISADVANTAGED_ENROLLMENT';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['field'] = 'ECONOMIC_DISADVANTAGED_ENROLLMENT';
  $handler->display->display_options['fields']['ECONOMIC_DISADVANTAGED_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Special education enrollment */
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['id'] = 'SPECIAL_EDUCATION_ENROLLMENT';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['field'] = 'SPECIAL_EDUCATION_ENROLLMENT';
  $handler->display->display_options['fields']['SPECIAL_EDUCATION_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: English language learners enrollment */
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['id'] = 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['field'] = 'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT';
  $handler->display->display_options['fields']['ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Homeless enrollment */
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['id'] = 'HOMELESS_ENROLLMENT';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['field'] = 'HOMELESS_ENROLLMENT';
  $handler->display->display_options['fields']['HOMELESS_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Migrant enrollment */
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['id'] = 'MIGRANT_ENROLLMENT';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['field'] = 'MIGRANT_ENROLLMENT';
  $handler->display->display_options['fields']['MIGRANT_ENROLLMENT']['label'] = '';
  /* Field: MEAP 2011: Ayp status */
  $handler->display->display_options['fields']['AYP_STATUS']['id'] = 'AYP_STATUS';
  $handler->display->display_options['fields']['AYP_STATUS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['AYP_STATUS']['field'] = 'AYP_STATUS';
  $handler->display->display_options['fields']['AYP_STATUS']['label'] = '';
  /* Field: MEAP 2011: Ayp phase */
  $handler->display->display_options['fields']['AYP_PHASE']['id'] = 'AYP_PHASE';
  $handler->display->display_options['fields']['AYP_PHASE']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['AYP_PHASE']['field'] = 'AYP_PHASE';
  $handler->display->display_options['fields']['AYP_PHASE']['label'] = '';
  /* Field: MEAP 2011: Grade 3 math tested */
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['id'] = 'GRADE_3_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['field'] = 'GRADE_3_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_3_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 3 math proficient */
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['id'] = 'GRADE_3_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['field'] = 'GRADE_3_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 3 math avg ss */
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['id'] = 'GRADE_3_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['field'] = 'GRADE_3_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 4 math tested */
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['id'] = 'GRADE_4_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['field'] = 'GRADE_4_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_4_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 4 math proficient */
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['id'] = 'GRADE_4_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['field'] = 'GRADE_4_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 4 math avg ss */
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['id'] = 'GRADE_4_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['field'] = 'GRADE_4_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 5 math tested */
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['id'] = 'GRADE_5_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['field'] = 'GRADE_5_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_5_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 5 math proficient */
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['id'] = 'GRADE_5_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['field'] = 'GRADE_5_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 5 math avg ss */
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['id'] = 'GRADE_5_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['field'] = 'GRADE_5_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 6 math tested */
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['id'] = 'GRADE_6_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['field'] = 'GRADE_6_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_6_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 6 math proficient */
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['id'] = 'GRADE_6_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['field'] = 'GRADE_6_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 6 math avg ss */
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['id'] = 'GRADE_6_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['field'] = 'GRADE_6_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 7 math tested */
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['id'] = 'GRADE_7_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['field'] = 'GRADE_7_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_7_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 7 math proficient */
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['id'] = 'GRADE_7_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['field'] = 'GRADE_7_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 7 math avg ss */
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['id'] = 'GRADE_7_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['field'] = 'GRADE_7_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 8 math tested */
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['id'] = 'GRADE_8_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['field'] = 'GRADE_8_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_8_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 8 math proficient */
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['id'] = 'GRADE_8_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['field'] = 'GRADE_8_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 8 math avg ss */
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['id'] = 'GRADE_8_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['field'] = 'GRADE_8_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 3 reading tested */
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['id'] = 'GRADE_3_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['field'] = 'GRADE_3_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_3_READING_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 3 reading proficient */
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['id'] = 'GRADE_3_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['field'] = 'GRADE_3_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_3_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 3 reading avg ss */
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['id'] = 'GRADE_3_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['field'] = 'GRADE_3_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_3_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 4 reading tested */
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['id'] = 'GRADE_4_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['field'] = 'GRADE_4_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_4_READING_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 4 reading proficient */
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['id'] = 'GRADE_4_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['field'] = 'GRADE_4_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_4_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 4 reading avg ss */
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['id'] = 'GRADE_4_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['field'] = 'GRADE_4_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_4_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 5 reading tested */
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['id'] = 'GRADE_5_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['field'] = 'GRADE_5_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_5_READING_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 5 reading proficient */
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['id'] = 'GRADE_5_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['field'] = 'GRADE_5_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 5 reading avg ss */
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['id'] = 'GRADE_5_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['field'] = 'GRADE_5_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 6 reading tested */
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['id'] = 'GRADE_6_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['field'] = 'GRADE_6_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_6_READING_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 6 reading proficient */
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['id'] = 'GRADE_6_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['field'] = 'GRADE_6_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 6 reading avg ss */
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['id'] = 'GRADE_6_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['field'] = 'GRADE_6_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 7 reading tested */
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['id'] = 'GRADE_7_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['field'] = 'GRADE_7_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_7_READING_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 7 reading proficient */
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['id'] = 'GRADE_7_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['field'] = 'GRADE_7_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_7_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 7 reading avg ss */
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['id'] = 'GRADE_7_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['field'] = 'GRADE_7_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_7_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 8 reading tested */
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['id'] = 'GRADE_8_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['field'] = 'GRADE_8_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_8_READING_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 8 reading proficient */
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['id'] = 'GRADE_8_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['field'] = 'GRADE_8_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 8 reading avg ss */
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['id'] = 'GRADE_8_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['field'] = 'GRADE_8_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 5 science tested */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['id'] = 'GRADE_5_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['field'] = 'GRADE_5_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 5 science proficient */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['id'] = 'GRADE_5_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['field'] = 'GRADE_5_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 5 science avg ss */
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['id'] = 'GRADE_5_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['field'] = 'GRADE_5_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_5_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 8 science tested */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['id'] = 'GRADE_8_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['field'] = 'GRADE_8_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 8 science proficient */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['id'] = 'GRADE_8_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['field'] = 'GRADE_8_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 8 science avg ss */
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['id'] = 'GRADE_8_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['field'] = 'GRADE_8_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_8_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 6 social studies tested */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_6_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_6_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 6 social studies proficient */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_6_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_6_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 6 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_6_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_6_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_6_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 9 social studies tested */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_9_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_9_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 9 social studies proficient */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_9_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_9_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 9 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_9_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_9_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_9_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 11 math tested */
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['id'] = 'GRADE_11_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['field'] = 'GRADE_11_MATH_TESTED';
  $handler->display->display_options['fields']['GRADE_11_MATH_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 11 math proficient */
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['id'] = 'GRADE_11_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['field'] = 'GRADE_11_MATH_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_MATH_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 11 math avg ss */
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['id'] = 'GRADE_11_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['field'] = 'GRADE_11_MATH_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_MATH_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 11 reading tested */
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['id'] = 'GRADE_11_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['field'] = 'GRADE_11_READING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_READING_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 11 reading proficient */
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['id'] = 'GRADE_11_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['field'] = 'GRADE_11_READING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_READING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 11 reading avg ss */
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['id'] = 'GRADE_11_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['field'] = 'GRADE_11_READING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_READING_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 11 writing tested */
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['id'] = 'GRADE_11_WRITING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['field'] = 'GRADE_11_WRITING_TESTED';
  $handler->display->display_options['fields']['GRADE_11_WRITING_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 11 writing proficient */
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['id'] = 'GRADE_11_WRITING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['field'] = 'GRADE_11_WRITING_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_WRITING_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 11 writing avg ss */
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['id'] = 'GRADE_11_WRITING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['field'] = 'GRADE_11_WRITING_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_WRITING_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 11 science tested */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['id'] = 'GRADE_11_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['field'] = 'GRADE_11_SCIENCE_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 11 science proficient */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['id'] = 'GRADE_11_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['field'] = 'GRADE_11_SCIENCE_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 11 science avg ss */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['id'] = 'GRADE_11_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['field'] = 'GRADE_11_SCIENCE_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 11 social studies tested */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['id'] = 'GRADE_11_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['field'] = 'GRADE_11_SOCIAL_STUDIES_TESTED';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_TESTED']['label'] = '';
  /* Field: MEAP 2011: Grade 11 social studies proficient */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['id'] = 'GRADE_11_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['field'] = 'GRADE_11_SOCIAL_STUDIES_PROFICIENT';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_PROFICIENT']['label'] = '';
  /* Field: MEAP 2011: Grade 11 social studies avg ss */
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['id'] = 'GRADE_11_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['field'] = 'GRADE_11_SOCIAL_STUDIES_AVG_SS';
  $handler->display->display_options['fields']['GRADE_11_SOCIAL_STUDIES_AVG_SS']['label'] = '';
  /* Field: MEAP 2011: Grade 11 math percent ready */
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['id'] = 'GRADE_11_MATH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['field'] = 'GRADE_11_MATH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_MATH_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2011: Grade 11 reading percent ready */
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['id'] = 'GRADE_11_READING_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['field'] = 'GRADE_11_READING_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_READING_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2011: Grade 11 science percent ready */
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['id'] = 'GRADE_11_SCIENCE_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['field'] = 'GRADE_11_SCIENCE_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_SCIENCE_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2011: Grade 11 english percent ready */
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['id'] = 'GRADE_11_ENGLISH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['field'] = 'GRADE_11_ENGLISH_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ENGLISH_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2011: Grade 11 all subject percent ready */
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['id'] = 'GRADE_11_ALL_SUBJECT_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['field'] = 'GRADE_11_ALL_SUBJECT_PERCENT_READY';
  $handler->display->display_options['fields']['GRADE_11_ALL_SUBJECT_PERCENT_READY']['label'] = '';
  /* Field: MEAP 2011: Cohort 4 year */
  $handler->display->display_options['fields']['COHORT_4_YEAR']['id'] = 'COHORT_4_YEAR';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['field'] = 'COHORT_4_YEAR';
  $handler->display->display_options['fields']['COHORT_4_YEAR']['label'] = '';
  /* Field: MEAP 2011: Graduation rate 4 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['id'] = 'GRADUATION_RATE_4_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['field'] = 'GRADUATION_RATE_4_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_4_YEAR']['label'] = '';
  /* Field: MEAP 2011: Dropout rate 4 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['id'] = 'DROPOUT_RATE_4_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['field'] = 'DROPOUT_RATE_4_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_4_YEAR']['label'] = '';
  /* Field: MEAP 2011: Graduates 4 year */
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['id'] = 'GRADUATES_4_YEAR';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['field'] = 'GRADUATES_4_YEAR';
  $handler->display->display_options['fields']['GRADUATES_4_YEAR']['label'] = '';
  /* Field: MEAP 2011: Dropouts 4 year */
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['id'] = 'DROPOUTS_4_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['field'] = 'DROPOUTS_4_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_4_YEAR']['label'] = '';
  /* Field: MEAP 2011: Continuing 4 year */
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['id'] = 'CONTINUING_4_YEAR';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['field'] = 'CONTINUING_4_YEAR';
  $handler->display->display_options['fields']['CONTINUING_4_YEAR']['label'] = '';
  /* Field: MEAP 2011: Other completer 4 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['id'] = 'OTHER_COMPLETER_4_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['field'] = 'OTHER_COMPLETER_4_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_4_YEAR']['label'] = '';
  /* Field: MEAP 2011: Cohort 5 year */
  $handler->display->display_options['fields']['COHORT_5_YEAR']['id'] = 'COHORT_5_YEAR';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['field'] = 'COHORT_5_YEAR';
  $handler->display->display_options['fields']['COHORT_5_YEAR']['label'] = '';
  /* Field: MEAP 2011: Graduation rate 5 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['id'] = 'GRADUATION_RATE_5_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['field'] = 'GRADUATION_RATE_5_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_5_YEAR']['label'] = '';
  /* Field: MEAP 2011: Dropout rate 5 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['id'] = 'DROPOUT_RATE_5_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['field'] = 'DROPOUT_RATE_5_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_5_YEAR']['label'] = '';
  /* Field: MEAP 2011: Graduates 5 year */
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['id'] = 'GRADUATES_5_YEAR';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['field'] = 'GRADUATES_5_YEAR';
  $handler->display->display_options['fields']['GRADUATES_5_YEAR']['label'] = '';
  /* Field: MEAP 2011: Dropouts 5 year */
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['id'] = 'DROPOUTS_5_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['field'] = 'DROPOUTS_5_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_5_YEAR']['label'] = '';
  /* Field: MEAP 2011: Continuing 5 year */
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['id'] = 'CONTINUING_5_YEAR';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['field'] = 'CONTINUING_5_YEAR';
  $handler->display->display_options['fields']['CONTINUING_5_YEAR']['label'] = '';
  /* Field: MEAP 2011: Other completer 5 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['id'] = 'OTHER_COMPLETER_5_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['field'] = 'OTHER_COMPLETER_5_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_5_YEAR']['label'] = '';
  /* Field: MEAP 2011: Cohort 6 year */
  $handler->display->display_options['fields']['COHORT_6_YEAR']['id'] = 'COHORT_6_YEAR';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['field'] = 'COHORT_6_YEAR';
  $handler->display->display_options['fields']['COHORT_6_YEAR']['label'] = '';
  /* Field: MEAP 2011: Graduation rate 6 year */
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['id'] = 'GRADUATION_RATE_6_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['field'] = 'GRADUATION_RATE_6_YEAR';
  $handler->display->display_options['fields']['GRADUATION_RATE_6_YEAR']['label'] = '';
  /* Field: MEAP 2011: Dropout rate 6 year */
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['id'] = 'DROPOUT_RATE_6_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['field'] = 'DROPOUT_RATE_6_YEAR';
  $handler->display->display_options['fields']['DROPOUT_RATE_6_YEAR']['label'] = '';
  /* Field: MEAP 2011: Graduates 6 year */
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['id'] = 'GRADUATES_6_YEAR';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['field'] = 'GRADUATES_6_YEAR';
  $handler->display->display_options['fields']['GRADUATES_6_YEAR']['label'] = '';
  /* Field: MEAP 2011: Dropouts 6 year */
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['id'] = 'DROPOUTS_6_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['field'] = 'DROPOUTS_6_YEAR';
  $handler->display->display_options['fields']['DROPOUTS_6_YEAR']['label'] = '';
  /* Field: MEAP 2011: Continuing 6 year */
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['id'] = 'CONTINUING_6_YEAR';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['field'] = 'CONTINUING_6_YEAR';
  $handler->display->display_options['fields']['CONTINUING_6_YEAR']['label'] = '';
  /* Field: MEAP 2011: Other completer 6 year */
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['id'] = 'OTHER_COMPLETER_6_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['field'] = 'OTHER_COMPLETER_6_YEAR';
  $handler->display->display_options['fields']['OTHER_COMPLETER_6_YEAR']['label'] = '';
  /* Field: MEAP 2011: Sort order */
  $handler->display->display_options['fields']['SORT_ORDER']['id'] = 'SORT_ORDER';
  $handler->display->display_options['fields']['SORT_ORDER']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['SORT_ORDER']['field'] = 'SORT_ORDER';
  $handler->display->display_options['fields']['SORT_ORDER']['label'] = '';
  /* Field: MEAP 2011: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'meap_2011';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: MEAP 2011: Schoolyear */
  $handler->display->display_options['arguments']['SchoolYear']['id'] = 'SchoolYear';
  $handler->display->display_options['arguments']['SchoolYear']['table'] = 'meap_2011';
  $handler->display->display_options['arguments']['SchoolYear']['field'] = 'SchoolYear';
  $handler->display->display_options['arguments']['SchoolYear']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolYear']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['SchoolYear']['title'] = 'MEAP 2011 %1';
  $handler->display->display_options['arguments']['SchoolYear']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['SchoolYear']['summary']['format'] = 'default_summary';
  /* Filter criterion: MEAP 2011: bcode */
  $handler->display->display_options['filters']['BuildingCode']['id'] = 'BuildingCode';
  $handler->display->display_options['filters']['BuildingCode']['table'] = 'meap_2011';
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
  $handler->display->display_options['path'] = 'admin/content/data/view/meap_2011';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MEAP 2011';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_by_bcode');
  $handler->display->display_options['path'] = 'meapbybcode';
  $export['meap_2011'] = $view;

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
  $view->human_name = 'school profiles - unused, see esdportal_dash module';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My School Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
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

  /* Display: school leader block */
  $handler = $view->new_display('block', 'school leader block', 'my_schools_block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list menu';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $export['school_profiles'] = $view;

  return $export;
}
