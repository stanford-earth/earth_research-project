<?php
/**
 * @file
 * research_project.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function research_project_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|research_project|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'research_project';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|research_project|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function research_project_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_project|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_project';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'postcard_left';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'image' => array(
        0 => 'field_se_rp_image',
      ),
      'text' => array(
        0 => 'field_se_rp_lead',
        1 => 'body',
        2 => 'field__se_rb_publications',
      ),
    ),
    'fields' => array(
      'field_se_rp_image' => 'image',
      'field_se_rp_lead' => 'text',
      'body' => 'text',
      'field__se_rb_publications' => 'text',
    ),
  );
  $export['node|research_project|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_project|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_project';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_se_rp_image',
        2 => 'field_se_rp_lead',
        3 => 'body',
        4 => 'field__se_rb_publications',
      ),
      'right' => array(
        5 => 'field_se_images',
      ),
      'hidden' => array(
        6 => 'redirect',
        7 => 'path',
        8 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_se_rp_image' => 'left',
      'field_se_rp_lead' => 'left',
      'body' => 'left',
      'field__se_rb_publications' => 'left',
      'field_se_images' => 'right',
      'redirect' => 'hidden',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
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
  );
  $export['node|research_project|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_project|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_project';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'postcard_left';
  $ds_layout->settings = array(
    'regions' => array(
      'image' => array(
        0 => 'field_se_rp_image',
      ),
      'text' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_se_rp_image' => 'image',
      'title' => 'text',
      'body' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|research_project|teaser'] = $ds_layout;

  return $export;
}
