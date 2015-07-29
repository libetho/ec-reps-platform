<?php
/**
 * @file
 * nexteuropa_migrate_test.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nexteuropa_migrate_test_taxonomy_default_vocabularies() {
  return array(
    'migrate_test' => array(
      'name' => 'Migrate test',
      'machine_name' => 'migrate_test',
      'description' => 'Migrate test vocabulary.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
