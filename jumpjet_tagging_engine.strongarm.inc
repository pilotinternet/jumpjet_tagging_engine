<?php

/**
 * Implementation of hook_strongarm().
 */
function jumpjet_tagging_engine_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagging_inject_1';
  $strongarm->value = 1;

  $export['tagging_inject_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagging_show_max_suggestion';
  $strongarm->value = '20';

  $export['tagging_show_max_suggestion'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagging_show_suggestion_example';
  $strongarm->value = 1;

  $export['tagging_show_suggestion_example'] = $strongarm;
  return $export;
}
