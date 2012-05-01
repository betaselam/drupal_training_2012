<?php
/**
 * @file
 * dtrainingfeatures.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dtrainingfeatures_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'yrobi.cgifederal.com';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'procrastinators unite, tomorrow!!! or may be never';
  $export['site_slogan'] = $strongarm;

  return $export;
}
