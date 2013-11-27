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
  $field_group->identifier = 'group_current|node|school_profile|form';
  $field_group->group_name = 'group_current';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_full';
  $field_group->data = array(
    'label' => 'Current Scorecard Profile',
    'weight' => '2',
    'children' => array(
      0 => 'field_after_school_transportatio',
      1 => 'field_ap_classes',
      2 => 'field_character_development',
      3 => 'field_college_counseling',
      4 => 'field_counselor_student_ratio',
      5 => 'field_discipline_programs',
      6 => 'field_dual_enrollment',
      7 => 'field_dual_enrollment_institutio',
      8 => 'field_early_child_center_relatio',
      9 => 'field_early_childhood_programs',
      10 => 'field_early_childhood_transition',
      11 => 'field_email',
      12 => 'field_english_language_learners',
      13 => 'field_family_supports',
      14 => 'field_grades_served',
      15 => 'field_in_school_programs',
      16 => 'field_organized_sports',
      17 => 'field_parent_supports',
      18 => 'field_person_responsible',
      19 => 'field_school_contact_first_name',
      20 => 'field_school_contact_last_name',
      21 => 'field_special_needs',
      22 => 'field_special_tracks',
      23 => 'field_student_development_progra',
      24 => 'field_student_leadership_opportu',
      25 => 'field_transportation',
      26 => 'field_photos',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_current|node|school_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_full|node|school_profile|form';
  $field_group->group_name = 'group_full';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Full Profile',
    'weight' => '1',
    'children' => array(
      0 => 'group_current',
      1 => 'group_new',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-full field-group-accordion',
      ),
    ),
  );
  $export['group_full|node|school_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new|node|school_profile|form';
  $field_group->group_name = 'group_new';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_full';
  $field_group->data = array(
    'label' => 'New Profile Fields',
    'weight' => '3',
    'children' => array(
      0 => 'field_academic_focus',
      1 => 'field_instructional_model',
      2 => 'field_transportation_options',
      3 => 'field_staff_resources',
      4 => 'field_special_ed_level',
      5 => 'field_special_ed_programs',
      6 => 'field_boys_sports',
      7 => 'field_girls_sports',
      8 => 'field_ell_level',
      9 => 'field_ell_languages',
      10 => 'field_facilities',
      11 => 'field_dress_code',
      12 => 'field_schedule',
      13 => 'field_college_prep',
      14 => 'field_skills_training',
      15 => 'field_before_after_care',
      16 => 'field_bullying_policy',
      17 => 'field_immersion',
      18 => 'field_extra_learning_resources',
      19 => 'field_foreign_language',
      20 => 'field_facebook_url',
      21 => 'field_school_url',
      22 => 'field_parent_involvement',
      23 => 'field_application_process',
      24 => 'field_admissions_url',
      25 => 'field_application_fee',
      26 => 'field_application_fee_amount',
      27 => 'field_applications_received',
      28 => 'field_students_accepted',
      29 => 'field_student_clubs',
      30 => 'field_student_clubs_dance',
      31 => 'field_student_clubs_language',
      32 => 'field_student_clubs_other',
      33 => 'field_feeder_school',
      34 => 'field_destination_school',
      35 => 'field_arts_media',
      36 => 'field_arts_music',
      37 => 'field_arts_performing_written',
      38 => 'field_arts_visual',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_new|node|school_profile|form'] = $field_group;

  return $export;
}
