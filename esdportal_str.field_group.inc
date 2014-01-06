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
    'label' => 'Edit Profile Diplayed on 2013 Scorecard',
    'weight' => '6',
    'children' => array(
      0 => 'field_after_school_transportatio',
      1 => 'field_ap_classes',
      2 => 'field_character_development',
      3 => 'field_college_counseling',
      4 => 'field_counselor_student_ratio',
      5 => 'field_discipline_programs',
      6 => 'field_early_child_center_relatio',
      7 => 'field_early_childhood_transition',
      8 => 'field_english_language_learners',
      9 => 'field_in_school_programs',
      10 => 'field_organized_sports',
      11 => 'field_person_responsible',
      12 => 'field_special_needs',
      13 => 'field_transportation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Edit Profile Diplayed on 2013 Scorecard',
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
      0 => 'field_dual_enrollment',
      1 => 'field_dual_enrollment_institutio',
      2 => 'field_early_childhood_programs',
      3 => 'field_family_supports',
      4 => 'field_parent_supports',
      5 => 'field_special_tracks',
      6 => 'field_student_development_progra',
      7 => 'field_student_leadership_opportu',
      8 => 'field_academic_focus',
      9 => 'field_instructional_model',
      10 => 'field_transportation_options',
      11 => 'field_staff_resources',
      12 => 'field_special_ed_level',
      13 => 'field_special_ed_programs',
      14 => 'field_boys_sports',
      15 => 'field_girls_sports',
      16 => 'field_ell_level',
      17 => 'field_ell_languages',
      18 => 'field_facilities',
      19 => 'field_dress_code',
      20 => 'field_schedule',
      21 => 'field_college_prep',
      22 => 'field_skills_training',
      23 => 'field_before_after_care',
      24 => 'field_bullying_policy',
      25 => 'field_immersion',
      26 => 'field_extra_learning_resources',
      27 => 'field_foreign_language',
      28 => 'field_facebook_url',
      29 => 'field_school_url',
      30 => 'field_parent_involvement',
      31 => 'field_application_process',
      32 => 'field_admissions_url',
      33 => 'field_application_fee',
      34 => 'field_application_fee_amount',
      35 => 'field_applications_received',
      36 => 'field_students_accepted',
      37 => 'field_student_clubs',
      38 => 'field_student_clubs_dance',
      39 => 'field_student_clubs_language',
      40 => 'field_student_clubs_other',
      41 => 'field_feeder_school',
      42 => 'field_destination_school',
      43 => 'field_arts_media',
      44 => 'field_arts_music',
      45 => 'field_arts_performing_written',
      46 => 'field_arts_visual',
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
    'weight' => '7',
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
