<?php
/**
 * @file
 * gsb_feature_seed_coach_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_seed_coach_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function gsb_feature_seed_coach_ct_image_default_styles() {
  $styles = array();

  // Exported image style: 570x570.
  $styles['570x570'] = array(
    'label' => '570x570',
    'effects' => array(
      19 => array(
        'name' => 'kraken_optimize',
        'data' => array(),
        'weight' => 2,
      ),
      20 => array(
        'name' => 'bypass_image_toolkit',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_seed_coach_ct_node_info() {
  $items = array(
    'seed_coach' => array(
      'name' => t('Seed Coach'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('FIrst Name - Last Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
