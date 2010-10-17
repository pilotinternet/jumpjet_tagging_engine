<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function jumpjet_tagging_engine_taxonomy_default_vocabularies() {
  return array(
    'jumpjet_tags' => array(
      'name' => 'Tags',
      'description' => 'Tags to categorise content.',
      'help' => 'Enter tags to categorise this content',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_jumpjet_tags',
      'weight' => '0',
      'nodes' => array(
        'jumpjet_sitepage' => 'jumpjet_sitepage',
      ),
    ),
  );
}
