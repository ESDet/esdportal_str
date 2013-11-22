<?php
/**
 * @file
 * esdportal_str.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function esdportal_str_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-2013_k8_score-body'
  $field_instances['node-2013_k8_score-body'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-2013_k8_score-field_bcode'
  $field_instances['node-2013_k8_score-field_bcode'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcode',
    'label' => 'Building code',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-2013_k8_score-field_bname'
  $field_instances['node-2013_k8_score-field_bname'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bname',
    'label' => 'Building name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-2013_k8_score-field_pr1_reading_credit'
  $field_instances['node-2013_k8_score-field_pr1_reading_credit'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pr1_reading_credit',
    'label' => 'pr1_reading_credit',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-2013_k8_score-field_pr1_reading_grade'
  $field_instances['node-2013_k8_score-field_pr1_reading_grade'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pr1_reading_grade',
    'label' => 'pr1_reading_grade',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-2013_k8_score-field_pr1_reading_gradeval'
  $field_instances['node-2013_k8_score-field_pr1_reading_gradeval'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pr1_reading_gradeval',
    'label' => 'pr1_reading_gradeval',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-2013_k8_score-field_pr1_reading_raw'
  $field_instances['node-2013_k8_score-field_pr1_reading_raw'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pr1_reading_raw',
    'label' => 'pr1_reading_raw',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-2013_k8_score-field_pr1_reading_score'
  $field_instances['node-2013_k8_score-field_pr1_reading_score'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pr1_reading_score',
    'label' => 'pr1_reading_score',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-2013_k8_score-field_pr1_reading_scoremax'
  $field_instances['node-2013_k8_score-field_pr1_reading_scoremax'] = array(
    'bundle' => '2013_k8_score',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pr1_reading_scoremax',
    'label' => 'pr1_reading_scoremax',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_after_school_transportatio'
  $field_instances['node-school_profile-field_after_school_transportatio'] = array(
    'bundle' => 'school_profile',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Do you offer transportation for after-school programming?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_after_school_transportatio',
    'label' => 'After School Transportation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_ap_classes'
  $field_instances['node-school_profile-field_ap_classes'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please check all AP classes offered (HS only)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ap_classes',
    'label' => 'AP Classes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_character_development'
  $field_instances['node-school_profile-field_character_development'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What school-wide programs that support character development do you have?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_character_development',
    'label' => 'Character Development',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_college_counseling'
  $field_instances['node-school_profile-field_college_counseling'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please describe the college counseling offered to students.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_college_counseling',
    'label' => 'College Counseling',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_counselor_student_ratio'
  $field_instances['node-school_profile-field_counselor_student_ratio'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is your counselor-to-student ratio?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_counselor_student_ratio',
    'label' => 'Counselor/Student Ratio',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_discipline_programs'
  $field_instances['node-school_profile-field_discipline_programs'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What school-wide discipline programs do you have? Or, how do you handle discipline at your school?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_discipline_programs',
    'label' => 'Discipline Programs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_dual_enrollment'
  $field_instances['node-school_profile-field_dual_enrollment'] = array(
    'bundle' => 'school_profile',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Do you offer dual enrollment?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dual_enrollment',
    'label' => 'Dual Enrollment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_dual_enrollment_institutio'
  $field_instances['node-school_profile-field_dual_enrollment_institutio'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If your school offers dual enrollment, with which institutions?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dual_enrollment_institutio',
    'label' => 'Dual Enrollment Institutions',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_early_child_center_relatio'
  $field_instances['node-school_profile-field_early_child_center_relatio'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you have relationships with early child centers, please list which ones.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_early_child_center_relatio',
    'label' => 'Early Child Center Relationships',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_early_childhood_programs'
  $field_instances['node-school_profile-field_early_childhood_programs'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Do you offer early childhood programs? If so, please select the years covered by your program.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_early_childhood_programs',
    'label' => 'Early Childhood Programs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_early_childhood_transition'
  $field_instances['node-school_profile-field_early_childhood_transition'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What do you do to transition children from early childhood programs?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_early_childhood_transition',
    'label' => 'Early Childhood Transition',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_email'
  $field_instances['node-school_profile-field_email'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_english_language_learners'
  $field_instances['node-school_profile-field_english_language_learners'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What supports are in place for English Language Learners?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_english_language_learners',
    'label' => 'English Language Learners',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_family_supports'
  $field_instances['node-school_profile-field_family_supports'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What resources or supports do you offer families?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_family_supports',
    'label' => 'Family Supports',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_grades_served'
  $field_instances['node-school_profile-field_grades_served'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_grades_served',
    'label' => 'Grades Served',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_in_school_programs'
  $field_instances['node-school_profile-field_in_school_programs'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What programs are in place (during school hours) to support your regular curriculum? Please add one per text field and use the "add more" button for each new entry.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_in_school_programs',
    'label' => 'In-School Programs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_organized_sports'
  $field_instances['node-school_profile-field_organized_sports'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please list the school\'s organized sports offerings.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organized_sports',
    'label' => 'Organized Sports',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_parent_supports'
  $field_instances['node-school_profile-field_parent_supports'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What opportunities do you offer for parents to be involved during or after school?  What time are parent meetings?  What decision-making opportunities are there for parents?  Are there classes for parents?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_parent_supports',
    'label' => 'Parent Supports',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_person_responsible'
  $field_instances['node-school_profile-field_person_responsible'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Who is responsible for community partnerships and after-school programs at your school?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_responsible',
    'label' => 'Person Responsible',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_photos'
  $field_instances['node-school_profile-field_photos'] = array(
    'bundle' => 'school_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photos',
    'label' => 'Photos',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_school'
  $field_instances['node-school_profile-field_school'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_school',
    'label' => 'School',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_school_contact_first_name'
  $field_instances['node-school_profile-field_school_contact_first_name'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_school_contact_first_name',
    'label' => 'School Contact First Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_school_contact_last_name'
  $field_instances['node-school_profile-field_school_contact_last_name'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_school_contact_last_name',
    'label' => 'School Contact Last Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_site_visit_status'
  $field_instances['node-school_profile-field_site_visit_status'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_site_visit_status',
    'label' => 'Site visit status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_special_needs'
  $field_instances['node-school_profile-field_special_needs'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What supports are in place for students with special needs?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_special_needs',
    'label' => 'Special Needs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_special_tracks'
  $field_instances['node-school_profile-field_special_tracks'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Do you have linked learning or special tracks? If so, please describe.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_special_tracks',
    'label' => 'Special Tracks',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_student_development_progra'
  $field_instances['node-school_profile-field_student_development_progra'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please list student development programs available during school hours.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_student_development_progra',
    'label' => 'Student Development Programs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_student_leadership_opportu'
  $field_instances['node-school_profile-field_student_leadership_opportu'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please list the leadership opportunities available for students.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_student_leadership_opportu',
    'label' => 'Student Leadership Opportunities',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-school_profile-field_transportation'
  $field_instances['node-school_profile-field_transportation'] = array(
    'bundle' => 'school_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What transportation options are available for before and after the regular school day?  How do you determine eligibility?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_transportation',
    'label' => 'Transportation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_2011_pct_det_res'
  $field_instances['taxonomy_term-schools-field_2011_pct_det_res'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_2011_pct_det_res',
    'label' => '2011 Percent Detroit resident',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_2013_site_visit_date'
  $field_instances['taxonomy_term-schools-field_2013_site_visit_date'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_2013_site_visit_date',
    'label' => '2013 site visit date',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_5e_roster'
  $field_instances['taxonomy_term-schools-field_5e_roster'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_5e_roster',
    'label' => '5E roster',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_address'
  $field_instances['taxonomy_term-schools-field_address'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'element_key' => 'taxonomy_term|schools|field_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => 'Detroit',
        'administrative_area' => 'MI',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'phone' => 'phone',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_alternative_school'
  $field_instances['taxonomy_term-schools-field_alternative_school'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_alternative_school',
    'label' => 'Alternative School',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_authorized_grades'
  $field_instances['taxonomy_term-schools-field_authorized_grades'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_authorized_grades',
    'label' => 'Authorized grades',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_authorizer'
  $field_instances['taxonomy_term-schools-field_authorizer'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_authorizer',
    'label' => 'Authorizer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_bcode'
  $field_instances['taxonomy_term-schools-field_bcode'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_bcode',
    'label' => 'Building code',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_career_technical_emphasis'
  $field_instances['taxonomy_term-schools-field_career_technical_emphasis'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_career_technical_emphasis',
    'label' => 'Career Technical Emphasis',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_district'
  $field_instances['taxonomy_term-schools-field_district'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_district',
    'label' => 'District',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_email'
  $field_instances['taxonomy_term-schools-field_email'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_files'
  $field_instances['taxonomy_term-schools-field_files'] = array(
    'bundle' => 'schools',
    'deleted' => 0,
    'description' => 'Provide file resources to display alongside school information.',
    'display' => array(
      'aside' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_files',
    'label' => 'Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf xls odf odt ods doc docx rtf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_geo'
  $field_instances['taxonomy_term-schools-field_geo'] = array(
    'bundle' => 'schools',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_geo',
    'label' => 'geo',
    'required' => 0,
    'settings' => array(
      'local_solr' => array(
        'enabled' => FALSE,
        'lat_field' => 'lat',
        'lng_field' => 'lng',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geocoder',
      'settings' => array(
        'delta_handling' => 'm_to_s',
        'geocoder_field' => 'field_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
      ),
      'type' => 'geocoder',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_governance'
  $field_instances['taxonomy_term-schools-field_governance'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_governance',
    'label' => 'Governance',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_grdataletter'
  $field_instances['taxonomy_term-schools-field_grdataletter'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_grdataletter',
    'label' => 'grDataLetter',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_grdatatype'
  $field_instances['taxonomy_term-schools-field_grdatatype'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_grdatatype',
    'label' => 'grDataType',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_links'
  $field_instances['taxonomy_term-schools-field_links'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide links to external resources to display alongside school information.',
    'display' => array(
      'aside' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'rel_remove_internal',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_loc_email'
  $field_instances['taxonomy_term-schools-field_loc_email'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_loc_email',
    'label' => 'Email from old location field',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_operator'
  $field_instances['taxonomy_term-schools-field_operator'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_operator',
    'label' => 'Operator',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_opted_in'
  $field_instances['taxonomy_term-schools-field_opted_in'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_opted_in',
    'label' => 'Opted in?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_school_scorecard_status'
  $field_instances['taxonomy_term-schools-field_school_scorecard_status'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_school_scorecard_status',
    'label' => 'School Scorecard status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_school_status'
  $field_instances['taxonomy_term-schools-field_school_status'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_school_status',
    'label' => 'School status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_school_type'
  $field_instances['taxonomy_term-schools-field_school_type'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_school_type',
    'label' => 'School type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_scorecard_display'
  $field_instances['taxonomy_term-schools-field_scorecard_display'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_scorecard_display',
    'label' => 'Scorecard Display',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_special_ed_emphasis'
  $field_instances['taxonomy_term-schools-field_special_ed_emphasis'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_special_ed_emphasis',
    'label' => 'Special Ed Emphasis',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_specialty_school'
  $field_instances['taxonomy_term-schools-field_specialty_school'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_specialty_school',
    'label' => 'Specialty School',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_state_status'
  $field_instances['taxonomy_term-schools-field_state_status'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_state_status',
    'label' => 'State status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_strict_discipline_academy'
  $field_instances['taxonomy_term-schools-field_strict_discipline_academy'] = array(
    'bundle' => 'schools',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_strict_discipline_academy',
    'label' => 'Strict Discipline Academy',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'taxonomy_term-schools-field_superintendents'
  $field_instances['taxonomy_term-schools-field_superintendents'] = array(
    'bundle' => 'schools',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one or many users who should see school profiles (or other data) listed on their dashboard.',
    'display' => array(
      'aside' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_superintendents',
    'label' => 'Superintendents',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'user-user-field_fname'
  $field_instances['user-user-field_fname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_fname',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'user-user-field_lname'
  $field_instances['user-user-field_lname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_lname',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('2011 Percent Detroit resident');
  t('2013 site visit date');
  t('5E roster');
  t('AP Classes');
  t('Address');
  t('After School Transportation');
  t('Alternative School');
  t('Authorized grades');
  t('Authorizer');
  t('Body');
  t('Building code');
  t('Building name');
  t('Career Technical Emphasis');
  t('Character Development');
  t('College Counseling');
  t('Counselor/Student Ratio');
  t('Discipline Programs');
  t('District');
  t('Do you have linked learning or special tracks? If so, please describe.');
  t('Do you offer dual enrollment?');
  t('Do you offer early childhood programs? If so, please select the years covered by your program.');
  t('Do you offer transportation for after-school programming?');
  t('Dual Enrollment');
  t('Dual Enrollment Institutions');
  t('Early Child Center Relationships');
  t('Early Childhood Programs');
  t('Early Childhood Transition');
  t('Email');
  t('Email from old location field');
  t('English Language Learners');
  t('Enter one or many users who should see school profiles (or other data) listed on their dashboard.');
  t('Family Supports');
  t('Files');
  t('First Name');
  t('Governance');
  t('Grades Served');
  t('If you have relationships with early child centers, please list which ones.');
  t('If your school offers dual enrollment, with which institutions?');
  t('In-School Programs');
  t('Last Name');
  t('Links');
  t('Operator');
  t('Opted in?');
  t('Organized Sports');
  t('Parent Supports');
  t('Person Responsible');
  t('Photos');
  t('Please check all AP classes offered (HS only)');
  t('Please describe the college counseling offered to students.');
  t('Please list student development programs available during school hours.');
  t('Please list the leadership opportunities available for students.');
  t('Please list the school\'s organized sports offerings.');
  t('Provide file resources to display alongside school information.');
  t('Provide links to external resources to display alongside school information.');
  t('School');
  t('School Contact First Name');
  t('School Contact Last Name');
  t('School Scorecard status');
  t('School status');
  t('School type');
  t('Scorecard Display');
  t('Site visit status');
  t('Special Ed Emphasis');
  t('Special Needs');
  t('Special Tracks');
  t('Specialty School');
  t('State status');
  t('Strict Discipline Academy');
  t('Student Development Programs');
  t('Student Leadership Opportunities');
  t('Superintendents');
  t('Transportation');
  t('What do you do to transition children from early childhood programs?');
  t('What is your counselor-to-student ratio?');
  t('What opportunities do you offer for parents to be involved during or after school?  What time are parent meetings?  What decision-making opportunities are there for parents?  Are there classes for parents?');
  t('What programs are in place (during school hours) to support your regular curriculum? Please add one per text field and use the "add more" button for each new entry.');
  t('What resources or supports do you offer families?');
  t('What school-wide discipline programs do you have? Or, how do you handle discipline at your school?');
  t('What school-wide programs that support character development do you have?');
  t('What supports are in place for English Language Learners?');
  t('What supports are in place for students with special needs?');
  t('What transportation options are available for before and after the regular school day?  How do you determine eligibility?');
  t('Who is responsible for community partnerships and after-school programs at your school?');
  t('geo');
  t('grDataLetter');
  t('grDataType');
  t('pr1_reading_credit');
  t('pr1_reading_grade');
  t('pr1_reading_gradeval');
  t('pr1_reading_raw');
  t('pr1_reading_score');
  t('pr1_reading_scoremax');

  return $field_instances;
}
