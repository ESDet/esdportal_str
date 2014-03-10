<?php
/**
 * @file
 * esdportal_str.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function esdportal_str_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Act 2011';
  $data_table->name = 'act_2011';
  $data_table->table_schema = array(
    'description' => 'ACT 2011 data',
    'fields' => array(
      'SchoolType' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'ISDName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'DistrictName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'BuildingCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'BuildingName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'NumberTested' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'allsubAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'allsubPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'readingAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'readingPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'mathAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'mathPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'englishAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'englishPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'scienceAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'sciencePercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
    ),
    'name' => 'act_2011',
    'primary key' => array(
      0 => 'BuildingCode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'SchoolType' => array(),
      'ISDCode' => array(),
      'ISDName' => array(),
      'DistrictCode' => array(),
      'DistrictName' => array(),
      'BuildingCode' => array(),
      'BuildingName' => array(),
      'NumberTested' => array(),
      'allsubAverage' => array(),
      'allsubPercentMeeting' => array(),
      'readingAverage' => array(),
      'readingPercentMeeting' => array(),
      'mathAverage' => array(),
      'mathPercentMeeting' => array(),
      'englishAverage' => array(),
      'englishPercentMeeting' => array(),
      'scienceAverage' => array(),
      'sciencePercentMeeting' => array(),
    ),
  );
  $export['act_2011'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Act 2012';
  $data_table->name = 'act_2012';
  $data_table->table_schema = array(
    'description' => 'ACT 2012 data',
    'fields' => array(
      'SchoolType' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'ISDName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'DistrictName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'BuildingCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'BuildingName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'NumberTested' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'allsubAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'allsubPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'readingAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'readingPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'mathAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'mathPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'englishAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'englishPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'scienceAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'sciencePercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'writingAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'act_2012',
    'primary key' => array(
      0 => 'BuildingCode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'SchoolType' => array(),
      'ISDCode' => array(),
      'ISDName' => array(),
      'DistrictCode' => array(),
      'DistrictName' => array(),
      'BuildingCode' => array(),
      'BuildingName' => array(),
      'NumberTested' => array(),
      'allsubAverage' => array(),
      'allsubPercentMeeting' => array(),
      'readingAverage' => array(),
      'readingPercentMeeting' => array(),
      'mathAverage' => array(),
      'mathPercentMeeting' => array(),
      'englishAverage' => array(),
      'englishPercentMeeting' => array(),
      'scienceAverage' => array(),
      'sciencePercentMeeting' => array(),
      'writingAverage' => array(),
    ),
  );
  $export['act_2012'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Act 2013';
  $data_table->name = 'act_2013';
  $data_table->table_schema = array(
    'description' => 'ACT 2013 data',
    'fields' => array(
      'SchoolType' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'ISDName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'DistrictName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'BuildingCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'BuildingName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'NumberTested' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'allsubAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'allsubPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'readingAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'readingPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'mathAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'mathPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'englishAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'englishPercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'scienceAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'sciencePercentMeeting' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'default' => 0,
        'description' => '',
      ),
      'writingAverage' => array(
        'type' => 'float',
        'size' => 'normal',
        'precision' => '',
        'scale' => '',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'act_2013',
    'primary key' => array(
      0 => 'BuildingCode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'SchoolType' => array(),
      'ISDCode' => array(),
      'ISDName' => array(),
      'DistrictCode' => array(),
      'DistrictName' => array(),
      'BuildingCode' => array(),
      'BuildingName' => array(),
      'NumberTested' => array(),
      'allsubAverage' => array(),
      'allsubPercentMeeting' => array(),
      'readingAverage' => array(),
      'readingPercentMeeting' => array(),
      'mathAverage' => array(),
      'mathPercentMeeting' => array(),
      'englishAverage' => array(),
      'englishPercentMeeting' => array(),
      'scienceAverage' => array(),
      'sciencePercentMeeting' => array(),
      'writingAverage' => array(),
    ),
  );
  $export['act_2013'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Early Childhood Centers';
  $data_table->name = 'earlychild';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'BusinessName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'LicenseNumber' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => TRUE,
        'description' => '',
      ),
      'Address' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'City' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'ZipCode' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'LicenseType' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'County' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'SASRating' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SASStatus' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'PublishedRating' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Phone' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
        'unsigned' => FALSE,
      ),
      'Website' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
        'unsigned' => FALSE,
      ),
      'AgeFrom' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AgeTo' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MonthsOfOperation' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'SundayDayOpen' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'SundayDayClose' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'MondayDayOpen' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'MondayDayClose' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'TuesdayDayOpen' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'TuesdayDayClose' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'WednesdayDayOpen' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'WednesdayDayClose' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'ThursdayDayOpen' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'ThursdayDayClose' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'FridayDayOpen' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'FridayDayClose' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'SaturdayDayOpen' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'SaturdayDayClose' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'Transportation' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'Environment' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'Meals' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
        'unsigned' => FALSE,
      ),
      'Lat' => array(
        'type' => 'float',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Lon' => array(
        'type' => 'float',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCProviderID' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCLicensedDate' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCpts' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCptsStaff' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCptsFamily' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCptsAdmin' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCptsEnv' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCptsCurr' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCeligibility' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCspecial' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCsubsidy' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCcapacity' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCcontract' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCfee' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCemail' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCcontact' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCmessage' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCspecialty' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCschedule' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCsetting' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'GSCpaySchedule' => array(
        'type' => 'text',
        'size' => 'small',
        'not null' => FALSE,
        'description' => '',
      ),
      'InSiteVisitZone' => array(
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'id' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => FALSE,
      ),
    ),
    'name' => 'earlychild',
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'BusinessName' => array(
        'label' => 'BusinessName',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'LicenseNumber' => array(
        'label' => 'LicenseNumber',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'Address' => array(
        'label' => 'Address',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'City' => array(
        'label' => 'City',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'ZipCode' => array(
        'label' => 'ZipCode',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'LicenseType' => array(
        'label' => 'LicenseType',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'County' => array(
        'label' => 'County',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'SASRating' => array(
        'label' => 'SASRating',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'SASStatus' => array(
        'label' => 'SASStatus',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'PublishedRating' => array(
        'label' => 'PublishedRating',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'Phone' => array(
        'label' => 'Phone',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'Website' => array(
        'label' => 'Website',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'AgeFrom' => array(
        'label' => 'AgeFrom',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'AgeTo' => array(
        'label' => 'AgeTo',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'MonthsOfOperation' => array(
        'label' => 'MonthsOfOperation',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'SundayDayOpen' => array(
        'label' => 'SundayDayOpen',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'SundayDayClose' => array(
        'label' => 'SundayDayClose',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'MondayDayOpen' => array(
        'label' => 'MondayDayOpen',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'MondayDayClose' => array(
        'label' => 'MondayDayClose',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'TuesdayDayOpen' => array(
        'label' => 'TuesdayDayOpen',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'TuesdayDayClose' => array(
        'label' => 'TuesdayDayClose',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'WednesdayDayOpen' => array(
        'label' => 'WednesdayDayOpen',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'WednesdayDayClose' => array(
        'label' => 'WednesdayDayClose',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'ThursdayDayOpen' => array(
        'label' => 'ThursdayDayOpen',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'ThursdayDayClose' => array(
        'label' => 'ThursdayDayClose',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'FridayDayOpen' => array(
        'label' => 'FridayDayOpen',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'FridayDayClose' => array(
        'label' => 'FridayDayClose',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'SaturdayDayOpen' => array(
        'label' => 'SaturdayDayOpen',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'SaturdayDayClose' => array(
        'label' => 'SaturdayDayClose',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'Transportation' => array(
        'label' => 'Transportation',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'Environment' => array(
        'label' => 'Environment',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'Meals' => array(
        'label' => 'Meals',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'Lat' => array(
        'label' => 'Lat',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'Lon' => array(
        'label' => 'Lon',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCProviderID' => array(
        'label' => 'GSCProviderID',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCLicensedDate' => array(
        'label' => 'GSCLicensedDate',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCpts' => array(
        'label' => 'GSCpts',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCptsStaff' => array(
        'label' => 'GSCptsStaff',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCptsFamily' => array(
        'label' => 'GSCptsFamily',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCptsAdmin' => array(
        'label' => 'GSCptsAdmin',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCptsEnv' => array(
        'label' => 'GSCptsEnv',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCptsCurr' => array(
        'label' => 'GSCptsCurr',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCeligibility' => array(
        'label' => 'GSCeligibility',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCspecial' => array(
        'label' => 'GSCspecial',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument_string',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCsubsidy' => array(
        'label' => 'GSCsubsidy',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCcapacity' => array(
        'label' => 'GSCcapacity',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCcontract' => array(
        'label' => 'GSCcontract',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCfee' => array(
        'label' => 'GSCfee',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCemail' => array(
        'label' => 'GSCemail',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCcontact' => array(
        'label' => 'GSCcontact',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCmessage' => array(
        'label' => 'GSCmessage',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCspecialty' => array(
        'label' => 'GSCspecialty',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCschedule' => array(
        'label' => 'GSCschedule',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCsetting' => array(
        'label' => 'GSCsetting',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'GSCpaySchedule' => array(
        'label' => 'GSCpaySchedule',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'dummy' => array(
        'label' => 'dummy',
      ),
      'id' => array(
        'label' => 'id',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
    ),
  );
  $export['earlychild'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Esd hs 2013';
  $data_table->name = 'esd_hs_2013';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'buildingcode' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'buildingname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'SchoolCategory' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'entitytypename' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'entitycharteringagencyname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'entityactualgrades' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'total_enrollment' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act2_comp' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act2_comp_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act2_comp_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act2_pcr' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act2_pcr_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act2_pcr_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'gradrate' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'gradrate_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'gradrate_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'status_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'status_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'status_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'status_ltrgrade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'act_grwth' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'not null' => FALSE,
        'description' => '',
      ),
      'act_grwth_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act_grwth_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'progress_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'progress_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'progress_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'progress_ltrgrade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'site_s' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'site_s_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'site_s_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'net5e_1213' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'net5e_1213_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'net5e_1213_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_grwth' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_grwth_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_grwth_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'culture_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'culture_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'culture_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'culture_ltrgrade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'econdis_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'sped_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ell_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'studchrs' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'studchrs_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'fafsa_rate' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'fafsa_rate_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'total_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'turnaround_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'total_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'turnaround_psspts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'mature_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'turnaround_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'newschool_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'mature_ltrgrade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'turnaround_designation' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'newschool_designation' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'esd_hs_2013',
    'primary key' => array(
      0 => 'buildingcode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'buildingcode' => array(),
      'buildingname' => array(),
      'SchoolCategory' => array(),
      'entitytypename' => array(),
      'entitycharteringagencyname' => array(),
      'entityactualgrades' => array(),
      'total_enrollment' => array(),
      'act2_comp' => array(),
      'act2_comp_pts' => array(),
      'act2_comp_psspts' => array(),
      'act2_pcr' => array(),
      'act2_pcr_pts' => array(),
      'act2_pcr_psspts' => array(),
      'gradrate' => array(),
      'gradrate_pts' => array(),
      'gradrate_psspts' => array(),
      'status_pts' => array(),
      'status_psspts' => array(),
      'status_pct' => array(),
      'status_ltrgrade' => array(),
      'act_grwth' => array(),
      'act_grwth_pts' => array(),
      'act_grwth_psspts' => array(),
      'progress_pts' => array(),
      'progress_psspts' => array(),
      'progress_pct' => array(),
      'progress_ltrgrade' => array(),
      'site_s' => array(),
      'site_s_pts' => array(),
      'site_s_psspts' => array(),
      'net5e_1213' => array(),
      'net5e_1213_pts' => array(),
      'net5e_1213_psspts' => array(),
      'five_e_grwth' => array(),
      'five_e_grwth_pts' => array(),
      'five_e_grwth_psspts' => array(),
      'culture_pts' => array(),
      'culture_psspts' => array(),
      'culture_pct' => array(),
      'culture_ltrgrade' => array(),
      'econdis_pct' => array(),
      'sped_pct' => array(),
      'ell_pct' => array(),
      'studchrs' => array(),
      'studchrs_pts' => array(),
      'fafsa_rate' => array(),
      'fafsa_rate_pts' => array(),
      'total_pts' => array(),
      'turnaround_pts' => array(),
      'total_psspts' => array(),
      'turnaround_psspts' => array(),
      'mature_pct' => array(),
      'turnaround_pct' => array(),
      'newschool_pct' => array(),
      'mature_ltrgrade' => array(),
      'turnaround_designation' => array(),
      'newschool_designation' => array(),
    ),
  );
  $export['esd_hs_2013'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Esd k8 2013';
  $data_table->name = 'esd_k8_2013';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'buildingcode' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'buildingname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'SchoolCategory' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'entitytypename' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'entitycharteringagencyname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'entityactualgrades' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'total_enrollment' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_math' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_math_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_math_ptsps' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_ela' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_ela_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_ela_ptsps' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_other' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_other_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr2_other_ptsps' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pts_status' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ptspos_status' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'status_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'status_ltrgrade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'plc_comp' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'plc_comp_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'plc_comp_ptsps' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'bench_comp' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'bench_comp_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'bench_comp_ptsps' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pts_progress' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ptspos_progress' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'progress_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'progress_ltrgrade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'site_s' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'site_s_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'site_s_ptsps' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'net5e_1213' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'net5e_1213_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'net5e_1213_ptsps' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_grwth' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_grwth_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_grwth_ptsps' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pts_culture' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ptspos_culture' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'culture_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'culture_ltrgrade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'econdis_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'sped_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ell_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'studchrs' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'studchrs_pts' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pts_earned' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pts_possible' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'turnaround_pts_earned' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'turnaround_pts_possible' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'mature_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'turnaround_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'newschool_pct' => array(
        'type' => 'numeric',
        'size' => 'normal',
        'precision' => '16',
        'scale' => '8',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'mature_ltrgrade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'turnaround_designation' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'newschool_designation' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'esd_k8_2013',
    'primary key' => array(
      0 => 'buildingcode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'buildingcode' => array(),
      'buildingname' => array(),
      'SchoolCategory' => array(),
      'entitytypename' => array(),
      'entitycharteringagencyname' => array(),
      'entityactualgrades' => array(),
      'total_enrollment' => array(),
      'pr2_math' => array(),
      'pr2_math_pts' => array(),
      'pr2_math_ptsps' => array(),
      'pr2_ela' => array(),
      'pr2_ela_pts' => array(),
      'pr2_ela_ptsps' => array(),
      'pr2_other' => array(),
      'pr2_other_pts' => array(),
      'pr2_other_ptsps' => array(),
      'pts_status' => array(),
      'ptspos_status' => array(),
      'status_pct' => array(),
      'status_ltrgrade' => array(),
      'plc_comp' => array(),
      'plc_comp_pts' => array(),
      'plc_comp_ptsps' => array(),
      'bench_comp' => array(),
      'bench_comp_pts' => array(),
      'bench_comp_ptsps' => array(),
      'pts_progress' => array(),
      'ptspos_progress' => array(),
      'progress_pct' => array(),
      'progress_ltrgrade' => array(),
      'site_s' => array(),
      'site_s_pts' => array(),
      'site_s_ptsps' => array(),
      'net5e_1213' => array(),
      'net5e_1213_pts' => array(),
      'net5e_1213_ptsps' => array(),
      'five_e_grwth' => array(),
      'five_e_grwth_pts' => array(),
      'five_e_grwth_ptsps' => array(),
      'pts_culture' => array(),
      'ptspos_culture' => array(),
      'culture_pct' => array(),
      'culture_ltrgrade' => array(),
      'econdis_pct' => array(),
      'sped_pct' => array(),
      'ell_pct' => array(),
      'studchrs' => array(),
      'studchrs_pts' => array(),
      'pts_earned' => array(),
      'pts_possible' => array(),
      'turnaround_pts_earned' => array(),
      'turnaround_pts_possible' => array(),
      'mature_pct' => array(),
      'turnaround_pct' => array(),
      'newschool_pct' => array(),
      'mature_ltrgrade' => array(),
      'turnaround_designation' => array(),
      'newschool_designation' => array(),
    ),
  );
  $export['esd_k8_2013'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Five Essentials 2013';
  $data_table->name = 'fiveessentials_2013';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'BCODE' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'School_Name' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'School_Reporting_Slug' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'State_Schl_ID' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'District_Schl_ID' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'School_Level' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Student_Report' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Teacher_Report' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Student_Response_Rate' => array(
        'type' => 'float',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'Teacher_Response_Rate' => array(
        'type' => 'float',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'Student_Lazy_Rate' => array(
        'type' => 'float',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'Teacher_Lazy_Rate' => array(
        'type' => 'float',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'Student_N' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Teacher_N' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ACNO' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CLAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COLB' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COLR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DATA' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ENGG' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ENGL' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HUMR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'INFL' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'INST' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MATH' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OUTR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'PART' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'PEER' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'PERC' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'PGMC' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'PRES' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'PRT2' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'PRTI' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'QPD2' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'REFD' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SAFE' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SCMT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SDIS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SLAP' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SOCZ' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'STDY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TRPA' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TRPR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TRTE' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TRTS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TSAF' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'UEXP' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Category5E' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Net5e' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'E_leaders' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'E_teachers' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'E_families' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'E_environment' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'E_instruction' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'Location' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'fiveessentials_2013',
    'primary key' => array(
      0 => 'BCODE',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'ACNO' => array(
        'label' => 'Peer Support for Academic Work (Student)',
      ),
      'CLAR' => array(
        'label' => 'Course Clarity (Student)',
      ),
      'COLB' => array(
        'label' => 'Teacher Collaboration (Teacher)',
      ),
      'COLR' => array(
        'label' => 'Collective Responsibility (Teacher)',
      ),
      'DATA' => array(
        'label' => 'Collective Use of Assessment Data (Teacher)',
      ),
      'ENGG' => array(
        'label' => 'Academic Engagement (Student)',
      ),
      'ENGL' => array(
        'label' => 'English Instruction (Student)',
      ),
      'HUMR' => array(
        'label' => 'Human &amp; Social Resources in the Community (Student)',
      ),
      'INFL' => array(
        'label' => 'Teacher Influence (Teacher)',
      ),
      'INST' => array(
        'label' => 'Principal Instructional Leadership (Teacher)',
      ),
      'MATH' => array(
        'label' => 'Math Instruction (Student)',
      ),
      'OUTR' => array(
        'label' => 'Outreach to Parents (Teacher)',
      ),
      'PART' => array(
        'label' => 'Parent Involvement in School (Teacher)',
      ),
      'PEER' => array(
        'label' => 'Student Classroom Behavior (Student)',
      ),
      'PERC' => array(
        'label' => 'Academic Personalism (Student)',
      ),
      'PGMC' => array(
        'label' => 'Program Coherence (Teacher)',
      ),
      'PRES' => array(
        'label' => 'Academic Press (Student)',
      ),
      'PRTI' => array(
        'label' => 'Student Responsibility (Teacher)',
      ),
      'PSAA' => array(
        'label' => 'Peer Support for Academic Achievement (Student)',
      ),
      'QPD2' => array(
        'label' => 'Quality Professional Development (Teacher)',
      ),
      'REFD' => array(
        'label' => 'Reflective Dialogue (Teacher)',
      ),
      'SAFE' => array(
        'label' => 'Safety (Student)',
      ),
      'SCIE' => array(
        'label' => 'Inquiry-Based Science Instruction (Student)',
      ),
      'SCMT' => array(
        'label' => 'School Commitment (Teacher)',
      ),
      'SDIS' => array(
        'label' => 'Quality of Student Discussion (Teacher)',
      ),
      'SLAP' => array(
        'label' => 'School-Wide Future Orientation (Student)',
      ),
      'SOCZ' => array(
        'label' => 'Socialization of New Teachers (Teacher)',
      ),
      'STDY' => array(
        'label' => 'Rigorous Study Habits (Student)',
      ),
      'TRPA' => array(
        'label' => 'Teacher-Parent Trust (Teacher)',
      ),
      'TRPR' => array(
        'label' => 'Teacher-Principal Trust (Teacher)',
      ),
      'TRTE' => array(
        'label' => 'Teacher-Teacher Trust (Teacher)',
      ),
      'TRTS' => array(
        'label' => 'Student-Teacher Trust (Student)',
      ),
      'TSAF' => array(
        'label' => 'Teacher Safety (Teacher)',
      ),
      'TSUP' => array(
        'label' => 'Teacher Personal Support (Student)',
      ),
      'UEXP' => array(
        'label' => 'Expectations for Postsecondary Education (Student)',
      ),
      'School_Reporting_Slug' => array(
        'label' => '5Essentials Internal School Identifier',
      ),
      'State_Schl_ID' => array(
        'label' => 'School&#039;s State Identifier',
      ),
      'District_School_Id' => array(
        'label' => 'School ID provided by DPS or charter school network',
      ),
      'School_Level' => array(
        'label' => '1 or 2: 1 if elementary (PK-8) and 2 if high school',
      ),
      'Student_Report' => array(
        'label' => '0 or 1: 1 if eligible for student report',
      ),
      'Teacher_Report' => array(
        'label' => '0 or 1: 1 if eligible for teacher report',
      ),
      'Student_Response_Rate' => array(
        'label' => 'Response rate on student survey',
      ),
      'Teacher_Response_Rate' => array(
        'label' => 'Response rate on teacher survey',
      ),
      'Student_Lazy_Rate' => array(
        'label' => 'Percentage of &quot;lazy&quot; respondents for students',
      ),
      'Teacher_Lazy_Rate' => array(
        'label' => 'Percentage of &quot;lazy&quot; respondents for teachers',
      ),
      'Student_N' => array(
        'label' => 'Total number of students listed on roster',
      ),
      'Teacher_N' => array(
        'label' => 'Total number of teachers listed on roster',
      ),
      'Net5E' => array(
        'label' => 'Net 5Essentials Score (# strong - # weak)',
      ),
      'Category_5e' => array(
        'label' => 'Category of Improvement: Not Yet Organized: 1 Partially Organized: 2 Moderately Organized: 3 Organized: 4 Well Organized: 5',
      ),
      'E_leaders' => array(
        'label' => 'Essential: Effective Leaders',
      ),
      'E_teachers' => array(
        'label' => 'Essential: Collaborative Teachers',
      ),
      'E_families' => array(
        'label' => 'Essential: Involved Families',
      ),
      'E_environment' => array(
        'label' => 'Essential: Supportive Environment',
      ),
      'E_instruction' => array(
        'label' => 'Essential: Ambitious Instruction',
      ),
      'BCODE' => array(
        'label' => '',
      ),
      'District_Schl_ID' => array(
        'label' => '',
      ),
      'PRT2' => array(
        'label' => '',
      ),
      'Category5E' => array(
        'label' => '',
      ),
      'Net5e' => array(
        'label' => '',
      ),
      'School_Name' => array(
        'label' => '',
      ),
      'Location' => array(
        'label' => 'School Address',
      ),
    ),
  );
  $export['fiveessentials_2013'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'MEAP 2009';
  $data_table->name = 'meap_2009';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'SchoolYear' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDCode' => array(
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'BuildingCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'BuildingName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'LOCALE_NAME' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'TOTAL_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MALE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'FEMALE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AMERICAN_INDIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ASIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AFRICAN_AMERICAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HISPANIC_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HAWAIIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'WHITE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TWO_OR_MORE_RACES_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'KINDERGARTEN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_1_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_2_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_10_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_12_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SPECIAL_EDUCATION_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HOMELESS_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MIGRANT_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AYP_STATUS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AYP_PHASE' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ENGLISH_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SORT_ORDER' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'meap_2009',
    'primary key' => array(
      0 => 'BuildingCode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'SchoolYear' => array(
        'label' => '',
      ),
      'ISDCode' => array(
        'label' => '',
      ),
      'ISDName' => array(
        'label' => '',
      ),
      'DistrictCode' => array(
        'label' => '',
      ),
      'DistrictName' => array(
        'label' => '',
      ),
      'BuildingCode' => array(
        'label' => 'bcode',
      ),
      'BuildingName' => array(
        'label' => '',
      ),
      'LOCALE_NAME' => array(
        'label' => '',
      ),
      'TOTAL_ENROLLMENT' => array(
        'label' => '',
      ),
      'MALE_ENROLLMENT' => array(
        'label' => '',
      ),
      'FEMALE_ENROLLMENT' => array(
        'label' => '',
      ),
      'AMERICAN_INDIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'ASIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'AFRICAN_AMERICAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'HISPANIC_ENROLLMENT' => array(
        'label' => '',
      ),
      'HAWAIIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'WHITE_ENROLLMENT' => array(
        'label' => '',
      ),
      'TWO_OR_MORE_RACES_ENROLLMENT' => array(
        'label' => '',
      ),
      'KINDERGARTEN_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_1_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_2_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_3_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_4_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_5_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_6_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_7_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_8_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_9_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_10_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_11_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_12_ENROLLMENT' => array(
        'label' => '',
      ),
      'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
        'label' => '',
      ),
      'SPECIAL_EDUCATION_ENROLLMENT' => array(
        'label' => '',
      ),
      'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
        'label' => '',
      ),
      'HOMELESS_ENROLLMENT' => array(
        'label' => '',
      ),
      'MIGRANT_ENROLLMENT' => array(
        'label' => '',
      ),
      'AYP_STATUS' => array(
        'label' => '',
      ),
      'AYP_PHASE' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_3_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_3_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_3_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_4_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_4_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_4_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_7_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_7_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_7_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_READING_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_ENGLISH_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
        'label' => '',
      ),
      'COHORT_4_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_4_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_4_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_4_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_4_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_4_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_4_YEAR' => array(
        'label' => '',
      ),
      'COHORT_5_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_5_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_5_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_5_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_5_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_5_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_5_YEAR' => array(
        'label' => '',
      ),
      'COHORT_6_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_6_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_6_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_6_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_6_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_6_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_6_YEAR' => array(
        'label' => '',
      ),
      'SORT_ORDER' => array(
        'label' => '',
      ),
    ),
  );
  $export['meap_2009'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'MEAP 2010';
  $data_table->name = 'meap_2010';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'SchoolYear' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDCode' => array(
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'BuildingCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'BuildingName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'LOCALE_NAME' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'TOTAL_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MALE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'FEMALE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AMERICAN_INDIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ASIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AFRICAN_AMERICAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HISPANIC_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HAWAIIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'WHITE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TWO_OR_MORE_RACES_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'KINDERGARTEN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_1_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_2_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_10_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_12_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SPECIAL_EDUCATION_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HOMELESS_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MIGRANT_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AYP_STATUS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AYP_PHASE' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ENGLISH_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SORT_ORDER' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'meap_2010',
    'primary key' => array(
      0 => 'BuildingCode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'SchoolYear' => array(
        'label' => '',
      ),
      'ISDCode' => array(
        'label' => '',
      ),
      'ISDName' => array(
        'label' => '',
      ),
      'DistrictCode' => array(
        'label' => '',
      ),
      'DistrictName' => array(
        'label' => '',
      ),
      'BuildingCode' => array(
        'label' => 'bcode',
      ),
      'BuildingName' => array(
        'label' => '',
      ),
      'LOCALE_NAME' => array(
        'label' => '',
      ),
      'TOTAL_ENROLLMENT' => array(
        'label' => '',
      ),
      'MALE_ENROLLMENT' => array(
        'label' => '',
      ),
      'FEMALE_ENROLLMENT' => array(
        'label' => '',
      ),
      'AMERICAN_INDIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'ASIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'AFRICAN_AMERICAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'HISPANIC_ENROLLMENT' => array(
        'label' => '',
      ),
      'HAWAIIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'WHITE_ENROLLMENT' => array(
        'label' => '',
      ),
      'TWO_OR_MORE_RACES_ENROLLMENT' => array(
        'label' => '',
      ),
      'KINDERGARTEN_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_1_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_2_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_3_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_4_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_5_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_6_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_7_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_8_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_9_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_10_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_11_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_12_ENROLLMENT' => array(
        'label' => '',
      ),
      'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
        'label' => '',
      ),
      'SPECIAL_EDUCATION_ENROLLMENT' => array(
        'label' => '',
      ),
      'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
        'label' => '',
      ),
      'HOMELESS_ENROLLMENT' => array(
        'label' => '',
      ),
      'MIGRANT_ENROLLMENT' => array(
        'label' => '',
      ),
      'AYP_STATUS' => array(
        'label' => '',
      ),
      'AYP_PHASE' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_3_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_3_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_3_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_4_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_4_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_4_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_7_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_7_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_7_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_READING_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_ENGLISH_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
        'label' => '',
      ),
      'COHORT_4_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_4_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_4_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_4_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_4_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_4_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_4_YEAR' => array(
        'label' => '',
      ),
      'COHORT_5_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_5_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_5_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_5_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_5_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_5_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_5_YEAR' => array(
        'label' => '',
      ),
      'COHORT_6_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_6_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_6_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_6_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_6_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_6_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_6_YEAR' => array(
        'label' => '',
      ),
      'SORT_ORDER' => array(
        'label' => '',
      ),
    ),
  );
  $export['meap_2010'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'MEAP 2011';
  $data_table->name = 'meap_2011';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'SchoolYear' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDCode' => array(
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'BuildingCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'BuildingName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'LOCALE_NAME' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'TOTAL_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MALE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'FEMALE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AMERICAN_INDIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ASIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AFRICAN_AMERICAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HISPANIC_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HAWAIIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'WHITE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TWO_OR_MORE_RACES_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'KINDERGARTEN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_1_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_2_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_10_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_12_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SPECIAL_EDUCATION_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HOMELESS_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MIGRANT_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AYP_STATUS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AYP_PHASE' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ENGLISH_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SORT_ORDER' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'meap_2011',
    'primary key' => array(
      0 => 'BuildingCode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'SchoolYear' => array(
        'label' => '',
      ),
      'ISDCode' => array(
        'label' => '',
      ),
      'ISDName' => array(
        'label' => '',
      ),
      'DistrictCode' => array(
        'label' => '',
      ),
      'DistrictName' => array(
        'label' => '',
      ),
      'BuildingCode' => array(
        'label' => 'bcode',
      ),
      'BuildingName' => array(
        'label' => '',
      ),
      'LOCALE_NAME' => array(
        'label' => '',
      ),
      'TOTAL_ENROLLMENT' => array(
        'label' => '',
      ),
      'MALE_ENROLLMENT' => array(
        'label' => '',
      ),
      'FEMALE_ENROLLMENT' => array(
        'label' => '',
      ),
      'AMERICAN_INDIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'ASIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'AFRICAN_AMERICAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'HISPANIC_ENROLLMENT' => array(
        'label' => '',
      ),
      'HAWAIIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'WHITE_ENROLLMENT' => array(
        'label' => '',
      ),
      'TWO_OR_MORE_RACES_ENROLLMENT' => array(
        'label' => '',
      ),
      'KINDERGARTEN_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_1_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_2_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_3_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_4_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_5_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_6_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_7_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_8_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_9_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_10_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_11_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_12_ENROLLMENT' => array(
        'label' => '',
      ),
      'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
        'label' => '',
      ),
      'SPECIAL_EDUCATION_ENROLLMENT' => array(
        'label' => '',
      ),
      'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
        'label' => '',
      ),
      'HOMELESS_ENROLLMENT' => array(
        'label' => '',
      ),
      'MIGRANT_ENROLLMENT' => array(
        'label' => '',
      ),
      'AYP_STATUS' => array(
        'label' => '',
      ),
      'AYP_PHASE' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_3_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_3_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_3_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_4_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_4_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_4_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_7_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_7_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_7_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_READING_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_ENGLISH_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
        'label' => '',
      ),
      'COHORT_4_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_4_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_4_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_4_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_4_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_4_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_4_YEAR' => array(
        'label' => '',
      ),
      'COHORT_5_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_5_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_5_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_5_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_5_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_5_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_5_YEAR' => array(
        'label' => '',
      ),
      'COHORT_6_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_6_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_6_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_6_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_6_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_6_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_6_YEAR' => array(
        'label' => '',
      ),
      'SORT_ORDER' => array(
        'label' => '',
      ),
    ),
  );
  $export['meap_2011'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'MEAP 2012';
  $data_table->name = 'meap_2012';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'SchoolYear' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDCode' => array(
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ISDName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'DistrictName' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'BuildingCode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'BuildingName' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'LOCALE_NAME' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'TOTAL_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MALE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'FEMALE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AMERICAN_INDIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ASIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AFRICAN_AMERICAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HISPANIC_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HAWAIIAN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'WHITE_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'TWO_OR_MORE_RACES_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'KINDERGARTEN_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_1_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_2_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_10_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_12_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SPECIAL_EDUCATION_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'HOMELESS_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'MIGRANT_ENROLLMENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AYP_STATUS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'AYP_PHASE' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_3_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_4_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_7_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_5_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_8_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_WRITING_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_MATH_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_READING_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_SCIENCE_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ENGLISH_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_5_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'COHORT_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATION_RATE_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUT_RATE_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'GRADUATES_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'DROPOUTS_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'CONTINUING_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'OTHER_COMPLETER_6_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'SORT_ORDER' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'meap_2012',
    'primary key' => array(
      0 => 'BuildingCode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'SchoolYear' => array(
        'label' => '',
      ),
      'ISDCode' => array(
        'label' => '',
      ),
      'ISDName' => array(
        'label' => '',
      ),
      'DistrictCode' => array(
        'label' => '',
      ),
      'DistrictName' => array(
        'label' => '',
      ),
      'BuildingCode' => array(
        'label' => 'bcode',
      ),
      'BuildingName' => array(
        'label' => '',
      ),
      'LOCALE_NAME' => array(
        'label' => '',
      ),
      'TOTAL_ENROLLMENT' => array(
        'label' => '',
      ),
      'MALE_ENROLLMENT' => array(
        'label' => '',
      ),
      'FEMALE_ENROLLMENT' => array(
        'label' => '',
      ),
      'AMERICAN_INDIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'ASIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'AFRICAN_AMERICAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'HISPANIC_ENROLLMENT' => array(
        'label' => '',
      ),
      'HAWAIIAN_ENROLLMENT' => array(
        'label' => '',
      ),
      'WHITE_ENROLLMENT' => array(
        'label' => '',
      ),
      'TWO_OR_MORE_RACES_ENROLLMENT' => array(
        'label' => '',
      ),
      'KINDERGARTEN_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_1_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_2_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_3_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_4_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_5_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_6_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_7_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_8_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_9_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_10_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_11_ENROLLMENT' => array(
        'label' => '',
      ),
      'GRADE_12_ENROLLMENT' => array(
        'label' => '',
      ),
      'ECONOMIC_DISADVANTAGED_ENROLLMENT' => array(
        'label' => '',
      ),
      'SPECIAL_EDUCATION_ENROLLMENT' => array(
        'label' => '',
      ),
      'ENGLISH_LANGUAGE_LEARNERS_ENROLLMENT' => array(
        'label' => '',
      ),
      'HOMELESS_ENROLLMENT' => array(
        'label' => '',
      ),
      'MIGRANT_ENROLLMENT' => array(
        'label' => '',
      ),
      'AYP_STATUS' => array(
        'label' => '',
      ),
      'AYP_PHASE' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_3_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_4_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_7_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_3_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_3_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_3_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_4_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_4_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_4_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_7_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_7_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_7_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_5_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_8_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_6_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_9_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_READING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_READING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_READING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_WRITING_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_TESTED' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_PROFICIENT' => array(
        'label' => '',
      ),
      'GRADE_11_SOCIAL_STUDIES_AVG_SS' => array(
        'label' => '',
      ),
      'GRADE_11_MATH_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_READING_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_SCIENCE_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_ENGLISH_PERCENT_READY' => array(
        'label' => '',
      ),
      'GRADE_11_ALL_SUBJECT_PERCENT_READY' => array(
        'label' => '',
      ),
      'COHORT_4_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_4_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_4_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_4_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_4_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_4_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_4_YEAR' => array(
        'label' => '',
      ),
      'COHORT_5_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_5_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_5_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_5_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_5_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_5_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_5_YEAR' => array(
        'label' => '',
      ),
      'COHORT_6_YEAR' => array(
        'label' => '',
      ),
      'GRADUATION_RATE_6_YEAR' => array(
        'label' => '',
      ),
      'DROPOUT_RATE_6_YEAR' => array(
        'label' => '',
      ),
      'GRADUATES_6_YEAR' => array(
        'label' => '',
      ),
      'DROPOUTS_6_YEAR' => array(
        'label' => '',
      ),
      'CONTINUING_6_YEAR' => array(
        'label' => '',
      ),
      'OTHER_COMPLETER_6_YEAR' => array(
        'label' => '',
      ),
      'SORT_ORDER' => array(
        'label' => '',
      ),
    ),
  );
  $export['meap_2012'] = $data_table;

  return $export;
}
