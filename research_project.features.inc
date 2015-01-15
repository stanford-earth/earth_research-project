<?php
/**
 * @file
 * research_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function research_project_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function research_project_node_info() {
  $items = array(
    'research_project' => array(
      'name' => t('Research Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
