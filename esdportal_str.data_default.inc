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
  $data_table->title = 'ESD Highschool 2013 Data';
  $data_table->name = 'esd_hs_2013';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'buildingcode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'practicalschoolname' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'technicalschoolname' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'isdcode' => array(
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'isdname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'districtcode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'districtname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'buildingname' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'total_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'total_credit_fixed' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'total_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'total_gpa' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'total_gpa_fixed' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'cumulative_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'act1_comp_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act1_comp_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'act1_comp_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act1_comp_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'act1_comp_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'act1_pcr_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act1_pcr_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'act1_pcr_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act1_pcr_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'act1_pcr_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'act3_comp_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act3_comp_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'act3_comp_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act3_comp_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'act3_comp_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'act3_pcr_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act3_pcr_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'act3_pcr_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'act3_pcr_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'act3_pcr_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'gradrate_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'gradrate_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'gradrate_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'gradrate_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'gradrate_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'cer_raw_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'cer_raw_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'cer_raw_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'cer_raw_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'cer_raw_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_comp_raw_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_comp_raw_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_comp_raw_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_comp_raw_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_comp_raw_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_pcr_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_pcr_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_pcr_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_pcr_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_pcr_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_gradrate_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_gradrate_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_gradrate_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_gradrate_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_gradrate_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_cer_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_cer_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_cer_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_cer_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_cer_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_hel_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_hel_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_hel_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_hel_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_hel_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_pcr_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_pcr_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_pcr_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_pcr_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_pcr_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_scle_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_scle_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_scle_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_scle_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_scle_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'five_e_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'five_e_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'attend_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'attend_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'attend_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'attend_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'attend_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'focus_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'focus_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'focus_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'focus_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'focus_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'truancy_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'truancy_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'truancy_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'truancy_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'truancy_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'ret_yoy_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_yoy_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_yoy_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_yoy_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'ret_yoy_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'ret_stf_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_stf_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_stf_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_stf_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'ret_stf_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'fafsa_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'fafsa_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'fafsa_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'fafsa_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'fafsa_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
    'name' => 'esd_hs_2013',
    'primary key' => array(
      0 => 'buildingcode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(),
  );
  $export['esd_hs_2013'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'ESD K8 2013 Data';
  $data_table->name = 'esd_k8_2013';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'buildingcode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
      ),
      'buildingname' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'isdcode' => array(
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'isdname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'districtname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'districtcode' => array(
        'type' => 'int',
        'size' => 'medium',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'total_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'total_credit_fixed' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'total_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'total_gpa' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'total_gpa_fixed' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'cumulative_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_reading_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_reading_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_reading_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_reading_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr1_reading_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr1_math_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_math_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_math_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_math_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr1_math_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr1_other_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_other_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_other_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr1_other_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr1_other_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr3_reading_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_reading_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_reading_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_reading_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr3_reading_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr3_math_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_math_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_math_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_math_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr3_math_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr3_other_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_other_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_other_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'pr3_other_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'pr3_other_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_reading_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_reading_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_reading_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_reading_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_reading_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'plci_reading_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'plci_reading_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'plci_reading_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'plci_reading_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'plci_reading_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'nwea1_reading_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea1_reading_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea1_reading_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea1_reading_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'nwea1_reading_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'nwea3_reading_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea3_reading_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea3_reading_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea3_reading_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'nwea3_reading_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_math_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_math_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_math_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'prog_math_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'prog_math_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'plci_math_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'plci_math_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'plci_math_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'plci_math_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'plci_math_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'nwea1_math_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea1_math_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea1_math_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea1_math_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'nwea1_math_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'nwea3_math_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea3_math_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea3_math_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'nwea3_math_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'nwea3_math_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'five_e_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'five_e_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'five_e_trend_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_trend_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_trend_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_e_trend_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'five_e_trend_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_scle_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_scle_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_scle_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_scle_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_scle_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_hel_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_hel_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_hel_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_hel_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_hel_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_pcr_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_pcr_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_pcr_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'csv_pcr_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'csv_pcr_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'attend_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'attend_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'attend_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'attend_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'attend_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'truancy_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'truancy_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'truancy_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'truancy_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'truancy_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'ret_yoy_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_yoy_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_yoy_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_yoy_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'ret_yoy_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'ret_stf_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_stf_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_stf_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'ret_stf_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'ret_stf_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'focus_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'focus_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'focus_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'focus_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'focus_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'five_domain_raw' => array(
        'type' => 'float',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_domain_grade' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'five_domain_gradeval' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'five_domain_credit' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'five_domain_points' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
    'name' => 'esd_k8_2013',
    'primary key' => array(
      0 => 'buildingcode',
    ),
  );
  $data_table->meta = array(
    'fields' => array(),
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
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'Teacher_Response_Rate' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'Student_Lazy_Rate' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'Teacher_Lazy_Rate' => array(
        'type' => 'numeric',
        'precision' => 8,
        'scale' => 2,
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'CONTINUING_4_YEAR' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
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
      'School_Name' => array(
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
        'label' => 'Human & Social Resources in the Community (Student)',
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
        'label' => 'School\'s State Identifier',
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
        'label' => 'Response rate on teacher survey',
      ),
      'Teacher_Response_Rate' => array(
        'label' => 'Response rate on teacher survey',
      ),
      'Student_Lazy_Rate' => array(
        'label' => 'Percentage of "lazy" respondents for students',
      ),
      'Teacher_Lazy_Rate' => array(
        'label' => 'Percentage of "lazy" respondents for teachers',
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
