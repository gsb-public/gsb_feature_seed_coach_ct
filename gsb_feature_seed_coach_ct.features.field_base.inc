<?php
/**
 * @file
 * gsb_feature_seed_coach_ct.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gsb_feature_seed_coach_ct_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_full_name'.
  $field_bases['field_full_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_full_name',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$field_a = field_get_items($entity_type, $entity, \'field_first_name\');
$field_b = field_get_items($entity_type, $entity, \'field_last_name\');
$entity_field[0][\'value\'] = $field_a[0][\'value\'] . " " . $field_b[0][\'value\'];',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 128,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  return $field_bases;
}
