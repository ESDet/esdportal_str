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
        'not null' => FALSE,
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
