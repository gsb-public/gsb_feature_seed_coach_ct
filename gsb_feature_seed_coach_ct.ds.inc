<?php
/**
 * @file
 * gsb_feature_seed_coach_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_seed_coach_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|seed_coach|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'seed_coach';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_full_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h1',
          'ow-cl' => 'title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|seed_coach|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_seed_coach_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|seed_coach|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'seed_coach';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_single_public',
      ),
      'right' => array(
        1 => 'field_full_name',
        2 => 'field_seed_region',
        3 => 'field_body',
      ),
    ),
    'fields' => array(
      'field_image_single_public' => 'left',
      'field_full_name' => 'right',
      'field_seed_region' => 'right',
      'field_body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|seed_coach|default'] = $ds_layout;

  return $export;
}
