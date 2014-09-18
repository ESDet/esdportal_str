<?php
/**
 * @file
 * esdportal_str.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function esdportal_str_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_current_edit|node|school_profile|form';
  $field_group->group_name = 'group_current_edit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_new';
  $field_group->data = array(
    'label' => '2013 Scorecard Fields (being removed)',
    'weight' => '6',
    'children' => array(
      0 => 'field_after_school_transportatio',
      1 => 'field_character_development',
      2 => 'field_college_counseling',
      3 => 'field_counselor_student_ratio',
      4 => 'field_discipline_programs',
      5 => 'field_early_child_center_relatio',
      6 => 'field_early_childhood_transition',
      7 => 'field_english_language_learners',
      8 => 'field_family_supports',
      9 => 'field_in_school_programs',
      10 => 'field_organized_sports',
      11 => 'field_parent_supports',
      12 => 'field_person_responsible',
      13 => 'field_special_needs',
      14 => 'field_special_tracks',
      15 => 'field_student_development_progra',
      16 => 'field_student_leadership_opportu',
      17 => 'field_transportation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '2013 Scorecard Fields (being removed)',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_current_edit|node|school_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new_edit|node|school_profile|form';
  $field_group->group_name = 'group_new_edit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_new';
  $field_group->data = array(
    'label' => '*New - Edit 2014 School Profile',
    'weight' => '5',
    'children' => array(
      0 => 'field_ap_classes',
      1 => 'field_dual_enrollment',
      2 => 'field_dual_enrollment_institutio',
      3 => 'field_early_childhood_programs',
      4 => 'field_academic_focus',
      5 => 'field_instructional_model',
      6 => 'field_transportation_options',
      7 => 'field_staff_resources',
      8 => 'field_special_ed_level',
      9 => 'field_special_ed_programs',
      10 => 'field_boys_sports',
      11 => 'field_girls_sports',
      12 => 'field_ell_level',
      13 => 'field_ell_languages',
      14 => 'field_facilities',
      15 => 'field_dress_code',
      16 => 'field_schedule',
      17 => 'field_college_prep',
      18 => 'field_skills_training',
      19 => 'field_before_after_care',
      20 => 'field_bullying_policy',
      21 => 'field_immersion',
      22 => 'field_extra_learning_resources',
      23 => 'field_foreign_language',
      24 => 'field_parent_involvement',
      25 => 'field_application_process',
      26 => 'field_admissions_url',
      27 => 'field_application_fee',
      28 => 'field_application_fee_amount',
      29 => 'field_applications_received',
      30 => 'field_students_accepted',
      31 => 'field_student_clubs',
      32 => 'field_student_clubs_dance',
      33 => 'field_student_clubs_language',
      34 => 'field_student_clubs_other',
      35 => 'field_feeder_school',
      36 => 'field_destination_school',
      37 => 'field_arts_media',
      38 => 'field_arts_music',
      39 => 'field_arts_performing_written',
      40 => 'field_arts_visual',
      41 => 'field_message',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '*New - Edit 2014 School Profile',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_new_edit|node|school_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new|node|school_profile|form';
  $field_group->group_name = 'group_new';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'School Profiles',
    'weight' => '9',
    'children' => array(
      0 => 'group_new_edit',
      1 => 'group_current_edit',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'School Profiles',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_new|node|school_profile|form'] = $field_group;

  return $export;
}
